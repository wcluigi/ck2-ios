#include "funcs.h"

void F_00561190(CPU *c) {
  NATIVE_HOOK(0x561190u) REGS; LOADALL;
L_00561190:;
  /* 00561190 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561191 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561193 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561194 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561195 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00561198 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561199 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0056119c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056119e mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005611a0 jle 0x5611b3 */ if ((ZF_|LT_)) goto L_005611b3;
L_005611a2:;
  /* 005611a2 push 0x648cf4 */ { u32 v_ = 0x648cf4u; esp -= 4; M32(esp) = v_; }
  /* 005611a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005611a8 call 0x5feb96 */ esp -= 4; M32(esp) = 0x5611adu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x5611a8u); RETCHK(0x5611adu, 0x5611a8u); LOADALL;
  /* 005611ad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005611b0 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005611b1 jne 0x5611a2 */ if (!ZF_) goto L_005611a2;
L_005611b3:;
  /* 005611b3 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 005611b6 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005611b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005611ba push 0x656a54 */ { u32 v_ = 0x656a54u; esp -= 4; M32(esp) = v_; }
  /* 005611bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005611c0 call 0x5feb96 */ esp -= 4; M32(esp) = 0x5611c5u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x5611c0u); RETCHK(0x5611c5u, 0x5611c0u); LOADALL;
  /* 005611c5 mov edi, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); edi = (u32)(M32(m_)); }
  /* 005611c8 lea eax, [ebx + 0x2c] */ eax = (u32)((u32)(ebx + 0x2cu));
  /* 005611cb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005611ce cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005611d0 je 0x561207 */ if (ZF_) goto L_00561207;
  /* 005611d2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005611d4 je 0x561207 */ if (ZF_) goto L_00561207;
  /* 005611d6 jmp 0x5611e0 */ goto L_005611e0;
L_005611e0:;
  /* 005611e0 push 0x64343c */ { u32 v_ = 0x64343cu; esp -= 4; M32(esp) = v_; }
  /* 005611e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005611e6 call 0x5feb96 */ esp -= 4; M32(esp) = 0x5611ebu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x5611e6u); RETCHK(0x5611ebu, 0x5611e6u); LOADALL;
  /* 005611eb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005611ee mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005611f0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005611f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005611f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005611f5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005611f7 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5611fau; SAVEALL; call_ind(c, t_); RETCHK(0x5611fau, 0x5611f7u); LOADALL; }
  /* 005611fa mov eax, edi */ { eax = (u32)(edi); }
  /* 005611fc call 0x561720 */ esp -= 4; M32(esp) = 0x561201u; SAVEALL; F_00561720(c); ABI_CHECK(0x561720u, 0x5611fcu); RETCHK(0x561201u, 0x5611fcu); LOADALL;
  /* 00561201 mov edi, eax */ { edi = (u32)(eax); }
  /* 00561203 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561205 jne 0x5611e0 */ if (!ZF_) goto L_005611e0;
L_00561207:;
  /* 00561207 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0056120a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056120c jne 0x561223 */ if (!ZF_) goto L_00561223;
  /* 0056120e push 0x656a50 */ { u32 v_ = 0x656a50u; esp -= 4; M32(esp) = v_; }
  /* 00561213 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561214 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561219u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561214u); RETCHK(0x561219u, 0x561214u); LOADALL;
  /* 00561219 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056121c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056121d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056121e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056121f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561220 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00561223:;
  /* 00561223 cmp eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561226 jne 0x561252 */ if (!ZF_) goto L_00561252;
  /* 00561228 mov ecx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0056122b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056122d call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x561230u; SAVEALL; call_ind(c, t_); RETCHK(0x561230u, 0x56122du); LOADALL; }
  /* 00561230 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561232 je 0x561252 */ if (ZF_) goto L_00561252;
  /* 00561234 push 0x656a4c */ { u32 v_ = 0x656a4cu; esp -= 4; M32(esp) = v_; }
  /* 00561239 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056123a call 0x5feb96 */ esp -= 4; M32(esp) = 0x56123fu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x56123au); RETCHK(0x56123fu, 0x56123au); LOADALL;
  /* 0056123f mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00561242 mov ecx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00561245 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00561247 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056124a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056124b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056124c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056124d call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x561250u; SAVEALL; call_ind(c, t_); RETCHK(0x561250u, 0x56124du); LOADALL; }
  /* 00561250 jmp 0x5612c1 */ goto L_005612c1;
L_00561252:;
  /* 00561252 push 0x656a4c */ { u32 v_ = 0x656a4cu; esp -= 4; M32(esp) = v_; }
  /* 00561257 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561258 call 0x5feb96 */ esp -= 4; M32(esp) = 0x56125du; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561258u); RETCHK(0x56125du, 0x561258u); LOADALL;
  /* 0056125d mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 00561260 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561263 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561265 je 0x561294 */ if (ZF_) goto L_00561294;
L_00561267:;
  /* 00561267 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00561269 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056126b call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56126eu; SAVEALL; call_ind(c, t_); RETCHK(0x56126eu, 0x56126bu); LOADALL; }
  /* 0056126e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561270 jne 0x561280 */ if (!ZF_) goto L_00561280;
  /* 00561272 push 0x6437ec */ { u32 v_ = 0x6437ecu; esp -= 4; M32(esp) = v_; }
  /* 00561277 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561278 call 0x5feb96 */ esp -= 4; M32(esp) = 0x56127du; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561278u); RETCHK(0x56127du, 0x561278u); LOADALL;
  /* 0056127d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561280:;
  /* 00561280 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00561283 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00561285 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00561286 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561287 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561288 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056128a call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56128du; SAVEALL; call_ind(c, t_); RETCHK(0x56128du, 0x56128au); LOADALL; }
  /* 0056128d mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 00561290 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561292 jne 0x561267 */ if (!ZF_) goto L_00561267;
L_00561294:;
  /* 00561294 push 0x6437ec */ { u32 v_ = 0x6437ecu; esp -= 4; M32(esp) = v_; }
  /* 00561299 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056129a call 0x5feb96 */ esp -= 4; M32(esp) = 0x56129fu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x56129au); RETCHK(0x56129fu, 0x56129au); LOADALL;
  /* 0056129f mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005612a2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005612a5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005612a7 jle 0x5612c1 */ if ((ZF_|LT_)) goto L_005612c1;
  /* 005612a9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005612b0:;
  /* 005612b0 push 0x648cf4 */ { u32 v_ = 0x648cf4u; esp -= 4; M32(esp) = v_; }
  /* 005612b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005612b6 call 0x5feb96 */ esp -= 4; M32(esp) = 0x5612bbu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x5612b6u); RETCHK(0x5612bbu, 0x5612b6u); LOADALL;
  /* 005612bb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005612be dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005612bf jne 0x5612b0 */ if (!ZF_) goto L_005612b0;
L_005612c1:;
  /* 005612c1 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 005612c4 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005612c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005612c8 push 0x656a44 */ { u32 v_ = 0x656a44u; esp -= 4; M32(esp) = v_; }
  /* 005612cd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005612ce call 0x5feb96 */ esp -= 4; M32(esp) = 0x5612d3u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x5612ceu); RETCHK(0x5612d3u, 0x5612ceu); LOADALL;
  /* 005612d3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005612d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005612d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005612d8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005612d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005612da ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005612e0(CPU *c) {
  NATIVE_HOOK(0x5612e0u) REGS; LOADALL;
L_005612e0:;
  /* 005612e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005612e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005612e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005612e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005612e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005612e6 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005612e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005612ea mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005612ec push 0x656a40 */ { u32 v_ = 0x656a40u; esp -= 4; M32(esp) = v_; }
  /* 005612f1 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005612f6 mov eax, esi */ { eax = (u32)(esi); }
  /* 005612f8 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005612fb call 0x5603f0 */ esp -= 4; M32(esp) = 0x561300u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5612fbu); RETCHK(0x561300u, 0x5612fbu); LOADALL;
  /* 00561300 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561303 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00561305 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 00561308 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561309 mov eax, esi */ { eax = (u32)(esi); }
  /* 0056130b call 0x5603f0 */ esp -= 4; M32(esp) = 0x561310u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56130bu); RETCHK(0x561310u, 0x56130bu); LOADALL;
  /* 00561310 mov ecx, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 00561313 lea eax, [ebx + 0x2c] */ eax = (u32)((u32)(ebx + 0x2cu));
  /* 00561316 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561318 je 0x561349 */ if (ZF_) goto L_00561349;
  /* 0056131a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056131c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056131e je 0x561346 */ if (ZF_) goto L_00561346;
L_00561320:;
  /* 00561320 push 0x64343c */ { u32 v_ = 0x64343cu; esp -= 4; M32(esp) = v_; }
  /* 00561325 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 0056132a mov eax, esi */ { eax = (u32)(esi); }
  /* 0056132c call 0x5603f0 */ esp -= 4; M32(esp) = 0x561331u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56132cu); RETCHK(0x561331u, 0x56132cu); LOADALL;
  /* 00561331 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00561333 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561334 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00561336 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x561339u; SAVEALL; call_ind(c, t_); RETCHK(0x561339u, 0x561336u); LOADALL; }
  /* 00561339 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056133b call 0x561720 */ esp -= 4; M32(esp) = 0x561340u; SAVEALL; F_00561720(c); ABI_CHECK(0x561720u, 0x56133bu); RETCHK(0x561340u, 0x56133bu); LOADALL;
  /* 00561340 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00561342 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561344 jne 0x561320 */ if (!ZF_) goto L_00561320;
L_00561346:;
  /* 00561346 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_00561349:;
  /* 00561349 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0056134c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056134e mov eax, esi */ { eax = (u32)(esi); }
  /* 00561350 je 0x5613b2 */ if (ZF_) goto L_005613b2;
  /* 00561352 push 0x656a4c */ { u32 v_ = 0x656a4cu; esp -= 4; M32(esp) = v_; }
  /* 00561357 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 0056135c call 0x5603f0 */ esp -= 4; M32(esp) = 0x561361u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56135cu); RETCHK(0x561361u, 0x56135cu); LOADALL;
  /* 00561361 mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 00561364 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561366 je 0x561377 */ if (ZF_) goto L_00561377;
L_00561368:;
  /* 00561368 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0056136a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056136b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056136d call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x561370u; SAVEALL; call_ind(c, t_); RETCHK(0x561370u, 0x56136du); LOADALL; }
  /* 00561370 mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 00561373 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561375 jne 0x561368 */ if (!ZF_) goto L_00561368;
L_00561377:;
  /* 00561377 push 0x656a3c */ { u32 v_ = 0x656a3cu; esp -= 4; M32(esp) = v_; }
  /* 0056137c mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 00561381 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561383 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561388u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561383u); RETCHK(0x561388u, 0x561383u); LOADALL;
  /* 00561388 mov ebx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ebx = (u32)(M32(m_)); }
  /* 0056138b mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 0056138d lea ecx, [ebx + 8] */ ecx = (u32)((u32)(ebx + 0x8u));
  /* 00561390 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561391 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561393 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561398u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561393u); RETCHK(0x561398u, 0x561393u); LOADALL;
  /* 00561398 push 0x656a4c */ { u32 v_ = 0x656a4cu; esp -= 4; M32(esp) = v_; }
  /* 0056139d mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005613a2 mov eax, esi */ { eax = (u32)(esi); }
  /* 005613a4 call 0x5603f0 */ esp -= 4; M32(esp) = 0x5613a9u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5613a4u); RETCHK(0x5613a9u, 0x5613a4u); LOADALL;
  /* 005613a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005613aa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005613ab pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005613ac mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005613ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005613af ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005613b2:;
  /* 005613b2 push 0x656a50 */ { u32 v_ = 0x656a50u; esp -= 4; M32(esp) = v_; }
  /* 005613b7 mov edi, 3 */ { edi = (u32)(0x3u); }
  /* 005613bc call 0x5603f0 */ esp -= 4; M32(esp) = 0x5613c1u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5613bcu); RETCHK(0x5613c1u, 0x5613bcu); LOADALL;
  /* 005613c1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005613c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005613c3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005613c4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005613c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005613c7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005613d0(CPU *c) {
  NATIVE_HOOK(0x5613d0u) REGS; LOADALL;
L_005613d0:;
  /* 005613d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005613d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005613d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005613d3 mov esi, eax */ { esi = (u32)(eax); }
  /* 005613d5 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005613d7 call 0x560b10 */ esp -= 4; M32(esp) = 0x5613dcu; SAVEALL; F_00560b10(c); ABI_CHECK(0x560b10u, 0x5613d7u); RETCHK(0x5613dcu, 0x5613d7u); LOADALL;
  /* 005613dc mov ebx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ebx = (u32)(M32(m_)); }
  /* 005613df lea eax, [edi + 0x2c] */ eax = (u32)((u32)(edi + 0x2cu));
  /* 005613e2 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005613e4 je 0x56140f */ if (ZF_) goto L_0056140f;
  /* 005613e6 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005613e8 je 0x56140f */ if (ZF_) goto L_0056140f;
  /* 005613ea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005613f0:;
  /* 005613f0 mov ecx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005613f3 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 005613f6 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005613f9 add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005613fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005613fd call 0x561090 */ esp -= 4; M32(esp) = 0x561402u; SAVEALL; F_00561090(c); ABI_CHECK(0x561090u, 0x5613fdu); RETCHK(0x561402u, 0x5613fdu); LOADALL;
  /* 00561402 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00561404 call 0x561720 */ esp -= 4; M32(esp) = 0x561409u; SAVEALL; F_00561720(c); ABI_CHECK(0x561720u, 0x561404u); RETCHK(0x561409u, 0x561404u); LOADALL;
  /* 00561409 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0056140b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056140d jne 0x5613f0 */ if (!ZF_) goto L_005613f0;
L_0056140f:;
  /* 0056140f mov edi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edi = (u32)(M32(m_)); }
  /* 00561412 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561414 je 0x56142b */ if (ZF_) goto L_0056142b;
L_00561416:;
  /* 00561416 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00561418 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056141a call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56141du; SAVEALL; call_ind(c, t_); RETCHK(0x56141du, 0x56141au); LOADALL; }
  /* 0056141d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0056141f call 0x560b70 */ esp -= 4; M32(esp) = 0x561424u; SAVEALL; F_00560b70(c); ABI_CHECK(0x560b70u, 0x56141fu); RETCHK(0x561424u, 0x56141fu); LOADALL;
  /* 00561424 mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 00561427 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561429 jne 0x561416 */ if (!ZF_) goto L_00561416;
L_0056142b:;
  /* 0056142b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056142c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056142d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056142e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561430(CPU *c) {
  NATIVE_HOOK(0x561430u) REGS; LOADALL;
L_00561430:;
  /* 00561430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561431 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561433 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00561435 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0056143a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00561440 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561441 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00561448 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561449 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056144a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056144b push 0x50 */ { u32 v_ = 0x50u; esp -= 4; M32(esp) = v_; }
  /* 0056144d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056144f call 0x5fe934 */ esp -= 4; M32(esp) = 0x561454u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x56144fu); RETCHK(0x561454u, 0x56144fu); LOADALL;
  /* 00561454 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561457 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0056145a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0056145c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056145e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00561461 je 0x561473 */ if (ZF_) goto L_00561473;
  /* 00561463 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561464 mov edi, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); edi = (u32)(M32(m_)); }
  /* 00561467 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056146a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056146b call 0x560d70 */ esp -= 4; M32(esp) = 0x561470u; SAVEALL; F_00560d70(c); ABI_CHECK(0x560d70u, 0x56146bu); RETCHK(0x561470u, 0x56146bu); LOADALL;
  /* 00561470 mov esi, eax */ { esi = (u32)(eax); }
  /* 00561472 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00561473:;
  /* 00561473 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561475 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0056147c jne 0x561490 */ if (!ZF_) goto L_00561490;
  /* 0056147e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056147f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00561481 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561482 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00561485 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056148c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056148e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056148f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00561490:;
  /* 00561490 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561492 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00561494 call 0x5613d0 */ esp -= 4; M32(esp) = 0x561499u; SAVEALL; F_005613d0(c); ABI_CHECK(0x5613d0u, 0x561494u); RETCHK(0x561499u, 0x561494u); LOADALL;
  /* 00561499 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056149c mov eax, esi */ { eax = (u32)(esi); }
  /* 0056149e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056149f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005614a0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005614a7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005614a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005614aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005614b0(CPU *c) {
  NATIVE_HOOK(0x5614b0u) REGS; LOADALL;
L_005614b0:;
  /* 005614b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005614b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005614b3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005614b9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005614bb push 0x61b7c3 */ { u32 v_ = 0x61b7c3u; esp -= 4; M32(esp) = v_; }
  /* 005614c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005614c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005614c8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005614c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005614ca mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005614cd xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005614cf mov eax, esi */ { eax = (u32)(esi); }
  /* 005614d1 call 0x560a40 */ esp -= 4; M32(esp) = 0x5614d6u; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x5614d1u); RETCHK(0x5614d6u, 0x5614d1u); LOADALL;
  /* 005614d6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005614d8 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005614db lea ebx, [esi + 0x34] */ ebx = (u32)((u32)(esi + 0x34u));
  /* 005614de mov dword ptr [esi], 0x643d40 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x643d40u); }
  /* 005614e4 mov dword ptr [ebx], 0x7a70b8 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x7a70b8u); }
  /* 005614ea mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005614ee or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005614f1 mov dword ptr [esi + 0x40], ecx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 005614f4 mov dword ptr [esi + 0x3c], ecx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 005614f7 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005614f9 mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 005614fe mov dword ptr [esi + 0x38], 4 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x4u); }
  /* 00561505 mov byte ptr [esi + 0x44], al */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00561508 mov byte ptr [esi + 0x2c], al */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0056150b mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0056150e call 0x560320 */ esp -= 4; M32(esp) = 0x561513u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x56150eu); RETCHK(0x561513u, 0x56150eu); LOADALL;
  /* 00561513 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00561516 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00561518 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 0056151b mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 0056151e mov eax, esi */ { eax = (u32)(esi); }
  /* 00561520 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561521 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00561528 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561529 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056152b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056152c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561530(CPU *c) {
  NATIVE_HOOK(0x561530u) REGS; LOADALL;
L_00561530:;
  /* 00561530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561533 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00561539 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056153b push 0x61b7c3 */ { u32 v_ = 0x61b7c3u; esp -= 4; M32(esp) = v_; }
  /* 00561540 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561541 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00561548 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561549 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056154a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056154d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056154e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00561550 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561552 call 0x560a40 */ esp -= 4; M32(esp) = 0x561557u; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x561552u); RETCHK(0x561557u, 0x561552u); LOADALL;
  /* 00561557 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0056155a lea edi, [esi + 0x34] */ edi = (u32)((u32)(esi + 0x34u));
  /* 0056155d mov dword ptr [esi], 0x643d40 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x643d40u); }
  /* 00561563 mov dword ptr [edi], 0x7a70b8 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x7a70b8u); }
  /* 00561569 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0056156d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00561570 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 00561573 mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 00561576 mov byte ptr [esi + 0x44], dl */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00561579 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056157c mov eax, edx */ { eax = (u32)(edx); }
  /* 0056157e mov dword ptr [esi + 0x38], 4 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x4u); }
  /* 00561585 lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
L_00561588:;
  /* 00561588 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056158a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056158b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056158d jne 0x561588 */ if (!ZF_) goto L_00561588;
  /* 0056158f sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00561591 lea ebx, [esi + 0x20] */ ebx = (u32)((u32)(esi + 0x20u));
  /* 00561594 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00561596 call 0x560320 */ esp -= 4; M32(esp) = 0x56159bu; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x561596u); RETCHK(0x56159bu, 0x561596u); LOADALL;
  /* 0056159b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056159d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056159f mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 005615a4 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 005615a6 mov byte ptr [esi + 0x2c], al */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005615a9 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 005615ac call 0x560320 */ esp -= 4; M32(esp) = 0x5615b1u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x5615acu); RETCHK(0x5615b1u, 0x5615acu); LOADALL;
  /* 005615b1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005615b4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005615b6 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 005615b9 mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 005615bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005615bd mov eax, esi */ { eax = (u32)(esi); }
  /* 005615bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005615c0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005615c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005615c8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005615ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005615cb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005615d0(CPU *c) {
  NATIVE_HOOK(0x5615d0u) REGS; LOADALL;
L_005615d0:;
  /* 005615d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005615d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005615d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005615d3 mov esi, eax */ { esi = (u32)(eax); }
  /* 005615d5 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005615d7 call 0x560b10 */ esp -= 4; M32(esp) = 0x5615dcu; SAVEALL; F_00560b10(c); ABI_CHECK(0x560b10u, 0x5615d7u); RETCHK(0x5615dcu, 0x5615d7u); LOADALL;
  /* 005615dc mov al, byte ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005615df mov byte ptr [esi + 0x2c], al */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005615e2 mov edx, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); edx = (u32)(M32(m_)); }
  /* 005615e5 add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005615e8 mov eax, edx */ { eax = (u32)(edx); }
  /* 005615ea lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 005615ed lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_005615f0:;
  /* 005615f0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005615f2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005615f3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005615f5 jne 0x5615f0 */ if (!ZF_) goto L_005615f0;
  /* 005615f7 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005615f9 lea ebx, [esi + 0x34] */ ebx = (u32)((u32)(esi + 0x34u));
  /* 005615fc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005615fe call 0x560320 */ esp -= 4; M32(esp) = 0x561603u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x5615feu); RETCHK(0x561603u, 0x5615feu); LOADALL;
  /* 00561603 mov edi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edi = (u32)(M32(m_)); }
  /* 00561606 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561608 je 0x561625 */ if (ZF_) goto L_00561625;
  /* 0056160a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00561610:;
  /* 00561610 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00561612 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00561614 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x561617u; SAVEALL; call_ind(c, t_); RETCHK(0x561617u, 0x561614u); LOADALL; }
  /* 00561617 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00561619 call 0x560b70 */ esp -= 4; M32(esp) = 0x56161eu; SAVEALL; F_00560b70(c); ABI_CHECK(0x560b70u, 0x561619u); RETCHK(0x56161eu, 0x561619u); LOADALL;
  /* 0056161e mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 00561621 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561623 jne 0x561610 */ if (!ZF_) goto L_00561610;
L_00561625:;
  /* 00561625 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561626 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561627 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561628 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561630(CPU *c) {
  NATIVE_HOOK(0x561630u) REGS; LOADALL;
L_00561630:;
  /* 00561630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561633 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00561635 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0056163a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00561640 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561641 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00561648 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561649 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056164a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056164b push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 0056164d mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056164f call 0x5fe934 */ esp -= 4; M32(esp) = 0x561654u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x56164fu); RETCHK(0x561654u, 0x56164fu); LOADALL;
  /* 00561654 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561657 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0056165a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056165c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00561663 je 0x56166f */ if (ZF_) goto L_0056166f;
  /* 00561665 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561666 call 0x5614b0 */ esp -= 4; M32(esp) = 0x56166bu; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x561666u); RETCHK(0x56166bu, 0x561666u); LOADALL;
  /* 0056166b mov esi, eax */ { esi = (u32)(eax); }
  /* 0056166d jmp 0x561671 */ goto L_00561671;
L_0056166f:;
  /* 0056166f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00561671:;
  /* 00561671 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561673 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0056167a jne 0x56168e */ if (!ZF_) goto L_0056168e;
  /* 0056167c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056167d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056167f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561680 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00561683 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056168a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056168c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056168d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056168e:;
  /* 0056168e mov eax, esi */ { eax = (u32)(esi); }
  /* 00561690 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00561692 call 0x5615d0 */ esp -= 4; M32(esp) = 0x561697u; SAVEALL; F_005615d0(c); ABI_CHECK(0x5615d0u, 0x561692u); RETCHK(0x561697u, 0x561692u); LOADALL;
  /* 00561697 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056169a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056169b mov eax, esi */ { eax = (u32)(esi); }
  /* 0056169d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056169e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005616a5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005616a7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005616a8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005616b0(CPU *c) {
  NATIVE_HOOK(0x5616b0u) REGS; LOADALL;
L_005616b0:;
  /* 005616b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005616b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005616b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005616b4 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 005616b7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005616b9 je 0x5616e3 */ if (ZF_) goto L_005616e3;
  /* 005616bb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005616bc mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005616bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005616c0 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_005616c3:;
  /* 005616c3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005616c5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005616c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005616c7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005616c9 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5616ccu; SAVEALL; call_ind(c, t_); RETCHK(0x5616ccu, 0x5616c9u); LOADALL; }
  /* 005616cc push 0x6437ec */ { u32 v_ = 0x6437ecu; esp -= 4; M32(esp) = v_; }
  /* 005616d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005616d2 call 0x5feb96 */ esp -= 4; M32(esp) = 0x5616d7u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x5616d2u); RETCHK(0x5616d7u, 0x5616d2u); LOADALL;
  /* 005616d7 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 005616da add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005616dd test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005616df jne 0x5616c3 */ if (!ZF_) goto L_005616c3;
  /* 005616e1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005616e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005616e3:;
  /* 005616e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005616e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005616e5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005616f0(CPU *c) {
  NATIVE_HOOK(0x5616f0u) REGS; LOADALL;
L_005616f0:;
  /* 005616f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005616f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005616f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005616f4 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 005616f7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005616f9 je 0x56171b */ if (ZF_) goto L_0056171b;
  /* 005616fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005616fc mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005616ff nop */ ;
L_00561700:;
  /* 00561700 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00561702 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561703 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00561705 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x561708u; SAVEALL; call_ind(c, t_); RETCHK(0x561708u, 0x561705u); LOADALL; }
  /* 00561708 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0056170a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0056170c call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56170fu; SAVEALL; call_ind(c, t_); RETCHK(0x56170fu, 0x56170cu); LOADALL; }
  /* 0056170f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561711 jne 0x56171a */ if (!ZF_) goto L_0056171a;
  /* 00561713 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 00561716 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561718 jne 0x561700 */ if (!ZF_) goto L_00561700;
L_0056171a:;
  /* 0056171a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0056171b:;
  /* 0056171b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056171c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056171d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561720(CPU *c) {
  NATIVE_HOOK(0x561720u) REGS; LOADALL;
L_00561720:;
  /* 00561720 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561723 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00561726 cmp dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561729 jne 0x561735 */ if (!ZF_) goto L_00561735;
  /* 0056172b mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0056172e cmp dword ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561731 jne 0x561735 */ if (!ZF_) goto L_00561735;
  /* 00561733 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00561735:;
  /* 00561735 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561740(CPU *c) {
  NATIVE_HOOK(0x561740u) REGS; LOADALL;
L_00561740:;
  /* 00561740 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561741 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561743 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00561745 push 0x61c430 */ { u32 v_ = 0x61c430u; esp -= 4; M32(esp) = v_; }
  /* 0056174a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00561750 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561751 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00561758 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056175b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056175c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056175d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056175f mov dword ptr [ebp - 0x14], 0x7a70b8 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x7a70b8u); }
  /* 00561766 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056176d mov dword ptr [ebp - 0x10], 0x7a70b8 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x7a70b8u); }
  /* 00561774 lea eax, [esi + 0x14] */ eax = (u32)((u32)(esi + 0x14u));
  /* 00561777 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561778 lea ebx, [ebp - 0x14] */ ebx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0056177b mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0056177f call 0x5608f0 */ esp -= 4; M32(esp) = 0x561784u; SAVEALL; F_005608f0(c); ABI_CHECK(0x5608f0u, 0x56177fu); RETCHK(0x561784u, 0x56177fu); LOADALL;
  /* 00561784 add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00561787 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561788 lea ebx, [ebp - 0x10] */ ebx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0056178b call 0x5608f0 */ esp -= 4; M32(esp) = 0x561790u; SAVEALL; F_005608f0(c); ABI_CHECK(0x5608f0u, 0x56178bu); RETCHK(0x561790u, 0x56178bu); LOADALL;
  /* 00561790 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00561792 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00561794 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561797 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561799 jbe 0x5617be */ if ((CF_|ZF_)) goto L_005617be;
  /* 0056179b mov cl, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056179e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005617a0 lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 005617a3 je 0x5617be */ if (ZF_) goto L_005617be;
L_005617a5:;
  /* 005617a5 cmp cl, 0x22 */ { u32 a_ = (ecx & 0xffu), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005617a8 je 0x5617b4 */ if (ZF_) goto L_005617b4;
  /* 005617aa mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005617ad inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005617ae test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005617b0 jne 0x5617a5 */ if (!ZF_) goto L_005617a5;
  /* 005617b2 jmp 0x5617be */ goto L_005617be;
L_005617b4:;
  /* 005617b4 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005617b6 sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005617b9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005617bc jne 0x5617d3 */ if (!ZF_) goto L_005617d3;
L_005617be:;
  /* 005617be mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 005617c1 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 005617c4 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 005617c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005617c8 lea edx, [ebx + 8] */ edx = (u32)((u32)(ebx + 0x8u));
  /* 005617cb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005617cc push 0x656a34 */ { u32 v_ = 0x656a34u; esp -= 4; M32(esp) = v_; }
  /* 005617d1 jmp 0x5617e6 */ goto L_005617e6;
L_005617d3:;
  /* 005617d3 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 005617d6 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 005617d9 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 005617dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005617dd lea edx, [ebx + 8] */ edx = (u32)((u32)(ebx + 0x8u));
  /* 005617e0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005617e1 push 0x656a2c */ { u32 v_ = 0x656a2cu; esp -= 4; M32(esp) = v_; }
L_005617e6:;
  /* 005617e6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005617e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005617ea call 0x5feb96 */ esp -= 4; M32(esp) = 0x5617efu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x5617eau); RETCHK(0x5617efu, 0x5617eau); LOADALL;
  /* 005617ef add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005617f2 cmp esi, 0x7a70b8 */ { u32 a_ = esi, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005617f8 je 0x561803 */ if (ZF_) goto L_00561803;
  /* 005617fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005617fb call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x561800u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5617fbu); RETCHK(0x561800u, 0x5617fbu); LOADALL;
  /* 00561800 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561803:;
  /* 00561803 cmp ebx, 0x7a70b8 */ { u32 a_ = ebx, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561809 je 0x561814 */ if (ZF_) goto L_00561814;
  /* 0056180b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056180c call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x561811u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x56180cu); RETCHK(0x561811u, 0x56180cu); LOADALL;
  /* 00561811 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561814:;
  /* 00561814 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00561817 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561818 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561819 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00561820 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00561822 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561823 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00561830(CPU *c) {
  NATIVE_HOOK(0x561830u) REGS; LOADALL;
L_00561830:;
  /* 00561830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561831 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561833 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561834 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561835 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 00561838 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056183b lea ebx, [ecx + 0x18] */ ebx = (u32)((u32)(ecx + 0x18u));
  /* 0056183e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056183f jbe 0x56185d */ if ((CF_|ZF_)) goto L_0056185d;
  /* 00561841 mov dl, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00561844 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00561846 lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 00561849 je 0x56185d */ if (ZF_) goto L_0056185d;
  /* 0056184b jmp 0x561850 */ goto L_00561850;
L_00561850:;
  /* 00561850 cmp dl, 0x22 */ { u32 a_ = (edx & 0xffu), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00561853 je 0x5618a7 */ if (ZF_) goto L_005618a7;
  /* 00561855 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00561858 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00561859 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056185b jne 0x561850 */ if (!ZF_) goto L_00561850;
L_0056185d:;
  /* 0056185d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00561860 add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00561863 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561864 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561865 call 0x560880 */ esp -= 4; M32(esp) = 0x56186au; SAVEALL; F_00560880(c); ABI_CHECK(0x560880u, 0x561865u); RETCHK(0x56186au, 0x561865u); LOADALL;
  /* 0056186a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056186d push 0x652f30 */ { u32 v_ = 0x652f30u; esp -= 4; M32(esp) = v_; }
  /* 00561872 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 00561877 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561879 call 0x5603f0 */ esp -= 4; M32(esp) = 0x56187eu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561879u); RETCHK(0x56187eu, 0x561879u); LOADALL;
  /* 0056187e push 0x656a28 */ { u32 v_ = 0x656a28u; esp -= 4; M32(esp) = v_; }
  /* 00561883 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561885 call 0x5603f0 */ esp -= 4; M32(esp) = 0x56188au; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561885u); RETCHK(0x56188au, 0x561885u); LOADALL;
  /* 0056188a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056188b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056188c call 0x560880 */ esp -= 4; M32(esp) = 0x561891u; SAVEALL; F_00560880(c); ABI_CHECK(0x560880u, 0x56188cu); RETCHK(0x561891u, 0x56188cu); LOADALL;
  /* 00561891 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561894 push 0x656a28 */ { u32 v_ = 0x656a28u; esp -= 4; M32(esp) = v_; }
  /* 00561899 mov eax, esi */ { eax = (u32)(esi); }
  /* 0056189b call 0x5603f0 */ esp -= 4; M32(esp) = 0x5618a0u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56189bu); RETCHK(0x5618a0u, 0x56189bu); LOADALL;
  /* 005618a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005618a1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005618a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005618a3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005618a4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005618a7:;
  /* 005618a7 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005618a9 sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005618ac cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005618af je 0x56185d */ if (ZF_) goto L_0056185d;
  /* 005618b1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005618b4 add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005618b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005618b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005618b9 call 0x560880 */ esp -= 4; M32(esp) = 0x5618beu; SAVEALL; F_00560880(c); ABI_CHECK(0x560880u, 0x5618b9u); RETCHK(0x5618beu, 0x5618b9u); LOADALL;
  /* 005618be add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005618c1 push 0x652f30 */ { u32 v_ = 0x652f30u; esp -= 4; M32(esp) = v_; }
  /* 005618c6 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005618cb mov eax, esi */ { eax = (u32)(esi); }
  /* 005618cd call 0x5603f0 */ esp -= 4; M32(esp) = 0x5618d2u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5618cdu); RETCHK(0x5618d2u, 0x5618cdu); LOADALL;
  /* 005618d2 push 0x652f20 */ { u32 v_ = 0x652f20u; esp -= 4; M32(esp) = v_; }
  /* 005618d7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005618d9 call 0x5603f0 */ esp -= 4; M32(esp) = 0x5618deu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5618d9u); RETCHK(0x5618deu, 0x5618d9u); LOADALL;
  /* 005618de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005618df push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005618e0 call 0x560880 */ esp -= 4; M32(esp) = 0x5618e5u; SAVEALL; F_00560880(c); ABI_CHECK(0x560880u, 0x5618e0u); RETCHK(0x5618e5u, 0x5618e0u); LOADALL;
  /* 005618e5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005618e8 push 0x652f20 */ { u32 v_ = 0x652f20u; esp -= 4; M32(esp) = v_; }
  /* 005618ed mov eax, esi */ { eax = (u32)(esi); }
  /* 005618ef call 0x5603f0 */ esp -= 4; M32(esp) = 0x5618f4u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5618efu); RETCHK(0x5618f4u, 0x5618efu); LOADALL;
  /* 005618f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005618f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005618f6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005618f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005618f8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561900(CPU *c) {
  NATIVE_HOOK(0x561900u) REGS; LOADALL;
L_00561900:;
  /* 00561900 mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 00561903 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561904 add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00561907 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0056190c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056190d call 0x5feaac */ esp -= 4; M32(esp) = 0x561912u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x56190du); RETCHK(0x561912u, 0x56190du); LOADALL;
  /* 00561912 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561915 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00561916 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00561918 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0056191a and eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056191d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561920(CPU *c) {
  NATIVE_HOOK(0x561920u) REGS; LOADALL;
L_00561920:;
  /* 00561920 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561921 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561923 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561924 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561925 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00561928 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056192a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056192b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0056192e mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00561930 jle 0x561943 */ if ((ZF_|LT_)) goto L_00561943;
L_00561932:;
  /* 00561932 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561933 push 0x648cf4 */ { u32 v_ = 0x648cf4u; esp -= 4; M32(esp) = v_; }
  /* 00561938 call 0x5feb60 */ esp -= 4; M32(esp) = 0x56193du; SAVEALL; F_005feb60(c); ABI_CHECK(0x5feb60u, 0x561938u); RETCHK(0x56193du, 0x561938u); LOADALL;
  /* 0056193d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561940 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00561941 jne 0x561932 */ if (!ZF_) goto L_00561932;
L_00561943:;
  /* 00561943 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561946 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00561949 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056194a push 0x656a1c */ { u32 v_ = 0x656a1cu; esp -= 4; M32(esp) = v_; }
  /* 0056194f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561950 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561955u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561950u); RETCHK(0x561955u, 0x561950u); LOADALL;
  /* 00561955 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561958 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561959 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056195a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056195b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056195c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00561960(CPU *c) {
  NATIVE_HOOK(0x561960u) REGS; LOADALL;
L_00561960:;
  /* 00561960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561963 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561964 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561965 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00561968 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561969 push 0x656a14 */ { u32 v_ = 0x656a14u; esp -= 4; M32(esp) = v_; }
  /* 0056196e mov edi, 4 */ { edi = (u32)(0x4u); }
  /* 00561973 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561975 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00561977 call 0x5603f0 */ esp -= 4; M32(esp) = 0x56197cu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561977u); RETCHK(0x56197cu, 0x561977u); LOADALL;
  /* 0056197c mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 0056197f mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00561981 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 00561984 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561985 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561987 call 0x5603f0 */ esp -= 4; M32(esp) = 0x56198cu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561987u); RETCHK(0x56198cu, 0x561987u); LOADALL;
  /* 0056198c push 0x656a10 */ { u32 v_ = 0x656a10u; esp -= 4; M32(esp) = v_; }
  /* 00561991 mov edi, 3 */ { edi = (u32)(0x3u); }
  /* 00561996 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561998 call 0x5603f0 */ esp -= 4; M32(esp) = 0x56199du; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561998u); RETCHK(0x56199du, 0x561998u); LOADALL;
  /* 0056199d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056199e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056199f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005619a0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005619a1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005619b0(CPU *c) {
  NATIVE_HOOK(0x5619b0u) REGS; LOADALL;
L_005619b0:;
  /* 005619b0 jmp 0x560b10 */ SAVEALL; F_00560b10(c); return;
}

void F_005619c0(CPU *c) {
  NATIVE_HOOK(0x5619c0u) REGS; LOADALL;
L_005619c0:;
  /* 005619c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005619c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005619c2 push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 005619c4 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005619c6 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5619cbu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5619c6u); RETCHK(0x5619cbu, 0x5619c6u); LOADALL;
  /* 005619cb mov esi, eax */ { esi = (u32)(eax); }
  /* 005619cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005619d0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005619d2 je 0x5619ee */ if (ZF_) goto L_005619ee;
  /* 005619d4 mov edx, 2 */ { edx = (u32)(0x2u); }
  /* 005619d9 call 0x560a40 */ esp -= 4; M32(esp) = 0x5619deu; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x5619d9u); RETCHK(0x5619deu, 0x5619d9u); LOADALL;
  /* 005619de mov dword ptr [esi], 0x6568f8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6568f8u); }
  /* 005619e4 call 0x5619b0 */ esp -= 4; M32(esp) = 0x5619e9u; SAVEALL; F_005619b0(c); ABI_CHECK(0x5619b0u, 0x5619e4u); RETCHK(0x5619e9u, 0x5619e4u); LOADALL;
  /* 005619e9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005619ea mov eax, esi */ { eax = (u32)(esi); }
  /* 005619ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005619ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005619ee:;
  /* 005619ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005619ef xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005619f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005619f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561a00(CPU *c) {
  NATIVE_HOOK(0x561a00u) REGS; LOADALL;
L_00561a00:;
  /* 00561a00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561a01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561a03 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00561a09 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00561a0b push 0x61c408 */ { u32 v_ = 0x61c408u; esp -= 4; M32(esp) = v_; }
  /* 00561a10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561a11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00561a18 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561a19 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00561a1b mov al, byte ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00561a1e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00561a20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561a21 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561a22 je 0x561a8f */ if (ZF_) goto L_00561a8f;
  /* 00561a24 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00561a27 push 0x6437ec */ { u32 v_ = 0x6437ecu; esp -= 4; M32(esp) = v_; }
  /* 00561a2c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561a2d call 0x5feb96 */ esp -= 4; M32(esp) = 0x561a32u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561a2du); RETCHK(0x561a32u, 0x561a2du); LOADALL;
  /* 00561a32 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00561a35 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561a38 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561a3a jle 0x561a51 */ if ((ZF_|LT_)) goto L_00561a51;
  /* 00561a3c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00561a40:;
  /* 00561a40 push 0x648cf4 */ { u32 v_ = 0x648cf4u; esp -= 4; M32(esp) = v_; }
  /* 00561a45 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561a46 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561a4bu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561a46u); RETCHK(0x561a4bu, 0x561a46u); LOADALL;
  /* 00561a4b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561a4e dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00561a4f jne 0x561a40 */ if (!ZF_) goto L_00561a40;
L_00561a51:;
  /* 00561a51 push 0x656a04 */ { u32 v_ = 0x656a04u; esp -= 4; M32(esp) = v_; }
  /* 00561a56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561a57 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561a5cu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561a57u); RETCHK(0x561a5cu, 0x561a57u); LOADALL;
  /* 00561a5c mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561a5f add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00561a62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561a63 push 0x64827c */ { u32 v_ = 0x64827cu; esp -= 4; M32(esp) = v_; }
  /* 00561a68 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561a69 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561a6eu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561a69u); RETCHK(0x561a6eu, 0x561a69u); LOADALL;
  /* 00561a6e push 0x6569fc */ { u32 v_ = 0x6569fcu; esp -= 4; M32(esp) = v_; }
  /* 00561a73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561a74 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561a79u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561a74u); RETCHK(0x561a79u, 0x561a74u); LOADALL;
  /* 00561a79 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561a7c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00561a7f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00561a86 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561a87 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561a88 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561a89 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00561a8b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561a8c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00561a8f:;
  /* 00561a8f mov dword ptr [ebp + 0xc], 0x7a70b8 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x7a70b8u); }
  /* 00561a96 add ebx, 0x20 */ { u32 a_ = ebx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00561a99 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561a9a lea ebx, [ebp + 0xc] */ ebx = (u32)((u32)(ebp + 0xcu));
  /* 00561a9d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00561aa4 call 0x5608f0 */ esp -= 4; M32(esp) = 0x561aa9u; SAVEALL; F_005608f0(c); ABI_CHECK(0x5608f0u, 0x561aa4u); RETCHK(0x561aa9u, 0x561aa4u); LOADALL;
  /* 00561aa9 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00561aac mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00561aaf lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 00561ab2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561ab3 push 0x64827c */ { u32 v_ = 0x64827cu; esp -= 4; M32(esp) = v_; }
  /* 00561ab8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00561ab9 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561abeu; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561ab9u); RETCHK(0x561abeu, 0x561ab9u); LOADALL;
  /* 00561abe add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561ac1 cmp esi, 0x7a70b8 */ { u32 a_ = esi, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561ac7 je 0x561ad2 */ if (ZF_) goto L_00561ad2;
  /* 00561ac9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561aca call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x561acfu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x561acau); RETCHK(0x561acfu, 0x561acau); LOADALL;
  /* 00561acf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561ad2:;
  /* 00561ad2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00561ad5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561ad6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561ad7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00561ade pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561adf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00561ae1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561ae2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00561af0(CPU *c) {
  NATIVE_HOOK(0x561af0u) REGS; LOADALL;
L_00561af0:;
  /* 00561af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561af3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561af4 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00561af6 mov al, byte ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00561af9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00561afb je 0x561b3b */ if (ZF_) goto L_00561b3b;
  /* 00561afd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561afe mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00561b01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561b02 push 0x656a04 */ { u32 v_ = 0x656a04u; esp -= 4; M32(esp) = v_; }
  /* 00561b07 mov edi, 9 */ { edi = (u32)(0x9u); }
  /* 00561b0c mov eax, esi */ { eax = (u32)(esi); }
  /* 00561b0e call 0x5603f0 */ esp -= 4; M32(esp) = 0x561b13u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561b0eu); RETCHK(0x561b13u, 0x561b0eu); LOADALL;
  /* 00561b13 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561b16 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00561b18 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 00561b1b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561b1c mov eax, esi */ { eax = (u32)(esi); }
  /* 00561b1e call 0x5603f0 */ esp -= 4; M32(esp) = 0x561b23u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561b1eu); RETCHK(0x561b23u, 0x561b1eu); LOADALL;
  /* 00561b23 push 0x6569f8 */ { u32 v_ = 0x6569f8u; esp -= 4; M32(esp) = v_; }
  /* 00561b28 mov edi, 3 */ { edi = (u32)(0x3u); }
  /* 00561b2d mov eax, esi */ { eax = (u32)(esi); }
  /* 00561b2f call 0x5603f0 */ esp -= 4; M32(esp) = 0x561b34u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561b2fu); RETCHK(0x561b34u, 0x561b2fu); LOADALL;
  /* 00561b34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561b35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561b36 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561b37 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561b38 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00561b3b:;
  /* 00561b3b mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00561b3e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00561b3f add ebx, 0x20 */ { u32 a_ = ebx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00561b42 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561b43 call 0x560880 */ esp -= 4; M32(esp) = 0x561b48u; SAVEALL; F_00560880(c); ABI_CHECK(0x560880u, 0x561b43u); RETCHK(0x561b48u, 0x561b43u); LOADALL;
  /* 00561b48 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561b4b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561b4c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561b4d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561b50(CPU *c) {
  NATIVE_HOOK(0x561b50u) REGS; LOADALL;
L_00561b50:;
  /* 00561b50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561b51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561b52 mov esi, eax */ { esi = (u32)(eax); }
  /* 00561b54 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00561b56 call 0x560b10 */ esp -= 4; M32(esp) = 0x561b5bu; SAVEALL; F_00560b10(c); ABI_CHECK(0x560b10u, 0x561b56u); RETCHK(0x561b5bu, 0x561b56u); LOADALL;
  /* 00561b5b mov al, byte ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00561b5e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561b5f mov byte ptr [esi + 0x2c], al */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00561b62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561b63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561b70(CPU *c) {
  NATIVE_HOOK(0x561b70u) REGS; LOADALL;
L_00561b70:;
  /* 00561b70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561b71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561b73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00561b75 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00561b7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00561b80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561b81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00561b88 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561b89 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561b8a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561b8b push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 00561b8d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00561b8f call 0x5fe934 */ esp -= 4; M32(esp) = 0x561b94u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x561b8fu); RETCHK(0x561b94u, 0x561b8fu); LOADALL;
  /* 00561b94 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561b97 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00561b9a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00561b9c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561b9e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00561ba1 je 0x561bb2 */ if (ZF_) goto L_00561bb2;
  /* 00561ba3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561ba4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561ba5 mov edi, 0x63e71c */ { edi = (u32)(0x63e71cu); }
  /* 00561baa call 0x5606d0 */ esp -= 4; M32(esp) = 0x561bafu; SAVEALL; F_005606d0(c); ABI_CHECK(0x5606d0u, 0x561baau); RETCHK(0x561bafu, 0x561baau); LOADALL;
  /* 00561baf mov esi, eax */ { esi = (u32)(eax); }
  /* 00561bb1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00561bb2:;
  /* 00561bb2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561bb4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00561bbb jne 0x561bcf */ if (!ZF_) goto L_00561bcf;
  /* 00561bbd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561bbe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00561bc0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561bc1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00561bc4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00561bcb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00561bcd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561bce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00561bcf:;
  /* 00561bcf mov eax, esi */ { eax = (u32)(esi); }
  /* 00561bd1 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00561bd3 call 0x561b50 */ esp -= 4; M32(esp) = 0x561bd8u; SAVEALL; F_00561b50(c); ABI_CHECK(0x561b50u, 0x561bd3u); RETCHK(0x561bd8u, 0x561bd3u); LOADALL;
  /* 00561bd8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00561bdb mov eax, esi */ { eax = (u32)(esi); }
  /* 00561bdd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561bde pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561bdf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00561be6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00561be8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561be9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561bf0(CPU *c) {
  NATIVE_HOOK(0x561bf0u) REGS; LOADALL;
L_00561bf0:;
  /* 00561bf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561bf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561bf3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561bf4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561bf5 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00561bf8 push 0x6569f0 */ { u32 v_ = 0x6569f0u; esp -= 4; M32(esp) = v_; }
  /* 00561bfd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561bfe mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00561c00 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561c05u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561c00u); RETCHK(0x561c05u, 0x561c00u); LOADALL;
  /* 00561c05 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00561c08 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00561c0a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561c0d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561c0f je 0x561c23 */ if (ZF_) goto L_00561c23;
  /* 00561c11 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00561c14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561c15 push 0x6569e0 */ { u32 v_ = 0x6569e0u; esp -= 4; M32(esp) = v_; }
  /* 00561c1a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561c1b call 0x5feb96 */ esp -= 4; M32(esp) = 0x561c20u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561c1bu); RETCHK(0x561c20u, 0x561c1bu); LOADALL;
  /* 00561c20 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561c23:;
  /* 00561c23 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00561c26 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561c29 je 0x561c3d */ if (ZF_) goto L_00561c3d;
  /* 00561c2b add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00561c2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561c2f push 0x6569d0 */ { u32 v_ = 0x6569d0u; esp -= 4; M32(esp) = v_; }
  /* 00561c34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561c35 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561c3au; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561c35u); RETCHK(0x561c3au, 0x561c35u); LOADALL;
  /* 00561c3a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561c3d:;
  /* 00561c3d mov esi, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); esi = (u32)(M32(m_)); }
  /* 00561c40 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561c43 je 0x561c57 */ if (ZF_) goto L_00561c57;
  /* 00561c45 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00561c48 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561c49 push 0x6569bc */ { u32 v_ = 0x6569bcu; esp -= 4; M32(esp) = v_; }
  /* 00561c4e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561c4f call 0x5feb96 */ esp -= 4; M32(esp) = 0x561c54u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561c4fu); RETCHK(0x561c54u, 0x561c4fu); LOADALL;
  /* 00561c54 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561c57:;
  /* 00561c57 push 0x6569b8 */ { u32 v_ = 0x6569b8u; esp -= 4; M32(esp) = v_; }
  /* 00561c5c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561c5d call 0x5feb96 */ esp -= 4; M32(esp) = 0x561c62u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561c5du); RETCHK(0x561c62u, 0x561c5du); LOADALL;
  /* 00561c62 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561c65 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561c66 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561c67 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561c68 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00561c70(CPU *c) {
  NATIVE_HOOK(0x561c70u) REGS; LOADALL;
L_00561c70:;
  /* 00561c70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561c71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561c73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561c74 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561c75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561c76 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00561c79 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561c7a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00561c7c push 0x6569f0 */ { u32 v_ = 0x6569f0u; esp -= 4; M32(esp) = v_; }
  /* 00561c81 mov edi, 6 */ { edi = (u32)(0x6u); }
  /* 00561c86 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561c88 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00561c8b call 0x5603f0 */ esp -= 4; M32(esp) = 0x561c90u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561c8bu); RETCHK(0x561c90u, 0x561c8bu); LOADALL;
  /* 00561c90 mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00561c93 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00561c95 add ebx, 0x2c */ { u32 a_ = ebx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00561c98 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561c9a je 0x561cc8 */ if (ZF_) goto L_00561cc8;
  /* 00561c9c push 0x6569ac */ { u32 v_ = 0x6569acu; esp -= 4; M32(esp) = v_; }
  /* 00561ca1 mov edi, 9 */ { edi = (u32)(0x9u); }
  /* 00561ca6 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561ca8 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561cadu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561ca8u); RETCHK(0x561cadu, 0x561ca8u); LOADALL;
  /* 00561cad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561cae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561caf call 0x560880 */ esp -= 4; M32(esp) = 0x561cb4u; SAVEALL; F_00560880(c); ABI_CHECK(0x560880u, 0x561cafu); RETCHK(0x561cb4u, 0x561cafu); LOADALL;
  /* 00561cb4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561cb7 push 0x6569a8 */ { u32 v_ = 0x6569a8u; esp -= 4; M32(esp) = v_; }
  /* 00561cbc mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 00561cc1 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561cc3 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561cc8u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561cc3u); RETCHK(0x561cc8u, 0x561cc3u); LOADALL;
L_00561cc8:;
  /* 00561cc8 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00561ccb mov ecx, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ecx = (u32)(M32(m_)); }
  /* 00561cce mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00561cd0 add ebx, 0x30 */ { u32 a_ = ebx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00561cd3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561cd5 je 0x561d03 */ if (ZF_) goto L_00561d03;
  /* 00561cd7 push 0x65699c */ { u32 v_ = 0x65699cu; esp -= 4; M32(esp) = v_; }
  /* 00561cdc mov edi, 0xa */ { edi = (u32)(0xau); }
  /* 00561ce1 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561ce3 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561ce8u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561ce3u); RETCHK(0x561ce8u, 0x561ce3u); LOADALL;
  /* 00561ce8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561ce9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561cea call 0x560880 */ esp -= 4; M32(esp) = 0x561cefu; SAVEALL; F_00560880(c); ABI_CHECK(0x560880u, 0x561ceau); RETCHK(0x561cefu, 0x561ceau); LOADALL;
  /* 00561cef add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561cf2 push 0x6569a8 */ { u32 v_ = 0x6569a8u; esp -= 4; M32(esp) = v_; }
  /* 00561cf7 mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 00561cfc mov eax, esi */ { eax = (u32)(esi); }
  /* 00561cfe call 0x5603f0 */ esp -= 4; M32(esp) = 0x561d03u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561cfeu); RETCHK(0x561d03u, 0x561cfeu); LOADALL;
L_00561d03:;
  /* 00561d03 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00561d06 mov edx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); edx = (u32)(M32(m_)); }
  /* 00561d09 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00561d0b add ebx, 0x34 */ { u32 a_ = ebx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00561d0e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561d10 je 0x561d3e */ if (ZF_) goto L_00561d3e;
  /* 00561d12 push 0x65698c */ { u32 v_ = 0x65698cu; esp -= 4; M32(esp) = v_; }
  /* 00561d17 mov edi, 0xc */ { edi = (u32)(0xcu); }
  /* 00561d1c mov eax, esi */ { eax = (u32)(esi); }
  /* 00561d1e call 0x5603f0 */ esp -= 4; M32(esp) = 0x561d23u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561d1eu); RETCHK(0x561d23u, 0x561d1eu); LOADALL;
  /* 00561d23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561d24 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561d25 call 0x560880 */ esp -= 4; M32(esp) = 0x561d2au; SAVEALL; F_00560880(c); ABI_CHECK(0x560880u, 0x561d25u); RETCHK(0x561d2au, 0x561d25u); LOADALL;
  /* 00561d2a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561d2d push 0x6569a8 */ { u32 v_ = 0x6569a8u; esp -= 4; M32(esp) = v_; }
  /* 00561d32 mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 00561d37 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561d39 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561d3eu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561d39u); RETCHK(0x561d3eu, 0x561d39u); LOADALL;
L_00561d3e:;
  /* 00561d3e push 0x6569b8 */ { u32 v_ = 0x6569b8u; esp -= 4; M32(esp) = v_; }
  /* 00561d43 mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 00561d48 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561d4a call 0x5603f0 */ esp -= 4; M32(esp) = 0x561d4fu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561d4au); RETCHK(0x561d4fu, 0x561d4au); LOADALL;
  /* 00561d4f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561d50 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561d51 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561d52 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00561d54 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561d55 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561d60(CPU *c) {
  NATIVE_HOOK(0x561d60u) REGS; LOADALL;
L_00561d60:;
  /* 00561d60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561d61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561d62 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561d63 mov esi, eax */ { esi = (u32)(eax); }
  /* 00561d65 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00561d67 call 0x560b10 */ esp -= 4; M32(esp) = 0x561d6cu; SAVEALL; F_00560b10(c); ABI_CHECK(0x560b10u, 0x561d67u); RETCHK(0x561d6cu, 0x561d67u); LOADALL;
  /* 00561d6c mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00561d6f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00561d71 lea edx, [eax + 8] */ edx = (u32)((u32)(eax + 0x8u));
  /* 00561d74 lea ebx, [esi + 0x2c] */ ebx = (u32)((u32)(esi + 0x2cu));
  /* 00561d77 call 0x560320 */ esp -= 4; M32(esp) = 0x561d7cu; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x561d77u); RETCHK(0x561d7cu, 0x561d77u); LOADALL;
  /* 00561d7c mov eax, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00561d7f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00561d81 lea edx, [eax + 8] */ edx = (u32)((u32)(eax + 0x8u));
  /* 00561d84 lea ebx, [esi + 0x30] */ ebx = (u32)((u32)(esi + 0x30u));
  /* 00561d87 call 0x560320 */ esp -= 4; M32(esp) = 0x561d8cu; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x561d87u); RETCHK(0x561d8cu, 0x561d87u); LOADALL;
  /* 00561d8c mov edi, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); edi = (u32)(M32(m_)); }
  /* 00561d8f mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00561d91 lea edx, [edi + 8] */ edx = (u32)((u32)(edi + 0x8u));
  /* 00561d94 lea ebx, [esi + 0x34] */ ebx = (u32)((u32)(esi + 0x34u));
  /* 00561d97 call 0x560320 */ esp -= 4; M32(esp) = 0x561d9cu; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x561d97u); RETCHK(0x561d9cu, 0x561d97u); LOADALL;
  /* 00561d9c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561d9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561d9e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561d9f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561da0(CPU *c) {
  NATIVE_HOOK(0x561da0u) REGS; LOADALL;
L_00561da0:;
  /* 00561da0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561da1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561da2 push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 00561da4 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00561da6 call 0x5fe934 */ esp -= 4; M32(esp) = 0x561dabu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x561da6u); RETCHK(0x561dabu, 0x561da6u); LOADALL;
  /* 00561dab mov esi, eax */ { esi = (u32)(eax); }
  /* 00561dad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561db0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561db2 je 0x561de0 */ if (ZF_) goto L_00561de0;
  /* 00561db4 mov edx, 5 */ { edx = (u32)(0x5u); }
  /* 00561db9 call 0x560a40 */ esp -= 4; M32(esp) = 0x561dbeu; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x561db9u); RETCHK(0x561dbeu, 0x561db9u); LOADALL;
  /* 00561dbe mov eax, 0x7a70b8 */ { eax = (u32)(0x7a70b8u); }
  /* 00561dc3 mov dword ptr [esi], 0x656810 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656810u); }
  /* 00561dc9 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 00561dcc mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 00561dcf mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 00561dd2 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561dd4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00561dd6 call 0x561d60 */ esp -= 4; M32(esp) = 0x561ddbu; SAVEALL; F_00561d60(c); ABI_CHECK(0x561d60u, 0x561dd6u); RETCHK(0x561ddbu, 0x561dd6u); LOADALL;
  /* 00561ddb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561ddc mov eax, esi */ { eax = (u32)(esi); }
  /* 00561dde pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561ddf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00561de0:;
  /* 00561de0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561de1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00561de3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561de4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561df0(CPU *c) {
  NATIVE_HOOK(0x561df0u) REGS; LOADALL;
L_00561df0:;
  /* 00561df0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561df1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561df3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561df4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561df5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00561df8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561dfa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561dfb mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00561dfe mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00561e00 jle 0x561e13 */ if ((ZF_|LT_)) goto L_00561e13;
L_00561e02:;
  /* 00561e02 push 0x648cf4 */ { u32 v_ = 0x648cf4u; esp -= 4; M32(esp) = v_; }
  /* 00561e07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561e08 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561e0du; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561e08u); RETCHK(0x561e0du, 0x561e08u); LOADALL;
  /* 00561e0d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561e10 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00561e11 jne 0x561e02 */ if (!ZF_) goto L_00561e02;
L_00561e13:;
  /* 00561e13 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561e16 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00561e19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561e1a push 0x656984 */ { u32 v_ = 0x656984u; esp -= 4; M32(esp) = v_; }
  /* 00561e1f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561e20 call 0x5feb96 */ esp -= 4; M32(esp) = 0x561e25u; SAVEALL; F_005feb96(c); ABI_CHECK(0x5feb96u, 0x561e20u); RETCHK(0x561e25u, 0x561e20u); LOADALL;
  /* 00561e25 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561e28 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561e29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561e2a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561e2b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561e2c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00561e30(CPU *c) {
  NATIVE_HOOK(0x561e30u) REGS; LOADALL;
L_00561e30:;
  /* 00561e30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561e31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561e33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561e34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561e35 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00561e38 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561e39 push 0x656a40 */ { u32 v_ = 0x656a40u; esp -= 4; M32(esp) = v_; }
  /* 00561e3e mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 00561e43 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561e45 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00561e47 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561e4cu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561e47u); RETCHK(0x561e4cu, 0x561e47u); LOADALL;
  /* 00561e4c mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561e4f mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00561e51 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 00561e54 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561e55 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561e57 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561e5cu; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561e57u); RETCHK(0x561e5cu, 0x561e57u); LOADALL;
  /* 00561e5c push 0x656a4c */ { u32 v_ = 0x656a4cu; esp -= 4; M32(esp) = v_; }
  /* 00561e61 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 00561e66 mov eax, esi */ { eax = (u32)(esi); }
  /* 00561e68 call 0x5603f0 */ esp -= 4; M32(esp) = 0x561e6du; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x561e68u); RETCHK(0x561e6du, 0x561e68u); LOADALL;
  /* 00561e6d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561e6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561e6f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561e70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561e71 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561e80(CPU *c) {
  NATIVE_HOOK(0x561e80u) REGS; LOADALL;
L_00561e80:;
  /* 00561e80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561e81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561e82 push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 00561e84 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00561e86 call 0x5fe934 */ esp -= 4; M32(esp) = 0x561e8bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x561e86u); RETCHK(0x561e8bu, 0x561e86u); LOADALL;
  /* 00561e8b mov esi, eax */ { esi = (u32)(eax); }
  /* 00561e8d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561e90 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561e92 je 0x561eae */ if (ZF_) goto L_00561eae;
  /* 00561e94 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 00561e99 call 0x560a40 */ esp -= 4; M32(esp) = 0x561e9eu; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x561e99u); RETCHK(0x561e9eu, 0x561e99u); LOADALL;
  /* 00561e9e mov dword ptr [esi], 0x6568b0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6568b0u); }
  /* 00561ea4 call 0x5619b0 */ esp -= 4; M32(esp) = 0x561ea9u; SAVEALL; F_005619b0(c); ABI_CHECK(0x5619b0u, 0x561ea4u); RETCHK(0x561ea9u, 0x561ea4u); LOADALL;
  /* 00561ea9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561eaa mov eax, esi */ { eax = (u32)(esi); }
  /* 00561eac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561ead ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00561eae:;
  /* 00561eae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561eaf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00561eb1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561eb2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561ec0(CPU *c) {
  NATIVE_HOOK(0x561ec0u) REGS; LOADALL;
L_00561ec0:;
  /* 00561ec0 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00561ec3 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00561ec6 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00561ec9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00561ecb mov ecx, 0x7a70b8 */ { ecx = (u32)(0x7a70b8u); }
  /* 00561ed0 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 00561ed3 mov dword ptr [eax], 0x65689c */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x65689cu); }
  /* 00561ed9 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00561edc mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00561edf mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 00561ee2 mov dword ptr [eax + 0x20], eax */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(eax); }
  /* 00561ee5 mov dword ptr [eax + 0x1c], eax */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00561ee8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561ef0(CPU *c) {
  NATIVE_HOOK(0x561ef0u) REGS; LOADALL;
L_00561ef0:;
  /* 00561ef0 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00561ef3 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561ef8 je 0x561f03 */ if (ZF_) goto L_00561f03;
  /* 00561efa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561efb call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x561f00u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x561efbu); RETCHK(0x561f00u, 0x561efbu); LOADALL;
  /* 00561f00 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561f03:;
  /* 00561f03 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00561f06 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561f0b je 0x561f16 */ if (ZF_) goto L_00561f16;
  /* 00561f0d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561f0e call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x561f13u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x561f0eu); RETCHK(0x561f13u, 0x561f0eu); LOADALL;
  /* 00561f13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561f16:;
  /* 00561f16 mov dword ptr [esi], 0x6567fc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6567fcu); }
  /* 00561f1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561f20(CPU *c) {
  NATIVE_HOOK(0x561f20u) REGS; LOADALL;
L_00561f20:;
  /* 00561f20 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00561f23 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00561f26 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00561f29 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00561f2c mov dword ptr [edx + 0x20], eax */ { const u32 m_ = (u32)(edx + 0x20u); M32(m_) = (u32)(eax); }
  /* 00561f2f mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00561f32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561f40(CPU *c) {
  NATIVE_HOOK(0x561f40u) REGS; LOADALL;
L_00561f40:;
  /* 00561f40 mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561f43 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561f45 je 0x561f6d */ if (ZF_) goto L_00561f6d;
L_00561f47:;
  /* 00561f47 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561f49 je 0x561f53 */ if (ZF_) goto L_00561f53;
  /* 00561f4b mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00561f4e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561f50 jne 0x561f47 */ if (!ZF_) goto L_00561f47;
  /* 00561f52 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00561f53:;
  /* 00561f53 mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00561f56 mov edx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); edx = (u32)(M32(m_)); }
  /* 00561f59 mov dword ptr [ecx + 0x20], edx */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(edx); }
  /* 00561f5c mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00561f5f mov edx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00561f62 mov dword ptr [ecx + 0x1c], edx */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00561f65 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00561f67 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00561f6a mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
L_00561f6d:;
  /* 00561f6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00561f70(CPU *c) {
  NATIVE_HOOK(0x561f70u) REGS; LOADALL;
L_00561f70:;
  /* 00561f70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561f71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561f73 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561f74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561f75 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00561f78 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00561f79 mov edi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edi = (u32)(M32(m_)); }
  /* 00561f7c cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561f7e je 0x561fc8 */ if (ZF_) goto L_00561fc8;
  /* 00561f80 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_00561f82:;
  /* 00561f82 mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00561f85 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00561f87 cmp dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561f89 jne 0x561fc1 */ if (!ZF_) goto L_00561fc1;
  /* 00561f8b lea esi, [eax + 8] */ esi = (u32)((u32)(eax + 0x8u));
  /* 00561f8e add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00561f91:;
  /* 00561f91 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00561f93 mov dl, bl */ { edx = (edx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00561f95 cmp bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00561f97 jne 0x561fb5 */ if (!ZF_) goto L_00561fb5;
  /* 00561f99 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00561f9b je 0x561fb1 */ if (ZF_) goto L_00561fb1;
  /* 00561f9d mov bl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00561fa0 mov dl, bl */ { edx = (edx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00561fa2 cmp bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00561fa5 jne 0x561fb5 */ if (!ZF_) goto L_00561fb5;
  /* 00561fa7 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00561faa add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00561fad test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00561faf jne 0x561f91 */ if (!ZF_) goto L_00561f91;
L_00561fb1:;
  /* 00561fb1 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00561fb3 jmp 0x561fba */ goto L_00561fba;
L_00561fb5:;
  /* 00561fb5 sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 00561fb7 sbb ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
L_00561fba:;
  /* 00561fba test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561fbc je 0x561fd1 */ if (ZF_) goto L_00561fd1;
  /* 00561fbe mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_00561fc1:;
  /* 00561fc1 mov edi, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edi = (u32)(M32(m_)); }
  /* 00561fc4 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561fc6 jne 0x561f82 */ if (!ZF_) goto L_00561f82;
L_00561fc8:;
  /* 00561fc8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561fc9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561fca xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00561fcc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561fcd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561fce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00561fd1:;
  /* 00561fd1 mov eax, edi */ { eax = (u32)(edi); }
  /* 00561fd3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00561fd4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561fd5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561fd6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561fd7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561fe0(CPU *c) {
  NATIVE_HOOK(0x561fe0u) REGS; LOADALL;
L_00561fe0:;
  /* 00561fe0 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 00561fe3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561fe4 call 0x5fe9ec */ esp -= 4; M32(esp) = 0x561fe9u; SAVEALL; F_005fe9ec(c); ABI_CHECK(0x5fe9ecu, 0x561fe4u); RETCHK(0x561fe9u, 0x561fe4u); LOADALL;
  /* 00561fe9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00561fec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00561fee jne 0x561ffb */ if (!ZF_) goto L_00561ffb;
  /* 00561ff0 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00561ff3 je 0x561ffb */ if (ZF_) goto L_00561ffb;
  /* 00561ff5 cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00561ff8 je 0x561ffb */ if (ZF_) goto L_00561ffb;
  /* 00561ffa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00561ffb:;
  /* 00561ffb mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00562000 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00562010(CPU *c) {
  NATIVE_HOOK(0x562010u) REGS; LOADALL;
L_00562010:;
  /* 00562010 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00562011 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00562013 cmp edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562016 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562017 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056201a jne 0x562041 */ if (!ZF_) goto L_00562041;
  /* 0056201c movzx eax, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M8(m_)); }
  /* 0056201f mov eax, dword ptr [eax*4 + 0x6420a0] */ { const u32 m_ = (u32)(eax * 4u + 0x6420a0u); eax = (u32)(M32(m_)); }
  /* 00562026 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562028 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 0056202a jne 0x562051 */ if (!ZF_) goto L_00562051;
L_0056202c:;
  /* 0056202c mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056202e cmp al, 0x26 */ { u32 a_ = (eax & 0xffu), b_ = 0x26u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562030 jne 0x562049 */ if (!ZF_) goto L_00562049;
  /* 00562032 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00562033 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562034 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562035 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00562036 call 0x5624d0 */ esp -= 4; M32(esp) = 0x56203bu; SAVEALL; F_005624d0(c); ABI_CHECK(0x5624d0u, 0x562036u); RETCHK(0x56203bu, 0x562036u); LOADALL;
  /* 0056203b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056203e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056203f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562040 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00562041:;
  /* 00562041 mov dword ptr [ebx], 1 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x1u); }
  /* 00562047 jmp 0x56202c */ goto L_0056202c;
L_00562049:;
  /* 00562049 mov byte ptr [esi], al */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0056204b lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
  /* 0056204e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056204f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562050 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00562051:;
  /* 00562051 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562053 je 0x56207c */ if (ZF_) goto L_0056207c;
  /* 00562055 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562057 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562058 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0056205a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056205c je 0x562074 */ if (ZF_) goto L_00562074;
  /* 0056205e mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00562060 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_00562062:;
  /* 00562062 cmp edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562064 jge 0x562074 */ if (!LT_) goto L_00562074;
  /* 00562066 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562068 mov byte ptr [esi + eax], dl */ { const u32 m_ = (u32)(esi + eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0056206b mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056206e inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056206f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562070 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562072 jne 0x562062 */ if (!ZF_) goto L_00562062;
L_00562074:;
  /* 00562074 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00562076 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562077 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00562079 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056207a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056207b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056207c:;
  /* 0056207c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056207e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056207f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562080 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00562090(CPU *c) {
  NATIVE_HOOK(0x562090u) REGS; LOADALL;
L_00562090:;
  /* 00562090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00562091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00562093 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562096 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00562098 cmp eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056209d mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 005620a0 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 005620a3 mov dword ptr [ebp - 0x14], 0xc0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xc0u); }
  /* 005620aa mov dword ptr [ebp - 0x10], 0xe0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xe0u); }
  /* 005620b1 mov dword ptr [ebp - 0xc], 0xf0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0xf0u); }
  /* 005620b8 mov dword ptr [ebp - 8], 0xf8 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0xf8u); }
  /* 005620bf mov dword ptr [ebp - 4], 0xfc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xfcu); }
  /* 005620c6 jae 0x5620d0 */ if (!CF_) goto L_005620d0;
  /* 005620c8 mov dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1u); }
  /* 005620ce jmp 0x5620fb */ goto L_005620fb;
L_005620d0:;
  /* 005620d0 cmp eax, 0x800 */ { u32 a_ = eax, b_ = 0x800u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005620d5 jae 0x5620df */ if (!CF_) goto L_005620df;
  /* 005620d7 mov dword ptr [esi], 2 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x2u); }
  /* 005620dd jmp 0x5620fb */ goto L_005620fb;
L_005620df:;
  /* 005620df cmp eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005620e4 jae 0x5620ee */ if (!CF_) goto L_005620ee;
  /* 005620e6 mov dword ptr [esi], 3 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x3u); }
  /* 005620ec jmp 0x5620fb */ goto L_005620fb;
L_005620ee:;
  /* 005620ee cmp eax, 0x200000 */ { u32 a_ = eax, b_ = 0x200000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005620f3 jae 0x562145 */ if (!CF_) goto L_00562145;
  /* 005620f5 mov dword ptr [esi], 4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x4u); }
L_005620fb:;
  /* 005620fb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005620fd add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005620ff dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00562100 cmp edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562103 ja 0x562147 */ if (!(CF_|ZF_)) goto L_00562147;
  /* 00562105 jmp dword ptr [edx*4 + 0x56214c] */ { const u32 m_ = (u32)(edx * 4u + 0x56214cu); u32 t_ = M32(m_); switch (t_) { case 0x56210cu: goto L_0056210c; case 0x56211au: goto L_0056211a; case 0x562128u: goto L_00562128; case 0x562136u: goto L_00562136; default: SAVEALL; call_ind(c, t_); return; } }
L_0056210c:;
  /* 0056210c mov dl, al */ { edx = (edx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0056210e and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00562111 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00562112 or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00562115 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00562117 shr eax, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0056211a:;
  /* 0056211a mov dl, al */ { edx = (edx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0056211c and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0056211f dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00562120 or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00562123 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00562125 shr eax, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00562128:;
  /* 00562128 mov dl, al */ { edx = (edx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0056212a and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0056212d dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056212e or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00562131 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00562133 shr eax, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00562136:;
  /* 00562136 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00562138 mov dl, byte ptr [ebp + edx*4 - 0x1c] */ { const u32 m_ = (u32)(ebp + edx * 4u + 0xffffffe4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056213c or dl, al */ { u32 a_ = (edx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0056213e mov byte ptr [ecx - 1], dl */ { const u32 m_ = (u32)(ecx + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00562141 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00562143 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562144 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00562145:;
  /* 00562145 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
L_00562147:;
  /* 00562147 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00562149 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056214a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00562160(CPU *c) {
  NATIVE_HOOK(0x562160u) REGS; LOADALL;
L_00562160:;
  /* 00562160 cmp al, 0x7f */ { u32 a_ = (eax & 0xffu), b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562162 jae 0x562171 */ if (!CF_) goto L_00562171;
  /* 00562164 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 00562167 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562168 call 0x5feb9c */ esp -= 4; M32(esp) = 0x56216du; SAVEALL; F_005feb9c(c); ABI_CHECK(0x5feb9cu, 0x562168u); RETCHK(0x56216du, 0x562168u); LOADALL;
  /* 0056216d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562170 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00562171:;
  /* 00562171 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00562176 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00562180(CPU *c) {
  NATIVE_HOOK(0x562180u) REGS; LOADALL;
L_00562180:;
  /* 00562180 cmp al, 0x7f */ { u32 a_ = (eax & 0xffu), b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562182 jae 0x562191 */ if (!CF_) goto L_00562191;
  /* 00562184 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 00562187 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562188 call 0x5fe9e6 */ esp -= 4; M32(esp) = 0x56218du; SAVEALL; F_005fe9e6(c); ABI_CHECK(0x5fe9e6u, 0x562188u); RETCHK(0x56218du, 0x562188u); LOADALL;
  /* 0056218d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562190 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00562191:;
  /* 00562191 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00562196 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005621a0(CPU *c) {
  NATIVE_HOOK(0x5621a0u) REGS; LOADALL;
L_005621a0:;
  /* 005621a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005621a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005621a3 cmp dword ptr [edi + 0xc], 1 */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005621a7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005621a8 jl 0x562282 */ if (LT_) goto L_00562282;
  /* 005621ae mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005621b1 cmp ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005621b4 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005621b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005621b8 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 005621ba jae 0x562279 */ if (!CF_) goto L_00562279;
L_005621c0:;
  /* 005621c0 movzx edx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M8(m_)); }
  /* 005621c3 cmp edx, 0xef */ { u32 a_ = edx, b_ = 0xefu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005621c9 ja 0x562254 */ if (!(CF_|ZF_)) goto L_00562254;
  /* 005621cf movzx ebx, byte ptr [edx + 0x5622a0] */ { const u32 m_ = (u32)(edx + 0x5622a0u); ebx = (u32)(M8(m_)); }
  /* 005621d6 jmp dword ptr [ebx*4 + 0x562288] */ { const u32 m_ = (u32)(ebx * 4u + 0x562288u); u32 t_ = M32(m_); switch (t_) { case 0x5621ddu: goto L_005621dd; case 0x5621f3u: goto L_005621f3; case 0x562202u: goto L_00562202; case 0x56220fu: goto L_0056220f; case 0x562254u: goto L_00562254; case 0x562281u: goto L_00562281; default: SAVEALL; call_ind(c, t_); return; } }
L_005621dd:;
  /* 005621dd mov dl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005621e0 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005621e1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005621e3 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005621e4 cmp dl, 0xa */ { u32 a_ = (edx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005621e7 jne 0x562270 */ if (!ZF_) goto L_00562270;
  /* 005621ed inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005621ee jmp 0x562270 */ goto L_00562270;
L_005621f3:;
  /* 005621f3 mov dl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005621f6 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005621f7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005621f9 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005621fa cmp dl, 0xd */ { u32 a_ = (edx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005621fd jne 0x562270 */ if (!ZF_) goto L_00562270;
  /* 005621ff inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562200 jmp 0x562270 */ goto L_00562270;
L_00562202:;
  /* 00562202 mov ebx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00562205 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00562206 idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x562206u); eax = q_; edx = r_; }
  /* 00562208 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562209 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056220a imul eax, ebx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056220d jmp 0x562270 */ goto L_00562270;
L_0056220f:;
  /* 0056220f cmp dword ptr [ebp + 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562213 jne 0x56226e */ if (!ZF_) goto L_0056226e;
  /* 00562215 mov bl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562218 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056221a je 0x562270 */ if (ZF_) goto L_00562270;
  /* 0056221c mov dl, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056221f test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562221 je 0x562270 */ if (ZF_) goto L_00562270;
  /* 00562223 cmp bl, 0xbb */ { u32 a_ = (ebx & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562226 jne 0x562232 */ if (!ZF_) goto L_00562232;
  /* 00562228 cmp dl, 0xbf */ { u32 a_ = (edx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056222b jne 0x562232 */ if (!ZF_) goto L_00562232;
  /* 0056222d add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00562230 jmp 0x562270 */ goto L_00562270;
L_00562232:;
  /* 00562232 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562235 jne 0x56224f */ if (!ZF_) goto L_0056224f;
  /* 00562237 cmp dl, 0xbe */ { u32 a_ = (edx & 0xffu), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056223a jne 0x562241 */ if (!ZF_) goto L_00562241;
  /* 0056223c add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056223f jmp 0x562270 */ goto L_00562270;
L_00562241:;
  /* 00562241 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562244 jne 0x56224f */ if (!ZF_) goto L_0056224f;
  /* 00562246 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562248 jne 0x56224f */ if (!ZF_) goto L_0056224f;
  /* 0056224a add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056224d jmp 0x562270 */ goto L_00562270;
L_0056224f:;
  /* 0056224f add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00562252 jmp 0x56226f */ goto L_0056226f;
L_00562254:;
  /* 00562254 cmp dword ptr [ebp + 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562258 jne 0x56226e */ if (!ZF_) goto L_0056226e;
  /* 0056225a mov edx, dword ptr [edx*4 + 0x6420a0] */ { const u32 m_ = (u32)(edx * 4u + 0x6420a0u); edx = (u32)(M32(m_)); }
  /* 00562261 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562263 jne 0x56226a */ if (!ZF_) goto L_0056226a;
  /* 00562265 mov edx, 1 */ { edx = (u32)(0x1u); }
L_0056226a:;
  /* 0056226a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056226c jmp 0x56226f */ goto L_0056226f;
L_0056226e:;
  /* 0056226e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0056226f:;
  /* 0056226f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00562270:;
  /* 00562270 cmp ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562273 jb 0x5621c0 */ if (CF_) goto L_005621c0;
L_00562279:;
  /* 00562279 mov dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(esi); }
  /* 0056227b mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0056227e mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
L_00562281:;
  /* 00562281 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00562282:;
  /* 00562282 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00562283 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562284 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00562390(CPU *c) {
  NATIVE_HOOK(0x562390u) REGS; LOADALL;
L_00562390:;
  /* 00562390 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562391 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562392 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00562394 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562396 je 0x562442 */ if (ZF_) goto L_00562442;
  /* 0056239c mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056239e test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005623a0 je 0x562442 */ if (ZF_) goto L_00562442;
  /* 005623a6 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005623a9 jne 0x562415 */ if (!ZF_) goto L_00562415;
  /* 005623ab jmp 0x5623b0 */ goto L_005623b0;
L_005623b0:;
  /* 005623b0 cmp bl, 0xef */ { u32 a_ = (ebx & 0xffu), b_ = 0xefu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623b3 jne 0x5623e5 */ if (!ZF_) goto L_005623e5;
  /* 005623b5 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005623b8 cmp al, 0xbb */ { u32 a_ = (eax & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623ba jne 0x5623c7 */ if (!ZF_) goto L_005623c7;
  /* 005623bc cmp byte ptr [esi + 2], 0xbf */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623c0 jne 0x5623c7 */ if (!ZF_) goto L_005623c7;
  /* 005623c2 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005623c5 jmp 0x56240a */ goto L_0056240a;
L_005623c7:;
  /* 005623c7 cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623c9 jne 0x5623e5 */ if (!ZF_) goto L_005623e5;
  /* 005623cb cmp byte ptr [esi + 2], 0xbe */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623cf jne 0x5623d6 */ if (!ZF_) goto L_005623d6;
  /* 005623d1 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005623d4 jmp 0x56240a */ goto L_0056240a;
L_005623d6:;
  /* 005623d6 cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623d8 jne 0x5623e5 */ if (!ZF_) goto L_005623e5;
  /* 005623da cmp byte ptr [esi + 2], 0xbf */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623de jne 0x5623e5 */ if (!ZF_) goto L_005623e5;
  /* 005623e0 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005623e3 jmp 0x56240a */ goto L_0056240a;
L_005623e5:;
  /* 005623e5 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 005623e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005623e9 call 0x5fe9ec */ esp -= 4; M32(esp) = 0x5623eeu; SAVEALL; F_005fe9ec(c); ABI_CHECK(0x5fe9ecu, 0x5623e9u); RETCHK(0x5623eeu, 0x5623e9u); LOADALL;
  /* 005623ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005623f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005623f3 jne 0x562409 */ if (!ZF_) goto L_00562409;
  /* 005623f5 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623f8 je 0x562409 */ if (ZF_) goto L_00562409;
  /* 005623fa cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005623fd je 0x562409 */ if (ZF_) goto L_00562409;
  /* 005623ff mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562401 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562403 je 0x562409 */ if (ZF_) goto L_00562409;
  /* 00562405 cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562407 jne 0x562410 */ if (!ZF_) goto L_00562410;
L_00562409:;
  /* 00562409 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0056240a:;
  /* 0056240a mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056240c test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056240e jne 0x5623b0 */ if (!ZF_) goto L_005623b0;
L_00562410:;
  /* 00562410 mov eax, esi */ { eax = (u32)(esi); }
  /* 00562412 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562413 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00562414 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00562415:;
  /* 00562415 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562417 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562419 je 0x562435 */ if (ZF_) goto L_00562435;
  /* 0056241b movzx ecx, bl */ { ecx = (u32)((ebx & 0xffu)); }
  /* 0056241e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056241f call 0x5fe9ec */ esp -= 4; M32(esp) = 0x562424u; SAVEALL; F_005fe9ec(c); ABI_CHECK(0x5fe9ecu, 0x56241fu); RETCHK(0x562424u, 0x56241fu); LOADALL;
  /* 00562424 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562427 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562429 jne 0x56243f */ if (!ZF_) goto L_0056243f;
  /* 0056242b cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056242e je 0x56243f */ if (ZF_) goto L_0056243f;
  /* 00562430 cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562433 je 0x56243f */ if (ZF_) goto L_0056243f;
L_00562435:;
  /* 00562435 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562437 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562439 je 0x56243f */ if (ZF_) goto L_0056243f;
  /* 0056243b cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056243d jne 0x562410 */ if (!ZF_) goto L_00562410;
L_0056243f:;
  /* 0056243f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562440 jmp 0x562415 */ goto L_00562415;
L_00562442:;
  /* 00562442 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562443 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00562445 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00562446 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00562450(CPU *c) {
  NATIVE_HOOK(0x562450u) REGS; LOADALL;
L_00562450:;
  /* 00562450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00562451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00562453 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00562454 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562455 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562456 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00562458 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0056245a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056245c mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 00562461 call 0x560320 */ esp -= 4; M32(esp) = 0x562466u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x562461u); RETCHK(0x562466u, 0x562461u); LOADALL;
  /* 00562466 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562468 je 0x5624c2 */ if (ZF_) goto L_005624c2;
  /* 0056246a mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056246c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056246e je 0x5624c2 */ if (ZF_) goto L_005624c2;
  /* 00562470 call 0x562160 */ esp -= 4; M32(esp) = 0x562475u; SAVEALL; F_00562160(c); ABI_CHECK(0x562160u, 0x562470u); RETCHK(0x562475u, 0x562470u); LOADALL;
  /* 00562475 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562477 jne 0x56247e */ if (!ZF_) goto L_0056247e;
  /* 00562479 cmp byte ptr [esi], 0x5f */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x5fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056247c jne 0x5624c2 */ if (!ZF_) goto L_005624c2;
L_0056247e:;
  /* 0056247e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056247f nop */ ;
L_00562480:;
  /* 00562480 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562482 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562484 je 0x5624b9 */ if (ZF_) goto L_005624b9;
  /* 00562486 call 0x562180 */ esp -= 4; M32(esp) = 0x56248bu; SAVEALL; F_00562180(c); ABI_CHECK(0x562180u, 0x562486u); RETCHK(0x56248bu, 0x562486u); LOADALL;
  /* 0056248b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056248d jne 0x5624a1 */ if (!ZF_) goto L_005624a1;
  /* 0056248f mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562491 cmp al, 0x5f */ { u32 a_ = (eax & 0xffu), b_ = 0x5fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562493 je 0x5624a1 */ if (ZF_) goto L_005624a1;
  /* 00562495 cmp al, 0x2d */ { u32 a_ = (eax & 0xffu), b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562497 je 0x5624a1 */ if (ZF_) goto L_005624a1;
  /* 00562499 cmp al, 0x2e */ { u32 a_ = (eax & 0xffu), b_ = 0x2eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056249b je 0x5624a1 */ if (ZF_) goto L_005624a1;
  /* 0056249d cmp al, 0x3a */ { u32 a_ = (eax & 0xffu), b_ = 0x3au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056249f jne 0x5624b9 */ if (!ZF_) goto L_005624b9;
L_005624a1:;
  /* 005624a1 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005624a3 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005624a6 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005624a9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005624aa mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005624af mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005624b1 call 0x5603f0 */ esp -= 4; M32(esp) = 0x5624b6u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5624b1u); RETCHK(0x5624b6u, 0x5624b1u); LOADALL;
  /* 005624b6 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005624b7 jne 0x562480 */ if (!ZF_) goto L_00562480;
L_005624b9:;
  /* 005624b9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005624ba mov eax, esi */ { eax = (u32)(esi); }
  /* 005624bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005624bd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005624be mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005624c0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005624c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005624c2:;
  /* 005624c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005624c3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005624c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005624c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005624c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005624c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005624d0(CPU *c) {
  NATIVE_HOOK(0x5624d0u) REGS; LOADALL;
L_005624d0:;
  /* 005624d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005624d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005624d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005624d4 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005624d7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005624da push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005624db lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 005624de mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 005624e4 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005624e6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005624e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005624e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005624ea je 0x56263d */ if (ZF_) goto L_0056263d;
  /* 005624f0 cmp al, 0x23 */ { u32 a_ = (eax & 0xffu), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005624f2 jne 0x56263d */ if (!ZF_) goto L_0056263d;
  /* 005624f8 mov al, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005624fb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005624fd lea edx, [ecx + 2] */ edx = (u32)((u32)(ecx + 0x2u));
  /* 00562500 je 0x56263d */ if (ZF_) goto L_0056263d;
  /* 00562506 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00562508 cmp al, 0x78 */ { u32 a_ = (eax & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056250a mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 0056250f jne 0x5625c6 */ if (!ZF_) goto L_005625c6;
  /* 00562515 lea eax, [ecx + 3] */ eax = (u32)((u32)(ecx + 0x3u));
  /* 00562518 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056251b je 0x562615 */ if (ZF_) goto L_00562615;
  /* 00562521 push 0x3b */ { u32 v_ = 0x3bu; esp -= 4; M32(esp) = v_; }
  /* 00562523 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562524 call 0x5fe9c2 */ esp -= 4; M32(esp) = 0x562529u; SAVEALL; F_005fe9c2(c); ABI_CHECK(0x5fe9c2u, 0x562524u); RETCHK(0x562529u, 0x562524u); LOADALL;
  /* 00562529 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056252c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056252e je 0x562615 */ if (ZF_) goto L_00562615;
  /* 00562534 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562537 je 0x562615 */ if (ZF_) goto L_00562615;
  /* 0056253d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00562540 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00562542 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00562544 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00562545 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00562548 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056254a cmp cl, 0x78 */ { u32 a_ = (ecx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056254d je 0x5625a2 */ if (ZF_) goto L_005625a2;
  /* 0056254f nop */ ;
L_00562550:;
  /* 00562550 cmp cl, 0x30 */ { u32 a_ = (ecx & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562553 jl 0x562562 */ if (LT_) goto L_00562562;
  /* 00562555 cmp cl, 0x39 */ { u32 a_ = (ecx & 0xffu), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562558 jg 0x562562 */ if (!(ZF_|LT_)) goto L_00562562;
  /* 0056255a movsx ecx, cl */ { ecx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 0056255d sub ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00562560 jmp 0x562591 */ goto L_00562591;
L_00562562:;
  /* 00562562 cmp cl, 0x61 */ { u32 a_ = (ecx & 0xffu), b_ = 0x61u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562565 jl 0x562579 */ if (LT_) goto L_00562579;
  /* 00562567 cmp cl, 0x66 */ { u32 a_ = (ecx & 0xffu), b_ = 0x66u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056256a jg 0x562579 */ if (!(ZF_|LT_)) goto L_00562579;
  /* 0056256c movsx edx, cl */ { edx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 0056256f sub edx, 0x57 */ { u32 a_ = edx, b_ = 0x57u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00562572 imul edx, edi */ { s64 p_ = (s64)(s32)edx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00562575 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00562577 jmp 0x562596 */ goto L_00562596;
L_00562579:;
  /* 00562579 cmp cl, 0x41 */ { u32 a_ = (ecx & 0xffu), b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056257c jl 0x562615 */ if (LT_) goto L_00562615;
  /* 00562582 cmp cl, 0x46 */ { u32 a_ = (ecx & 0xffu), b_ = 0x46u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562585 jg 0x562615 */ if (!(ZF_|LT_)) goto L_00562615;
  /* 0056258b movsx ecx, cl */ { ecx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 0056258e sub ecx, 0x37 */ { u32 a_ = ecx, b_ = 0x37u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00562591:;
  /* 00562591 imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00562594 add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_00562596:;
  /* 00562596 mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562599 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0056259c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056259d cmp cl, 0x78 */ { u32 a_ = (ecx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005625a0 jne 0x562550 */ if (!ZF_) goto L_00562550;
L_005625a2:;
  /* 005625a2 cmp dword ptr [ebp + 0x14], 1 */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005625a6 jne 0x56261e */ if (!ZF_) goto L_0056261e;
  /* 005625a8 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005625ab mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005625ae mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005625b0 call 0x562090 */ esp -= 4; M32(esp) = 0x5625b5u; SAVEALL; F_00562090(c); ABI_CHECK(0x562090u, 0x5625b0u); RETCHK(0x5625b5u, 0x5625b0u); LOADALL;
  /* 005625b5 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005625b8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005625bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005625bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005625bd lea eax, [edx + eax + 1] */ eax = (u32)((u32)(edx + eax + 0x1u));
  /* 005625c1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005625c2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005625c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005625c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005625c6:;
  /* 005625c6 push 0x3b */ { u32 v_ = 0x3bu; esp -= 4; M32(esp) = v_; }
  /* 005625c8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005625c9 call 0x5fe9c2 */ esp -= 4; M32(esp) = 0x5625ceu; SAVEALL; F_005fe9c2(c); ABI_CHECK(0x5fe9c2u, 0x5625c9u); RETCHK(0x5625ceu, 0x5625c9u); LOADALL;
  /* 005625ce add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005625d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005625d3 je 0x562615 */ if (ZF_) goto L_00562615;
  /* 005625d5 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005625d8 je 0x562615 */ if (ZF_) goto L_00562615;
  /* 005625da mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005625dd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005625df sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005625e1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005625e2 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005625e5 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005625e7 cmp cl, 0x23 */ { u32 a_ = (ecx & 0xffu), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005625ea je 0x5625a2 */ if (ZF_) goto L_005625a2;
  /* 005625ec lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005625f0:;
  /* 005625f0 cmp cl, 0x30 */ { u32 a_ = (ecx & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005625f3 jl 0x562615 */ if (LT_) goto L_00562615;
  /* 005625f5 cmp cl, 0x39 */ { u32 a_ = (ecx & 0xffu), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005625f8 jg 0x562615 */ if (!(ZF_|LT_)) goto L_00562615;
  /* 005625fa movsx edx, cl */ { edx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 005625fd mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562600 sub edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00562603 imul edx, edi */ { s64 p_ = (s64)(s32)edx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00562606 lea edi, [edi + edi*4] */ edi = (u32)((u32)(edi + edi * 4u));
  /* 00562609 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056260b shl edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0056260d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056260e cmp cl, 0x23 */ { u32 a_ = (ecx & 0xffu), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562611 jne 0x5625f0 */ if (!ZF_) goto L_005625f0;
  /* 00562613 jmp 0x5625a2 */ goto L_005625a2;
L_00562615:;
  /* 00562615 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562616 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562617 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00562619 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056261a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056261c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056261d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056261e:;
  /* 0056261e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00562621 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00562624 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00562627 mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00562629 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056262c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056262d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056262e mov dword ptr [ecx], 1 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1u); }
  /* 00562634 lea eax, [edx + eax + 1] */ eax = (u32)((u32)(edx + eax + 0x1u));
  /* 00562638 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00562639 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056263b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056263c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056263d:;
  /* 0056263d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0056263f mov edi, 0x68a120 */ { edi = (u32)(0x68a120u); }
  /* 00562644 jmp 0x562650 */ goto L_00562650;
L_00562646:;
  /* 00562646 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00562649 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00562650:;
  /* 00562650 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00562653 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00562655 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00562656 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00562657 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562658 call 0x5feb06 */ esp -= 4; M32(esp) = 0x56265du; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x562658u); RETCHK(0x56265du, 0x562658u); LOADALL;
  /* 0056265d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562660 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562662 je 0x562683 */ if (ZF_) goto L_00562683;
  /* 00562664 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00562667 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562668 cmp edi, 0x68a15c */ { u32 a_ = edi, b_ = 0x68a15cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056266e jl 0x562646 */ if (LT_) goto L_00562646;
  /* 00562670 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00562673 mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562675 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00562678 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562679 mov byte ptr [ecx], al */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0056267b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056267c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056267e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056267f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00562681 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562682 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00562683:;
  /* 00562683 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00562686 lea eax, [esi + esi*2] */ eax = (u32)((u32)(esi + esi * 2u));
  /* 00562689 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056268c mov cl, byte ptr [eax + 0x68a128] */ { const u32 m_ = (u32)(eax + 0x68a128u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562692 mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00562694 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00562697 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562698 mov dword ptr [ecx], 1 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1u); }
  /* 0056269e mov eax, dword ptr [eax + 0x68a124] */ { const u32 m_ = (u32)(eax + 0x68a124u); eax = (u32)(M32(m_)); }
  /* 005626a4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005626a7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005626a8 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005626aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005626ab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005626ad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005626ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005626b0(CPU *c) {
  NATIVE_HOOK(0x5626b0u) REGS; LOADALL;
L_005626b0:;
  /* 005626b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005626b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005626b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005626b4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005626b6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005626b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005626b9 mov edi, eax */ { edi = (u32)(eax); }
  /* 005626bb je 0x56273e */ if (ZF_) goto L_0056273e;
  /* 005626c1 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005626c4 je 0x56273e */ if (ZF_) goto L_0056273e;
  /* 005626c6 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005626c9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005626cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005626cc je 0x562722 */ if (ZF_) goto L_00562722;
  /* 005626ce mov edi, edi */ { edi = (u32)(edi); }
L_005626d0:;
  /* 005626d0 cmp byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005626d3 je 0x56271b */ if (ZF_) goto L_0056271b;
  /* 005626d5 cmp dword ptr [ebp + 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005626d9 movsx eax, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005626dc jne 0x5626e5 */ if (!ZF_) goto L_005626e5;
  /* 005626de cmp eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005626e3 jge 0x5626ee */ if (!LT_) goto L_005626ee;
L_005626e5:;
  /* 005626e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005626e6 call 0x5feb1e */ esp -= 4; M32(esp) = 0x5626ebu; SAVEALL; F_005feb1e(c); ABI_CHECK(0x5feb1eu, 0x5626e6u); RETCHK(0x5626ebu, 0x5626e6u); LOADALL;
  /* 005626eb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005626ee:;
  /* 005626ee cmp dword ptr [ebp + 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005626f2 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005626f4 movsx eax, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005626f7 jne 0x562700 */ if (!ZF_) goto L_00562700;
  /* 005626f9 cmp eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005626fe jge 0x562709 */ if (!LT_) goto L_00562709;
L_00562700:;
  /* 00562700 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562701 call 0x5feb1e */ esp -= 4; M32(esp) = 0x562706u; SAVEALL; F_005feb1e(c); ABI_CHECK(0x5feb1eu, 0x562701u); RETCHK(0x562706u, 0x562701u); LOADALL;
  /* 00562706 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00562709:;
  /* 00562709 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056270b jne 0x562716 */ if (!ZF_) goto L_00562716;
  /* 0056270d mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562710 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562711 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562712 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562714 jne 0x5626d0 */ if (!ZF_) goto L_005626d0;
L_00562716:;
  /* 00562716 cmp byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562719 jne 0x562737 */ if (!ZF_) goto L_00562737;
L_0056271b:;
  /* 0056271b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056271c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056271d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056271f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562720 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562721 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00562722:;
  /* 00562722 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562724 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562726 je 0x56271b */ if (ZF_) goto L_0056271b;
  /* 00562728 cmp byte ptr [esi], al */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056272a jne 0x562716 */ if (!ZF_) goto L_00562716;
  /* 0056272c mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056272f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562730 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562731 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562733 jne 0x562722 */ if (!ZF_) goto L_00562722;
  /* 00562735 jmp 0x562716 */ goto L_00562716;
L_00562737:;
  /* 00562737 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00562738 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562739 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0056273b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056273c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056273d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056273e:;
  /* 0056273e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056273f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00562741 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562742 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562743 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00562750(CPU *c) {
  NATIVE_HOOK(0x562750u) REGS; LOADALL;
L_00562750:;
  /* 00562750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00562751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00562753 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562756 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562757 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0056275a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056275b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056275c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056275e mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 00562763 mov esi, eax */ { esi = (u32)(eax); }
  /* 00562765 call 0x560320 */ esp -= 4; M32(esp) = 0x56276au; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x562765u); RETCHK(0x56276au, 0x562765u); LOADALL;
  /* 0056276a mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056276d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056276f je 0x562873 */ if (ZF_) goto L_00562873;
  /* 00562775 mov al, byte ptr [0x68a0d9] */ { const u32 m_ = (u32)(0x68a0d9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056277a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056277c je 0x562873 */ if (ZF_) goto L_00562873;
  /* 00562782 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00562785 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00562787 mov byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x0u); }
  /* 0056278b call 0x562390 */ esp -= 4; M32(esp) = 0x562790u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x56278bu); RETCHK(0x562790u, 0x56278bu); LOADALL;
  /* 00562790 mov esi, eax */ { esi = (u32)(eax); }
  /* 00562792 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562794 je 0x5628c9 */ if (ZF_) goto L_005628c9;
  /* 0056279a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005627a0:;
  /* 005627a0 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005627a3 je 0x5628c9 */ if (ZF_) goto L_005628c9;
  /* 005627a9 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005627ac mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005627af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005627b0 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005627b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005627b4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005627b6 call 0x5626b0 */ esp -= 4; M32(esp) = 0x5627bbu; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x5627b6u); RETCHK(0x5627bbu, 0x5627b6u); LOADALL;
  /* 005627bb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005627be test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005627c0 jne 0x5628c9 */ if (!ZF_) goto L_005628c9;
  /* 005627c6 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005627c8 cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005627cb je 0x562864 */ if (ZF_) goto L_00562864;
  /* 005627d1 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005627d4 je 0x562864 */ if (ZF_) goto L_00562864;
  /* 005627da movzx edx, bl */ { edx = (u32)((ebx & 0xffu)); }
  /* 005627dd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005627de call 0x5fe9ec */ esp -= 4; M32(esp) = 0x5627e3u; SAVEALL; F_005fe9ec(c); ABI_CHECK(0x5fe9ecu, 0x5627deu); RETCHK(0x5627e3u, 0x5627deu); LOADALL;
  /* 005627e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005627e6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005627e8 jne 0x562864 */ if (!ZF_) goto L_00562864;
  /* 005627ea cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005627ed je 0x562864 */ if (ZF_) goto L_00562864;
  /* 005627ef cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005627f2 je 0x562864 */ if (ZF_) goto L_00562864;
  /* 005627f4 mov al, byte ptr [ebp + 0xf] */ { const u32 m_ = (u32)(ebp + 0xfu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005627f7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005627f9 je 0x562814 */ if (ZF_) goto L_00562814;
  /* 005627fb lea eax, [ebp + 0xf] */ eax = (u32)((u32)(ebp + 0xfu));
  /* 005627fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005627ff mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562802 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 00562807 mov byte ptr [ebp + 0xf], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x20u); }
  /* 0056280b call 0x5603f0 */ esp -= 4; M32(esp) = 0x562810u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56280bu); RETCHK(0x562810u, 0x56280bu); LOADALL;
  /* 00562810 mov byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x0u); }
L_00562814:;
  /* 00562814 mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00562817 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0056281a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056281b lea ebx, [ebp - 0xc] */ ebx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0056281e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00562820 mov byte ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)(0x0u); }
  /* 00562824 mov byte ptr [ebp - 7], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M8(m_) = (u8)(0x0u); }
  /* 00562828 mov byte ptr [ebp - 6], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffau); M8(m_) = (u8)(0x0u); }
  /* 0056282c mov byte ptr [ebp - 5], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)(0x0u); }
  /* 00562830 call 0x562010 */ esp -= 4; M32(esp) = 0x562835u; SAVEALL; F_00562010(c); ABI_CHECK(0x562010u, 0x562830u); RETCHK(0x562835u, 0x562830u); LOADALL;
  /* 00562835 mov edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edi = (u32)(M32(m_)); }
  /* 00562838 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056283b cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056283e mov esi, eax */ { esi = (u32)(eax); }
  /* 00562840 jne 0x562856 */ if (!ZF_) goto L_00562856;
  /* 00562842 mov dl, byte ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562845 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00562848 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562849 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056284c mov byte ptr [ebp - 4], dl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0056284f call 0x5603f0 */ esp -= 4; M32(esp) = 0x562854u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56284fu); RETCHK(0x562854u, 0x56284fu); LOADALL;
  /* 00562854 jmp 0x562869 */ goto L_00562869;
L_00562856:;
  /* 00562856 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562859 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0056285c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056285d call 0x5603f0 */ esp -= 4; M32(esp) = 0x562862u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56285du); RETCHK(0x562862u, 0x56285du); LOADALL;
  /* 00562862 jmp 0x562869 */ goto L_00562869;
L_00562864:;
  /* 00562864 mov byte ptr [ebp + 0xf], 1 */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x1u); }
  /* 00562868 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00562869:;
  /* 00562869 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056286b jne 0x5627a0 */ if (!ZF_) goto L_005627a0;
  /* 00562871 jmp 0x5628c9 */ goto L_005628c9;
L_00562873:;
  /* 00562873 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562875 je 0x5628c9 */ if (ZF_) goto L_005628c9;
L_00562877:;
  /* 00562877 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056287a je 0x5628c9 */ if (ZF_) goto L_005628c9;
  /* 0056287c mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0056287f mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00562882 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00562885 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562886 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00562887 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00562889 call 0x5626b0 */ esp -= 4; M32(esp) = 0x56288eu; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x562889u); RETCHK(0x56288eu, 0x562889u); LOADALL;
  /* 0056288e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562891 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562893 jne 0x5628c9 */ if (!ZF_) goto L_005628c9;
  /* 00562895 mov byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00562898 mov byte ptr [ebp + 0xd], al */ { const u32 m_ = (u32)(ebp + 0xdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0056289b mov byte ptr [ebp + 0xe], al */ { const u32 m_ = (u32)(ebp + 0xeu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0056289e mov byte ptr [ebp + 0xf], al */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005628a1 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 005628a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005628a5 mov edx, edi */ { edx = (u32)(edi); }
  /* 005628a7 lea ebx, [ebp - 0xc] */ ebx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005628aa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005628ac call 0x562010 */ esp -= 4; M32(esp) = 0x5628b1u; SAVEALL; F_00562010(c); ABI_CHECK(0x562010u, 0x5628acu); RETCHK(0x5628b1u, 0x5628acu); LOADALL;
  /* 005628b1 mov edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edi = (u32)(M32(m_)); }
  /* 005628b4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005628b7 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 005628ba mov esi, eax */ { esi = (u32)(eax); }
  /* 005628bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005628bf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005628c0 call 0x5603f0 */ esp -= 4; M32(esp) = 0x5628c5u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5628c0u); RETCHK(0x5628c5u, 0x5628c0u); LOADALL;
  /* 005628c5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005628c7 jne 0x562877 */ if (!ZF_) goto L_00562877;
L_005628c9:;
  /* 005628c9 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005628cc lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 005628cf nop */ ;
L_005628d0:;
  /* 005628d0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005628d2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005628d3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005628d5 jne 0x5628d0 */ if (!ZF_) goto L_005628d0;
  /* 005628d7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005628d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005628da add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005628dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005628dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005628de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005628e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005628e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005628f0(CPU *c) {
  NATIVE_HOOK(0x5628f0u) REGS; LOADALL;
L_005628f0:;
  /* 005628f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005628f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005628f3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005628f6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005628f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005628f8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005628fa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005628fc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005628fd lea ebx, [esi + 0x34] */ ebx = (u32)((u32)(esi + 0x34u));
  /* 00562900 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00562902 mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 00562907 mov byte ptr [esi + 0x2c], al */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0056290a mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0056290d call 0x560320 */ esp -= 4; M32(esp) = 0x562912u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x56290du); RETCHK(0x562912u, 0x56290du); LOADALL;
  /* 00562912 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00562915 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00562917 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562919 mov dword ptr [esi + 0x40], edi */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(edi); }
  /* 0056291c mov dword ptr [esi + 0x3c], edi */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(edi); }
  /* 0056291f je 0x5629a7 */ if (ZF_) goto L_005629a7;
  /* 00562925 cmp byte ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562928 je 0x5629a7 */ if (ZF_) goto L_005629a7;
  /* 0056292a mov eax, 0xffffffff */ { eax = (u32)(0xffffffffu); }
  /* 0056292f mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00562932 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00562935 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00562938 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056293a je 0x562949 */ if (ZF_) goto L_00562949;
  /* 0056293c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0056293e mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00562941 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00562944 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00562947 jmp 0x56294f */ goto L_0056294f;
L_00562949:;
  /* 00562949 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0056294c mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_0056294f:;
  /* 0056294f mov edx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); edx = (u32)(M32(m_)); }
  /* 00562952 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00562955 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00562958 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056295a mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0056295d mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00562960 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00562963 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00562966 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00562969 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0056296c mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0056296f jne 0x562999 */ if (!ZF_) goto L_00562999;
  /* 00562971 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562973 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562975 je 0x562999 */ if (ZF_) goto L_00562999;
  /* 00562977 cmp al, 0xef */ { u32 a_ = (eax & 0xffu), b_ = 0xefu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562979 jne 0x562999 */ if (!ZF_) goto L_00562999;
  /* 0056297b mov al, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056297e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562980 je 0x562999 */ if (ZF_) goto L_00562999;
  /* 00562982 cmp al, 0xbb */ { u32 a_ = (eax & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562984 jne 0x562999 */ if (!ZF_) goto L_00562999;
  /* 00562986 mov al, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562989 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056298b je 0x562999 */ if (ZF_) goto L_00562999;
  /* 0056298d cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056298f jne 0x562999 */ if (!ZF_) goto L_00562999;
  /* 00562991 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 00562996 mov byte ptr [esi + 0x44], bl */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((ebx & 0xffu)); }
L_00562999:;
  /* 00562999 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056299b call 0x562390 */ esp -= 4; M32(esp) = 0x5629a0u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x56299bu); RETCHK(0x5629a0u, 0x56299bu); LOADALL;
  /* 005629a0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005629a2 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005629a5 jne 0x5629c3 */ if (!ZF_) goto L_005629c3;
L_005629a7:;
  /* 005629a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005629a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_005629a9:;
  /* 005629a9 mov eax, 0xd */ { eax = (u32)(0xdu); }
  /* 005629ae xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005629b0 call 0x562a90 */ esp -= 4; M32(esp) = 0x5629b5u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x5629b0u); RETCHK(0x5629b5u, 0x5629b0u); LOADALL;
  /* 005629b5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005629b7:;
  /* 005629b7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005629b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005629b9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005629ba mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005629bc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005629bd ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005629c0:;
  /* 005629c0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_005629c3:;
  /* 005629c3 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005629c6 je 0x562a78 */ if (ZF_) goto L_00562a78;
  /* 005629cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005629cd mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005629cf mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005629d1 call 0x562b00 */ esp -= 4; M32(esp) = 0x5629d6u; SAVEALL; F_00562b00(c); ABI_CHECK(0x562b00u, 0x5629d1u); RETCHK(0x5629d6u, 0x5629d1u); LOADALL;
  /* 005629d6 mov edi, eax */ { edi = (u32)(eax); }
  /* 005629d8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005629da je 0x562a75 */ if (ZF_) goto L_00562a75;
  /* 005629e0 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005629e3 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005629e5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005629e6 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005629e9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005629ea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005629eb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005629ed call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5629f0u; SAVEALL; call_ind(c, t_); RETCHK(0x5629f0u, 0x5629edu); LOADALL; }
  /* 005629f0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005629f3 mov eax, edi */ { eax = (u32)(edi); }
  /* 005629f5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005629f7 call 0x560b70 */ esp -= 4; M32(esp) = 0x5629fcu; SAVEALL; F_00560b70(c); ABI_CHECK(0x560b70u, 0x5629f7u); RETCHK(0x5629fcu, 0x5629f7u); LOADALL;
  /* 005629fc test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005629fe jne 0x562a60 */ if (!ZF_) goto L_00562a60;
  /* 00562a00 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00562a02 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562a04 call dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x562a07u; SAVEALL; call_ind(c, t_); RETCHK(0x562a07u, 0x562a04u); LOADALL; }
  /* 00562a07 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562a09 je 0x562a60 */ if (ZF_) goto L_00562a60;
  /* 00562a0b mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00562a0d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562a0f call dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x562a12u; SAVEALL; call_ind(c, t_); RETCHK(0x562a12u, 0x562a0fu); LOADALL; }
  /* 00562a12 mov edi, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); edi = (u32)(M32(m_)); }
  /* 00562a15 mov al, byte ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562a18 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00562a1b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562a1d jne 0x562a26 */ if (!ZF_) goto L_00562a26;
  /* 00562a1f mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 00562a24 jmp 0x562a60 */ goto L_00562a60;
L_00562a26:;
  /* 00562a26 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562a28 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00562a2a mov eax, 0x656c1c */ { eax = (u32)(0x656c1cu); }
  /* 00562a2f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562a31 call 0x5626b0 */ esp -= 4; M32(esp) = 0x562a36u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x562a31u); RETCHK(0x562a36u, 0x562a31u); LOADALL;
  /* 00562a36 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562a39 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562a3b je 0x562a44 */ if (ZF_) goto L_00562a44;
  /* 00562a3d mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 00562a42 jmp 0x562a60 */ goto L_00562a60;
L_00562a44:;
  /* 00562a44 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562a46 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00562a48 mov eax, 0x656c14 */ { eax = (u32)(0x656c14u); }
  /* 00562a4d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562a4f call 0x5626b0 */ esp -= 4; M32(esp) = 0x562a54u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x562a4fu); RETCHK(0x562a54u, 0x562a4fu); LOADALL;
  /* 00562a54 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562a57 neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 00562a59 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00562a5b add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00562a5e mov ebx, eax */ { ebx = (u32)(eax); }
L_00562a60:;
  /* 00562a60 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00562a63 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00562a65 call 0x562390 */ esp -= 4; M32(esp) = 0x562a6au; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x562a65u); RETCHK(0x562a6au, 0x562a65u); LOADALL;
  /* 00562a6a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562a6c mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00562a6f jne 0x5629c0 */ if (!ZF_) goto L_005629c0;
L_00562a75:;
  /* 00562a75 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_00562a78:;
  /* 00562a78 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00562a7b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562a7d jne 0x5629b7 */ if (!ZF_) goto L_005629b7;
  /* 00562a83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562a84 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562a86 jmp 0x5629a9 */ goto L_005629a9;
}

void F_00562a90(CPU *c) {
  NATIVE_HOOK(0x562a90u) REGS; LOADALL;
L_00562a90:;
  /* 00562a90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00562a91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00562a93 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562a94 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00562a96 mov cl, byte ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562a99 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562a9b jne 0x562af0 */ if (!ZF_) goto L_00562af0;
  /* 00562a9d mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 00562aa0 mov byte ptr [esi + 0x2c], 1 */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)(0x1u); }
  /* 00562aa4 mov edx, dword ptr [eax*4 + 0x68a0e0] */ { const u32 m_ = (u32)(eax * 4u + 0x68a0e0u); edx = (u32)(M32(m_)); }
  /* 00562aab mov eax, edx */ { eax = (u32)(edx); }
  /* 00562aad push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562aae lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
L_00562ab1:;
  /* 00562ab1 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562ab3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562ab4 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562ab6 jne 0x562ab1 */ if (!ZF_) goto L_00562ab1;
  /* 00562ab8 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00562aba lea ebx, [esi + 0x34] */ ebx = (u32)((u32)(esi + 0x34u));
  /* 00562abd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00562abf call 0x560320 */ esp -= 4; M32(esp) = 0x562ac4u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x562abfu); RETCHK(0x562ac4u, 0x562abfu); LOADALL;
  /* 00562ac4 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00562ac7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562ac9 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 00562acc mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 00562acf je 0x562aef */ if (ZF_) goto L_00562aef;
  /* 00562ad1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00562ad4 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562ad6 je 0x562aef */ if (ZF_) goto L_00562aef;
  /* 00562ad8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00562adb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562adc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562add mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00562adf call 0x5621a0 */ esp -= 4; M32(esp) = 0x562ae4u; SAVEALL; F_005621a0(c); ABI_CHECK(0x5621a0u, 0x562adfu); RETCHK(0x562ae4u, 0x562adfu); LOADALL;
  /* 00562ae4 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00562ae6 mov dword ptr [esi + 0x3c], ecx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 00562ae9 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00562aec mov dword ptr [esi + 0x40], edx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(edx); }
L_00562aef:;
  /* 00562aef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00562af0:;
  /* 00562af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562af1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562af2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00562b00(CPU *c) {
  NATIVE_HOOK(0x562b00u) REGS; LOADALL;
L_00562b00:;
  /* 00562b00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00562b01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00562b03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00562b05 push 0x61c3f6 */ { u32 v_ = 0x61c3f6u; esp -= 4; M32(esp) = v_; }
  /* 00562b0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00562b10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562b11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00562b18 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562b1b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562b1c mov esi, edx */ { esi = (u32)(edx); }
  /* 00562b1e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562b1f mov eax, esi */ { eax = (u32)(esi); }
  /* 00562b21 call 0x562390 */ esp -= 4; M32(esp) = 0x562b26u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x562b21u); RETCHK(0x562b26u, 0x562b21u); LOADALL;
  /* 00562b26 mov edi, eax */ { edi = (u32)(eax); }
  /* 00562b28 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562b2a je 0x562cdc */ if (ZF_) goto L_00562cdc;
  /* 00562b30 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562b32 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562b34 je 0x562cdc */ if (ZF_) goto L_00562cdc;
  /* 00562b3a cmp al, 0x3c */ { u32 a_ = (eax & 0xffu), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562b3c jne 0x562cdc */ if (!ZF_) goto L_00562cdc;
  /* 00562b42 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562b45 call 0x560d40 */ esp -= 4; M32(esp) = 0x562b4au; SAVEALL; F_00560d40(c); ABI_CHECK(0x560d40u, 0x562b45u); RETCHK(0x562b4au, 0x562b45u); LOADALL;
  /* 00562b4a mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00562b4d mov eax, esi */ { eax = (u32)(esi); }
  /* 00562b4f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562b51 call 0x562390 */ esp -= 4; M32(esp) = 0x562b56u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x562b51u); RETCHK(0x562b56u, 0x562b51u); LOADALL;
  /* 00562b56 mov edi, eax */ { edi = (u32)(eax); }
  /* 00562b58 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562b5a je 0x562cdc */ if (ZF_) goto L_00562cdc;
  /* 00562b60 cmp byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562b63 je 0x562cdc */ if (ZF_) goto L_00562cdc;
  /* 00562b69 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562b6a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00562b6c mov eax, 0x656c0c */ { eax = (u32)(0x656c0cu); }
  /* 00562b71 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562b73 call 0x5626b0 */ esp -= 4; M32(esp) = 0x562b78u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x562b73u); RETCHK(0x562b78u, 0x562b73u); LOADALL;
  /* 00562b78 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562b7b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562b7d je 0x562b9b */ if (ZF_) goto L_00562b9b;
  /* 00562b7f push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 00562b81 call 0x5fe934 */ esp -= 4; M32(esp) = 0x562b86u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x562b81u); RETCHK(0x562b86u, 0x562b81u); LOADALL;
  /* 00562b86 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562b89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562b8b je 0x562c5f */ if (ZF_) goto L_00562c5f;
  /* 00562b91 call 0x560780 */ esp -= 4; M32(esp) = 0x562b96u; SAVEALL; F_00560780(c); ABI_CHECK(0x560780u, 0x562b91u); RETCHK(0x562b96u, 0x562b91u); LOADALL;
  /* 00562b96 jmp 0x562c91 */ goto L_00562c91;
L_00562b9b:;
  /* 00562b9b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562b9c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562b9e mov eax, 0x656a14 */ { eax = (u32)(0x656a14u); }
  /* 00562ba3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562ba5 call 0x5626b0 */ esp -= 4; M32(esp) = 0x562baau; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x562ba5u); RETCHK(0x562baau, 0x562ba5u); LOADALL;
  /* 00562baa add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562bad test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562baf je 0x562bcd */ if (ZF_) goto L_00562bcd;
  /* 00562bb1 push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 00562bb3 call 0x5fe934 */ esp -= 4; M32(esp) = 0x562bb8u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x562bb3u); RETCHK(0x562bb8u, 0x562bb3u); LOADALL;
  /* 00562bb8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562bbb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562bbd je 0x562c5f */ if (ZF_) goto L_00562c5f;
  /* 00562bc3 call 0x560670 */ esp -= 4; M32(esp) = 0x562bc8u; SAVEALL; F_00560670(c); ABI_CHECK(0x560670u, 0x562bc3u); RETCHK(0x562bc8u, 0x562bc3u); LOADALL;
  /* 00562bc8 jmp 0x562c91 */ goto L_00562c91;
L_00562bcd:;
  /* 00562bcd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562bce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562bd0 mov eax, 0x656a04 */ { eax = (u32)(0x656a04u); }
  /* 00562bd5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562bd7 call 0x5626b0 */ esp -= 4; M32(esp) = 0x562bdcu; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x562bd7u); RETCHK(0x562bdcu, 0x562bd7u); LOADALL;
  /* 00562bdc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562bdf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562be1 je 0x562c22 */ if (ZF_) goto L_00562c22;
  /* 00562be3 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 00562be5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x562beau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x562be5u); RETCHK(0x562beau, 0x562be5u); LOADALL;
  /* 00562bea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562bed mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00562bf0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562bf2 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00562bf9 je 0x562c13 */ if (ZF_) goto L_00562c13;
  /* 00562bfb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562bfc mov edi, 0x63e71c */ { edi = (u32)(0x63e71cu); }
  /* 00562c01 call 0x5606d0 */ esp -= 4; M32(esp) = 0x562c06u; SAVEALL; F_005606d0(c); ABI_CHECK(0x5606d0u, 0x562c01u); RETCHK(0x562c06u, 0x562c01u); LOADALL;
  /* 00562c06 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00562c0d mov byte ptr [eax + 0x2c], 1 */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)(0x1u); }
  /* 00562c11 jmp 0x562c91 */ goto L_00562c91;
L_00562c13:;
  /* 00562c13 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00562c15 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00562c1c mov byte ptr [eax + 0x2c], 1 */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)(0x1u); }
  /* 00562c20 jmp 0x562c91 */ goto L_00562c91;
L_00562c22:;
  /* 00562c22 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562c23 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562c25 mov eax, 0x656c08 */ { eax = (u32)(0x656c08u); }
  /* 00562c2a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562c2c call 0x5626b0 */ esp -= 4; M32(esp) = 0x562c31u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x562c2cu); RETCHK(0x562c31u, 0x562c2cu); LOADALL;
  /* 00562c31 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562c34 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562c36 jne 0x562c4a */ if (!ZF_) goto L_00562c4a;
  /* 00562c38 mov al, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562c3b call 0x562160 */ esp -= 4; M32(esp) = 0x562c40u; SAVEALL; F_00562160(c); ABI_CHECK(0x562160u, 0x562c3bu); RETCHK(0x562c40u, 0x562c3bu); LOADALL;
  /* 00562c40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562c42 jne 0x562c63 */ if (!ZF_) goto L_00562c63;
  /* 00562c44 cmp byte ptr [edi + 1], 0x5f */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x5fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562c48 je 0x562c63 */ if (ZF_) goto L_00562c63;
L_00562c4a:;
  /* 00562c4a push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 00562c4c call 0x5fe934 */ esp -= 4; M32(esp) = 0x562c51u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x562c4cu); RETCHK(0x562c51u, 0x562c4cu); LOADALL;
  /* 00562c51 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562c54 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562c56 je 0x562c5f */ if (ZF_) goto L_00562c5f;
  /* 00562c58 call 0x560820 */ esp -= 4; M32(esp) = 0x562c5du; SAVEALL; F_00560820(c); ABI_CHECK(0x560820u, 0x562c58u); RETCHK(0x562c5du, 0x562c58u); LOADALL;
  /* 00562c5d jmp 0x562c91 */ goto L_00562c91;
L_00562c5f:;
  /* 00562c5f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00562c61 jmp 0x562c91 */ goto L_00562c91;
L_00562c63:;
  /* 00562c63 push 0x50 */ { u32 v_ = 0x50u; esp -= 4; M32(esp) = v_; }
  /* 00562c65 call 0x5fe934 */ esp -= 4; M32(esp) = 0x562c6au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x562c65u); RETCHK(0x562c6au, 0x562c65u); LOADALL;
  /* 00562c6a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562c6d mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00562c70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562c72 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00562c79 je 0x562c88 */ if (ZF_) goto L_00562c88;
  /* 00562c7b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562c7c mov edi, 0x63e71c */ { edi = (u32)(0x63e71cu); }
  /* 00562c81 call 0x560d70 */ esp -= 4; M32(esp) = 0x562c86u; SAVEALL; F_00560d70(c); ABI_CHECK(0x560d70u, 0x562c81u); RETCHK(0x562c86u, 0x562c81u); LOADALL;
  /* 00562c86 jmp 0x562c8a */ goto L_00562c8a;
L_00562c88:;
  /* 00562c88 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00562c8a:;
  /* 00562c8a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
L_00562c91:;
  /* 00562c91 mov edi, eax */ { edi = (u32)(eax); }
  /* 00562c93 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562c95 je 0x562cb1 */ if (ZF_) goto L_00562cb1;
  /* 00562c97 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562c9a mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00562c9d mov eax, edi */ { eax = (u32)(edi); }
  /* 00562c9f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562ca0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562ca1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00562ca4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00562cab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00562cad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562cae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00562cb1:;
  /* 00562cb1 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00562cb4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562cb6 je 0x562cc8 */ if (ZF_) goto L_00562cc8;
  /* 00562cb8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562cba push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562cbc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00562cbe mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 00562cc3 call 0x562a90 */ esp -= 4; M32(esp) = 0x562cc8u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x562cc3u); RETCHK(0x562cc8u, 0x562cc3u); LOADALL;
L_00562cc8:;
  /* 00562cc8 mov eax, edi */ { eax = (u32)(edi); }
  /* 00562cca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562ccb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562ccc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00562ccf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00562cd6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00562cd8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562cd9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00562cdc:;
  /* 00562cdc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00562cdf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562ce0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00562ce2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562ce3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00562cea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00562cec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562ced ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00562cf0(CPU *c) {
  NATIVE_HOOK(0x562cf0u) REGS; LOADALL;
L_00562cf0:;
  /* 00562cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00562cf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00562cf3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00562cf5 push 0x61d608 */ { u32 v_ = 0x61d608u; esp -= 4; M32(esp) = v_; }
  /* 00562cfa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00562d00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562d01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00562d08 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562d0b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562d0c mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00562d0f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562d10 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562d11 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00562d13 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00562d16 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00562d18 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00562d1b call 0x562390 */ esp -= 4; M32(esp) = 0x562d20u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x562d1bu); RETCHK(0x562d20u, 0x562d1bu); LOADALL;
  /* 00562d20 mov esi, eax */ { esi = (u32)(eax); }
  /* 00562d22 mov eax, edi */ { eax = (u32)(edi); }
  /* 00562d24 call 0x560d40 */ esp -= 4; M32(esp) = 0x562d29u; SAVEALL; F_00560d40(c); ABI_CHECK(0x560d40u, 0x562d24u); RETCHK(0x562d29u, 0x562d24u); LOADALL;
  /* 00562d29 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562d2b mov edx, eax */ { edx = (u32)(eax); }
  /* 00562d2d mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00562d30 je 0x563014 */ if (ZF_) goto L_00563014;
  /* 00562d36 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562d39 je 0x563014 */ if (ZF_) goto L_00563014;
  /* 00562d3f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00562d42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562d44 je 0x562d67 */ if (ZF_) goto L_00562d67;
  /* 00562d46 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562d47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562d48 mov edi, eax */ { edi = (u32)(eax); }
  /* 00562d4a call 0x5621a0 */ esp -= 4; M32(esp) = 0x562d4fu; SAVEALL; F_005621a0(c); ABI_CHECK(0x5621a0u, 0x562d4au); RETCHK(0x562d4fu, 0x562d4au); LOADALL;
  /* 00562d4f mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00562d52 mov eax, edi */ { eax = (u32)(edi); }
  /* 00562d54 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00562d56 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00562d59 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00562d5c mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00562d5f mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00562d62 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00562d65 mov edi, ecx */ { edi = (u32)(ecx); }
L_00562d67:;
  /* 00562d67 cmp byte ptr [esi], 0x3c */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562d6a je 0x562d7d */ if (ZF_) goto L_00562d7d;
  /* 00562d6c test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562d6e je 0x563029 */ if (ZF_) goto L_00563029;
  /* 00562d74 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562d75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562d76 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00562d78 jmp 0x56301d */ goto L_0056301d;
L_00562d7d:;
  /* 00562d7d lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 00562d80 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00562d82 call 0x562390 */ esp -= 4; M32(esp) = 0x562d87u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x562d82u); RETCHK(0x562d87u, 0x562d82u); LOADALL;
  /* 00562d87 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00562d89 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00562d8c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562d8d mov eax, edi */ { eax = (u32)(edi); }
  /* 00562d8f mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 00562d92 call 0x562450 */ esp -= 4; M32(esp) = 0x562d97u; SAVEALL; F_00562450(c); ABI_CHECK(0x562450u, 0x562d92u); RETCHK(0x562d97u, 0x562d92u); LOADALL;
  /* 00562d97 mov esi, eax */ { esi = (u32)(eax); }
  /* 00562d99 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562d9c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562d9e je 0x562ffe */ if (ZF_) goto L_00562ffe;
  /* 00562da4 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562da7 je 0x562ffe */ if (ZF_) goto L_00562ffe;
  /* 00562dad mov eax, 0x656a3c */ { eax = (u32)(0x656a3cu); }
  /* 00562db2 lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 00562db5 call 0x560440 */ esp -= 4; M32(esp) = 0x562dbau; SAVEALL; F_00560440(c); ABI_CHECK(0x560440u, 0x562db5u); RETCHK(0x562dbau, 0x562db5u); LOADALL;
  /* 00562dba mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00562dbc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00562dbd mov eax, edi */ { eax = (u32)(edi); }
  /* 00562dbf mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00562dc6 call 0x560260 */ esp -= 4; M32(esp) = 0x562dcbu; SAVEALL; F_00560260(c); ABI_CHECK(0x560260u, 0x562dc6u); RETCHK(0x562dcbu, 0x562dc6u); LOADALL;
  /* 00562dcb mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00562dcd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00562dce mov edx, 0x656a4c */ { edx = (u32)(0x656a4cu); }
  /* 00562dd3 call 0x5604d0 */ esp -= 4; M32(esp) = 0x562dd8u; SAVEALL; F_005604d0(c); ABI_CHECK(0x5604d0u, 0x562dd3u); RETCHK(0x562dd8u, 0x562dd3u); LOADALL;
  /* 00562dd8 jmp 0x562de0 */ goto L_00562de0;
L_00562de0:;
  /* 00562de0 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562de3 je 0x562ecd */ if (ZF_) goto L_00562ecd;
  /* 00562de9 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00562dec mov eax, edi */ { eax = (u32)(edi); }
  /* 00562dee mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00562df0 call 0x562390 */ esp -= 4; M32(esp) = 0x562df5u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x562df0u); RETCHK(0x562df5u, 0x562df0u); LOADALL;
  /* 00562df5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00562df7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562df9 je 0x562fcf */ if (ZF_) goto L_00562fcf;
  /* 00562dff mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562e01 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562e03 je 0x562fcf */ if (ZF_) goto L_00562fcf;
  /* 00562e09 cmp al, 0x2f */ { u32 a_ = (eax & 0xffu), b_ = 0x2fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562e0b je 0x562ea6 */ if (ZF_) goto L_00562ea6;
  /* 00562e11 cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562e13 je 0x562ef5 */ if (ZF_) goto L_00562ef5;
  /* 00562e19 push 0x24 */ { u32 v_ = 0x24u; esp -= 4; M32(esp) = v_; }
  /* 00562e1b call 0x5fe934 */ esp -= 4; M32(esp) = 0x562e20u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x562e1bu); RETCHK(0x562e20u, 0x562e1bu); LOADALL;
  /* 00562e20 mov edi, eax */ { edi = (u32)(eax); }
  /* 00562e22 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00562e24 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562e27 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562e29 je 0x562f73 */ if (ZF_) goto L_00562f73;
  /* 00562e2f or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00562e32 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00562e35 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00562e38 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00562e3b mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00562e3e mov dword ptr [edi], 0x65689c */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x65689cu); }
  /* 00562e44 mov dword ptr [edi + 0x14], 0x7a70b8 */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(0x7a70b8u); }
  /* 00562e4b mov dword ptr [edi + 0x18], 0x7a70b8 */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0x7a70b8u); }
  /* 00562e52 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00562e55 mov dword ptr [edi + 0x20], eax */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(eax); }
  /* 00562e58 mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00562e5b mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00562e5e mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00562e60 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00562e63 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00562e66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562e67 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00562e68 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562e69 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562e6b call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x562e6eu; SAVEALL; call_ind(c, t_); RETCHK(0x562e6eu, 0x562e6bu); LOADALL; }
  /* 00562e6e mov esi, eax */ { esi = (u32)(eax); }
  /* 00562e70 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562e72 je 0x562f97 */ if (ZF_) goto L_00562f97;
  /* 00562e78 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562e7b je 0x562f97 */ if (ZF_) goto L_00562f97;
  /* 00562e81 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 00562e84 add ebx, 0x2c */ { u32 a_ = ebx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00562e87 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00562e88 lea eax, [edi + 0x14] */ eax = (u32)((u32)(edi + 0x14u));
  /* 00562e8b call 0x561f70 */ esp -= 4; M32(esp) = 0x562e90u; SAVEALL; F_00561f70(c); ABI_CHECK(0x561f70u, 0x562e8bu); RETCHK(0x562e90u, 0x562e8bu); LOADALL;
  /* 00562e90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562e92 jne 0x562f89 */ if (!ZF_) goto L_00562f89;
  /* 00562e98 mov eax, edi */ { eax = (u32)(edi); }
  /* 00562e9a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00562e9c call 0x561f20 */ esp -= 4; M32(esp) = 0x562ea1u; SAVEALL; F_00561f20(c); ABI_CHECK(0x561f20u, 0x562e9cu); RETCHK(0x562ea1u, 0x562e9cu); LOADALL;
  /* 00562ea1 jmp 0x562de0 */ goto L_00562de0;
L_00562ea6:;
  /* 00562ea6 mov al, byte ptr [ebx + 1] */ { const u32 m_ = (u32)(ebx + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00562ea9 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00562eaa cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562eac je 0x562eca */ if (ZF_) goto L_00562eca;
  /* 00562eae mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00562eb1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562eb3 je 0x562fe9 */ if (ZF_) goto L_00562fe9;
  /* 00562eb9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00562ebc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562ebd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00562ebe mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00562ec0 mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 00562ec5 jmp 0x562fe4 */ goto L_00562fe4;
L_00562eca:;
  /* 00562eca lea esi, [ebx + 1] */ esi = (u32)((u32)(ebx + 0x1u));
L_00562ecd:;
  /* 00562ecd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562ed0 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562ed5 je 0x562ee0 */ if (ZF_) goto L_00562ee0;
  /* 00562ed7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562ed8 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x562eddu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x562ed8u); RETCHK(0x562eddu, 0x562ed8u); LOADALL;
  /* 00562edd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00562ee0:;
  /* 00562ee0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562ee1 mov eax, esi */ { eax = (u32)(esi); }
  /* 00562ee3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562ee4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00562ee5 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00562ee8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00562eef mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00562ef1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562ef2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00562ef5:;
  /* 00562ef5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00562ef8 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00562efb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562efc lea edx, [ebx + 1] */ edx = (u32)((u32)(ebx + 0x1u));
  /* 00562eff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562f00 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562f02 call 0x563040 */ esp -= 4; M32(esp) = 0x562f07u; SAVEALL; F_00563040(c); ABI_CHECK(0x563040u, 0x562f02u); RETCHK(0x562f07u, 0x562f02u); LOADALL;
  /* 00562f07 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00562f09 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562f0b je 0x562fe9 */ if (ZF_) goto L_00562fe9;
  /* 00562f11 cmp byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00562f14 je 0x562fe9 */ if (ZF_) goto L_00562fe9;
  /* 00562f1a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562f1d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562f1e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00562f20 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00562f23 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00562f25 call 0x5626b0 */ esp -= 4; M32(esp) = 0x562f2au; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x562f25u); RETCHK(0x562f2au, 0x562f25u); LOADALL;
  /* 00562f2a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562f2d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00562f2f je 0x562f5d */ if (ZF_) goto L_00562f5d;
  /* 00562f31 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562f34 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00562f36 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00562f38 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562f3d je 0x562ee0 */ if (ZF_) goto L_00562ee0;
  /* 00562f3f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562f40 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x562f45u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x562f40u); RETCHK(0x562f45u, 0x562f40u); LOADALL;
  /* 00562f45 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562f48 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00562f49 mov eax, esi */ { eax = (u32)(esi); }
  /* 00562f4b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00562f4c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00562f4d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00562f50 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00562f57 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00562f59 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00562f5a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00562f5d:;
  /* 00562f5d mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00562f60 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562f62 je 0x562fe9 */ if (ZF_) goto L_00562fe9;
  /* 00562f68 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562f69 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00562f6a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00562f6c mov eax, 9 */ { eax = (u32)(0x9u); }
  /* 00562f71 jmp 0x562fe2 */ goto L_00562fe2;
L_00562f73:;
  /* 00562f73 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00562f76 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562f78 je 0x562fe9 */ if (ZF_) goto L_00562fe9;
  /* 00562f7a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00562f7d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00562f80 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00562f81 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562f82 mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 00562f87 jmp 0x562fe0 */ goto L_00562fe0;
L_00562f89:;
  /* 00562f89 mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 00562f8c add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00562f8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562f90 call 0x560610 */ esp -= 4; M32(esp) = 0x562f95u; SAVEALL; F_00560610(c); ABI_CHECK(0x560610u, 0x562f90u); RETCHK(0x562f95u, 0x562f90u); LOADALL;
  /* 00562f95 jmp 0x562fb2 */ goto L_00562fb2;
L_00562f97:;
  /* 00562f97 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00562f9a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562f9c je 0x562fb2 */ if (ZF_) goto L_00562fb2;
  /* 00562f9e mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00562fa1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00562fa4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562fa5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00562fa6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00562fa8 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 00562fad call 0x562a90 */ esp -= 4; M32(esp) = 0x562fb2u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x562fadu); RETCHK(0x562fb2u, 0x562fadu); LOADALL;
L_00562fb2:;
  /* 00562fb2 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00562fb4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00562fb6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00562fb8 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x562fbau; SAVEALL; call_ind(c, t_); RETCHK(0x562fbau, 0x562fb8u); LOADALL; }
  /* 00562fba mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562fbd cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562fc2 je 0x563029 */ if (ZF_) goto L_00563029;
  /* 00562fc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562fc5 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x562fcau; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x562fc5u); RETCHK(0x562fcau, 0x562fc5u); LOADALL;
  /* 00562fca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562fcd jmp 0x563029 */ goto L_00563029;
L_00562fcf:;
  /* 00562fcf mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00562fd2 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00562fd4 je 0x562fe9 */ if (ZF_) goto L_00562fe9;
  /* 00562fd6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00562fd9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00562fda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562fdb mov eax, 7 */ { eax = (u32)(0x7u); }
L_00562fe0:;
  /* 00562fe0 mov ecx, esi */ { ecx = (u32)(esi); }
L_00562fe2:;
  /* 00562fe2 mov esi, edx */ { esi = (u32)(edx); }
L_00562fe4:;
  /* 00562fe4 call 0x562a90 */ esp -= 4; M32(esp) = 0x562fe9u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x562fe4u); RETCHK(0x562fe9u, 0x562fe4u); LOADALL;
L_00562fe9:;
  /* 00562fe9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00562fec cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00562ff1 je 0x563029 */ if (ZF_) goto L_00563029;
  /* 00562ff3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00562ff4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x562ff9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x562ff4u); RETCHK(0x562ff9u, 0x562ff4u); LOADALL;
  /* 00562ff9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00562ffc jmp 0x563029 */ goto L_00563029;
L_00562ffe:;
  /* 00562ffe mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00563001 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563003 je 0x563029 */ if (ZF_) goto L_00563029;
  /* 00563005 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00563008 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563009 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056300a mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0056300d mov eax, 5 */ { eax = (u32)(0x5u); }
  /* 00563012 jmp 0x563024 */ goto L_00563024;
L_00563014:;
  /* 00563014 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563016 je 0x563029 */ if (ZF_) goto L_00563029;
  /* 00563018 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563019 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056301b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0056301d:;
  /* 0056301d mov esi, edx */ { esi = (u32)(edx); }
  /* 0056301f mov eax, 4 */ { eax = (u32)(0x4u); }
L_00563024:;
  /* 00563024 call 0x562a90 */ esp -= 4; M32(esp) = 0x563029u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x563024u); RETCHK(0x563029u, 0x563024u); LOADALL;
L_00563029:;
  /* 00563029 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056302c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056302d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056302e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563030 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563031 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00563038 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056303a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056303b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00563040(CPU *c) {
  NATIVE_HOOK(0x563040u) REGS; LOADALL;
L_00563040:;
  /* 00563040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563043 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00563045 push 0x61d5eb */ { u32 v_ = 0x61d5ebu; esp -= 4; M32(esp) = v_; }
  /* 0056304a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00563050 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563051 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00563058 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056305b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056305e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056305f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563060 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563061 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00563063 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 00563065 call 0x560d40 */ esp -= 4; M32(esp) = 0x56306au; SAVEALL; F_00560d40(c); ABI_CHECK(0x560d40u, 0x563065u); RETCHK(0x56306au, 0x563065u); LOADALL;
  /* 0056306a mov edi, eax */ { edi = (u32)(eax); }
  /* 0056306c mov eax, esi */ { eax = (u32)(esi); }
  /* 0056306e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00563070 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00563073 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00563076 call 0x562390 */ esp -= 4; M32(esp) = 0x56307bu; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x563076u); RETCHK(0x56307bu, 0x563076u); LOADALL;
  /* 0056307b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0056307d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056307f je 0x56315c */ if (ZF_) goto L_0056315c;
L_00563085:;
  /* 00563085 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563087 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563089 je 0x563171 */ if (ZF_) goto L_00563171;
  /* 0056308f cmp al, 0x3c */ { u32 a_ = (eax & 0xffu), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563091 je 0x563101 */ if (ZF_) goto L_00563101;
  /* 00563093 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 00563095 call 0x5fe934 */ esp -= 4; M32(esp) = 0x56309au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x563095u); RETCHK(0x56309au, 0x563095u); LOADALL;
  /* 0056309a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056309d mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 005630a0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005630a2 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005630a4 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 005630a7 je 0x5630b6 */ if (ZF_) goto L_005630b6;
  /* 005630a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005630aa mov edi, 0x63e71c */ { edi = (u32)(0x63e71cu); }
  /* 005630af call 0x5606d0 */ esp -= 4; M32(esp) = 0x5630b4u; SAVEALL; F_005606d0(c); ABI_CHECK(0x5606d0u, 0x5630afu); RETCHK(0x5630b4u, 0x5630afu); LOADALL;
  /* 005630b4 mov edi, eax */ { edi = (u32)(eax); }
L_005630b6:;
  /* 005630b6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005630b8 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005630bf je 0x563186 */ if (ZF_) goto L_00563186;
  /* 005630c5 mov al, byte ptr [0x68a0d9] */ { const u32 m_ = (u32)(0x68a0d9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005630ca test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005630cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005630cd je 0x5630dd */ if (ZF_) goto L_005630dd;
  /* 005630cf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005630d2 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005630d4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005630d5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005630d6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005630d8 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5630dbu; SAVEALL; call_ind(c, t_); RETCHK(0x5630dbu, 0x5630d8u); LOADALL; }
  /* 005630db jmp 0x5630ec */ goto L_005630ec;
L_005630dd:;
  /* 005630dd mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005630e0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005630e3 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005630e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005630e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005630e7 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005630e9 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5630ecu; SAVEALL; call_ind(c, t_); RETCHK(0x5630ecu, 0x5630e9u); LOADALL; }
L_005630ec:;
  /* 005630ec mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005630ee call 0x563a20 */ esp -= 4; M32(esp) = 0x5630f3u; SAVEALL; F_00563a20(c); ABI_CHECK(0x563a20u, 0x5630eeu); RETCHK(0x5630f3u, 0x5630eeu); LOADALL;
  /* 005630f3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005630f5 je 0x563139 */ if (ZF_) goto L_00563139;
  /* 005630f7 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005630f9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005630fb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005630fd call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5630ffu; SAVEALL; call_ind(c, t_); RETCHK(0x5630ffu, 0x5630fdu); LOADALL; }
  /* 005630ff jmp 0x563143 */ goto L_00563143;
L_00563101:;
  /* 00563101 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563102 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563104 mov eax, 0x656a3c */ { eax = (u32)(0x656a3cu); }
  /* 00563109 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056310b call 0x5626b0 */ esp -= 4; M32(esp) = 0x563110u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x56310bu); RETCHK(0x563110u, 0x56310bu); LOADALL;
  /* 00563110 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563113 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563115 jne 0x563171 */ if (!ZF_) goto L_00563171;
  /* 00563117 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056311a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056311b mov edx, esi */ { edx = (u32)(esi); }
  /* 0056311d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056311f call 0x562b00 */ esp -= 4; M32(esp) = 0x563124u; SAVEALL; F_00562b00(c); ABI_CHECK(0x562b00u, 0x56311fu); RETCHK(0x563124u, 0x56311fu); LOADALL;
  /* 00563124 mov edi, eax */ { edi = (u32)(eax); }
  /* 00563126 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563128 je 0x56319e */ if (ZF_) goto L_0056319e;
  /* 0056312a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056312d mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0056312f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563130 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563131 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563132 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00563134 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563137u; SAVEALL; call_ind(c, t_); RETCHK(0x563137u, 0x563134u); LOADALL; }
  /* 00563137 mov ebx, eax */ { ebx = (u32)(eax); }
L_00563139:;
  /* 00563139 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056313c mov eax, edi */ { eax = (u32)(edi); }
  /* 0056313e call 0x560b70 */ esp -= 4; M32(esp) = 0x563143u; SAVEALL; F_00560b70(c); ABI_CHECK(0x560b70u, 0x56313eu); RETCHK(0x563143u, 0x56313eu); LOADALL;
L_00563143:;
  /* 00563143 mov eax, esi */ { eax = (u32)(esi); }
  /* 00563145 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00563147 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0056314a call 0x562390 */ esp -= 4; M32(esp) = 0x56314fu; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x56314au); RETCHK(0x56314fu, 0x56314au); LOADALL;
  /* 0056314f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00563151 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563153 jne 0x563085 */ if (!ZF_) goto L_00563085;
  /* 00563159 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
L_0056315c:;
  /* 0056315c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056315e je 0x563171 */ if (ZF_) goto L_00563171;
  /* 00563160 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563161 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563163 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00563165 mov eax, 6 */ { eax = (u32)(0x6u); }
  /* 0056316a mov esi, edi */ { esi = (u32)(edi); }
  /* 0056316c call 0x562a90 */ esp -= 4; M32(esp) = 0x563171u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x56316cu); RETCHK(0x563171u, 0x56316cu); LOADALL;
L_00563171:;
  /* 00563171 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563172 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563173 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00563175 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563176 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00563179 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00563180 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563182 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563183 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00563186:;
  /* 00563186 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00563189 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056318b je 0x56319e */ if (ZF_) goto L_0056319e;
  /* 0056318d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056318e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563190 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00563192 mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 00563197 mov esi, edx */ { esi = (u32)(edx); }
  /* 00563199 call 0x562a90 */ esp -= 4; M32(esp) = 0x56319eu; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x563199u); RETCHK(0x56319eu, 0x563199u); LOADALL;
L_0056319e:;
  /* 0056319e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005631a1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005631a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005631a3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005631a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005631a6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005631ad mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005631af pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005631b0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005631c0(CPU *c) {
  NATIVE_HOOK(0x5631c0u) REGS; LOADALL;
L_005631c0:;
  /* 005631c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005631c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005631c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005631c4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005631c5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005631c6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005631c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005631c9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005631cb call 0x560d40 */ esp -= 4; M32(esp) = 0x5631d0u; SAVEALL; F_00560d40(c); ABI_CHECK(0x560d40u, 0x5631cbu); RETCHK(0x5631d0u, 0x5631cbu); LOADALL;
  /* 005631d0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005631d3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005631d6 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005631d9 call 0x562390 */ esp -= 4; M32(esp) = 0x5631deu; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x5631d9u); RETCHK(0x5631deu, 0x5631d9u); LOADALL;
  /* 005631de mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005631e1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005631e3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005631e5 je 0x5631fc */ if (ZF_) goto L_005631fc;
  /* 005631e7 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005631ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005631eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005631ec call 0x5621a0 */ esp -= 4; M32(esp) = 0x5631f1u; SAVEALL; F_005621a0(c); ABI_CHECK(0x5621a0u, 0x5631ecu); RETCHK(0x5631f1u, 0x5631ecu); LOADALL;
  /* 005631f1 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005631f3 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005631f6 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005631f9 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
L_005631fc:;
  /* 005631fc test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005631fe je 0x56327b */ if (ZF_) goto L_0056327b;
  /* 00563200 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563202 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563204 je 0x56327b */ if (ZF_) goto L_0056327b;
  /* 00563206 cmp al, 0x3c */ { u32 a_ = (eax & 0xffu), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563208 jne 0x56327b */ if (!ZF_) goto L_0056327b;
  /* 0056320a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056320b add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056320e mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00563211 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00563213 mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 00563218 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0056321a call 0x560320 */ esp -= 4; M32(esp) = 0x56321fu; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x56321au); RETCHK(0x56321fu, 0x56321au); LOADALL;
  /* 0056321f mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00563222 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563224 je 0x563246 */ if (ZF_) goto L_00563246;
L_00563226:;
  /* 00563226 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563228 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056322a je 0x56325f */ if (ZF_) goto L_0056325f;
  /* 0056322c cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056322e je 0x563264 */ if (ZF_) goto L_00563264;
  /* 00563230 mov byte ptr [ebp + 0xb], al */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00563233 lea eax, [ebp + 0xb] */ eax = (u32)((u32)(ebp + 0xbu));
  /* 00563236 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563237 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 0056323c mov eax, esi */ { eax = (u32)(esi); }
  /* 0056323e call 0x5603f0 */ esp -= 4; M32(esp) = 0x563243u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56323eu); RETCHK(0x563243u, 0x56323eu); LOADALL;
  /* 00563243 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00563244 jne 0x563226 */ if (!ZF_) goto L_00563226;
L_00563246:;
  /* 00563246 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00563249 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056324b je 0x56325f */ if (ZF_) goto L_0056325f;
  /* 0056324d mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00563250 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563251 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563253 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00563255 mov eax, 0xa */ { eax = (u32)(0xau); }
  /* 0056325a call 0x562a90 */ esp -= 4; M32(esp) = 0x56325fu; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x56325au); RETCHK(0x56325fu, 0x56325au); LOADALL;
L_0056325f:;
  /* 0056325f cmp byte ptr [ebx], 0x3e */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563262 jne 0x563270 */ if (!ZF_) goto L_00563270;
L_00563264:;
  /* 00563264 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563265 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563266 lea eax, [ebx + 1] */ eax = (u32)((u32)(ebx + 0x1u));
  /* 00563269 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056326a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056326c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056326d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00563270:;
  /* 00563270 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563271 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563272 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00563274 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563275 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563277 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563278 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0056327b:;
  /* 0056327b mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0056327e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563280 je 0x563293 */ if (ZF_) goto L_00563293;
  /* 00563282 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00563285 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00563286 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563287 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00563289 mov eax, 0xa */ { eax = (u32)(0xau); }
  /* 0056328e call 0x562a90 */ esp -= 4; M32(esp) = 0x563293u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x56328eu); RETCHK(0x563293u, 0x56328eu); LOADALL;
L_00563293:;
  /* 00563293 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563294 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563295 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563297 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563298 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056329a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056329b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005632a0(CPU *c) {
  NATIVE_HOOK(0x5632a0u) REGS; LOADALL;
L_005632a0:;
  /* 005632a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005632a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005632a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005632a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005632a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005632a8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005632aa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005632ab mov eax, esi */ { eax = (u32)(esi); }
  /* 005632ad call 0x560d40 */ esp -= 4; M32(esp) = 0x5632b2u; SAVEALL; F_00560d40(c); ABI_CHECK(0x560d40u, 0x5632adu); RETCHK(0x5632b2u, 0x5632adu); LOADALL;
  /* 005632b2 lea ebx, [esi + 0x20] */ ebx = (u32)((u32)(esi + 0x20u));
  /* 005632b5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005632b7 mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 005632bc mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005632bf mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 005632c2 call 0x560320 */ esp -= 4; M32(esp) = 0x5632c7u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x5632c2u); RETCHK(0x5632c7u, 0x5632c2u); LOADALL;
  /* 005632c7 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 005632ca mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005632cd mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005632cf call 0x562390 */ esp -= 4; M32(esp) = 0x5632d4u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x5632cfu); RETCHK(0x5632d4u, 0x5632cfu); LOADALL;
  /* 005632d4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005632d6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005632d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005632db mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
  /* 005632de je 0x5632f9 */ if (ZF_) goto L_005632f9;
  /* 005632e0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005632e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005632e2 mov edi, eax */ { edi = (u32)(eax); }
  /* 005632e4 call 0x5621a0 */ esp -= 4; M32(esp) = 0x5632e9u; SAVEALL; F_005621a0(c); ABI_CHECK(0x5621a0u, 0x5632e4u); RETCHK(0x5632e9u, 0x5632e4u); LOADALL;
  /* 005632e9 mov eax, edi */ { eax = (u32)(edi); }
  /* 005632eb mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005632ed mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005632f0 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005632f3 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005632f6 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
L_005632f9:;
  /* 005632f9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005632fa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005632fc mov eax, 0x656a14 */ { eax = (u32)(0x656a14u); }
  /* 00563301 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00563303 call 0x5626b0 */ esp -= 4; M32(esp) = 0x563308u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x563303u); RETCHK(0x563308u, 0x563303u); LOADALL;
  /* 00563308 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056330b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056330d jne 0x56332e */ if (!ZF_) goto L_0056332e;
  /* 0056330f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00563312 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00563315 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563316 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563317 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00563319 mov eax, 0xb */ { eax = (u32)(0xbu); }
  /* 0056331e call 0x562a90 */ esp -= 4; M32(esp) = 0x563323u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x56331eu); RETCHK(0x563323u, 0x56331eu); LOADALL;
  /* 00563323 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563324 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563325 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563327 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563328 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056332a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056332b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0056332e:;
  /* 0056332e mov eax, 0x656a14 */ { eax = (u32)(0x656a14u); }
  /* 00563333 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00563336:;
  /* 00563336 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563338 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00563339 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056333b jne 0x563336 */ if (!ZF_) goto L_00563336;
  /* 0056333d mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00563340 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563341 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563343 push 0x656a10 */ { u32 v_ = 0x656a10u; esp -= 4; M32(esp) = v_; }
  /* 00563348 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056334a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056334c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056334d add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056334f call 0x562750 */ esp -= 4; M32(esp) = 0x563354u; SAVEALL; F_00562750(c); ABI_CHECK(0x562750u, 0x56334fu); RETCHK(0x563354u, 0x56334fu); LOADALL;
  /* 00563354 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563357 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563358 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563359 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056335a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056335c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056335d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00563360(CPU *c) {
  NATIVE_HOOK(0x563360u) REGS; LOADALL;
L_00563360:;
  /* 00563360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563363 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563364 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563365 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00563368 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563369 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056336a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056336c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056336f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00563371 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00563374 call 0x562390 */ esp -= 4; M32(esp) = 0x563379u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x563374u); RETCHK(0x563379u, 0x563374u); LOADALL;
  /* 00563379 mov esi, eax */ { esi = (u32)(eax); }
  /* 0056337b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056337d je 0x5634eb */ if (ZF_) goto L_005634eb;
  /* 00563383 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563386 je 0x5634eb */ if (ZF_) goto L_005634eb;
  /* 0056338c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056338f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563391 je 0x5633ae */ if (ZF_) goto L_005633ae;
  /* 00563393 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563394 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563395 mov edi, eax */ { edi = (u32)(eax); }
  /* 00563397 call 0x5621a0 */ esp -= 4; M32(esp) = 0x56339cu; SAVEALL; F_005621a0(c); ABI_CHECK(0x5621a0u, 0x563397u); RETCHK(0x56339cu, 0x563397u); LOADALL;
  /* 0056339c mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0056339f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005633a1 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005633a3 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 005633a6 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005633a9 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005633ac mov edi, eax */ { edi = (u32)(eax); }
L_005633ae:;
  /* 005633ae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005633af lea eax, [edi + 0x14] */ eax = (u32)((u32)(edi + 0x14u));
  /* 005633b2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005633b4 call 0x562450 */ esp -= 4; M32(esp) = 0x5633b9u; SAVEALL; F_00562450(c); ABI_CHECK(0x562450u, 0x5633b4u); RETCHK(0x5633b9u, 0x5633b4u); LOADALL;
  /* 005633b9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005633bb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005633be test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005633c0 je 0x5634d1 */ if (ZF_) goto L_005634d1;
  /* 005633c6 cmp byte ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005633c9 je 0x5634d1 */ if (ZF_) goto L_005634d1;
  /* 005633cf mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005633d1 call 0x562390 */ esp -= 4; M32(esp) = 0x5633d6u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x5633d1u); RETCHK(0x5633d6u, 0x5633d1u); LOADALL;
  /* 005633d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005633d8 je 0x5634c1 */ if (ZF_) goto L_005634c1;
  /* 005633de mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005633e0 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005633e2 je 0x5634c1 */ if (ZF_) goto L_005634c1;
  /* 005633e8 cmp cl, 0x3d */ { u32 a_ = (ecx & 0xffu), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005633eb jne 0x5634c1 */ if (!ZF_) goto L_005634c1;
  /* 005633f1 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 005633f4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005633f6 call 0x562390 */ esp -= 4; M32(esp) = 0x5633fbu; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x5633f6u); RETCHK(0x5633fbu, 0x5633f6u); LOADALL;
  /* 005633fb mov esi, eax */ { esi = (u32)(eax); }
  /* 005633fd test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005633ff je 0x5634ac */ if (ZF_) goto L_005634ac;
  /* 00563405 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563407 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563409 je 0x5634ac */ if (ZF_) goto L_005634ac;
  /* 0056340f cmp al, 0x27 */ { u32 a_ = (eax & 0xffu), b_ = 0x27u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563411 jne 0x56343a */ if (!ZF_) goto L_0056343a;
  /* 00563413 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00563416 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563417 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563419 push 0x652f20 */ { u32 v_ = 0x652f20u; esp -= 4; M32(esp) = v_; }
  /* 0056341e add edx, 0x18 */ { u32 a_ = edx, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00563421 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563423 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00563424 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 00563427 call 0x562750 */ esp -= 4; M32(esp) = 0x56342cu; SAVEALL; F_00562750(c); ABI_CHECK(0x562750u, 0x563427u); RETCHK(0x56342cu, 0x563427u); LOADALL;
  /* 0056342c add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056342f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563430 mov esi, eax */ { esi = (u32)(eax); }
  /* 00563432 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563433 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563434 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563436 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563437 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0056343a:;
  /* 0056343a cmp al, 0x22 */ { u32 a_ = (eax & 0xffu), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056343c jne 0x563465 */ if (!ZF_) goto L_00563465;
  /* 0056343e mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00563441 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563442 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563444 push 0x656a28 */ { u32 v_ = 0x656a28u; esp -= 4; M32(esp) = v_; }
  /* 00563449 add eax, 0x18 */ { u32 a_ = eax, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056344c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056344e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056344f lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 00563452 call 0x562750 */ esp -= 4; M32(esp) = 0x563457u; SAVEALL; F_00562750(c); ABI_CHECK(0x562750u, 0x563452u); RETCHK(0x563457u, 0x563452u); LOADALL;
  /* 00563457 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056345a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056345b mov esi, eax */ { esi = (u32)(eax); }
  /* 0056345d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056345e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056345f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563461 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563462 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00563465:;
  /* 00563465 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00563468 add edi, 0x18 */ { u32 a_ = edi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056346b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056346c mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 00563471 call 0x5604a0 */ esp -= 4; M32(esp) = 0x563476u; SAVEALL; F_005604a0(c); ABI_CHECK(0x5604a0u, 0x563471u); RETCHK(0x563476u, 0x563471u); LOADALL;
L_00563476:;
  /* 00563476 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563478 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056347a je 0x5634a1 */ if (ZF_) goto L_005634a1;
  /* 0056347c call 0x561fe0 */ esp -= 4; M32(esp) = 0x563481u; SAVEALL; F_00561fe0(c); ABI_CHECK(0x561fe0u, 0x56347cu); RETCHK(0x563481u, 0x56347cu); LOADALL;
  /* 00563481 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563483 jne 0x5634a1 */ if (!ZF_) goto L_005634a1;
  /* 00563485 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563487 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563489 je 0x5634a1 */ if (ZF_) goto L_005634a1;
  /* 0056348b cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056348d je 0x5634a1 */ if (ZF_) goto L_005634a1;
  /* 0056348f cmp al, 0x2f */ { u32 a_ = (eax & 0xffu), b_ = 0x2fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563491 je 0x5634a1 */ if (ZF_) goto L_005634a1;
  /* 00563493 cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563495 je 0x5634a1 */ if (ZF_) goto L_005634a1;
  /* 00563497 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563498 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563499 call 0x560500 */ esp -= 4; M32(esp) = 0x56349eu; SAVEALL; F_00560500(c); ABI_CHECK(0x560500u, 0x563499u); RETCHK(0x56349eu, 0x563499u); LOADALL;
  /* 0056349e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056349f jne 0x563476 */ if (!ZF_) goto L_00563476;
L_005634a1:;
  /* 005634a1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005634a2 mov eax, esi */ { eax = (u32)(esi); }
  /* 005634a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005634a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005634a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005634a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005634a9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005634ac:;
  /* 005634ac mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005634af mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005634b2 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005634b4 je 0x5634eb */ if (ZF_) goto L_005634eb;
  /* 005634b6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005634b9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005634ba mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005634bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005634bd mov esi, edx */ { esi = (u32)(edx); }
  /* 005634bf jmp 0x5634e1 */ goto L_005634e1;
L_005634c1:;
  /* 005634c1 mov edi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edi = (u32)(M32(m_)); }
  /* 005634c4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005634c6 je 0x5634eb */ if (ZF_) goto L_005634eb;
  /* 005634c8 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005634cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005634cc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005634cd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005634cf jmp 0x5634df */ goto L_005634df;
L_005634d1:;
  /* 005634d1 mov edi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edi = (u32)(M32(m_)); }
  /* 005634d4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005634d6 je 0x5634eb */ if (ZF_) goto L_005634eb;
  /* 005634d8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005634db push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005634dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005634dd mov ecx, esi */ { ecx = (u32)(esi); }
L_005634df:;
  /* 005634df mov esi, edi */ { esi = (u32)(edi); }
L_005634e1:;
  /* 005634e1 mov eax, 7 */ { eax = (u32)(0x7u); }
  /* 005634e6 call 0x562a90 */ esp -= 4; M32(esp) = 0x5634ebu; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x5634e6u); RETCHK(0x5634ebu, 0x5634e6u); LOADALL;
L_005634eb:;
  /* 005634eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005634ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005634ed xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005634ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005634f0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005634f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005634f3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00563500(CPU *c) {
  NATIVE_HOOK(0x563500u) REGS; LOADALL;
L_00563500:;
  /* 00563500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563503 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00563505 push 0x61c3c8 */ { u32 v_ = 0x61c3c8u; esp -= 4; M32(esp) = v_; }
  /* 0056350a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00563510 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563511 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00563518 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056351b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056351c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056351d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056351f lea ebx, [esi + 0x20] */ ebx = (u32)((u32)(esi + 0x20u));
  /* 00563522 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563523 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00563525 mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 0056352a mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0056352d call 0x560320 */ esp -= 4; M32(esp) = 0x563532u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x56352du); RETCHK(0x563532u, 0x56352du); LOADALL;
  /* 00563532 mov eax, esi */ { eax = (u32)(esi); }
  /* 00563534 call 0x560d40 */ esp -= 4; M32(esp) = 0x563539u; SAVEALL; F_00560d40(c); ABI_CHECK(0x560d40u, 0x563534u); RETCHK(0x563539u, 0x563534u); LOADALL;
  /* 00563539 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0056353c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056353e mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00563541 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00563544 je 0x56355d */ if (ZF_) goto L_0056355d;
  /* 00563546 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00563549 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056354a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056354b call 0x5621a0 */ esp -= 4; M32(esp) = 0x563550u; SAVEALL; F_005621a0(c); ABI_CHECK(0x5621a0u, 0x56354bu); RETCHK(0x563550u, 0x56354bu); LOADALL;
  /* 00563550 mov eax, edi */ { eax = (u32)(edi); }
  /* 00563552 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00563554 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00563557 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056355a mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
L_0056355d:;
  /* 0056355d mov al, byte ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563560 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563562 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00563565 jne 0x5635ad */ if (!ZF_) goto L_005635ad;
  /* 00563567 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563568 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056356a mov eax, 0x656a04 */ { eax = (u32)(0x656a04u); }
  /* 0056356f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00563571 call 0x5626b0 */ esp -= 4; M32(esp) = 0x563576u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x563571u); RETCHK(0x563576u, 0x563571u); LOADALL;
  /* 00563576 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563579 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056357b jne 0x5635ad */ if (!ZF_) goto L_005635ad;
  /* 0056357d mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00563580 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563581 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563583 push 0x656a40 */ { u32 v_ = 0x656a40u; esp -= 4; M32(esp) = v_; }
  /* 00563588 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056358a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056358b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056358d call 0x562750 */ esp -= 4; M32(esp) = 0x563592u; SAVEALL; F_00562750(c); ABI_CHECK(0x562750u, 0x56358du); RETCHK(0x563592u, 0x56358du); LOADALL;
  /* 00563592 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563595 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563597 je 0x5635db */ if (ZF_) goto L_005635db;
  /* 00563599 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056359a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056359b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056359c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056359d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005635a0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005635a7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005635a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005635aa ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005635ad:;
  /* 005635ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005635ae push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005635b0 mov eax, 0x656a04 */ { eax = (u32)(0x656a04u); }
  /* 005635b5 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005635b7 mov byte ptr [esi + 0x2c], 1 */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)(0x1u); }
  /* 005635bb call 0x5626b0 */ esp -= 4; M32(esp) = 0x5635c0u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x5635bbu); RETCHK(0x5635c0u, 0x5635bbu); LOADALL;
  /* 005635c0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005635c3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005635c5 jne 0x5635f0 */ if (!ZF_) goto L_005635f0;
  /* 005635c7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005635ca mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 005635cd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005635ce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005635cf mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005635d1 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 005635d6 call 0x562a90 */ esp -= 4; M32(esp) = 0x5635dbu; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x5635d6u); RETCHK(0x5635dbu, 0x5635d6u); LOADALL;
L_005635db:;
  /* 005635db pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005635dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005635dd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005635df pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005635e0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005635e3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005635ea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005635ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005635ed ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005635f0:;
  /* 005635f0 mov eax, 0x656a04 */ { eax = (u32)(0x656a04u); }
  /* 005635f5 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_005635f8:;
  /* 005635f8 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005635fa inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005635fb test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005635fd jne 0x5635f8 */ if (!ZF_) goto L_005635f8;
  /* 005635ff sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00563601 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00563603 je 0x56363c */ if (ZF_) goto L_0056363c;
L_00563605:;
  /* 00563605 cmp byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563608 je 0x56363c */ if (ZF_) goto L_0056363c;
  /* 0056360a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056360b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056360d mov eax, 0x6569f8 */ { eax = (u32)(0x6569f8u); }
  /* 00563612 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00563614 call 0x5626b0 */ esp -= 4; M32(esp) = 0x563619u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x563614u); RETCHK(0x563619u, 0x563614u); LOADALL;
  /* 00563619 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056361c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056361e jne 0x56363c */ if (!ZF_) goto L_0056363c;
  /* 00563620 mov dl, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563622 lea eax, [ebp + 0xf] */ eax = (u32)((u32)(ebp + 0xfu));
  /* 00563625 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563626 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00563629 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 0056362e mov byte ptr [ebp + 0xf], dl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00563631 call 0x5603f0 */ esp -= 4; M32(esp) = 0x563636u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x563631u); RETCHK(0x563636u, 0x563631u); LOADALL;
  /* 00563636 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00563637 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0056363a jne 0x563605 */ if (!ZF_) goto L_00563605;
L_0056363c:;
  /* 0056363c mov dword ptr [ebp + 0x10], 0x7a70b8 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x7a70b8u); }
  /* 00563643 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563644 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563646 push 0x6569f8 */ { u32 v_ = 0x6569f8u; esp -= 4; M32(esp) = v_; }
  /* 0056364b lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0056364e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563650 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563651 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00563653 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056365a call 0x562750 */ esp -= 4; M32(esp) = 0x56365fu; SAVEALL; F_00562750(c); ABI_CHECK(0x562750u, 0x56365au); RETCHK(0x56365fu, 0x56365au); LOADALL;
  /* 0056365f mov esi, eax */ { esi = (u32)(eax); }
  /* 00563661 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00563664 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563667 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056366c je 0x563677 */ if (ZF_) goto L_00563677;
  /* 0056366e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056366f call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x563674u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x56366fu); RETCHK(0x563674u, 0x56366fu); LOADALL;
  /* 00563674 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00563677:;
  /* 00563677 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056367a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056367b mov eax, esi */ { eax = (u32)(esi); }
  /* 0056367d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056367e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056367f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00563686 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563688 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563689 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00563690(CPU *c) {
  NATIVE_HOOK(0x563690u) REGS; LOADALL;
L_00563690:;
  /* 00563690 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563691 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563693 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00563695 push 0x61d5cb */ { u32 v_ = 0x61d5cbu; esp -= 4; M32(esp) = v_; }
  /* 0056369a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005636a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005636a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005636a8 sub esp, 0x7c */ { u32 a_ = esp, b_ = 0x7cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005636ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005636ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005636ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005636ae mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005636b1 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005636b3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005636b6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005636b8 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 005636bb call 0x562390 */ esp -= 4; M32(esp) = 0x5636c0u; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x5636bbu); RETCHK(0x5636c0u, 0x5636bbu); LOADALL;
  /* 005636c0 mov esi, eax */ { esi = (u32)(eax); }
  /* 005636c2 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005636c4 call 0x560d40 */ esp -= 4; M32(esp) = 0x5636c9u; SAVEALL; F_00560d40(c); ABI_CHECK(0x560d40u, 0x5636c4u); RETCHK(0x5636c9u, 0x5636c4u); LOADALL;
  /* 005636c9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005636cb mov edx, eax */ { edx = (u32)(eax); }
  /* 005636cd mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005636d0 je 0x5639ed */ if (ZF_) goto L_005639ed;
  /* 005636d6 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005636d9 je 0x5639ed */ if (ZF_) goto L_005639ed;
  /* 005636df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005636e0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005636e2 mov eax, 0x656c0c */ { eax = (u32)(0x656c0cu); }
  /* 005636e7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005636e9 call 0x5626b0 */ esp -= 4; M32(esp) = 0x5636eeu; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x5636e9u); RETCHK(0x5636eeu, 0x5636e9u); LOADALL;
  /* 005636ee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005636f1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005636f3 je 0x5639ea */ if (ZF_) goto L_005639ea;
  /* 005636f9 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005636fc test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005636fe je 0x563715 */ if (ZF_) goto L_00563715;
  /* 00563700 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00563703 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563704 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563705 call 0x5621a0 */ esp -= 4; M32(esp) = 0x56370au; SAVEALL; F_005621a0(c); ABI_CHECK(0x5621a0u, 0x563705u); RETCHK(0x56370au, 0x563705u); LOADALL;
  /* 0056370a mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0056370c mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0056370f mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00563712 mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
L_00563715:;
  /* 00563715 add ebx, 0x2c */ { u32 a_ = ebx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00563718 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056371a mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 0056371f add esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00563722 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00563725 call 0x560320 */ esp -= 4; M32(esp) = 0x56372au; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x563725u); RETCHK(0x56372au, 0x563725u); LOADALL;
  /* 0056372a mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 0056372d lea ebx, [edi + 0x30] */ ebx = (u32)((u32)(edi + 0x30u));
  /* 00563730 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00563732 mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 00563737 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0056373a call 0x560320 */ esp -= 4; M32(esp) = 0x56373fu; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x56373au); RETCHK(0x56373fu, 0x56373au); LOADALL;
  /* 0056373f lea ebx, [edi + 0x34] */ ebx = (u32)((u32)(edi + 0x34u));
  /* 00563742 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00563744 mov edx, 0x63e71c */ { edx = (u32)(0x63e71cu); }
  /* 00563749 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0056374c call 0x560320 */ esp -= 4; M32(esp) = 0x563751u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x56374cu); RETCHK(0x563751u, 0x56374cu); LOADALL;
  /* 00563751 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00563753 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563755 je 0x563a02 */ if (ZF_) goto L_00563a02;
  /* 0056375b jmp 0x563760 */ goto L_00563760;
L_0056375d:;
  /* 0056375d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_00563760:;
  /* 00563760 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563762 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563764 je 0x563a02 */ if (ZF_) goto L_00563a02;
  /* 0056376a cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056376c je 0x5639d4 */ if (ZF_) goto L_005639d4;
  /* 00563772 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00563775 mov eax, edi */ { eax = (u32)(edi); }
  /* 00563777 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563779 call 0x562390 */ esp -= 4; M32(esp) = 0x56377eu; SAVEALL; F_00562390(c); ABI_CHECK(0x562390u, 0x563779u); RETCHK(0x56377eu, 0x563779u); LOADALL;
  /* 0056377e mov esi, eax */ { esi = (u32)(eax); }
  /* 00563780 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563781 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00563783 mov eax, 0x642944 */ { eax = (u32)(0x642944u); }
  /* 00563788 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0056378a mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0056378d call 0x5626b0 */ esp -= 4; M32(esp) = 0x563792u; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x56378du); RETCHK(0x563792u, 0x56378du); LOADALL;
  /* 00563792 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563795 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563797 je 0x56383e */ if (ZF_) goto L_0056383e;
  /* 0056379d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005637a0 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 005637a3 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 005637a6 mov eax, 0x7a70b8 */ { eax = (u32)(0x7a70b8u); }
  /* 005637ab mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 005637ae mov dword ptr [ebp - 0x40], 0x65689c */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x65689cu); }
  /* 005637b5 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 005637b8 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 005637bb mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 005637be mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 005637c1 mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 005637c4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005637c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005637c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005637c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005637ca lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 005637cd mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005637d0 call 0x563360 */ esp -= 4; M32(esp) = 0x5637d5u; SAVEALL; F_00563360(c); ABI_CHECK(0x563360u, 0x5637d0u); RETCHK(0x5637d5u, 0x5637d0u); LOADALL;
  /* 005637d5 mov esi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); esi = (u32)(M32(m_)); }
  /* 005637d8 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005637db mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005637de mov eax, esi */ { eax = (u32)(esi); }
  /* 005637e0 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_005637e3:;
  /* 005637e3 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005637e5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005637e6 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005637e8 jne 0x5637e3 */ if (!ZF_) goto L_005637e3;
  /* 005637ea mov ebx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ebx = (u32)(M32(m_)); }
  /* 005637ed sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005637ef mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005637f1 mov edx, esi */ { edx = (u32)(esi); }
  /* 005637f3 call 0x560320 */ esp -= 4; M32(esp) = 0x5637f8u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x5637f3u); RETCHK(0x5637f8u, 0x5637f3u); LOADALL;
  /* 005637f8 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005637ff mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00563802 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563807 je 0x563812 */ if (ZF_) goto L_00563812;
  /* 00563809 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056380a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x56380fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x56380au); RETCHK(0x56380fu, 0x56380au); LOADALL;
  /* 0056380f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00563812:;
  /* 00563812 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00563815 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056381a je 0x563825 */ if (ZF_) goto L_00563825;
  /* 0056381c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056381d call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x563822u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x56381du); RETCHK(0x563822u, 0x56381du); LOADALL;
  /* 00563822 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00563825:;
  /* 00563825 mov dword ptr [ebp - 0x40], 0x6567fc */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x6567fcu); }
L_0056382c:;
  /* 0056382c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056382f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00563831:;
  /* 00563831 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563833 jne 0x56375d */ if (!ZF_) goto L_0056375d;
  /* 00563839 jmp 0x563a02 */ goto L_00563a02;
L_0056383e:;
  /* 0056383e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056383f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00563841 mov eax, 0x656bfc */ { eax = (u32)(0x656bfcu); }
  /* 00563846 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563848 call 0x5626b0 */ esp -= 4; M32(esp) = 0x56384du; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x563848u); RETCHK(0x56384du, 0x563848u); LOADALL;
  /* 0056384d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563850 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563852 je 0x5638f0 */ if (ZF_) goto L_005638f0;
  /* 00563858 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056385b mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 0056385e mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 00563861 mov eax, 0x7a70b8 */ { eax = (u32)(0x7a70b8u); }
  /* 00563866 mov dword ptr [ebp - 0x58], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ebx); }
  /* 00563869 mov dword ptr [ebp - 0x64], 0x65689c */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x65689cu); }
  /* 00563870 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 00563873 mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 00563876 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 00563879 mov dword ptr [ebp - 0x44], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ebx); }
  /* 0056387c mov dword ptr [ebp - 0x48], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ebx); }
  /* 0056387f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00563882 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563883 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563884 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563885 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00563888 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0056388f call 0x563360 */ esp -= 4; M32(esp) = 0x563894u; SAVEALL; F_00563360(c); ABI_CHECK(0x563360u, 0x56388fu); RETCHK(0x563894u, 0x56388fu); LOADALL;
  /* 00563894 mov esi, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); esi = (u32)(M32(m_)); }
  /* 00563897 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056389a mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056389d mov eax, esi */ { eax = (u32)(esi); }
  /* 0056389f lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_005638a2:;
  /* 005638a2 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005638a4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005638a5 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005638a7 jne 0x5638a2 */ if (!ZF_) goto L_005638a2;
  /* 005638a9 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 005638ac sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005638ae mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005638b0 mov edx, esi */ { edx = (u32)(esi); }
  /* 005638b2 call 0x560320 */ esp -= 4; M32(esp) = 0x5638b7u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x5638b2u); RETCHK(0x5638b7u, 0x5638b2u); LOADALL;
  /* 005638b7 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005638be mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 005638c1 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005638c6 je 0x5638d1 */ if (ZF_) goto L_005638d1;
  /* 005638c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005638c9 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5638ceu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5638c9u); RETCHK(0x5638ceu, 0x5638c9u); LOADALL;
  /* 005638ce add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005638d1:;
  /* 005638d1 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 005638d4 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005638d9 je 0x5638e4 */ if (ZF_) goto L_005638e4;
  /* 005638db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005638dc call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5638e1u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5638dcu); RETCHK(0x5638e1u, 0x5638dcu); LOADALL;
  /* 005638e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005638e4:;
  /* 005638e4 mov dword ptr [ebp - 0x64], 0x6567fc */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x6567fcu); }
  /* 005638eb jmp 0x56382c */ goto L_0056382c;
L_005638f0:;
  /* 005638f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005638f1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005638f3 mov eax, 0x656bf0 */ { eax = (u32)(0x656bf0u); }
  /* 005638f8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005638fa call 0x5626b0 */ esp -= 4; M32(esp) = 0x5638ffu; SAVEALL; F_005626b0(c); ABI_CHECK(0x5626b0u, 0x5638fau); RETCHK(0x5638ffu, 0x5638fau); LOADALL;
  /* 005638ff add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563902 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563904 je 0x56398c */ if (ZF_) goto L_0056398c;
  /* 0056390a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056390d mov dword ptr [ebp - 0x80], eax */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(eax); }
  /* 00563910 mov dword ptr [ebp - 0x84], eax */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(eax); }
  /* 00563916 mov eax, 0x7a70b8 */ { eax = (u32)(0x7a70b8u); }
  /* 0056391b mov dword ptr [ebp - 0x7c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(ebx); }
  /* 0056391e mov dword ptr [ebp - 0x88], 0x65689c */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(0x65689cu); }
  /* 00563928 mov dword ptr [ebp - 0x74], eax */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(eax); }
  /* 0056392b mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 0056392e mov dword ptr [ebp - 0x78], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(ebx); }
  /* 00563931 mov dword ptr [ebp - 0x68], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ebx); }
  /* 00563934 mov dword ptr [ebp - 0x6c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ebx); }
  /* 00563937 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056393a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056393b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056393c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056393d lea ecx, [ebp - 0x88] */ ecx = (u32)((u32)(ebp + 0xffffff78u));
  /* 00563943 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0056394a call 0x563360 */ esp -= 4; M32(esp) = 0x56394fu; SAVEALL; F_00563360(c); ABI_CHECK(0x563360u, 0x56394au); RETCHK(0x56394fu, 0x56394au); LOADALL;
  /* 0056394f mov esi, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); esi = (u32)(M32(m_)); }
  /* 00563952 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00563955 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00563958 mov eax, esi */ { eax = (u32)(esi); }
  /* 0056395a lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 0056395d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00563960:;
  /* 00563960 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563962 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00563963 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563965 jne 0x563960 */ if (!ZF_) goto L_00563960;
  /* 00563967 mov ebx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ebx = (u32)(M32(m_)); }
  /* 0056396a sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056396c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056396e mov edx, esi */ { edx = (u32)(esi); }
  /* 00563970 call 0x560320 */ esp -= 4; M32(esp) = 0x563975u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x563970u); RETCHK(0x563975u, 0x563970u); LOADALL;
  /* 00563975 lea esi, [ebp - 0x88] */ esi = (u32)((u32)(ebp + 0xffffff78u));
  /* 0056397b mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00563982 call 0x561ef0 */ esp -= 4; M32(esp) = 0x563987u; SAVEALL; F_00561ef0(c); ABI_CHECK(0x561ef0u, 0x563982u); RETCHK(0x563987u, 0x563982u); LOADALL;
  /* 00563987 jmp 0x56382c */ goto L_0056382c;
L_0056398c:;
  /* 0056398c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056398e je 0x563a02 */ if (ZF_) goto L_00563a02;
L_00563990:;
  /* 00563990 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563992 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563994 mov byte ptr [ebp - 0xd], al */ { const u32 m_ = (u32)(ebp + 0xfffffff3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00563997 je 0x563831 */ if (ZF_) goto L_00563831;
  /* 0056399d cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056399f je 0x563831 */ if (ZF_) goto L_00563831;
  /* 005639a5 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 005639a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005639a9 call 0x5fe9ec */ esp -= 4; M32(esp) = 0x5639aeu; SAVEALL; F_005fe9ec(c); ABI_CHECK(0x5fe9ecu, 0x5639a9u); RETCHK(0x5639aeu, 0x5639a9u); LOADALL;
  /* 005639ae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005639b1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005639b3 jne 0x563831 */ if (!ZF_) goto L_00563831;
  /* 005639b9 mov al, byte ptr [ebp - 0xd] */ { const u32 m_ = (u32)(ebp + 0xfffffff3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005639bc cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005639be je 0x563831 */ if (ZF_) goto L_00563831;
  /* 005639c4 cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005639c6 je 0x563831 */ if (ZF_) goto L_00563831;
  /* 005639cc inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005639cd mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 005639d0 jne 0x563990 */ if (!ZF_) goto L_00563990;
  /* 005639d2 jmp 0x563a02 */ goto L_00563a02;
L_005639d4:;
  /* 005639d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005639d5 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 005639d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005639d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005639da mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005639dd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005639e4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005639e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005639e7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005639ea:;
  /* 005639ea mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_005639ed:;
  /* 005639ed test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005639ef je 0x563a02 */ if (ZF_) goto L_00563a02;
  /* 005639f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005639f2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005639f4 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005639f6 mov eax, 0xc */ { eax = (u32)(0xcu); }
  /* 005639fb mov esi, edx */ { esi = (u32)(edx); }
  /* 005639fd call 0x562a90 */ esp -= 4; M32(esp) = 0x563a02u; SAVEALL; F_00562a90(c); ABI_CHECK(0x562a90u, 0x5639fdu); RETCHK(0x563a02u, 0x5639fdu); LOADALL;
L_00563a02:;
  /* 00563a02 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00563a05 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563a06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563a07 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563a09 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563a0a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00563a11 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563a13 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563a14 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00563a20(CPU *c) {
  NATIVE_HOOK(0x563a20u) REGS; LOADALL;
L_00563a20:;
  /* 00563a20 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00563a23 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00563a25 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563a26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563a27 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00563a29 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563a2b jbe 0x563a58 */ if ((CF_|ZF_)) goto L_00563a58;
  /* 00563a2d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00563a30:;
  /* 00563a30 mov bl, byte ptr [eax + esi + 8] */ { const u32 m_ = (u32)(eax + esi + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00563a34 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 00563a37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563a38 call 0x5fe9ec */ esp -= 4; M32(esp) = 0x563a3du; SAVEALL; F_005fe9ec(c); ABI_CHECK(0x5fe9ecu, 0x563a38u); RETCHK(0x563a3du, 0x563a38u); LOADALL;
  /* 00563a3d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563a40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563a42 jne 0x563a4e */ if (!ZF_) goto L_00563a4e;
  /* 00563a44 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563a47 je 0x563a4e */ if (ZF_) goto L_00563a4e;
  /* 00563a49 cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00563a4c jne 0x563a5d */ if (!ZF_) goto L_00563a5d;
L_00563a4e:;
  /* 00563a4e mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00563a51 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00563a53 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00563a54 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563a56 jb 0x563a30 */ if (CF_) goto L_00563a30;
L_00563a58:;
  /* 00563a58 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563a59 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00563a5b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563a5c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00563a5d:;
  /* 00563a5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563a5e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00563a60 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563a61 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00563aa0(CPU *c) {
  NATIVE_HOOK(0x563aa0u) REGS; LOADALL;
L_00563aa0:;
  /* 00563aa0 mov dword ptr [eax], 0x656c50 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x656c50u); }
  /* 00563aa6 lea ecx, [eax + 0x24] */ ecx = (u32)((u32)(eax + 0x24u));
  /* 00563aa9 mov dword ptr [eax + 0x20], 0 */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 00563ab0 mov dword ptr [eax + 0x18], 0x656c4c */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0x656c4cu); }
  /* 00563ab7 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00563aba mov dword ptr [eax + 4], 0xffffffff */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0xffffffffu); }
  /* 00563ac1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00563ad0(CPU *c) {
  NATIVE_HOOK(0x563ad0u) REGS; LOADALL;
L_00563ad0:;
  /* 00563ad0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563ad1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563ad3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563ad4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00563ad6 call 0x563b00 */ esp -= 4; M32(esp) = 0x563adbu; SAVEALL; F_00563b00(c); ABI_CHECK(0x563b00u, 0x563ad6u); RETCHK(0x563adbu, 0x563ad6u); LOADALL;
  /* 00563adb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563adf je 0x563aea */ if (ZF_) goto L_00563aea;
  /* 00563ae1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563ae2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x563ae7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x563ae2u); RETCHK(0x563ae7u, 0x563ae2u); LOADALL;
  /* 00563ae7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00563aea:;
  /* 00563aea mov eax, esi */ { eax = (u32)(esi); }
  /* 00563aec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563aed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563aee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00563b00(CPU *c) {
  NATIVE_HOOK(0x563b00u) REGS; LOADALL;
L_00563b00:;
  /* 00563b00 mov dword ptr [ecx], 0x656c50 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656c50u); }
  /* 00563b06 mov dword ptr [ecx + 0x18], 0x6555a4 */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0x6555a4u); }
  /* 00563b0d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00563b10(CPU *c) {
  NATIVE_HOOK(0x563b10u) REGS; LOADALL;
L_00563b10:;
  /* 00563b10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563b11 mov esi, eax */ { esi = (u32)(eax); }
  /* 00563b13 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00563b16 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00563b19 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563b1c je 0x563b41 */ if (ZF_) goto L_00563b41;
  /* 00563b1e push 0x9b8830 */ { u32 v_ = 0x9b8830u; esp -= 4; M32(esp) = v_; }
  /* 00563b23 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563b25 call 0x564140 */ esp -= 4; M32(esp) = 0x563b2au; SAVEALL; F_00564140(c); ABI_CHECK(0x564140u, 0x563b25u); RETCHK(0x563b2au, 0x563b25u); LOADALL;
  /* 00563b2a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00563b2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563b2d call 0x5f138c */ esp -= 4; M32(esp) = 0x563b32u; SAVEALL; F_005f138c(c); ABI_CHECK(0x5f138cu, 0x563b2du); RETCHK(0x563b32u, 0x563b2du); LOADALL;
  /* 00563b32 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563b35 jne 0x563b3b */ if (!ZF_) goto L_00563b3b;
  /* 00563b37 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00563b39 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563b3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00563b3b:;
  /* 00563b3b mov dword ptr [esi], 0xffffffff */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xffffffffu); }
L_00563b41:;
  /* 00563b41 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00563b43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563b44 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00563b50(CPU *c) {
  NATIVE_HOOK(0x563b50u) REGS; LOADALL;
L_00563b50:;
  /* 00563b50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563b51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563b53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563b54 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563b55 mov edi, eax */ { edi = (u32)(eax); }
  /* 00563b57 cmp dword ptr [edi + 4], -1 */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563b5b jne 0x563b66 */ if (!ZF_) goto L_00563b66;
  /* 00563b5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563b5f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563b60 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563b62 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563b63 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00563b66:;
  /* 00563b66 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00563b69 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563b6b mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00563b6e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563b6f mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00563b72 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563b73 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00563b76 mov esi, edx */ { esi = (u32)(edx); }
  /* 00563b78 jbe 0x563bac */ if ((CF_|ZF_)) goto L_00563bac;
  /* 00563b7a mov ecx, 0x8000 */ { ecx = (u32)(0x8000u); }
  /* 00563b7f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00563b81 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563b83 jge 0x563b94 */ if (!LT_) goto L_00563b94;
  /* 00563b85 lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 00563b88 mov dword ptr [edi + 0x20], 0 */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 00563b8f mov dword ptr [edi + 0x1c], edx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00563b92 jmp 0x563bac */ goto L_00563bac;
L_00563b94:;
  /* 00563b94 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00563b97 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563b98 lea eax, [edi + 0x18] */ eax = (u32)((u32)(edi + 0x18u));
  /* 00563b9b call 0x564050 */ esp -= 4; M32(esp) = 0x563ba0u; SAVEALL; F_00564050(c); ABI_CHECK(0x564050u, 0x563b9bu); RETCHK(0x563ba0u, 0x563b9bu); LOADALL;
  /* 00563ba0 mov ebx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 00563ba3 mov esi, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); esi = (u32)(M32(m_)); }
  /* 00563ba6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00563ba9 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
L_00563bac:;
  /* 00563bac call 0x601668 */ esp -= 4; M32(esp) = 0x563bb1u; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x563bacu); RETCHK(0x563bb1u, 0x563bacu); LOADALL;
  /* 00563bb1 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00563bb3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563bb4 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00563bb6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00563bb8 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00563bba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563bbb call dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563bc1u; SAVEALL; call_ind(c, t_); RETCHK(0x563bc1u, 0x563bbbu); LOADALL; }
  /* 00563bc1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563bc3 jle 0x563c02 */ if ((ZF_|LT_)) goto L_00563c02;
L_00563bc5:;
  /* 00563bc5 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00563bc8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563bca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563bcb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563bcc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00563bcd call 0x5f1392 */ esp -= 4; M32(esp) = 0x563bd2u; SAVEALL; F_005f1392(c); ABI_CHECK(0x5f1392u, 0x563bcdu); RETCHK(0x563bd2u, 0x563bcdu); LOADALL;
  /* 00563bd2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563bd4 jle 0x563be3 */ if ((ZF_|LT_)) goto L_00563be3;
  /* 00563bd6 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00563bd8 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00563bda test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563bdc jg 0x563bc5 */ if (!(ZF_|LT_)) goto L_00563bc5;
  /* 00563bde mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00563be1 jmp 0x563c02 */ goto L_00563c02;
L_00563be3:;
  /* 00563be3 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00563be6 call 0x5f1398 */ esp -= 4; M32(esp) = 0x563bebu; SAVEALL; F_005f1398(c); ABI_CHECK(0x5f1398u, 0x563be6u); RETCHK(0x563bebu, 0x563be6u); LOADALL;
  /* 00563beb cmp eax, 0x2733 */ { u32 a_ = eax, b_ = 0x2733u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563bf0 je 0x563c02 */ if (ZF_) goto L_00563c02;
  /* 00563bf2 mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 00563bf4 call 0x5f1398 */ esp -= 4; M32(esp) = 0x563bf9u; SAVEALL; F_005f1398(c); ABI_CHECK(0x5f1398u, 0x563bf4u); RETCHK(0x563bf9u, 0x563bf4u); LOADALL;
  /* 00563bf9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563bfa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00563bfc call dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563bffu; SAVEALL; call_ind(c, t_); RETCHK(0x563bffu, 0x563bfcu); LOADALL; }
  /* 00563bff mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_00563c02:;
  /* 00563c02 add edi, 0x18 */ { u32 a_ = edi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00563c05 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563c07 lea eax, [edi + 0xc] */ eax = (u32)((u32)(edi + 0xcu));
  /* 00563c0a mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00563c11 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00563c14 je 0x563c20 */ if (ZF_) goto L_00563c20;
  /* 00563c16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563c17 mov edx, esi */ { edx = (u32)(esi); }
  /* 00563c19 mov eax, edi */ { eax = (u32)(edi); }
  /* 00563c1b call 0x564050 */ esp -= 4; M32(esp) = 0x563c20u; SAVEALL; F_00564050(c); ABI_CHECK(0x564050u, 0x563c1bu); RETCHK(0x563c20u, 0x563c1bu); LOADALL;
L_00563c20:;
  /* 00563c20 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00563c23 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00563c25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563c26 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563c27 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563c28 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563c2a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563c2b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00563c30(CPU *c) {
  NATIVE_HOOK(0x563c30u) REGS; LOADALL;
L_00563c30:;
  /* 00563c30 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563c32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563c33 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00563c36 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563c37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563c38 call 0x5f139e */ esp -= 4; M32(esp) = 0x563c3du; SAVEALL; F_005f139e(c); ABI_CHECK(0x5f139eu, 0x563c38u); RETCHK(0x563c3du, 0x563c38u); LOADALL;
  /* 00563c3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00563c40(CPU *c) {
  NATIVE_HOOK(0x563c40u) REGS; LOADALL;
L_00563c40:;
  /* 00563c40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563c41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563c43 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563c46 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563c48 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00563c4d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563c4e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00563c51 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00563c53 je 0x563d1a */ if (ZF_) goto L_00563d1a;
  /* 00563c59 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00563c5c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563c5e jle 0x563d1a */ if ((ZF_|LT_)) goto L_00563d1a;
  /* 00563c64 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563c65 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00563c67 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00563c69 lea eax, [esi + 0x24] */ eax = (u32)((u32)(esi + 0x24u));
  /* 00563c6c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00563c6e mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 00563c75 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00563c78 call 0x5f13a4 */ esp -= 4; M32(esp) = 0x563c7du; SAVEALL; F_005f13a4(c); ABI_CHECK(0x5f13a4u, 0x563c78u); RETCHK(0x563c7du, 0x563c78u); LOADALL;
  /* 00563c7d mov edi, eax */ { edi = (u32)(eax); }
  /* 00563c7f cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563c82 je 0x563c95 */ if (ZF_) goto L_00563c95;
  /* 00563c84 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563c85 call 0x563d30 */ esp -= 4; M32(esp) = 0x563c8au; SAVEALL; F_00563d30(c); ABI_CHECK(0x563d30u, 0x563c85u); RETCHK(0x563c8au, 0x563c85u); LOADALL;
  /* 00563c8a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00563c8c jne 0x563ca7 */ if (!ZF_) goto L_00563ca7;
L_00563c8e:;
  /* 00563c8e mov eax, esi */ { eax = (u32)(esi); }
  /* 00563c90 call 0x563b10 */ esp -= 4; M32(esp) = 0x563c95u; SAVEALL; F_00563b10(c); ABI_CHECK(0x563b10u, 0x563c90u); RETCHK(0x563c95u, 0x563c90u); LOADALL;
L_00563c95:;
  /* 00563c95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563c96 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00563c98 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563c99 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00563c9c call 0x61af31 */ esp -= 4; M32(esp) = 0x563ca1u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x563c9cu); RETCHK(0x563ca1u, 0x563c9cu); LOADALL;
  /* 00563ca1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563ca3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563ca4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00563ca7:;
  /* 00563ca7 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00563caa push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00563cac lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00563caf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563cb0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00563cb2 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00563cb4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00563cb5 mov dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x1u); }
  /* 00563cbc call 0x5f13aa */ esp -= 4; M32(esp) = 0x563cc1u; SAVEALL; F_005f13aa(c); ABI_CHECK(0x5f13aau, 0x563cbcu); RETCHK(0x563cc1u, 0x563cbcu); LOADALL;
  /* 00563cc1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00563cc4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563cc6 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00563cc9 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00563ccc mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00563ccf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563cd0 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00563cd3 mov word ptr [ebp - 0x14], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M16(m_) = (u16)(0x2u); }
  /* 00563cd9 call 0x5f13b0 */ esp -= 4; M32(esp) = 0x563cdeu; SAVEALL; F_005f13b0(c); ABI_CHECK(0x5f13b0u, 0x563cd9u); RETCHK(0x563cdeu, 0x563cd9u); LOADALL;
  /* 00563cde push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563cdf mov word ptr [ebp - 0x12], ax */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00563ce3 call 0x5f1380 */ esp -= 4; M32(esp) = 0x563ce8u; SAVEALL; F_005f1380(c); ABI_CHECK(0x5f1380u, 0x563ce3u); RETCHK(0x563ce8u, 0x563ce3u); LOADALL;
  /* 00563ce8 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00563cea lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00563ced push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00563cee push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563cef mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00563cf2 call 0x5f13b6 */ esp -= 4; M32(esp) = 0x563cf7u; SAVEALL; F_005f13b6(c); ABI_CHECK(0x5f13b6u, 0x563cf2u); RETCHK(0x563cf7u, 0x563cf2u); LOADALL;
  /* 00563cf7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563cfa jne 0x563d08 */ if (!ZF_) goto L_00563d08;
  /* 00563cfc call 0x5f1398 */ esp -= 4; M32(esp) = 0x563d01u; SAVEALL; F_005f1398(c); ABI_CHECK(0x5f1398u, 0x563cfcu); RETCHK(0x563d01u, 0x563cfcu); LOADALL;
  /* 00563d01 cmp eax, 0x2733 */ { u32 a_ = eax, b_ = 0x2733u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563d06 jne 0x563c8e */ if (!ZF_) goto L_00563c8e;
L_00563d08:;
  /* 00563d08 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563d09 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00563d0b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563d0c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00563d0f call 0x61af31 */ esp -= 4; M32(esp) = 0x563d14u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x563d0fu); RETCHK(0x563d14u, 0x563d0fu); LOADALL;
  /* 00563d14 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563d16 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563d17 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00563d1a:;
  /* 00563d1a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00563d1d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00563d1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563d20 call 0x61af31 */ esp -= 4; M32(esp) = 0x563d25u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x563d20u); RETCHK(0x563d25u, 0x563d20u); LOADALL;
  /* 00563d25 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563d27 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563d28 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00563d30(CPU *c) {
  NATIVE_HOOK(0x563d30u) REGS; LOADALL;
L_00563d30:;
  /* 00563d30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563d31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563d33 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563d34 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00563d37 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563d3a lea eax, [esi + 0x24] */ eax = (u32)((u32)(esi + 0x24u));
  /* 00563d3d mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 00563d44 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00563d47 je 0x563d80 */ if (ZF_) goto L_00563d80;
  /* 00563d49 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00563d4c mov ecx, 0x9b8830 */ { ecx = (u32)(0x9b8830u); }
  /* 00563d51 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00563d54 call 0x5640d0 */ esp -= 4; M32(esp) = 0x563d59u; SAVEALL; F_005640d0(c); ABI_CHECK(0x5640d0u, 0x563d54u); RETCHK(0x563d59u, 0x563d54u); LOADALL;
  /* 00563d59 mov ecx, dword ptr [0x7a70cc] */ { const u32 m_ = (u32)(0x7a70ccu); ecx = (u32)(M32(m_)); }
  /* 00563d5f push 0x3b */ { u32 v_ = 0x3bu; esp -= 4; M32(esp) = v_; }
  /* 00563d61 push 0x4ab */ { u32 v_ = 0x4abu; esp -= 4; M32(esp) = v_; }
  /* 00563d66 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563d67 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00563d68 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00563d6a call 0x5f13bc */ esp -= 4; M32(esp) = 0x563d6fu; SAVEALL; F_005f13bc(c); ABI_CHECK(0x5f13bcu, 0x563d6au); RETCHK(0x563d6fu, 0x563d6au); LOADALL;
  /* 00563d6f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563d72 jne 0x563d87 */ if (!ZF_) goto L_00563d87;
  /* 00563d74 call 0x5f1398 */ esp -= 4; M32(esp) = 0x563d79u; SAVEALL; F_005f1398(c); ABI_CHECK(0x5f1398u, 0x563d74u); RETCHK(0x563d79u, 0x563d74u); LOADALL;
  /* 00563d79 cmp eax, 0x2734 */ { u32 a_ = eax, b_ = 0x2734u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563d7e je 0x563d87 */ if (ZF_) goto L_00563d87;
L_00563d80:;
  /* 00563d80 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00563d82 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563d83 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563d84 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00563d87:;
  /* 00563d87 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00563d89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00563d8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563d8b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00563d90(CPU *c) {
  NATIVE_HOOK(0x563d90u) REGS; LOADALL;
L_00563d90:;
  /* 00563d90 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00563d92 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00563d95 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563d97 je 0x563dae */ if (ZF_) goto L_00563dae;
  /* 00563d99 cmp eax, 0x2733 */ { u32 a_ = eax, b_ = 0x2733u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563d9e je 0x563de7 */ if (ZF_) goto L_00563de7;
  /* 00563da0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00563da2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563da3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563da5 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563da8u; SAVEALL; call_ind(c, t_); RETCHK(0x563da8u, 0x563da5u); LOADALL; }
  /* 00563da8 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00563daa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563dac jmp dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00563dae:;
  /* 00563dae movzx eax, cx */ { eax = (u32)((ecx & 0xffffu)); }
  /* 00563db1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00563db2 cmp eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563db5 ja 0x563de7 */ if (!(CF_|ZF_)) goto L_00563de7;
  /* 00563db7 movzx ecx, byte ptr [eax + 0x563e00] */ { const u32 m_ = (u32)(eax + 0x563e00u); ecx = (u32)(M8(m_)); }
  /* 00563dbe jmp dword ptr [ecx*4 + 0x563de8] */ { const u32 m_ = (u32)(ecx * 4u + 0x563de8u); u32 t_ = M32(m_); switch (t_) { case 0x563dc5u: goto L_00563dc5; case 0x563dccu: goto L_00563dcc; case 0x563dd3u: goto L_00563dd3; case 0x563ddau: goto L_00563dda; case 0x563de0u: goto L_00563de0; case 0x563de7u: goto L_00563de7; default: SAVEALL; call_ind(c, t_); return; } }
L_00563dc5:;
  /* 00563dc5 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00563dc7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563dc9 jmp dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00563dcc:;
  /* 00563dcc mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00563dce mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563dd0 jmp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00563dd3:;
  /* 00563dd3 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00563dd5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563dd7 jmp dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00563dda:;
  /* 00563dda mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00563ddc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563dde jmp dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00563de0:;
  /* 00563de0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00563de2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00563de4 jmp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00563de7:;
  /* 00563de7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00563e20(CPU *c) {
  NATIVE_HOOK(0x563e20u) REGS; LOADALL;
L_00563e20:;
  /* 00563e20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563e21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563e23 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563e26 push 0x7f00 */ { u32 v_ = 0x7f00u; esp -= 4; M32(esp) = v_; }
  /* 00563e2b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563e2d mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00563e34 mov dword ptr [ebp - 0x24], 0x563f00 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x563f00u); }
  /* 00563e3b mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 00563e42 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 00563e49 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00563e4c call dword ptr [0x62e4bc] */ { const u32 m_ = (u32)(0x62e4bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563e52u; SAVEALL; call_ind(c, t_); RETCHK(0x563e52u, 0x563e4cu); LOADALL; }
  /* 00563e52 push 0x7f00 */ { u32 v_ = 0x7f00u; esp -= 4; M32(esp) = v_; }
  /* 00563e57 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563e59 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00563e5c call dword ptr [0x62e4a0] */ { const u32 m_ = (u32)(0x62e4a0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563e62u; SAVEALL; call_ind(c, t_); RETCHK(0x563e62u, 0x563e5cu); LOADALL; }
  /* 00563e62 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563e64 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00563e67 call dword ptr [0x62e060] */ { const u32 m_ = (u32)(0x62e060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563e6du; SAVEALL; call_ind(c, t_); RETCHK(0x563e6du, 0x563e67u); LOADALL; }
  /* 00563e6d mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00563e70 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00563e73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563e74 mov dword ptr [ebp - 8], 0x656c7c */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x656c7cu); }
  /* 00563e7b mov dword ptr [ebp - 4], 0x656c74 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x656c74u); }
  /* 00563e82 call dword ptr [0x62e59c] */ { const u32 m_ = (u32)(0x62e59cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563e88u; SAVEALL; call_ind(c, t_); RETCHK(0x563e88u, 0x563e82u); LOADALL; }
  /* 00563e88 test ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 00563e8b jne 0x563e93 */ if (!ZF_) goto L_00563e93;
  /* 00563e8d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563e8f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563e91 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563e92 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00563e93:;
  /* 00563e93 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563e95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563e96 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563e98 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563e9a push 0x80000000 */ { u32 v_ = 0x80000000u; esp -= 4; M32(esp) = v_; }
  /* 00563e9f push 0x80000000 */ { u32 v_ = 0x80000000u; esp -= 4; M32(esp) = v_; }
  /* 00563ea4 push 0x80000000 */ { u32 v_ = 0x80000000u; esp -= 4; M32(esp) = v_; }
  /* 00563ea9 push 0x80000000 */ { u32 v_ = 0x80000000u; esp -= 4; M32(esp) = v_; }
  /* 00563eae push 0xcf0000 */ { u32 v_ = 0xcf0000u; esp -= 4; M32(esp) = v_; }
  /* 00563eb3 push 0x656c6c */ { u32 v_ = 0x656c6cu; esp -= 4; M32(esp) = v_; }
  /* 00563eb8 push 0x656c74 */ { u32 v_ = 0x656c74u; esp -= 4; M32(esp) = v_; }
  /* 00563ebd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563ebf call dword ptr [0x62e50c] */ { const u32 m_ = (u32)(0x62e50cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563ec5u; SAVEALL; call_ind(c, t_); RETCHK(0x563ec5u, 0x563ebfu); LOADALL; }
  /* 00563ec5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00563ec7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563ec9 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00563ecc mov dword ptr [0x7a70cc], eax */ { const u32 m_ = (u32)(0x7a70ccu); M32(m_) = (u32)(eax); }
  /* 00563ed1 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00563ed3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563ed5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563ed6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00563ee0(CPU *c) {
  NATIVE_HOOK(0x563ee0u) REGS; LOADALL;
L_00563ee0:;
  /* 00563ee0 mov eax, dword ptr [0x7a70cc] */ { const u32 m_ = (u32)(0x7a70ccu); eax = (u32)(M32(m_)); }
  /* 00563ee5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563ee7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00563ee9 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00563eeb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563eec call dword ptr [0x62e4d8] */ { const u32 m_ = (u32)(0x62e4d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563ef2u; SAVEALL; call_ind(c, t_); RETCHK(0x563ef2u, 0x563eecu); LOADALL; }
  /* 00563ef2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00563f00(CPU *c) {
  NATIVE_HOOK(0x563f00u) REGS; LOADALL;
L_00563f00:;
  /* 00563f00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563f01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563f03 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00563f06 cmp eax, 0x4ab */ { u32 a_ = eax, b_ = 0x4abu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563f0b jne 0x563f66 */ if (!ZF_) goto L_00563f66;
  /* 00563f0d mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00563f10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00563f11 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00563f14 lea ebx, [ebp + 0x10] */ ebx = (u32)((u32)(ebp + 0x10u));
  /* 00563f17 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 00563f1a mov ecx, 0x9b8830 */ { ecx = (u32)(0x9b8830u); }
  /* 00563f1f call 0x564190 */ esp -= 4; M32(esp) = 0x563f24u; SAVEALL; F_00564190(c); ABI_CHECK(0x564190u, 0x563f1fu); RETCHK(0x563f24u, 0x563f1fu); LOADALL;
  /* 00563f24 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00563f26 cmp ecx, dword ptr [0x9b8834] */ { const u32 m_ = (u32)(0x9b8834u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563f2c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00563f2d je 0x563f41 */ if (ZF_) goto L_00563f41;
  /* 00563f2f lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 00563f32 mov ecx, 0x9b8830 */ { ecx = (u32)(0x9b8830u); }
  /* 00563f37 call 0x5640d0 */ esp -= 4; M32(esp) = 0x563f3cu; SAVEALL; F_005640d0(c); ABI_CHECK(0x5640d0u, 0x563f37u); RETCHK(0x563f3cu, 0x563f37u); LOADALL;
  /* 00563f3c cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00563f3f jne 0x563f47 */ if (!ZF_) goto L_00563f47;
L_00563f41:;
  /* 00563f41 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563f43 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563f44 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_00563f47:;
  /* 00563f47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563f48 lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 00563f4b mov ecx, 0x9b8830 */ { ecx = (u32)(0x9b8830u); }
  /* 00563f50 call 0x5640d0 */ esp -= 4; M32(esp) = 0x563f55u; SAVEALL; F_005640d0(c); ABI_CHECK(0x5640d0u, 0x563f50u); RETCHK(0x563f55u, 0x563f50u); LOADALL;
  /* 00563f55 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00563f58 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00563f5a call 0x563d90 */ esp -= 4; M32(esp) = 0x563f5fu; SAVEALL; F_00563d90(c); ABI_CHECK(0x563d90u, 0x563f5au); RETCHK(0x563f5fu, 0x563f5au); LOADALL;
  /* 00563f5f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563f61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563f62 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563f63 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_00563f66:;
  /* 00563f66 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00563f69 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00563f6c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00563f6d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00563f70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563f71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563f72 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00563f73 call dword ptr [0x62e508] */ { const u32 m_ = (u32)(0x62e508u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x563f79u; SAVEALL; call_ind(c, t_); RETCHK(0x563f79u, 0x563f73u); LOADALL; }
  /* 00563f79 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563f7a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00563f80(CPU *c) {
  NATIVE_HOOK(0x563f80u) REGS; LOADALL;
L_00563f80:;
  /* 00563f80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563f81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563f83 sub esp, 0x194 */ { u32 a_ = esp, b_ = 0x194u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563f89 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00563f8e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00563f91 lea eax, [ebp - 0x194] */ eax = (u32)((u32)(ebp + 0xfffffe6cu));
  /* 00563f97 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563f98 push 0x202 */ { u32 v_ = 0x202u; esp -= 4; M32(esp) = v_; }
  /* 00563f9d call 0x5f13c2 */ esp -= 4; M32(esp) = 0x563fa2u; SAVEALL; F_005f13c2(c); ABI_CHECK(0x5f13c2u, 0x563f9du); RETCHK(0x563fa2u, 0x563f9du); LOADALL;
  /* 00563fa2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563fa4 jne 0x563fe7 */ if (!ZF_) goto L_00563fe7;
  /* 00563fa6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00563fa8 call 0x5fe934 */ esp -= 4; M32(esp) = 0x563fadu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x563fa8u); RETCHK(0x563fadu, 0x563fa8u); LOADALL;
  /* 00563fad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563fb0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563fb2 je 0x563fbb */ if (ZF_) goto L_00563fbb;
  /* 00563fb4 call 0x459c10 */ esp -= 4; M32(esp) = 0x563fb9u; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x563fb4u); RETCHK(0x563fb9u, 0x563fb4u); LOADALL;
  /* 00563fb9 jmp 0x563fbd */ goto L_00563fbd;
L_00563fbb:;
  /* 00563fbb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00563fbd:;
  /* 00563fbd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563fbf mov dword ptr [0x7a70c8], eax */ { const u32 m_ = (u32)(0x7a70c8u); M32(m_) = (u32)(eax); }
  /* 00563fc4 je 0x563fe2 */ if (ZF_) goto L_00563fe2;
  /* 00563fc6 call 0x563e20 */ esp -= 4; M32(esp) = 0x563fcbu; SAVEALL; F_00563e20(c); ABI_CHECK(0x563e20u, 0x563fc6u); RETCHK(0x563fcbu, 0x563fc6u); LOADALL;
  /* 00563fcb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563fcd jne 0x563ff5 */ if (!ZF_) goto L_00563ff5;
  /* 00563fcf mov eax, dword ptr [0x7a70c8] */ { const u32 m_ = (u32)(0x7a70c8u); eax = (u32)(M32(m_)); }
  /* 00563fd4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00563fd6 jne 0x563fe7 */ if (!ZF_) goto L_00563fe7;
  /* 00563fd8 mov dword ptr [0x7a70c8], 0 */ { const u32 m_ = (u32)(0x7a70c8u); M32(m_) = (u32)(0x0u); }
L_00563fe2:;
  /* 00563fe2 call 0x5f13c8 */ esp -= 4; M32(esp) = 0x563fe7u; SAVEALL; F_005f13c8(c); ABI_CHECK(0x5f13c8u, 0x563fe2u); RETCHK(0x563fe7u, 0x563fe2u); LOADALL;
L_00563fe7:;
  /* 00563fe7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563fe9 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00563fec call 0x61af31 */ esp -= 4; M32(esp) = 0x563ff1u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x563fecu); RETCHK(0x563ff1u, 0x563fecu); LOADALL;
  /* 00563ff1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563ff3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563ff4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00563ff5:;
  /* 00563ff5 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00563ff8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00563ffd call 0x61af31 */ esp -= 4; M32(esp) = 0x564002u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x563ffdu); RETCHK(0x564002u, 0x563ffdu); LOADALL;
  /* 00564002 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564004 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564005 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564010(CPU *c) {
  NATIVE_HOOK(0x564010u) REGS; LOADALL;
L_00564010:;
  /* 00564010 call 0x5f13c8 */ esp -= 4; M32(esp) = 0x564015u; SAVEALL; F_005f13c8(c); ABI_CHECK(0x5f13c8u, 0x564010u); RETCHK(0x564015u, 0x564010u); LOADALL;
  /* 00564015 mov eax, dword ptr [0x7a70c8] */ { const u32 m_ = (u32)(0x7a70c8u); eax = (u32)(M32(m_)); }
  /* 0056401a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056401c je 0x56403f */ if (ZF_) goto L_0056403f;
  /* 0056401e call 0x563ee0 */ esp -= 4; M32(esp) = 0x564023u; SAVEALL; F_00563ee0(c); ABI_CHECK(0x563ee0u, 0x56401eu); RETCHK(0x564023u, 0x56401eu); LOADALL;
  /* 00564023 mov eax, dword ptr [0x7a70c8] */ { const u32 m_ = (u32)(0x7a70c8u); eax = (u32)(M32(m_)); }
  /* 00564028 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056402a je 0x564035 */ if (ZF_) goto L_00564035;
  /* 0056402c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056402d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x564032u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56402du); RETCHK(0x564032u, 0x56402du); LOADALL;
  /* 00564032 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00564035:;
  /* 00564035 mov dword ptr [0x7a70c8], 0 */ { const u32 m_ = (u32)(0x7a70c8u); M32(m_) = (u32)(0x0u); }
L_0056403f:;
  /* 0056403f mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00564044 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564050(CPU *c) {
  NATIVE_HOOK(0x564050u) REGS; LOADALL;
L_00564050:;
  /* 00564050 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564051 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564053 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564054 mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 00564057 lea ecx, [edi + edx] */ ecx = (u32)((u32)(edi + edx));
  /* 0056405a cmp ecx, 0x8000 */ { u32 a_ = ecx, b_ = 0x8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564060 jbe 0x564069 */ if ((CF_|ZF_)) goto L_00564069;
  /* 00564062 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00564064 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564065 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564066 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00564069:;
  /* 00564069 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056406a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056406b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056406e mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00564070 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00564072 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00564075 lea edi, [edi + eax + 0xc] */ edi = (u32)((u32)(edi + eax + 0xcu));
  /* 00564079 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056407b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056407d and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00564080 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00564082 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00564085 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564086 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00564088 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564089 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0056408c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056408e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056408f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564090 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005640a0(CPU *c) {
  NATIVE_HOOK(0x5640a0u) REGS; LOADALL;
L_005640a0:;
  /* 005640a0 call 0x53d4e0 */ esp -= 4; M32(esp) = 0x5640a5u; SAVEALL; F_0053d4e0(c); ABI_CHECK(0x53d4e0u, 0x5640a0u); RETCHK(0x5640a5u, 0x5640a0u); LOADALL;
  /* 005640a5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005640a8 mov byte ptr [eax + 0x15], 1 */ { const u32 m_ = (u32)(eax + 0x15u); M8(m_) = (u8)(0x1u); }
  /* 005640ac mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005640af mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 005640b2 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005640b5 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005640b7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005640ba mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 005640bd mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005640c4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005640c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005640d0(CPU *c) {
  NATIVE_HOOK(0x5640d0u) REGS; LOADALL;
L_005640d0:;
  /* 005640d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005640d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005640d3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005640d6 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005640d9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005640da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005640db mov esi, eax */ { esi = (u32)(eax); }
  /* 005640dd mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005640e0 mov bl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005640e3 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005640e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005640e6 jne 0x564105 */ if (!ZF_) goto L_00564105;
  /* 005640e8 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005640ea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005640f0:;
  /* 005640f0 cmp dword ptr [eax + 0xc], edi */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005640f3 jae 0x5640fa */ if (!CF_) goto L_005640fa;
  /* 005640f5 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 005640f8 jmp 0x5640fe */ goto L_005640fe;
L_005640fa:;
  /* 005640fa mov edx, eax */ { edx = (u32)(eax); }
  /* 005640fc mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_005640fe:;
  /* 005640fe mov bl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564101 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00564103 je 0x5640f0 */ if (ZF_) goto L_005640f0;
L_00564105:;
  /* 00564105 cmp edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564108 je 0x564111 */ if (ZF_) goto L_00564111;
  /* 0056410a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0056410c cmp eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056410f jae 0x564135 */ if (!CF_) goto L_00564135;
L_00564111:;
  /* 00564111 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00564113 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00564116 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00564117 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0056411a lea esi, [ebp - 4] */ esi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0056411d mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 00564124 call 0x564220 */ esp -= 4; M32(esp) = 0x564129u; SAVEALL; F_00564220(c); ABI_CHECK(0x564220u, 0x564124u); RETCHK(0x564129u, 0x564124u); LOADALL;
  /* 00564129 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0056412b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056412c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056412d add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00564130 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564131 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564133 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564134 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00564135:;
  /* 00564135 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564136 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564137 lea eax, [edx + 0x10] */ eax = (u32)((u32)(edx + 0x10u));
  /* 0056413a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056413b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056413d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056413e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564140(CPU *c) {
  NATIVE_HOOK(0x564140u) REGS; LOADALL;
L_00564140:;
  /* 00564140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564143 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564146 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00564149 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056414a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056414b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056414c lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0056414f call 0x5643b0 */ esp -= 4; M32(esp) = 0x564154u; SAVEALL; F_005643b0(c); ABI_CHECK(0x5643b0u, 0x56414fu); RETCHK(0x564154u, 0x56414fu); LOADALL;
  /* 00564154 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 00564157 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 0056415a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0056415c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056415e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00564161 je 0x564171 */ if (ZF_) goto L_00564171;
L_00564163:;
  /* 00564163 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00564166 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564167 call 0x53d420 */ esp -= 4; M32(esp) = 0x56416cu; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x564167u); RETCHK(0x56416cu, 0x564167u); LOADALL;
  /* 0056416c cmp dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056416f jne 0x564163 */ if (!ZF_) goto L_00564163;
L_00564171:;
  /* 00564171 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564172 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564173 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00564176 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00564179 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056417a call 0x564330 */ esp -= 4; M32(esp) = 0x56417fu; SAVEALL; F_00564330(c); ABI_CHECK(0x564330u, 0x56417au); RETCHK(0x56417fu, 0x56417au); LOADALL;
  /* 0056417f mov eax, edi */ { eax = (u32)(edi); }
  /* 00564181 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564182 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564183 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564184 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564186 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564187 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00564190(CPU *c) {
  NATIVE_HOOK(0x564190u) REGS; LOADALL;
L_00564190:;
  /* 00564190 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564191 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564193 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564196 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564197 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00564199 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056419c mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056419f cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005641a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005641a4 jne 0x5641bc */ if (!ZF_) goto L_005641bc;
  /* 005641a6 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
L_005641a8:;
  /* 005641a8 cmp dword ptr [ecx + 0xc], edi */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005641ab jae 0x5641b2 */ if (!CF_) goto L_005641b2;
  /* 005641ad mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005641b0 jmp 0x5641b6 */ goto L_005641b6;
L_005641b2:;
  /* 005641b2 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005641b4 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_005641b6:;
  /* 005641b6 cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005641ba je 0x5641a8 */ if (ZF_) goto L_005641a8;
L_005641bc:;
  /* 005641bc mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005641bf cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005641c1 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005641c4 je 0x5641da */ if (ZF_) goto L_005641da;
  /* 005641c6 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 005641c8 cmp esi, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005641cb jb 0x5641da */ if (CF_) goto L_005641da;
  /* 005641cd lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005641d0 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005641d2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005641d3 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005641d5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005641d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005641d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005641d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005641da:;
  /* 005641da mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 005641dd lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005641e0 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005641e2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005641e3 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005641e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005641e6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005641e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005641e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005641f0(CPU *c) {
  NATIVE_HOOK(0x5641f0u) REGS; LOADALL;
L_005641f0:;
  /* 005641f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005641f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005641f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005641f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005641f6 call 0x54e870 */ esp -= 4; M32(esp) = 0x5641fbu; SAVEALL; F_0054e870(c); ABI_CHECK(0x54e870u, 0x5641f6u); RETCHK(0x5641fbu, 0x5641f6u); LOADALL;
  /* 005641fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005641ff je 0x56420a */ if (ZF_) goto L_0056420a;
  /* 00564201 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564202 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x564207u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x564202u); RETCHK(0x564207u, 0x564202u); LOADALL;
  /* 00564207 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056420a:;
  /* 0056420a mov eax, esi */ { eax = (u32)(esi); }
  /* 0056420c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056420d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056420e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00564220(CPU *c) {
  NATIVE_HOOK(0x564220u) REGS; LOADALL;
L_00564220:;
  /* 00564220 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564221 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564223 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564226 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564227 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564228 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056422a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0056422c mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056422f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564231 jne 0x564249 */ if (!ZF_) goto L_00564249;
  /* 00564233 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564236 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564237 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00564239 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056423a call 0x55fbe0 */ esp -= 4; M32(esp) = 0x56423fu; SAVEALL; F_0055fbe0(c); ABI_CHECK(0x55fbe0u, 0x56423au); RETCHK(0x56423fu, 0x56423au); LOADALL;
  /* 0056423f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564240 mov eax, esi */ { eax = (u32)(esi); }
  /* 00564242 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564243 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564245 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564246 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00564249:;
  /* 00564249 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056424c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056424f cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564251 jne 0x564271 */ if (!ZF_) goto L_00564271;
  /* 00564253 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00564255 cmp eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564258 jae 0x564317 */ if (!CF_) goto L_00564317;
  /* 0056425e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056425f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00564261 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564262 call 0x55fbe0 */ esp -= 4; M32(esp) = 0x564267u; SAVEALL; F_0055fbe0(c); ABI_CHECK(0x55fbe0u, 0x564262u); RETCHK(0x564267u, 0x564262u); LOADALL;
  /* 00564267 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564268 mov eax, esi */ { eax = (u32)(esi); }
  /* 0056426a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056426b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056426d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056426e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00564271:;
  /* 00564271 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564273 jne 0x564296 */ if (!ZF_) goto L_00564296;
  /* 00564275 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00564278 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056427b cmp edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056427d jae 0x564317 */ if (!CF_) goto L_00564317;
  /* 00564283 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_00564284:;
  /* 00564284 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00564286 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564287 call 0x55fbe0 */ esp -= 4; M32(esp) = 0x56428cu; SAVEALL; F_0055fbe0(c); ABI_CHECK(0x55fbe0u, 0x564287u); RETCHK(0x56428cu, 0x564287u); LOADALL;
  /* 0056428c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056428d mov eax, esi */ { eax = (u32)(esi); }
  /* 0056428f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564290 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564292 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564293 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00564296:;
  /* 00564296 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00564298 cmp eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056429b jae 0x5642d5 */ if (!CF_) goto L_005642d5;
  /* 0056429d lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005642a0 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005642a3 call 0x552ea0 */ esp -= 4; M32(esp) = 0x5642a8u; SAVEALL; F_00552ea0(c); ABI_CHECK(0x552ea0u, 0x5642a3u); RETCHK(0x5642a8u, 0x5642a3u); LOADALL;
  /* 005642a8 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005642ab mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005642ad cmp dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005642b0 jae 0x5642d2 */ if (!CF_) goto L_005642d2;
  /* 005642b2 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005642b5 mov dl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005642b8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005642ba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005642bb jne 0x564284 */ if (!ZF_) goto L_00564284;
  /* 005642bd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005642c0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005642c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005642c3 call 0x55fbe0 */ esp -= 4; M32(esp) = 0x5642c8u; SAVEALL; F_0055fbe0(c); ABI_CHECK(0x55fbe0u, 0x5642c3u); RETCHK(0x5642c8u, 0x5642c3u); LOADALL;
  /* 005642c8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005642c9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005642cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005642cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005642ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005642cf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005642d2:;
  /* 005642d2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
L_005642d5:;
  /* 005642d5 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005642d7 cmp dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005642da jae 0x564317 */ if (!CF_) goto L_00564317;
  /* 005642dc lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005642df mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005642e2 call 0x53d420 */ esp -= 4; M32(esp) = 0x5642e7u; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x5642e2u); RETCHK(0x5642e7u, 0x5642e2u); LOADALL;
  /* 005642e7 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005642ea cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005642ed je 0x5642f6 */ if (ZF_) goto L_005642f6;
  /* 005642ef mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005642f1 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005642f4 jae 0x564317 */ if (!CF_) goto L_00564317;
L_005642f6:;
  /* 005642f6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005642f9 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005642fc cmp byte ptr [edx + 0x15], 0 */ { const u32 m_ = (u32)(edx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00564300 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564301 jne 0x564284 */ if (!ZF_) goto L_00564284;
  /* 00564303 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00564305 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564306 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00564308 call 0x55fbe0 */ esp -= 4; M32(esp) = 0x56430du; SAVEALL; F_0055fbe0(c); ABI_CHECK(0x55fbe0u, 0x564308u); RETCHK(0x56430du, 0x564308u); LOADALL;
  /* 0056430d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056430e mov eax, esi */ { eax = (u32)(esi); }
  /* 00564310 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564311 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564313 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564314 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00564317:;
  /* 00564317 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564318 lea ebx, [ebp - 8] */ ebx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0056431b mov eax, edi */ { eax = (u32)(edi); }
  /* 0056431d call 0x564410 */ esp -= 4; M32(esp) = 0x564322u; SAVEALL; F_00564410(c); ABI_CHECK(0x564410u, 0x56431du); RETCHK(0x564322u, 0x56431du); LOADALL;
  /* 00564322 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00564324 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564325 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00564327 mov eax, esi */ { eax = (u32)(esi); }
  /* 00564329 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056432a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056432c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056432d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00564330(CPU *c) {
  NATIVE_HOOK(0x564330u) REGS; LOADALL;
L_00564330:;
  /* 00564330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564333 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564336 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00564339 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056433b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056433c mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0056433f jne 0x564377 */ if (!ZF_) goto L_00564377;
  /* 00564341 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564343 jne 0x564377 */ if (!ZF_) goto L_00564377;
  /* 00564345 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00564348 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564349 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0056434b call 0x5644b0 */ esp -= 4; M32(esp) = 0x564350u; SAVEALL; F_005644b0(c); ABI_CHECK(0x5644b0u, 0x56434bu); RETCHK(0x564350u, 0x56434bu); LOADALL;
  /* 00564350 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00564353 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 00564356 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00564359 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00564360 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00564362 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00564365 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 00564368 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056436b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056436d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00564370 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00564372 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564373 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564374 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00564377:;
  /* 00564377 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564379 je 0x56439d */ if (ZF_) goto L_0056439d;
  /* 0056437b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056437c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00564380:;
  /* 00564380 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 00564383 mov edi, eax */ { edi = (u32)(eax); }
  /* 00564385 call 0x53d420 */ esp -= 4; M32(esp) = 0x56438au; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x564385u); RETCHK(0x56438au, 0x564385u); LOADALL;
  /* 0056438a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056438b lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0056438e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056438f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564390 call 0x55fe30 */ esp -= 4; M32(esp) = 0x564395u; SAVEALL; F_0055fe30(c); ABI_CHECK(0x55fe30u, 0x564390u); RETCHK(0x564395u, 0x564390u); LOADALL;
  /* 00564395 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00564398 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056439a jne 0x564380 */ if (!ZF_) goto L_00564380;
  /* 0056439c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0056439d:;
  /* 0056439d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005643a0 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005643a2 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005643a4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005643a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005643a6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005643b0(CPU *c) {
  NATIVE_HOOK(0x5643b0u) REGS; LOADALL;
L_005643b0:;
  /* 005643b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005643b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005643b2 mov esi, edx */ { esi = (u32)(edx); }
  /* 005643b4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005643b7 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005643b9 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005643bc cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005643c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005643c1 jne 0x5643d9 */ if (!ZF_) goto L_005643d9;
  /* 005643c3 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
L_005643c5:;
  /* 005643c5 cmp edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005643c8 jae 0x5643d0 */ if (!CF_) goto L_005643d0;
  /* 005643ca mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005643cc mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005643ce jmp 0x5643d3 */ goto L_005643d3;
L_005643d0:;
  /* 005643d0 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
L_005643d3:;
  /* 005643d3 cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005643d7 je 0x5643c5 */ if (ZF_) goto L_005643c5;
L_005643d9:;
  /* 005643d9 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 005643dc mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005643df cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005643e3 jne 0x5643fc */ if (!ZF_) goto L_005643fc;
  /* 005643e5 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
L_005643e7:;
  /* 005643e7 cmp dword ptr [ecx + 0xc], edi */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005643ea jae 0x5643f1 */ if (!CF_) goto L_005643f1;
  /* 005643ec mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005643ef jmp 0x5643f5 */ goto L_005643f5;
L_005643f1:;
  /* 005643f1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005643f3 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_005643f5:;
  /* 005643f5 mov bl, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005643f8 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005643fa je 0x5643e7 */ if (ZF_) goto L_005643e7;
L_005643fc:;
  /* 005643fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005643fd mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 005643ff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564400 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 00564403 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564404 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564410(CPU *c) {
  NATIVE_HOOK(0x564410u) REGS; LOADALL;
L_00564410:;
  /* 00564410 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564411 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564413 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564416 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564417 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564418 mov edi, eax */ { edi = (u32)(eax); }
  /* 0056441a mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0056441d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00564420 mov dl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564423 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00564425 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00564427 mov byte ptr [ebp - 8], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0056442a jne 0x56444d */ if (!ZF_) goto L_0056444d;
  /* 0056442c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056442f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
L_00564431:;
  /* 00564431 cmp edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564434 setb cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((CF_) ? 1u : 0u) & 0xffu); }
  /* 00564437 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00564439 mov esi, eax */ { esi = (u32)(eax); }
  /* 0056443b mov byte ptr [ebp - 8], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0056443e je 0x564444 */ if (ZF_) goto L_00564444;
  /* 00564440 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00564442 jmp 0x564447 */ goto L_00564447;
L_00564444:;
  /* 00564444 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
L_00564447:;
  /* 00564447 cmp byte ptr [eax + 0x15], 0 */ { const u32 m_ = (u32)(eax + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056444b je 0x564431 */ if (ZF_) goto L_00564431;
L_0056444d:;
  /* 0056444d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056444f mov eax, esi */ { eax = (u32)(esi); }
  /* 00564451 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00564454 je 0x564470 */ if (ZF_) goto L_00564470;
  /* 00564456 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00564459 cmp esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056445b jne 0x564465 */ if (!ZF_) goto L_00564465;
  /* 0056445d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00564460 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564461 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00564463 jmp 0x56447f */ goto L_0056447f;
L_00564465:;
  /* 00564465 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00564468 call 0x552ea0 */ esp -= 4; M32(esp) = 0x56446du; SAVEALL; F_00552ea0(c); ABI_CHECK(0x552ea0u, 0x564468u); RETCHK(0x56446du, 0x564468u); LOADALL;
  /* 0056446d mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_00564470:;
  /* 00564470 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 00564473 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00564476 cmp edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564478 jae 0x56449c */ if (!CF_) goto L_0056449c;
  /* 0056447a mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0056447d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056447e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0056447f:;
  /* 0056447f lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 00564482 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564483 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00564485 call 0x55fbe0 */ esp -= 4; M32(esp) = 0x56448au; SAVEALL; F_0055fbe0(c); ABI_CHECK(0x55fbe0u, 0x564485u); RETCHK(0x56448au, 0x564485u); LOADALL;
  /* 0056448a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0056448c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056448d mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 0056448f mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 00564493 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00564495 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564496 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564498 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564499 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056449c:;
  /* 0056449c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056449d mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 0056449f mov byte ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 005644a3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005644a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005644a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005644a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005644a9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005644b0(CPU *c) {
  NATIVE_HOOK(0x5644b0u) REGS; LOADALL;
L_005644b0:;
  /* 005644b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005644b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005644b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005644b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005644b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005644b6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005644b9 mov al, byte ptr [edi + 0x15] */ { const u32 m_ = (u32)(edi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005644bc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005644be mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005644c0 mov esi, edi */ { esi = (u32)(edi); }
  /* 005644c2 jne 0x5644e3 */ if (!ZF_) goto L_005644e3;
L_005644c4:;
  /* 005644c4 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005644c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005644c8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005644ca call 0x5644b0 */ esp -= 4; M32(esp) = 0x5644cfu; SAVEALL; F_005644b0(c); ABI_CHECK(0x5644b0u, 0x5644cau); RETCHK(0x5644cfu, 0x5644cau); LOADALL;
  /* 005644cf mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005644d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005644d2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5644d7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5644d2u); RETCHK(0x5644d7u, 0x5644d2u); LOADALL;
  /* 005644d7 mov al, byte ptr [esi + 0x15] */ { const u32 m_ = (u32)(esi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005644da add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005644dd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005644df mov edi, esi */ { edi = (u32)(esi); }
  /* 005644e1 je 0x5644c4 */ if (ZF_) goto L_005644c4;
L_005644e3:;
  /* 005644e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005644e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005644e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005644e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005644e7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005644f0(CPU *c) {
  NATIVE_HOOK(0x5644f0u) REGS; LOADALL;
L_005644f0:;
  /* 005644f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005644f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005644f3 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005644f6 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005644f8 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005644fb mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005644fd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005644fe mov bl, byte ptr [edx + 0x15] */ { const u32 m_ = (u32)(edx + 0x15u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564501 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00564503 jne 0x564508 */ if (!ZF_) goto L_00564508;
  /* 00564505 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_00564508:;
  /* 00564508 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056450b mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0056450e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00564511 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00564514 cmp ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564517 jne 0x564526 */ if (!ZF_) goto L_00564526;
  /* 00564519 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0056451c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0056451e mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00564521 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564522 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564523 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00564526:;
  /* 00564526 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00564529 cmp ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056452b jne 0x564539 */ if (!ZF_) goto L_00564539;
  /* 0056452d mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0056452f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00564531 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00564534 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564535 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564536 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00564539:;
  /* 00564539 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056453c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0056453e mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00564541 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564542 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564543 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00564550(CPU *c) {
  NATIVE_HOOK(0x564550u) REGS; LOADALL;
L_00564550:;
  /* 00564550 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564551 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564553 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00564559 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056455b push 0x61b468 */ { u32 v_ = 0x61b468u; esp -= 4; M32(esp) = v_; }
  /* 00564560 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564561 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00564568 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564569 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056456c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056456d call 0x5650b0 */ esp -= 4; M32(esp) = 0x564572u; SAVEALL; F_005650b0(c); ABI_CHECK(0x5650b0u, 0x56456du); RETCHK(0x564572u, 0x56456du); LOADALL;
  /* 00564572 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00564574 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00564577 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0056457a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0056457d call 0x5650d0 */ esp -= 4; M32(esp) = 0x564582u; SAVEALL; F_005650d0(c); ABI_CHECK(0x5650d0u, 0x56457du); RETCHK(0x564582u, 0x56457du); LOADALL;
  /* 00564582 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00564585 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00564588 mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 0056458b mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 0056458e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056458f mov eax, esi */ { eax = (u32)(esi); }
  /* 00564591 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00564598 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564599 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056459b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056459c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005645a0(CPU *c) {
  NATIVE_HOOK(0x5645a0u) REGS; LOADALL;
L_005645a0:;
  /* 005645a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005645a1 lea esi, [edi + 0xc] */ esi = (u32)((u32)(edi + 0xcu));
  /* 005645a4 call 0x529410 */ esp -= 4; M32(esp) = 0x5645a9u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x5645a4u); RETCHK(0x5645a9u, 0x5645a4u); LOADALL;
  /* 005645a9 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005645ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005645ad call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5645b2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5645adu); RETCHK(0x5645b2u, 0x5645adu); LOADALL;
  /* 005645b2 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005645b9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005645bc mov esi, edi */ { esi = (u32)(edi); }
  /* 005645be call 0x529410 */ esp -= 4; M32(esp) = 0x5645c3u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x5645beu); RETCHK(0x5645c3u, 0x5645beu); LOADALL;
  /* 005645c3 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005645c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005645c7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5645ccu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5645c7u); RETCHK(0x5645ccu, 0x5645c7u); LOADALL;
  /* 005645cc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005645cf mov dword ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005645d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005645d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005645e0(CPU *c) {
  NATIVE_HOOK(0x5645e0u) REGS; LOADALL;
L_005645e0:;
  /* 005645e0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005645e2 je 0x564636 */ if (ZF_) goto L_00564636;
  /* 005645e4 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005645e7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005645e9 je 0x564636 */ if (ZF_) goto L_00564636;
  /* 005645eb jmp 0x5645f0 */ goto L_005645f0;
L_005645f0:;
  /* 005645f0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005645f2 cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005645f5 je 0x5645fc */ if (ZF_) goto L_005645fc;
  /* 005645f7 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005645fa jne 0x5645ff */ if (!ZF_) goto L_005645ff;
L_005645fc:;
  /* 005645fc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005645fd jmp 0x5645f0 */ goto L_005645f0;
L_005645ff:;
  /* 005645ff cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564601 je 0x564611 */ if (ZF_) goto L_00564611;
  /* 00564603 mov edx, esi */ { edx = (u32)(esi); }
  /* 00564605 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_00564607:;
  /* 00564607 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564609 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0056460c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056460d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056460f jne 0x564607 */ if (!ZF_) goto L_00564607;
L_00564611:;
  /* 00564611 mov eax, esi */ { eax = (u32)(esi); }
  /* 00564613 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00564616:;
  /* 00564616 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564618 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564619 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056461b jne 0x564616 */ if (!ZF_) goto L_00564616;
  /* 0056461d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056461f je 0x564636 */ if (ZF_) goto L_00564636;
  /* 00564621 lea ecx, [eax + esi - 1] */ ecx = (u32)((u32)(eax + esi + 0xffffffffu));
L_00564625:;
  /* 00564625 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564627 cmp al, 9 */ { u32 a_ = (eax & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00564629 je 0x56462f */ if (ZF_) goto L_0056462f;
  /* 0056462b cmp al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056462d jne 0x564632 */ if (!ZF_) goto L_00564632;
L_0056462f:;
  /* 0056462f dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00564630 jmp 0x564625 */ goto L_00564625;
L_00564632:;
  /* 00564632 mov byte ptr [ecx + 1], 0 */ { const u32 m_ = (u32)(ecx + 0x1u); M8(m_) = (u8)(0x0u); }
L_00564636:;
  /* 00564636 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564640(CPU *c) {
  NATIVE_HOOK(0x564640u) REGS; LOADALL;
L_00564640:;
  /* 00564640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564643 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00564645 push 0x61fd97 */ { u32 v_ = 0x61fd97u; esp -= 4; M32(esp) = v_; }
  /* 0056464a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00564650 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564651 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00564658 sub esp, 0x668 */ { u32 a_ = esp, b_ = 0x668u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056465e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00564663 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564664 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564665 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00564668 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0056466b call 0x529410 */ esp -= 4; M32(esp) = 0x564670u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x56466bu); RETCHK(0x564670u, 0x56466bu); LOADALL;
  /* 00564670 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00564673 call 0x529410 */ esp -= 4; M32(esp) = 0x564678u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x564673u); RETCHK(0x564678u, 0x564673u); LOADALL;
  /* 00564678 lea eax, [ebp - 0x564] */ eax = (u32)((u32)(ebp + 0xfffffa9cu));
  /* 0056467e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056467f mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00564684 call 0x4feae0 */ esp -= 4; M32(esp) = 0x564689u; SAVEALL; F_004feae0(c); ABI_CHECK(0x4feae0u, 0x564684u); RETCHK(0x564689u, 0x564684u); LOADALL;
  /* 00564689 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056468c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056468e push 0x1b6 */ { u32 v_ = 0x1b6u; esp -= 4; M32(esp) = v_; }
  /* 00564693 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00564698 lea esi, [ebp - 0x55c] */ esi = (u32)((u32)(ebp + 0xfffffaa4u));
  /* 0056469e mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005646a1 call 0x4ff4f0 */ esp -= 4; M32(esp) = 0x5646a6u; SAVEALL; F_004ff4f0(c); ABI_CHECK(0x4ff4f0u, 0x5646a1u); RETCHK(0x5646a6u, 0x5646a1u); LOADALL;
  /* 005646a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005646a8 jne 0x5646d9 */ if (!ZF_) goto L_005646d9;
  /* 005646aa mov ecx, dword ptr [ebp - 0x564] */ { const u32 m_ = (u32)(ebp + 0xfffffa9cu); ecx = (u32)(M32(m_)); }
  /* 005646b0 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005646b3 mov eax, dword ptr [ebp + ecx - 0x55c] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffaa4u); eax = (u32)(M32(m_)); }
  /* 005646ba mov edx, dword ptr [ebp + ecx - 0x53c] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffac4u); edx = (u32)(M32(m_)); }
  /* 005646c1 lea ecx, [ebp + ecx - 0x564] */ ecx = (u32)((u32)(ebp + ecx + 0xfffffa9cu));
  /* 005646c8 or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005646cb cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005646cd jne 0x5646d2 */ if (!ZF_) goto L_005646d2;
  /* 005646cf or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005646d2:;
  /* 005646d2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005646d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005646d4 call 0x601918 */ esp -= 4; M32(esp) = 0x5646d9u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x5646d4u); RETCHK(0x5646d9u, 0x5646d4u); LOADALL;
L_005646d9:;
  /* 005646d9 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 005646dc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005646dd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_005646e0:;
  /* 005646e0 mov edx, dword ptr [ebp - 0x564] */ { const u32 m_ = (u32)(ebp + 0xfffffa9cu); edx = (u32)(M32(m_)); }
  /* 005646e6 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005646e9 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005646eb lea ecx, [ebp + ecx - 0x564] */ ecx = (u32)((u32)(ebp + ecx + 0xfffffa9cu));
  /* 005646f2 call 0x4d3f40 */ esp -= 4; M32(esp) = 0x5646f7u; SAVEALL; F_004d3f40(c); ABI_CHECK(0x4d3f40u, 0x5646f2u); RETCHK(0x5646f7u, 0x5646f2u); LOADALL;
  /* 005646f7 lea ecx, [ebp - 0x564] */ ecx = (u32)((u32)(ebp + 0xfffffa9cu));
  /* 005646fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005646fe push 0x3ff */ { u32 v_ = 0x3ffu; esp -= 4; M32(esp) = v_; }
  /* 00564703 lea eax, [ebp - 0x494] */ eax = (u32)((u32)(ebp + 0xfffffb6cu));
  /* 00564709 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056470a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056470b call 0x564f10 */ esp -= 4; M32(esp) = 0x564710u; SAVEALL; F_00564f10(c); ABI_CHECK(0x564f10u, 0x56470bu); RETCHK(0x564710u, 0x56470bu); LOADALL;
  /* 00564710 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564712 jne 0x564718 */ if (!ZF_) goto L_00564718;
  /* 00564714 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00564716 jmp 0x56471f */ goto L_0056471f;
L_00564718:;
  /* 00564718 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0056471a mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056471d add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0056471f:;
  /* 0056471f mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00564722 and al, 6 */ { u32 a_ = (eax & 0xffu), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00564724 neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 00564726 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00564728 not eax */ { eax = (u32)(~eax & 0xffffffffu); }
  /* 0056472a test ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056472c je 0x564ae5 */ if (ZF_) goto L_00564ae5;
  /* 00564732 lea esi, [ebp - 0x494] */ esi = (u32)((u32)(ebp + 0xfffffb6cu));
  /* 00564738 call 0x5645e0 */ esp -= 4; M32(esp) = 0x56473du; SAVEALL; F_005645e0(c); ABI_CHECK(0x5645e0u, 0x564738u); RETCHK(0x56473du, 0x564738u); LOADALL;
  /* 0056473d mov eax, esi */ { eax = (u32)(esi); }
  /* 0056473f lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00564742:;
  /* 00564742 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564744 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564745 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00564747 jne 0x564742 */ if (!ZF_) goto L_00564742;
  /* 00564749 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056474b cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056474e jl 0x5646e0 */ if (LT_) goto L_005646e0;
  /* 00564750 mov cl, byte ptr [ebp - 0x494] */ { const u32 m_ = (u32)(ebp + 0xfffffb6cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564756 cmp cl, 0x3b */ { u32 a_ = (ecx & 0xffu), b_ = 0x3bu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00564759 je 0x5646e0 */ if (ZF_) goto L_005646e0;
  /* 0056475b cmp cl, 0x5b */ { u32 a_ = (ecx & 0xffu), b_ = 0x5bu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056475e jne 0x5647b6 */ if (!ZF_) goto L_005647b6;
  /* 00564760 cmp byte ptr [ebp + eax - 0x495], 0x5d */ { const u32 m_ = (u32)(ebp + eax + 0xfffffb6bu); u32 a_ = M8(m_), b_ = 0x5du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00564768 jne 0x5647b6 */ if (!ZF_) goto L_005647b6;
  /* 0056476a lea ecx, [ebp - 0x494] */ ecx = (u32)((u32)(ebp + 0xfffffb6cu));
  /* 00564770 push 0x656c94 */ { u32 v_ = 0x656c94u; esp -= 4; M32(esp) = v_; }
  /* 00564775 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564776 call 0x5fedc8 */ esp -= 4; M32(esp) = 0x56477bu; SAVEALL; F_005fedc8(c); ABI_CHECK(0x5fedc8u, 0x564776u); RETCHK(0x56477bu, 0x564776u); LOADALL;
  /* 0056477b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056477e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564780 jne 0x56478e */ if (!ZF_) goto L_0056478e;
  /* 00564782 mov dword ptr [ebp + 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x1u); }
  /* 00564789 jmp 0x5646e0 */ goto L_005646e0;
L_0056478e:;
  /* 0056478e lea edx, [ebp - 0x494] */ edx = (u32)((u32)(ebp + 0xfffffb6cu));
  /* 00564794 push 0x656c88 */ { u32 v_ = 0x656c88u; esp -= 4; M32(esp) = v_; }
  /* 00564799 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056479a call 0x5fedc8 */ esp -= 4; M32(esp) = 0x56479fu; SAVEALL; F_005fedc8(c); ABI_CHECK(0x5fedc8u, 0x56479au); RETCHK(0x56479fu, 0x56479au); LOADALL;
  /* 0056479f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005647a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005647a4 jne 0x5646e0 */ if (!ZF_) goto L_005646e0;
  /* 005647aa mov dword ptr [ebp + 0xc], 2 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x2u); }
  /* 005647b1 jmp 0x5646e0 */ goto L_005646e0;
L_005647b6:;
  /* 005647b6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005647b9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005647ba je 0x564958 */ if (ZF_) goto L_00564958;
  /* 005647c0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005647c1 jne 0x5646e0 */ if (!ZF_) goto L_005646e0;
  /* 005647c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005647c9 mov ecx, 0xd */ { ecx = (u32)(0xdu); }
  /* 005647ce lea edi, [ebp - 0x94] */ edi = (u32)((u32)(ebp + 0xffffff6cu));
  /* 005647d4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005647d6 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 005647db lea eax, [ebp - 0x494] */ eax = (u32)((u32)(ebp + 0xfffffb6cu));
  /* 005647e1 mov dword ptr [ebp - 0x4b4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffb4cu); M32(m_) = (u32)(esi); }
  /* 005647e7 mov dword ptr [ebp - 0x4b8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffb48u); M32(m_) = (u32)(ebx); }
  /* 005647ed mov byte ptr [ebp - 0x4c8], bl */ { const u32 m_ = (u32)(ebp + 0xfffffb38u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005647f3 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_005647f6:;
  /* 005647f6 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005647f8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005647f9 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005647fb jne 0x5647f6 */ if (!ZF_) goto L_005647f6;
  /* 005647fd sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005647ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564800 lea eax, [ebp - 0x494] */ eax = (u32)((u32)(ebp + 0xfffffb6cu));
  /* 00564806 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564807 lea ecx, [ebp - 0x4cc] */ ecx = (u32)((u32)(ebp + 0xfffffb34u));
  /* 0056480d call 0x404420 */ esp -= 4; M32(esp) = 0x564812u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x56480du); RETCHK(0x564812u, 0x56480du); LOADALL;
  /* 00564812 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00564814 lea ecx, [ebp - 0x4cc] */ ecx = (u32)((u32)(ebp + 0xfffffb34u));
  /* 0056481a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056481b lea edx, [ebp - 0x674] */ edx = (u32)((u32)(ebp + 0xfffff98cu));
  /* 00564821 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00564822 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00564827 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 0056482b call 0x564e80 */ esp -= 4; M32(esp) = 0x564830u; SAVEALL; F_00564e80(c); ABI_CHECK(0x564e80u, 0x56482bu); RETCHK(0x564830u, 0x56482bu); LOADALL;
  /* 00564830 mov eax, dword ptr [ebp - 0x4b4] */ { const u32 m_ = (u32)(ebp + 0xfffffb4cu); eax = (u32)(M32(m_)); }
  /* 00564836 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0056483b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056483d jb 0x56484e */ if (CF_) goto L_0056484e;
  /* 0056483f mov eax, dword ptr [ebp - 0x4c8] */ { const u32 m_ = (u32)(ebp + 0xfffffb38u); eax = (u32)(M32(m_)); }
  /* 00564845 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564846 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56484bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x564846u); RETCHK(0x56484bu, 0x564846u); LOADALL;
  /* 0056484b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056484e:;
  /* 0056484e mov dword ptr [ebp - 0x4b4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffb4cu); M32(m_) = (u32)(esi); }
  /* 00564854 mov dword ptr [ebp - 0x4b8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffb48u); M32(m_) = (u32)(ebx); }
  /* 0056485a mov byte ptr [ebp - 0x4c8], bl */ { const u32 m_ = (u32)(ebp + 0xfffffb38u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564860 mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 00564863 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 00564866 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564869 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056486c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056486d lea edx, [ebp - 0x92] */ edx = (u32)((u32)(ebp + 0xffffff6eu));
  /* 00564873 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00564874 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0056487a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056487b lea ecx, [ebp - 0x674] */ ecx = (u32)((u32)(ebp + 0xfffff98cu));
  /* 00564881 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564882 mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 00564886 call 0x564d00 */ esp -= 4; M32(esp) = 0x56488bu; SAVEALL; F_00564d00(c); ABI_CHECK(0x564d00u, 0x564886u); RETCHK(0x56488bu, 0x564886u); LOADALL;
  /* 0056488b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056488c call 0x564d00 */ esp -= 4; M32(esp) = 0x564891u; SAVEALL; F_00564d00(c); ABI_CHECK(0x564d00u, 0x56488cu); RETCHK(0x564891u, 0x56488cu); LOADALL;
  /* 00564891 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564892 call 0x4ff960 */ esp -= 4; M32(esp) = 0x564897u; SAVEALL; F_004ff960(c); ABI_CHECK(0x4ff960u, 0x564892u); RETCHK(0x564897u, 0x564892u); LOADALL;
  /* 00564897 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0056489a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056489d cmp eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005648a0 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 005648a3 mov word ptr [ebp - 0x64], bx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 005648a7 jb 0x5648be */ if (CF_) goto L_005648be;
  /* 005648a9 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005648ab jb 0x5648b9 */ if (CF_) goto L_005648b9;
  /* 005648ad mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 005648b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005648b1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5648b6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5648b1u); RETCHK(0x5648b6u, 0x5648b1u); LOADALL;
  /* 005648b6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005648b9:;
  /* 005648b9 mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 005648bc jmp 0x56492a */ goto L_0056492a;
L_005648be:;
  /* 005648be cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005648c0 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 005648c3 jae 0x5648c8 */ if (!CF_) goto L_005648c8;
  /* 005648c5 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_005648c8:;
  /* 005648c8 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 005648ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005648cb lea eax, [ebp - 0x90] */ eax = (u32)((u32)(ebp + 0xffffff70u));
  /* 005648d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005648d2 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x5648d7u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x5648d2u); RETCHK(0x5648d7u, 0x5648d2u); LOADALL;
  /* 005648d7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005648da mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 005648dd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005648e0 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005648e3 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 005648e9 mov byte ptr [ebp - 0x7d], bl */ { const u32 m_ = (u32)(ebp + 0xffffff83u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005648ec mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005648ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005648f0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005648f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005648f2 call 0x565250 */ esp -= 4; M32(esp) = 0x5648f7u; SAVEALL; F_00565250(c); ABI_CHECK(0x565250u, 0x5648f2u); RETCHK(0x5648f7u, 0x5648f2u); LOADALL;
  /* 005648f7 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005648fa mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005648ff add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00564902 mov edi, eax */ { edi = (u32)(eax); }
  /* 00564904 call 0x565290 */ esp -= 4; M32(esp) = 0x564909u; SAVEALL; F_00565290(c); ABI_CHECK(0x565290u, 0x564904u); RETCHK(0x564909u, 0x564904u); LOADALL;
  /* 00564909 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0056490c mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056490f mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00564911 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564915 jb 0x564923 */ if (CF_) goto L_00564923;
  /* 00564917 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0056491a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056491b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x564920u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56491bu); RETCHK(0x564920u, 0x56491bu); LOADALL;
  /* 00564920 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00564923:;
  /* 00564923 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
L_0056492a:;
  /* 0056492a lea ecx, [ebp - 0x620] */ ecx = (u32)((u32)(ebp + 0xfffff9e0u));
  /* 00564930 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 00564933 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564936 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564939 call 0x4d0df0 */ esp -= 4; M32(esp) = 0x56493eu; SAVEALL; F_004d0df0(c); ABI_CHECK(0x4d0df0u, 0x564939u); RETCHK(0x56493eu, 0x564939u); LOADALL;
  /* 0056493e lea ecx, [ebp - 0x620] */ ecx = (u32)((u32)(ebp + 0xfffff9e0u));
  /* 00564944 mov dword ptr [ebp - 0x620], 0x63d0e0 */ { const u32 m_ = (u32)(ebp + 0xfffff9e0u); M32(m_) = (u32)(0x63d0e0u); }
  /* 0056494e call 0x60182e */ esp -= 4; M32(esp) = 0x564953u; SAVEALL; F_0060182e(c); ABI_CHECK(0x60182eu, 0x56494eu); RETCHK(0x564953u, 0x56494eu); LOADALL;
  /* 00564953 jmp 0x5646e0 */ goto L_005646e0;
L_00564958:;
  /* 00564958 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0056495d lea eax, [ebp - 0x494] */ eax = (u32)((u32)(ebp + 0xfffffb6cu));
  /* 00564963 mov dword ptr [ebp - 0x498], edi */ { const u32 m_ = (u32)(ebp + 0xfffffb68u); M32(m_) = (u32)(edi); }
  /* 00564969 mov dword ptr [ebp - 0x49c], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffb64u); M32(m_) = (u32)(ebx); }
  /* 0056496f mov byte ptr [ebp - 0x4ac], bl */ { const u32 m_ = (u32)(ebp + 0xfffffb54u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564975 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00564978:;
  /* 00564978 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056497a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056497b cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056497d jne 0x564978 */ if (!ZF_) goto L_00564978;
  /* 0056497f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00564981 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564982 lea ecx, [ebp - 0x494] */ ecx = (u32)((u32)(ebp + 0xfffffb6cu));
  /* 00564988 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564989 lea ecx, [ebp - 0x4b0] */ ecx = (u32)((u32)(ebp + 0xfffffb50u));
  /* 0056498f call 0x404420 */ esp -= 4; M32(esp) = 0x564994u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x56498fu); RETCHK(0x564994u, 0x56498fu); LOADALL;
  /* 00564994 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00564996 lea edx, [ebp - 0x4b0] */ edx = (u32)((u32)(ebp + 0xfffffb50u));
  /* 0056499c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056499d lea eax, [ebp - 0x5ec] */ eax = (u32)((u32)(ebp + 0xfffffa14u));
  /* 005649a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005649a4 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005649a9 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005649ad call 0x564e80 */ esp -= 4; M32(esp) = 0x5649b2u; SAVEALL; F_00564e80(c); ABI_CHECK(0x564e80u, 0x5649adu); RETCHK(0x5649b2u, 0x5649adu); LOADALL;
  /* 005649b2 mov eax, dword ptr [ebp - 0x498] */ { const u32 m_ = (u32)(ebp + 0xfffffb68u); eax = (u32)(M32(m_)); }
  /* 005649b8 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 005649bd cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005649bf jb 0x5649d0 */ if (CF_) goto L_005649d0;
  /* 005649c1 mov ecx, dword ptr [ebp - 0x4ac] */ { const u32 m_ = (u32)(ebp + 0xfffffb54u); ecx = (u32)(M32(m_)); }
  /* 005649c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005649c8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5649cdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5649c8u); RETCHK(0x5649cdu, 0x5649c8u); LOADALL;
  /* 005649cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005649d0:;
  /* 005649d0 mov dword ptr [ebp - 0x498], edi */ { const u32 m_ = (u32)(ebp + 0xfffffb68u); M32(m_) = (u32)(edi); }
  /* 005649d6 mov dword ptr [ebp - 0x49c], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffb64u); M32(m_) = (u32)(ebx); }
  /* 005649dc mov byte ptr [ebp - 0x4ac], bl */ { const u32 m_ = (u32)(ebp + 0xfffffb54u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005649e2 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 005649e5 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 005649e8 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005649eb lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005649ee push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005649ef lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005649f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005649f3 lea ecx, [ebp - 0x5ec] */ ecx = (u32)((u32)(ebp + 0xfffffa14u));
  /* 005649f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005649fa mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 005649fe call 0x564d00 */ esp -= 4; M32(esp) = 0x564a03u; SAVEALL; F_00564d00(c); ABI_CHECK(0x564d00u, 0x5649feu); RETCHK(0x564a03u, 0x5649feu); LOADALL;
  /* 00564a03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564a04 call 0x4ff960 */ esp -= 4; M32(esp) = 0x564a09u; SAVEALL; F_004ff960(c); ABI_CHECK(0x4ff960u, 0x564a04u); RETCHK(0x564a09u, 0x564a04u); LOADALL;
  /* 00564a09 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00564a0c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564a0f cmp eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564a12 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00564a15 jb 0x564a58 */ if (CF_) goto L_00564a58;
  /* 00564a17 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564a19 jb 0x564a27 */ if (CF_) goto L_00564a27;
  /* 00564a1b mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00564a1e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00564a1f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x564a24u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x564a1fu); RETCHK(0x564a24u, 0x564a1fu); LOADALL;
  /* 00564a24 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00564a27:;
  /* 00564a27 lea ecx, [ebp - 0x598] */ ecx = (u32)((u32)(ebp + 0xfffffa68u));
  /* 00564a2d mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00564a30 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00564a33 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564a36 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564a39 call 0x4d0df0 */ esp -= 4; M32(esp) = 0x564a3eu; SAVEALL; F_004d0df0(c); ABI_CHECK(0x4d0df0u, 0x564a39u); RETCHK(0x564a3eu, 0x564a39u); LOADALL;
  /* 00564a3e lea ecx, [ebp - 0x598] */ ecx = (u32)((u32)(ebp + 0xfffffa68u));
  /* 00564a44 mov dword ptr [ebp - 0x598], 0x63d0e0 */ { const u32 m_ = (u32)(ebp + 0xfffffa68u); M32(m_) = (u32)(0x63d0e0u); }
  /* 00564a4e call 0x60182e */ esp -= 4; M32(esp) = 0x564a53u; SAVEALL; F_0060182e(c); ABI_CHECK(0x60182eu, 0x564a4eu); RETCHK(0x564a53u, 0x564a4eu); LOADALL;
  /* 00564a53 jmp 0x5646e0 */ goto L_005646e0;
L_00564a58:;
  /* 00564a58 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564a5a mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00564a5d jae 0x564a62 */ if (!CF_) goto L_00564a62;
  /* 00564a5f lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00564a62:;
  /* 00564a62 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00564a64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564a65 lea eax, [ebp - 0x5e] */ eax = (u32)((u32)(ebp + 0xffffffa2u));
  /* 00564a68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564a69 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x564a6eu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x564a69u); RETCHK(0x564a6eu, 0x564a69u); LOADALL;
  /* 00564a6e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00564a71 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00564a74 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564a77 mov byte ptr [ebp - 0x4b], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb5u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564a7a mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00564a7d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00564a7e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564a7f lea esi, [ebp - 0x60] */ esi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00564a82 call 0x565170 */ esp -= 4; M32(esp) = 0x564a87u; SAVEALL; F_00565170(c); ABI_CHECK(0x565170u, 0x564a82u); RETCHK(0x564a87u, 0x564a82u); LOADALL;
  /* 00564a87 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00564a8a mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00564a8f mov esi, eax */ { esi = (u32)(eax); }
  /* 00564a91 call 0x5651c0 */ esp -= 4; M32(esp) = 0x564a96u; SAVEALL; F_005651c0(c); ABI_CHECK(0x5651c0u, 0x564a91u); RETCHK(0x564a96u, 0x564a91u); LOADALL;
  /* 00564a96 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 00564a99 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00564a9c mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00564a9e cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564aa2 jb 0x564ab0 */ if (CF_) goto L_00564ab0;
  /* 00564aa4 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00564aa7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564aa8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x564aadu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x564aa8u); RETCHK(0x564aadu, 0x564aa8u); LOADALL;
  /* 00564aad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00564ab0:;
  /* 00564ab0 lea ecx, [ebp - 0x598] */ ecx = (u32)((u32)(ebp + 0xfffffa68u));
  /* 00564ab6 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00564abd mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00564ac0 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564ac3 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00564ac6 call 0x4d0df0 */ esp -= 4; M32(esp) = 0x564acbu; SAVEALL; F_004d0df0(c); ABI_CHECK(0x4d0df0u, 0x564ac6u); RETCHK(0x564acbu, 0x564ac6u); LOADALL;
  /* 00564acb lea ecx, [ebp - 0x598] */ ecx = (u32)((u32)(ebp + 0xfffffa68u));
  /* 00564ad1 mov dword ptr [ebp - 0x598], 0x63d0e0 */ { const u32 m_ = (u32)(ebp + 0xfffffa68u); M32(m_) = (u32)(0x63d0e0u); }
  /* 00564adb call 0x60182e */ esp -= 4; M32(esp) = 0x564ae0u; SAVEALL; F_0060182e(c); ABI_CHECK(0x60182eu, 0x564adbu); RETCHK(0x564ae0u, 0x564adbu); LOADALL;
  /* 00564ae0 jmp 0x5646e0 */ goto L_005646e0;
L_00564ae5:;
  /* 00564ae5 lea ecx, [ebp - 0x55c] */ ecx = (u32)((u32)(ebp + 0xfffffaa4u));
  /* 00564aeb call 0x4ff600 */ esp -= 4; M32(esp) = 0x564af0u; SAVEALL; F_004ff600(c); ABI_CHECK(0x4ff600u, 0x564aebu); RETCHK(0x564af0u, 0x564aebu); LOADALL;
  /* 00564af0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564af2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564af3 jne 0x564b24 */ if (!ZF_) goto L_00564b24;
  /* 00564af5 mov ecx, dword ptr [ebp - 0x564] */ { const u32 m_ = (u32)(ebp + 0xfffffa9cu); ecx = (u32)(M32(m_)); }
  /* 00564afb mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564afe mov eax, dword ptr [ebp + ecx - 0x55c] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffaa4u); eax = (u32)(M32(m_)); }
  /* 00564b05 mov edx, dword ptr [ebp + ecx - 0x53c] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffac4u); edx = (u32)(M32(m_)); }
  /* 00564b0c lea ecx, [ebp + ecx - 0x564] */ ecx = (u32)((u32)(ebp + ecx + 0xfffffa9cu));
  /* 00564b13 or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00564b16 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564b18 jne 0x564b1d */ if (!ZF_) goto L_00564b1d;
  /* 00564b1a or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00564b1d:;
  /* 00564b1d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564b1e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564b1f call 0x601918 */ esp -= 4; M32(esp) = 0x564b24u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x564b1fu); RETCHK(0x564b24u, 0x564b1fu); LOADALL;
L_00564b24:;
  /* 00564b24 lea ecx, [ebp - 0x500] */ ecx = (u32)((u32)(ebp + 0xfffffb00u));
  /* 00564b2a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00564b31 call 0x4febe0 */ esp -= 4; M32(esp) = 0x564b36u; SAVEALL; F_004febe0(c); ABI_CHECK(0x4febe0u, 0x564b31u); RETCHK(0x564b36u, 0x564b31u); LOADALL;
  /* 00564b36 lea ecx, [ebp - 0x500] */ ecx = (u32)((u32)(ebp + 0xfffffb00u));
  /* 00564b3c mov dword ptr [ebp - 0x500], 0x63d0e0 */ { const u32 m_ = (u32)(ebp + 0xfffffb00u); M32(m_) = (u32)(0x63d0e0u); }
  /* 00564b46 call 0x60182e */ esp -= 4; M32(esp) = 0x564b4bu; SAVEALL; F_0060182e(c); ABI_CHECK(0x60182eu, 0x564b46u); RETCHK(0x564b4bu, 0x564b46u); LOADALL;
  /* 00564b4b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00564b4e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564b4f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00564b56 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00564b59 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00564b5e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564b5f call 0x61af31 */ esp -= 4; M32(esp) = 0x564b64u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x564b5fu); RETCHK(0x564b64u, 0x564b5fu); LOADALL;
  /* 00564b64 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564b66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564b67 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00564b70(CPU *c) {
  NATIVE_HOOK(0x564b70u) REGS; LOADALL;
L_00564b70:;
  /* 00564b70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564b71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564b73 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00564b76 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564b77 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00564b7a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564b7b mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00564b7d cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564b7f je 0x564bb3 */ if (ZF_) goto L_00564bb3;
L_00564b81:;
  /* 00564b81 mov ax, word ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00564b85 cmp word ptr [esi + 8], ax */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00564b89 jne 0x564bac */ if (!ZF_) goto L_00564bac;
  /* 00564b8b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564b8c call 0x5f13ce */ esp -= 4; M32(esp) = 0x564b91u; SAVEALL; F_005f13ce(c); ABI_CHECK(0x5f13ceu, 0x564b8cu); RETCHK(0x564b91u, 0x564b8cu); LOADALL;
  /* 00564b91 lea edx, [esi + 0x20] */ edx = (u32)((u32)(esi + 0x20u));
L_00564b94:;
  /* 00564b94 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564b96 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564b97 mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00564b99 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564b9a test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00564b9c jne 0x564b94 */ if (!ZF_) goto L_00564b94;
  /* 00564b9e mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00564ba1 mov dx, word ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00564ba5 mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 00564ba8 mov word ptr [esi + 0x38], dx */ { const u32 m_ = (u32)(esi + 0x38u); M16(m_) = (u16)((edx & 0xffffu)); }
L_00564bac:;
  /* 00564bac mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00564bae cmp esi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564bb1 jne 0x564b81 */ if (!ZF_) goto L_00564b81;
L_00564bb3:;
  /* 00564bb3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564bb4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564bb5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564bb6 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00564bc0(CPU *c) {
  NATIVE_HOOK(0x564bc0u) REGS; LOADALL;
L_00564bc0:;
  /* 00564bc0 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 00564bc3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564bc5 jne 0x564bcb */ if (!ZF_) goto L_00564bcb;
  /* 00564bc7 xor ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 00564bca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00564bcb:;
  /* 00564bcb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564bcc add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00564bce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564bcf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564bd0 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x564bd5u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x564bd0u); RETCHK(0x564bd5u, 0x564bd0u); LOADALL;
  /* 00564bd5 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00564bd8 mov edi, eax */ { edi = (u32)(eax); }
  /* 00564bda mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00564bdc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564bdf xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00564be1 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564be3 je 0x564c16 */ if (ZF_) goto L_00564c16;
  /* 00564be5 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 00564bea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00564bf0:;
  /* 00564bf0 cmp word ptr [eax + 0x38], dx */ { const u32 m_ = (u32)(eax + 0x38u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00564bf4 jne 0x564c0f */ if (!ZF_) goto L_00564c0f;
  /* 00564bf6 mov cx, word ptr [eax + 0xa] */ { const u32 m_ = (u32)(eax + 0xau); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00564bfa cmp cx, 2 */ { u32 a_ = (ecx & 0xffffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00564bfe je 0x564c0f */ if (ZF_) goto L_00564c0f;
  /* 00564c00 cmp cx, 7 */ { u32 a_ = (ecx & 0xffffu), b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00564c04 je 0x564c0f */ if (ZF_) goto L_00564c0f;
  /* 00564c06 mov cx, word ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00564c0a mov word ptr [edi + esi*2], cx */ { const u32 m_ = (u32)(edi + esi * 2u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00564c0e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00564c0f:;
  /* 00564c0f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00564c11 cmp eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564c14 jne 0x564bf0 */ if (!ZF_) goto L_00564bf0;
L_00564c16:;
  /* 00564c16 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x564c1cu; SAVEALL; call_ind(c, t_); RETCHK(0x564c1cu, 0x564c16u); LOADALL; }
  /* 00564c1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564c1d call 0x5fe9f2 */ esp -= 4; M32(esp) = 0x564c22u; SAVEALL; F_005fe9f2(c); ABI_CHECK(0x5fe9f2u, 0x564c1du); RETCHK(0x564c22u, 0x564c1du); LOADALL;
  /* 00564c22 call 0x5fe9d4 */ esp -= 4; M32(esp) = 0x564c27u; SAVEALL; F_005fe9d4(c); ABI_CHECK(0x5fe9d4u, 0x564c22u); RETCHK(0x564c27u, 0x564c22u); LOADALL;
  /* 00564c27 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00564c28 idiv esi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, esi, &q_, &r_, 0x564c28u); eax = q_; edx = r_; }
  /* 00564c2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564c2b mov si, word ptr [edi + edx*2] */ { const u32 m_ = (u32)(edi + edx * 2u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00564c2f call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x564c34u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x564c2fu); RETCHK(0x564c34u, 0x564c2fu); LOADALL;
  /* 00564c34 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564c37 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564c38 mov ax, si */ { eax = (eax & 0xffff0000u) | ((u32)((esi & 0xffffu)) & 0xffffu); }
  /* 00564c3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564c3c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564c40(CPU *c) {
  NATIVE_HOOK(0x564c40u) REGS; LOADALL;
L_00564c40:;
  /* 00564c40 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 00564c43 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00564c45 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564c47 je 0x564c5f */ if (ZF_) goto L_00564c5f;
  /* 00564c49 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00564c50:;
  /* 00564c50 cmp word ptr [ecx + 8], si */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M16(m_), b_ = (esi & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00564c54 lea eax, [ecx + 8] */ eax = (u32)((u32)(ecx + 0x8u));
  /* 00564c57 je 0x564c61 */ if (ZF_) goto L_00564c61;
  /* 00564c59 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00564c5b cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564c5d jne 0x564c50 */ if (!ZF_) goto L_00564c50;
L_00564c5f:;
  /* 00564c5f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00564c61:;
  /* 00564c61 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564c70(CPU *c) {
  NATIVE_HOOK(0x564c70u) REGS; LOADALL;
L_00564c70:;
  /* 00564c70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564c71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564c73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564c74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564c75 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00564c77 call 0x564c40 */ esp -= 4; M32(esp) = 0x564c7cu; SAVEALL; F_00564c40(c); ABI_CHECK(0x564c40u, 0x564c77u); RETCHK(0x564c7cu, 0x564c77u); LOADALL;
  /* 00564c7c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564c7e je 0x564c9f */ if (ZF_) goto L_00564c9f;
  /* 00564c80 lea esi, [eax + 0x18] */ esi = (u32)((u32)(eax + 0x18u));
  /* 00564c83 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00564c85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564c86 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 00564c89 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00564c90:;
  /* 00564c90 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564c92 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564c93 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00564c95 jne 0x564c90 */ if (!ZF_) goto L_00564c90;
  /* 00564c97 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00564c99 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00564c9c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564c9d jne 0x564ca8 */ if (!ZF_) goto L_00564ca8;
L_00564c9f:;
  /* 00564c9f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00564ca1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564ca2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564ca4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564ca5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00564ca8:;
  /* 00564ca8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00564cab mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00564cad mov edx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00564cb0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00564cb3 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00564cb5 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00564cba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564cbb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564cbd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564cbe ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00564cd0(CPU *c) {
  NATIVE_HOOK(0x564cd0u) REGS; LOADALL;
L_00564cd0:;
  /* 00564cd0 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00564cd3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00564cd5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564cd7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564cd8 je 0x564cee */ if (ZF_) goto L_00564cee;
  /* 00564cda lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00564ce0:;
  /* 00564ce0 movzx esi, word ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M16(m_)); }
  /* 00564ce4 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564ce6 je 0x564cf2 */ if (ZF_) goto L_00564cf2;
  /* 00564ce8 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00564cea cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564cec jne 0x564ce0 */ if (!ZF_) goto L_00564ce0;
L_00564cee:;
  /* 00564cee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00564cf0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564cf1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00564cf2:;
  /* 00564cf2 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00564cf5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564cf6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564d00(CPU *c) {
  NATIVE_HOOK(0x564d00u) REGS; LOADALL;
L_00564d00:;
  /* 00564d00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564d01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564d03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00564d05 push 0x61d5a0 */ { u32 v_ = 0x61d5a0u; esp -= 4; M32(esp) = v_; }
  /* 00564d0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00564d10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564d11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00564d18 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564d1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564d1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564d1d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00564d20 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564d21 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00564d24 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00564d26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564d27 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564d28 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00564d2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564d2c mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00564d2f call 0x4ffd60 */ esp -= 4; M32(esp) = 0x564d34u; SAVEALL; F_004ffd60(c); ABI_CHECK(0x4ffd60u, 0x564d2fu); RETCHK(0x564d34u, 0x564d2fu); LOADALL;
  /* 00564d34 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00564d37 mov al, byte ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564d3a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00564d3c je 0x564e14 */ if (ZF_) goto L_00564e14;
  /* 00564d42 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00564d44 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00564d47 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564d48 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564d4b add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00564d4d call 0x4b1200 */ esp -= 4; M32(esp) = 0x564d52u; SAVEALL; F_004b1200(c); ABI_CHECK(0x4b1200u, 0x564d4du); RETCHK(0x564d52u, 0x564d4du); LOADALL;
  /* 00564d52 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564d53 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00564d57 call 0x525ca0 */ esp -= 4; M32(esp) = 0x564d5cu; SAVEALL; F_00525ca0(c); ABI_CHECK(0x525ca0u, 0x564d57u); RETCHK(0x564d5cu, 0x564d57u); LOADALL;
  /* 00564d5c mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00564d60 mov edi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edi = (u32)(M32(m_)); }
  /* 00564d63 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564d66 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564d68 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00564d6a mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 00564d6d je 0x564daa */ if (ZF_) goto L_00564daa;
  /* 00564d6f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00564d71 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00564d74 call 0x601e91 */ esp -= 4; M32(esp) = 0x564d79u; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x564d74u); RETCHK(0x564d79u, 0x564d74u); LOADALL;
  /* 00564d79 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00564d7c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564d7e jbe 0x564d89 */ if ((CF_|ZF_)) goto L_00564d89;
  /* 00564d80 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564d83 jae 0x564d89 */ if (!CF_) goto L_00564d89;
  /* 00564d85 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00564d86 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
L_00564d89:;
  /* 00564d89 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564d8c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00564d8e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564d90 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00564d93 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00564d96 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00564d97 and edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00564d99 call 0x601eb4 */ esp -= 4; M32(esp) = 0x564d9eu; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x564d99u); RETCHK(0x564d9eu, 0x564d99u); LOADALL;
  /* 00564d9e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564da0 je 0x564daa */ if (ZF_) goto L_00564daa;
  /* 00564da2 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00564da4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00564da6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00564da8 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x564daau; SAVEALL; call_ind(c, t_); RETCHK(0x564daau, 0x564da8u); LOADALL; }
L_00564daa:;
  /* 00564daa mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00564dae mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00564db0 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564db3 lea eax, [ecx + esi] */ eax = (u32)((u32)(ecx + esi));
  /* 00564db6 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00564db9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00564dbb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564dbd sete dl */ { edx = (edx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00564dc0 mov byte ptr [ebp - 0x30], dl */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00564dc3 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00564dc5 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00564dc8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564dc9 lea ebx, [ebp - 0x14] */ ebx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00564dcc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564dcd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564dce mov byte ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M8(m_) = (u8)(0x1u); }
  /* 00564dd2 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 00564dd5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564dd6 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 00564dd9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564dda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564ddb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564ddc lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 00564ddf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564de0 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 00564de3 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x564de6u; SAVEALL; call_ind(c, t_); RETCHK(0x564de6u, 0x564de3u); LOADALL; }
  /* 00564de6 jmp 0x564e14 */ goto L_00564e14;
L_00564e14:;
  /* 00564e14 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00564e1b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00564e1d mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564e20 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00564e23 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00564e25 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564e27 je 0x564e40 */ if (ZF_) goto L_00564e40;
  /* 00564e29 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00564e2c or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00564e2e mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 00564e31 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564e33 jne 0x564e38 */ if (!ZF_) goto L_00564e38;
  /* 00564e35 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00564e38:;
  /* 00564e38 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00564e3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564e3b call 0x601918 */ esp -= 4; M32(esp) = 0x564e40u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x564e3bu); RETCHK(0x564e40u, 0x564e3bu); LOADALL;
L_00564e40:;
  /* 00564e40 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00564e47 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00564e4a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00564e4c mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00564e4f mov eax, dword ptr [edx + eax + 0x28] */ { const u32 m_ = (u32)(edx + eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 00564e53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564e55 je 0x564e5f */ if (ZF_) goto L_00564e5f;
  /* 00564e57 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00564e5a call 0x601efe */ esp -= 4; M32(esp) = 0x564e5fu; SAVEALL; F_00601efe(c); ABI_CHECK(0x601efeu, 0x564e5au); RETCHK(0x564e5fu, 0x564e5au); LOADALL;
L_00564e5f:;
  /* 00564e5f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00564e62 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564e63 mov eax, esi */ { eax = (u32)(esi); }
  /* 00564e65 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564e66 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00564e6d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564e6e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564e70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564e71 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00564de8(CPU *c) {
  NATIVE_HOOK(0x564de8u) REGS; LOADALL;
L_00564de8:;
  /* 00564de8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00564deb mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00564ded mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564df0 mov edx, dword ptr [ecx + eax + 0x28] */ { const u32 m_ = (u32)(ecx + eax + 0x28u); edx = (u32)(M32(m_)); }
  /* 00564df4 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00564df6 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00564df9 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00564dfc test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564dfe jne 0x564e03 */ if (!ZF_) goto L_00564e03;
  /* 00564e00 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00564e03:;
  /* 00564e03 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00564e05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564e06 call 0x601918 */ esp -= 4; M32(esp) = 0x564e0bu; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x564e06u); RETCHK(0x564e0bu, 0x564e06u); LOADALL;
  /* 00564e0b mov eax, 0x564e11 */ { eax = (u32)(0x564e11u); }
  /* 00564e10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00564e11(CPU *c) {
  NATIVE_HOOK(0x564e11u) REGS; LOADALL;
L_00564e11:;
  /* 00564e11 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00564e14 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00564e1b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00564e1d mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564e20 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00564e23 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00564e25 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564e27 je 0x564e40 */ if (ZF_) goto L_00564e40;
  /* 00564e29 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00564e2c or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00564e2e mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 00564e31 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564e33 jne 0x564e38 */ if (!ZF_) goto L_00564e38;
  /* 00564e35 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00564e38:;
  /* 00564e38 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00564e3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564e3b call 0x601918 */ esp -= 4; M32(esp) = 0x564e40u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x564e3bu); RETCHK(0x564e40u, 0x564e3bu); LOADALL;
L_00564e40:;
  /* 00564e40 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00564e47 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00564e4a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00564e4c mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00564e4f mov eax, dword ptr [edx + eax + 0x28] */ { const u32 m_ = (u32)(edx + eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 00564e53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564e55 je 0x564e5f */ if (ZF_) goto L_00564e5f;
  /* 00564e57 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00564e5a call 0x601efe */ esp -= 4; M32(esp) = 0x564e5fu; SAVEALL; F_00601efe(c); ABI_CHECK(0x601efeu, 0x564e5au); RETCHK(0x564e5fu, 0x564e5au); LOADALL;
L_00564e5f:;
  /* 00564e5f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00564e62 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564e63 mov eax, esi */ { eax = (u32)(esi); }
  /* 00564e65 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564e66 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00564e6d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00564e6e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564e70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564e71 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00564e80(CPU *c) {
  NATIVE_HOOK(0x564e80u) REGS; LOADALL;
L_00564e80:;
  /* 00564e80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564e81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564e83 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00564e85 push 0x61d577 */ { u32 v_ = 0x61d577u; esp -= 4; M32(esp) = v_; }
  /* 00564e8a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00564e90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564e91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00564e98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00564e99 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00564e9b cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564e9d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564e9e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00564ea1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564ea2 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00564ea5 je 0x564ec5 */ if (ZF_) goto L_00564ec5;
  /* 00564ea7 mov dword ptr [esi], 0x64d138 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64d138u); }
  /* 00564ead mov dword ptr [esi + 8], 0x64d130 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x64d130u); }
  /* 00564eb4 mov dword ptr [esi + 0x54], 0x63d0e0 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x63d0e0u); }
  /* 00564ebb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00564ebe mov dword ptr [ebp - 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x1u); }
L_00564ec5:;
  /* 00564ec5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564ec6 lea edi, [esi + 0xc] */ edi = (u32)((u32)(esi + 0xcu));
  /* 00564ec9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564eca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564ecb call 0x4d19b0 */ esp -= 4; M32(esp) = 0x564ed0u; SAVEALL; F_004d19b0(c); ABI_CHECK(0x4d19b0u, 0x564ecbu); RETCHK(0x564ed0u, 0x564ecbu); LOADALL;
  /* 00564ed0 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00564ed3 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00564eda mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00564edc mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00564edf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00564ee0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564ee1 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00564ee4 mov dword ptr [esi + ecx], 0x64d140 */ { const u32 m_ = (u32)(esi + ecx); M32(m_) = (u32)(0x64d140u); }
  /* 00564eeb call 0x5650f0 */ esp -= 4; M32(esp) = 0x564ef0u; SAVEALL; F_005650f0(c); ABI_CHECK(0x5650f0u, 0x564eebu); RETCHK(0x564ef0u, 0x564eebu); LOADALL;
  /* 00564ef0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00564ef3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00564ef4 mov eax, esi */ { eax = (u32)(esi); }
  /* 00564ef6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00564ef7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00564efe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00564f00 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00564f01 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00564f10(CPU *c) {
  NATIVE_HOOK(0x564f10u) REGS; LOADALL;
L_00564f10:;
  /* 00564f10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00564f11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00564f13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00564f15 push 0x61d538 */ { u32 v_ = 0x61d538u; esp -= 4; M32(esp) = v_; }
  /* 00564f1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00564f20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564f21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00564f28 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00564f2b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00564f2c mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00564f2f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00564f30 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564f31 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00564f34 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00564f37 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00564f39 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00564f3a lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00564f3d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00564f3f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00564f40 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00564f43 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 00564f46 call 0x4ffd60 */ esp -= 4; M32(esp) = 0x564f4bu; SAVEALL; F_004ffd60(c); ABI_CHECK(0x4ffd60u, 0x564f46u); RETCHK(0x564f4bu, 0x564f46u); LOADALL;
  /* 00564f4b mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00564f4e mov al, byte ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00564f51 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00564f53 je 0x565044 */ if (ZF_) goto L_00565044;
  /* 00564f59 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00564f5c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564f5e jle 0x565044 */ if ((ZF_|LT_)) goto L_00565044;
  /* 00564f64 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00564f68 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00564f6a mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00564f6d mov ecx, dword ptr [edx + edi + 0x28] */ { const u32 m_ = (u32)(edx + edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00564f71 mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00564f74 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00564f76 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564f78 je 0x564f92 */ if (ZF_) goto L_00564f92;
  /* 00564f7a mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00564f7d mov esi, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); esi = (u32)(M32(m_)); }
  /* 00564f80 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 00564f82 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00564f84 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00564f86 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564f88 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00564f8b jae 0x564f92 */ if (!CF_) goto L_00564f92;
  /* 00564f8d movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 00564f90 jmp 0x564f97 */ goto L_00564f97;
L_00564f92:;
  /* 00564f92 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00564f94 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x564f97u; SAVEALL; call_ind(c, t_); RETCHK(0x564f97u, 0x564f94u); LOADALL; }
L_00564f97:;
  /* 00564f97 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564f9a jne 0x564fa4 */ if (!ZF_) goto L_00564fa4;
  /* 00564f9c or esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00564f9f jmp 0x565044 */ goto L_00565044;
L_00564fa4:;
  /* 00564fa4 movzx ecx, byte ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M8(m_)); }
  /* 00564fa8 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564faa jne 0x564fe6 */ if (!ZF_) goto L_00564fe6;
  /* 00564fac mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00564faf mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00564fb1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564fb2 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00564fb5 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00564fb8 mov ecx, dword ptr [edx + edi + 0x28] */ { const u32 m_ = (u32)(edx + edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00564fbc mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00564fbf cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564fc2 je 0x564fdf */ if (ZF_) goto L_00564fdf;
  /* 00564fc4 mov edx, eax */ { edx = (u32)(eax); }
  /* 00564fc6 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00564fc8 mov edx, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); edx = (u32)(M32(m_)); }
  /* 00564fcb mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 00564fcd add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00564fcf cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00564fd1 jae 0x564fdf */ if (!CF_) goto L_00564fdf;
  /* 00564fd3 mov eax, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); eax = (u32)(M32(m_)); }
  /* 00564fd6 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00564fd8 mov ecx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00564fdb inc dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564fdd jmp 0x565044 */ goto L_00565044;
L_00564fdf:;
  /* 00564fdf mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00564fe1 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x564fe4u; SAVEALL; call_ind(c, t_); RETCHK(0x564fe4u, 0x564fe1u); LOADALL; }
  /* 00564fe4 jmp 0x565044 */ goto L_00565044;
L_00564fe6:;
  /* 00564fe6 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00564fe9 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00564fea test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00564fec mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00564fef jg 0x564ff6 */ if (!(ZF_|LT_)) goto L_00564ff6;
  /* 00564ff1 or esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00564ff4 jmp 0x565044 */ goto L_00565044;
L_00564ff6:;
  /* 00564ff6 inc dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00564ff9 mov byte ptr [ebx], al */ { const u32 m_ = (u32)(ebx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00564ffb mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00564ffd mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00565000 mov esi, dword ptr [edx + edi + 0x28] */ { const u32 m_ = (u32)(edx + edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 00565004 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00565005 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 00565008 call 0x4ffce0 */ esp -= 4; M32(esp) = 0x56500du; SAVEALL; F_004ffce0(c); ABI_CHECK(0x4ffce0u, 0x565008u); RETCHK(0x56500du, 0x565008u); LOADALL;
  /* 0056500d mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00565010 jmp 0x564f97 */ goto L_00564f97;
L_00565044:;
  /* 00565044 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056504b mov byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M8(m_) = (u8)(0x0u); }
  /* 0056504e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00565051 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565053 jne 0x565058 */ if (!ZF_) goto L_00565058;
  /* 00565055 or esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00565058:;
  /* 00565058 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0056505a mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056505d mov eax, esi */ { eax = (u32)(esi); }
  /* 0056505f add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00565061 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565063 je 0x56507c */ if (ZF_) goto L_0056507c;
  /* 00565065 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00565068 mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 0056506b or eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056506d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056506f jne 0x565074 */ if (!ZF_) goto L_00565074;
  /* 00565071 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00565074:;
  /* 00565074 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00565076 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565077 call 0x601918 */ esp -= 4; M32(esp) = 0x56507cu; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x565077u); RETCHK(0x56507cu, 0x565077u); LOADALL;
L_0056507c:;
  /* 0056507c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00565083 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 00565086 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00565088 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056508b mov eax, dword ptr [edx + eax + 0x28] */ { const u32 m_ = (u32)(edx + eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 0056508f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565091 je 0x56509b */ if (ZF_) goto L_0056509b;
  /* 00565093 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00565096 call 0x601efe */ esp -= 4; M32(esp) = 0x56509bu; SAVEALL; F_00601efe(c); ABI_CHECK(0x601efeu, 0x565096u); RETCHK(0x56509bu, 0x565096u); LOADALL;
L_0056509b:;
  /* 0056509b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056509e mov eax, edi */ { eax = (u32)(edi); }
  /* 005650a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005650a1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005650a2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005650a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005650aa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005650ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005650ad ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00565012(CPU *c) {
  NATIVE_HOOK(0x565012u) REGS; LOADALL;
L_00565012:;
  /* 00565012 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00565015 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00565017 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056501a mov edx, dword ptr [ecx + eax + 0x28] */ { const u32 m_ = (u32)(ecx + eax + 0x28u); edx = (u32)(M32(m_)); }
  /* 0056501e add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00565020 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00565023 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00565026 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565028 jne 0x56502d */ if (!ZF_) goto L_0056502d;
  /* 0056502a or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0056502d:;
  /* 0056502d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056502f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565030 call 0x601918 */ esp -= 4; M32(esp) = 0x565035u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x565030u); RETCHK(0x565035u, 0x565030u); LOADALL;
  /* 00565035 mov eax, 0x56503b */ { eax = (u32)(0x56503bu); }
  /* 0056503a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056503b(CPU *c) {
  NATIVE_HOOK(0x56503bu) REGS; LOADALL;
L_0056503b:;
  /* 0056503b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0056503e mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00565041 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00565044 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056504b mov byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M8(m_) = (u8)(0x0u); }
  /* 0056504e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00565051 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565053 jne 0x565058 */ if (!ZF_) goto L_00565058;
  /* 00565055 or esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00565058:;
  /* 00565058 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0056505a mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056505d mov eax, esi */ { eax = (u32)(esi); }
  /* 0056505f add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00565061 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565063 je 0x56507c */ if (ZF_) goto L_0056507c;
  /* 00565065 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00565068 mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 0056506b or eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056506d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056506f jne 0x565074 */ if (!ZF_) goto L_00565074;
  /* 00565071 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00565074:;
  /* 00565074 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00565076 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565077 call 0x601918 */ esp -= 4; M32(esp) = 0x56507cu; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x565077u); RETCHK(0x56507cu, 0x565077u); LOADALL;
L_0056507c:;
  /* 0056507c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00565083 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 00565086 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00565088 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056508b mov eax, dword ptr [edx + eax + 0x28] */ { const u32 m_ = (u32)(edx + eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 0056508f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565091 je 0x56509b */ if (ZF_) goto L_0056509b;
  /* 00565093 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00565096 call 0x601efe */ esp -= 4; M32(esp) = 0x56509bu; SAVEALL; F_00601efe(c); ABI_CHECK(0x601efeu, 0x565096u); RETCHK(0x56509bu, 0x565096u); LOADALL;
L_0056509b:;
  /* 0056509b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056509e mov eax, edi */ { eax = (u32)(edi); }
  /* 005650a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005650a1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005650a2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005650a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005650aa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005650ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005650ad ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_005650b0(CPU *c) {
  NATIVE_HOOK(0x5650b0u) REGS; LOADALL;
L_005650b0:;
  /* 005650b0 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 005650b2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5650b7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5650b2u); RETCHK(0x5650b7u, 0x5650b2u); LOADALL;
  /* 005650b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005650ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005650bc je 0x5650c0 */ if (ZF_) goto L_005650c0;
  /* 005650be mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
L_005650c0:;
  /* 005650c0 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 005650c3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005650c5 je 0x5650c9 */ if (ZF_) goto L_005650c9;
  /* 005650c7 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_005650c9:;
  /* 005650c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005650d0(CPU *c) {
  NATIVE_HOOK(0x5650d0u) REGS; LOADALL;
L_005650d0:;
  /* 005650d0 push 0x3c */ { u32 v_ = 0x3cu; esp -= 4; M32(esp) = v_; }
  /* 005650d2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5650d7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5650d2u); RETCHK(0x5650d7u, 0x5650d2u); LOADALL;
  /* 005650d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005650da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005650dc je 0x5650e0 */ if (ZF_) goto L_005650e0;
  /* 005650de mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
L_005650e0:;
  /* 005650e0 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 005650e3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005650e5 je 0x5650e9 */ if (ZF_) goto L_005650e9;
  /* 005650e7 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_005650e9:;
  /* 005650e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005650f0(CPU *c) {
  NATIVE_HOOK(0x5650f0u) REGS; LOADALL;
L_005650f0:;
  /* 005650f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005650f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005650f3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005650f9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005650fb push 0x61b608 */ { u32 v_ = 0x61b608u; esp -= 4; M32(esp) = v_; }
  /* 00565100 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565101 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00565108 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565109 mov bl, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056510c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056510d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00565110 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00565112 call 0x4d25b0 */ esp -= 4; M32(esp) = 0x565117u; SAVEALL; F_004d25b0(c); ABI_CHECK(0x4d25b0u, 0x565112u); RETCHK(0x565117u, 0x565112u); LOADALL;
  /* 00565117 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00565119 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056511c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0056511f mov dword ptr [esi], 0x64d144 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64d144u); }
  /* 00565125 jne 0x56512c */ if (!ZF_) goto L_0056512c;
  /* 00565127 mov eax, 4 */ { eax = (u32)(0x4u); }
L_0056512c:;
  /* 0056512c test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056512f jne 0x565134 */ if (!ZF_) goto L_00565134;
  /* 00565131 or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00565134:;
  /* 00565134 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00565137 je 0x56513c */ if (ZF_) goto L_0056513c;
  /* 00565139 or eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0056513c:;
  /* 0056513c cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565140 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00565143 jb 0x56514a */ if (CF_) goto L_0056514a;
  /* 00565145 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00565148 jmp 0x56514d */ goto L_0056514d;
L_0056514a:;
  /* 0056514a lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
L_0056514d:;
  /* 0056514d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056514e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056514f mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00565151 call 0x4d2c90 */ esp -= 4; M32(esp) = 0x565156u; SAVEALL; F_004d2c90(c); ABI_CHECK(0x4d2c90u, 0x565151u); RETCHK(0x565156u, 0x565151u); LOADALL;
  /* 00565156 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565159 mov eax, esi */ { eax = (u32)(esi); }
  /* 0056515b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056515c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565163 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00565164 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565166 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565167 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00565170(CPU *c) {
  NATIVE_HOOK(0x565170u) REGS; LOADALL;
L_00565170:;
  /* 00565170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565173 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 00565175 call 0x5fe934 */ esp -= 4; M32(esp) = 0x56517au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x565175u); RETCHK(0x56517au, 0x565175u); LOADALL;
  /* 0056517a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056517d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056517f je 0x5651b3 */ if (ZF_) goto L_005651b3;
  /* 00565181 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00565184 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00565187 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00565189 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0056518c mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0056518e lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 00565191 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00565193 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00565196 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00565199 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056519c mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0056519f mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005651a2 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 005651a5 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 005651a8 mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 005651ab mov dx, word ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005651af mov word ptr [ecx + 0x14], dx */ { const u32 m_ = (u32)(ecx + 0x14u); M16(m_) = (u16)((edx & 0xffffu)); }
L_005651b3:;
  /* 005651b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005651b4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005651c0(CPU *c) {
  NATIVE_HOOK(0x5651c0u) REGS; LOADALL;
L_005651c0:;
  /* 005651c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005651c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005651c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005651c5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 005651ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005651d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005651d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005651d8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005651db mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005651de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005651df mov esi, 0xba2e8ba */ { esi = (u32)(0xba2e8bau); }
  /* 005651e4 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005651e6 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005651e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005651e9 jae 0x565234 */ if (!CF_) goto L_00565234;
  /* 005651eb push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005651ed push 0x648f18 */ { u32 v_ = 0x648f18u; esp -= 4; M32(esp) = v_; }
  /* 005651f2 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005651f5 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 005651fc mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 00565203 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 00565207 call 0x404420 */ esp -= 4; M32(esp) = 0x56520cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x565207u); RETCHK(0x56520cu, 0x565207u); LOADALL;
  /* 0056520c lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0056520f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565210 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00565213 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056521a call 0x4040e0 */ esp -= 4; M32(esp) = 0x56521fu; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x56521au); RETCHK(0x56521fu, 0x56521au); LOADALL;
  /* 0056521f push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 00565224 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00565227 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00565228 mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 0056522f call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_00565234:;
  /* 00565234 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00565236 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565239 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056523c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565243 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565245 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565246 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565250(CPU *c) {
  NATIVE_HOOK(0x565250u) REGS; LOADALL;
L_00565250:;
  /* 00565250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565253 push 0x3c */ { u32 v_ = 0x3cu; esp -= 4; M32(esp) = v_; }
  /* 00565255 call 0x5fe934 */ esp -= 4; M32(esp) = 0x56525au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x565255u); RETCHK(0x56525au, 0x565255u); LOADALL;
  /* 0056525a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056525d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056525f je 0x56527d */ if (ZF_) goto L_0056527d;
  /* 00565261 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00565264 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00565267 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565268 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0056526b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056526c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0056526e lea edi, [eax + 8] */ edi = (u32)((u32)(eax + 0x8u));
  /* 00565271 mov ecx, 0xd */ { ecx = (u32)(0xdu); }
  /* 00565276 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 00565279 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056527b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056527c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0056527d:;
  /* 0056527d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056527e ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00565290(CPU *c) {
  NATIVE_HOOK(0x565290u) REGS; LOADALL;
L_00565290:;
  /* 00565290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565291 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565293 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00565295 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0056529a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005652a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005652a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005652a8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005652ab mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005652ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005652af mov esi, 0x4ec4ec4 */ { esi = (u32)(0x4ec4ec4u); }
  /* 005652b4 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005652b6 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005652b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005652b9 jae 0x565304 */ if (!CF_) goto L_00565304;
  /* 005652bb push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005652bd push 0x648f18 */ { u32 v_ = 0x648f18u; esp -= 4; M32(esp) = v_; }
  /* 005652c2 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005652c5 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 005652cc mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 005652d3 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 005652d7 call 0x404420 */ esp -= 4; M32(esp) = 0x5652dcu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5652d7u); RETCHK(0x5652dcu, 0x5652d7u); LOADALL;
  /* 005652dc lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005652df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005652e0 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 005652e3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005652ea call 0x4040e0 */ esp -= 4; M32(esp) = 0x5652efu; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x5652eau); RETCHK(0x5652efu, 0x5652eau); LOADALL;
  /* 005652ef push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 005652f4 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 005652f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005652f8 mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 005652ff call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_00565304:;
  /* 00565304 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00565306 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565309 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056530c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565313 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565315 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565316 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565320(CPU *c) {
  NATIVE_HOOK(0x565320u) REGS; LOADALL;
L_00565320:;
  /* 00565320 mov dword ptr [ecx], 0x656ca0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656ca0u); }
  /* 00565326 mov dword ptr [ecx + 0x804c], 0x6555a4 */ { const u32 m_ = (u32)(ecx + 0x804cu); M32(m_) = (u32)(0x6555a4u); }
  /* 00565330 jmp 0x563b00 */ SAVEALL; F_00563b00(c); return;
}

void F_00565340(CPU *c) {
  NATIVE_HOOK(0x565340u) REGS; LOADALL;
L_00565340:;
  /* 00565340 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565341 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565343 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565344 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00565346 call 0x565320 */ esp -= 4; M32(esp) = 0x56534bu; SAVEALL; F_00565320(c); ABI_CHECK(0x565320u, 0x565346u); RETCHK(0x56534bu, 0x565346u); LOADALL;
  /* 0056534b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056534f je 0x56535a */ if (ZF_) goto L_0056535a;
  /* 00565351 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565352 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x565357u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x565352u); RETCHK(0x565357u, 0x565352u); LOADALL;
  /* 00565357 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056535a:;
  /* 0056535a mov eax, esi */ { eax = (u32)(esi); }
  /* 0056535c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056535d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056535e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565354(CPU *c) {
  NATIVE_HOOK(0x565354u) REGS; LOADALL;
L_00565354:;
  /* 00565354 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 00565355 or dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00565357 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056535a mov eax, esi */ { eax = (u32)(esi); }
  /* 0056535c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056535d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056535e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565370(CPU *c) {
  NATIVE_HOOK(0x565370u) REGS; LOADALL;
L_00565370:;
  /* 00565370 call 0x563aa0 */ esp -= 4; M32(esp) = 0x565375u; SAVEALL; F_00563aa0(c); ABI_CHECK(0x563aa0u, 0x565370u); RETCHK(0x565375u, 0x565370u); LOADALL;
  /* 00565375 mov dword ptr [eax], 0x656ca0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x656ca0u); }
  /* 0056537b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056537d lea edx, [eax + 0x8058] */ edx = (u32)((u32)(eax + 0x8058u));
  /* 00565383 mov dword ptr [eax + 0x8054], ecx */ { const u32 m_ = (u32)(eax + 0x8054u); M32(m_) = (u32)(ecx); }
  /* 00565389 mov dword ptr [eax + 0x804c], 0x656c9c */ { const u32 m_ = (u32)(eax + 0x804cu); M32(m_) = (u32)(0x656c9cu); }
  /* 00565393 mov dword ptr [eax + 0x8050], edx */ { const u32 m_ = (u32)(eax + 0x8050u); M32(m_) = (u32)(edx); }
  /* 00565399 mov dword ptr [eax + 0x8048], ecx */ { const u32 m_ = (u32)(eax + 0x8048u); M32(m_) = (u32)(ecx); }
  /* 0056539f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005653a0(CPU *c) {
  NATIVE_HOOK(0x5653a0u) REGS; LOADALL;
L_005653a0:;
  /* 005653a0 mov eax, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); eax = (u32)(M32(m_)); }
  /* 005653a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005653a8 je 0x5653b1 */ if (ZF_) goto L_005653b1;
  /* 005653aa mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005653ac mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005653ae jmp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005653b1:;
  /* 005653b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005653c0(CPU *c) {
  NATIVE_HOOK(0x5653c0u) REGS; LOADALL;
L_005653c0:;
  /* 005653c0 lea eax, [ecx + 0x8058] */ eax = (u32)((u32)(ecx + 0x8058u));
  /* 005653c6 mov dword ptr [ecx + 0x8054], 0 */ { const u32 m_ = (u32)(ecx + 0x8054u); M32(m_) = (u32)(0x0u); }
  /* 005653d0 mov dword ptr [ecx + 0x8050], eax */ { const u32 m_ = (u32)(ecx + 0x8050u); M32(m_) = (u32)(eax); }
  /* 005653d6 mov eax, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); eax = (u32)(M32(m_)); }
  /* 005653dc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005653de je 0x5653e7 */ if (ZF_) goto L_005653e7;
  /* 005653e0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005653e2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005653e4 jmp dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005653e7:;
  /* 005653e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005653f0(CPU *c) {
  NATIVE_HOOK(0x5653f0u) REGS; LOADALL;
L_005653f0:;
  /* 005653f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005653f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005653f3 mov eax, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); eax = (u32)(M32(m_)); }
  /* 005653f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005653fb je 0x565405 */ if (ZF_) goto L_00565405;
  /* 005653fd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005653ff mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00565401 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565402 jmp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00565405:;
  /* 00565405 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565406 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565410(CPU *c) {
  NATIVE_HOOK(0x565410u) REGS; LOADALL;
L_00565410:;
  /* 00565410 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565411 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565412 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00565414 mov eax, dword ptr [edi + 0x8054] */ { const u32 m_ = (u32)(edi + 0x8054u); eax = (u32)(M32(m_)); }
  /* 0056541a lea ecx, [eax + edi + 0x8058] */ ecx = (u32)((u32)(eax + edi + 0x8058u));
  /* 00565421 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565423 jne 0x565437 */ if (!ZF_) goto L_00565437;
  /* 00565425 lea edx, [edi + 0x8058] */ edx = (u32)((u32)(edi + 0x8058u));
  /* 0056542b mov dword ptr [edi + 0x8054], ecx */ { const u32 m_ = (u32)(edi + 0x8054u); M32(m_) = (u32)(ecx); }
  /* 00565431 mov dword ptr [edi + 0x8050], edx */ { const u32 m_ = (u32)(edi + 0x8050u); M32(m_) = (u32)(edx); }
L_00565437:;
  /* 00565437 mov ecx, dword ptr [edi + 0x8054] */ { const u32 m_ = (u32)(edi + 0x8054u); ecx = (u32)(M32(m_)); }
  /* 0056543d mov eax, 0x80000 */ { eax = (u32)(0x80000u); }
  /* 00565442 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00565444 lea ecx, [ecx + edi + 0x8058] */ ecx = (u32)((u32)(ecx + edi + 0x8058u));
  /* 0056544b mov edx, edi */ { edx = (u32)(edi); }
  /* 0056544d call 0x563c30 */ esp -= 4; M32(esp) = 0x565452u; SAVEALL; F_00563c30(c); ABI_CHECK(0x563c30u, 0x56544du); RETCHK(0x565452u, 0x56544du); LOADALL;
  /* 00565452 mov esi, eax */ { esi = (u32)(eax); }
  /* 00565454 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565456 jle 0x565529 */ if ((ZF_|LT_)) goto L_00565529;
  /* 0056545c mov edx, dword ptr [edi + 0x8054] */ { const u32 m_ = (u32)(edi + 0x8054u); edx = (u32)(M32(m_)); }
  /* 00565462 lea eax, [edx + esi] */ eax = (u32)((u32)(edx + esi));
  /* 00565465 cmp eax, 0x80000 */ { u32 a_ = eax, b_ = 0x80000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056546a ja 0x5654e9 */ if (!(CF_|ZF_)) goto L_005654e9;
  /* 0056546c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056546d mov dword ptr [edi + 0x8054], eax */ { const u32 m_ = (u32)(edi + 0x8054u); M32(m_) = (u32)(eax); }
  /* 00565473 call 0x601668 */ esp -= 4; M32(esp) = 0x565478u; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x565473u); RETCHK(0x565478u, 0x565473u); LOADALL;
  /* 00565478 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0056547a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056547b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056547d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0056547f push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00565481 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565482 call dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x565488u; SAVEALL; call_ind(c, t_); RETCHK(0x565488u, 0x565482u); LOADALL; }
  /* 00565488 mov esi, dword ptr [edi + 0x8054] */ { const u32 m_ = (u32)(edi + 0x8054u); esi = (u32)(M32(m_)); }
  /* 0056548e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565490 mov ebx, dword ptr [edi + 0x8050] */ { const u32 m_ = (u32)(edi + 0x8050u); ebx = (u32)(M32(m_)); }
  /* 00565496 jle 0x5654c9 */ if ((ZF_|LT_)) goto L_005654c9;
L_00565498:;
  /* 00565498 cmp esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056549b jb 0x5654c9 */ if (CF_) goto L_005654c9;
  /* 0056549d movzx edx, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M16(m_)); }
  /* 005654a1 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005654a3 jg 0x5654c9 */ if (!(ZF_|LT_)) goto L_005654c9;
  /* 005654a5 cmp word ptr [ebx], 0xaaee */ { const u32 m_ = (u32)(ebx); u32 a_ = M16(m_), b_ = 0xaaeeu; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005654aa jne 0x5654bd */ if (!ZF_) goto L_005654bd;
  /* 005654ac mov eax, dword ptr [edi + 0x8048] */ { const u32 m_ = (u32)(edi + 0x8048u); eax = (u32)(M32(m_)); }
  /* 005654b2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005654b4 je 0x5654bd */ if (ZF_) goto L_005654bd;
  /* 005654b6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005654b8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005654ba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005654bb call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5654bdu; SAVEALL; call_ind(c, t_); RETCHK(0x5654bdu, 0x5654bbu); LOADALL; }
L_005654bd:;
  /* 005654bd movzx eax, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M16(m_)); }
  /* 005654c1 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005654c3 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005654c5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005654c7 jg 0x565498 */ if (!(ZF_|LT_)) goto L_00565498;
L_005654c9:;
  /* 005654c9 mov eax, dword ptr [edi + 0x8054] */ { const u32 m_ = (u32)(edi + 0x8054u); eax = (u32)(M32(m_)); }
  /* 005654cf mov ecx, dword ptr [edi + 0x8054] */ { const u32 m_ = (u32)(edi + 0x8054u); ecx = (u32)(M32(m_)); }
  /* 005654d5 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005654d7 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005654d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005654da jb 0x565502 */ if (CF_) goto L_00565502;
  /* 005654dc mov dword ptr [edi + 0x8054], 0 */ { const u32 m_ = (u32)(edi + 0x8054u); M32(m_) = (u32)(0x0u); }
  /* 005654e6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005654e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005654e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005654e9:;
  /* 005654e9 lea eax, [edi + 0x8058] */ eax = (u32)((u32)(edi + 0x8058u));
  /* 005654ef mov dword ptr [edi + 0x8054], 0 */ { const u32 m_ = (u32)(edi + 0x8054u); M32(m_) = (u32)(0x0u); }
  /* 005654f9 mov dword ptr [edi + 0x8050], eax */ { const u32 m_ = (u32)(edi + 0x8050u); M32(m_) = (u32)(eax); }
  /* 005654ff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565500 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00565501 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00565502:;
  /* 00565502 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565504 jbe 0x565529 */ if ((CF_|ZF_)) goto L_00565529;
  /* 00565506 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00565508 mov dword ptr [edi + 0x8054], ecx */ { const u32 m_ = (u32)(edi + 0x8054u); M32(m_) = (u32)(ecx); }
  /* 0056550e mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00565510 lea esi, [edi + eax + 0x8058] */ esi = (u32)((u32)(edi + eax + 0x8058u));
  /* 00565517 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0056551a add edi, 0x8058 */ { u32 a_ = edi, b_ = 0x8058u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00565520 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00565522 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00565524 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00565527 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_00565529:;
  /* 00565529 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056552a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056552b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565530(CPU *c) {
  NATIVE_HOOK(0x565530u) REGS; LOADALL;
L_00565530:;
  /* 00565530 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00565532 mov dword ptr [eax + 0x28], 0xf */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(0xfu); }
  /* 00565539 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0056553c mov byte ptr [eax + 0x14], cl */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0056553f mov word ptr [eax], cx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00565542 mov word ptr [eax + 2], cx */ { const u32 m_ = (u32)(eax + 0x2u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00565546 mov word ptr [eax + 4], cx */ { const u32 m_ = (u32)(eax + 0x4u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0056554a mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0056554d mov word ptr [eax + 0xc], cx */ { const u32 m_ = (u32)(eax + 0xcu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00565551 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565560(CPU *c) {
  NATIVE_HOOK(0x565560u) REGS; LOADALL;
L_00565560:;
  /* 00565560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565563 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565564 mov edi, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); edi = (u32)(M32(m_)); }
  /* 0056556a lea ecx, [edi + edx] */ ecx = (u32)((u32)(edi + edx));
  /* 0056556d cmp ecx, 0x2020 */ { u32 a_ = ecx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565573 jbe 0x56557c */ if ((CF_|ZF_)) goto L_0056557c;
  /* 00565575 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565577 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565578 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565579 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056557c:;
  /* 0056557c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056557d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056557e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00565581 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00565583 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00565585 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00565588 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056558a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056558c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056558e and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00565591 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00565593 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 00565599 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056559a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056559c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056559d mov dword ptr [eax + 0x2020], ecx */ { const u32 m_ = (u32)(eax + 0x2020u); M32(m_) = (u32)(ecx); }
  /* 005655a3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005655a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005655a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005655a7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565561(CPU *c) {
  NATIVE_HOOK(0x565561u) REGS; LOADALL;
L_00565561:;
  /* 00565561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565563 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565564 mov edi, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); edi = (u32)(M32(m_)); }
  /* 0056556a lea ecx, [edi + edx] */ ecx = (u32)((u32)(edi + edx));
  /* 0056556d cmp ecx, 0x2020 */ { u32 a_ = ecx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565573 jbe 0x56557c */ if ((CF_|ZF_)) goto L_0056557c;
  /* 00565575 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565577 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565578 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565579 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056557c:;
  /* 0056557c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056557d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056557e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00565581 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00565583 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00565585 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00565588 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056558a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056558c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056558e and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00565591 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00565593 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 00565599 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056559a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056559c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056559d mov dword ptr [eax + 0x2020], ecx */ { const u32 m_ = (u32)(eax + 0x2020u); M32(m_) = (u32)(ecx); }
  /* 005655a3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005655a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005655a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005655a7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565565(CPU *c) {
  NATIVE_HOOK(0x565565u) REGS; LOADALL;
L_00565565:;
  /* 00565565 mov eax, 0x2020 */ { eax = (u32)(0x2020u); }
  /* 0056556a lea ecx, [edi + edx] */ ecx = (u32)((u32)(edi + edx));
  /* 0056556d cmp ecx, 0x2020 */ { u32 a_ = ecx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565573 jbe 0x56557c */ if ((CF_|ZF_)) goto L_0056557c;
  /* 00565575 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565577 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565578 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565579 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056557c:;
  /* 0056557c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056557d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056557e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00565581 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00565583 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00565585 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00565588 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056558a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056558c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056558e and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00565591 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00565593 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 00565599 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056559a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056559c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056559d mov dword ptr [eax + 0x2020], ecx */ { const u32 m_ = (u32)(eax + 0x2020u); M32(m_) = (u32)(ecx); }
  /* 005655a3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005655a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005655a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005655a7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005655b0(CPU *c) {
  NATIVE_HOOK(0x5655b0u) REGS; LOADALL;
L_005655b0:;
  /* 005655b0 mov cx, word ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005655b4 cmp cx, 0x400 */ { u32 a_ = (ecx & 0xffffu), b_ = 0x400u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005655b9 jae 0x5655f0 */ if (!CF_) goto L_005655f0;
  /* 005655bb cmp dword ptr [eax + 0x18], 0x10 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005655bf jb 0x5655c6 */ if (CF_) goto L_005655c6;
  /* 005655c1 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005655c4 jmp 0x5655c9 */ goto L_005655c9;
L_005655c6:;
  /* 005655c6 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_005655c9:;
  /* 005655c9 movzx edx, cx */ { edx = (u32)((ecx & 0xffffu)); }
  /* 005655cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005655cd mov eax, esi */ { eax = (u32)(esi); }
  /* 005655cf call 0x565560 */ esp -= 4; M32(esp) = 0x5655d4u; SAVEALL; F_00565560(c); ABI_CHECK(0x565560u, 0x5655cfu); RETCHK(0x5655d4u, 0x5655cfu); LOADALL;
  /* 005655d4 mov eax, dword ptr [esi + 0x2020] */ { const u32 m_ = (u32)(esi + 0x2020u); eax = (u32)(M32(m_)); }
  /* 005655da lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 005655dd xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005655df cmp edx, 0x2020 */ { u32 a_ = edx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005655e5 ja 0x5655f0 */ if (!(CF_|ZF_)) goto L_005655f0;
  /* 005655e7 mov byte ptr [eax + esi], cl */ { const u32 m_ = (u32)(eax + esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005655ea inc dword ptr [esi + 0x2020] */ { const u32 m_ = (u32)(esi + 0x2020u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_005655f0:;
  /* 005655f0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005655f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565600(CPU *c) {
  NATIVE_HOOK(0x565600u) REGS; LOADALL;
L_00565600:;
  /* 00565600 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00565602 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565604 jle 0x565621 */ if ((ZF_|LT_)) goto L_00565621;
L_00565606:;
  /* 00565606 mov al, byte ptr [ecx + esi] */ { const u32 m_ = (u32)(ecx + esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00565609 mov dl, al */ { edx = (edx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0056560b sar dl, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = (edx & 0xffu); s32 s_ = sxt(a_, 1); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 0056560e and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565611 shl al, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00565614 or dl, al */ { u32 a_ = (edx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565616 xor dl, 0x5e */ { u32 a_ = (edx & 0xffu), b_ = 0x5eu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565619 mov byte ptr [ecx + esi], dl */ { const u32 m_ = (u32)(ecx + esi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0056561c inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056561d cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056561f jl 0x565606 */ if (LT_) goto L_00565606;
L_00565621:;
  /* 00565621 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565630(CPU *c) {
  NATIVE_HOOK(0x565630u) REGS; LOADALL;
L_00565630:;
  /* 00565630 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00565632 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565634 jle 0x565650 */ if ((ZF_|LT_)) goto L_00565650;
L_00565636:;
  /* 00565636 mov al, byte ptr [ecx + esi] */ { const u32 m_ = (u32)(ecx + esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00565639 xor al, 0x5e */ { u32 a_ = (eax & 0xffu), b_ = 0x5eu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0056563b mov dl, al */ { edx = (edx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0056563d sar dl, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = (edx & 0xffu); s32 s_ = sxt(a_, 1); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00565640 and dl, 3 */ { u32 a_ = (edx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565643 shl al, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00565646 or dl, al */ { u32 a_ = (edx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565648 mov byte ptr [ecx + esi], dl */ { const u32 m_ = (u32)(ecx + esi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0056564b inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056564c cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056564e jl 0x565636 */ if (LT_) goto L_00565636;
L_00565650:;
  /* 00565650 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565660(CPU *c) {
  NATIVE_HOOK(0x565660u) REGS; LOADALL;
L_00565660:;
  /* 00565660 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565661 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565663 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00565665 push 0x61fd40 */ { u32 v_ = 0x61fd40u; esp -= 4; M32(esp) = v_; }
  /* 0056566a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00565670 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565671 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00565678 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056567b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056567e cmp dword ptr [eax + 0x18], 0x10 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565682 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565683 jb 0x56568a */ if (CF_) goto L_0056568a;
  /* 00565685 mov ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00565688 jmp 0x56568d */ goto L_0056568d;
L_0056568a:;
  /* 0056568a lea ebx, [eax + 4] */ ebx = (u32)((u32)(eax + 0x4u));
L_0056568d:;
  /* 0056568d mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 00565690 mov ecx, 0x6555a4 */ { ecx = (u32)(0x6555a4u); }
  /* 00565695 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 00565698 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0056569b mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0056569e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005656a5 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 005656a8 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 005656af mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 005656b6 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005656b9 mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 005656bb lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005656be mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005656c2 call 0x54e880 */ esp -= 4; M32(esp) = 0x5656c7u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x5656c2u); RETCHK(0x5656c7u, 0x5656c2u); LOADALL;
  /* 005656c7 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005656ca mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 005656cc lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005656cf call 0x54e880 */ esp -= 4; M32(esp) = 0x5656d4u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x5656cfu); RETCHK(0x5656d4u, 0x5656cfu); LOADALL;
  /* 005656d4 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005656d7 mov dl, 0x3a */ { edx = (edx & 0xffffff00u) | ((u32)(0x3au) & 0xffu); }
  /* 005656d9 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005656dc call 0x54e880 */ esp -= 4; M32(esp) = 0x5656e1u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x5656dcu); RETCHK(0x5656e1u, 0x5656dcu); LOADALL;
  /* 005656e1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005656e3 je 0x5656f5 */ if (ZF_) goto L_005656f5;
  /* 005656e5 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005656e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005656e9 call 0x5fe92e */ esp -= 4; M32(esp) = 0x5656eeu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5656e9u); RETCHK(0x5656eeu, 0x5656e9u); LOADALL;
  /* 005656ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005656f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005656f3 jne 0x565708 */ if (!ZF_) goto L_00565708;
L_005656f5:;
  /* 005656f5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005656f7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005656f8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005656fb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565702 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565704 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565705 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00565708:;
  /* 00565708 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056570b mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0056570d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056570e call 0x563c40 */ esp -= 4; M32(esp) = 0x565713u; SAVEALL; F_00563c40(c); ABI_CHECK(0x563c40u, 0x56570eu); RETCHK(0x565713u, 0x56570eu); LOADALL;
  /* 00565713 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565716 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00565717 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056571e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565720 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565721 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00565730(CPU *c) {
  NATIVE_HOOK(0x565730u) REGS; LOADALL;
L_00565730:;
  /* 00565730 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565731 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565733 sub esp, 0xd4 */ { u32 a_ = esp, b_ = 0xd4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00565739 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0056573e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056573f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565740 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00565742 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00565745 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00565747 mov byte ptr [ebp - 0xd4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff2cu); M8(m_) = (u8)(0x0u); }
  /* 0056574e mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00565753 lea edi, [ebp - 0xd3] */ edi = (u32)((u32)(ebp + 0xffffff2du));
  /* 00565759 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0056575b mov ecx, 0x13 */ { ecx = (u32)(0x13u); }
  /* 00565760 lea edi, [ebp - 0x53] */ edi = (u32)((u32)(ebp + 0xffffffadu));
  /* 00565763 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00565765 mov ecx, dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); ecx = (u32)(M32(m_)); }
  /* 0056576b stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0056576d stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0056576e mov eax, dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); eax = (u32)(M32(m_)); }
  /* 00565774 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 00565779 lea edx, [ebp - 0xd4] */ edx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 0056577f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565780 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00565781 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 00565784 mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 00565787 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x56578cu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x565787u); RETCHK(0x56578cu, 0x565787u); LOADALL;
  /* 0056578c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0056578e lea eax, [esi + 0x80] */ eax = (u32)((u32)(esi + 0x80u));
  /* 00565794 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565795 lea ecx, [ebp - 0x53] */ ecx = (u32)((u32)(ebp + 0xffffffadu));
  /* 00565798 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00565799 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x56579eu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x565799u); RETCHK(0x56579eu, 0x565799u); LOADALL;
  /* 0056579e mov edx, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); edx = (u32)(M32(m_)); }
  /* 005657a4 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 005657a6 add esi, 0xbc */ { u32 a_ = esi, b_ = 0xbcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005657ac lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005657af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005657b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005657b1 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 005657b4 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x5657b9u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x5657b4u); RETCHK(0x5657b9u, 0x5657b4u); LOADALL;
  /* 005657b9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005657bc add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005657bf push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005657c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005657c2 mov edx, 0xd0 */ { edx = (u32)(0xd0u); }
  /* 005657c7 lea eax, [ebp - 0xd4] */ eax = (u32)((u32)(ebp + 0xffffff2cu));
  /* 005657cd mov byte ptr [ebp - 5], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)(0x0u); }
  /* 005657d1 call 0x565810 */ esp -= 4; M32(esp) = 0x5657d6u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x5657d1u); RETCHK(0x5657d6u, 0x5657d1u); LOADALL;
  /* 005657d6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005657d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005657da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005657db call 0x61af31 */ esp -= 4; M32(esp) = 0x5657e0u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5657dbu); RETCHK(0x5657e0u, 0x5657dbu); LOADALL;
  /* 005657e0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005657e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005657e3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565810(CPU *c) {
  NATIVE_HOOK(0x565810u) REGS; LOADALL;
L_00565810:;
  /* 00565810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565813 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00565816 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565817 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565818 mov esi, eax */ { esi = (u32)(eax); }
  /* 0056581a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056581d cmp eax, 0x3e8 */ { u32 a_ = eax, b_ = 0x3e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565822 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565823 lea ebx, [ecx + 0x10018] */ ebx = (u32)((u32)(ecx + 0x10018u));
  /* 00565829 lea edi, [ecx + 0x10020] */ edi = (u32)((u32)(ecx + 0x10020u));
  /* 0056582f je 0x56586b */ if (ZF_) goto L_0056586b;
  /* 00565831 cmp eax, 0x3e9 */ { u32 a_ = eax, b_ = 0x3e9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565836 je 0x56586b */ if (ZF_) goto L_0056586b;
  /* 00565838 cmp eax, 0x3ea */ { u32 a_ = eax, b_ = 0x3eau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056583d je 0x56586b */ if (ZF_) goto L_0056586b;
  /* 0056583f cmp eax, 0x3eb */ { u32 a_ = eax, b_ = 0x3ebu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565844 je 0x56586b */ if (ZF_) goto L_0056586b;
  /* 00565846 cmp eax, 0x3ec */ { u32 a_ = eax, b_ = 0x3ecu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056584b je 0x56586b */ if (ZF_) goto L_0056586b;
  /* 0056584d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056584e lea esi, [ecx + 8] */ esi = (u32)((u32)(ecx + 0x8u));
  /* 00565851 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565852 mov edx, 0x2020 */ { edx = (u32)(0x2020u); }
  /* 00565857 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00565859 call 0x566530 */ esp -= 4; M32(esp) = 0x56585eu; SAVEALL; F_00566530(c); ABI_CHECK(0x566530u, 0x565859u); RETCHK(0x56585eu, 0x565859u); LOADALL;
  /* 0056585e mov edi, eax */ { edi = (u32)(eax); }
  /* 00565860 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565862 jge 0x56587d */ if (!LT_) goto L_0056587d;
  /* 00565864 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565865 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00565866 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00565867 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565868 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0056586b:;
  /* 0056586b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0056586d mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0056586f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00565872 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00565874 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00565876 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00565879 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056587b mov edi, edx */ { edi = (u32)(edx); }
L_0056587d:;
  /* 0056587d lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 00565880 mov word ptr [ebx + 4], cx */ { const u32 m_ = (u32)(ebx + 0x4u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00565884 call 0x550390 */ esp -= 4; M32(esp) = 0x565889u; SAVEALL; F_00550390(c); ABI_CHECK(0x550390u, 0x565884u); RETCHK(0x565889u, 0x565884u); LOADALL;
  /* 00565889 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056588c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056588d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00565890 mov esi, edi */ { esi = (u32)(edi); }
  /* 00565892 add ecx, 0x10020 */ { u32 a_ = ecx, b_ = 0x10020u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00565898 call 0x541be0 */ esp -= 4; M32(esp) = 0x56589du; SAVEALL; F_00541be0(c); ABI_CHECK(0x541be0u, 0x565898u); RETCHK(0x56589du, 0x565898u); LOADALL;
  /* 0056589d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056589f je 0x5658de */ if (ZF_) goto L_005658de;
  /* 005658a1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005658a4 add esi, 0x10020 */ { u32 a_ = esi, b_ = 0x10020u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005658aa call 0x565600 */ esp -= 4; M32(esp) = 0x5658afu; SAVEALL; F_00565600(c); ABI_CHECK(0x565600u, 0x5658aau); RETCHK(0x5658afu, 0x5658aau); LOADALL;
  /* 005658af mov dx, word ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005658b3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005658b6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005658b8 mov ax, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005658bc xor ax, 0xffdd */ { u32 a_ = (eax & 0xffffu), b_ = 0xffddu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 005658c0 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005658c3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005658c4 mov word ptr [ebx + 6], dx */ { const u32 m_ = (u32)(ebx + 0x6u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005658c8 mov word ptr [ebx], 0xaaee */ { const u32 m_ = (u32)(ebx); M16(m_) = (u16)(0xaaeeu); }
  /* 005658cd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005658ce and eax, 0x88aa */ { u32 a_ = eax, b_ = 0x88aau; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005658d3 mov word ptr [ebx + 2], ax */ { const u32 m_ = (u32)(ebx + 0x2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005658d7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005658d9 call 0x563b50 */ esp -= 4; M32(esp) = 0x5658deu; SAVEALL; F_00563b50(c); ABI_CHECK(0x563b50u, 0x5658d9u); RETCHK(0x5658deu, 0x5658d9u); LOADALL;
L_005658de:;
  /* 005658de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005658df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005658e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005658e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005658e2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005658f0(CPU *c) {
  NATIVE_HOOK(0x5658f0u) REGS; LOADALL;
L_005658f0:;
  /* 005658f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005658f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005658f3 sub esp, 0x68 */ { u32 a_ = esp, b_ = 0x68u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005658f6 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005658fb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005658fe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00565900 mov dword ptr [ebp - 0x67], eax */ { const u32 m_ = (u32)(ebp + 0xffffff99u); M32(m_) = (u32)(eax); }
  /* 00565903 mov dword ptr [ebp - 0x63], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9du); M32(m_) = (u32)(eax); }
  /* 00565906 mov dword ptr [ebp - 0x5f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa1u); M32(m_) = (u32)(eax); }
  /* 00565909 mov dword ptr [ebp - 0x5b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa5u); M32(m_) = (u32)(eax); }
  /* 0056590c mov dword ptr [ebp - 0x57], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa9u); M32(m_) = (u32)(eax); }
  /* 0056590f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565910 mov dword ptr [ebp - 0x53], eax */ { const u32 m_ = (u32)(ebp + 0xffffffadu); M32(m_) = (u32)(eax); }
  /* 00565913 mov dword ptr [ebp - 0x4f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M32(m_) = (u32)(eax); }
  /* 00565916 mov byte ptr [ebp - 0x68], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M8(m_) = (u8)(0x0u); }
  /* 0056591a mov dword ptr [ebp - 0x4b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb5u); M32(m_) = (u32)(eax); }
  /* 0056591d mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00565922 lea edi, [ebp - 0x47] */ edi = (u32)((u32)(ebp + 0xffffffb9u));
  /* 00565925 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00565927 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056592a push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0056592c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056592d lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00565930 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00565931 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00565933 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x565938u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x565933u); RETCHK(0x565938u, 0x565933u); LOADALL;
  /* 00565938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056593b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0056593d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056593e lea ecx, [ebp - 0x47] */ ecx = (u32)((u32)(ebp + 0xffffffb9u));
  /* 00565941 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00565942 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x565947u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x565942u); RETCHK(0x565947u, 0x565942u); LOADALL;
  /* 00565947 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0056594a push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0056594c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056594d lea eax, [ebp - 0x26] */ eax = (u32)((u32)(ebp + 0xffffffdau));
  /* 00565950 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565951 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x565956u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x565951u); RETCHK(0x565956u, 0x565951u); LOADALL;
  /* 00565956 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00565959 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056595c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056595e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056595f mov edx, 0x63 */ { edx = (u32)(0x63u); }
  /* 00565964 lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 00565967 jne 0x565986 */ if (!ZF_) goto L_00565986;
  /* 00565969 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056596b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056596c mov dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x1u); }
  /* 00565973 call 0x565810 */ esp -= 4; M32(esp) = 0x565978u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x565973u); RETCHK(0x565978u, 0x565973u); LOADALL;
  /* 00565978 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0056597b call 0x61af31 */ esp -= 4; M32(esp) = 0x565980u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x56597bu); RETCHK(0x565980u, 0x56597bu); LOADALL;
  /* 00565980 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565982 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565983 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00565986:;
  /* 00565986 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00565988 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565989 call 0x565810 */ esp -= 4; M32(esp) = 0x56598eu; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x565989u); RETCHK(0x56598eu, 0x565989u); LOADALL;
  /* 0056598e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00565991 call 0x61af31 */ esp -= 4; M32(esp) = 0x565996u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x565991u); RETCHK(0x565996u, 0x565991u); LOADALL;
  /* 00565996 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565998 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565999 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005659a0(CPU *c) {
  NATIVE_HOOK(0x5659a0u) REGS; LOADALL;
L_005659a0:;
  /* 005659a0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005659a2 jmp 0x563b10 */ SAVEALL; F_00563b10(c); return;
}

void F_005659b0(CPU *c) {
  NATIVE_HOOK(0x5659b0u) REGS; LOADALL;
L_005659b0:;
  /* 005659b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005659b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005659b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005659b5 push 0x61fd40 */ { u32 v_ = 0x61fd40u; esp -= 4; M32(esp) = v_; }
  /* 005659ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005659c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005659c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005659c8 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005659cb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005659ce cmp dword ptr [eax + 0x18], 0x10 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005659d2 jb 0x5659d9 */ if (CF_) goto L_005659d9;
  /* 005659d4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005659d7 jmp 0x5659dc */ goto L_005659dc;
L_005659d9:;
  /* 005659d9 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
L_005659dc:;
  /* 005659dc mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 005659df mov edx, 0x6555a4 */ { edx = (u32)(0x6555a4u); }
  /* 005659e4 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 005659e7 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005659ea mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 005659ed mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005659f4 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 005659f7 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 005659fe mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 00565a05 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00565a08 mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 00565a0a lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00565a0d mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00565a11 call 0x54e880 */ esp -= 4; M32(esp) = 0x565a16u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x565a11u); RETCHK(0x565a16u, 0x565a11u); LOADALL;
  /* 00565a16 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00565a19 mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 00565a1b lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00565a1e call 0x54e880 */ esp -= 4; M32(esp) = 0x565a23u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x565a1eu); RETCHK(0x565a23u, 0x565a1eu); LOADALL;
  /* 00565a23 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00565a26 mov dl, 0x3a */ { edx = (edx & 0xffffff00u) | ((u32)(0x3au) & 0xffu); }
  /* 00565a28 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00565a2b call 0x54e880 */ esp -= 4; M32(esp) = 0x565a30u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x565a2bu); RETCHK(0x565a30u, 0x565a2bu); LOADALL;
  /* 00565a30 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00565a32 je 0x565a44 */ if (ZF_) goto L_00565a44;
  /* 00565a34 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00565a37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565a38 call 0x5fe92e */ esp -= 4; M32(esp) = 0x565a3du; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x565a38u); RETCHK(0x565a3du, 0x565a38u); LOADALL;
  /* 00565a3d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00565a40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565a42 jne 0x565a56 */ if (!ZF_) goto L_00565a56;
L_00565a44:;
  /* 00565a44 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565a46 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565a49 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565a50 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565a52 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565a53 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00565a56:;
  /* 00565a56 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00565a59 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00565a5b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565a5c mov ebx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ebx = (u32)(M32(m_)); }
  /* 00565a5f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565a60 call 0x563c40 */ esp -= 4; M32(esp) = 0x565a65u; SAVEALL; F_00563c40(c); ABI_CHECK(0x563c40u, 0x565a60u); RETCHK(0x565a65u, 0x565a60u); LOADALL;
  /* 00565a65 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565a68 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00565a69 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565a70 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565a72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565a73 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00565a80(CPU *c) {
  NATIVE_HOOK(0x565a80u) REGS; LOADALL;
L_00565a80:;
  /* 00565a80 cmp dword ptr [esi + 0x28], 0x10 */ { const u32 m_ = (u32)(esi + 0x28u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565a84 jb 0x565a92 */ if (CF_) goto L_00565a92;
  /* 00565a86 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00565a89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565a8a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x565a8fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x565a8au); RETCHK(0x565a8fu, 0x565a8au); LOADALL;
  /* 00565a8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00565a92:;
  /* 00565a92 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00565a94 mov dword ptr [esi + 0x28], 0xf */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0xfu); }
  /* 00565a9b mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 00565a9e mov byte ptr [esi + 0x14], al */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00565aa1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565ab0(CPU *c) {
  NATIVE_HOOK(0x565ab0u) REGS; LOADALL;
L_00565ab0:;
  /* 00565ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565ab3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00565ab5 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00565abb push 0x61c3b0 */ { u32 v_ = 0x61c3b0u; esp -= 4; M32(esp) = v_; }
  /* 00565ac0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565ac1 mov eax, 0x2074 */ { eax = (u32)(0x2074u); }
  /* 00565ac6 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00565acd call 0x5fede0 */ esp -= 4; M32(esp) = 0x565ad2u; SAVEALL; F_005fede0(c); ABI_CHECK(0x5fede0u, 0x565acdu); RETCHK(0x565ad2u, 0x565acdu); LOADALL;
  /* 00565ad2 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00565ad7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565ad8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00565adb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565adc lea eax, [ebp - 0x58] */ eax = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00565adf call 0x565530 */ esp -= 4; M32(esp) = 0x565ae4u; SAVEALL; F_00565530(c); ABI_CHECK(0x565530u, 0x565adfu); RETCHK(0x565ae4u, 0x565adfu); LOADALL;
  /* 00565ae4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00565ae6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00565ae9 mov cl, byte ptr [0x7a6eb7] */ { const u32 m_ = (u32)(0x7a6eb7u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00565aef test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00565af1 mov word ptr [ebp - 0x56], 0x6001 */ { const u32 m_ = (u32)(ebp + 0xffffffaau); M16(m_) = (u16)(0x6001u); }
  /* 00565af7 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 00565afa mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 00565afd je 0x565bd9 */ if (ZF_) goto L_00565bd9;
  /* 00565b03 mov byte ptr [0x7a6eb7], al */ { const u32 m_ = (u32)(0x7a6eb7u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00565b08 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00565b0b mov byte ptr [ebp - 0x28], al */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00565b0e mov eax, 0x7a6eb8 */ { eax = (u32)(0x7a6eb8u); }
  /* 00565b13 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00565b1a lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00565b1d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00565b20:;
  /* 00565b20 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00565b22 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00565b23 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00565b25 jne 0x565b20 */ if (!ZF_) goto L_00565b20;
  /* 00565b27 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565b28 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00565b2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565b2b push 0x7a6eb8 */ { u32 v_ = 0x7a6eb8u; esp -= 4; M32(esp) = v_; }
  /* 00565b30 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00565b33 call 0x404420 */ esp -= 4; M32(esp) = 0x565b38u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x565b33u); RETCHK(0x565b38u, 0x565b33u); LOADALL;
  /* 00565b38 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00565b3c mov esi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esi = (u32)(M32(m_)); }
  /* 00565b3f shr esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00565b41 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00565b42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565b43 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x565b48u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x565b43u); RETCHK(0x565b48u, 0x565b43u); LOADALL;
  /* 00565b48 mov edi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edi = (u32)(M32(m_)); }
  /* 00565b4b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00565b4d mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00565b50 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00565b53 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565b56 jae 0x565b5b */ if (!CF_) goto L_00565b5b;
  /* 00565b58 lea edi, [ebp - 0x28] */ edi = (u32)((u32)(ebp + 0xffffffd8u));
L_00565b5b:;
  /* 00565b5b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565b5c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565b5d call 0x550630 */ esp -= 4; M32(esp) = 0x565b62u; SAVEALL; F_00550630(c); ABI_CHECK(0x550630u, 0x565b5du); RETCHK(0x565b62u, 0x565b5du); LOADALL;
  /* 00565b62 mov edi, eax */ { edi = (u32)(eax); }
  /* 00565b64 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00565b67 lea edx, [ebp - 0x58] */ edx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00565b6a lea eax, [ebp - 0x2080] */ eax = (u32)((u32)(ebp + 0xffffdf80u));
  /* 00565b70 mov dword ptr [ebp - 0x50], 0x65 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x65u); }
  /* 00565b77 mov word ptr [ebp - 0x4c], di */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 00565b7b call 0x566440 */ esp -= 4; M32(esp) = 0x565b80u; SAVEALL; F_00566440(c); ABI_CHECK(0x566440u, 0x565b7bu); RETCHK(0x565b80u, 0x565b7bu); LOADALL;
  /* 00565b80 mov esi, eax */ { esi = (u32)(eax); }
  /* 00565b82 mov eax, dword ptr [esi + 0x2020] */ { const u32 m_ = (u32)(esi + 0x2020u); eax = (u32)(M32(m_)); }
  /* 00565b88 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 00565b8b cmp ecx, 0x2020 */ { u32 a_ = ecx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565b91 ja 0x565b9f */ if (!(CF_|ZF_)) goto L_00565b9f;
  /* 00565b93 mov dl, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00565b96 mov byte ptr [eax + esi], dl */ { const u32 m_ = (u32)(eax + esi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00565b99 inc dword ptr [esi + 0x2020] */ { const u32 m_ = (u32)(esi + 0x2020u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00565b9f:;
  /* 00565b9f mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00565ba2 call 0x5655b0 */ esp -= 4; M32(esp) = 0x565ba7u; SAVEALL; F_005655b0(c); ABI_CHECK(0x5655b0u, 0x565ba2u); RETCHK(0x565ba7u, 0x565ba2u); LOADALL;
  /* 00565ba7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565ba8 mov edx, edi */ { edx = (u32)(edi); }
  /* 00565baa lea eax, [ebp - 0x2080] */ eax = (u32)((u32)(ebp + 0xffffdf80u));
  /* 00565bb0 call 0x565560 */ esp -= 4; M32(esp) = 0x565bb5u; SAVEALL; F_00565560(c); ABI_CHECK(0x565560u, 0x565bb0u); RETCHK(0x565bb5u, 0x565bb0u); LOADALL;
  /* 00565bb5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565bb6 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x565bbbu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x565bb6u); RETCHK(0x565bbbu, 0x565bb6u); LOADALL;
  /* 00565bbb mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00565bbf mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00565bc2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00565bc5 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565bc8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565bc9 jb 0x565c1f */ if (CF_) goto L_00565c1f;
  /* 00565bcb mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00565bce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565bcf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x565bd4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x565bcfu); RETCHK(0x565bd4u, 0x565bcfu); LOADALL;
  /* 00565bd4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00565bd7 jmp 0x565c1f */ goto L_00565c1f;
L_00565bd9:;
  /* 00565bd9 movzx ecx, word ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M16(m_)); }
  /* 00565bdd lea edx, [ebp - 0x58] */ edx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00565be0 lea eax, [ebp - 0x2080] */ eax = (u32)((u32)(ebp + 0xffffdf80u));
  /* 00565be6 mov dword ptr [ebp - 0x50], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ecx); }
  /* 00565be9 call 0x566440 */ esp -= 4; M32(esp) = 0x565beeu; SAVEALL; F_00566440(c); ABI_CHECK(0x566440u, 0x565be9u); RETCHK(0x565beeu, 0x565be9u); LOADALL;
  /* 00565bee mov esi, eax */ { esi = (u32)(eax); }
  /* 00565bf0 mov eax, dword ptr [esi + 0x2020] */ { const u32 m_ = (u32)(esi + 0x2020u); eax = (u32)(M32(m_)); }
  /* 00565bf6 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00565bf9 cmp edx, 0x2020 */ { u32 a_ = edx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565bff ja 0x565c0d */ if (!(CF_|ZF_)) goto L_00565c0d;
  /* 00565c01 mov cl, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00565c04 mov byte ptr [eax + esi], cl */ { const u32 m_ = (u32)(eax + esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00565c07 inc dword ptr [esi + 0x2020] */ { const u32 m_ = (u32)(esi + 0x2020u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00565c0d:;
  /* 00565c0d mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00565c10 call 0x5655b0 */ esp -= 4; M32(esp) = 0x565c15u; SAVEALL; F_005655b0(c); ABI_CHECK(0x5655b0u, 0x565c10u); RETCHK(0x565c15u, 0x565c10u); LOADALL;
  /* 00565c15 mov esi, eax */ { esi = (u32)(eax); }
  /* 00565c17 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00565c1a call 0x5655b0 */ esp -= 4; M32(esp) = 0x565c1fu; SAVEALL; F_005655b0(c); ABI_CHECK(0x5655b0u, 0x565c1au); RETCHK(0x565c1fu, 0x565c1au); LOADALL;
L_00565c1f:;
  /* 00565c1f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00565c22 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00565c24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565c25 lea ebx, [ebp - 0x2080] */ ebx = (u32)((u32)(ebp + 0xffffdf80u));
  /* 00565c2b call 0x565f80 */ esp -= 4; M32(esp) = 0x565c30u; SAVEALL; F_00565f80(c); ABI_CHECK(0x565f80u, 0x565c2bu); RETCHK(0x565c30u, 0x565c2bu); LOADALL;
  /* 00565c30 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565c34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00565c35 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00565c36 jb 0x565c44 */ if (CF_) goto L_00565c44;
  /* 00565c38 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 00565c3b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00565c3c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x565c41u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x565c3cu); RETCHK(0x565c41u, 0x565c3cu); LOADALL;
  /* 00565c41 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00565c44:;
  /* 00565c44 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565c47 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565c4e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00565c51 call 0x61af31 */ esp -= 4; M32(esp) = 0x565c56u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x565c51u); RETCHK(0x565c56u, 0x565c51u); LOADALL;
  /* 00565c56 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565c58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565c59 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00565c60(CPU *c) {
  NATIVE_HOOK(0x565c60u) REGS; LOADALL;
L_00565c60:;
  /* 00565c60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565c61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565c63 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00565c69 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00565c6b push 0x61c388 */ { u32 v_ = 0x61c388u; esp -= 4; M32(esp) = v_; }
  /* 00565c70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565c71 mov eax, 0x2058 */ { eax = (u32)(0x2058u); }
  /* 00565c76 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00565c7d call 0x5fede0 */ esp -= 4; M32(esp) = 0x565c82u; SAVEALL; F_005fede0(c); ABI_CHECK(0x5fede0u, 0x565c7du); RETCHK(0x565c82u, 0x565c7du); LOADALL;
  /* 00565c82 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00565c87 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00565c8a lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00565c8d call 0x565530 */ esp -= 4; M32(esp) = 0x565c92u; SAVEALL; F_00565530(c); ABI_CHECK(0x565530u, 0x565c8du); RETCHK(0x565c92u, 0x565c8du); LOADALL;
  /* 00565c92 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00565c94 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00565c97 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 00565c9a mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 00565c9d lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00565ca0 lea eax, [ebp - 0x2064] */ eax = (u32)((u32)(ebp + 0xffffdf9cu));
  /* 00565ca6 mov word ptr [ebp - 0x3a], 0x6001 */ { const u32 m_ = (u32)(ebp + 0xffffffc6u); M16(m_) = (u16)(0x6001u); }
  /* 00565cac mov dword ptr [ebp - 0x34], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x8u); }
  /* 00565cb3 call 0x566440 */ esp -= 4; M32(esp) = 0x565cb8u; SAVEALL; F_00566440(c); ABI_CHECK(0x566440u, 0x565cb3u); RETCHK(0x565cb8u, 0x565cb3u); LOADALL;
  /* 00565cb8 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 00565cbb lea ecx, [eax + 0x10c] */ ecx = (u32)((u32)(eax + 0x10cu));
  /* 00565cc1 cmp ecx, 0x2020 */ { u32 a_ = ecx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565cc7 ja 0x565ce9 */ if (!(CF_|ZF_)) goto L_00565ce9;
  /* 00565cc9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565cca mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00565ccd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565cce lea edi, [ebp + eax - 0x2064] */ edi = (u32)((u32)(ebp + eax + 0xffffdf9cu));
  /* 00565cd5 mov ecx, 0x43 */ { ecx = (u32)(0x43u); }
  /* 00565cda rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00565cdc mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 00565cdf add eax, 0x10c */ { u32 a_ = eax, b_ = 0x10cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00565ce4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565ce5 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 00565ce8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00565ce9:;
  /* 00565ce9 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00565cec mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00565cee push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565cef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565cf0 lea ebx, [ebp - 0x2064] */ ebx = (u32)((u32)(ebp + 0xffffdf9cu));
  /* 00565cf6 call 0x565f80 */ esp -= 4; M32(esp) = 0x565cfbu; SAVEALL; F_00565f80(c); ABI_CHECK(0x565f80u, 0x565cf6u); RETCHK(0x565cfbu, 0x565cf6u); LOADALL;
  /* 00565cfb cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565cff pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00565d00 jb 0x565d0e */ if (CF_) goto L_00565d0e;
  /* 00565d02 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00565d05 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00565d06 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x565d0bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x565d06u); RETCHK(0x565d0bu, 0x565d06u); LOADALL;
  /* 00565d0b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00565d0e:;
  /* 00565d0e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565d11 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565d18 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00565d1b call 0x61af31 */ esp -= 4; M32(esp) = 0x565d20u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x565d1bu); RETCHK(0x565d20u, 0x565d1bu); LOADALL;
  /* 00565d20 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565d22 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565d23 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00565d30(CPU *c) {
  NATIVE_HOOK(0x565d30u) REGS; LOADALL;
L_00565d30:;
  /* 00565d30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565d31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565d33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00565d35 push 0x61c388 */ { u32 v_ = 0x61c388u; esp -= 4; M32(esp) = v_; }
  /* 00565d3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00565d40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565d41 mov eax, 0x2058 */ { eax = (u32)(0x2058u); }
  /* 00565d46 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00565d4d call 0x5fede0 */ esp -= 4; M32(esp) = 0x565d52u; SAVEALL; F_005fede0(c); ABI_CHECK(0x5fede0u, 0x565d4du); RETCHK(0x565d52u, 0x565d4du); LOADALL;
  /* 00565d52 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00565d57 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565d58 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565d59 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00565d5c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565d5d lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00565d60 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00565d62 call 0x565530 */ esp -= 4; M32(esp) = 0x565d67u; SAVEALL; F_00565530(c); ABI_CHECK(0x565530u, 0x565d62u); RETCHK(0x565d67u, 0x565d62u); LOADALL;
  /* 00565d67 mov ax, word ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00565d6b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00565d6d mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00565d70 mov word ptr [ebp - 0x38], ax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00565d74 lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00565d77 lea eax, [ebp - 0x2064] */ eax = (u32)((u32)(ebp + 0xffffdf9cu));
  /* 00565d7d mov word ptr [ebp - 0x3a], 0x600a */ { const u32 m_ = (u32)(ebp + 0xffffffc6u); M16(m_) = (u16)(0x600au); }
  /* 00565d83 mov dword ptr [ebp - 0x44], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ebx); }
  /* 00565d86 mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 00565d89 call 0x566440 */ esp -= 4; M32(esp) = 0x565d8eu; SAVEALL; F_00566440(c); ABI_CHECK(0x566440u, 0x565d89u); RETCHK(0x565d8eu, 0x565d89u); LOADALL;
  /* 00565d8e mov esi, eax */ { esi = (u32)(eax); }
  /* 00565d90 mov ax, word ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00565d94 cmp ax, 0x400 */ { u32 a_ = (eax & 0xffffu), b_ = 0x400u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00565d98 jae 0x565dcf */ if (!CF_) goto L_00565dcf;
  /* 00565d9a cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565d9e jb 0x565da5 */ if (CF_) goto L_00565da5;
  /* 00565da0 mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00565da3 jmp 0x565da8 */ goto L_00565da8;
L_00565da5:;
  /* 00565da5 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_00565da8:;
  /* 00565da8 movzx edx, ax */ { edx = (u32)((eax & 0xffffu)); }
  /* 00565dab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565dac mov eax, esi */ { eax = (u32)(esi); }
  /* 00565dae call 0x565560 */ esp -= 4; M32(esp) = 0x565db3u; SAVEALL; F_00565560(c); ABI_CHECK(0x565560u, 0x565daeu); RETCHK(0x565db3u, 0x565daeu); LOADALL;
  /* 00565db3 mov eax, dword ptr [esi + 0x2020] */ { const u32 m_ = (u32)(esi + 0x2020u); eax = (u32)(M32(m_)); }
  /* 00565db9 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00565dbc xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00565dbe cmp edx, 0x2020 */ { u32 a_ = edx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565dc4 ja 0x565dcf */ if (!(CF_|ZF_)) goto L_00565dcf;
  /* 00565dc6 mov byte ptr [eax + esi], cl */ { const u32 m_ = (u32)(eax + esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00565dc9 inc dword ptr [esi + 0x2020] */ { const u32 m_ = (u32)(esi + 0x2020u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00565dcf:;
  /* 00565dcf mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00565dd2 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00565dd4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00565dd5 lea ebx, [ebp - 0x2064] */ ebx = (u32)((u32)(ebp + 0xffffdf9cu));
  /* 00565ddb call 0x565f80 */ esp -= 4; M32(esp) = 0x565de0u; SAVEALL; F_00565f80(c); ABI_CHECK(0x565f80u, 0x565ddbu); RETCHK(0x565de0u, 0x565ddbu); LOADALL;
  /* 00565de0 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565de4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565de5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00565de6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00565de7 jb 0x565df5 */ if (CF_) goto L_00565df5;
  /* 00565de9 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00565dec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00565ded call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x565df2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x565dedu); RETCHK(0x565df2u, 0x565dedu); LOADALL;
  /* 00565df2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00565df5:;
  /* 00565df5 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565df8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565dff mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00565e02 call 0x61af31 */ esp -= 4; M32(esp) = 0x565e07u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x565e02u); RETCHK(0x565e07u, 0x565e02u); LOADALL;
  /* 00565e07 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565e09 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565e0a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00565e10(CPU *c) {
  NATIVE_HOOK(0x565e10u) REGS; LOADALL;
L_00565e10:;
  /* 00565e10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565e11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565e13 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00565e19 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00565e1b push 0x61c388 */ { u32 v_ = 0x61c388u; esp -= 4; M32(esp) = v_; }
  /* 00565e20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565e21 mov eax, 0x2058 */ { eax = (u32)(0x2058u); }
  /* 00565e26 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00565e2d call 0x5fede0 */ esp -= 4; M32(esp) = 0x565e32u; SAVEALL; F_005fede0(c); ABI_CHECK(0x5fede0u, 0x565e2du); RETCHK(0x565e32u, 0x565e2du); LOADALL;
  /* 00565e32 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00565e37 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00565e3a lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00565e3d call 0x565530 */ esp -= 4; M32(esp) = 0x565e42u; SAVEALL; F_00565530(c); ABI_CHECK(0x565530u, 0x565e3du); RETCHK(0x565e42u, 0x565e3du); LOADALL;
  /* 00565e42 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00565e44 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00565e47 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 00565e4a mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 00565e4d lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00565e50 lea eax, [ebp - 0x2064] */ eax = (u32)((u32)(ebp + 0xffffdf9cu));
  /* 00565e56 mov word ptr [ebp - 0x3a], 0x6010 */ { const u32 m_ = (u32)(ebp + 0xffffffc6u); M16(m_) = (u16)(0x6010u); }
  /* 00565e5c call 0x566440 */ esp -= 4; M32(esp) = 0x565e61u; SAVEALL; F_00566440(c); ABI_CHECK(0x566440u, 0x565e5cu); RETCHK(0x565e61u, 0x565e5cu); LOADALL;
  /* 00565e61 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 00565e67 lea edx, [ecx + 2] */ edx = (u32)((u32)(ecx + 0x2u));
  /* 00565e6a cmp edx, 0x2020 */ { u32 a_ = edx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565e70 ja 0x565e81 */ if (!(CF_|ZF_)) goto L_00565e81;
  /* 00565e72 mov dx, word ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00565e76 mov word ptr [ecx + eax], dx */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 00565e7a add dword ptr [eax + 0x2020], 2 */ { const u32 m_ = (u32)(eax + 0x2020u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_00565e81:;
  /* 00565e81 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00565e84 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00565e86 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565e87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00565e88 lea ebx, [ebp - 0x2064] */ ebx = (u32)((u32)(ebp + 0xffffdf9cu));
  /* 00565e8e call 0x565f80 */ esp -= 4; M32(esp) = 0x565e93u; SAVEALL; F_00565f80(c); ABI_CHECK(0x565f80u, 0x565e8eu); RETCHK(0x565e93u, 0x565e8eu); LOADALL;
  /* 00565e93 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565e97 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00565e98 jb 0x565ea6 */ if (CF_) goto L_00565ea6;
  /* 00565e9a mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00565e9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00565e9e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x565ea3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x565e9eu); RETCHK(0x565ea3u, 0x565e9eu); LOADALL;
  /* 00565ea3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00565ea6:;
  /* 00565ea6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00565ea9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00565eb0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00565eb3 call 0x61af31 */ esp -= 4; M32(esp) = 0x565eb8u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x565eb3u); RETCHK(0x565eb8u, 0x565eb3u); LOADALL;
  /* 00565eb8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00565eba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565ebb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00565ec0(CPU *c) {
  NATIVE_HOOK(0x565ec0u) REGS; LOADALL;
L_00565ec0:;
  /* 00565ec0 mov eax, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); eax = (u32)(M32(m_)); }
  /* 00565ec6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565ec8 je 0x565ed1 */ if (ZF_) goto L_00565ed1;
  /* 00565eca mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00565ecc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00565ece jmp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00565ed1:;
  /* 00565ed1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565ee0(CPU *c) {
  NATIVE_HOOK(0x565ee0u) REGS; LOADALL;
L_00565ee0:;
  /* 00565ee0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565ee1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565ee3 mov eax, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); eax = (u32)(M32(m_)); }
  /* 00565ee9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565eeb je 0x565ef5 */ if (ZF_) goto L_00565ef5;
  /* 00565eed mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00565eef mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00565ef1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565ef2 jmp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00565ef5:;
  /* 00565ef5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565ef6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565f00(CPU *c) {
  NATIVE_HOOK(0x565f00u) REGS; LOADALL;
L_00565f00:;
  /* 00565f00 call 0x563aa0 */ esp -= 4; M32(esp) = 0x565f05u; SAVEALL; F_00563aa0(c); ABI_CHECK(0x563aa0u, 0x565f00u); RETCHK(0x565f05u, 0x565f00u); LOADALL;
  /* 00565f05 mov dword ptr [eax], 0x656cc0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x656cc0u); }
  /* 00565f0b lea ecx, [eax + 0x8058] */ ecx = (u32)((u32)(eax + 0x8058u));
  /* 00565f11 mov dword ptr [eax + 0x8054], 0 */ { const u32 m_ = (u32)(eax + 0x8054u); M32(m_) = (u32)(0x0u); }
  /* 00565f1b mov dword ptr [eax + 0x804c], 0x656cbc */ { const u32 m_ = (u32)(eax + 0x804cu); M32(m_) = (u32)(0x656cbcu); }
  /* 00565f25 mov dword ptr [eax + 0x8050], ecx */ { const u32 m_ = (u32)(eax + 0x8050u); M32(m_) = (u32)(ecx); }
  /* 00565f2b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00565f30(CPU *c) {
  NATIVE_HOOK(0x565f30u) REGS; LOADALL;
L_00565f30:;
  /* 00565f30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565f31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565f33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565f34 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00565f36 call 0x565f60 */ esp -= 4; M32(esp) = 0x565f3bu; SAVEALL; F_00565f60(c); ABI_CHECK(0x565f60u, 0x565f36u); RETCHK(0x565f3bu, 0x565f36u); LOADALL;
  /* 00565f3b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00565f3f je 0x565f4a */ if (ZF_) goto L_00565f4a;
  /* 00565f41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565f42 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x565f47u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x565f42u); RETCHK(0x565f47u, 0x565f42u); LOADALL;
  /* 00565f47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00565f4a:;
  /* 00565f4a mov eax, esi */ { eax = (u32)(esi); }
  /* 00565f4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00565f4d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565f4e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565f60(CPU *c) {
  NATIVE_HOOK(0x565f60u) REGS; LOADALL;
L_00565f60:;
  /* 00565f60 mov dword ptr [ecx], 0x656cc0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656cc0u); }
  /* 00565f66 mov dword ptr [ecx + 0x804c], 0x6555a4 */ { const u32 m_ = (u32)(ecx + 0x804cu); M32(m_) = (u32)(0x6555a4u); }
  /* 00565f70 jmp 0x563b00 */ SAVEALL; F_00563b00(c); return;
}

void F_00565f80(CPU *c) {
  NATIVE_HOOK(0x565f80u) REGS; LOADALL;
L_00565f80:;
  /* 00565f80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00565f81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00565f83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00565f84 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00565f85 mov edi, dword ptr [ebx + 0x2020] */ { const u32 m_ = (u32)(ebx + 0x2020u); edi = (u32)(M32(m_)); }
  /* 00565f8b sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00565f8e lea esi, [ebx + 2] */ esi = (u32)((u32)(ebx + 0x2u));
  /* 00565f91 call 0x565600 */ esp -= 4; M32(esp) = 0x565f96u; SAVEALL; F_00565600(c); ABI_CHECK(0x565600u, 0x565f91u); RETCHK(0x565f96u, 0x565f91u); LOADALL;
  /* 00565f96 mov eax, dword ptr [ebx + 0x2020] */ { const u32 m_ = (u32)(ebx + 0x2020u); eax = (u32)(M32(m_)); }
  /* 00565f9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565f9d mov word ptr [ebx], ax */ { const u32 m_ = (u32)(ebx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00565fa0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00565fa3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00565fa4 call 0x563b50 */ esp -= 4; M32(esp) = 0x565fa9u; SAVEALL; F_00563b50(c); ABI_CHECK(0x563b50u, 0x565fa4u); RETCHK(0x565fa9u, 0x565fa4u); LOADALL;
  /* 00565fa9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00565faa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00565fab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00565fac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00565fb0(CPU *c) {
  NATIVE_HOOK(0x565fb0u) REGS; LOADALL;
L_00565fb0:;
  /* 00565fb0 mov edx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); edx = (u32)(M32(m_)); }
  /* 00565fb6 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00565fb8 je 0x566060 */ if (ZF_) goto L_00566060;
  /* 00565fbe movzx edx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)(M16(m_)); }
  /* 00565fc2 add edx, 0xffff9e00 */ { u32 a_ = edx, b_ = 0xffff9e00u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00565fc8 cmp edx, 0x60 */ { u32 a_ = edx, b_ = 0x60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00565fcb ja 0x566060 */ if (!(CF_|ZF_)) goto L_00566060;
  /* 00565fd1 movzx edx, byte ptr [edx + 0x566090] */ { const u32 m_ = (u32)(edx + 0x566090u); edx = (u32)(M8(m_)); }
  /* 00565fd8 jmp dword ptr [edx*4 + 0x566064] */ { const u32 m_ = (u32)(edx * 4u + 0x566064u); u32 t_ = M32(m_); switch (t_) { case 0x565fdfu: goto L_00565fdf; case 0x565fecu: goto L_00565fec; case 0x565ff9u: goto L_00565ff9; case 0x566006u: goto L_00566006; case 0x566013u: goto L_00566013; case 0x566020u: goto L_00566020; case 0x56602du: goto L_0056602d; case 0x56603au: goto L_0056603a; case 0x566047u: goto L_00566047; case 0x566054u: goto L_00566054; case 0x566060u: goto L_00566060; default: SAVEALL; call_ind(c, t_); return; } }
L_00565fdf:;
  /* 00565fdf mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 00565fe5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00565fe7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565fe8 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x565febu; SAVEALL; call_ind(c, t_); RETCHK(0x565febu, 0x565fe8u); LOADALL; }
  /* 00565feb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00565fec:;
  /* 00565fec mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 00565ff2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00565ff4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00565ff5 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x565ff8u; SAVEALL; call_ind(c, t_); RETCHK(0x565ff8u, 0x565ff5u); LOADALL; }
  /* 00565ff8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00565ff9:;
  /* 00565ff9 mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 00565fff mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00566001 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566002 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x566005u; SAVEALL; call_ind(c, t_); RETCHK(0x566005u, 0x566002u); LOADALL; }
  /* 00566005 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566006:;
  /* 00566006 mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 0056600c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056600e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056600f call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x566012u; SAVEALL; call_ind(c, t_); RETCHK(0x566012u, 0x56600fu); LOADALL; }
  /* 00566012 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566013:;
  /* 00566013 mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 00566019 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056601b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056601c call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56601fu; SAVEALL; call_ind(c, t_); RETCHK(0x56601fu, 0x56601cu); LOADALL; }
  /* 0056601f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566020:;
  /* 00566020 mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 00566026 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00566028 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566029 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56602cu; SAVEALL; call_ind(c, t_); RETCHK(0x56602cu, 0x566029u); LOADALL; }
  /* 0056602c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056602d:;
  /* 0056602d mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 00566033 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00566035 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566036 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x566039u; SAVEALL; call_ind(c, t_); RETCHK(0x566039u, 0x566036u); LOADALL; }
  /* 00566039 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056603a:;
  /* 0056603a mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 00566040 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00566042 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566043 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x566046u; SAVEALL; call_ind(c, t_); RETCHK(0x566046u, 0x566043u); LOADALL; }
  /* 00566046 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566047:;
  /* 00566047 mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 0056604d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056604f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566050 call dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x566053u; SAVEALL; call_ind(c, t_); RETCHK(0x566053u, 0x566050u); LOADALL; }
  /* 00566053 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566054:;
  /* 00566054 mov ecx, dword ptr [ecx + 0x8048] */ { const u32 m_ = (u32)(ecx + 0x8048u); ecx = (u32)(M32(m_)); }
  /* 0056605a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056605c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056605d call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x566060u; SAVEALL; call_ind(c, t_); RETCHK(0x566060u, 0x56605du); LOADALL; }
L_00566060:;
  /* 00566060 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00566100(CPU *c) {
  NATIVE_HOOK(0x566100u) REGS; LOADALL;
L_00566100:;
  /* 00566100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566103 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00566105 push 0x656fa8 */ { u32 v_ = 0x656fa8u; esp -= 4; M32(esp) = v_; }
  /* 0056610a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 0056610f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00566115 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566116 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056611d sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00566120 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566121 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566122 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566123 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00566126 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00566128 mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 0056612b mov eax, 0x2000 */ { eax = (u32)(0x2000u); }
  /* 00566130 sub eax, dword ptr [ebx + 0x8054] */ { const u32 m_ = (u32)(ebx + 0x8054u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00566136 jne 0x56614e */ if (!ZF_) goto L_0056614e;
  /* 00566138 mov dword ptr [ebx + 0x8054], 0 */ { const u32 m_ = (u32)(ebx + 0x8054u); M32(m_) = (u32)(0x0u); }
  /* 00566142 lea ecx, [ebx + 0x8058] */ ecx = (u32)((u32)(ebx + 0x8058u));
  /* 00566148 mov dword ptr [ebx + 0x8050], ecx */ { const u32 m_ = (u32)(ebx + 0x8050u); M32(m_) = (u32)(ecx); }
L_0056614e:;
  /* 0056614e mov eax, 0x2000 */ { eax = (u32)(0x2000u); }
  /* 00566153 mov edx, dword ptr [ebx + 0x8054] */ { const u32 m_ = (u32)(ebx + 0x8054u); edx = (u32)(M32(m_)); }
  /* 00566159 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056615b lea ecx, [edx + ebx + 0x8058] */ ecx = (u32)((u32)(edx + ebx + 0x8058u));
  /* 00566162 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00566164 call 0x563c30 */ esp -= 4; M32(esp) = 0x566169u; SAVEALL; F_00563c30(c); ABI_CHECK(0x563c30u, 0x566164u); RETCHK(0x566169u, 0x566164u); LOADALL;
  /* 00566169 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056616b jle 0x56627d */ if ((ZF_|LT_)) goto L_0056627d;
  /* 00566171 mov ecx, dword ptr [ebx + 0x8054] */ { const u32 m_ = (u32)(ebx + 0x8054u); ecx = (u32)(M32(m_)); }
  /* 00566177 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00566179 cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056617e ja 0x56618a */ if (!(CF_|ZF_)) goto L_0056618a;
  /* 00566180 mov dword ptr [ebx + 0x8054], eax */ { const u32 m_ = (u32)(ebx + 0x8054u); M32(m_) = (u32)(eax); }
  /* 00566186 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00566188 jmp 0x56618c */ goto L_0056618c;
L_0056618a:;
  /* 0056618a xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0056618c:;
  /* 0056618c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056618e jne 0x5661aa */ if (!ZF_) goto L_005661aa;
  /* 00566190 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00566192 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00566194 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00566196 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x566199u; SAVEALL; call_ind(c, t_); RETCHK(0x566199u, 0x566196u); LOADALL; }
  /* 00566199 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0056619c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005661a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005661a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005661a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005661a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005661a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005661a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005661aa:;
  /* 005661aa mov edx, dword ptr [ebx + 0x8050] */ { const u32 m_ = (u32)(ebx + 0x8050u); edx = (u32)(M32(m_)); }
  /* 005661b0 mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 005661b3 mov ecx, dword ptr [ebx + 0x8054] */ { const u32 m_ = (u32)(ebx + 0x8054u); ecx = (u32)(M32(m_)); }
  /* 005661b9 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 005661bc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005661c0:;
  /* 005661c0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005661c2 jbe 0x566229 */ if ((CF_|ZF_)) goto L_00566229;
  /* 005661c4 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 005661c7 cmp ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005661ca jb 0x566229 */ if (CF_) goto L_00566229;
  /* 005661cc movzx eax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M16(m_)); }
  /* 005661cf cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005661d1 ja 0x566229 */ if (!(CF_|ZF_)) goto L_00566229;
  /* 005661d3 lea edi, [eax - 2] */ edi = (u32)((u32)(eax + 0xfffffffeu));
  /* 005661d6 lea esi, [edx + 2] */ esi = (u32)((u32)(edx + 0x2u));
  /* 005661d9 call 0x565630 */ esp -= 4; M32(esp) = 0x5661deu; SAVEALL; F_00565630(c); ABI_CHECK(0x565630u, 0x5661d9u); RETCHK(0x5661deu, 0x5661d9u); LOADALL;
  /* 005661de mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005661e5 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005661e8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005661ea call 0x565fb0 */ esp -= 4; M32(esp) = 0x5661efu; SAVEALL; F_00565fb0(c); ABI_CHECK(0x565fb0u, 0x5661eau); RETCHK(0x5661efu, 0x5661eau); LOADALL;
  /* 005661ef mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005661f6 jmp 0x56620b */ goto L_0056620b;
L_0056620b:;
  /* 0056620b mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0056620e movzx ecx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M16(m_)); }
  /* 00566211 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00566213 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00566216 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00566219 movzx eax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M16(m_)); }
  /* 0056621c mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 0056621f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00566221 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 00566224 mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 00566227 jmp 0x5661c0 */ goto L_005661c0;
L_00566229:;
  /* 00566229 mov eax, dword ptr [ebx + 0x8054] */ { const u32 m_ = (u32)(ebx + 0x8054u); eax = (u32)(M32(m_)); }
  /* 0056622f sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00566231 mov ecx, dword ptr [ebx + 0x8054] */ { const u32 m_ = (u32)(ebx + 0x8054u); ecx = (u32)(M32(m_)); }
  /* 00566237 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566239 jb 0x566256 */ if (CF_) goto L_00566256;
  /* 0056623b mov dword ptr [ebx + 0x8054], 0 */ { const u32 m_ = (u32)(ebx + 0x8054u); M32(m_) = (u32)(0x0u); }
  /* 00566245 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00566248 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056624f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566250 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566251 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566252 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566254 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566255 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566256:;
  /* 00566256 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00566258 jbe 0x56627d */ if ((CF_|ZF_)) goto L_0056627d;
  /* 0056625a sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056625c mov dword ptr [ebx + 0x8054], ecx */ { const u32 m_ = (u32)(ebx + 0x8054u); M32(m_) = (u32)(ecx); }
  /* 00566262 lea esi, [ebx + eax + 0x8058] */ esi = (u32)((u32)(ebx + eax + 0x8058u));
  /* 00566269 lea edi, [ebx + 0x8058] */ edi = (u32)((u32)(ebx + 0x8058u));
  /* 0056626f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00566271 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00566274 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00566276 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00566278 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056627b rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_0056627d:;
  /* 0056627d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00566280 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00566287 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566288 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566289 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056628a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056628c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056628d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005661f8(CPU *c) {
  NATIVE_HOOK(0x5661f8u) REGS; LOADALL;
L_005661f8:;
  /* 005661f8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005661fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005661fe(CPU *c) {
  NATIVE_HOOK(0x5661feu) REGS; LOADALL;
  goto L_005661fe;
L_005661c0:;
  /* 005661c0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005661c2 jbe 0x566229 */ if ((CF_|ZF_)) goto L_00566229;
  /* 005661c4 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 005661c7 cmp ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005661ca jb 0x566229 */ if (CF_) goto L_00566229;
  /* 005661cc movzx eax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M16(m_)); }
  /* 005661cf cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005661d1 ja 0x566229 */ if (!(CF_|ZF_)) goto L_00566229;
  /* 005661d3 lea edi, [eax - 2] */ edi = (u32)((u32)(eax + 0xfffffffeu));
  /* 005661d6 lea esi, [edx + 2] */ esi = (u32)((u32)(edx + 0x2u));
  /* 005661d9 call 0x565630 */ esp -= 4; M32(esp) = 0x5661deu; SAVEALL; F_00565630(c); ABI_CHECK(0x565630u, 0x5661d9u); RETCHK(0x5661deu, 0x5661d9u); LOADALL;
  /* 005661de mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005661e5 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005661e8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005661ea call 0x565fb0 */ esp -= 4; M32(esp) = 0x5661efu; SAVEALL; F_00565fb0(c); ABI_CHECK(0x565fb0u, 0x5661eau); RETCHK(0x5661efu, 0x5661eau); LOADALL;
  /* 005661ef mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005661f6 jmp 0x56620b */ goto L_0056620b;
L_005661fe:;
  /* 005661fe mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 00566201 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00566208 mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
L_0056620b:;
  /* 0056620b mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0056620e movzx ecx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M16(m_)); }
  /* 00566211 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00566213 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00566216 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00566219 movzx eax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M16(m_)); }
  /* 0056621c mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 0056621f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00566221 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 00566224 mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 00566227 jmp 0x5661c0 */ goto L_005661c0;
L_00566229:;
  /* 00566229 mov eax, dword ptr [ebx + 0x8054] */ { const u32 m_ = (u32)(ebx + 0x8054u); eax = (u32)(M32(m_)); }
  /* 0056622f sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00566231 mov ecx, dword ptr [ebx + 0x8054] */ { const u32 m_ = (u32)(ebx + 0x8054u); ecx = (u32)(M32(m_)); }
  /* 00566237 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566239 jb 0x566256 */ if (CF_) goto L_00566256;
  /* 0056623b mov dword ptr [ebx + 0x8054], 0 */ { const u32 m_ = (u32)(ebx + 0x8054u); M32(m_) = (u32)(0x0u); }
  /* 00566245 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00566248 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056624f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566250 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566251 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566252 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566254 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566255 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566256:;
  /* 00566256 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00566258 jbe 0x56627d */ if ((CF_|ZF_)) goto L_0056627d;
  /* 0056625a sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056625c mov dword ptr [ebx + 0x8054], ecx */ { const u32 m_ = (u32)(ebx + 0x8054u); M32(m_) = (u32)(ecx); }
  /* 00566262 lea esi, [ebx + eax + 0x8058] */ esi = (u32)((u32)(ebx + eax + 0x8058u));
  /* 00566269 lea edi, [ebx + 0x8058] */ edi = (u32)((u32)(ebx + 0x8058u));
  /* 0056626f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00566271 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00566274 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00566276 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00566278 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056627b rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_0056627d:;
  /* 0056627d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00566280 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00566287 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566288 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566289 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056628a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056628c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056628d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00566290(CPU *c) {
  NATIVE_HOOK(0x566290u) REGS; LOADALL;
L_00566290:;
  /* 00566290 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00566293 jmp 0x566520 */ goto L_00566520;
L_00566520:;
  /* 00566520 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00566526 jmp 0x567db0 */ SAVEALL; F_00567db0(c); return;
}

void F_005662a0(CPU *c) {
  NATIVE_HOOK(0x5662a0u) REGS; LOADALL;
L_005662a0:;
  /* 005662a0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005662a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005662a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005662a4 mov dword ptr [edi], 0x656cdc */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x656cdcu); }
  /* 005662aa mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005662ad mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005662b0 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005662b3 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005662b6 mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005662b9 mov byte ptr [edi + 0x18], al */ { const u32 m_ = (u32)(edi + 0x18u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005662bc call dword ptr [0x62e160] */ { const u32 m_ = (u32)(0x62e160u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5662c2u; SAVEALL; call_ind(c, t_); RETCHK(0x5662c2u, 0x5662bcu); LOADALL; }
  /* 005662c2 mov esi, eax */ { esi = (u32)(eax); }
  /* 005662c4 call 0x563f80 */ esp -= 4; M32(esp) = 0x5662c9u; SAVEALL; F_00563f80(c); ABI_CHECK(0x563f80u, 0x5662c4u); RETCHK(0x5662c9u, 0x5662c4u); LOADALL;
  /* 005662c9 mov eax, edi */ { eax = (u32)(edi); }
  /* 005662cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005662cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005662d0(CPU *c) {
  NATIVE_HOOK(0x5662d0u) REGS; LOADALL;
L_005662d0:;
  /* 005662d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005662d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005662d3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005662d4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005662d6 call 0x5663d0 */ esp -= 4; M32(esp) = 0x5662dbu; SAVEALL; F_005663d0(c); ABI_CHECK(0x5663d0u, 0x5662d6u); RETCHK(0x5662dbu, 0x5662d6u); LOADALL;
  /* 005662db test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005662df je 0x5662ea */ if (ZF_) goto L_005662ea;
  /* 005662e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005662e2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5662e7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5662e2u); RETCHK(0x5662e7u, 0x5662e2u); LOADALL;
  /* 005662e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005662ea:;
  /* 005662ea mov eax, esi */ { eax = (u32)(esi); }
  /* 005662ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005662ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005662ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566300(CPU *c) {
  NATIVE_HOOK(0x566300u) REGS; LOADALL;
L_00566300:;
  /* 00566300 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00566303 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566304 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00566306 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566308 jne 0x5663b4 */ if (!ZF_) goto L_005663b4;
  /* 0056630e push 0xa07c */ { u32 v_ = 0xa07cu; esp -= 4; M32(esp) = v_; }
  /* 00566313 call 0x5fe934 */ esp -= 4; M32(esp) = 0x566318u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x566313u); RETCHK(0x566318u, 0x566313u); LOADALL;
  /* 00566318 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056631b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056631d je 0x566326 */ if (ZF_) goto L_00566326;
  /* 0056631f call 0x565f00 */ esp -= 4; M32(esp) = 0x566324u; SAVEALL; F_00565f00(c); ABI_CHECK(0x565f00u, 0x56631fu); RETCHK(0x566324u, 0x56631fu); LOADALL;
  /* 00566324 jmp 0x566328 */ goto L_00566328;
L_00566326:;
  /* 00566326 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00566328:;
  /* 00566328 push 0x8807c */ { u32 v_ = 0x8807cu; esp -= 4; M32(esp) = v_; }
  /* 0056632d mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00566330 call 0x5fe934 */ esp -= 4; M32(esp) = 0x566335u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x566330u); RETCHK(0x566335u, 0x566330u); LOADALL;
  /* 00566335 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00566338 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056633a je 0x566343 */ if (ZF_) goto L_00566343;
  /* 0056633c call 0x565370 */ esp -= 4; M32(esp) = 0x566341u; SAVEALL; F_00565370(c); ABI_CHECK(0x565370u, 0x56633cu); RETCHK(0x566341u, 0x56633cu); LOADALL;
  /* 00566341 jmp 0x566345 */ goto L_00566345;
L_00566343:;
  /* 00566343 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00566345:;
  /* 00566345 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00566348 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056634b push 0x3c */ { u32 v_ = 0x3cu; esp -= 4; M32(esp) = v_; }
  /* 0056634d mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00566350 call 0x5fe934 */ esp -= 4; M32(esp) = 0x566355u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x566350u); RETCHK(0x566355u, 0x566350u); LOADALL;
  /* 00566355 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00566358 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056635a je 0x56637a */ if (ZF_) goto L_0056637a;
  /* 0056635c mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056635f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00566361 mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 00566366 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00566369 mov dword ptr [eax + 0x18], ebx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0056636c mov byte ptr [eax + 8], bl */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056636f mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00566372 mov dword ptr [eax + 0x34], ebx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ebx); }
  /* 00566375 mov byte ptr [eax + 0x24], bl */ { const u32 m_ = (u32)(eax + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00566378 jmp 0x56637c */ goto L_0056637c;
L_0056637a:;
  /* 0056637a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0056637c:;
  /* 0056637c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056637d push 0x12038 */ { u32 v_ = 0x12038u; esp -= 4; M32(esp) = v_; }
  /* 00566382 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00566385 call 0x5fe934 */ esp -= 4; M32(esp) = 0x56638au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x566385u); RETCHK(0x56638au, 0x566385u); LOADALL;
  /* 0056638a mov esi, eax */ { esi = (u32)(eax); }
  /* 0056638c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056638f cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566391 je 0x5663ae */ if (ZF_) goto L_005663ae;
  /* 00566393 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00566396 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 00566398 lea edx, [esi + 8] */ edx = (u32)((u32)(esi + 0x8u));
  /* 0056639b mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0056639e call 0x5664f0 */ esp -= 4; M32(esp) = 0x5663a3u; SAVEALL; F_005664f0(c); ABI_CHECK(0x5664f0u, 0x56639eu); RETCHK(0x5663a3u, 0x56639eu); LOADALL;
  /* 005663a3 call 0x567ba0 */ esp -= 4; M32(esp) = 0x5663a8u; SAVEALL; F_00567ba0(c); ABI_CHECK(0x567ba0u, 0x5663a3u); RETCHK(0x5663a8u, 0x5663a3u); LOADALL;
  /* 005663a8 mov dword ptr [edi + 0x14], esi */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(esi); }
  /* 005663ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005663ac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005663ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005663ae:;
  /* 005663ae xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005663b0 mov dword ptr [edi + 0x14], esi */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(esi); }
  /* 005663b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005663b4:;
  /* 005663b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005663b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005663c0(CPU *c) {
  NATIVE_HOOK(0x5663c0u) REGS; LOADALL;
L_005663c0:;
  /* 005663c0 mov byte ptr [eax + 0x18], 1 */ { const u32 m_ = (u32)(eax + 0x18u); M8(m_) = (u8)(0x1u); }
  /* 005663c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005663d0(CPU *c) {
  NATIVE_HOOK(0x5663d0u) REGS; LOADALL;
L_005663d0:;
  /* 005663d0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005663d1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005663d3 mov dword ptr [edi], 0x656cdc */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x656cdcu); }
  /* 005663d9 call 0x564010 */ esp -= 4; M32(esp) = 0x5663deu; SAVEALL; F_00564010(c); ABI_CHECK(0x564010u, 0x5663d9u); RETCHK(0x5663deu, 0x5663d9u); LOADALL;
  /* 005663de mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005663e1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005663e3 je 0x56643c */ if (ZF_) goto L_0056643c;
  /* 005663e5 call 0x5659a0 */ esp -= 4; M32(esp) = 0x5663eau; SAVEALL; F_005659a0(c); ABI_CHECK(0x5659a0u, 0x5663e5u); RETCHK(0x5663eau, 0x5663e5u); LOADALL;
  /* 005663ea mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005663ed call 0x563b10 */ esp -= 4; M32(esp) = 0x5663f2u; SAVEALL; F_00563b10(c); ABI_CHECK(0x563b10u, 0x5663edu); RETCHK(0x5663f2u, 0x5663edu); LOADALL;
  /* 005663f2 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005663f5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005663f7 je 0x566400 */ if (ZF_) goto L_00566400;
  /* 005663f9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005663fb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005663fd call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x566400u; SAVEALL; call_ind(c, t_); RETCHK(0x566400u, 0x5663fdu); LOADALL; }
L_00566400:;
  /* 00566400 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00566403 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00566405 je 0x56640e */ if (ZF_) goto L_0056640e;
  /* 00566407 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00566409 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056640b call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56640eu; SAVEALL; call_ind(c, t_); RETCHK(0x56640eu, 0x56640bu); LOADALL; }
L_0056640e:;
  /* 0056640e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056640f mov esi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); esi = (u32)(M32(m_)); }
  /* 00566412 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00566414 je 0x566424 */ if (ZF_) goto L_00566424;
  /* 00566416 call 0x4a6600 */ esp -= 4; M32(esp) = 0x56641bu; SAVEALL; F_004a6600(c); ABI_CHECK(0x4a6600u, 0x566416u); RETCHK(0x56641bu, 0x566416u); LOADALL;
  /* 0056641b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056641c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x566421u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56641cu); RETCHK(0x566421u, 0x56641cu); LOADALL;
  /* 00566421 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00566424:;
  /* 00566424 mov edi, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edi = (u32)(M32(m_)); }
  /* 00566427 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00566429 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056642a je 0x56643c */ if (ZF_) goto L_0056643c;
  /* 0056642c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056642e call 0x566290 */ esp -= 4; M32(esp) = 0x566433u; SAVEALL; F_00566290(c); ABI_CHECK(0x566290u, 0x56642eu); RETCHK(0x566433u, 0x56642eu); LOADALL;
  /* 00566433 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566434 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x566439u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x566434u); RETCHK(0x566439u, 0x566434u); LOADALL;
  /* 00566439 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056643c:;
  /* 0056643c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056643d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00566440(CPU *c) {
  NATIVE_HOOK(0x566440u) REGS; LOADALL;
L_00566440:;
  /* 00566440 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 00566446 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566447 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566448 lea edi, [ecx + 2] */ edi = (u32)((u32)(ecx + 0x2u));
  /* 0056644b cmp edi, 0x2020 */ { u32 a_ = edi, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566451 mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 00566456 ja 0x566465 */ if (!(CF_|ZF_)) goto L_00566465;
  /* 00566458 mov di, word ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0056645b mov word ptr [ecx + eax], di */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0056645f add dword ptr [eax + 0x2020], esi */ { const u32 m_ = (u32)(eax + 0x2020u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_00566465:;
  /* 00566465 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 0056646b lea edi, [ecx + 2] */ edi = (u32)((u32)(ecx + 0x2u));
  /* 0056646e cmp edi, 0x2020 */ { u32 a_ = edi, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566474 ja 0x566484 */ if (!(CF_|ZF_)) goto L_00566484;
  /* 00566476 mov di, word ptr [edx + 2] */ { const u32 m_ = (u32)(edx + 0x2u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0056647a mov word ptr [ecx + eax], di */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0056647e add dword ptr [eax + 0x2020], esi */ { const u32 m_ = (u32)(eax + 0x2020u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_00566484:;
  /* 00566484 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 0056648a lea edi, [ecx + 2] */ edi = (u32)((u32)(ecx + 0x2u));
  /* 0056648d cmp edi, 0x2020 */ { u32 a_ = edi, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566493 ja 0x5664a3 */ if (!(CF_|ZF_)) goto L_005664a3;
  /* 00566495 mov di, word ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00566499 mov word ptr [ecx + eax], di */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0056649d add dword ptr [eax + 0x2020], esi */ { const u32 m_ = (u32)(eax + 0x2020u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_005664a3:;
  /* 005664a3 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 005664a9 lea edi, [ecx + 4] */ edi = (u32)((u32)(ecx + 0x4u));
  /* 005664ac cmp edi, 0x2020 */ { u32 a_ = edi, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005664b2 ja 0x5664c1 */ if (!(CF_|ZF_)) goto L_005664c1;
  /* 005664b4 mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005664b7 mov dword ptr [ecx + eax], edi */ { const u32 m_ = (u32)(ecx + eax); M32(m_) = (u32)(edi); }
  /* 005664ba add dword ptr [eax + 0x2020], 4 */ { const u32 m_ = (u32)(eax + 0x2020u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_005664c1:;
  /* 005664c1 mov ecx, dword ptr [eax + 0x2020] */ { const u32 m_ = (u32)(eax + 0x2020u); ecx = (u32)(M32(m_)); }
  /* 005664c7 lea edi, [ecx + 2] */ edi = (u32)((u32)(ecx + 0x2u));
  /* 005664ca cmp edi, 0x2020 */ { u32 a_ = edi, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005664d0 ja 0x5664e0 */ if (!(CF_|ZF_)) goto L_005664e0;
  /* 005664d2 mov dx, word ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005664d6 mov word ptr [ecx + eax], dx */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005664da add dword ptr [eax + 0x2020], esi */ { const u32 m_ = (u32)(eax + 0x2020u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_005664e0:;
  /* 005664e0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005664e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005664e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005664f0(CPU *c) {
  NATIVE_HOOK(0x5664f0u) REGS; LOADALL;
L_005664f0:;
  /* 005664f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005664f1 lea eax, [edx + 0x10000] */ eax = (u32)((u32)(edx + 0x10000u));
  /* 005664f7 call 0x567d60 */ esp -= 4; M32(esp) = 0x5664fcu; SAVEALL; F_00567d60(c); ABI_CHECK(0x567d60u, 0x5664f7u); RETCHK(0x5664fcu, 0x5664f7u); LOADALL;
  /* 005664fc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005664fe mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 00566503 mov edi, edx */ { edi = (u32)(edx); }
  /* 00566505 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00566507 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 0056650c lea edi, [edx + 0x8000] */ edi = (u32)((u32)(edx + 0x8000u));
  /* 00566512 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00566514 mov eax, edx */ { eax = (u32)(edx); }
  /* 00566516 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566517 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00566530(CPU *c) {
  NATIVE_HOOK(0x566530u) REGS; LOADALL;
L_00566530:;
  /* 00566530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566533 lea eax, [esi + 0x10000] */ eax = (u32)((u32)(esi + 0x10000u));
  /* 00566539 call 0x568120 */ esp -= 4; M32(esp) = 0x56653eu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x566539u); RETCHK(0x56653eu, 0x566539u); LOADALL;
  /* 0056653e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00566541 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00566543 call 0x566590 */ esp -= 4; M32(esp) = 0x566548u; SAVEALL; F_00566590(c); ABI_CHECK(0x566590u, 0x566543u); RETCHK(0x566548u, 0x566543u); LOADALL;
  /* 00566548 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056654a jne 0x566553 */ if (!ZF_) goto L_00566553;
  /* 0056654c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056654f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566550 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00566553:;
  /* 00566553 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00566556 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566557 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00566559 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x56655bu; SAVEALL; call_ind(c, t_); RETCHK(0x56655bu, 0x566559u); LOADALL; }
  /* 0056655b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056655c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}
