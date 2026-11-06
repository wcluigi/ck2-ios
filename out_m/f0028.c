#include "funcs.h"

void F_00518130(CPU *c) {
  NATIVE_HOOK(0x518130u) REGS; LOADALL;
L_00518130:;
  /* 00518130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518133 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518134 mov esi, eax */ { esi = (u32)(eax); }
  /* 00518136 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518139 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051813b je 0x518149 */ if (ZF_) goto L_00518149;
  /* 0051813d lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00518140 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518141 lea eax, [esi + 0x18] */ eax = (u32)((u32)(esi + 0x18u));
  /* 00518144 call 0x4d1510 */ esp -= 4; M32(esp) = 0x518149u; SAVEALL; F_004d1510(c); ABI_CHECK(0x4d1510u, 0x518144u); RETCHK(0x518149u, 0x518144u); LOADALL;
L_00518149:;
  /* 00518149 call 0x518010 */ esp -= 4; M32(esp) = 0x51814eu; SAVEALL; F_00518010(c); ABI_CHECK(0x518010u, 0x518149u); RETCHK(0x51814eu, 0x518149u); LOADALL;
  /* 0051814e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051814f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518150 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00518160(CPU *c) {
  NATIVE_HOOK(0x518160u) REGS; LOADALL;
L_00518160:;
  /* 00518160 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518162 je 0x518167 */ if (ZF_) goto L_00518167;
  /* 00518164 mov dword ptr [ecx + 0x2c], eax */ { const u32 m_ = (u32)(ecx + 0x2cu); M32(m_) = (u32)(eax); }
L_00518167:;
  /* 00518167 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518170(CPU *c) {
  NATIVE_HOOK(0x518170u) REGS; LOADALL;
L_00518170:;
  /* 00518170 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 00518173 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518180(CPU *c) {
  NATIVE_HOOK(0x518180u) REGS; LOADALL;
L_00518180:;
  /* 00518180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518183 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518184 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518187 add eax, 0xcc */ { u32 a_ = eax, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051818c call 0x518d10 */ esp -= 4; M32(esp) = 0x518191u; SAVEALL; F_00518d10(c); ABI_CHECK(0x518d10u, 0x51818cu); RETCHK(0x518191u, 0x51818cu); LOADALL;
  /* 00518191 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518192 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005181a0(CPU *c) {
  NATIVE_HOOK(0x5181a0u) REGS; LOADALL;
L_005181a0:;
  /* 005181a0 mov eax, dword ptr [ecx + 0xdc] */ { const u32 m_ = (u32)(ecx + 0xdcu); eax = (u32)(M32(m_)); }
  /* 005181a6 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005181a9 jbe 0x5181c2 */ if ((CF_|ZF_)) goto L_005181c2;
  /* 005181ab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005181ad je 0x5181c2 */ if (ZF_) goto L_005181c2;
  /* 005181af dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005181b0 mov dword ptr [ecx + 0xdc], eax */ { const u32 m_ = (u32)(ecx + 0xdcu); M32(m_) = (u32)(eax); }
  /* 005181b6 jne 0x5181c2 */ if (!ZF_) goto L_005181c2;
  /* 005181b8 mov dword ptr [ecx + 0xd8], 0 */ { const u32 m_ = (u32)(ecx + 0xd8u); M32(m_) = (u32)(0x0u); }
L_005181c2:;
  /* 005181c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005181d0(CPU *c) {
  NATIVE_HOOK(0x5181d0u) REGS; LOADALL;
L_005181d0:;
  /* 005181d0 mov ecx, dword ptr [eax + 0xdc] */ { const u32 m_ = (u32)(eax + 0xdcu); ecx = (u32)(M32(m_)); }
  /* 005181d6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005181d8 jbe 0x51820a */ if ((CF_|ZF_)) goto L_0051820a;
  /* 005181da mov ecx, dword ptr [eax + 0xdc] */ { const u32 m_ = (u32)(eax + 0xdcu); ecx = (u32)(M32(m_)); }
  /* 005181e0 add eax, 0xcc */ { u32 a_ = eax, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005181e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005181e6 add ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005181e9 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005181ea mov edx, eax */ { edx = (u32)(eax); }
  /* 005181ec mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005181ee shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005181f0 lea esi, [eax + eax] */ esi = (u32)((u32)(eax + eax));
  /* 005181f3 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005181f5 mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 005181f8 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005181fa ja 0x5181fe */ if (!(CF_|ZF_)) goto L_005181fe;
  /* 005181fc sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_005181fe:;
  /* 005181fe mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00518201 mov eax, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 00518204 mov eax, dword ptr [eax + ecx*8 + 4] */ { const u32 m_ = (u32)(eax + ecx * 8u + 0x4u); eax = (u32)(M32(m_)); }
  /* 00518208 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00518209 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051820a:;
  /* 0051820a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051820c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518210(CPU *c) {
  NATIVE_HOOK(0x518210u) REGS; LOADALL;
L_00518210:;
  /* 00518210 add eax, 0x38 */ { u32 a_ = eax, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518213 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518220(CPU *c) {
  NATIVE_HOOK(0x518220u) REGS; LOADALL;
L_00518220:;
  /* 00518220 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518222 jl 0x518231 */ if (LT_) goto L_00518231;
  /* 00518224 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518227 jge 0x518231 */ if (!LT_) goto L_00518231;
  /* 00518229 mov eax, dword ptr [ecx + eax*4 + 0x128] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x128u); eax = (u32)(M32(m_)); }
  /* 00518230 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00518231:;
  /* 00518231 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00518233 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518240(CPU *c) {
  NATIVE_HOOK(0x518240u) REGS; LOADALL;
L_00518240:;
  /* 00518240 mov eax, dword ptr [eax + 0xe0] */ { const u32 m_ = (u32)(eax + 0xe0u); eax = (u32)(M32(m_)); }
  /* 00518246 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518250(CPU *c) {
  NATIVE_HOOK(0x518250u) REGS; LOADALL;
L_00518250:;
  /* 00518250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518253 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00518259 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051825b push 0x6240a8 */ { u32 v_ = 0x6240a8u; esp -= 4; M32(esp) = v_; }
  /* 00518260 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518261 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00518268 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518269 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051826b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051826d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00518274 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00518277 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0051827c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051827d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051827f lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 00518282 call 0x405de0 */ esp -= 4; M32(esp) = 0x518287u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x518282u); RETCHK(0x518287u, 0x518282u); LOADALL;
  /* 00518287 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518289 jne 0x51829d */ if (!ZF_) goto L_0051829d;
  /* 0051828b cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051828f mov esi, dword ptr [esi + 0xe0] */ { const u32 m_ = (u32)(esi + 0xe0u); esi = (u32)(M32(m_)); }
  /* 00518295 jb 0x518301 */ if (CF_) goto L_00518301;
  /* 00518297 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051829a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051829b jmp 0x5182f9 */ goto L_005182f9;
L_0051829d:;
  /* 0051829d mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005182a0 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005182a2 push 0x6427c4 */ { u32 v_ = 0x6427c4u; esp -= 4; M32(esp) = v_; }
  /* 005182a7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005182a8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005182aa lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 005182ad call 0x405de0 */ esp -= 4; M32(esp) = 0x5182b2u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x5182adu); RETCHK(0x5182b2u, 0x5182adu); LOADALL;
  /* 005182b2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005182b4 jne 0x5182be */ if (!ZF_) goto L_005182be;
  /* 005182b6 mov esi, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); esi = (u32)(M32(m_)); }
  /* 005182bc jmp 0x5182ef */ goto L_005182ef;
L_005182be:;
  /* 005182be mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005182c1 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005182c3 push 0x64cfac */ { u32 v_ = 0x64cfacu; esp -= 4; M32(esp) = v_; }
  /* 005182c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005182c9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005182cb lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 005182ce call 0x405de0 */ esp -= 4; M32(esp) = 0x5182d3u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x5182ceu); RETCHK(0x5182d3u, 0x5182ceu); LOADALL;
  /* 005182d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005182d5 jne 0x5182e9 */ if (!ZF_) goto L_005182e9;
  /* 005182d7 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005182db mov esi, dword ptr [esi + 0xe8] */ { const u32 m_ = (u32)(esi + 0xe8u); esi = (u32)(M32(m_)); }
  /* 005182e1 jb 0x518301 */ if (CF_) goto L_00518301;
  /* 005182e3 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005182e6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005182e7 jmp 0x5182f9 */ goto L_005182f9;
L_005182e9:;
  /* 005182e9 mov esi, dword ptr [esi + 0xe0] */ { const u32 m_ = (u32)(esi + 0xe0u); esi = (u32)(M32(m_)); }
L_005182ef:;
  /* 005182ef cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005182f3 jb 0x518301 */ if (CF_) goto L_00518301;
  /* 005182f5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005182f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_005182f9:;
  /* 005182f9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5182feu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5182f9u); RETCHK(0x5182feu, 0x5182f9u); LOADALL;
  /* 005182fe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00518301:;
  /* 00518301 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00518304 mov eax, esi */ { eax = (u32)(esi); }
  /* 00518306 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051830d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051830e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518310 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518311 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00518320(CPU *c) {
  NATIVE_HOOK(0x518320u) REGS; LOADALL;
L_00518320:;
  /* 00518320 mov eax, dword ptr [eax + 0xec] */ { const u32 m_ = (u32)(eax + 0xecu); eax = (u32)(M32(m_)); }
  /* 00518326 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518330(CPU *c) {
  NATIVE_HOOK(0x518330u) REGS; LOADALL;
L_00518330:;
  /* 00518330 mov eax, dword ptr [eax + 0xf0] */ { const u32 m_ = (u32)(eax + 0xf0u); eax = (u32)(M32(m_)); }
  /* 00518336 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518340(CPU *c) {
  NATIVE_HOOK(0x518340u) REGS; LOADALL;
L_00518340:;
  /* 00518340 mov eax, dword ptr [eax + 0xf4] */ { const u32 m_ = (u32)(eax + 0xf4u); eax = (u32)(M32(m_)); }
  /* 00518346 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518350(CPU *c) {
  NATIVE_HOOK(0x518350u) REGS; LOADALL;
L_00518350:;
  /* 00518350 mov eax, dword ptr [eax + 0xf8] */ { const u32 m_ = (u32)(eax + 0xf8u); eax = (u32)(M32(m_)); }
  /* 00518356 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518360(CPU *c) {
  NATIVE_HOOK(0x518360u) REGS; LOADALL;
L_00518360:;
  /* 00518360 mov eax, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); eax = (u32)(M32(m_)); }
  /* 00518366 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518370(CPU *c) {
  NATIVE_HOOK(0x518370u) REGS; LOADALL;
L_00518370:;
  /* 00518370 mov eax, dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); eax = (u32)(M32(m_)); }
  /* 00518376 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518380(CPU *c) {
  NATIVE_HOOK(0x518380u) REGS; LOADALL;
L_00518380:;
  /* 00518380 mov eax, dword ptr [eax + 0x104] */ { const u32 m_ = (u32)(eax + 0x104u); eax = (u32)(M32(m_)); }
  /* 00518386 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518390(CPU *c) {
  NATIVE_HOOK(0x518390u) REGS; LOADALL;
L_00518390:;
  /* 00518390 mov eax, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); eax = (u32)(M32(m_)); }
  /* 00518396 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005183a0(CPU *c) {
  NATIVE_HOOK(0x5183a0u) REGS; LOADALL;
L_005183a0:;
  /* 005183a0 add eax, 0x10c */ { u32 a_ = eax, b_ = 0x10cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005183a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005183b0(CPU *c) {
  NATIVE_HOOK(0x5183b0u) REGS; LOADALL;
L_005183b0:;
  /* 005183b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005183b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005183b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005183b4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005183b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005183b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005183b9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005183bb mov esi, dword ptr [edi + 0x134] */ { const u32 m_ = (u32)(edi + 0x134u); esi = (u32)(M32(m_)); }
  /* 005183c1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005183c3 je 0x5183db */ if (ZF_) goto L_005183db;
  /* 005183c5 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005183c8 call 0x61b154 */ esp -= 4; M32(esp) = 0x5183cdu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5183c8u); RETCHK(0x5183cdu, 0x5183c8u); LOADALL;
  /* 005183cd fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 005183cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005183d0 call 0x61b154 */ esp -= 4; M32(esp) = 0x5183d5u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5183d0u); RETCHK(0x5183d5u, 0x5183d0u); LOADALL;
  /* 005183d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005183d6 call 0x51c690 */ esp -= 4; M32(esp) = 0x5183dbu; SAVEALL; F_0051c690(c); ABI_CHECK(0x51c690u, 0x5183d6u); RETCHK(0x5183dbu, 0x5183d6u); LOADALL;
L_005183db:;
  /* 005183db mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005183de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005183e0 je 0x5183ee */ if (ZF_) goto L_005183ee;
  /* 005183e2 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005183e5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005183e7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005183e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005183ea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005183eb call dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5183eeu; SAVEALL; call_ind(c, t_); RETCHK(0x5183eeu, 0x5183ebu); LOADALL; }
L_005183ee:;
  /* 005183ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005183ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005183f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005183f1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005183f2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00518400(CPU *c) {
  NATIVE_HOOK(0x518400u) REGS; LOADALL;
L_00518400:;
  /* 00518400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518403 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518406 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518408 je 0x518412 */ if (ZF_) goto L_00518412;
  /* 0051840a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051840c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051840e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051840f jmp dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00518412:;
  /* 00518412 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518413 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00518420(CPU *c) {
  NATIVE_HOOK(0x518420u) REGS; LOADALL;
L_00518420:;
  /* 00518420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518423 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518424 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00518426 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518429 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051842b je 0x518450 */ if (ZF_) goto L_00518450;
  /* 0051842d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00518430 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00518431 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00518434 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00518436 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00518438 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00518439 call dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51843cu; SAVEALL; call_ind(c, t_); RETCHK(0x51843cu, 0x518439u); LOADALL; }
  /* 0051843c mov eax, dword ptr [esi + 0x134] */ { const u32 m_ = (u32)(esi + 0x134u); eax = (u32)(M32(m_)); }
  /* 00518442 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518444 je 0x518450 */ if (ZF_) goto L_00518450;
  /* 00518446 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0051844b call 0x51c650 */ esp -= 4; M32(esp) = 0x518450u; SAVEALL; F_0051c650(c); ABI_CHECK(0x51c650u, 0x51844bu); RETCHK(0x518450u, 0x51844bu); LOADALL;
L_00518450:;
  /* 00518450 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00518451 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518452 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00518460(CPU *c) {
  NATIVE_HOOK(0x518460u) REGS; LOADALL;
L_00518460:;
  /* 00518460 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518461 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518463 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518464 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00518466 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518469 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051846b je 0x51848d */ if (ZF_) goto L_0051848d;
  /* 0051846d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00518470 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00518471 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00518474 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00518476 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00518478 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00518479 call dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51847cu; SAVEALL; call_ind(c, t_); RETCHK(0x51847cu, 0x518479u); LOADALL; }
  /* 0051847c mov eax, dword ptr [esi + 0x134] */ { const u32 m_ = (u32)(esi + 0x134u); eax = (u32)(M32(m_)); }
  /* 00518482 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518484 je 0x51848d */ if (ZF_) goto L_0051848d;
  /* 00518486 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00518488 call 0x51c650 */ esp -= 4; M32(esp) = 0x51848du; SAVEALL; F_0051c650(c); ABI_CHECK(0x51c650u, 0x518488u); RETCHK(0x51848du, 0x518488u); LOADALL;
L_0051848d:;
  /* 0051848d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051848e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051848f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005184a0(CPU *c) {
  NATIVE_HOOK(0x5184a0u) REGS; LOADALL;
L_005184a0:;
  /* 005184a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005184a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005184a3 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005184a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005184a8 je 0x5184b5 */ if (ZF_) goto L_005184b5;
  /* 005184aa mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005184ac mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005184ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005184af jmp dword ptr [eax + 0x9c] */ { const u32 m_ = (u32)(eax + 0x9cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005184b5:;
  /* 005184b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005184b6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005184c0(CPU *c) {
  NATIVE_HOOK(0x5184c0u) REGS; LOADALL;
L_005184c0:;
  /* 005184c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005184c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005184c3 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005184c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005184c8 je 0x5184d5 */ if (ZF_) goto L_005184d5;
  /* 005184ca mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005184cc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005184ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005184cf jmp dword ptr [eax + 0xb4] */ { const u32 m_ = (u32)(eax + 0xb4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005184d5:;
  /* 005184d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005184d6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005184e0(CPU *c) {
  NATIVE_HOOK(0x5184e0u) REGS; LOADALL;
L_005184e0:;
  /* 005184e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005184e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005184e3 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005184e6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005184e8 je 0x5184f2 */ if (ZF_) goto L_005184f2;
  /* 005184ea mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005184ec mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005184ee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005184ef jmp dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005184f2:;
  /* 005184f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005184f3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00518500(CPU *c) {
  NATIVE_HOOK(0x518500u) REGS; LOADALL;
L_00518500:;
  /* 00518500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518503 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518506 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518508 je 0x518512 */ if (ZF_) goto L_00518512;
  /* 0051850a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051850c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051850e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051850f jmp dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00518512:;
  /* 00518512 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518513 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00518520(CPU *c) {
  NATIVE_HOOK(0x518520u) REGS; LOADALL;
L_00518520:;
  /* 00518520 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518521 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518523 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518526 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518528 je 0x518535 */ if (ZF_) goto L_00518535;
  /* 0051852a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051852c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051852e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051852f jmp dword ptr [eax + 0xb8] */ { const u32 m_ = (u32)(eax + 0xb8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00518535:;
  /* 00518535 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518536 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00518540(CPU *c) {
  NATIVE_HOOK(0x518540u) REGS; LOADALL;
L_00518540:;
  /* 00518540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518543 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518546 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518548 je 0x518552 */ if (ZF_) goto L_00518552;
  /* 0051854a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051854c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051854e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051854f jmp dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00518552:;
  /* 00518552 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00518554 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518555 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00518560(CPU *c) {
  NATIVE_HOOK(0x518560u) REGS; LOADALL;
L_00518560:;
  /* 00518560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518563 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518566 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518568 je 0x518575 */ if (ZF_) goto L_00518575;
  /* 0051856a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051856c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051856e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051856f jmp dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00518575:;
  /* 00518575 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518576 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00518580(CPU *c) {
  NATIVE_HOOK(0x518580u) REGS; LOADALL;
L_00518580:;
  /* 00518580 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518581 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518583 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518586 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518588 je 0x518595 */ if (ZF_) goto L_00518595;
  /* 0051858a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051858c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051858e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051858f jmp dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00518595:;
  /* 00518595 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518596 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005185a0(CPU *c) {
  NATIVE_HOOK(0x5185a0u) REGS; LOADALL;
L_005185a0:;
  /* 005185a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005185a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005185a3 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005185a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005185a8 je 0x5185b5 */ if (ZF_) goto L_005185b5;
  /* 005185aa mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005185ac mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005185ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005185af jmp dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005185b5:;
  /* 005185b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005185b6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005185c0(CPU *c) {
  NATIVE_HOOK(0x5185c0u) REGS; LOADALL;
L_005185c0:;
  /* 005185c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005185c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005185c3 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005185c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005185c8 je 0x5185d5 */ if (ZF_) goto L_005185d5;
  /* 005185ca mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005185cc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005185ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005185cf jmp dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005185d5:;
  /* 005185d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005185d6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005185e0(CPU *c) {
  NATIVE_HOOK(0x5185e0u) REGS; LOADALL;
L_005185e0:;
  /* 005185e0 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005185e3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005185e5 je 0x5185f1 */ if (ZF_) goto L_005185f1;
  /* 005185e7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005185e9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005185eb jmp dword ptr [eax + 0x90] */ { const u32 m_ = (u32)(eax + 0x90u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005185f1:;
  /* 005185f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518600(CPU *c) {
  NATIVE_HOOK(0x518600u) REGS; LOADALL;
L_00518600:;
  /* 00518600 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518603 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518605 je 0x518611 */ if (ZF_) goto L_00518611;
  /* 00518607 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00518609 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051860b jmp dword ptr [eax + 0x94] */ { const u32 m_ = (u32)(eax + 0x94u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00518611:;
  /* 00518611 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518620(CPU *c) {
  NATIVE_HOOK(0x518620u) REGS; LOADALL;
L_00518620:;
  /* 00518620 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00518623 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518625 je 0x518631 */ if (ZF_) goto L_00518631;
  /* 00518627 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00518629 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051862b jmp dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00518631:;
  /* 00518631 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518640(CPU *c) {
  NATIVE_HOOK(0x518640u) REGS; LOADALL;
L_00518640:;
  /* 00518640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518643 mov eax, dword ptr [ecx + 0x14c] */ { const u32 m_ = (u32)(ecx + 0x14cu); eax = (u32)(M32(m_)); }
  /* 00518649 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051864b je 0x518656 */ if (ZF_) goto L_00518656;
  /* 0051864d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00518650 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00518651 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x518653u; SAVEALL; call_ind(c, t_); RETCHK(0x518653u, 0x518651u); LOADALL; }
  /* 00518653 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00518656:;
  /* 00518656 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518657 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00518660(CPU *c) {
  NATIVE_HOOK(0x518660u) REGS; LOADALL;
L_00518660:;
  /* 00518660 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518661 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518663 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518666 mov edx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00518669 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051866b jne 0x518673 */ if (!ZF_) goto L_00518673;
  /* 0051866d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0051866f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518671 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518672 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00518673:;
  /* 00518673 cmp ecx, 0x203 */ { u32 a_ = ecx, b_ = 0x203u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518679 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051867a ja 0x518884 */ if (!(CF_|ZF_)) goto L_00518884;
  /* 00518680 je 0x51884e */ if (ZF_) goto L_0051884e;
  /* 00518686 cmp ecx, 0x102 */ { u32 a_ = ecx, b_ = 0x102u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051868c ja 0x518776 */ if (!(CF_|ZF_)) goto L_00518776;
  /* 00518692 je 0x518757 */ if (ZF_) goto L_00518757;
  /* 00518698 cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051869e ja 0x51870c */ if (!(CF_|ZF_)) goto L_0051870c;
  /* 005186a0 je 0x5186ce */ if (ZF_) goto L_005186ce;
  /* 005186a2 sub ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005186a5 je 0x5186bf */ if (ZF_) goto L_005186bf;
  /* 005186a7 sub ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005186aa jne 0x518969 */ if (!ZF_) goto L_00518969;
  /* 005186b0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005186b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005186b3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005186b5 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5186b8u; SAVEALL; call_ind(c, t_); RETCHK(0x5186b8u, 0x5186b5u); LOADALL; }
  /* 005186b8 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005186ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005186bb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005186bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005186be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005186bf:;
  /* 005186bf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005186c1 call dword ptr [0x62e51c] */ { const u32 m_ = (u32)(0x62e51cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5186c7u; SAVEALL; call_ind(c, t_); RETCHK(0x5186c7u, 0x5186c1u); LOADALL; }
  /* 005186c7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005186c9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005186ca mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005186cc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005186cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005186ce:;
  /* 005186ce cmp edi, 0xd8 */ { u32 a_ = edi, b_ = 0xd8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005186d4 jne 0x5186ee */ if (!ZF_) goto L_005186ee;
  /* 005186d6 mov edx, dword ptr [esi + 0x130] */ { const u32 m_ = (u32)(esi + 0x130u); edx = (u32)(M32(m_)); }
  /* 005186dc sar eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005186df and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005186e2 call 0x5326c0 */ esp -= 4; M32(esp) = 0x5186e7u; SAVEALL; F_005326c0(c); ABI_CHECK(0x5326c0u, 0x5186e2u); RETCHK(0x5186e7u, 0x5186e2u); LOADALL;
  /* 005186e7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005186e9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005186ea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005186ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005186ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005186ee:;
  /* 005186ee mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005186f0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005186f2 shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005186f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005186f6 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 005186f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005186fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005186fb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005186fd mov dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x1u); }
  /* 00518704 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x518707u; SAVEALL; call_ind(c, t_); RETCHK(0x518707u, 0x518704u); LOADALL; }
  /* 00518707 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518708 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051870a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051870b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051870c:;
  /* 0051870c cmp ecx, 0x101 */ { u32 a_ = ecx, b_ = 0x101u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518712 jne 0x518969 */ if (!ZF_) goto L_00518969;
  /* 00518718 cmp edi, 0xd8 */ { u32 a_ = edi, b_ = 0xd8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051871e jne 0x518738 */ if (!ZF_) goto L_00518738;
  /* 00518720 mov edx, dword ptr [esi + 0x130] */ { const u32 m_ = (u32)(esi + 0x130u); edx = (u32)(M32(m_)); }
  /* 00518726 sar eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00518729 and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051872c call 0x5326f0 */ esp -= 4; M32(esp) = 0x518731u; SAVEALL; F_005326f0(c); ABI_CHECK(0x5326f0u, 0x51872cu); RETCHK(0x518731u, 0x51872cu); LOADALL;
  /* 00518731 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00518733 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518734 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518736 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518737 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00518738:;
  /* 00518738 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051873a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051873c shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051873f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00518740 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 00518743 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518744 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518745 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00518747 call dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51874au; SAVEALL; call_ind(c, t_); RETCHK(0x51874au, 0x518747u); LOADALL; }
  /* 0051874a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0051874f mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00518752 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518753 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518755 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518756 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00518757:;
  /* 00518757 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00518759 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051875b shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051875e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051875f movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 00518762 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518763 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518764 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00518766 call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x518769u; SAVEALL; call_ind(c, t_); RETCHK(0x518769u, 0x518766u); LOADALL; }
  /* 00518769 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0051876e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00518771 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518772 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518774 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518775 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00518776:;
  /* 00518776 add ecx, 0xfffffef1 */ { u32 a_ = ecx, b_ = 0xfffffef1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051877c cmp ecx, 0xf3 */ { u32 a_ = ecx, b_ = 0xf3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518782 ja 0x518969 */ if (!(CF_|ZF_)) goto L_00518969;
  /* 00518788 movzx ecx, byte ptr [ecx + 0x518984] */ { const u32 m_ = (u32)(ecx + 0x518984u); ecx = (u32)(M8(m_)); }
  /* 0051878f jmp dword ptr [ecx*4 + 0x518970] */ { const u32 m_ = (u32)(ecx * 4u + 0x518970u); u32 t_ = M32(m_); switch (t_) { case 0x518796u: goto L_00518796; case 0x5187a6u: goto L_005187a6; case 0x5187e2u: goto L_005187e2; case 0x518818u: goto L_00518818; case 0x518969u: goto L_00518969; default: SAVEALL; call_ind(c, t_); return; } }
L_00518796:;
  /* 00518796 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00518798 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518799 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051879a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051879c call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51879fu; SAVEALL; call_ind(c, t_); RETCHK(0x51879fu, 0x51879cu); LOADALL; }
  /* 0051879f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005187a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005187a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005187a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005187a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005187a6:;
  /* 005187a6 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 005187a8 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005187ab mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005187ae shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005187b1 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005187b4 movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005187b7 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005187ba mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005187bd lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005187c0 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005187c3 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005187c6 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005187c9 call 0x516c00 */ esp -= 4; M32(esp) = 0x5187ceu; SAVEALL; F_00516c00(c); ABI_CHECK(0x516c00u, 0x5187c9u); RETCHK(0x5187ceu, 0x5187c9u); LOADALL;
  /* 005187ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005187cf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005187d0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005187d2 call dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5187d4u; SAVEALL; call_ind(c, t_); RETCHK(0x5187d4u, 0x5187d2u); LOADALL; }
  /* 005187d4 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005187db mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005187dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005187de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005187e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005187e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005187e2:;
  /* 005187e2 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 005187e4 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005187e7 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005187ea shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005187ed fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005187f0 movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005187f3 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005187f6 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005187f9 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005187fc fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005187ff lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00518802 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00518805 call 0x516c00 */ esp -= 4; M32(esp) = 0x51880au; SAVEALL; F_00516c00(c); ABI_CHECK(0x516c00u, 0x518805u); RETCHK(0x51880au, 0x518805u); LOADALL;
  /* 0051880a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051880b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051880c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051880e call dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x518811u; SAVEALL; call_ind(c, t_); RETCHK(0x518811u, 0x51880eu); LOADALL; }
  /* 00518811 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00518813 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518814 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518816 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518817 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00518818:;
  /* 00518818 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 0051881a movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0051881d mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00518820 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00518823 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00518826 movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 00518829 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051882c mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0051882f lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00518832 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00518835 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00518838 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051883b call 0x516c00 */ esp -= 4; M32(esp) = 0x518840u; SAVEALL; F_00516c00(c); ABI_CHECK(0x516c00u, 0x51883bu); RETCHK(0x518840u, 0x51883bu); LOADALL;
  /* 00518840 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518841 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518842 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00518844 call dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x518847u; SAVEALL; call_ind(c, t_); RETCHK(0x518847u, 0x518844u); LOADALL; }
  /* 00518847 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00518849 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051884a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051884c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051884d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051884e:;
  /* 0051884e mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 00518850 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 00518853 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00518856 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00518859 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051885c movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0051885f fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00518862 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00518865 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00518868 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051886b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051886e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00518871 call 0x516c00 */ esp -= 4; M32(esp) = 0x518876u; SAVEALL; F_00516c00(c); ABI_CHECK(0x516c00u, 0x518871u); RETCHK(0x518876u, 0x518871u); LOADALL;
  /* 00518876 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518877 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518878 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051887a call dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51887du; SAVEALL; call_ind(c, t_); RETCHK(0x51887du, 0x51887au); LOADALL; }
  /* 0051887d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051887f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518880 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518882 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518883 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00518884:;
  /* 00518884 add ecx, 0xfffffdfc */ { u32 a_ = ecx, b_ = 0xfffffdfcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051888a cmp ecx, 0xfe */ { u32 a_ = ecx, b_ = 0xfeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518890 ja 0x518969 */ if (!(CF_|ZF_)) goto L_00518969;
  /* 00518896 movzx ecx, byte ptr [ecx + 0x518a98] */ { const u32 m_ = (u32)(ecx + 0x518a98u); ecx = (u32)(M8(m_)); }
  /* 0051889d jmp dword ptr [ecx*4 + 0x518a78] */ { const u32 m_ = (u32)(ecx * 4u + 0x518a78u); u32 t_ = M32(m_); switch (t_) { case 0x5188a4u: goto L_005188a4; case 0x5188b2u: goto L_005188b2; case 0x5188c0u: goto L_005188c0; case 0x5188ceu: goto L_005188ce; case 0x518904u: goto L_00518904; case 0x51893au: goto L_0051893a; case 0x518969u: goto L_00518969; default: SAVEALL; call_ind(c, t_); return; } }
L_005188a4:;
  /* 005188a4 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005188a6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005188a8 call dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5188abu; SAVEALL; call_ind(c, t_); RETCHK(0x5188abu, 0x5188a8u); LOADALL; }
  /* 005188ab mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005188ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005188ae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005188b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005188b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005188b2:;
  /* 005188b2 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005188b4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005188b6 call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5188b9u; SAVEALL; call_ind(c, t_); RETCHK(0x5188b9u, 0x5188b6u); LOADALL; }
  /* 005188b9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005188bb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005188bc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005188be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005188bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005188c0:;
  /* 005188c0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005188c2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005188c4 call dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5188c7u; SAVEALL; call_ind(c, t_); RETCHK(0x5188c7u, 0x5188c4u); LOADALL; }
  /* 005188c7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005188c9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005188ca mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005188cc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005188cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005188ce:;
  /* 005188ce mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 005188d0 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005188d3 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005188d6 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005188d9 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005188dc movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 005188df fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005188e2 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005188e5 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005188e8 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005188eb lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 005188ee fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005188f1 call 0x516c00 */ esp -= 4; M32(esp) = 0x5188f6u; SAVEALL; F_00516c00(c); ABI_CHECK(0x516c00u, 0x5188f1u); RETCHK(0x5188f6u, 0x5188f1u); LOADALL;
  /* 005188f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005188f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005188f8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005188fa call dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5188fdu; SAVEALL; call_ind(c, t_); RETCHK(0x5188fdu, 0x5188fau); LOADALL; }
  /* 005188fd mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005188ff pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518900 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518902 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518903 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00518904:;
  /* 00518904 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 00518906 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 00518909 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0051890c shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051890f fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00518912 movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 00518915 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00518918 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0051891b lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051891e fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00518921 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00518924 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00518927 call 0x516c00 */ esp -= 4; M32(esp) = 0x51892cu; SAVEALL; F_00516c00(c); ABI_CHECK(0x516c00u, 0x518927u); RETCHK(0x51892cu, 0x518927u); LOADALL;
  /* 0051892c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051892d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051892e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00518930 call dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x518933u; SAVEALL; call_ind(c, t_); RETCHK(0x518933u, 0x518930u); LOADALL; }
  /* 00518933 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00518935 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518936 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518938 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518939 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051893a:;
  /* 0051893a mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 0051893c movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0051893f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00518942 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00518945 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00518948 movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0051894b fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051894e mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00518951 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00518954 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00518957 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0051895a fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051895d call 0x516c00 */ esp -= 4; M32(esp) = 0x518962u; SAVEALL; F_00516c00(c); ABI_CHECK(0x516c00u, 0x51895du); RETCHK(0x518962u, 0x51895du); LOADALL;
  /* 00518962 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518963 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518964 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00518966 call dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x518969u; SAVEALL; call_ind(c, t_); RETCHK(0x518969u, 0x518966u); LOADALL; }
L_00518969:;
  /* 00518969 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051896b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051896c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051896e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051896f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518ba0(CPU *c) {
  NATIVE_HOOK(0x518ba0u) REGS; LOADALL;
L_00518ba0:;
  /* 00518ba0 mov byte ptr [eax + 0x160], 0 */ { const u32 m_ = (u32)(eax + 0x160u); M8(m_) = (u8)(0x0u); }
  /* 00518ba7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518bb0(CPU *c) {
  NATIVE_HOOK(0x518bb0u) REGS; LOADALL;
L_00518bb0:;
  /* 00518bb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518bb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518bb3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00518bb9 mov cl, byte ptr [0x9ba9b4] */ { const u32 m_ = (u32)(0x9ba9b4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00518bbf push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00518bc1 push 0x61dcde */ { u32 v_ = 0x61dcdeu; esp -= 4; M32(esp) = v_; }
  /* 00518bc6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518bc7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00518bcc test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00518bce mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00518bd5 jne 0x518bfb */ if (!ZF_) goto L_00518bfb;
  /* 00518bd7 or dword ptr [0x9ba9b4], eax */ { const u32 m_ = (u32)(0x9ba9b4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00518bdd push 0x9ba728 */ { u32 v_ = 0x9ba728u; esp -= 4; M32(esp) = v_; }
  /* 00518be2 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00518be9 call 0x516c40 */ esp -= 4; M32(esp) = 0x518beeu; SAVEALL; F_00516c40(c); ABI_CHECK(0x516c40u, 0x518be9u); RETCHK(0x518beeu, 0x518be9u); LOADALL;
  /* 00518bee push 0x62c5a0 */ { u32 v_ = 0x62c5a0u; esp -= 4; M32(esp) = v_; }
  /* 00518bf3 call 0x5fe916 */ esp -= 4; M32(esp) = 0x518bf8u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x518bf3u); RETCHK(0x518bf8u, 0x518bf3u); LOADALL;
  /* 00518bf8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00518bfb:;
  /* 00518bfb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00518bfe mov eax, 0x9ba728 */ { eax = (u32)(0x9ba728u); }
  /* 00518c03 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00518c0a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518c0c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518c0d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518c10(CPU *c) {
  NATIVE_HOOK(0x518c10u) REGS; LOADALL;
L_00518c10:;
  /* 00518c10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518c11 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00518c13 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518c14 mov dword ptr [esi], 0x65206c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65206cu); }
  /* 00518c1a mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00518c1d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00518c1f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518c21 je 0x518c2c */ if (ZF_) goto L_00518c2c;
  /* 00518c23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518c24 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x518c29u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x518c24u); RETCHK(0x518c29u, 0x518c24u); LOADALL;
  /* 00518c29 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00518c2c:;
  /* 00518c2c mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 00518c2f mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 00518c32 mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 00518c35 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518c38 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518c3a je 0x518c45 */ if (ZF_) goto L_00518c45;
  /* 00518c3c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518c3d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x518c42u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x518c3du); RETCHK(0x518c42u, 0x518c3du); LOADALL;
  /* 00518c42 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00518c45:;
  /* 00518c45 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00518c48 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 00518c4b mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 00518c4e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00518c4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00518c50 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518c60(CPU *c) {
  NATIVE_HOOK(0x518c60u) REGS; LOADALL;
L_00518c60:;
  /* 00518c60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00518c61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518c62 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00518c64 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00518c66 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00518c68:;
  /* 00518c68 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00518c6b cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518c6d jne 0x518c73 */ if (!ZF_) goto L_00518c73;
  /* 00518c6f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00518c71 jmp 0x518c7b */ goto L_00518c7b;
L_00518c73:;
  /* 00518c73 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00518c76 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518c78 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00518c7b:;
  /* 00518c7b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518c7d jge 0x518c9f */ if (!LT_) goto L_00518c9f;
  /* 00518c7f mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00518c82 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00518c84 lea ecx, [eax + edi*4] */ ecx = (u32)((u32)(eax + edi * 4u));
  /* 00518c87 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518c8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518c8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00518c8c add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518c8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518c8f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00518c91 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x518c94u; SAVEALL; call_ind(c, t_); RETCHK(0x518c94u, 0x518c91u); LOADALL; }
  /* 00518c94 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00518c95 add ebx, 0x104 */ { u32 a_ = ebx, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00518c9b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00518c9d jmp 0x518c68 */ goto L_00518c68;
L_00518c9f:;
  /* 00518c9f mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518ca2 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518ca4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00518ca5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518ca6 je 0x518cb3 */ if (ZF_) goto L_00518cb3;
  /* 00518ca8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518ca9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x518caeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x518ca9u); RETCHK(0x518caeu, 0x518ca9u); LOADALL;
  /* 00518cae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518cb1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_00518cb3:;
  /* 00518cb3 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 00518cb6 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 00518cb9 mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 00518cbc mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00518cbf cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518cc1 je 0x518cce */ if (ZF_) goto L_00518cce;
  /* 00518cc3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518cc4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x518cc9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x518cc4u); RETCHK(0x518cc9u, 0x518cc4u); LOADALL;
  /* 00518cc9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518ccc xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_00518cce:;
  /* 00518cce mov dword ptr [esi + 0x18], edx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edx); }
  /* 00518cd1 mov dword ptr [esi + 0x1c], edx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00518cd4 mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 00518cd7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518ce0(CPU *c) {
  NATIVE_HOOK(0x518ce0u) REGS; LOADALL;
L_00518ce0:;
  /* 00518ce0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518ce1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518ce3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518ce4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00518ce6 call 0x518c10 */ esp -= 4; M32(esp) = 0x518cebu; SAVEALL; F_00518c10(c); ABI_CHECK(0x518c10u, 0x518ce6u); RETCHK(0x518cebu, 0x518ce6u); LOADALL;
  /* 00518ceb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00518cef je 0x518cfa */ if (ZF_) goto L_00518cfa;
  /* 00518cf1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518cf2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x518cf7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x518cf2u); RETCHK(0x518cf7u, 0x518cf2u); LOADALL;
  /* 00518cf7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00518cfa:;
  /* 00518cfa mov eax, esi */ { eax = (u32)(esi); }
  /* 00518cfc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00518cfd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518cfe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00518d10(CPU *c) {
  NATIVE_HOOK(0x518d10u) REGS; LOADALL;
L_00518d10:;
  /* 00518d10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518d11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518d13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00518d14 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00518d16 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00518d19 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00518d1c add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00518d1e test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00518d21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518d22 jne 0x518d37 */ if (!ZF_) goto L_00518d37;
  /* 00518d24 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00518d27 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518d2a shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00518d2c cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518d2e ja 0x518d37 */ if (!(CF_|ZF_)) goto L_00518d37;
  /* 00518d30 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00518d32 call 0x518e20 */ esp -= 4; M32(esp) = 0x518d37u; SAVEALL; F_00518e20(c); ABI_CHECK(0x518e20u, 0x518d32u); RETCHK(0x518d37u, 0x518d32u); LOADALL;
L_00518d37:;
  /* 00518d37 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 00518d3a mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518d3d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518d3e add esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00518d41 mov edi, esi */ { edi = (u32)(esi); }
  /* 00518d43 shr edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00518d45 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518d47 ja 0x518d4b */ if (!(CF_|ZF_)) goto L_00518d4b;
  /* 00518d49 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
L_00518d4b:;
  /* 00518d4b mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00518d4e cmp dword ptr [edx + edi*4], 0 */ { const u32 m_ = (u32)(edx + edi * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518d52 jne 0x518d64 */ if (!ZF_) goto L_00518d64;
  /* 00518d54 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00518d56 call 0x5fe934 */ esp -= 4; M32(esp) = 0x518d5bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x518d56u); RETCHK(0x518d5bu, 0x518d56u); LOADALL;
  /* 00518d5b mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00518d5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518d61 mov dword ptr [ecx + edi*4], eax */ { const u32 m_ = (u32)(ecx + edi * 4u); M32(m_) = (u32)(eax); }
L_00518d64:;
  /* 00518d64 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00518d67 mov eax, dword ptr [edx + edi*4] */ { const u32 m_ = (u32)(edx + edi * 4u); eax = (u32)(M32(m_)); }
  /* 00518d6a and esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00518d6d lea esi, [eax + esi*8] */ esi = (u32)((u32)(eax + esi * 8u));
  /* 00518d70 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518d72 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00518d73 je 0x518d82 */ if (ZF_) goto L_00518d82;
  /* 00518d75 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518d78 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00518d7a mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 00518d7c mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00518d7f mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
L_00518d82:;
  /* 00518d82 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00518d85 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00518d86 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00518d87 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 00518d8a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00518d8b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518d8c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00518d90(CPU *c) {
  NATIVE_HOOK(0x518d90u) REGS; LOADALL;
L_00518d90:;
  /* 00518d90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518d91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518d93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00518d95 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 00518d9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00518da0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518da1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00518da8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518dab mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518dae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518daf mov esi, 0x3fffffff */ { esi = (u32)(0x3fffffffu); }
  /* 00518db4 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00518db6 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518db8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00518db9 jae 0x518e04 */ if (!CF_) goto L_00518e04;
  /* 00518dbb push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00518dbd push 0x648f18 */ { u32 v_ = 0x648f18u; esp -= 4; M32(esp) = v_; }
  /* 00518dc2 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00518dc5 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00518dcc mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 00518dd3 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 00518dd7 call 0x404420 */ esp -= 4; M32(esp) = 0x518ddcu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x518dd7u); RETCHK(0x518ddcu, 0x518dd7u); LOADALL;
  /* 00518ddc lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00518ddf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518de0 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00518de3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00518dea call 0x4040e0 */ esp -= 4; M32(esp) = 0x518defu; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x518deau); RETCHK(0x518defu, 0x518deau); LOADALL;
  /* 00518def push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 00518df4 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00518df7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00518df8 mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 00518dff call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_00518e04:;
  /* 00518e04 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518e06 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00518e09 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00518e0c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00518e13 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518e15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518e16 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518e20(CPU *c) {
  NATIVE_HOOK(0x518e20u) REGS; LOADALL;
L_00518e20:;
  /* 00518e20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518e21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518e23 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518e26 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518e29 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00518e2c mov ecx, 0xfffffff */ { ecx = (u32)(0xfffffffu); }
  /* 00518e31 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00518e33 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518e35 jae 0x518e3c */ if (!CF_) goto L_00518e3c;
  /* 00518e37 call 0x41a8b0 */ esp -= 4; M32(esp) = 0x518e3cu; SAVEALL; F_0041a8b0(c); ABI_CHECK(0x41a8b0u, 0x518e37u); RETCHK(0x518e3cu, 0x518e37u); LOADALL;
L_00518e3c:;
  /* 00518e3c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00518e3e shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00518e40 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518e43 jae 0x518e4a */ if (!CF_) goto L_00518e4a;
  /* 00518e45 mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_00518e4a:;
  /* 00518e4a cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518e4c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518e4d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518e4e jae 0x518e60 */ if (!CF_) goto L_00518e60;
  /* 00518e50 mov esi, 0xfffffff */ { esi = (u32)(0xfffffffu); }
  /* 00518e55 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00518e57 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518e59 ja 0x518e60 */ if (!(CF_|ZF_)) goto L_00518e60;
  /* 00518e5b mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00518e5e mov edx, ecx */ { edx = (u32)(ecx); }
L_00518e60:;
  /* 00518e60 mov edi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edi = (u32)(M32(m_)); }
  /* 00518e63 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518e65 lea edx, [eax*4] */ edx = (u32)((u32)(eax * 4u));
  /* 00518e6c shr edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00518e6e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00518e6f mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00518e72 call 0x5fe934 */ esp -= 4; M32(esp) = 0x518e77u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x518e72u); RETCHK(0x518e77u, 0x518e72u); LOADALL;
  /* 00518e77 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00518e7a lea esi, [edi*4] */ esi = (u32)((u32)(edi * 4u));
  /* 00518e81 lea ecx, [esi + edx] */ ecx = (u32)((u32)(esi + edx));
  /* 00518e84 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00518e87 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00518e8a shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00518e8d sub ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00518e90 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00518e93 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00518e95 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00518e98 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00518e9b shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00518e9e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00518e9f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00518ea0 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518ea2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518ea3 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 00518ea6 call 0x5fe998 */ esp -= 4; M32(esp) = 0x518eabu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x518ea6u); RETCHK(0x518eabu, 0x518ea6u); LOADALL;
  /* 00518eab mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00518eae mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00518eb1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518eb3 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00518eb6 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518eb9 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518ebb ja 0x518efc */ if (!(CF_|ZF_)) goto L_00518efc;
  /* 00518ebd sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00518ec0 mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 00518ec3 mov esi, edx */ { esi = (u32)(edx); }
  /* 00518ec5 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00518ec8 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00518ecb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00518ecc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00518ecd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518ece sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00518ed0 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00518ed3 call 0x5fe998 */ esp -= 4; M32(esp) = 0x518ed8u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x518ed3u); RETCHK(0x518ed8u, 0x518ed3u); LOADALL;
  /* 00518ed8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00518edb mov edx, eax */ { edx = (u32)(eax); }
  /* 00518edd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518ee0 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00518ee2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518ee4 jbe 0x518ef1 */ if ((CF_|ZF_)) goto L_00518ef1;
  /* 00518ee6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00518ee8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00518eea mov edi, edx */ { edi = (u32)(edx); }
  /* 00518eec rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00518eee mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
L_00518ef1:;
  /* 00518ef1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518ef3 jbe 0x518f40 */ if ((CF_|ZF_)) goto L_00518f40;
  /* 00518ef5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00518ef7 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00518efa jmp 0x518f3c */ goto L_00518f3c;
L_00518efc:;
  /* 00518efc lea edi, [edx*4] */ edi = (u32)((u32)(edx * 4u));
  /* 00518f03 mov edx, edi */ { edx = (u32)(edi); }
  /* 00518f05 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00518f08 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00518f0b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00518f0c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00518f0d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518f0e call 0x5fe998 */ esp -= 4; M32(esp) = 0x518f13u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x518f0eu); RETCHK(0x518f13u, 0x518f0eu); LOADALL;
  /* 00518f13 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00518f16 lea ecx, [edi + eax] */ ecx = (u32)((u32)(edi + eax));
  /* 00518f19 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00518f1b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00518f1d mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00518f20 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00518f23 shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00518f26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518f27 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00518f28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518f29 call 0x5fe998 */ esp -= 4; M32(esp) = 0x518f2eu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x518f29u); RETCHK(0x518f2eu, 0x518f29u); LOADALL;
  /* 00518f2e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00518f31 mov edi, eax */ { edi = (u32)(eax); }
  /* 00518f33 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00518f36 add edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00518f38 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518f3a jbe 0x518f40 */ if ((CF_|ZF_)) goto L_00518f40;
L_00518f3c:;
  /* 00518f3c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00518f3e rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
L_00518f40:;
  /* 00518f40 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00518f43 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00518f45 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00518f46 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00518f47 je 0x518f52 */ if (ZF_) goto L_00518f52;
  /* 00518f49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518f4a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x518f4fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x518f4au); RETCHK(0x518f4fu, 0x518f4au); LOADALL;
  /* 00518f4f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00518f52:;
  /* 00518f52 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00518f55 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00518f58 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00518f5b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00518f5d mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00518f60 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00518f63 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518f65 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518f66 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00518f70(CPU *c) {
  NATIVE_HOOK(0x518f70u) REGS; LOADALL;
L_00518f70:;
  /* 00518f70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00518f71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00518f73 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00518f79 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00518f7b push 0x61dcbc */ { u32 v_ = 0x61dcbcu; esp -= 4; M32(esp) = v_; }
  /* 00518f80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518f81 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00518f84 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00518f8b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00518f8c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00518f8d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518f8e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00518f91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518f92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518f93 call 0x506b60 */ esp -= 4; M32(esp) = 0x518f98u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x518f93u); RETCHK(0x518f98u, 0x518f93u); LOADALL;
  /* 00518f98 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00518f9a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00518f9d mov dword ptr [edi], 0x6522a0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6522a0u); }
  /* 00518fa3 mov dword ptr [edi + 0x184], ebx */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 00518fa9 mov dword ptr [edi + 0x188], ebx */ { const u32 m_ = (u32)(edi + 0x188u); M32(m_) = (u32)(ebx); }
  /* 00518faf mov dword ptr [edi + 0x18c], ebx */ { const u32 m_ = (u32)(edi + 0x18cu); M32(m_) = (u32)(ebx); }
  /* 00518fb5 mov dword ptr [edi + 0x190], ebx */ { const u32 m_ = (u32)(edi + 0x190u); M32(m_) = (u32)(ebx); }
  /* 00518fbb mov dword ptr [edi + 0x198], ebx */ { const u32 m_ = (u32)(edi + 0x198u); M32(m_) = (u32)(ebx); }
  /* 00518fc1 mov dword ptr [edi + 0x19c], ebx */ { const u32 m_ = (u32)(edi + 0x19cu); M32(m_) = (u32)(ebx); }
  /* 00518fc7 mov dword ptr [edi + 0x1a0], ebx */ { const u32 m_ = (u32)(edi + 0x1a0u); M32(m_) = (u32)(ebx); }
  /* 00518fcd mov dword ptr [edi + 0x1a4], ebx */ { const u32 m_ = (u32)(edi + 0x1a4u); M32(m_) = (u32)(ebx); }
  /* 00518fd3 mov dword ptr [edi + 0x1ac], ebx */ { const u32 m_ = (u32)(edi + 0x1acu); M32(m_) = (u32)(ebx); }
  /* 00518fd9 mov dword ptr [edi + 0x1b0], ebx */ { const u32 m_ = (u32)(edi + 0x1b0u); M32(m_) = (u32)(ebx); }
  /* 00518fdf mov dword ptr [edi + 0x1b4], ebx */ { const u32 m_ = (u32)(edi + 0x1b4u); M32(m_) = (u32)(ebx); }
  /* 00518fe5 mov dword ptr [edi + 0x1b8], ebx */ { const u32 m_ = (u32)(edi + 0x1b8u); M32(m_) = (u32)(ebx); }
  /* 00518feb mov dword ptr [edi + 0x1c0], ebx */ { const u32 m_ = (u32)(edi + 0x1c0u); M32(m_) = (u32)(ebx); }
  /* 00518ff1 mov dword ptr [edi + 0x1c4], ebx */ { const u32 m_ = (u32)(edi + 0x1c4u); M32(m_) = (u32)(ebx); }
  /* 00518ff7 mov dword ptr [edi + 0x1c8], ebx */ { const u32 m_ = (u32)(edi + 0x1c8u); M32(m_) = (u32)(ebx); }
  /* 00518ffd mov dword ptr [edi + 0x1cc], ebx */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(ebx); }
  /* 00519003 mov dword ptr [edi + 0x1d4], ebx */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(ebx); }
  /* 00519009 mov dword ptr [edi + 0x1d8], ebx */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(ebx); }
  /* 0051900f mov dword ptr [edi + 0x1dc], ebx */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(ebx); }
  /* 00519015 lea esi, [edi + 0x1e0] */ esi = (u32)((u32)(edi + 0x1e0u));
  /* 0051901b call 0x5267c0 */ esp -= 4; M32(esp) = 0x519020u; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x51901bu); RETCHK(0x519020u, 0x51901bu); LOADALL;
  /* 00519020 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 00519024 mov word ptr [edi + 0x290], 0x30 */ { const u32 m_ = (u32)(edi + 0x290u); M16(m_) = (u16)(0x30u); }
  /* 0051902d mov edx, dword ptr [0x6501e8] */ { const u32 m_ = (u32)(0x6501e8u); edx = (u32)(M32(m_)); }
  /* 00519033 lea ecx, [edi + 0x2a0] */ ecx = (u32)((u32)(edi + 0x2a0u));
  /* 00519039 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0051903b mov al, byte ptr [0x6501ec] */ { const u32 m_ = (u32)(0x6501ecu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00519040 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00519043 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 00519048 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0051904a mov dword ptr [edi + 0x2c0], 0x18 */ { const u32 m_ = (u32)(edi + 0x2c0u); M32(m_) = (u32)(0x18u); }
  /* 00519054 mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 00519059 mov dword ptr [edi + 0x2c4], esi */ { const u32 m_ = (u32)(edi + 0x2c4u); M32(m_) = (u32)(esi); }
  /* 0051905f mov dword ptr [edi + 0x2c8], eax */ { const u32 m_ = (u32)(edi + 0x2c8u); M32(m_) = (u32)(eax); }
  /* 00519065 mov dword ptr [edi + 0x2cc], eax */ { const u32 m_ = (u32)(edi + 0x2ccu); M32(m_) = (u32)(eax); }
  /* 0051906b mov dword ptr [edi + 0x2d0], ebx */ { const u32 m_ = (u32)(edi + 0x2d0u); M32(m_) = (u32)(ebx); }
  /* 00519071 mov dword ptr [edi + 0x2d4], ebx */ { const u32 m_ = (u32)(edi + 0x2d4u); M32(m_) = (u32)(ebx); }
  /* 00519077 mov dword ptr [edi + 0x2d8], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x2d8u); M32(m_) = (u32)(0xffffffffu); }
  /* 00519081 mov dword ptr [edi + 0x2dc], 0xaf000000 */ { const u32 m_ = (u32)(edi + 0x2dcu); M32(m_) = (u32)(0xaf000000u); }
  /* 0051908b mov dword ptr [edi + 0x2e0], 0x3f800000 */ { const u32 m_ = (u32)(edi + 0x2e0u); M32(m_) = (u32)(0x3f800000u); }
  /* 00519095 push 0x652448 */ { u32 v_ = 0x652448u; esp -= 4; M32(esp) = v_; }
  /* 0051909a lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0051909d mov dword ptr [edi + 0x2e4], ebx */ { const u32 m_ = (u32)(edi + 0x2e4u); M32(m_) = (u32)(ebx); }
  /* 005190a3 mov dword ptr [edi + 0x2e8], ebx */ { const u32 m_ = (u32)(edi + 0x2e8u); M32(m_) = (u32)(ebx); }
  /* 005190a9 call 0x404420 */ esp -= 4; M32(esp) = 0x5190aeu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5190a9u); RETCHK(0x5190aeu, 0x5190a9u); LOADALL;
  /* 005190ae or edx, 0xffffffff */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005190b1 mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 005190b6 mov byte ptr [edi + 0x3c], 1 */ { const u32 m_ = (u32)(edi + 0x3cu); M8(m_) = (u8)(0x1u); }
  /* 005190ba mov dword ptr [edi + 0x28c], edx */ { const u32 m_ = (u32)(edi + 0x28cu); M32(m_) = (u32)(edx); }
  /* 005190c0 mov dword ptr [edi + 0x274], ebx */ { const u32 m_ = (u32)(edi + 0x274u); M32(m_) = (u32)(ebx); }
  /* 005190c6 mov dword ptr [edi + 0x27c], ebx */ { const u32 m_ = (u32)(edi + 0x27cu); M32(m_) = (u32)(ebx); }
  /* 005190cc mov dword ptr [edi + 0x278], ebx */ { const u32 m_ = (u32)(edi + 0x278u); M32(m_) = (u32)(ebx); }
  /* 005190d2 mov dword ptr [edi + 0x280], ebx */ { const u32 m_ = (u32)(edi + 0x280u); M32(m_) = (u32)(ebx); }
  /* 005190d8 mov dword ptr [edi + 0x284], ecx */ { const u32 m_ = (u32)(edi + 0x284u); M32(m_) = (u32)(ecx); }
  /* 005190de mov dword ptr [edi + 0x288], esi */ { const u32 m_ = (u32)(edi + 0x288u); M32(m_) = (u32)(esi); }
  /* 005190e4 mov dword ptr [edi + 0x54], ebx */ { const u32 m_ = (u32)(edi + 0x54u); M32(m_) = (u32)(ebx); }
  /* 005190e7 mov dword ptr [edi + 0x2ec], ebx */ { const u32 m_ = (u32)(edi + 0x2ecu); M32(m_) = (u32)(ebx); }
  /* 005190ed mov dword ptr [edi + 0x2f0], ebx */ { const u32 m_ = (u32)(edi + 0x2f0u); M32(m_) = (u32)(ebx); }
  /* 005190f3 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 005190f8 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005190fb je 0x51910a */ if (ZF_) goto L_0051910a;
  /* 005190fd cmp dword ptr [eax + 0x10], esi */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519100 je 0x51910a */ if (ZF_) goto L_0051910a;
  /* 00519102 mov dword ptr [edi + 0x264], ecx */ { const u32 m_ = (u32)(edi + 0x264u); M32(m_) = (u32)(ecx); }
  /* 00519108 jmp 0x519110 */ goto L_00519110;
L_0051910a:;
  /* 0051910a mov dword ptr [edi + 0x264], esi */ { const u32 m_ = (u32)(edi + 0x264u); M32(m_) = (u32)(esi); }
L_00519110:;
  /* 00519110 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 00519112 lea ecx, [edi + 0x2fc] */ ecx = (u32)((u32)(edi + 0x2fcu));
  /* 00519118 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519119 mov dword ptr [edi + 0x2e4], edx */ { const u32 m_ = (u32)(edi + 0x2e4u); M32(m_) = (u32)(edx); }
  /* 0051911f mov dword ptr [edi + 0x2e8], edx */ { const u32 m_ = (u32)(edi + 0x2e8u); M32(m_) = (u32)(edx); }
  /* 00519125 mov byte ptr [edi + 0x2f5], al */ { const u32 m_ = (u32)(edi + 0x2f5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0051912b mov byte ptr [edi + 0x2f7], al */ { const u32 m_ = (u32)(edi + 0x2f7u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00519131 mov byte ptr [edi + 0x2f6], al */ { const u32 m_ = (u32)(edi + 0x2f6u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00519137 mov byte ptr [edi + 0x2f8], al */ { const u32 m_ = (u32)(edi + 0x2f8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0051913d call dword ptr [0x62e20c] */ { const u32 m_ = (u32)(0x62e20cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x519143u; SAVEALL; call_ind(c, t_); RETCHK(0x519143u, 0x51913du); LOADALL; }
  /* 00519143 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00519146 mov eax, edi */ { eax = (u32)(edi); }
  /* 00519148 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00519149 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051914a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00519151 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00519152 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00519154 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00519155 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00519160(CPU *c) {
  NATIVE_HOOK(0x519160u) REGS; LOADALL;
L_00519160:;
  /* 00519160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00519161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00519163 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519164 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00519166 call 0x5191b0 */ esp -= 4; M32(esp) = 0x51916bu; SAVEALL; F_005191b0(c); ABI_CHECK(0x5191b0u, 0x519166u); RETCHK(0x51916bu, 0x519166u); LOADALL;
  /* 0051916b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051916f je 0x51917a */ if (ZF_) goto L_0051917a;
  /* 00519171 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519172 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519177u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519172u); RETCHK(0x519177u, 0x519172u); LOADALL;
  /* 00519177 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051917a:;
  /* 0051917a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051917c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051917d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051917e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005191b0(CPU *c) {
  NATIVE_HOOK(0x5191b0u) REGS; LOADALL;
L_005191b0:;
  /* 005191b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005191b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005191b2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005191b4 lea eax, [edi + 0x2fc] */ eax = (u32)((u32)(edi + 0x2fcu));
  /* 005191ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005191bb mov dword ptr [edi], 0x6522a0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6522a0u); }
  /* 005191c1 call dword ptr [0x62e1a8] */ { const u32 m_ = (u32)(0x62e1a8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5191c7u; SAVEALL; call_ind(c, t_); RETCHK(0x5191c7u, 0x5191c1u); LOADALL; }
  /* 005191c7 lea ecx, [edi + 0x1e0] */ ecx = (u32)((u32)(edi + 0x1e0u));
  /* 005191cd call 0x5267e0 */ esp -= 4; M32(esp) = 0x5191d2u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x5191cdu); RETCHK(0x5191d2u, 0x5191cdu); LOADALL;
  /* 005191d2 mov eax, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 005191d8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005191da cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005191dc je 0x5191e7 */ if (ZF_) goto L_005191e7;
  /* 005191de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005191df call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5191e4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5191dfu); RETCHK(0x5191e4u, 0x5191dfu); LOADALL;
  /* 005191e4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005191e7:;
  /* 005191e7 mov dword ptr [edi + 0x1d4], esi */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(esi); }
  /* 005191ed mov dword ptr [edi + 0x1d8], esi */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(esi); }
  /* 005191f3 mov dword ptr [edi + 0x1dc], esi */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(esi); }
  /* 005191f9 lea esi, [edi + 0x1bc] */ esi = (u32)((u32)(edi + 0x1bcu));
  /* 005191ff call 0x51ac20 */ esp -= 4; M32(esp) = 0x519204u; SAVEALL; F_0051ac20(c); ABI_CHECK(0x51ac20u, 0x5191ffu); RETCHK(0x519204u, 0x5191ffu); LOADALL;
  /* 00519204 lea esi, [edi + 0x1a8] */ esi = (u32)((u32)(edi + 0x1a8u));
  /* 0051920a call 0x51ac20 */ esp -= 4; M32(esp) = 0x51920fu; SAVEALL; F_0051ac20(c); ABI_CHECK(0x51ac20u, 0x51920au); RETCHK(0x51920fu, 0x51920au); LOADALL;
  /* 0051920f lea esi, [edi + 0x194] */ esi = (u32)((u32)(edi + 0x194u));
  /* 00519215 call 0x403410 */ esp -= 4; M32(esp) = 0x51921au; SAVEALL; F_00403410(c); ABI_CHECK(0x403410u, 0x519215u); RETCHK(0x51921au, 0x519215u); LOADALL;
  /* 0051921a lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 00519220 call 0x531490 */ esp -= 4; M32(esp) = 0x519225u; SAVEALL; F_00531490(c); ABI_CHECK(0x531490u, 0x519220u); RETCHK(0x519225u, 0x519220u); LOADALL;
  /* 00519225 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00519227 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00519228 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00519229 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00519230(CPU *c) {
  NATIVE_HOOK(0x519230u) REGS; LOADALL;
L_00519230:;
  /* 00519230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00519231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00519233 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519236 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519237 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519238 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0051923a mov byte ptr [edi + 0x2f4], al */ { const u32 m_ = (u32)(edi + 0x2f4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00519240 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 00519243 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 00519246 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00519249 call 0x52cee0 */ esp -= 4; M32(esp) = 0x51924eu; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x519249u); RETCHK(0x51924eu, 0x519249u); LOADALL;
  /* 0051924e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519251 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00519253 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00519255 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519256 lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 00519259 call 0x404140 */ esp -= 4; M32(esp) = 0x51925eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x519259u); RETCHK(0x51925eu, 0x519259u); LOADALL;
  /* 0051925e mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 00519261 mov dword ptr [edi + 0x28c], edx */ { const u32 m_ = (u32)(edi + 0x28cu); M32(m_) = (u32)(edx); }
  /* 00519267 call 0x52a850 */ esp -= 4; M32(esp) = 0x51926cu; SAVEALL; F_0052a850(c); ABI_CHECK(0x52a850u, 0x519267u); RETCHK(0x51926cu, 0x519267u); LOADALL;
  /* 0051926c mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0051926f mov edx, eax */ { edx = (u32)(eax); }
  /* 00519271 call 0x52a8b0 */ esp -= 4; M32(esp) = 0x519276u; SAVEALL; F_0052a8b0(c); ABI_CHECK(0x52a8b0u, 0x519271u); RETCHK(0x519276u, 0x519271u); LOADALL;
  /* 00519276 add edi, 0x290 */ { u32 a_ = edi, b_ = 0x290u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051927c mov esi, eax */ { esi = (u32)(eax); }
  /* 0051927e mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 00519283 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00519285 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00519286 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00519288 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00519289 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051928b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051928c ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00519290(CPU *c) {
  NATIVE_HOOK(0x519290u) REGS; LOADALL;
L_00519290:;
  /* 00519290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00519291 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00519293 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00519295 push 0x624238 */ { u32 v_ = 0x624238u; esp -= 4; M32(esp) = v_; }
  /* 0051929a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005192a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005192a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005192a8 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005192ab mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 005192ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005192af xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005192b1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005192b3 je 0x5193a9 */ if (ZF_) goto L_005193a9;
  /* 005192b9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005192ba mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 005192bd mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 005192c0 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 005192c3 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 005192c6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005192c8 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005192cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005192cc mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005192cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005192d0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005192d2 mov byte ptr [ebp - 0x10], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M8(m_) = (u8)(0xau); }
  /* 005192d6 call 0x40a4a0 */ esp -= 4; M32(esp) = 0x5192dbu; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x5192d6u); RETCHK(0x5192dbu, 0x5192d6u); LOADALL;
  /* 005192db mov edi, eax */ { edi = (u32)(eax); }
  /* 005192dd cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005192e0 je 0x519344 */ if (ZF_) goto L_00519344;
L_005192e2:;
  /* 005192e2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005192e4 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005192e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005192e7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005192e9 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 005192ec mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005192ee call 0x40c990 */ esp -= 4; M32(esp) = 0x5192f3u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x5192eeu); RETCHK(0x5192f3u, 0x5192eeu); LOADALL;
  /* 005192f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005192f4 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005192f7 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005192fb call 0x4033a0 */ esp -= 4; M32(esp) = 0x519300u; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x5192fbu); RETCHK(0x519300u, 0x5192fbu); LOADALL;
  /* 00519300 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00519304 cmp dword ptr [ebp - 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519308 jb 0x519316 */ if (CF_) goto L_00519316;
  /* 0051930a mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 0051930d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051930e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519313u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51930eu); RETCHK(0x519313u, 0x51930eu); LOADALL;
  /* 00519313 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519316:;
  /* 00519316 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00519318 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051931b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051931c lea esi, [edi + 1] */ esi = (u32)((u32)(edi + 0x1u));
  /* 0051931f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00519320 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519322 mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 00519329 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 00519330 mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
  /* 00519334 mov byte ptr [ebp - 0x10], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M8(m_) = (u8)(0xau); }
  /* 00519338 call 0x40a4a0 */ esp -= 4; M32(esp) = 0x51933du; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x519338u); RETCHK(0x51933du, 0x519338u); LOADALL;
  /* 0051933d mov edi, eax */ { edi = (u32)(eax); }
  /* 0051933f cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519342 jne 0x5192e2 */ if (!ZF_) goto L_005192e2;
L_00519344:;
  /* 00519344 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 00519347 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0051934c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051934e jb 0x519355 */ if (CF_) goto L_00519355;
  /* 00519350 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00519353 jmp 0x519358 */ goto L_00519358;
L_00519355:;
  /* 00519355 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
L_00519358:;
  /* 00519358 cmp byte ptr [eax + esi], 0 */ { const u32 m_ = (u32)(eax + esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0051935c je 0x519394 */ if (ZF_) goto L_00519394;
  /* 0051935e mov ecx, 0xffffffff */ { ecx = (u32)(0xffffffffu); }
  /* 00519363 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00519365 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519366 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00519368 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0051936b mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0051936d call 0x40c990 */ esp -= 4; M32(esp) = 0x519372u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x51936du); RETCHK(0x519372u, 0x51936du); LOADALL;
  /* 00519372 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519373 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00519376 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0051937a call 0x4033a0 */ esp -= 4; M32(esp) = 0x51937fu; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x51937au); RETCHK(0x51937fu, 0x51937au); LOADALL;
  /* 0051937f mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00519383 cmp dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519386 jb 0x519394 */ if (CF_) goto L_00519394;
  /* 00519388 mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 0051938b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051938c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519391u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51938cu); RETCHK(0x519391u, 0x51938cu); LOADALL;
  /* 00519391 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519394:;
  /* 00519394 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00519397 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519398 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0051939b call 0x5193c0 */ esp -= 4; M32(esp) = 0x5193a0u; SAVEALL; F_005193c0(c); ABI_CHECK(0x5193c0u, 0x51939bu); RETCHK(0x5193a0u, 0x51939bu); LOADALL;
  /* 005193a0 lea esi, [ebp - 0x24] */ esi = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005193a3 call 0x403410 */ esp -= 4; M32(esp) = 0x5193a8u; SAVEALL; F_00403410(c); ABI_CHECK(0x403410u, 0x5193a3u); RETCHK(0x5193a8u, 0x5193a3u); LOADALL;
  /* 005193a8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005193a9:;
  /* 005193a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005193ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005193ad mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005193b4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005193b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005193b7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005193c0(CPU *c) {
  NATIVE_HOOK(0x5193c0u) REGS; LOADALL;
L_005193c0:;
  /* 005193c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005193c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005193c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005193c5 push 0x624207 */ { u32 v_ = 0x624207u; esp -= 4; M32(esp) = v_; }
  /* 005193ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005193d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005193d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005193d8 sub esp, 0x110 */ { u32 a_ = esp, b_ = 0x110u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005193de mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005193e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005193e4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005193e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005193e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005193e9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005193eb mov ecx, dword ptr [ebx + 0x1a4] */ { const u32 m_ = (u32)(ebx + 0x1a4u); ecx = (u32)(M32(m_)); }
  /* 005193f1 lea edi, [ebx + 0x194] */ edi = (u32)((u32)(ebx + 0x194u));
  /* 005193f7 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005193fa cmp ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005193fd mov dword ptr [ebp - 0xb8], edi */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(edi); }
  /* 00519403 jne 0x519423 */ if (!ZF_) goto L_00519423;
  /* 00519405 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00519408 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051940b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051940c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051940d add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051940f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519410 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519411 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519412 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519413 call 0x51b860 */ esp -= 4; M32(esp) = 0x519418u; SAVEALL; F_0051b860(c); ABI_CHECK(0x51b860u, 0x519413u); RETCHK(0x519418u, 0x519413u); LOADALL;
  /* 00519418 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051941b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051941d jne 0x519d5d */ if (!ZF_) goto L_00519d5d;
L_00519423:;
  /* 00519423 lea eax, [ebx + 0x2fc] */ eax = (u32)((u32)(ebx + 0x2fcu));
  /* 00519429 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051942a mov dword ptr [ebp - 0xbc], eax */ { const u32 m_ = (u32)(ebp + 0xffffff44u); M32(m_) = (u32)(eax); }
  /* 00519430 call dword ptr [0x62e15c] */ { const u32 m_ = (u32)(0x62e15cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x519436u; SAVEALL; call_ind(c, t_); RETCHK(0x519436u, 0x519430u); LOADALL; }
  /* 00519436 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00519438 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051943a call dword ptr [eax + 0xdc] */ { const u32 m_ = (u32)(eax + 0xdcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x519440u; SAVEALL; call_ind(c, t_); RETCHK(0x519440u, 0x51943au); LOADALL; }
  /* 00519440 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519442 call 0x51a9b0 */ esp -= 4; M32(esp) = 0x519447u; SAVEALL; F_0051a9b0(c); ABI_CHECK(0x51a9b0u, 0x519442u); RETCHK(0x519447u, 0x519442u); LOADALL;
  /* 00519447 mov eax, dword ptr [ebx + 0x1a4] */ { const u32 m_ = (u32)(ebx + 0x1a4u); eax = (u32)(M32(m_)); }
  /* 0051944d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051944f je 0x519d5d */ if (ZF_) goto L_00519d5d;
  /* 00519455 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00519457 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00519459 mov dword ptr [ebp - 0x64], esi */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(esi); }
  /* 0051945c mov dword ptr [ebp - 0x60], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(esi); }
  /* 0051945f mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00519462 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00519464 mov dword ptr [ebp - 0x88], esi */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(esi); }
  /* 0051946a mov dword ptr [ebp - 0x84], esi */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(esi); }
  /* 00519470 mov dword ptr [ebp - 0xac], esi */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M32(m_) = (u32)(esi); }
  /* 00519476 mov dword ptr [ebp - 0xa8], esi */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(esi); }
  /* 0051947c mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 00519481 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 00519484 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00519487 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051948a mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0051948d mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00519490 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00519493 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00519497 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00519499 mov dword ptr [ebp - 0x9c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(ecx); }
  /* 0051949f mov dword ptr [ebp - 0x98], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(ecx); }
  /* 005194a5 mov dword ptr [ebp - 0x94], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(ecx); }
  /* 005194ab mov ecx, dword ptr [ebp - 0xb8] */ { const u32 m_ = (u32)(ebp + 0xffffff48u); ecx = (u32)(M32(m_)); }
  /* 005194b1 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005194b4 mov dword ptr [ebp - 0xa0], esi */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(esi); }
  /* 005194ba mov dword ptr [ebp - 0x9c], esi */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(esi); }
  /* 005194c0 mov dword ptr [ebp - 0x94], esi */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(esi); }
  /* 005194c6 mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
L_005194c9:;
  /* 005194c9 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005194cc mov dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(eax); }
  /* 005194cf mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005194d2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005194d4 cmp dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005194d7 jne 0x5194e2 */ if (!ZF_) goto L_005194e2;
  /* 005194d9 cmp dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005194dc je 0x519cd5 */ if (ZF_) goto L_00519cd5;
L_005194e2:;
  /* 005194e2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005194e4 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005194e6 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 005194e9 je 0x5194f6 */ if (ZF_) goto L_005194f6;
  /* 005194eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005194ec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5194f1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5194ecu); RETCHK(0x5194f1u, 0x5194ecu); LOADALL;
  /* 005194f1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005194f4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005194f6:;
  /* 005194f6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005194f8 mov dword ptr [ebp - 0x68], eax */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(eax); }
  /* 005194fb mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 005194fe mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 00519501 je 0x51950e */ if (ZF_) goto L_0051950e;
  /* 00519503 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519504 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519509u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519504u); RETCHK(0x519509u, 0x519504u); LOADALL;
  /* 00519509 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051950c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051950e:;
  /* 0051950e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519510 mov dword ptr [ebp - 0xb0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(eax); }
  /* 00519516 mov dword ptr [ebp - 0xac], eax */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M32(m_) = (u32)(eax); }
  /* 0051951c mov dword ptr [ebp - 0xa8], eax */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(eax); }
  /* 00519522 je 0x51952f */ if (ZF_) goto L_0051952f;
  /* 00519524 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00519525 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51952au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519525u); RETCHK(0x51952au, 0x519525u); LOADALL;
  /* 0051952a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051952d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051952f:;
  /* 0051952f mov edx, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); edx = (u32)(M32(m_)); }
  /* 00519532 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519535 mov dword ptr [ebp - 0x8c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(eax); }
  /* 0051953b mov dword ptr [ebp - 0x88], eax */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(eax); }
  /* 00519541 mov dword ptr [ebp - 0x84], eax */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(eax); }
  /* 00519547 mov eax, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); eax = (u32)(M32(m_)); }
  /* 0051954a cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051954c ja 0x519550 */ if (!(CF_|ZF_)) goto L_00519550;
  /* 0051954e sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00519550:;
  /* 00519550 mov ecx, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); ecx = (u32)(M32(m_)); }
  /* 00519553 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00519556 mov eax, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 00519559 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051955c mov edx, dword ptr [ecx + 0x28c] */ { const u32 m_ = (u32)(ecx + 0x28cu); edx = (u32)(M32(m_)); }
  /* 00519562 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00519564 push 0x64350c */ { u32 v_ = 0x64350cu; esp -= 4; M32(esp) = v_; }
  /* 00519569 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 0051956c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051956d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051956f mov dword ptr [ebp - 0x58], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(edx); }
  /* 00519572 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00519574 call 0x40a4a0 */ esp -= 4; M32(esp) = 0x519579u; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x519574u); RETCHK(0x519579u, 0x519574u); LOADALL;
  /* 00519579 mov edi, eax */ { edi = (u32)(eax); }
  /* 0051957b cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051957e je 0x5198ed */ if (ZF_) goto L_005198ed;
L_00519584:;
  /* 00519584 mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 00519587 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00519589 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0051958c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051958d lea eax, [edi + 1] */ eax = (u32)((u32)(edi + 0x1u));
  /* 00519590 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00519591 mov byte ptr [ebp - 0x4c], 0x5d */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M8(m_) = (u8)(0x5du); }
  /* 00519595 mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0051959b call 0x40a4a0 */ esp -= 4; M32(esp) = 0x5195a0u; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x51959bu); RETCHK(0x5195a0u, 0x51959bu); LOADALL;
  /* 005195a0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005195a3 mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 005195a6 je 0x5198ed */ if (ZF_) goto L_005198ed;
  /* 005195ac mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 005195af mov eax, edi */ { eax = (u32)(edi); }
  /* 005195b1 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005195b3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005195b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005195b6 lea esi, [ebp - 0xe4] */ esi = (u32)((u32)(ebp + 0xffffff1cu));
  /* 005195bc call 0x40c990 */ esp -= 4; M32(esp) = 0x5195c1u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x5195bcu); RETCHK(0x5195c1u, 0x5195bcu); LOADALL;
  /* 005195c1 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005195c3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005195c5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005195c6 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 005195c9 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 005195cd call 0x404140 */ esp -= 4; M32(esp) = 0x5195d2u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5195cdu); RETCHK(0x5195d2u, 0x5195cdu); LOADALL;
  /* 005195d2 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 005195d6 mov eax, dword ptr [ebp - 0xcc] */ { const u32 m_ = (u32)(ebp + 0xffffff34u); eax = (u32)(M32(m_)); }
  /* 005195dc mov ebx, 0x10 */ { ebx = (u32)(0x10u); }
  /* 005195e1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005195e3 jb 0x5195f4 */ if (CF_) goto L_005195f4;
  /* 005195e5 mov ecx, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); ecx = (u32)(M32(m_)); }
  /* 005195eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005195ec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5195f1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5195ecu); RETCHK(0x5195f1u, 0x5195ecu); LOADALL;
  /* 005195f1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005195f4:;
  /* 005195f4 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 005195f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005195f9 mov dword ptr [ebp - 0xcc], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff34u); M32(m_) = (u32)(0xfu); }
  /* 00519603 mov dword ptr [ebp - 0xd0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff30u); M32(m_) = (u32)(0x0u); }
  /* 0051960d mov byte ptr [ebp - 0xe0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M8(m_) = (u8)(0x0u); }
  /* 00519614 je 0x519747 */ if (ZF_) goto L_00519747;
  /* 0051961a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051961d mov edx, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); edx = (u32)(M32(m_)); }
  /* 00519620 mov dword ptr [ecx + 0x2d8], edx */ { const u32 m_ = (u32)(ecx + 0x2d8u); M32(m_) = (u32)(edx); }
  /* 00519626 fld dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); FPUSH((double)MF32(m_)); }
  /* 00519629 fsub dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051962c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00519632 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00519634 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00519637 je 0x519641 */ if (ZF_) goto L_00519641;
  /* 00519639 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051963b fld dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051963e fsub dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00519641:;
  /* 00519641 fld dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00519644 fsub dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00519647 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051964d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051964f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00519652 je 0x51965c */ if (ZF_) goto L_0051965c;
  /* 00519654 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00519656 fld dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00519659 fsub dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051965c:;
  /* 0051965c cmp dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051965f mov esi, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); esi = (u32)(M32(m_)); }
  /* 00519662 jae 0x519667 */ if (!CF_) goto L_00519667;
  /* 00519664 lea esi, [ebp - 0x44] */ esi = (u32)((u32)(ebp + 0xffffffbcu));
L_00519667:;
  /* 00519667 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00519669 call 0x61b154 */ esp -= 4; M32(esp) = 0x51966eu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x519669u); RETCHK(0x51966eu, 0x519669u); LOADALL;
  /* 0051966e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051966f call 0x61b154 */ esp -= 4; M32(esp) = 0x519674u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x51966fu); RETCHK(0x519674u, 0x51966fu); LOADALL;
  /* 00519674 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519675 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00519678 add eax, 0x290 */ { u32 a_ = eax, b_ = 0x290u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051967d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051967e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051967f call 0x5288e0 */ esp -= 4; M32(esp) = 0x519684u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x51967fu); RETCHK(0x519684u, 0x51967fu); LOADALL;
  /* 00519684 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519687 lea ecx, [ebp - 0x78] */ ecx = (u32)((u32)(ebp + 0xffffff88u));
  /* 0051968a mov edx, eax */ { edx = (u32)(eax); }
  /* 0051968c call 0x528970 */ esp -= 4; M32(esp) = 0x519691u; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x51968cu); RETCHK(0x519691u, 0x51968cu); LOADALL;
  /* 00519691 mov ebx, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); ebx = (u32)(M32(m_)); }
  /* 00519694 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519696 je 0x519742 */ if (ZF_) goto L_00519742;
  /* 0051969c mov esi, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); esi = (u32)(M32(m_)); }
  /* 0051969f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005196a1 mov edx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); edx = (u32)(M32(m_)); }
  /* 005196a4 je 0x5196c3 */ if (ZF_) goto L_005196c3;
  /* 005196a6 mov ecx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ecx = (u32)(M32(m_)); }
  /* 005196a9 mov eax, edx */ { eax = (u32)(edx); }
  /* 005196ab sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005196ad sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005196af sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005196b2 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005196b5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005196b7 jae 0x5196c3 */ if (!CF_) goto L_005196c3;
  /* 005196b9 mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 005196bb add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005196be mov dword ptr [ebp - 0x64], edx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(edx); }
  /* 005196c1 jmp 0x5196d5 */ goto L_005196d5;
L_005196c3:;
  /* 005196c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005196c4 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 005196c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005196c8 lea eax, [ebp - 0x78] */ eax = (u32)((u32)(ebp + 0xffffff88u));
  /* 005196cb mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005196d0 call 0x4d2620 */ esp -= 4; M32(esp) = 0x5196d5u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x5196d0u); RETCHK(0x5196d5u, 0x5196d0u); LOADALL;
L_005196d5:;
  /* 005196d5 lea edx, [ebp - 0x74] */ edx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 005196d8 lea esi, [ebp - 0x90] */ esi = (u32)((u32)(ebp + 0xffffff70u));
  /* 005196de call 0x514f50 */ esp -= 4; M32(esp) = 0x5196e3u; SAVEALL; F_00514f50(c); ABI_CHECK(0x514f50u, 0x5196deu); RETCHK(0x5196e3u, 0x5196deu); LOADALL;
  /* 005196e3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005196e6 mov esi, dword ptr [eax + 0x1d4] */ { const u32 m_ = (u32)(eax + 0x1d4u); esi = (u32)(M32(m_)); }
  /* 005196ec add eax, 0x1d0 */ { u32 a_ = eax, b_ = 0x1d0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005196f1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005196f3 jne 0x5196f9 */ if (!ZF_) goto L_005196f9;
  /* 005196f5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005196f7 jmp 0x519701 */ goto L_00519701;
L_005196f9:;
  /* 005196f9 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005196fc sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005196fe sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_00519701:;
  /* 00519701 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519703 je 0x51971e */ if (ZF_) goto L_0051971e;
  /* 00519705 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00519708 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051970a sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051970d cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051970f jae 0x51971e */ if (!CF_) goto L_0051971e;
  /* 00519711 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519714 mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
  /* 00519716 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00519719 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0051971c jmp 0x519730 */ goto L_00519730;
L_0051971e:;
  /* 0051971e mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519721 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519722 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519723 lea eax, [ebp - 0x78] */ eax = (u32)((u32)(ebp + 0xffffff88u));
  /* 00519726 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0051972b call 0x4d2620 */ esp -= 4; M32(esp) = 0x519730u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x51972bu); RETCHK(0x519730u, 0x51972bu); LOADALL;
L_00519730:;
  /* 00519730 mov eax, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); eax = (u32)(M32(m_)); }
  /* 00519733 cmp dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519736 mov ebx, 0x10 */ { ebx = (u32)(0x10u); }
  /* 0051973b jge 0x519747 */ if (!LT_) goto L_00519747;
  /* 0051973d mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 00519740 jmp 0x519747 */ goto L_00519747;
L_00519742:;
  /* 00519742 mov ebx, 0x10 */ { ebx = (u32)(0x10u); }
L_00519747:;
  /* 00519747 mov edx, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); edx = (u32)(M32(m_)); }
  /* 0051974a mov ecx, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); ecx = (u32)(M32(m_)); }
  /* 00519750 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00519752 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00519753 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00519754 mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 00519757 lea esi, [ebp - 0x100] */ esi = (u32)((u32)(ebp + 0xffffff00u));
  /* 0051975d call 0x40c990 */ esp -= 4; M32(esp) = 0x519762u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x51975du); RETCHK(0x519762u, 0x51975du); LOADALL;
  /* 00519762 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00519764 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00519766 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519767 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0051976a mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0051976e call 0x404140 */ esp -= 4; M32(esp) = 0x519773u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51976eu); RETCHK(0x519773u, 0x51976eu); LOADALL;
  /* 00519773 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00519777 cmp dword ptr [ebp - 0xe8], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051977d jb 0x51978e */ if (CF_) goto L_0051978e;
  /* 0051977f mov eax, dword ptr [ebp - 0xfc] */ { const u32 m_ = (u32)(ebp + 0xffffff04u); eax = (u32)(M32(m_)); }
  /* 00519785 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519786 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51978bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519786u); RETCHK(0x51978bu, 0x519786u); LOADALL;
  /* 0051978b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051978e:;
  /* 0051978e cmp dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519791 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00519794 mov dword ptr [ebp - 0xe8], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0xfu); }
  /* 0051979e mov dword ptr [ebp - 0xec], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff14u); M32(m_) = (u32)(0x0u); }
  /* 005197a8 mov byte ptr [ebp - 0xfc], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff04u); M8(m_) = (u8)(0x0u); }
  /* 005197af jae 0x5197b4 */ if (!CF_) goto L_005197b4;
  /* 005197b1 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005197b4:;
  /* 005197b4 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005197b6 push 0x6523a4 */ { u32 v_ = 0x6523a4u; esp -= 4; M32(esp) = v_; }
  /* 005197bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005197bc call 0x5feb06 */ esp -= 4; M32(esp) = 0x5197c1u; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x5197bcu); RETCHK(0x5197c1u, 0x5197bcu); LOADALL;
  /* 005197c1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005197c4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005197c6 jne 0x519849 */ if (!ZF_) goto L_00519849;
  /* 005197cc xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005197ce mov edi, edi */ { edi = (u32)(edi); }
L_005197d0:;
  /* 005197d0 mov edx, dword ptr [edi*8 + 0x687fb8] */ { const u32 m_ = (u32)(edi * 8u + 0x687fb8u); edx = (u32)(M32(m_)); }
  /* 005197d7 mov eax, edx */ { eax = (u32)(edx); }
  /* 005197d9 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 005197dc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005197e0:;
  /* 005197e0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005197e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005197e3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005197e5 jne 0x5197e0 */ if (!ZF_) goto L_005197e0;
  /* 005197e7 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 005197ea sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005197ec cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005197ee mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 005197f1 jae 0x5197f6 */ if (!CF_) goto L_005197f6;
  /* 005197f3 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_005197f6:;
  /* 005197f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005197f7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005197f8 add ecx, 6 */ { u32 a_ = ecx, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005197fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005197fc call 0x5feb06 */ esp -= 4; M32(esp) = 0x519801u; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x5197fcu); RETCHK(0x519801u, 0x5197fcu); LOADALL;
  /* 00519801 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519804 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519806 je 0x519835 */ if (ZF_) goto L_00519835;
  /* 00519808 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00519809 cmp edi, 0x15 */ { u32 a_ = edi, b_ = 0x15u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051980c jb 0x5197d0 */ if (CF_) goto L_005197d0;
L_0051980e:;
  /* 0051980e cmp dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519811 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00519814 jae 0x519819 */ if (!CF_) goto L_00519819;
  /* 00519816 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00519819:;
  /* 00519819 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051981a lea edx, [ebp - 0xc8] */ edx = (u32)((u32)(ebp + 0xffffff38u));
  /* 00519820 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00519821 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519824 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519825 call 0x5feb0c */ esp -= 4; M32(esp) = 0x51982au; SAVEALL; F_005feb0c(c); ABI_CHECK(0x5feb0cu, 0x519825u); RETCHK(0x51982au, 0x519825u); LOADALL;
  /* 0051982a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051982d mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 00519830 jmp 0x5198cc */ goto L_005198cc;
L_00519835:;
  /* 00519835 cmp edi, 0x15 */ { u32 a_ = edi, b_ = 0x15u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519838 jae 0x51980e */ if (!CF_) goto L_0051980e;
  /* 0051983a mov ecx, dword ptr [edi*8 + 0x687fbc] */ { const u32 m_ = (u32)(edi * 8u + 0x687fbcu); ecx = (u32)(M32(m_)); }
  /* 00519841 mov dword ptr [ebp - 0x58], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ecx); }
  /* 00519844 jmp 0x5198cc */ goto L_005198cc;
L_00519849:;
  /* 00519849 cmp dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051984c mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0051984f jae 0x519854 */ if (!CF_) goto L_00519854;
  /* 00519851 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00519854:;
  /* 00519854 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00519856 push 0x65239c */ { u32 v_ = 0x65239cu; esp -= 4; M32(esp) = v_; }
  /* 0051985b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051985c call 0x5feb06 */ esp -= 4; M32(esp) = 0x519861u; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x51985cu); RETCHK(0x519861u, 0x51985cu); LOADALL;
  /* 00519861 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519864 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519866 jne 0x519876 */ if (!ZF_) goto L_00519876;
  /* 00519868 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051986b mov ecx, dword ptr [eax + 0x28c] */ { const u32 m_ = (u32)(eax + 0x28cu); ecx = (u32)(M32(m_)); }
  /* 00519871 mov dword ptr [ebp - 0x58], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ecx); }
  /* 00519874 jmp 0x5198cc */ goto L_005198cc;
L_00519876:;
  /* 00519876 call 0x52a110 */ esp -= 4; M32(esp) = 0x51987bu; SAVEALL; F_0052a110(c); ABI_CHECK(0x52a110u, 0x519876u); RETCHK(0x51987bu, 0x519876u); LOADALL;
  /* 0051987b mov edi, eax */ { edi = (u32)(eax); }
  /* 0051987d lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00519880 call 0x52a330 */ esp -= 4; M32(esp) = 0x519885u; SAVEALL; F_0052a330(c); ABI_CHECK(0x52a330u, 0x519880u); RETCHK(0x519885u, 0x519880u); LOADALL;
  /* 00519885 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519887 je 0x5198cc */ if (ZF_) goto L_005198cc;
  /* 00519889 lea edi, [eax + 0x1c] */ edi = (u32)((u32)(eax + 0x1cu));
  /* 0051988c mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0051988e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519890 je 0x5198cc */ if (ZF_) goto L_005198cc;
  /* 00519892 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 00519895 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 00519898 mov dword ptr [ebp - 0xc0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff40u); M32(m_) = (u32)(eax); }
  /* 0051989e mov eax, edi */ { eax = (u32)(edi); }
  /* 005198a0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 005198a3 mov dword ptr [ebp - 0xc4], edx */ { const u32 m_ = (u32)(ebp + 0xffffff3cu); M32(m_) = (u32)(edx); }
  /* 005198a9 call 0x52ac10 */ esp -= 4; M32(esp) = 0x5198aeu; SAVEALL; F_0052ac10(c); ABI_CHECK(0x52ac10u, 0x5198a9u); RETCHK(0x5198aeu, 0x5198a9u); LOADALL;
  /* 005198ae lea edx, [ebp - 0xc4] */ edx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 005198b4 lea esi, [ebp - 0x90] */ esi = (u32)((u32)(ebp + 0xffffff70u));
  /* 005198ba call 0x514f50 */ esp -= 4; M32(esp) = 0x5198bfu; SAVEALL; F_00514f50(c); ABI_CHECK(0x514f50u, 0x5198bau); RETCHK(0x5198bfu, 0x5198bau); LOADALL;
  /* 005198bf mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005198c1 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 005198c4 cmp dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005198c7 jge 0x5198cc */ if (!LT_) goto L_005198cc;
  /* 005198c9 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
L_005198cc:;
  /* 005198cc mov esi, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); esi = (u32)(M32(m_)); }
  /* 005198cf mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 005198d2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005198d4 push 0x64350c */ { u32 v_ = 0x64350cu; esp -= 4; M32(esp) = v_; }
  /* 005198d9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005198da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005198db mov eax, esi */ { eax = (u32)(esi); }
  /* 005198dd call 0x40a4a0 */ esp -= 4; M32(esp) = 0x5198e2u; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x5198ddu); RETCHK(0x5198e2u, 0x5198ddu); LOADALL;
  /* 005198e2 mov edi, eax */ { edi = (u32)(eax); }
  /* 005198e4 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005198e7 jne 0x519584 */ if (!ZF_) goto L_00519584;
L_005198ed:;
  /* 005198ed mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 005198f0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005198f2 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005198f4 lea esi, [ebp - 0x11c] */ esi = (u32)((u32)(ebp + 0xfffffee4u));
  /* 005198fa call 0x40c990 */ esp -= 4; M32(esp) = 0x5198ffu; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x5198fau); RETCHK(0x5198ffu, 0x5198fau); LOADALL;
  /* 005198ff push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00519901 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00519903 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519904 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00519907 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0051990b call 0x404140 */ esp -= 4; M32(esp) = 0x519910u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51990bu); RETCHK(0x519910u, 0x51990bu); LOADALL;
  /* 00519910 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00519914 mov eax, dword ptr [ebp - 0x104] */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); eax = (u32)(M32(m_)); }
  /* 0051991a mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0051991f cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519921 jb 0x519932 */ if (CF_) goto L_00519932;
  /* 00519923 mov eax, dword ptr [ebp - 0x118] */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); eax = (u32)(M32(m_)); }
  /* 00519929 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051992a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51992fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51992au); RETCHK(0x51992fu, 0x51992au); LOADALL;
  /* 0051992f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519932:;
  /* 00519932 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00519935 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519937 mov dword ptr [ebp - 0x104], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); M32(m_) = (u32)(0xfu); }
  /* 00519941 mov dword ptr [ebp - 0x108], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M32(m_) = (u32)(0x0u); }
  /* 0051994b mov byte ptr [ebp - 0x118], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M8(m_) = (u8)(0x0u); }
  /* 00519952 je 0x519acf */ if (ZF_) goto L_00519acf;
  /* 00519958 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051995b mov ecx, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); ecx = (u32)(M32(m_)); }
  /* 0051995e mov dword ptr [edi + 0x2d8], ecx */ { const u32 m_ = (u32)(edi + 0x2d8u); M32(m_) = (u32)(ecx); }
  /* 00519964 fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 00519967 fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051996a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00519970 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00519972 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00519975 je 0x51997f */ if (ZF_) goto L_0051997f;
  /* 00519977 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00519979 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051997c fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051997f:;
  /* 0051997f fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00519982 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00519985 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051998b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051998d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00519990 je 0x51999a */ if (ZF_) goto L_0051999a;
  /* 00519992 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00519994 fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00519997 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051999a:;
  /* 0051999a cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051999d mov esi, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); esi = (u32)(M32(m_)); }
  /* 005199a0 jae 0x5199a5 */ if (!CF_) goto L_005199a5;
  /* 005199a2 lea esi, [ebp - 0x44] */ esi = (u32)((u32)(ebp + 0xffffffbcu));
L_005199a5:;
  /* 005199a5 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005199a7 call 0x61b154 */ esp -= 4; M32(esp) = 0x5199acu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5199a7u); RETCHK(0x5199acu, 0x5199a7u); LOADALL;
  /* 005199ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005199ad call 0x61b154 */ esp -= 4; M32(esp) = 0x5199b2u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5199adu); RETCHK(0x5199b2u, 0x5199adu); LOADALL;
  /* 005199b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005199b3 lea edx, [edi + 0x290] */ edx = (u32)((u32)(edi + 0x290u));
  /* 005199b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005199ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005199bb call 0x5288e0 */ esp -= 4; M32(esp) = 0x5199c0u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x5199bbu); RETCHK(0x5199c0u, 0x5199bbu); LOADALL;
  /* 005199c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005199c3 lea ecx, [ebp - 0x78] */ ecx = (u32)((u32)(ebp + 0xffffff88u));
  /* 005199c6 mov edx, eax */ { edx = (u32)(eax); }
  /* 005199c8 call 0x528970 */ esp -= 4; M32(esp) = 0x5199cdu; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x5199c8u); RETCHK(0x5199cdu, 0x5199c8u); LOADALL;
  /* 005199cd mov ebx, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); ebx = (u32)(M32(m_)); }
  /* 005199d0 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005199d2 je 0x519acf */ if (ZF_) goto L_00519acf;
  /* 005199d8 mov edx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); edx = (u32)(M32(m_)); }
  /* 005199db test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005199dd mov esi, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); esi = (u32)(M32(m_)); }
  /* 005199e0 je 0x5199ff */ if (ZF_) goto L_005199ff;
  /* 005199e2 mov ecx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ecx = (u32)(M32(m_)); }
  /* 005199e5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005199e7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005199e9 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005199eb sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005199ee sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005199f1 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005199f3 jae 0x5199ff */ if (!CF_) goto L_005199ff;
  /* 005199f5 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 005199f7 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005199fa mov dword ptr [ebp - 0x64], esi */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(esi); }
  /* 005199fd jmp 0x519a11 */ goto L_00519a11;
L_005199ff:;
  /* 005199ff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519a00 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 00519a03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519a04 lea eax, [ebp - 0x78] */ eax = (u32)((u32)(ebp + 0xffffff88u));
  /* 00519a07 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00519a0c call 0x4d2620 */ esp -= 4; M32(esp) = 0x519a11u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x519a0cu); RETCHK(0x519a11u, 0x519a0cu); LOADALL;
L_00519a11:;
  /* 00519a11 mov ebx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ebx = (u32)(M32(m_)); }
  /* 00519a17 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519a19 mov esi, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); esi = (u32)(M32(m_)); }
  /* 00519a1f je 0x519a58 */ if (ZF_) goto L_00519a58;
  /* 00519a21 mov ecx, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); ecx = (u32)(M32(m_)); }
  /* 00519a27 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519a29 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519a2b sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00519a2d sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00519a30 sar ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00519a33 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519a35 jae 0x519a58 */ if (!CF_) goto L_00519a58;
  /* 00519a37 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519a3a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519a3b lea edx, [ebp - 0x74] */ edx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 00519a3e mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00519a43 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519a45 call 0x5587d0 */ esp -= 4; M32(esp) = 0x519a4au; SAVEALL; F_005587d0(c); ABI_CHECK(0x5587d0u, 0x519a45u); RETCHK(0x519a4au, 0x519a45u); LOADALL;
  /* 00519a4a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519a4d add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00519a50 mov dword ptr [ebp - 0x88], esi */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(esi); }
  /* 00519a56 jmp 0x519a73 */ goto L_00519a73;
L_00519a58:;
  /* 00519a58 lea edx, [ebp - 0x74] */ edx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 00519a5b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00519a5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519a5d mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00519a62 lea edx, [ebp - 0x90] */ edx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00519a68 call 0x481130 */ esp -= 4; M32(esp) = 0x519a6du; SAVEALL; F_00481130(c); ABI_CHECK(0x481130u, 0x519a68u); RETCHK(0x519a6du, 0x519a68u); LOADALL;
  /* 00519a6d mov ebx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ebx = (u32)(M32(m_)); }
L_00519a73:;
  /* 00519a73 mov esi, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); esi = (u32)(M32(m_)); }
  /* 00519a79 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519a7b lea eax, [edi + 0x1d0] */ eax = (u32)((u32)(edi + 0x1d0u));
  /* 00519a81 jne 0x519a87 */ if (!ZF_) goto L_00519a87;
  /* 00519a83 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00519a85 jmp 0x519a8f */ goto L_00519a8f;
L_00519a87:;
  /* 00519a87 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00519a8a sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00519a8c sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_00519a8f:;
  /* 00519a8f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519a91 je 0x519aaf */ if (ZF_) goto L_00519aaf;
  /* 00519a93 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00519a96 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00519a98 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00519a9b cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519a9d jae 0x519aaf */ if (!CF_) goto L_00519aaf;
  /* 00519a9f mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519aa2 mov edx, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); edx = (u32)(M32(m_)); }
  /* 00519aa5 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00519aa7 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00519aaa mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00519aad jmp 0x519ac1 */ goto L_00519ac1;
L_00519aaf:;
  /* 00519aaf mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519ab2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519ab3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519ab4 lea eax, [ebp - 0x78] */ eax = (u32)((u32)(ebp + 0xffffff88u));
  /* 00519ab7 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00519abc call 0x4d2620 */ esp -= 4; M32(esp) = 0x519ac1u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x519abcu); RETCHK(0x519ac1u, 0x519abcu); LOADALL;
L_00519ac1:;
  /* 00519ac1 mov eax, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); eax = (u32)(M32(m_)); }
  /* 00519ac4 mov ecx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ecx = (u32)(M32(m_)); }
  /* 00519ac7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519ac9 jge 0x519ad8 */ if (!LT_) goto L_00519ad8;
  /* 00519acb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00519acd jmp 0x519ad8 */ goto L_00519ad8;
L_00519acf:;
  /* 00519acf mov ecx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ecx = (u32)(M32(m_)); }
  /* 00519ad2 mov ebx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ebx = (u32)(M32(m_)); }
L_00519ad8:;
  /* 00519ad8 mov edx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edx = (u32)(M32(m_)); }
  /* 00519ade add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00519ae0 mov ecx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); ecx = (u32)(M32(m_)); }
  /* 00519ae6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00519ae8 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519aea mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 00519af0 mov dword ptr [ebp - 0x94], edx */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(edx); }
  /* 00519af6 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00519af8 je 0x519bb1 */ if (ZF_) goto L_00519bb1;
  /* 00519afe mov ebx, dword ptr [ebp - 0xb0] */ { const u32 m_ = (u32)(ebp + 0xffffff50u); ebx = (u32)(M32(m_)); }
L_00519b04:;
  /* 00519b04 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00519b06 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00519b09 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00519b0b mov eax, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); eax = (u32)(M32(m_)); }
  /* 00519b11 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519b13 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519b15 mov dword ptr [ebp - 0x98], edi */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(edi); }
  /* 00519b1b mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 00519b21 je 0x519b6b */ if (ZF_) goto L_00519b6b;
  /* 00519b23 mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 00519b29 mov ecx, dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); ecx = (u32)(M32(m_)); }
  /* 00519b2f sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519b31 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00519b33 sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00519b36 sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00519b39 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519b3b jae 0x519b6b */ if (!CF_) goto L_00519b6b;
  /* 00519b3d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519b40 mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 00519b46 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519b47 lea edx, [ebp - 0xa0] */ edx = (u32)((u32)(ebp + 0xffffff60u));
  /* 00519b4d mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00519b52 call 0x51b7c0 */ esp -= 4; M32(esp) = 0x519b57u; SAVEALL; F_0051b7c0(c); ABI_CHECK(0x51b7c0u, 0x519b52u); RETCHK(0x519b57u, 0x519b52u); LOADALL;
  /* 00519b57 mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 00519b5d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519b60 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519b63 mov dword ptr [ebp - 0xac], eax */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M32(m_) = (u32)(eax); }
  /* 00519b69 jmp 0x519b8f */ goto L_00519b8f;
L_00519b6b:;
  /* 00519b6b mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 00519b71 lea edx, [ebp - 0xa0] */ edx = (u32)((u32)(ebp + 0xffffff60u));
  /* 00519b77 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00519b78 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519b79 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00519b7e lea edx, [ebp - 0xb4] */ edx = (u32)((u32)(ebp + 0xffffff4cu));
  /* 00519b84 call 0x51aea0 */ esp -= 4; M32(esp) = 0x519b89u; SAVEALL; F_0051aea0(c); ABI_CHECK(0x51aea0u, 0x519b84u); RETCHK(0x519b89u, 0x519b84u); LOADALL;
  /* 00519b89 mov ebx, dword ptr [ebp - 0xb0] */ { const u32 m_ = (u32)(ebp + 0xffffff50u); ebx = (u32)(M32(m_)); }
L_00519b8f:;
  /* 00519b8f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519b92 mov eax, dword ptr [ecx + 0x284] */ { const u32 m_ = (u32)(ecx + 0x284u); eax = (u32)(M32(m_)); }
  /* 00519b98 mov ecx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); ecx = (u32)(M32(m_)); }
  /* 00519b9e add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519ba0 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00519ba3 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519ba5 mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 00519bab jne 0x519b04 */ if (!ZF_) goto L_00519b04;
L_00519bb1:;
  /* 00519bb1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00519bb4 mov edx, dword ptr [esi + 0x1b8] */ { const u32 m_ = (u32)(esi + 0x1b8u); edx = (u32)(M32(m_)); }
  /* 00519bba mov eax, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 00519bc0 add esi, 0x1a8 */ { u32 a_ = esi, b_ = 0x1a8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00519bc6 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00519bc7 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519bc9 ja 0x519bd4 */ if (!(CF_|ZF_)) goto L_00519bd4;
  /* 00519bcb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00519bcd mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00519bcf call 0x51ad20 */ esp -= 4; M32(esp) = 0x519bd4u; SAVEALL; F_0051ad20(c); ABI_CHECK(0x51ad20u, 0x519bcfu); RETCHK(0x519bd4u, 0x519bcfu); LOADALL;
L_00519bd4:;
  /* 00519bd4 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 00519bd7 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 00519bda mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00519bdd add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00519bdf cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519be1 ja 0x519be5 */ if (!(CF_|ZF_)) goto L_00519be5;
  /* 00519be3 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
L_00519be5:;
  /* 00519be5 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00519be8 cmp dword ptr [eax + edi*4], 0 */ { const u32 m_ = (u32)(eax + edi * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519bec jne 0x519bfe */ if (!ZF_) goto L_00519bfe;
  /* 00519bee push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00519bf0 call 0x5fe934 */ esp -= 4; M32(esp) = 0x519bf5u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x519bf0u); RETCHK(0x519bf5u, 0x519bf0u); LOADALL;
  /* 00519bf5 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00519bf8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519bfb mov dword ptr [ecx + edi*4], eax */ { const u32 m_ = (u32)(ecx + edi * 4u); M32(m_) = (u32)(eax); }
L_00519bfe:;
  /* 00519bfe mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00519c01 mov edi, dword ptr [edx + edi*4] */ { const u32 m_ = (u32)(edx + edi * 4u); edi = (u32)(M32(m_)); }
  /* 00519c04 mov dword ptr [ebp - 0xa4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(edi); }
  /* 00519c0a mov dword ptr [ebp - 0x5c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edi); }
  /* 00519c0d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519c0f mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 00519c13 je 0x519c1e */ if (ZF_) goto L_00519c1e;
  /* 00519c15 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519c16 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00519c19 call 0x51b1a0 */ esp -= 4; M32(esp) = 0x519c1eu; SAVEALL; F_0051b1a0(c); ABI_CHECK(0x51b1a0u, 0x519c19u); RETCHK(0x519c1eu, 0x519c19u); LOADALL;
L_00519c1e:;
  /* 00519c1e mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00519c22 inc dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00519c25 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00519c28 mov eax, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 00519c2e mov ecx, dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 00519c34 add esi, 0x1bc */ { u32 a_ = esi, b_ = 0x1bcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00519c3a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00519c3b cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519c3d ja 0x519c48 */ if (!(CF_|ZF_)) goto L_00519c48;
  /* 00519c3f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00519c41 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00519c43 call 0x51ad20 */ esp -= 4; M32(esp) = 0x519c48u; SAVEALL; F_0051ad20(c); ABI_CHECK(0x51ad20u, 0x519c43u); RETCHK(0x519c48u, 0x519c43u); LOADALL;
L_00519c48:;
  /* 00519c48 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 00519c4b mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 00519c4e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00519c51 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00519c53 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519c55 ja 0x519c59 */ if (!(CF_|ZF_)) goto L_00519c59;
  /* 00519c57 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
L_00519c59:;
  /* 00519c59 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00519c5c cmp dword ptr [ecx + edi*4], 0 */ { const u32 m_ = (u32)(ecx + edi * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519c60 jne 0x519c72 */ if (!ZF_) goto L_00519c72;
  /* 00519c62 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00519c64 call 0x5fe934 */ esp -= 4; M32(esp) = 0x519c69u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x519c64u); RETCHK(0x519c69u, 0x519c64u); LOADALL;
  /* 00519c69 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00519c6c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519c6f mov dword ptr [edx + edi*4], eax */ { const u32 m_ = (u32)(edx + edi * 4u); M32(m_) = (u32)(eax); }
L_00519c72:;
  /* 00519c72 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00519c75 mov edi, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); edi = (u32)(M32(m_)); }
  /* 00519c78 mov dword ptr [ebp - 0xa4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(edi); }
  /* 00519c7e mov dword ptr [ebp - 0x5c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edi); }
  /* 00519c81 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519c83 mov byte ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x9u); }
  /* 00519c87 je 0x519c95 */ if (ZF_) goto L_00519c95;
  /* 00519c89 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519c8a lea ecx, [ebp - 0xb4] */ ecx = (u32)((u32)(ebp + 0xffffff4cu));
  /* 00519c90 call 0x51b250 */ esp -= 4; M32(esp) = 0x519c95u; SAVEALL; F_0051b250(c); ABI_CHECK(0x51b250u, 0x519c90u); RETCHK(0x519c95u, 0x519c90u); LOADALL;
L_00519c95:;
  /* 00519c95 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00519c99 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 00519c9c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519c9f mov ebx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ebx = (u32)(M32(m_)); }
  /* 00519ca5 mov edi, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); edi = (u32)(M32(m_)); }
  /* 00519ca8 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00519ca9 mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 00519cac mov eax, dword ptr [ecx + 0x288] */ { const u32 m_ = (u32)(ecx + 0x288u); eax = (u32)(M32(m_)); }
  /* 00519cb2 mov ecx, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); ecx = (u32)(M32(m_)); }
  /* 00519cb8 mov esi, dword ptr [ebp - 0xb0] */ { const u32 m_ = (u32)(ebp + 0xffffff50u); esi = (u32)(M32(m_)); }
  /* 00519cbe add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519cc0 mov ecx, dword ptr [ebp - 0xb8] */ { const u32 m_ = (u32)(ebp + 0xffffff48u); ecx = (u32)(M32(m_)); }
  /* 00519cc6 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 00519ccc mov eax, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); eax = (u32)(M32(m_)); }
  /* 00519ccf inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00519cd0 jmp 0x5194c9 */ goto L_005194c9;
L_00519cd5:;
  /* 00519cd5 mov ecx, dword ptr [ebp - 0xbc] */ { const u32 m_ = (u32)(ebp + 0xffffff44u); ecx = (u32)(M32(m_)); }
  /* 00519cdb mov edx, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); edx = (u32)(M32(m_)); }
  /* 00519ce1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00519ce4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519ce5 mov dword ptr [eax + 0x54], edx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(edx); }
  /* 00519ce8 call dword ptr [0x62e0d0] */ { const u32 m_ = (u32)(0x62e0d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x519ceeu; SAVEALL; call_ind(c, t_); RETCHK(0x519ceeu, 0x519ce8u); LOADALL; }
  /* 00519cee cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519cf2 jb 0x519d00 */ if (CF_) goto L_00519d00;
  /* 00519cf4 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00519cf7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00519cf8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519cfdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519cf8u); RETCHK(0x519cfdu, 0x519cf8u); LOADALL;
  /* 00519cfd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519d00:;
  /* 00519d00 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519d04 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00519d0b mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 00519d12 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 00519d16 jb 0x519d24 */ if (CF_) goto L_00519d24;
  /* 00519d18 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 00519d1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519d1c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519d21u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519d1cu); RETCHK(0x519d21u, 0x519d1cu); LOADALL;
  /* 00519d21 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519d24:;
  /* 00519d24 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519d26 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 00519d2d mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 00519d34 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 00519d38 je 0x519d43 */ if (ZF_) goto L_00519d43;
  /* 00519d3a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519d3b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519d40u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519d3bu); RETCHK(0x519d40u, 0x519d3bu); LOADALL;
  /* 00519d40 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519d43:;
  /* 00519d43 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519d45 je 0x519d50 */ if (ZF_) goto L_00519d50;
  /* 00519d47 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00519d48 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519d4du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519d48u); RETCHK(0x519d4du, 0x519d48u); LOADALL;
  /* 00519d4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519d50:;
  /* 00519d50 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519d52 je 0x519d5d */ if (ZF_) goto L_00519d5d;
  /* 00519d54 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519d55 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519d5au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519d55u); RETCHK(0x519d5au, 0x519d55u); LOADALL;
  /* 00519d5a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519d5d:;
  /* 00519d5d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00519d60 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00519d61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00519d62 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00519d69 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00519d6c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00519d6d call 0x61af31 */ esp -= 4; M32(esp) = 0x519d72u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x519d6du); RETCHK(0x519d72u, 0x519d6du); LOADALL;
  /* 00519d72 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00519d74 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00519d75 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00519d80(CPU *c) {
  NATIVE_HOOK(0x519d80u) REGS; LOADALL;
L_00519d80:;
  /* 00519d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00519d81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00519d83 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519d84 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00519d85 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00519d87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519d88 mov esi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); esi = (u32)(M32(m_)); }
  /* 00519d8b cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519d8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519d8f lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 00519d92 jb 0x519d98 */ if (CF_) goto L_00519d98;
  /* 00519d94 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00519d96 jmp 0x519d9a */ goto L_00519d9a;
L_00519d98:;
  /* 00519d98 mov edx, ecx */ { edx = (u32)(ecx); }
L_00519d9a:;
  /* 00519d9a mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 00519d9d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519d9f cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519da2 jb 0x519da6 */ if (CF_) goto L_00519da6;
  /* 00519da4 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_00519da6:;
  /* 00519da6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519da7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519da8 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00519dab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519dac mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00519dae call 0x40cdc0 */ esp -= 4; M32(esp) = 0x519db3u; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x519daeu); RETCHK(0x519db3u, 0x519daeu); LOADALL;
  /* 00519db3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00519db6 mov esi, dword ptr [eax + 0x1a0] */ { const u32 m_ = (u32)(eax + 0x1a0u); esi = (u32)(M32(m_)); }
  /* 00519dbc add eax, 0x194 */ { u32 a_ = eax, b_ = 0x194u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519dc1 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00519dc4 mov edi, eax */ { edi = (u32)(eax); }
L_00519dc6:;
  /* 00519dc6 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00519dc9 add ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00519dcc cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519dce jne 0x519dd4 */ if (!ZF_) goto L_00519dd4;
  /* 00519dd0 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519dd2 je 0x519e01 */ if (ZF_) goto L_00519e01;
L_00519dd4:;
  /* 00519dd4 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519dd7 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519dd9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519ddb ja 0x519ddf */ if (!(CF_|ZF_)) goto L_00519ddf;
  /* 00519ddd sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00519ddf:;
  /* 00519ddf mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00519de2 mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 00519de5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00519de7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00519de8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00519deb call 0x40d160 */ esp -= 4; M32(esp) = 0x519df0u; SAVEALL; F_0040d160(c); ABI_CHECK(0x40d160u, 0x519debu); RETCHK(0x519df0u, 0x519debu); LOADALL;
  /* 00519df0 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00519df2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00519df4 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00519df6 call 0x419e40 */ esp -= 4; M32(esp) = 0x519dfbu; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x519df6u); RETCHK(0x519dfbu, 0x519df6u); LOADALL;
  /* 00519dfb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00519dfe inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00519dff jmp 0x519dc6 */ goto L_00519dc6;
L_00519e01:;
  /* 00519e01 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00519e02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00519e03 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00519e05 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00519e06 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00519e08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00519e09 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00519e10(CPU *c) {
  NATIVE_HOOK(0x519e10u) REGS; LOADALL;
L_00519e10:;
  /* 00519e10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00519e11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00519e13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00519e15 push 0x624178 */ { u32 v_ = 0x624178u; esp -= 4; M32(esp) = v_; }
  /* 00519e1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00519e20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519e21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00519e28 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519e2b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00519e2c mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 00519e2f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00519e32 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519e34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519e35 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519e36 jne 0x519e4d */ if (!ZF_) goto L_00519e4d;
  /* 00519e38 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00519e3a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00519e3d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00519e44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00519e45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00519e46 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00519e47 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00519e49 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00519e4a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00519e4d:;
  /* 00519e4d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00519e4f call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x519e52u; SAVEALL; call_ind(c, t_); RETCHK(0x519e52u, 0x519e4fu); LOADALL; }
  /* 00519e52 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00519e57 mov esi, eax */ { esi = (u32)(eax); }
  /* 00519e59 call 0x560fd0 */ esp -= 4; M32(esp) = 0x519e5eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519e59u); RETCHK(0x519e5eu, 0x519e59u); LOADALL;
  /* 00519e5e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00519e61 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00519e64 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00519e69 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519e6b fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00519e6e call 0x560fd0 */ esp -= 4; M32(esp) = 0x519e73u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519e6eu); RETCHK(0x519e73u, 0x519e6eu); LOADALL;
  /* 00519e73 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00519e76 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00519e79 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00519e7e mov eax, esi */ { eax = (u32)(esi); }
  /* 00519e80 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00519e83 call 0x560fd0 */ esp -= 4; M32(esp) = 0x519e88u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519e83u); RETCHK(0x519e88u, 0x519e83u); LOADALL;
  /* 00519e88 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00519e8b fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00519e8e push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00519e93 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519e95 fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00519e98 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00519e9b call 0x560fd0 */ esp -= 4; M32(esp) = 0x519ea0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519e9bu); RETCHK(0x519ea0u, 0x519e9bu); LOADALL;
  /* 00519ea0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00519ea3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00519ea6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519ea7 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00519eac fadd dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00519eaf fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00519eb2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x519eb7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x519eb2u); RETCHK(0x519eb7u, 0x519eb2u); LOADALL;
  /* 00519eb7 mov edi, eax */ { edi = (u32)(eax); }
  /* 00519eb9 push 0x650194 */ { u32 v_ = 0x650194u; esp -= 4; M32(esp) = v_; }
  /* 00519ebe mov eax, esi */ { eax = (u32)(esi); }
  /* 00519ec0 call 0x560fd0 */ esp -= 4; M32(esp) = 0x519ec5u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519ec0u); RETCHK(0x519ec5u, 0x519ec0u); LOADALL;
  /* 00519ec5 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00519ec8 push 0x650190 */ { u32 v_ = 0x650190u; esp -= 4; M32(esp) = v_; }
  /* 00519ecd mov eax, esi */ { eax = (u32)(esi); }
  /* 00519ecf call 0x560fd0 */ esp -= 4; M32(esp) = 0x519ed4u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519ecfu); RETCHK(0x519ed4u, 0x519ecfu); LOADALL;
  /* 00519ed4 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00519ed6 push 0x650188 */ { u32 v_ = 0x650188u; esp -= 4; M32(esp) = v_; }
  /* 00519edb mov eax, esi */ { eax = (u32)(esi); }
  /* 00519edd call 0x560fd0 */ esp -= 4; M32(esp) = 0x519ee2u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519eddu); RETCHK(0x519ee2u, 0x519eddu); LOADALL;
  /* 00519ee2 mov byte ptr [ebp + 9], al */ { const u32 m_ = (u32)(ebp + 0x9u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00519ee5 push 0x650180 */ { u32 v_ = 0x650180u; esp -= 4; M32(esp) = v_; }
  /* 00519eea mov eax, esi */ { eax = (u32)(esi); }
  /* 00519eec call 0x560fd0 */ esp -= 4; M32(esp) = 0x519ef1u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519eecu); RETCHK(0x519ef1u, 0x519eecu); LOADALL;
  /* 00519ef1 mov byte ptr [ebp + 0xa], al */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00519ef4 push 0x650178 */ { u32 v_ = 0x650178u; esp -= 4; M32(esp) = v_; }
  /* 00519ef9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519efb call 0x560fd0 */ esp -= 4; M32(esp) = 0x519f00u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519efbu); RETCHK(0x519f00u, 0x519efbu); LOADALL;
  /* 00519f00 mov byte ptr [ebp + 0xb], al */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00519f03 push 0x652394 */ { u32 v_ = 0x652394u; esp -= 4; M32(esp) = v_; }
  /* 00519f08 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519f0a call 0x560fd0 */ esp -= 4; M32(esp) = 0x519f0fu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519f0au); RETCHK(0x519f0fu, 0x519f0au); LOADALL;
  /* 00519f0f mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00519f12 push 0x65238c */ { u32 v_ = 0x65238cu; esp -= 4; M32(esp) = v_; }
  /* 00519f17 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519f19 call 0x560fd0 */ esp -= 4; M32(esp) = 0x519f1eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519f19u); RETCHK(0x519f1eu, 0x519f19u); LOADALL;
  /* 00519f1e push 0x652384 */ { u32 v_ = 0x652384u; esp -= 4; M32(esp) = v_; }
  /* 00519f23 mov eax, esi */ { eax = (u32)(esi); }
  /* 00519f25 call 0x560fd0 */ esp -= 4; M32(esp) = 0x519f2au; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x519f25u); RETCHK(0x519f2au, 0x519f25u); LOADALL;
  /* 00519f2a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00519f2d mov eax, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00519f30 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519f32 je 0x519f40 */ if (ZF_) goto L_00519f40;
  /* 00519f34 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519f35 lea esi, [ebp - 0x28] */ esi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00519f38 call 0x52d060 */ esp -= 4; M32(esp) = 0x519f3du; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x519f38u); RETCHK(0x519f3du, 0x519f38u); LOADALL;
  /* 00519f3d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519f40:;
  /* 00519f40 movzx esi, byte ptr [ebp + 0xb] */ { const u32 m_ = (u32)(ebp + 0xbu); esi = (u32)(M8(m_)); }
  /* 00519f44 movzx edx, byte ptr [ebp + 0xa] */ { const u32 m_ = (u32)(ebp + 0xau); edx = (u32)(M8(m_)); }
  /* 00519f48 movzx eax, byte ptr [ebp + 9] */ { const u32 m_ = (u32)(ebp + 0x9u); eax = (u32)(M8(m_)); }
  /* 00519f4c shl esi, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00519f4f or esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00519f51 shl esi, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00519f54 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00519f56 movzx ecx, bl */ { ecx = (u32)((ebx & 0xffu)); }
  /* 00519f59 shl esi, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00519f5c mov eax, edi */ { eax = (u32)(edi); }
  /* 00519f5e or esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00519f60 mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 00519f67 mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 00519f6e mov byte ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)(0x0u); }
  /* 00519f72 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
L_00519f75:;
  /* 00519f75 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00519f77 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00519f78 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00519f7a jne 0x519f75 */ if (!ZF_) goto L_00519f75;
  /* 00519f7c sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00519f7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519f7f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519f80 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00519f83 call 0x404420 */ esp -= 4; M32(esp) = 0x519f88u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x519f83u); RETCHK(0x519f88u, 0x519f83u); LOADALL;
  /* 00519f88 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 00519f8b mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00519f8e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519f8f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00519f91 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00519f92 setne bl */ { ebx = (ebx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00519f95 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00519f98 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00519f9b mov eax, esp */ { eax = (u32)(esp); }
  /* 00519f9d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00519fa4 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 00519fa7 call 0x52cea0 */ esp -= 4; M32(esp) = 0x519facu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x519fa7u); RETCHK(0x519facu, 0x519fa7u); LOADALL;
  /* 00519fac mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00519faf lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00519fb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00519fb3 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00519fb5 call 0x519230 */ esp -= 4; M32(esp) = 0x519fbau; SAVEALL; F_00519230(c); ABI_CHECK(0x519230u, 0x519fb5u); RETCHK(0x519fbau, 0x519fb5u); LOADALL;
  /* 00519fba mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00519fbc cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00519fc0 jb 0x519fce */ if (CF_) goto L_00519fce;
  /* 00519fc2 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 00519fc5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00519fc6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x519fcbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x519fc6u); RETCHK(0x519fcbu, 0x519fc6u); LOADALL;
  /* 00519fcb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00519fce:;
  /* 00519fce mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00519fd1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00519fd2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00519fd3 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00519fd5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00519fdc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00519fdd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00519fdf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00519fe0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00519ff0(CPU *c) {
  NATIVE_HOOK(0x519ff0u) REGS; LOADALL;
L_00519ff0:;
  /* 00519ff0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00519ff1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00519ff2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00519ff3 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00519ff5 mov esi, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); esi = (u32)(M32(m_)); }
  /* 00519ffb mov eax, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 0051a001 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051a003 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a005 je 0x51a025 */ if (ZF_) goto L_0051a025;
L_0051a007:;
  /* 0051a007 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051a009 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a00b je 0x51a018 */ if (ZF_) goto L_0051a018;
  /* 0051a00d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a00e call 0x5ab020 */ esp -= 4; M32(esp) = 0x51a013u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x51a00eu); RETCHK(0x51a013u, 0x51a00eu); LOADALL;
  /* 0051a013 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051a016 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
L_0051a018:;
  /* 0051a018 mov eax, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 0051a01e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051a021 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a023 jne 0x51a007 */ if (!ZF_) goto L_0051a007;
L_0051a025:;
  /* 0051a025 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051a026 lea esi, [edi + 0x1d0] */ esi = (u32)((u32)(edi + 0x1d0u));
  /* 0051a02c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0051a02e call 0x558750 */ esp -= 4; M32(esp) = 0x51a033u; SAVEALL; F_00558750(c); ABI_CHECK(0x558750u, 0x51a02eu); RETCHK(0x51a033u, 0x51a02eu); LOADALL;
  /* 0051a033 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051a036 mov dword ptr [edi + 0x2e4], eax */ { const u32 m_ = (u32)(edi + 0x2e4u); M32(m_) = (u32)(eax); }
  /* 0051a03c mov dword ptr [edi + 0x2e8], eax */ { const u32 m_ = (u32)(edi + 0x2e8u); M32(m_) = (u32)(eax); }
  /* 0051a042 mov eax, dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); eax = (u32)(M32(m_)); }
  /* 0051a048 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a04a je 0x51a0b3 */ if (ZF_) goto L_0051a0b3;
  /* 0051a04c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a04e je 0x51a0b3 */ if (ZF_) goto L_0051a0b3;
L_0051a050:;
  /* 0051a050 mov eax, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); eax = (u32)(M32(m_)); }
  /* 0051a056 mov ecx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0051a05c mov esi, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); esi = (u32)(M32(m_)); }
  /* 0051a05f cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a063 jb 0x51a071 */ if (CF_) goto L_0051a071;
  /* 0051a065 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051a068 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051a069 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51a06eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51a069u); RETCHK(0x51a06eu, 0x51a069u); LOADALL;
  /* 0051a06e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051a071:;
  /* 0051a071 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0051a078 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051a07b mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051a07e mov edx, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); edx = (u32)(M32(m_)); }
  /* 0051a084 mov ecx, dword ptr [edi + 0x19c] */ { const u32 m_ = (u32)(edi + 0x19cu); ecx = (u32)(M32(m_)); }
  /* 0051a08a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a08b mov eax, edx */ { eax = (u32)(edx); }
  /* 0051a08d cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a08f mov dword ptr [edi + 0x1a0], edx */ { const u32 m_ = (u32)(edi + 0x1a0u); M32(m_) = (u32)(edx); }
  /* 0051a095 ja 0x51a09d */ if (!(CF_|ZF_)) goto L_0051a09d;
  /* 0051a097 mov dword ptr [edi + 0x1a0], ebx */ { const u32 m_ = (u32)(edi + 0x1a0u); M32(m_) = (u32)(ebx); }
L_0051a09d:;
  /* 0051a09d dec dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051a0a3 jne 0x51a0ab */ if (!ZF_) goto L_0051a0ab;
  /* 0051a0a5 mov dword ptr [edi + 0x1a0], ebx */ { const u32 m_ = (u32)(edi + 0x1a0u); M32(m_) = (u32)(ebx); }
L_0051a0ab:;
  /* 0051a0ab cmp dword ptr [edi + 0x1a4], ebx */ { const u32 m_ = (u32)(edi + 0x1a4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a0b1 jne 0x51a050 */ if (!ZF_) goto L_0051a050;
L_0051a0b3:;
  /* 0051a0b3 mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 0051a0b9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a0bb je 0x51a11e */ if (ZF_) goto L_0051a11e;
  /* 0051a0bd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a0bf je 0x51a11e */ if (ZF_) goto L_0051a11e;
L_0051a0c1:;
  /* 0051a0c1 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0051a0c7 mov ecx, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); ecx = (u32)(M32(m_)); }
  /* 0051a0cd mov esi, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); esi = (u32)(M32(m_)); }
  /* 0051a0d0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051a0d3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a0d5 je 0x51a0e0 */ if (ZF_) goto L_0051a0e0;
  /* 0051a0d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a0d8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51a0ddu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51a0d8u); RETCHK(0x51a0ddu, 0x51a0d8u); LOADALL;
  /* 0051a0dd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051a0e0:;
  /* 0051a0e0 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051a0e3 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051a0e6 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0051a0e9 mov edx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 0051a0ef mov ecx, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 0051a0f5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a0f6 mov eax, edx */ { eax = (u32)(edx); }
  /* 0051a0f8 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a0fa mov dword ptr [edi + 0x1c8], edx */ { const u32 m_ = (u32)(edi + 0x1c8u); M32(m_) = (u32)(edx); }
  /* 0051a100 ja 0x51a108 */ if (!(CF_|ZF_)) goto L_0051a108;
  /* 0051a102 mov dword ptr [edi + 0x1c8], ebx */ { const u32 m_ = (u32)(edi + 0x1c8u); M32(m_) = (u32)(ebx); }
L_0051a108:;
  /* 0051a108 dec dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051a10e jne 0x51a116 */ if (!ZF_) goto L_0051a116;
  /* 0051a110 mov dword ptr [edi + 0x1c8], ebx */ { const u32 m_ = (u32)(edi + 0x1c8u); M32(m_) = (u32)(ebx); }
L_0051a116:;
  /* 0051a116 cmp dword ptr [edi + 0x1cc], ebx */ { const u32 m_ = (u32)(edi + 0x1ccu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a11c jne 0x51a0c1 */ if (!ZF_) goto L_0051a0c1;
L_0051a11e:;
  /* 0051a11e mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0051a124 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a126 je 0x51a189 */ if (ZF_) goto L_0051a189;
  /* 0051a128 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a12a je 0x51a189 */ if (ZF_) goto L_0051a189;
L_0051a12c:;
  /* 0051a12c mov eax, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); eax = (u32)(M32(m_)); }
  /* 0051a132 mov edx, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 0051a138 mov esi, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); esi = (u32)(M32(m_)); }
  /* 0051a13b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051a13e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a140 je 0x51a14b */ if (ZF_) goto L_0051a14b;
  /* 0051a142 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a143 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51a148u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51a143u); RETCHK(0x51a148u, 0x51a143u); LOADALL;
  /* 0051a148 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051a14b:;
  /* 0051a14b mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051a14e mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051a151 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0051a154 mov edx, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 0051a15a mov ecx, dword ptr [edi + 0x1b0] */ { const u32 m_ = (u32)(edi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 0051a160 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a161 mov eax, edx */ { eax = (u32)(edx); }
  /* 0051a163 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a165 mov dword ptr [edi + 0x1b4], edx */ { const u32 m_ = (u32)(edi + 0x1b4u); M32(m_) = (u32)(edx); }
  /* 0051a16b ja 0x51a173 */ if (!(CF_|ZF_)) goto L_0051a173;
  /* 0051a16d mov dword ptr [edi + 0x1b4], ebx */ { const u32 m_ = (u32)(edi + 0x1b4u); M32(m_) = (u32)(ebx); }
L_0051a173:;
  /* 0051a173 dec dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051a179 jne 0x51a181 */ if (!ZF_) goto L_0051a181;
  /* 0051a17b mov dword ptr [edi + 0x1b4], ebx */ { const u32 m_ = (u32)(edi + 0x1b4u); M32(m_) = (u32)(ebx); }
L_0051a181:;
  /* 0051a181 cmp dword ptr [edi + 0x1b8], ebx */ { const u32 m_ = (u32)(edi + 0x1b8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a187 jne 0x51a12c */ if (!ZF_) goto L_0051a12c;
L_0051a189:;
  /* 0051a189 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051a18a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051a18b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051a18c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051a190(CPU *c) {
  NATIVE_HOOK(0x51a190u) REGS; LOADALL;
L_0051a190:;
  /* 0051a190 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051a191 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051a193 sub esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051a196 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051a197 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051a198 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051a199 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0051a19b lea eax, [edi + 0x2fc] */ eax = (u32)((u32)(edi + 0x2fcu));
  /* 0051a1a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a1a2 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0051a1a5 call dword ptr [0x62e15c] */ { const u32 m_ = (u32)(0x62e15cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51a1abu; SAVEALL; call_ind(c, t_); RETCHK(0x51a1abu, 0x51a1a5u); LOADALL; }
  /* 0051a1ab fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051a1ae fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a1b1 mov eax, dword ptr [edi + 0x274] */ { const u32 m_ = (u32)(edi + 0x274u); eax = (u32)(M32(m_)); }
  /* 0051a1b7 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 0051a1ba fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a1c0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a1c2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a1c5 je 0x51a1cf */ if (ZF_) goto L_0051a1cf;
  /* 0051a1c7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a1c9 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051a1cc fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a1cf:;
  /* 0051a1cf fild dword ptr [edi + 0x278] */ { const u32 m_ = (u32)(edi + 0x278u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a1d5 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a1d7 fisub dword ptr [edi + 0x280] */ { const u32 m_ = (u32)(edi + 0x280u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 0051a1dd fisub dword ptr [edi + 0x54] */ { const u32 m_ = (u32)(edi + 0x54u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 0051a1e0 call 0x61b154 */ esp -= 4; M32(esp) = 0x51a1e5u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x51a1e0u); RETCHK(0x51a1e5u, 0x51a1e0u); LOADALL;
  /* 0051a1e5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a1e7 mov edx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 0051a1ed mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0051a1f0 mov eax, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0051a1f6 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 0051a1f9 mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 0051a1fc mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
L_0051a203:;
  /* 0051a203 mov ebx, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ebx = (u32)(M32(m_)); }
  /* 0051a209 mov esi, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); esi = (u32)(M32(m_)); }
  /* 0051a20f lea ecx, [edi + 0x1a8] */ ecx = (u32)((u32)(edi + 0x1a8u));
  /* 0051a215 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051a217 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051a219 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a21b jne 0x51a225 */ if (!ZF_) goto L_0051a225;
  /* 0051a21d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a21f je 0x51a7a9 */ if (ZF_) goto L_0051a7a9;
L_0051a225:;
  /* 0051a225 mov esi, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); esi = (u32)(M32(m_)); }
  /* 0051a22b add esi, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051a231 lea ecx, [edi + 0x1bc] */ ecx = (u32)((u32)(edi + 0x1bcu));
  /* 0051a237 mov dword ptr [ebp - 0x40], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esi); }
  /* 0051a23a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051a23c cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a23e jne 0x51a249 */ if (!ZF_) goto L_0051a249;
  /* 0051a240 cmp edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a243 je 0x51a7a9 */ if (ZF_) goto L_0051a7a9;
L_0051a249:;
  /* 0051a249 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051a24c cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a24e ja 0x51a252 */ if (!(CF_|ZF_)) goto L_0051a252;
  /* 0051a250 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051a252:;
  /* 0051a252 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051a255 mov eax, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0051a258 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051a25b cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a25d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0051a260 mov eax, edx */ { eax = (u32)(edx); }
  /* 0051a262 ja 0x51a266 */ if (!(CF_|ZF_)) goto L_0051a266;
  /* 0051a264 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051a266:;
  /* 0051a266 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051a269 mov eax, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0051a26c mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0051a26f cmp edx, dword ptr [edi + 0x2e4] */ { const u32 m_ = (u32)(edi + 0x2e4u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a275 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0051a278 jne 0x51a45b */ if (!ZF_) goto L_0051a45b;
  /* 0051a27e mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051a281 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051a283 je 0x51a45b */ if (ZF_) goto L_0051a45b;
  /* 0051a289 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051a28c mov eax, edx */ { eax = (u32)(edx); }
  /* 0051a28e sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051a290 sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051a293 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051a295 je 0x51a45b */ if (ZF_) goto L_0051a45b;
  /* 0051a29b fild dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)(s32)M32(m_)); }
  /* 0051a29d add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051a2a0 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a2a2 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a2a5 fild dword ptr [ecx - 0xc] */ { const u32 m_ = (u32)(ecx + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a2a8 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a2ab fild dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051a2ae fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a2b1 fild dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a2b4 je 0x51a313 */ if (ZF_) goto L_0051a313;
L_0051a2b6:;
  /* 0051a2b6 fild dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)(s32)M32(m_)); }
  /* 0051a2b8 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0051a2bb fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a2bd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a2bf test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a2c2 jnp 0x51a2c9 */ if (!PF_) goto L_0051a2c9;
  /* 0051a2c4 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a2c7 jmp 0x51a2cb */ goto L_0051a2cb;
L_0051a2c9:;
  /* 0051a2c9 fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051a2cb:;
  /* 0051a2cb fild dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a2ce fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0051a2d1 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a2d3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a2d5 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a2d8 jnp 0x51a2df */ if (!PF_) goto L_0051a2df;
  /* 0051a2da fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a2dd jmp 0x51a2e1 */ goto L_0051a2e1;
L_0051a2df:;
  /* 0051a2df fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051a2e1:;
  /* 0051a2e1 fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051a2e4 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 0051a2e7 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a2e9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a2eb test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a2ee je 0x51a2f5 */ if (ZF_) goto L_0051a2f5;
  /* 0051a2f0 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a2f3 jmp 0x51a2f7 */ goto L_0051a2f7;
L_0051a2f5:;
  /* 0051a2f5 fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051a2f7:;
  /* 0051a2f7 fild dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a2fa fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a2fd fcom dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a300 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a302 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a305 je 0x51a30c */ if (ZF_) goto L_0051a30c;
  /* 0051a307 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a309 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
L_0051a30c:;
  /* 0051a30c add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051a30f cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a311 jne 0x51a2b6 */ if (!ZF_) goto L_0051a2b6;
L_0051a313:;
  /* 0051a313 fild dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a316 mov ecx, dword ptr [edi + 0x274] */ { const u32 m_ = (u32)(edi + 0x274u); ecx = (u32)(M32(m_)); }
  /* 0051a31c fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0051a31f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0051a322 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0051a324 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a327 fild dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a32a fst dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); }
  /* 0051a32d fadd dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051a330 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a333 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0051a335 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a338 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a33a fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0051a33d fadd dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051a340 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a343 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051a346 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0051a349 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a34b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a34d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a350 jp 0x51a357 */ if (PF_) goto L_0051a357;
  /* 0051a352 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a355 jmp 0x51a3b6 */ goto L_0051a3b6;
L_0051a357:;
  /* 0051a357 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a359 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0051a35c fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a35f fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a365 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a367 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a36a je 0x51a374 */ if (ZF_) goto L_0051a374;
  /* 0051a36c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a36e fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0051a371 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a374:;
  /* 0051a374 mov eax, dword ptr [edi + 0x27c] */ { const u32 m_ = (u32)(edi + 0x27cu); eax = (u32)(M32(m_)); }
  /* 0051a37a add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051a37c mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0051a37f fild dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a382 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0051a385 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a387 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 0051a38a fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0051a38c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a38e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a390 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a393 jne 0x51a3b6 */ if (!ZF_) goto L_0051a3b6;
  /* 0051a395 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0051a398 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a39b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a3a1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a3a3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a3a6 je 0x51a3b0 */ if (ZF_) goto L_0051a3b0;
  /* 0051a3a8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a3aa fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0051a3ad fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a3b0:;
  /* 0051a3b0 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a3b3 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
L_0051a3b6:;
  /* 0051a3b6 mov ecx, dword ptr [edi + 0x278] */ { const u32 m_ = (u32)(edi + 0x278u); ecx = (u32)(M32(m_)); }
  /* 0051a3bc mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0051a3bf fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a3c2 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0051a3c5 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a3c7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a3c9 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a3cc jp 0x51a3d3 */ if (PF_) goto L_0051a3d3;
  /* 0051a3ce fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a3d1 jmp 0x51a432 */ goto L_0051a432;
L_0051a3d3:;
  /* 0051a3d3 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a3d5 fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051a3d8 fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a3db fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a3e1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a3e3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a3e6 je 0x51a3f0 */ if (ZF_) goto L_0051a3f0;
  /* 0051a3e8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a3ea fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051a3ed fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a3f0:;
  /* 0051a3f0 mov edx, dword ptr [edi + 0x280] */ { const u32 m_ = (u32)(edi + 0x280u); edx = (u32)(M32(m_)); }
  /* 0051a3f6 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051a3f8 mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 0051a3fb fild dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a3fe fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0051a401 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a403 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 0051a406 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0051a408 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a40a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a40c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a40f jne 0x51a432 */ if (!ZF_) goto L_0051a432;
  /* 0051a411 fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051a414 fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a417 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a41d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a41f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a422 je 0x51a42c */ if (ZF_) goto L_0051a42c;
  /* 0051a424 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a426 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051a429 fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a42c:;
  /* 0051a42c fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a42f fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
L_0051a432:;
  /* 0051a432 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051a433 lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 0051a436 mov byte ptr [ebp - 8], 0xff */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)(0xffu); }
  /* 0051a43a mov byte ptr [ebp - 7], 0xff */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M8(m_) = (u8)(0xffu); }
  /* 0051a43e mov byte ptr [ebp - 6], 0xff */ { const u32 m_ = (u32)(ebp + 0xfffffffau); M8(m_) = (u8)(0xffu); }
  /* 0051a442 mov byte ptr [ebp - 5], 0x19 */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)(0x19u); }
  /* 0051a446 call 0x52cf90 */ esp -= 4; M32(esp) = 0x51a44bu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51a446u); RETCHK(0x51a44bu, 0x51a446u); LOADALL;
  /* 0051a44b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051a44e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051a450 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051a453 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a454 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051a456 call 0x527040 */ esp -= 4; M32(esp) = 0x51a45bu; SAVEALL; F_00527040(c); ABI_CHECK(0x527040u, 0x51a456u); RETCHK(0x51a45bu, 0x51a456u); LOADALL;
L_0051a45b:;
  /* 0051a45b mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 0051a45e mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051a461 cmp edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a464 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0051a467 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0051a46a mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 0051a46d je 0x51a78a */ if (ZF_) goto L_0051a78a;
L_0051a473:;
  /* 0051a473 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0051a476 cmp ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a479 je 0x51a78a */ if (ZF_) goto L_0051a78a;
  /* 0051a47f mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0051a481 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051a483 je 0x51a776 */ if (ZF_) goto L_0051a776;
  /* 0051a489 lea eax, [edi + 0x1e0] */ eax = (u32)((u32)(edi + 0x1e0u));
  /* 0051a48f call 0x526830 */ esp -= 4; M32(esp) = 0x51a494u; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x51a48fu); RETCHK(0x51a494u, 0x51a48fu); LOADALL;
  /* 0051a494 fild dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)(s32)M32(m_)); }
  /* 0051a496 mov dword ptr [ebp - 0x64], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x0u); }
  /* 0051a49d mov dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(0x0u); }
  /* 0051a4a4 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a4a7 fild dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a4aa fild dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a4ad fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a4b0 fild dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051a4b3 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 0051a4b6 fsub dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a4b9 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a4bf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a4c1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a4c4 je 0x51a4ce */ if (ZF_) goto L_0051a4ce;
  /* 0051a4c6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a4c8 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0051a4cb fsub dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a4ce:;
  /* 0051a4ce mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0051a4d0 fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051a4d3 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a4d6 fdiv dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0051a4d9 fadd dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051a4df fstp dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a4e2 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0051a4e4 fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0051a4e6 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a4ec fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a4ee test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a4f1 je 0x51a4f9 */ if (ZF_) goto L_0051a4f9;
  /* 0051a4f3 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a4f5 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0051a4f7 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
L_0051a4f9:;
  /* 0051a4f9 fild dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a4fc mov ecx, dword ptr [edi + 0x274] */ { const u32 m_ = (u32)(edi + 0x274u); ecx = (u32)(M32(m_)); }
  /* 0051a502 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0051a505 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a508 fdiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0051a50b fadd dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051a511 fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a514 fild dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a517 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0051a51a fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0051a51c fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a51f fild dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a522 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0051a524 fadd st(4) */ ST(0) = FR(ST(0) + ST(4));
  /* 0051a526 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a529 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0051a52b fadd dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051a52e fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a531 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0051a533 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a536 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a538 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a53a fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051a53d fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0051a540 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a542 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a544 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a547 jp 0x51a574 */ if (PF_) goto L_0051a574;
  /* 0051a549 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 0051a54c fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a54e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a550 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a552 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a555 jnp 0x51a776 */ if (!PF_) goto L_0051a776;
  /* 0051a55b fild dword ptr [edi + 0x274] */ { const u32 m_ = (u32)(edi + 0x274u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a561 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0051a564 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a566 fdiv dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0051a569 fstp dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a56c fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a56f jmp 0x51a636 */ goto L_0051a636;
L_0051a574:;
  /* 0051a574 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a576 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0051a579 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a57c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a582 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a584 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a587 je 0x51a591 */ if (ZF_) goto L_0051a591;
  /* 0051a589 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a58b fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0051a58e fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a591:;
  /* 0051a591 mov eax, dword ptr [edi + 0x27c] */ { const u32 m_ = (u32)(edi + 0x27cu); eax = (u32)(M32(m_)); }
  /* 0051a597 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051a599 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051a59c fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051a59f fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0051a5a2 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a5a4 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 0051a5a7 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0051a5a9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a5ab fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a5ad test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a5b0 jne 0x51a636 */ if (!ZF_) goto L_0051a636;
  /* 0051a5b6 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0051a5b9 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a5bc fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a5c2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a5c4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a5c7 je 0x51a5d1 */ if (ZF_) goto L_0051a5d1;
  /* 0051a5c9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a5cb fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0051a5ce fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a5d1:;
  /* 0051a5d1 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0051a5d4 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a5d6 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0051a5d9 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0051a5db fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a5dd fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a5df test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a5e2 je 0x51a776 */ if (ZF_) goto L_0051a776;
  /* 0051a5e8 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0051a5eb fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a5ee fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a5f4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a5f6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a5f9 je 0x51a603 */ if (ZF_) goto L_0051a603;
  /* 0051a5fb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a5fd fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0051a600 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a603:;
  /* 0051a603 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a606 fsub dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a609 fdiv dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0051a60c fadd dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051a612 fstp dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a615 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0051a618 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a61b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a621 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a623 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a626 je 0x51a630 */ if (ZF_) goto L_0051a630;
  /* 0051a628 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a62a fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0051a62d fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a630:;
  /* 0051a630 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a633 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
L_0051a636:;
  /* 0051a636 mov ecx, dword ptr [edi + 0x278] */ { const u32 m_ = (u32)(edi + 0x278u); ecx = (u32)(M32(m_)); }
  /* 0051a63c mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0051a63f fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a642 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0051a645 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a647 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a649 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a64c jp 0x51a679 */ if (PF_) goto L_0051a679;
  /* 0051a64e fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 0051a651 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051a653 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a655 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a657 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a65a jnp 0x51a776 */ if (!PF_) goto L_0051a776;
  /* 0051a660 fild dword ptr [edi + 0x278] */ { const u32 m_ = (u32)(edi + 0x278u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a666 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0051a669 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a66b fdiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0051a66e fstp dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a671 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a674 jmp 0x51a73b */ goto L_0051a73b;
L_0051a679:;
  /* 0051a679 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a67b fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051a67e fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a681 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a687 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a689 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a68c je 0x51a696 */ if (ZF_) goto L_0051a696;
  /* 0051a68e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a690 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051a693 fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a696:;
  /* 0051a696 mov eax, dword ptr [edi + 0x280] */ { const u32 m_ = (u32)(edi + 0x280u); eax = (u32)(M32(m_)); }
  /* 0051a69c add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051a69e mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0051a6a1 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a6a4 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0051a6a7 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a6a9 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 0051a6ac fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0051a6ae fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a6b0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a6b2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a6b5 jne 0x51a73b */ if (!ZF_) goto L_0051a73b;
  /* 0051a6bb fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051a6be fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a6c1 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a6c7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a6c9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a6cc je 0x51a6d6 */ if (ZF_) goto L_0051a6d6;
  /* 0051a6ce fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a6d0 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051a6d3 fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a6d6:;
  /* 0051a6d6 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0051a6d9 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a6db fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0051a6de fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0051a6e0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a6e2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a6e4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a6e7 je 0x51a776 */ if (ZF_) goto L_0051a776;
  /* 0051a6ed fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051a6f0 fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a6f3 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a6f9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a6fb test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a6fe je 0x51a708 */ if (ZF_) goto L_0051a708;
  /* 0051a700 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a702 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051a705 fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a708:;
  /* 0051a708 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a70b fsub dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a70e fdiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0051a711 fadd dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051a717 fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a71a fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051a71d fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a720 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a726 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a728 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a72b je 0x51a735 */ if (ZF_) goto L_0051a735;
  /* 0051a72d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a72f fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051a732 fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a735:;
  /* 0051a735 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a738 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
L_0051a73b:;
  /* 0051a73b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051a73c lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 0051a73f call 0x52cf90 */ esp -= 4; M32(esp) = 0x51a744u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51a73fu); RETCHK(0x51a744u, 0x51a73fu); LOADALL;
  /* 0051a744 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051a747 lea eax, [edi + 0x2f5] */ eax = (u32)((u32)(edi + 0x2f5u));
  /* 0051a74d lea ecx, [edi + 0x1e0] */ ecx = (u32)((u32)(edi + 0x1e0u));
  /* 0051a753 call 0x526840 */ esp -= 4; M32(esp) = 0x51a758u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x51a753u); RETCHK(0x51a758u, 0x51a753u); LOADALL;
  /* 0051a758 mov edx, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); edx = (u32)(M32(m_)); }
  /* 0051a75b mov eax, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); eax = (u32)(M32(m_)); }
  /* 0051a75e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051a75f mov edx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); edx = (u32)(M32(m_)); }
  /* 0051a762 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a763 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0051a766 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051a767 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a768 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051a769 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051a76b call 0x500ca0 */ esp -= 4; M32(esp) = 0x51a770u; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x51a76bu); RETCHK(0x51a770u, 0x51a76bu); LOADALL;
  /* 0051a770 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0051a773 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
L_0051a776:;
  /* 0051a776 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051a779 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051a77c add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051a77f cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a781 mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 0051a784 jne 0x51a473 */ if (!ZF_) goto L_0051a473;
L_0051a78a:;
  /* 0051a78a mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 0051a78d mov ecx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0051a790 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0051a793 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a794 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a795 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a796 mov dword ptr [ebp - 0x38], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edx); }
  /* 0051a799 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0051a79c mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 0051a79f mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 0051a7a2 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0051a7a4 jmp 0x51a203 */ goto L_0051a203;
L_0051a7a9:;
  /* 0051a7a9 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0051a7ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051a7ad call dword ptr [0x62e0d0] */ { const u32 m_ = (u32)(0x62e0d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51a7b3u; SAVEALL; call_ind(c, t_); RETCHK(0x51a7b3u, 0x51a7adu); LOADALL; }
  /* 0051a7b3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051a7b4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051a7b5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051a7b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051a7b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051a7b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051a7c0(CPU *c) {
  NATIVE_HOOK(0x51a7c0u) REGS; LOADALL;
L_0051a7c0:;
  /* 0051a7c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051a7c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051a7c3 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051a7c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051a7c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051a7c8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051a7ca mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051a7cd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051a7ce lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051a7d1 call 0x52ce80 */ esp -= 4; M32(esp) = 0x51a7d6u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x51a7d1u); RETCHK(0x51a7d6u, 0x51a7d1u); LOADALL;
  /* 0051a7d6 lea edi, [ebp - 8] */ edi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051a7d9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051a7db call 0x52d000 */ esp -= 4; M32(esp) = 0x51a7e0u; SAVEALL; F_0052d000(c); ABI_CHECK(0x52d000u, 0x51a7dbu); RETCHK(0x51a7e0u, 0x51a7dbu); LOADALL;
  /* 0051a7e0 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051a7e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a7e3 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051a7e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051a7e7 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051a7e9 call 0x51a860 */ esp -= 4; M32(esp) = 0x51a7eeu; SAVEALL; F_0051a860(c); ABI_CHECK(0x51a860u, 0x51a7e9u); RETCHK(0x51a7eeu, 0x51a7e9u); LOADALL;
  /* 0051a7ee mov ebx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ebx = (u32)(M32(m_)); }
  /* 0051a7f1 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a7f4 je 0x51a850 */ if (ZF_) goto L_0051a850;
  /* 0051a7f6 mov edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edi = (u32)(M32(m_)); }
  /* 0051a7f9 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a7fc je 0x51a850 */ if (ZF_) goto L_0051a850;
  /* 0051a7fe mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051a801 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0051a804 mov dword ptr [ebp - 0x38], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edx); }
  /* 0051a807 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0051a80a mov dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x0u); }
  /* 0051a811 mov dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(esi); }
  /* 0051a814 call 0x508540 */ esp -= 4; M32(esp) = 0x51a819u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51a814u); RETCHK(0x51a819u, 0x51a814u); LOADALL;
  /* 0051a819 cmp ebx, dword ptr [esi + 0x2e4] */ { const u32 m_ = (u32)(esi + 0x2e4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a81f jne 0x51a829 */ if (!ZF_) goto L_0051a829;
  /* 0051a821 cmp edi, dword ptr [esi + 0x2e8] */ { const u32 m_ = (u32)(esi + 0x2e8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a827 je 0x51a850 */ if (ZF_) goto L_0051a850;
L_0051a829:;
  /* 0051a829 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0051a82c lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051a82f mov dword ptr [esi + 0x2e4], ebx */ { const u32 m_ = (u32)(esi + 0x2e4u); M32(m_) = (u32)(ebx); }
  /* 0051a835 mov dword ptr [esi + 0x2e8], edi */ { const u32 m_ = (u32)(esi + 0x2e8u); M32(m_) = (u32)(edi); }
  /* 0051a83b mov dword ptr [ebp - 0x28], 7 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x7u); }
  /* 0051a842 mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 0051a845 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0051a848 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 0051a84b call 0x508540 */ esp -= 4; M32(esp) = 0x51a850u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51a84bu); RETCHK(0x51a850u, 0x51a84bu); LOADALL;
L_0051a850:;
  /* 0051a850 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051a851 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051a852 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051a853 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051a855 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051a856 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051a860(CPU *c) {
  NATIVE_HOOK(0x51a860u) REGS; LOADALL;
L_0051a860:;
  /* 0051a860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051a861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051a863 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051a866 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051a867 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051a868 mov esi, eax */ { esi = (u32)(eax); }
  /* 0051a86a fld dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051a86d mov eax, dword ptr [esi + 0x274] */ { const u32 m_ = (u32)(esi + 0x274u); eax = (u32)(M32(m_)); }
  /* 0051a873 fsub dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051a876 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0051a879 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051a87a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051a880 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a882 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a885 je 0x51a88f */ if (ZF_) goto L_0051a88f;
  /* 0051a887 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a889 fld dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051a88c fsub dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051a88f:;
  /* 0051a88f fild dword ptr [esi + 0x278] */ { const u32 m_ = (u32)(esi + 0x278u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a895 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0051a897 fisub dword ptr [esi + 0x280] */ { const u32 m_ = (u32)(esi + 0x280u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 0051a89d fisub dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 0051a8a0 call 0x61b154 */ esp -= 4; M32(esp) = 0x51a8a5u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x51a8a0u); RETCHK(0x51a8a5u, 0x51a8a0u); LOADALL;
  /* 0051a8a5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051a8a7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051a8aa mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0051a8ad lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051a8b0 call 0x52ce80 */ esp -= 4; M32(esp) = 0x51a8b5u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x51a8b0u); RETCHK(0x51a8b5u, 0x51a8b0u); LOADALL;
  /* 0051a8b5 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a8b8 mov eax, dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0051a8be lea edi, [esi + 0x1bc] */ edi = (u32)((u32)(esi + 0x1bcu));
  /* 0051a8c4 fsubr dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0051a8c7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051a8c9 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051a8cc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051a8ce fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051a8d1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051a8d3 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a8d6 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 0051a8dd mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0051a8e0 fsubr dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0051a8e3 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
L_0051a8e6:;
  /* 0051a8e6 mov edx, edi */ { edx = (u32)(edi); }
  /* 0051a8e8 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a8ea jne 0x51a8f0 */ if (!ZF_) goto L_0051a8f0;
  /* 0051a8ec cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a8ee je 0x51a96c */ if (ZF_) goto L_0051a96c;
L_0051a8f0:;
  /* 0051a8f0 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051a8f3 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a8f5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051a8f7 ja 0x51a8fb */ if (!(CF_|ZF_)) goto L_0051a8fb;
  /* 0051a8f9 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051a8fb:;
  /* 0051a8fb mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051a8fe mov eax, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0051a901 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051a904 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051a907 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0051a909 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a90b je 0x51a94b */ if (ZF_) goto L_0051a94b;
  /* 0051a90d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0051a910:;
  /* 0051a910 fild dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)(s32)M32(m_)); }
  /* 0051a912 fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051a915 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a917 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a91a jp 0x51a943 */ if (PF_) goto L_0051a943;
  /* 0051a91c fild dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a91f fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051a922 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a924 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a927 jne 0x51a943 */ if (!ZF_) goto L_0051a943;
  /* 0051a929 fild dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051a92c fcomp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051a92f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a931 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a934 jp 0x51a943 */ if (PF_) goto L_0051a943;
  /* 0051a936 fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051a939 fcomp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051a93c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051a93e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051a941 je 0x51a958 */ if (ZF_) goto L_0051a958;
L_0051a943:;
  /* 0051a943 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051a946 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a947 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a949 jne 0x51a910 */ if (!ZF_) goto L_0051a910;
L_0051a94b:;
  /* 0051a94b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0051a94e mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0051a951 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a952 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0051a955 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051a956 jmp 0x51a8e6 */ goto L_0051a8e6;
L_0051a958:;
  /* 0051a958 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051a95b mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0051a95e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051a95f mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 0051a962 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051a963 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0051a965 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051a966 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051a968 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051a969 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0051a96c:;
  /* 0051a96c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051a96f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051a970 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0051a973 or edx, 0xffffffff */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051a976 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051a977 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0051a979 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0051a97c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051a97d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051a97f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051a980 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051a990(CPU *c) {
  NATIVE_HOOK(0x51a990u) REGS; LOADALL;
L_0051a990:;
  /* 0051a990 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051a991 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051a993 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051a996 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0051a998 mov dword ptr [ecx + 0x2f5], edx */ { const u32 m_ = (u32)(ecx + 0x2f5u); M32(m_) = (u32)(edx); }
  /* 0051a99e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051a99f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051a9b0(CPU *c) {
  NATIVE_HOOK(0x51a9b0u) REGS; LOADALL;
L_0051a9b0:;
  /* 0051a9b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051a9b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051a9b3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051a9b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051a9b7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051a9b9 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a9bb je 0x51aa59 */ if (ZF_) goto L_0051aa59;
  /* 0051a9c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051a9c2 mov esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); esi = (u32)(M32(m_)); }
  /* 0051a9c5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051a9c7 jne 0x51a9d8 */ if (!ZF_) goto L_0051a9d8;
  /* 0051a9c9 mov esi, edi */ { esi = (u32)(edi); }
  /* 0051a9cb call 0x403410 */ esp -= 4; M32(esp) = 0x51a9d0u; SAVEALL; F_00403410(c); ABI_CHECK(0x403410u, 0x51a9cbu); RETCHK(0x51a9d0u, 0x51a9cbu); LOADALL;
  /* 0051a9d0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051a9d1 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051a9d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051a9d4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051a9d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051a9d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051a9d8:;
  /* 0051a9d8 mov edx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0051a9db cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051a9dd mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051a9e0 ja 0x51aa1e */ if (!(CF_|ZF_)) goto L_0051aa1e;
  /* 0051a9e2 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051a9e5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051a9e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051a9e7 lea edx, [eax + esi] */ edx = (u32)((u32)(eax + esi));
  /* 0051a9ea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051a9eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051a9ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051a9ed push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051a9ee lea esi, [ebp - 8] */ esi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051a9f1 call 0x51b0e0 */ esp -= 4; M32(esp) = 0x51a9f6u; SAVEALL; F_0051b0e0(c); ABI_CHECK(0x51b0e0u, 0x51a9f1u); RETCHK(0x51a9f6u, 0x51a9f1u); LOADALL;
  /* 0051a9f6 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051a9f9 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051a9fc mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0051a9ff add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051aa02 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051aa04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aa05 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051aa08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051aa09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aa0a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051aa0b lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051aa0e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051aa0f mov eax, edi */ { eax = (u32)(edi); }
  /* 0051aa11 call 0x51aae0 */ esp -= 4; M32(esp) = 0x51aa16u; SAVEALL; F_0051aae0(c); ABI_CHECK(0x51aae0u, 0x51aa11u); RETCHK(0x51aa16u, 0x51aa11u); LOADALL;
  /* 0051aa16 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051aa17 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051aa19 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051aa1a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051aa1c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051aa1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051aa1e:;
  /* 0051aa1e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051aa20 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051aa22 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051aa25 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051aa26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051aa27 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051aa28 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051aa29 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aa2a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051aa2b lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051aa2e mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0051aa31 call 0x51b0e0 */ esp -= 4; M32(esp) = 0x51aa36u; SAVEALL; F_0051b0e0(c); ABI_CHECK(0x51b0e0u, 0x51aa31u); RETCHK(0x51aa36u, 0x51aa31u); LOADALL;
  /* 0051aa36 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051aa39 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051aa3c mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051aa3f add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051aa42 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051aa44 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051aa47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aa48 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051aa4b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051aa4c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aa4d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051aa4e add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051aa50 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051aa51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051aa52 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051aa53 call 0x51b110 */ esp -= 4; M32(esp) = 0x51aa58u; SAVEALL; F_0051b110(c); ABI_CHECK(0x51b110u, 0x51aa53u); RETCHK(0x51aa58u, 0x51aa53u); LOADALL;
  /* 0051aa58 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0051aa59:;
  /* 0051aa59 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051aa5b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051aa5c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051aa5e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051aa5f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051aa60(CPU *c) {
  NATIVE_HOOK(0x51aa60u) REGS; LOADALL;
L_0051aa60:;
  /* 0051aa60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051aa61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051aa63 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051aa65 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0051aa6a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051aa70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aa71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051aa78 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051aa79 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051aa7a push 0x51acc0 */ { u32 v_ = 0x51acc0u; esp -= 4; M32(esp) = v_; }
  /* 0051aa7f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051aa82 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051aa84 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0051aa86 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0051aa89 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051aa8c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051aa8e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051aa8f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0051aa92 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0051aa99 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051aa9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aa9d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051aaa0 call 0x404140 */ esp -= 4; M32(esp) = 0x51aaa5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51aaa0u); RETCHK(0x51aaa5u, 0x51aaa0u); LOADALL;
  /* 0051aaa5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051aaa8 call 0x405c00 */ esp -= 4; M32(esp) = 0x51aaadu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x51aaa8u); RETCHK(0x51aaadu, 0x51aaa8u); LOADALL;
  /* 0051aaad mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051aaaf call 0x405c80 */ esp -= 4; M32(esp) = 0x51aab4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x51aaafu); RETCHK(0x51aab4u, 0x51aaafu); LOADALL;
  /* 0051aab4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051aab8 jb 0x51aac6 */ if (CF_) goto L_0051aac6;
  /* 0051aaba mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051aabd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051aabe call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51aac3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51aabeu); RETCHK(0x51aac3u, 0x51aabeu); LOADALL;
  /* 0051aac3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051aac6:;
  /* 0051aac6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051aac9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051aacb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051aad2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051aad3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051aad5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051aad6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0051aae0(CPU *c) {
  NATIVE_HOOK(0x51aae0u) REGS; LOADALL;
L_0051aae0:;
  /* 0051aae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051aae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051aae3 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051aae6 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0051aae9 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0051aaec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051aaed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051aaee mov esi, eax */ { esi = (u32)(eax); }
  /* 0051aaf0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051aaf3 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0051aaf6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051aaf7 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 0051aafa mov eax, edx */ { eax = (u32)(edx); }
  /* 0051aafc sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051aafe mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051ab01 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0051ab04 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0051ab07 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0051ab09 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ab0b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051ab0d mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051ab10 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ab12 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0051ab15 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ab17 cmp dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ab1a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051ab1d mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0051ab20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ab21 jae 0x51ab95 */ if (!CF_) goto L_0051ab95;
  /* 0051ab23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ab24 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0051ab27 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ab28 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051ab29 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051ab2c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051ab2d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ab2e lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0051ab31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ab32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ab33 call 0x51b700 */ esp -= 4; M32(esp) = 0x51ab38u; SAVEALL; F_0051b700(c); ABI_CHECK(0x51b700u, 0x51ab33u); RETCHK(0x51ab38u, 0x51ab33u); LOADALL;
  /* 0051ab38 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0051ab3a add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051ab3d cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ab3f jbe 0x51ac00 */ if ((CF_|ZF_)) goto L_0051ac00;
L_0051ab45:;
  /* 0051ab45 cmp dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ab48 je 0x51ab90 */ if (ZF_) goto L_0051ab90;
  /* 0051ab4a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051ab4d mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051ab50 mov edi, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); edi = (u32)(M32(m_)); }
  /* 0051ab53 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ab57 jb 0x51ab67 */ if (CF_) goto L_0051ab67;
  /* 0051ab59 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051ab5c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ab5d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51ab62u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51ab5du); RETCHK(0x51ab62u, 0x51ab5du); LOADALL;
  /* 0051ab62 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051ab65 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0051ab67:;
  /* 0051ab67 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0051ab6e mov dword ptr [edi + 0x14], ecx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0051ab71 mov byte ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0051ab75 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 0051ab78 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051ab7b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051ab7c mov eax, edi */ { eax = (u32)(edi); }
  /* 0051ab7e cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ab80 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 0051ab83 ja 0x51ab88 */ if (!(CF_|ZF_)) goto L_0051ab88;
  /* 0051ab85 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
L_0051ab88:;
  /* 0051ab88 dec dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051ab8b jne 0x51ab90 */ if (!ZF_) goto L_0051ab90;
  /* 0051ab8d mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
L_0051ab90:;
  /* 0051ab90 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051ab91 jne 0x51ab45 */ if (!ZF_) goto L_0051ab45;
  /* 0051ab93 jmp 0x51ac00 */ goto L_0051ac00;
L_0051ab95:;
  /* 0051ab95 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0051ab98 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051ab99 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051ab9c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051ab9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ab9e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ab9f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051aba0 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0051aba3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051aba4 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0051aba7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051aba8 call 0x51b760 */ esp -= 4; M32(esp) = 0x51abadu; SAVEALL; F_0051b760(c); ABI_CHECK(0x51b760u, 0x51aba8u); RETCHK(0x51abadu, 0x51aba8u); LOADALL;
  /* 0051abad xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051abaf add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051abb2 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051abb4 jbe 0x51ac00 */ if ((CF_|ZF_)) goto L_0051ac00;
L_0051abb6:;
  /* 0051abb6 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051abb9 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051abbb je 0x51abfd */ if (ZF_) goto L_0051abfd;
  /* 0051abbd mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051abc0 lea eax, [eax + ecx - 1] */ eax = (u32)((u32)(eax + ecx + 0xffffffffu));
  /* 0051abc4 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051abc7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051abc9 ja 0x51abcd */ if (!(CF_|ZF_)) goto L_0051abcd;
  /* 0051abcb sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051abcd:;
  /* 0051abcd mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051abd0 mov edi, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 0051abd3 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051abd7 jb 0x51abe7 */ if (CF_) goto L_0051abe7;
  /* 0051abd9 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051abdc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051abdd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51abe2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51abddu); RETCHK(0x51abe2u, 0x51abddu); LOADALL;
  /* 0051abe2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051abe5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0051abe7:;
  /* 0051abe7 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0051abee mov dword ptr [edi + 0x14], edx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(edx); }
  /* 0051abf1 mov byte ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0051abf5 dec dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051abf8 jne 0x51abfd */ if (!ZF_) goto L_0051abfd;
  /* 0051abfa mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
L_0051abfd:;
  /* 0051abfd dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051abfe jne 0x51abb6 */ if (!ZF_) goto L_0051abb6;
L_0051ac00:;
  /* 0051ac00 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051ac03 add ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051ac06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051ac09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051ac0a mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0051ac0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051ac0d mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0051ac10 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051ac11 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051ac13 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ac14 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0051ac20(CPU *c) {
  NATIVE_HOOK(0x51ac20u) REGS; LOADALL;
L_0051ac20:;
  /* 0051ac20 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051ac23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051ac24 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051ac26 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ac29 je 0x51ac73 */ if (ZF_) goto L_0051ac73;
  /* 0051ac2b jmp 0x51ac30 */ goto L_0051ac30;
L_0051ac30:;
  /* 0051ac30 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051ac33 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac35 je 0x51ac6e */ if (ZF_) goto L_0051ac6e;
  /* 0051ac37 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051ac3a lea eax, [eax + ecx - 1] */ eax = (u32)((u32)(eax + ecx + 0xffffffffu));
  /* 0051ac3e mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051ac41 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac43 ja 0x51ac47 */ if (!(CF_|ZF_)) goto L_0051ac47;
  /* 0051ac45 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051ac47:;
  /* 0051ac47 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051ac4a mov edi, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 0051ac4d mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051ac50 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac52 je 0x51ac5d */ if (ZF_) goto L_0051ac5d;
  /* 0051ac54 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ac55 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51ac5au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51ac55u); RETCHK(0x51ac5au, 0x51ac55u); LOADALL;
  /* 0051ac5a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051ac5d:;
  /* 0051ac5d mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051ac60 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051ac63 mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0051ac66 dec dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051ac69 jne 0x51ac6e */ if (!ZF_) goto L_0051ac6e;
  /* 0051ac6b mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
L_0051ac6e:;
  /* 0051ac6e cmp dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac71 jne 0x51ac30 */ if (!ZF_) goto L_0051ac30;
L_0051ac73:;
  /* 0051ac73 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051ac76 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac78 jbe 0x51ac99 */ if ((CF_|ZF_)) goto L_0051ac99;
  /* 0051ac7a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0051ac80:;
  /* 0051ac80 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051ac83 mov eax, dword ptr [eax + edi*4 - 4] */ { const u32 m_ = (u32)(eax + edi * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051ac87 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051ac88 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac8a je 0x51ac95 */ if (ZF_) goto L_0051ac95;
  /* 0051ac8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ac8d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51ac92u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51ac8du); RETCHK(0x51ac92u, 0x51ac8du); LOADALL;
  /* 0051ac92 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051ac95:;
  /* 0051ac95 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac97 ja 0x51ac80 */ if (!(CF_|ZF_)) goto L_0051ac80;
L_0051ac99:;
  /* 0051ac99 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051ac9c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ac9e je 0x51aca9 */ if (ZF_) goto L_0051aca9;
  /* 0051aca0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aca1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51aca6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51aca1u); RETCHK(0x51aca6u, 0x51aca1u); LOADALL;
  /* 0051aca6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051aca9:;
  /* 0051aca9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051acaa mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051acad mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051acb0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051acb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051acc0(CPU *c) {
  NATIVE_HOOK(0x51acc0u) REGS; LOADALL;
L_0051acc0:;
  /* 0051acc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051acc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051acc3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051acc5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0051acca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051acd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051acd1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051acd8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051acd9 push 0x314 */ { u32 v_ = 0x314u; esp -= 4; M32(esp) = v_; }
  /* 0051acde call 0x5fe934 */ esp -= 4; M32(esp) = 0x51ace3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51acdeu); RETCHK(0x51ace3u, 0x51acdeu); LOADALL;
  /* 0051ace3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051ace6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0051ace9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051aceb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0051acf2 je 0x51ad0a */ if (ZF_) goto L_0051ad0a;
  /* 0051acf4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051acf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051acf7 call 0x518f70 */ esp -= 4; M32(esp) = 0x51acfcu; SAVEALL; F_00518f70(c); ABI_CHECK(0x518f70u, 0x51acf7u); RETCHK(0x51acfcu, 0x51acf7u); LOADALL;
  /* 0051acfc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051acff mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051ad06 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051ad08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ad09 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051ad0a:;
  /* 0051ad0a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051ad0d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051ad0f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051ad16 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051ad18 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ad19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051ad20(CPU *c) {
  NATIVE_HOOK(0x51ad20u) REGS; LOADALL;
L_0051ad20:;
  /* 0051ad20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051ad21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051ad23 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051ad26 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051ad29 mov ecx, 0xfffffff */ { ecx = (u32)(0xfffffffu); }
  /* 0051ad2e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ad2f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051ad32 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051ad34 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ad36 jae 0x51ad3d */ if (!CF_) goto L_0051ad3d;
  /* 0051ad38 call 0x41a8b0 */ esp -= 4; M32(esp) = 0x51ad3du; SAVEALL; F_0041a8b0(c); ABI_CHECK(0x41a8b0u, 0x51ad38u); RETCHK(0x51ad3du, 0x51ad38u); LOADALL;
L_0051ad3d:;
  /* 0051ad3d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051ad3f shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051ad41 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ad44 jae 0x51ad4b */ if (!CF_) goto L_0051ad4b;
  /* 0051ad46 mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_0051ad4b:;
  /* 0051ad4b cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ad4d jae 0x51ad5f */ if (!CF_) goto L_0051ad5f;
  /* 0051ad4f mov edx, 0xfffffff */ { edx = (u32)(0xfffffffu); }
  /* 0051ad54 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051ad56 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ad58 ja 0x51ad5f */ if (!(CF_|ZF_)) goto L_0051ad5f;
  /* 0051ad5a mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0051ad5d mov edi, ecx */ { edi = (u32)(ecx); }
L_0051ad5f:;
  /* 0051ad5f add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ad61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ad62 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051ad65 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051ad68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ad69 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0051ad6c call 0x5fe934 */ esp -= 4; M32(esp) = 0x51ad71u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51ad6cu); RETCHK(0x51ad71u, 0x51ad6cu); LOADALL;
  /* 0051ad71 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051ad74 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051ad76 shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0051ad79 lea eax, [esi + ecx] */ eax = (u32)((u32)(esi + ecx));
  /* 0051ad7c mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0051ad7f mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051ad82 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051ad85 sub eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ad88 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0051ad8b add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ad8d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051ad90 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051ad93 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051ad96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ad97 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ad98 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051ad9a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051ad9b mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0051ad9e call 0x5fe998 */ esp -= 4; M32(esp) = 0x51ada3u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x51ad9eu); RETCHK(0x51ada3u, 0x51ad9eu); LOADALL;
  /* 0051ada3 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0051ada6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0051ada9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051adac add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051adae cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051adb0 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051adb3 ja 0x51adf2 */ if (!(CF_|ZF_)) goto L_0051adf2;
  /* 0051adb5 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0051adb8 mov edx, esi */ { edx = (u32)(esi); }
  /* 0051adba shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051adbd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051adbe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051adbf mov esi, edi */ { esi = (u32)(edi); }
  /* 0051adc1 sub esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051adc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051adc5 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 0051adc8 call 0x5fe998 */ esp -= 4; M32(esp) = 0x51adcdu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x51adc8u); RETCHK(0x51adcdu, 0x51adc8u); LOADALL;
  /* 0051adcd mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0051add0 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051add2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051add5 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051add7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051add9 jbe 0x51ade6 */ if ((CF_|ZF_)) goto L_0051ade6;
  /* 0051addb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051addd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051addf mov edi, edx */ { edi = (u32)(edx); }
  /* 0051ade1 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0051ade3 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_0051ade6:;
  /* 0051ade6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0051ade9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051adeb jbe 0x51ae38 */ if ((CF_|ZF_)) goto L_0051ae38;
  /* 0051aded mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 0051adf0 jmp 0x51ae31 */ goto L_0051ae31;
L_0051adf2:;
  /* 0051adf2 lea edx, [edi*4] */ edx = (u32)((u32)(edi * 4u));
  /* 0051adf9 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051adfc shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051adff push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051ae00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ae01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ae02 call 0x5fe998 */ esp -= 4; M32(esp) = 0x51ae07u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x51ae02u); RETCHK(0x51ae07u, 0x51ae02u); LOADALL;
  /* 0051ae07 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051ae0a lea ecx, [eax + edi*4] */ ecx = (u32)((u32)(eax + edi * 4u));
  /* 0051ae0d sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051ae0f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051ae11 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0051ae14 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0051ae17 shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0051ae1a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ae1b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ae1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ae1d call 0x5fe998 */ esp -= 4; M32(esp) = 0x51ae22u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x51ae1du); RETCHK(0x51ae22u, 0x51ae1du); LOADALL;
  /* 0051ae22 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051ae24 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051ae27 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051ae29 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051ae2b jbe 0x51ae38 */ if ((CF_|ZF_)) goto L_0051ae38;
  /* 0051ae2d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0051ae2f mov edi, edx */ { edi = (u32)(edx); }
L_0051ae31:;
  /* 0051ae31 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051ae33 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0051ae35 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_0051ae38:;
  /* 0051ae38 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051ae3b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051ae3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051ae3e je 0x51ae49 */ if (ZF_) goto L_0051ae49;
  /* 0051ae40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ae41 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51ae46u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51ae41u); RETCHK(0x51ae46u, 0x51ae41u); LOADALL;
  /* 0051ae46 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051ae49:;
  /* 0051ae49 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051ae4c mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0051ae4f add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ae51 mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0051ae54 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051ae57 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051ae58 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051ae5a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ae5b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051ae60(CPU *c) {
  NATIVE_HOOK(0x51ae60u) REGS; LOADALL;
L_0051ae60:;
  /* 0051ae60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051ae61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051ae63 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051ae66 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ae67 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0051ae6a cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ae6c je 0x51ae95 */ if (ZF_) goto L_0051ae95;
  /* 0051ae6e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051ae71 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051ae74 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ae76 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ae77 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051ae7a lea esi, [eax*4] */ esi = (u32)((u32)(eax * 4u));
  /* 0051ae81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ae82 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ae83 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ae84 call 0x5fe998 */ esp -= 4; M32(esp) = 0x51ae89u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x51ae84u); RETCHK(0x51ae89u, 0x51ae84u); LOADALL;
  /* 0051ae89 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051ae8c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051ae8f add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051ae91 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051ae94 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0051ae95:;
  /* 0051ae95 mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 0051ae97 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051ae99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051ae9a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ae9b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0051aea0(CPU *c) {
  NATIVE_HOOK(0x51aea0u) REGS; LOADALL;
L_0051aea0:;
  /* 0051aea0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051aea1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051aea3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051aea5 push 0x61c7a0 */ { u32 v_ = 0x61c7a0u; esp -= 4; M32(esp) = v_; }
  /* 0051aeaa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051aeb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051aeb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051aeb8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051aebb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051aebe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051aebf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051aec0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051aec2 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0051aec4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051aec5 mov edi, edx */ { edi = (u32)(edx); }
  /* 0051aec7 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051aeca mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 0051aecd mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051aed0 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0051aed3 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051aed6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051aed8 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 0051aedb mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051aede mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051aee1 mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 0051aee4 jne 0x51aeea */ if (!ZF_) goto L_0051aeea;
  /* 0051aee6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051aee8 jmp 0x51aef2 */ goto L_0051aef2;
L_0051aeea:;
  /* 0051aeea mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051aeed sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051aeef sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0051aef2:;
  /* 0051aef2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051aef4 je 0x51b0c2 */ if (ZF_) goto L_0051b0c2;
  /* 0051aefa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051aefc jne 0x51af02 */ if (!ZF_) goto L_0051af02;
  /* 0051aefe xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051af00 jmp 0x51af0a */ goto L_0051af0a;
L_0051af02:;
  /* 0051af02 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051af05 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051af07 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_0051af0a:;
  /* 0051af0a mov ebx, 0xfffffff */ { ebx = (u32)(0xfffffffu); }
  /* 0051af0f sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051af11 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051af13 jae 0x51af1a */ if (!CF_) goto L_0051af1a;
  /* 0051af15 call 0x49ac70 */ esp -= 4; M32(esp) = 0x51af1au; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x51af15u); RETCHK(0x51af1au, 0x51af15u); LOADALL;
L_0051af1a:;
  /* 0051af1a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051af1c jne 0x51af22 */ if (!ZF_) goto L_0051af22;
  /* 0051af1e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051af20 jmp 0x51af2a */ goto L_0051af2a;
L_0051af22:;
  /* 0051af22 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051af25 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051af27 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_0051af2a:;
  /* 0051af2a add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051af2c cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051af2e jae 0x51b02a */ if (!CF_) goto L_0051b02a;
  /* 0051af34 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051af36 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051af38 mov ebx, 0xfffffff */ { ebx = (u32)(0xfffffffu); }
  /* 0051af3d sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051af3f cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051af41 jae 0x51af47 */ if (!CF_) goto L_0051af47;
  /* 0051af43 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051af45 jmp 0x51af49 */ goto L_0051af49;
L_0051af47:;
  /* 0051af47 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051af49:;
  /* 0051af49 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051af4b jne 0x51af51 */ if (!ZF_) goto L_0051af51;
  /* 0051af4d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051af4f jmp 0x51af59 */ goto L_0051af59;
L_0051af51:;
  /* 0051af51 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051af54 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051af56 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_0051af59:;
  /* 0051af59 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051af5b cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051af5d jae 0x51af71 */ if (!CF_) goto L_0051af71;
  /* 0051af5f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051af61 jne 0x51af67 */ if (!ZF_) goto L_0051af67;
  /* 0051af63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051af65 jmp 0x51af6f */ goto L_0051af6f;
L_0051af67:;
  /* 0051af67 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051af6a sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051af6c sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0051af6f:;
  /* 0051af6f add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051af71:;
  /* 0051af71 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051af74 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051af75 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0051af78 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51af7du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51af78u); RETCHK(0x51af7du, 0x51af78u); LOADALL;
  /* 0051af7d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051af7f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0051af86 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051af89 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051af8c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051af8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051af90 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051af92 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0051af95 call 0x51b8b0 */ esp -= 4; M32(esp) = 0x51af9au; SAVEALL; F_0051b8b0(c); ABI_CHECK(0x51b8b0u, 0x51af95u); RETCHK(0x51af9au, 0x51af95u); LOADALL;
  /* 0051af9a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051af9d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051afa0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051afa1 lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051afa4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051afa6 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0051afa9 call 0x51b7c0 */ esp -= 4; M32(esp) = 0x51afaeu; SAVEALL; F_0051b7c0(c); ABI_CHECK(0x51b7c0u, 0x51afa9u); RETCHK(0x51afaeu, 0x51afa9u); LOADALL;
  /* 0051afae mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051afb1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051afb4 mov edx, esi */ { edx = (u32)(esi); }
  /* 0051afb6 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051afb9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051afbc add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051afbe mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051afc1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051afc2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051afc5 call 0x51b8b0 */ esp -= 4; M32(esp) = 0x51afcau; SAVEALL; F_0051b8b0(c); ABI_CHECK(0x51b8b0u, 0x51afc5u); RETCHK(0x51afcau, 0x51afc5u); LOADALL;
  /* 0051afca mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051afcd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051afd0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051afd2 jne 0x51afd8 */ if (!ZF_) goto L_0051afd8;
  /* 0051afd4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051afd6 jmp 0x51afe0 */ goto L_0051afe0;
L_0051afd8:;
  /* 0051afd8 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051afdb sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051afdd sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0051afe0:;
  /* 0051afe0 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051afe2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051afe4 je 0x51afef */ if (ZF_) goto L_0051afef;
  /* 0051afe6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051afe7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51afecu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51afe7u); RETCHK(0x51afecu, 0x51afe7u); LOADALL;
  /* 0051afec add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051afef:;
  /* 0051afef mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0051aff2 add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051aff4 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0051aff7 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051aff9 mov dword ptr [edi + 0xc], edx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0051affc mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0051afff mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051b002 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051b005 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051b00c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b00d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b00e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b00f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b011 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b012 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0051b02a:;
  /* 0051b02a mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b02d mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b030 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0051b032 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b034 sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051b037 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b039 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0051b03c jae 0x51b088 */ if (!CF_) goto L_0051b088;
  /* 0051b03e mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b040 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051b043 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b046 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b049 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b04a add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b04c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051b04e call 0x51b8b0 */ esp -= 4; M32(esp) = 0x51b053u; SAVEALL; F_0051b8b0(c); ABI_CHECK(0x51b8b0u, 0x51b04eu); RETCHK(0x51b053u, 0x51b04eu); LOADALL;
  /* 0051b053 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0051b05a mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b05d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b060 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051b062 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051b064 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051b067 sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b069 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b06a lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051b06d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b06f call 0x51b7c0 */ esp -= 4; M32(esp) = 0x51b074u; SAVEALL; F_0051b7c0(c); ABI_CHECK(0x51b7c0u, 0x51b06fu); RETCHK(0x51b074u, 0x51b06fu); LOADALL;
  /* 0051b074 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b077 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b07a add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b07c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b07e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b081 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0051b084 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b086 jmp 0x51b0b8 */ goto L_0051b0b8;
L_0051b088:;
  /* 0051b088 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0051b08b mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b08d mov esi, edx */ { esi = (u32)(edx); }
  /* 0051b08f sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b091 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b094 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b097 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b098 mov eax, edx */ { eax = (u32)(edx); }
  /* 0051b09a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b09c call 0x51b8b0 */ esp -= 4; M32(esp) = 0x51b0a1u; SAVEALL; F_0051b8b0(c); ABI_CHECK(0x51b8b0u, 0x51b09cu); RETCHK(0x51b0a1u, 0x51b09cu); LOADALL;
  /* 0051b0a1 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b0a4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b0a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b0aa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b0ac mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0051b0ae call 0x51b170 */ esp -= 4; M32(esp) = 0x51b0b3u; SAVEALL; F_0051b170(c); ABI_CHECK(0x51b170u, 0x51b0aeu); RETCHK(0x51b0b3u, 0x51b0aeu); LOADALL;
  /* 0051b0b3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b0b6 add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051b0b8:;
  /* 0051b0b8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051b0ba lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051b0bd call 0x51b140 */ esp -= 4; M32(esp) = 0x51b0c2u; SAVEALL; F_0051b140(c); ABI_CHECK(0x51b140u, 0x51b0bdu); RETCHK(0x51b0c2u, 0x51b0bdu); LOADALL;
L_0051b0c2:;
  /* 0051b0c2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051b0c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b0c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b0c7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051b0ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b0cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b0d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b0d2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051b015(CPU *c) {
  NATIVE_HOOK(0x51b015u) REGS; LOADALL;
L_0051b015:;
  /* 0051b015 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0051b018 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b019 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51b01eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51b019u); RETCHK(0x51b01eu, 0x51b019u); LOADALL;
  /* 0051b01e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b021 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b023 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b025 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0051b02a mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b02d mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b030 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0051b032 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b034 sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051b037 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b039 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0051b03c jae 0x51b088 */ if (!CF_) goto L_0051b088;
  /* 0051b03e mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b040 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051b043 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b046 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b049 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b04a add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b04c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051b04e call 0x51b8b0 */ esp -= 4; M32(esp) = 0x51b053u; SAVEALL; F_0051b8b0(c); ABI_CHECK(0x51b8b0u, 0x51b04eu); RETCHK(0x51b053u, 0x51b04eu); LOADALL;
  /* 0051b053 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0051b05a mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b05d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b060 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051b062 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051b064 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051b067 sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b069 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b06a lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051b06d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b06f call 0x51b7c0 */ esp -= 4; M32(esp) = 0x51b074u; SAVEALL; F_0051b7c0(c); ABI_CHECK(0x51b7c0u, 0x51b06fu); RETCHK(0x51b074u, 0x51b06fu); LOADALL;
  /* 0051b074 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b077 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b07a add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b07c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b07e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b081 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0051b084 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b086 jmp 0x51b0b8 */ goto L_0051b0b8;
L_0051b088:;
  /* 0051b088 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0051b08b mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b08d mov esi, edx */ { esi = (u32)(edx); }
  /* 0051b08f sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b091 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b094 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b097 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b098 mov eax, edx */ { eax = (u32)(edx); }
  /* 0051b09a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b09c call 0x51b8b0 */ esp -= 4; M32(esp) = 0x51b0a1u; SAVEALL; F_0051b8b0(c); ABI_CHECK(0x51b8b0u, 0x51b09cu); RETCHK(0x51b0a1u, 0x51b09cu); LOADALL;
  /* 0051b0a1 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b0a4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b0a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b0aa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b0ac mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0051b0ae call 0x51b170 */ esp -= 4; M32(esp) = 0x51b0b3u; SAVEALL; F_0051b170(c); ABI_CHECK(0x51b170u, 0x51b0aeu); RETCHK(0x51b0b3u, 0x51b0aeu); LOADALL;
  /* 0051b0b3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b0b6 add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051b0b8:;
  /* 0051b0b8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051b0ba lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051b0bd call 0x51b140 */ esp -= 4; M32(esp) = 0x51b0c2u; SAVEALL; F_0051b140(c); ABI_CHECK(0x51b140u, 0x51b0bdu); RETCHK(0x51b0c2u, 0x51b0bdu); LOADALL;
  /* 0051b0c2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051b0c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b0c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b0c7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051b0ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b0cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b0d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b0d2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051b021(CPU *c) {
  NATIVE_HOOK(0x51b021u) REGS; LOADALL;
L_0051b021:;
  /* 0051b021 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b023 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b025 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0051b02a mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b02d mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b030 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0051b032 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b034 sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051b037 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b039 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0051b03c jae 0x51b088 */ if (!CF_) goto L_0051b088;
  /* 0051b03e mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b040 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051b043 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b046 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b049 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b04a add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b04c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051b04e call 0x51b8b0 */ esp -= 4; M32(esp) = 0x51b053u; SAVEALL; F_0051b8b0(c); ABI_CHECK(0x51b8b0u, 0x51b04eu); RETCHK(0x51b053u, 0x51b04eu); LOADALL;
  /* 0051b053 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0051b05a mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b05d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b060 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051b062 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051b064 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051b067 sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b069 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b06a lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051b06d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b06f call 0x51b7c0 */ esp -= 4; M32(esp) = 0x51b074u; SAVEALL; F_0051b7c0(c); ABI_CHECK(0x51b7c0u, 0x51b06fu); RETCHK(0x51b074u, 0x51b06fu); LOADALL;
  /* 0051b074 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b077 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b07a add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b07c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b07e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b081 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0051b084 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b086 jmp 0x51b0b8 */ goto L_0051b0b8;
L_0051b088:;
  /* 0051b088 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0051b08b mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b08d mov esi, edx */ { esi = (u32)(edx); }
  /* 0051b08f sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051b091 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b094 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b097 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b098 mov eax, edx */ { eax = (u32)(edx); }
  /* 0051b09a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b09c call 0x51b8b0 */ esp -= 4; M32(esp) = 0x51b0a1u; SAVEALL; F_0051b8b0(c); ABI_CHECK(0x51b8b0u, 0x51b09cu); RETCHK(0x51b0a1u, 0x51b09cu); LOADALL;
  /* 0051b0a1 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b0a4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b0a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b0aa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b0ac mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0051b0ae call 0x51b170 */ esp -= 4; M32(esp) = 0x51b0b3u; SAVEALL; F_0051b170(c); ABI_CHECK(0x51b170u, 0x51b0aeu); RETCHK(0x51b0b3u, 0x51b0aeu); LOADALL;
  /* 0051b0b3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b0b6 add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051b0b8:;
  /* 0051b0b8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051b0ba lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051b0bd call 0x51b140 */ esp -= 4; M32(esp) = 0x51b0c2u; SAVEALL; F_0051b140(c); ABI_CHECK(0x51b140u, 0x51b0bdu); RETCHK(0x51b0c2u, 0x51b0bdu); LOADALL;
  /* 0051b0c2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051b0c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b0c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b0c7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051b0ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b0cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b0d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b0d2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051b0e0(CPU *c) {
  NATIVE_HOOK(0x51b0e0u) REGS; LOADALL;
L_0051b0e0:;
  /* 0051b0e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b0e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b0e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b0e4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051b0e7 mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0051b0ea mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0051b0ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b0ee mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0051b0f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b0f2 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051b0f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b0f6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051b0f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b0fa mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b0fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b0fe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b0ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b100 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b101 call 0x51b760 */ esp -= 4; M32(esp) = 0x51b106u; SAVEALL; F_0051b760(c); ABI_CHECK(0x51b760u, 0x51b101u); RETCHK(0x51b106u, 0x51b101u); LOADALL;
  /* 0051b106 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b109 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b10b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b10d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b10e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b110(CPU *c) {
  NATIVE_HOOK(0x51b110u) REGS; LOADALL;
L_0051b110:;
  /* 0051b110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b113 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b116 mov ecx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0051b119 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0051b11c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b11d mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0051b120 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b121 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0051b124 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b125 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0051b128 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b129 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b12c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b12d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b130 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b131 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b132 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b133 call 0x51b300 */ esp -= 4; M32(esp) = 0x51b138u; SAVEALL; F_0051b300(c); ABI_CHECK(0x51b300u, 0x51b133u); RETCHK(0x51b138u, 0x51b133u); LOADALL;
  /* 0051b138 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b139 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0051b140(CPU *c) {
  NATIVE_HOOK(0x51b140u) REGS; LOADALL;
L_0051b140:;
  /* 0051b140 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b142 je 0x51b16b */ if (ZF_) goto L_0051b16b;
  /* 0051b144 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b145 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b146 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0051b147:;
  /* 0051b147 mov esi, edx */ { esi = (u32)(edx); }
  /* 0051b149 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 0051b14b mov edi, eax */ { edi = (u32)(eax); }
  /* 0051b14d mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 0051b14f mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0051b152 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051b155 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b158 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051b15b mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051b15e add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b161 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b163 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 0051b166 jne 0x51b147 */ if (!ZF_) goto L_0051b147;
  /* 0051b168 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b169 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b16a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0051b16b:;
  /* 0051b16b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b170(CPU *c) {
  NATIVE_HOOK(0x51b170u) REGS; LOADALL;
L_0051b170:;
  /* 0051b170 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b172 je 0x51b19e */ if (ZF_) goto L_0051b19e;
  /* 0051b174 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b175 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b176 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0051b177:;
  /* 0051b177 sub ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b17a sub eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b17d cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b17f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051b181 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 0051b183 mov edi, eax */ { edi = (u32)(eax); }
  /* 0051b185 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 0051b187 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0051b18a mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051b18d mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b190 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051b193 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051b196 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 0051b199 jne 0x51b177 */ if (!ZF_) goto L_0051b177;
  /* 0051b19b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b19c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b19d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0051b19e:;
  /* 0051b19e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b1a0(CPU *c) {
  NATIVE_HOOK(0x51b1a0u) REGS; LOADALL;
L_0051b1a0:;
  /* 0051b1a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b1a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b1a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b1a5 push 0x61dc50 */ { u32 v_ = 0x61dc50u; esp -= 4; M32(esp) = v_; }
  /* 0051b1aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051b1b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b1b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051b1b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b1b9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b1ba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b1bb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b1be mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051b1c0 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b1c3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051b1c5 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b1c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b1c8 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051b1cb jne 0x51b1d1 */ if (!ZF_) goto L_0051b1d1;
  /* 0051b1cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051b1cf jmp 0x51b1d9 */ goto L_0051b1d9;
L_0051b1d1:;
  /* 0051b1d1 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b1d4 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b1d6 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0051b1d9:;
  /* 0051b1d9 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b1db mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0051b1de mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0051b1e1 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0051b1e4 je 0x51b228 */ if (ZF_) goto L_0051b228;
  /* 0051b1e6 cmp eax, 0x3fffffff */ { u32 a_ = eax, b_ = 0x3fffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b1eb jbe 0x51b1f2 */ if ((CF_|ZF_)) goto L_0051b1f2;
  /* 0051b1ed call 0x49ac70 */ esp -= 4; M32(esp) = 0x51b1f2u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x51b1edu); RETCHK(0x51b1f2u, 0x51b1edu); LOADALL;
L_0051b1f2:;
  /* 0051b1f2 lea edi, [eax*4] */ edi = (u32)((u32)(eax * 4u));
  /* 0051b1f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b1fa call 0x5fe934 */ esp -= 4; M32(esp) = 0x51b1ffu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51b1fau); RETCHK(0x51b1ffu, 0x51b1fau); LOADALL;
  /* 0051b1ff mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0051b206 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b209 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051b20b mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0051b20e mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b211 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 0051b214 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b217 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0051b21a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b21b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b21c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b21d call 0x5588a0 */ esp -= 4; M32(esp) = 0x51b222u; SAVEALL; F_005588a0(c); ABI_CHECK(0x5588a0u, 0x51b21du); RETCHK(0x51b222u, 0x51b21du); LOADALL;
  /* 0051b222 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b225 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_0051b228:;
  /* 0051b228 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051b22b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b22c mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b22e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b22f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051b236 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b237 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b239 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b23a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051b23d(CPU *c) {
  NATIVE_HOOK(0x51b23du) REGS; LOADALL;
L_0051b23d:;
  /* 0051b23d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b240 call 0x471e50 */ esp -= 4; M32(esp) = 0x51b245u; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x51b240u); RETCHK(0x51b245u, 0x51b240u); LOADALL;
  /* 0051b245 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b247 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b249 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0051b24e int3 */ TRAP(0x51b24eu, "int3");
}

void F_0051b250(CPU *c) {
  NATIVE_HOOK(0x51b250u) REGS; LOADALL;
L_0051b250:;
  /* 0051b250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b253 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b255 push 0x61dc40 */ { u32 v_ = 0x61dc40u; esp -= 4; M32(esp) = v_; }
  /* 0051b25a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051b260 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b261 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051b268 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b269 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b26a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b26b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b26e mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051b270 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b273 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051b275 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b277 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b278 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051b27b jne 0x51b281 */ if (!ZF_) goto L_0051b281;
  /* 0051b27d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051b27f jmp 0x51b289 */ goto L_0051b289;
L_0051b281:;
  /* 0051b281 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b284 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b286 sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0051b289:;
  /* 0051b289 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b28b mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0051b28e mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0051b291 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0051b294 je 0x51b2d6 */ if (ZF_) goto L_0051b2d6;
  /* 0051b296 cmp eax, 0xfffffff */ { u32 a_ = eax, b_ = 0xfffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b29b jbe 0x51b2a2 */ if ((CF_|ZF_)) goto L_0051b2a2;
  /* 0051b29d call 0x49ac70 */ esp -= 4; M32(esp) = 0x51b2a2u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x51b29du); RETCHK(0x51b2a2u, 0x51b29du); LOADALL;
L_0051b2a2:;
  /* 0051b2a2 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051b2a5 mov edi, eax */ { edi = (u32)(eax); }
  /* 0051b2a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b2a8 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51b2adu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51b2a8u); RETCHK(0x51b2adu, 0x51b2a8u); LOADALL;
  /* 0051b2ad mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0051b2b4 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b2b7 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051b2b9 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0051b2bc mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051b2bf mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 0051b2c2 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b2c5 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0051b2c8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b2c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b2ca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b2cb call 0x51b970 */ esp -= 4; M32(esp) = 0x51b2d0u; SAVEALL; F_0051b970(c); ABI_CHECK(0x51b970u, 0x51b2cbu); RETCHK(0x51b2d0u, 0x51b2cbu); LOADALL;
  /* 0051b2d0 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b2d3 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_0051b2d6:;
  /* 0051b2d6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051b2d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b2da mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b2dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b2dd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051b2e4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b2e5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b2e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b2e8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051b2eb(CPU *c) {
  NATIVE_HOOK(0x51b2ebu) REGS; LOADALL;
L_0051b2eb:;
  /* 0051b2eb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b2ee call 0x471e50 */ esp -= 4; M32(esp) = 0x51b2f3u; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x51b2eeu); RETCHK(0x51b2f3u, 0x51b2eeu); LOADALL;
  /* 0051b2f3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b2f5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b2f7 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0051b2fc int3 */ TRAP(0x51b2fcu, "int3");
}

void F_0051b300(CPU *c) {
  NATIVE_HOOK(0x51b300u) REGS; LOADALL;
L_0051b300:;
  /* 0051b300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b303 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b305 push 0x61c792 */ { u32 v_ = 0x61c792u; esp -= 4; M32(esp) = v_; }
  /* 0051b30a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051b310 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b311 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051b318 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b31b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051b31e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b31f mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b322 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b323 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b326 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b329 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b32b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b32c mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051b32f mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 0051b332 ja 0x51b33b */ if (!(CF_|ZF_)) goto L_0051b33b;
  /* 0051b334 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051b336 mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0051b339 jmp 0x51b340 */ goto L_0051b340;
L_0051b33b:;
  /* 0051b33b sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051b33d mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
L_0051b340:;
  /* 0051b340 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051b343 mov edi, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edi = (u32)(M32(m_)); }
  /* 0051b346 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0051b349 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051b34b mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0051b34e mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0051b351 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 0051b354 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0051b357 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051b359 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051b35b cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b35d mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 0051b360 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 0051b363 jae 0x51b535 */ if (!CF_) goto L_0051b535;
  /* 0051b369 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b36b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0051b372 jae 0x51b486 */ if (!CF_) goto L_0051b486;
  /* 0051b378 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 0051b37b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0051b37d sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b37f add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b381 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
L_0051b384:;
  /* 0051b384 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0051b387 cmp dword ptr [ebp + 0x14], edx */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b38a jne 0x51b391 */ if (!ZF_) goto L_0051b391;
  /* 0051b38c cmp dword ptr [ebp + 0x18], eax */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b38f je 0x51b3b4 */ if (ZF_) goto L_0051b3b4;
L_0051b391:;
  /* 0051b391 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b394 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051b395 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b397 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0051b39a ja 0x51b39e */ if (!(CF_|ZF_)) goto L_0051b39e;
  /* 0051b39c sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b39e:;
  /* 0051b39e mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b3a1 mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 0051b3a4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b3a5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b3a7 call 0x51b7f0 */ esp -= 4; M32(esp) = 0x51b3acu; SAVEALL; F_0051b7f0(c); ABI_CHECK(0x51b7f0u, 0x51b3a7u); RETCHK(0x51b3acu, 0x51b3a7u); LOADALL;
  /* 0051b3ac mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b3af mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0051b3b2 jmp 0x51b384 */ goto L_0051b384;
L_0051b3b4:;
  /* 0051b3b4 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
L_0051b3b7:;
  /* 0051b3b7 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0051b3ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b3bc mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b3bf jbe 0x51b465 */ if ((CF_|ZF_)) goto L_0051b465;
  /* 0051b3c5 lea edx, [edi - 1] */ edx = (u32)((u32)(edi + 0xffffffffu));
  /* 0051b3c8 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b3ca mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b3cc mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b3cf cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b3d1 ja 0x51b3d5 */ if (!(CF_|ZF_)) goto L_0051b3d5;
  /* 0051b3d3 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b3d5:;
  /* 0051b3d5 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b3d8 mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 0051b3db mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051b3de mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b3e1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b3e2 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b3e4 mov dword ptr [ebp + 0x18], edx */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0051b3e7 ja 0x51b3f2 */ if (!(CF_|ZF_)) goto L_0051b3f2;
  /* 0051b3e9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051b3eb mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0051b3ed call 0x4038d0 */ esp -= 4; M32(esp) = 0x51b3f2u; SAVEALL; F_004038d0(c); ABI_CHECK(0x4038d0u, 0x51b3edu); RETCHK(0x51b3f2u, 0x51b3edu); LOADALL;
L_0051b3f2:;
  /* 0051b3f2 mov ebx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0051b3f5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b3f7 jne 0x51b3fc */ if (!ZF_) goto L_0051b3fc;
  /* 0051b3f9 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
L_0051b3fc:;
  /* 0051b3fc mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b3ff mov eax, dword ptr [ecx + ebx*4 - 4] */ { const u32 m_ = (u32)(ecx + ebx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051b403 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051b404 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b406 jne 0x51b418 */ if (!ZF_) goto L_0051b418;
  /* 0051b408 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0051b40a call 0x5fe934 */ esp -= 4; M32(esp) = 0x51b40fu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51b40au); RETCHK(0x51b40fu, 0x51b40au); LOADALL;
  /* 0051b40f mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051b412 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b415 mov dword ptr [edx + ebx*4], eax */ { const u32 m_ = (u32)(edx + ebx * 4u); M32(m_) = (u32)(eax); }
L_0051b418:;
  /* 0051b418 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051b41b mov ecx, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); ecx = (u32)(M32(m_)); }
  /* 0051b41e mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0051b421 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0051b424 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b426 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0051b42a je 0x51b44b */ if (ZF_) goto L_0051b44b;
  /* 0051b42c mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0051b42f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b431 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b433 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0051b43a mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0051b441 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b442 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0051b446 call 0x404140 */ esp -= 4; M32(esp) = 0x51b44bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51b446u); RETCHK(0x51b44bu, 0x51b446u); LOADALL;
L_0051b44b:;
  /* 0051b44b mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0051b44f mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051b452 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0051b455 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b456 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051b457 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0051b45a mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0051b45d mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0051b460 jmp 0x51b3b7 */ goto L_0051b3b7;
L_0051b465:;
  /* 0051b465 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b468 mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0051b46b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b46c mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 0051b46f add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b471 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b472 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0051b475 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b476 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b477 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0051b47a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b47b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b47c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b47d lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 0051b480 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b481 jmp 0x51b4fc */ goto L_0051b4fc;
L_0051b486:;
  /* 0051b486 mov ebx, edi */ { ebx = (u32)(edi); }
L_0051b488:;
  /* 0051b488 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b48a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b48d jbe 0x51b4b0 */ if ((CF_|ZF_)) goto L_0051b4b0;
  /* 0051b48f lea edx, [edi - 1] */ edx = (u32)((u32)(edi + 0xffffffffu));
  /* 0051b492 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b494 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b496 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b499 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b49b ja 0x51b49f */ if (!(CF_|ZF_)) goto L_0051b49f;
  /* 0051b49d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b49f:;
  /* 0051b49f mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b4a2 mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 0051b4a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b4a6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b4a8 call 0x51b7f0 */ esp -= 4; M32(esp) = 0x51b4adu; SAVEALL; F_0051b7f0(c); ABI_CHECK(0x51b7f0u, 0x51b4a8u); RETCHK(0x51b4adu, 0x51b4a8u); LOADALL;
  /* 0051b4ad dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051b4ae jmp 0x51b488 */ goto L_0051b488;
L_0051b4b0:;
  /* 0051b4b0 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0051b4b3 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b4b5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051b4b7 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b4b9 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051b4bb add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0051b4bd mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051b4c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b4c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b4c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b4c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b4c4 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0051b4c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b4c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b4c8 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b4ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b4cb lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0051b4ce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b4cf mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 0051b4d2 call 0x51b760 */ esp -= 4; M32(esp) = 0x51b4d7u; SAVEALL; F_0051b760(c); ABI_CHECK(0x51b760u, 0x51b4d2u); RETCHK(0x51b4d7u, 0x51b4d2u); LOADALL;
  /* 0051b4d7 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b4da mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051b4dd mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b4e0 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b4e3 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b4e5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b4e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0051b4e7:;
  /* 0051b4e7 mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0051b4ea mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0051b4ed mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0051b4f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b4f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b4f2 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0051b4f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b4f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b4f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b4f8 lea ecx, [ebp + 0x14] */ ecx = (u32)((u32)(ebp + 0x14u));
  /* 0051b4fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
L_0051b4fc:;
  /* 0051b4fc call 0x51b760 */ esp -= 4; M32(esp) = 0x51b501u; SAVEALL; F_0051b760(c); ABI_CHECK(0x51b760u, 0x51b4fcu); RETCHK(0x51b501u, 0x51b4fcu); LOADALL;
  /* 0051b501 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051b504 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b507 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b508 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b509 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051b510 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b511 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b513 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b514 ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
L_0051b535:;
  /* 0051b535 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b537 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0051b53e jae 0x51b663 */ if (!CF_) goto L_0051b663;
  /* 0051b544 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0051b547 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051b549 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 0051b54c mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 0051b54f mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
L_0051b552:;
  /* 0051b552 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0051b555 cmp dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b558 jne 0x51b55f */ if (!ZF_) goto L_0051b55f;
  /* 0051b55a cmp edi, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b55d je 0x51b584 */ if (ZF_) goto L_0051b584;
L_0051b55f:;
  /* 0051b55f mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0051b562 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b565 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b567 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051b569 ja 0x51b56d */ if (!(CF_|ZF_)) goto L_0051b56d;
  /* 0051b56b sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b56d:;
  /* 0051b56d mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b570 mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 0051b573 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b574 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b576 call 0x4033a0 */ esp -= 4; M32(esp) = 0x51b57bu; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x51b576u); RETCHK(0x51b57bu, 0x51b576u); LOADALL;
  /* 0051b57b mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0051b57e mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b581 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b582 jmp 0x51b552 */ goto L_0051b552;
L_0051b584:;
  /* 0051b584 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0051b586 jmp 0x51b590 */ goto L_0051b590;
L_0051b590:;
  /* 0051b590 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b592 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b595 jae 0x51b642 */ if (!CF_) goto L_0051b642;
  /* 0051b59b lea ecx, [edi + ebx] */ ecx = (u32)((u32)(edi + ebx));
  /* 0051b59e add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b5a0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b5a2 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b5a5 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b5a7 ja 0x51b5ab */ if (!(CF_|ZF_)) goto L_0051b5ab;
  /* 0051b5a9 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b5ab:;
  /* 0051b5ab mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b5ae mov eax, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0051b5b1 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051b5b4 mov dword ptr [ebp + 0x20], eax */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(eax); }
  /* 0051b5b7 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b5ba inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b5bb cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b5bd ja 0x51b5cb */ if (!(CF_|ZF_)) goto L_0051b5cb;
  /* 0051b5bf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051b5c1 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0051b5c3 call 0x4038d0 */ esp -= 4; M32(esp) = 0x51b5c8u; SAVEALL; F_004038d0(c); ABI_CHECK(0x4038d0u, 0x51b5c3u); RETCHK(0x51b5c8u, 0x51b5c3u); LOADALL;
  /* 0051b5c8 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
L_0051b5cb:;
  /* 0051b5cb mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b5ce mov ebx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b5d1 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051b5d3 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b5d6 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b5d8 ja 0x51b5dc */ if (!(CF_|ZF_)) goto L_0051b5dc;
  /* 0051b5da sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
L_0051b5dc:;
  /* 0051b5dc mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051b5df cmp dword ptr [eax + ebx*4], 0 */ { const u32 m_ = (u32)(eax + ebx * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b5e3 jne 0x51b5f8 */ if (!ZF_) goto L_0051b5f8;
  /* 0051b5e5 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0051b5e7 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51b5ecu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51b5e7u); RETCHK(0x51b5ecu, 0x51b5e7u); LOADALL;
  /* 0051b5ec mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b5ef mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0051b5f2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b5f5 mov dword ptr [ecx + ebx*4], eax */ { const u32 m_ = (u32)(ecx + ebx * 4u); M32(m_) = (u32)(eax); }
L_0051b5f8:;
  /* 0051b5f8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051b5fb mov ecx, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); ecx = (u32)(M32(m_)); }
  /* 0051b5fe mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0051b601 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0051b604 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b606 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 0051b60a je 0x51b62e */ if (ZF_) goto L_0051b62e;
  /* 0051b60c mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0051b60f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b611 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b613 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0051b61a mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0051b621 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b622 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0051b626 call 0x404140 */ esp -= 4; M32(esp) = 0x51b62bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51b626u); RETCHK(0x51b62bu, 0x51b626u); LOADALL;
  /* 0051b62b mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
L_0051b62e:;
  /* 0051b62e mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0051b632 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051b635 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b638 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b639 mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0051b63c inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b63d jmp 0x51b590 */ goto L_0051b590;
L_0051b642:;
  /* 0051b642 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b645 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0051b648 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b649 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0051b64c add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b64e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b64f mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 0051b652 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b653 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b654 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0051b657 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b658 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b659 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b65a lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 0051b65d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b65e jmp 0x51b4fc */ goto L_0051b4fc;
L_0051b663:;
  /* 0051b663 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051b665 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
L_0051b668:;
  /* 0051b668 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b66a jae 0x51b69f */ if (!CF_) goto L_0051b69f;
  /* 0051b66c mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051b66f sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b671 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b673 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b675 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b677 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b679 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b67c cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b67e ja 0x51b682 */ if (!(CF_|ZF_)) goto L_0051b682;
  /* 0051b680 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051b682:;
  /* 0051b682 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051b685 mov eax, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); eax = (u32)(M32(m_)); }
  /* 0051b688 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b689 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b68b call 0x4033a0 */ esp -= 4; M32(esp) = 0x51b690u; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x51b68bu); RETCHK(0x51b690u, 0x51b68bu); LOADALL;
  /* 0051b690 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0051b693 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0051b696 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b699 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b69a mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0051b69d jmp 0x51b668 */ goto L_0051b668;
L_0051b69f:;
  /* 0051b69f mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051b6a2 mov ebx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0051b6a5 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051b6a7 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051b6a9 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b6ab sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b6ad mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051b6b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b6b1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051b6b3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b6b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b6b6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b6b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b6b9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b6ba mov edx, esi */ { edx = (u32)(esi); }
  /* 0051b6bc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b6bd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b6be lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0051b6c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b6c2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b6c3 call 0x51b700 */ esp -= 4; M32(esp) = 0x51b6c8u; SAVEALL; F_0051b700(c); ABI_CHECK(0x51b700u, 0x51b6c3u); RETCHK(0x51b6c8u, 0x51b6c3u); LOADALL;
  /* 0051b6c8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b6cb add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b6ce push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b6cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b6d0 jmp 0x51b4e7 */ goto L_0051b4e7;
}

void F_0051b517(CPU *c) {
  NATIVE_HOOK(0x51b517u) REGS; LOADALL;
  goto L_0051b517;
L_0051b4e7:;
  /* 0051b4e7 mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0051b4ea mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0051b4ed mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0051b4f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b4f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b4f2 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0051b4f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b4f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b4f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b4f8 lea ecx, [ebp + 0x14] */ ecx = (u32)((u32)(ebp + 0x14u));
  /* 0051b4fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
L_0051b4fc:;
  /* 0051b4fc call 0x51b760 */ esp -= 4; M32(esp) = 0x51b501u; SAVEALL; F_0051b760(c); ABI_CHECK(0x51b760u, 0x51b4fcu); RETCHK(0x51b501u, 0x51b4fcu); LOADALL;
  /* 0051b501 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051b504 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b507 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b508 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b509 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051b510 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b511 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b513 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b514 ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
L_0051b517:;
  /* 0051b517 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b51a mov edi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 0051b51d cmp edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b520 jae 0x51b52c */ if (!CF_) goto L_0051b52c;
L_0051b522:;
  /* 0051b522 call 0x403340 */ esp -= 4; M32(esp) = 0x51b527u; SAVEALL; F_00403340(c); ABI_CHECK(0x403340u, 0x51b522u); RETCHK(0x51b527u, 0x51b522u); LOADALL;
  /* 0051b527 cmp edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b52a jb 0x51b522 */ if (CF_) goto L_0051b522;
L_0051b52c:;
  /* 0051b52c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b52e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b530 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0051b535 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b537 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0051b53e jae 0x51b663 */ if (!CF_) goto L_0051b663;
  /* 0051b544 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0051b547 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051b549 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 0051b54c mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 0051b54f mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
L_0051b552:;
  /* 0051b552 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0051b555 cmp dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b558 jne 0x51b55f */ if (!ZF_) goto L_0051b55f;
  /* 0051b55a cmp edi, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b55d je 0x51b584 */ if (ZF_) goto L_0051b584;
L_0051b55f:;
  /* 0051b55f mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0051b562 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b565 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b567 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051b569 ja 0x51b56d */ if (!(CF_|ZF_)) goto L_0051b56d;
  /* 0051b56b sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b56d:;
  /* 0051b56d mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b570 mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 0051b573 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b574 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b576 call 0x4033a0 */ esp -= 4; M32(esp) = 0x51b57bu; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x51b576u); RETCHK(0x51b57bu, 0x51b576u); LOADALL;
  /* 0051b57b mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0051b57e mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b581 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b582 jmp 0x51b552 */ goto L_0051b552;
L_0051b584:;
  /* 0051b584 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0051b586 jmp 0x51b590 */ goto L_0051b590;
L_0051b590:;
  /* 0051b590 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b592 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b595 jae 0x51b642 */ if (!CF_) goto L_0051b642;
  /* 0051b59b lea ecx, [edi + ebx] */ ecx = (u32)((u32)(edi + ebx));
  /* 0051b59e add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b5a0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b5a2 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b5a5 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b5a7 ja 0x51b5ab */ if (!(CF_|ZF_)) goto L_0051b5ab;
  /* 0051b5a9 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b5ab:;
  /* 0051b5ab mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b5ae mov eax, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0051b5b1 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051b5b4 mov dword ptr [ebp + 0x20], eax */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(eax); }
  /* 0051b5b7 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b5ba inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b5bb cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b5bd ja 0x51b5cb */ if (!(CF_|ZF_)) goto L_0051b5cb;
  /* 0051b5bf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051b5c1 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0051b5c3 call 0x4038d0 */ esp -= 4; M32(esp) = 0x51b5c8u; SAVEALL; F_004038d0(c); ABI_CHECK(0x4038d0u, 0x51b5c3u); RETCHK(0x51b5c8u, 0x51b5c3u); LOADALL;
  /* 0051b5c8 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
L_0051b5cb:;
  /* 0051b5cb mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b5ce mov ebx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b5d1 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051b5d3 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b5d6 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b5d8 ja 0x51b5dc */ if (!(CF_|ZF_)) goto L_0051b5dc;
  /* 0051b5da sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
L_0051b5dc:;
  /* 0051b5dc mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051b5df cmp dword ptr [eax + ebx*4], 0 */ { const u32 m_ = (u32)(eax + ebx * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b5e3 jne 0x51b5f8 */ if (!ZF_) goto L_0051b5f8;
  /* 0051b5e5 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0051b5e7 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51b5ecu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51b5e7u); RETCHK(0x51b5ecu, 0x51b5e7u); LOADALL;
  /* 0051b5ec mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b5ef mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0051b5f2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b5f5 mov dword ptr [ecx + ebx*4], eax */ { const u32 m_ = (u32)(ecx + ebx * 4u); M32(m_) = (u32)(eax); }
L_0051b5f8:;
  /* 0051b5f8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051b5fb mov ecx, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); ecx = (u32)(M32(m_)); }
  /* 0051b5fe mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0051b601 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0051b604 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b606 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 0051b60a je 0x51b62e */ if (ZF_) goto L_0051b62e;
  /* 0051b60c mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0051b60f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b611 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b613 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0051b61a mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0051b621 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b622 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0051b626 call 0x404140 */ esp -= 4; M32(esp) = 0x51b62bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51b626u); RETCHK(0x51b62bu, 0x51b626u); LOADALL;
  /* 0051b62b mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
L_0051b62e:;
  /* 0051b62e mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0051b632 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051b635 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b638 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b639 mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0051b63c inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b63d jmp 0x51b590 */ goto L_0051b590;
L_0051b642:;
  /* 0051b642 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b645 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0051b648 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b649 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0051b64c add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b64e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b64f mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 0051b652 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b653 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b654 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0051b657 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b658 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b659 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b65a lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 0051b65d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b65e jmp 0x51b4fc */ goto L_0051b4fc;
L_0051b663:;
  /* 0051b663 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051b665 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
L_0051b668:;
  /* 0051b668 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b66a jae 0x51b69f */ if (!CF_) goto L_0051b69f;
  /* 0051b66c mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051b66f sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b671 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b673 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b675 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b677 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b679 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b67c cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b67e ja 0x51b682 */ if (!(CF_|ZF_)) goto L_0051b682;
  /* 0051b680 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051b682:;
  /* 0051b682 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051b685 mov eax, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); eax = (u32)(M32(m_)); }
  /* 0051b688 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b689 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b68b call 0x4033a0 */ esp -= 4; M32(esp) = 0x51b690u; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x51b68bu); RETCHK(0x51b690u, 0x51b68bu); LOADALL;
  /* 0051b690 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0051b693 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0051b696 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0051b699 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b69a mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0051b69d jmp 0x51b668 */ goto L_0051b668;
L_0051b69f:;
  /* 0051b69f mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051b6a2 mov ebx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0051b6a5 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0051b6a7 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051b6a9 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b6ab sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b6ad mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051b6b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b6b1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051b6b3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b6b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b6b6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051b6b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b6b9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b6ba mov edx, esi */ { edx = (u32)(esi); }
  /* 0051b6bc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b6bd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b6be lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0051b6c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b6c2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b6c3 call 0x51b700 */ esp -= 4; M32(esp) = 0x51b6c8u; SAVEALL; F_0051b700(c); ABI_CHECK(0x51b700u, 0x51b6c3u); RETCHK(0x51b6c8u, 0x51b6c3u); LOADALL;
  /* 0051b6c8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b6cb add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b6ce push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b6cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b6d0 jmp 0x51b4e7 */ goto L_0051b4e7;
}

void F_0051b6d5(CPU *c) {
  NATIVE_HOOK(0x51b6d5u) REGS; LOADALL;
L_0051b6d5:;
  /* 0051b6d5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051b6d8 mov edi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 0051b6db cmp edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b6de jae 0x51b6ea */ if (!CF_) goto L_0051b6ea;
L_0051b6e0:;
  /* 0051b6e0 call 0x403870 */ esp -= 4; M32(esp) = 0x51b6e5u; SAVEALL; F_00403870(c); ABI_CHECK(0x403870u, 0x51b6e0u); RETCHK(0x51b6e5u, 0x51b6e0u); LOADALL;
  /* 0051b6e5 cmp edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b6e8 jb 0x51b6e0 */ if (CF_) goto L_0051b6e0;
L_0051b6ea:;
  /* 0051b6ea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b6ec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b6ee call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0051b6f3 int3 */ TRAP(0x51b6f3u, "int3");
}

void F_0051b700(CPU *c) {
  NATIVE_HOOK(0x51b700u) REGS; LOADALL;
L_0051b700:;
  /* 0051b700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b703 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b704 mov ebx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 0051b707 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b708 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 0051b70b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b70c mov edi, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edi = (u32)(M32(m_)); }
  /* 0051b70f nop */ ;
L_0051b710:;
  /* 0051b710 cmp dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b713 jne 0x51b71a */ if (!ZF_) goto L_0051b71a;
  /* 0051b715 cmp dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b718 je 0x51b750 */ if (ZF_) goto L_0051b750;
L_0051b71a:;
  /* 0051b71a mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b71d dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051b71e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b720 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b722 ja 0x51b726 */ if (!(CF_|ZF_)) goto L_0051b726;
  /* 0051b724 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051b726:;
  /* 0051b726 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0051b729 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b72c dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051b72d cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b72f mov eax, edi */ { eax = (u32)(edi); }
  /* 0051b731 ja 0x51b735 */ if (!(CF_|ZF_)) goto L_0051b735;
  /* 0051b733 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b735:;
  /* 0051b735 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051b738 mov ecx, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); ecx = (u32)(M32(m_)); }
  /* 0051b73b mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0051b73e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b740 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b742 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b743 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b746 mov ecx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); ecx = (u32)(M32(m_)); }
  /* 0051b749 call 0x404140 */ esp -= 4; M32(esp) = 0x51b74eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51b749u); RETCHK(0x51b74eu, 0x51b749u); LOADALL;
  /* 0051b74e jmp 0x51b710 */ goto L_0051b710;
L_0051b750:;
  /* 0051b750 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b753 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0051b756 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0051b759 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b75a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b75b mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0051b75d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b75e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b75f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b760(CPU *c) {
  NATIVE_HOOK(0x51b760u) REGS; LOADALL;
L_0051b760:;
  /* 0051b760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b763 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b764 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0051b767 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b768 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0051b76b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b76c mov edi, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edi = (u32)(M32(m_)); }
  /* 0051b76f nop */ ;
L_0051b770:;
  /* 0051b770 cmp ebx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b773 jne 0x51b77a */ if (!ZF_) goto L_0051b77a;
  /* 0051b775 cmp esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b778 je 0x51b7b0 */ if (ZF_) goto L_0051b7b0;
L_0051b77a:;
  /* 0051b77a mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b77d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b77f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051b781 ja 0x51b785 */ if (!(CF_|ZF_)) goto L_0051b785;
  /* 0051b783 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051b785:;
  /* 0051b785 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0051b788 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b78b cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b78d mov eax, edi */ { eax = (u32)(edi); }
  /* 0051b78f ja 0x51b793 */ if (!(CF_|ZF_)) goto L_0051b793;
  /* 0051b791 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b793:;
  /* 0051b793 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051b796 mov ecx, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); ecx = (u32)(M32(m_)); }
  /* 0051b799 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0051b79c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b79e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b7a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b7a1 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b7a4 mov ecx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); ecx = (u32)(M32(m_)); }
  /* 0051b7a7 call 0x404140 */ esp -= 4; M32(esp) = 0x51b7acu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51b7a7u); RETCHK(0x51b7acu, 0x51b7a7u); LOADALL;
  /* 0051b7ac inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b7ad inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b7ae jmp 0x51b770 */ goto L_0051b770;
L_0051b7b0:;
  /* 0051b7b0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b7b3 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0051b7b6 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0051b7b9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b7ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b7bb mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0051b7bd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b7be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b7bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b7c0(CPU *c) {
  NATIVE_HOOK(0x51b7c0u) REGS; LOADALL;
L_0051b7c0:;
  /* 0051b7c0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b7c2 jbe 0x51b7ee */ if ((CF_|ZF_)) goto L_0051b7ee;
  /* 0051b7c4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b7c5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b7c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0051b7c7:;
  /* 0051b7c7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b7c9 je 0x51b7e5 */ if (ZF_) goto L_0051b7e5;
  /* 0051b7cb mov esi, edx */ { esi = (u32)(edx); }
  /* 0051b7cd mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 0051b7cf mov edi, eax */ { edi = (u32)(eax); }
  /* 0051b7d1 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 0051b7d3 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0051b7d6 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051b7d9 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b7dc mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051b7df mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051b7e2 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
L_0051b7e5:;
  /* 0051b7e5 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b7e8 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051b7e9 jne 0x51b7c7 */ if (!ZF_) goto L_0051b7c7;
  /* 0051b7eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b7ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b7ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0051b7ee:;
  /* 0051b7ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b7f0(CPU *c) {
  NATIVE_HOOK(0x51b7f0u) REGS; LOADALL;
L_0051b7f0:;
  /* 0051b7f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b7f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b7f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b7f4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051b7f6 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051b7f9 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b7fc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b7fd cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b7ff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b800 ja 0x51b809 */ if (!(CF_|ZF_)) goto L_0051b809;
  /* 0051b802 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051b804 call 0x4038d0 */ esp -= 4; M32(esp) = 0x51b809u; SAVEALL; F_004038d0(c); ABI_CHECK(0x4038d0u, 0x51b804u); RETCHK(0x51b809u, 0x51b804u); LOADALL;
L_0051b809:;
  /* 0051b809 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051b80c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b80e jne 0x51b813 */ if (!ZF_) goto L_0051b813;
  /* 0051b810 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
L_0051b813:;
  /* 0051b813 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b816 mov eax, dword ptr [ecx + esi*4 - 4] */ { const u32 m_ = (u32)(ecx + esi * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051b81a dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051b81b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b81d jne 0x51b82f */ if (!ZF_) goto L_0051b82f;
  /* 0051b81f push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0051b821 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51b826u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51b821u); RETCHK(0x51b826u, 0x51b821u); LOADALL;
  /* 0051b826 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051b829 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b82c mov dword ptr [edx + esi*4], eax */ { const u32 m_ = (u32)(edx + esi * 4u); M32(m_) = (u32)(eax); }
L_0051b82f:;
  /* 0051b82f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b832 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051b835 mov edx, dword ptr [ecx + esi*4] */ { const u32 m_ = (u32)(ecx + esi * 4u); edx = (u32)(M32(m_)); }
  /* 0051b838 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b839 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b83a call 0x403d80 */ esp -= 4; M32(esp) = 0x51b83fu; SAVEALL; F_00403d80(c); ABI_CHECK(0x403d80u, 0x51b83au); RETCHK(0x51b83fu, 0x51b83au); LOADALL;
  /* 0051b83f mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051b842 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b845 mov dword ptr [ebx + 0xc], esi */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(esi); }
  /* 0051b848 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b849 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b84a mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 0051b84d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b84e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b84f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051b860(CPU *c) {
  NATIVE_HOOK(0x51b860u) REGS; LOADALL;
L_0051b860:;
  /* 0051b860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b863 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b866 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0051b869 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0051b86c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051b86f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b870 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0051b873 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b874 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 0051b877 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b878 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b87b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b87c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b87d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b87e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b87f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b880 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051b883 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051b884 call 0x51b8f0 */ esp -= 4; M32(esp) = 0x51b889u; SAVEALL; F_0051b8f0(c); ABI_CHECK(0x51b8f0u, 0x51b884u); RETCHK(0x51b889u, 0x51b884u); LOADALL;
  /* 0051b889 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0051b88b add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051b88e cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b890 jne 0x51b8a2 */ if (!ZF_) goto L_0051b8a2;
  /* 0051b892 cmp dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b895 jne 0x51b8a2 */ if (!ZF_) goto L_0051b8a2;
  /* 0051b897 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b898 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0051b89d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b89e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b8a0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b8a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051b8a2:;
  /* 0051b8a2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b8a3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051b8a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b8a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051b8a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b8a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b8b0(CPU *c) {
  NATIVE_HOOK(0x51b8b0u) REGS; LOADALL;
L_0051b8b0:;
  /* 0051b8b0 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b8b2 je 0x51b8e2 */ if (ZF_) goto L_0051b8e2;
  /* 0051b8b4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b8b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b8b6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0051b8b7:;
  /* 0051b8b7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b8b9 je 0x51b8d5 */ if (ZF_) goto L_0051b8d5;
  /* 0051b8bb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051b8bd mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 0051b8bf mov edi, eax */ { edi = (u32)(eax); }
  /* 0051b8c1 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 0051b8c3 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0051b8c6 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051b8c9 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b8cc mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051b8cf mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051b8d2 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
L_0051b8d5:;
  /* 0051b8d5 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b8d8 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b8db cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b8dd jne 0x51b8b7 */ if (!ZF_) goto L_0051b8b7;
  /* 0051b8df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b8e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b8e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0051b8e2:;
  /* 0051b8e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b8f0(CPU *c) {
  NATIVE_HOOK(0x51b8f0u) REGS; LOADALL;
L_0051b8f0:;
  /* 0051b8f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b8f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b8f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b8f4 mov ebx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 0051b8f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b8f8 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051b8fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b8fc mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0051b8ff nop */ ;
L_0051b900:;
  /* 0051b900 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b903 jne 0x51b90a */ if (!ZF_) goto L_0051b90a;
  /* 0051b905 cmp edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b908 je 0x51b959 */ if (ZF_) goto L_0051b959;
L_0051b90a:;
  /* 0051b90a mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0051b90d mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b910 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b912 ja 0x51b916 */ if (!(CF_|ZF_)) goto L_0051b916;
  /* 0051b914 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b916:;
  /* 0051b916 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051b919 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b91b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0051b91d ja 0x51b921 */ if (!(CF_|ZF_)) goto L_0051b921;
  /* 0051b91f sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051b921:;
  /* 0051b921 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051b924 mov eax, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0051b927 cmp dword ptr [eax + 0x18], 0x10 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b92b mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051b92e mov ecx, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); ecx = (u32)(M32(m_)); }
  /* 0051b931 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0051b934 jb 0x51b93b */ if (CF_) goto L_0051b93b;
  /* 0051b936 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051b939 jmp 0x51b93e */ goto L_0051b93e;
L_0051b93b:;
  /* 0051b93b add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051b93e:;
  /* 0051b93e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051b93f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b940 mov eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0051b943 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b944 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051b946 call 0x405de0 */ esp -= 4; M32(esp) = 0x51b94bu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x51b946u); RETCHK(0x51b94bu, 0x51b946u); LOADALL;
  /* 0051b94b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b94d jne 0x51b959 */ if (!ZF_) goto L_0051b959;
  /* 0051b94f mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0051b952 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b953 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051b954 mov dword ptr [ebp + 0x20], eax */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(eax); }
  /* 0051b957 jmp 0x51b900 */ goto L_0051b900;
L_0051b959:;
  /* 0051b959 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051b95c mov ecx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0051b95f mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0051b962 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b963 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0051b965 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b966 mov dword ptr [eax + 8], ebx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051b969 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0051b96c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051b96d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b96e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b970(CPU *c) {
  NATIVE_HOOK(0x51b970u) REGS; LOADALL;
L_0051b970:;
  /* 0051b970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b973 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051b976 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051b979 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b97b je 0x51b9ab */ if (ZF_) goto L_0051b9ab;
  /* 0051b97d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b97e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b97f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0051b980:;
  /* 0051b980 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051b982 je 0x51b99e */ if (ZF_) goto L_0051b99e;
  /* 0051b984 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051b986 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 0051b988 mov edi, eax */ { edi = (u32)(eax); }
  /* 0051b98a mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 0051b98c mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0051b98f mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051b992 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051b995 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0051b998 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0051b99b mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
L_0051b99e:;
  /* 0051b99e add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051b9a1 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051b9a4 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051b9a6 jne 0x51b980 */ if (!ZF_) goto L_0051b980;
  /* 0051b9a8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051b9a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051b9aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0051b9ab:;
  /* 0051b9ab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051b9ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051b9b0(CPU *c) {
  NATIVE_HOOK(0x51b9b0u) REGS; LOADALL;
L_0051b9b0:;
  /* 0051b9b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051b9b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051b9b3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051b9b9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051b9bb push 0x61dc32 */ { u32 v_ = 0x61dc32u; esp -= 4; M32(esp) = v_; }
  /* 0051b9c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b9c1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051b9c4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051b9cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051b9cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051b9cd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b9ce mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051b9d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051b9d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051b9d3 call 0x506b60 */ esp -= 4; M32(esp) = 0x51b9d8u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x51b9d3u); RETCHK(0x51b9d8u, 0x51b9d3u); LOADALL;
  /* 0051b9d8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051b9da mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0051b9dd mov dword ptr [edi], 0x652450 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x652450u); }
  /* 0051b9e3 mov dword ptr [edi + 0x180], 0x64d178 */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(0x64d178u); }
  /* 0051b9ed mov dword ptr [edi + 0x184], ebx */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 0051b9f3 lea esi, [edi + 0x188] */ esi = (u32)((u32)(edi + 0x188u));
  /* 0051b9f9 call 0x5267c0 */ esp -= 4; M32(esp) = 0x51b9feu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x51b9f9u); RETCHK(0x51b9feu, 0x51b9f9u); LOADALL;
  /* 0051b9fe mov dword ptr [edi + 0x250], 0xf */ { const u32 m_ = (u32)(edi + 0x250u); M32(m_) = (u32)(0xfu); }
  /* 0051ba08 mov dword ptr [edi + 0x24c], ebx */ { const u32 m_ = (u32)(edi + 0x24cu); M32(m_) = (u32)(ebx); }
  /* 0051ba0e mov byte ptr [edi + 0x23c], bl */ { const u32 m_ = (u32)(edi + 0x23cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051ba14 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051ba16 push 0x652540 */ { u32 v_ = 0x652540u; esp -= 4; M32(esp) = v_; }
  /* 0051ba1b lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0051ba1e mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0051ba22 call 0x404420 */ esp -= 4; M32(esp) = 0x51ba27u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51ba22u); RETCHK(0x51ba27u, 0x51ba22u); LOADALL;
  /* 0051ba27 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051ba2a mov byte ptr [edi + 0x22e], bl */ { const u32 m_ = (u32)(edi + 0x22eu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051ba30 mov byte ptr [edi + 0x22d], bl */ { const u32 m_ = (u32)(edi + 0x22du); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051ba36 mov byte ptr [edi + 0x22c], bl */ { const u32 m_ = (u32)(edi + 0x22cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051ba3c mov byte ptr [edi + 0x234], bl */ { const u32 m_ = (u32)(edi + 0x234u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051ba42 mov byte ptr [edi + 0x235], bl */ { const u32 m_ = (u32)(edi + 0x235u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051ba48 mov dword ptr [edi + 0x20c], 2 */ { const u32 m_ = (u32)(edi + 0x20cu); M32(m_) = (u32)(0x2u); }
  /* 0051ba52 mov byte ptr [edi + 0x3c], 1 */ { const u32 m_ = (u32)(edi + 0x3cu); M8(m_) = (u8)(0x1u); }
  /* 0051ba56 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051ba58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051ba59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051ba5a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051ba61 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051ba62 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051ba64 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ba65 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051ba70(CPU *c) {
  NATIVE_HOOK(0x51ba70u) REGS; LOADALL;
L_0051ba70:;
  /* 0051ba70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051ba71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051ba73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ba74 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051ba76 call 0x51baa0 */ esp -= 4; M32(esp) = 0x51ba7bu; SAVEALL; F_0051baa0(c); ABI_CHECK(0x51baa0u, 0x51ba76u); RETCHK(0x51ba7bu, 0x51ba76u); LOADALL;
  /* 0051ba7b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051ba7f je 0x51ba8a */ if (ZF_) goto L_0051ba8a;
  /* 0051ba81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ba82 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51ba87u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51ba82u); RETCHK(0x51ba87u, 0x51ba82u); LOADALL;
  /* 0051ba87 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051ba8a:;
  /* 0051ba8a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051ba8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051ba8d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ba8e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051baa0(CPU *c) {
  NATIVE_HOOK(0x51baa0u) REGS; LOADALL;
L_0051baa0:;
  /* 0051baa0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051baa1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051baa3 mov dword ptr [esi], 0x652450 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652450u); }
  /* 0051baa9 cmp dword ptr [esi + 0x250], 0x10 */ { const u32 m_ = (u32)(esi + 0x250u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bab0 jb 0x51bac1 */ if (CF_) goto L_0051bac1;
  /* 0051bab2 mov eax, dword ptr [esi + 0x23c] */ { const u32 m_ = (u32)(esi + 0x23cu); eax = (u32)(M32(m_)); }
  /* 0051bab8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051bab9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51babeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51bab9u); RETCHK(0x51babeu, 0x51bab9u); LOADALL;
  /* 0051babe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051bac1:;
  /* 0051bac1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051bac3 mov dword ptr [esi + 0x250], 0xf */ { const u32 m_ = (u32)(esi + 0x250u); M32(m_) = (u32)(0xfu); }
  /* 0051bacd mov dword ptr [esi + 0x24c], eax */ { const u32 m_ = (u32)(esi + 0x24cu); M32(m_) = (u32)(eax); }
  /* 0051bad3 lea ecx, [esi + 0x188] */ ecx = (u32)((u32)(esi + 0x188u));
  /* 0051bad9 mov byte ptr [esi + 0x23c], al */ { const u32 m_ = (u32)(esi + 0x23cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0051badf call 0x5267e0 */ esp -= 4; M32(esp) = 0x51bae4u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x51badfu); RETCHK(0x51bae4u, 0x51badfu); LOADALL;
  /* 0051bae4 lea ecx, [esi + 0x180] */ ecx = (u32)((u32)(esi + 0x180u));
  /* 0051baea call 0x529300 */ esp -= 4; M32(esp) = 0x51baefu; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x51baeau); RETCHK(0x51baefu, 0x51baeau); LOADALL;
  /* 0051baef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051baf1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051baf2 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0051bb00(CPU *c) {
  NATIVE_HOOK(0x51bb00u) REGS; LOADALL;
L_0051bb00:;
  /* 0051bb00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051bb01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051bb03 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051bb06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051bb09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051bb0a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051bb0c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051bb0e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bb10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051bb11 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0051bb14 call 0x404140 */ esp -= 4; M32(esp) = 0x51bb19u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51bb14u); RETCHK(0x51bb19u, 0x51bb14u); LOADALL;
  /* 0051bb19 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051bb1c lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 0051bb1f lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051bb22 call 0x52cee0 */ esp -= 4; M32(esp) = 0x51bb27u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x51bb22u); RETCHK(0x51bb27u, 0x51bb22u); LOADALL;
  /* 0051bb27 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051bb2a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bb2c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051bb2d lea eax, [esi + 0x180] */ eax = (u32)((u32)(esi + 0x180u));
  /* 0051bb33 call 0x529310 */ esp -= 4; M32(esp) = 0x51bb38u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x51bb33u); RETCHK(0x51bb38u, 0x51bb33u); LOADALL;
  /* 0051bb38 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bb3a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bb3c lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051bb3f call 0x52ce60 */ esp -= 4; M32(esp) = 0x51bb44u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x51bb3fu); RETCHK(0x51bb44u, 0x51bb3fu); LOADALL;
  /* 0051bb44 lea ecx, [esi + 0x21c] */ ecx = (u32)((u32)(esi + 0x21cu));
  /* 0051bb4a call 0x52ce90 */ esp -= 4; M32(esp) = 0x51bb4fu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x51bb4au); RETCHK(0x51bb4fu, 0x51bb4au); LOADALL;
  /* 0051bb4f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051bb54 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051bb59 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051bb5c call 0x52ce60 */ esp -= 4; M32(esp) = 0x51bb61u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x51bb5cu); RETCHK(0x51bb61u, 0x51bb5cu); LOADALL;
  /* 0051bb61 lea ecx, [esi + 0x224] */ ecx = (u32)((u32)(esi + 0x224u));
  /* 0051bb67 call 0x52ce90 */ esp -= 4; M32(esp) = 0x51bb6cu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x51bb67u); RETCHK(0x51bb6cu, 0x51bb67u); LOADALL;
  /* 0051bb6c mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051bb6e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bb70 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051bb72 mov dword ptr [esi + 0x230], 0 */ { const u32 m_ = (u32)(esi + 0x230u); M32(m_) = (u32)(0x0u); }
  /* 0051bb7c call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51bb7fu; SAVEALL; call_ind(c, t_); RETCHK(0x51bb7fu, 0x51bb7cu); LOADALL; }
  /* 0051bb7f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051bb81 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051bb82 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051bb84 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051bb85 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0051bb90(CPU *c) {
  NATIVE_HOOK(0x51bb90u) REGS; LOADALL;
L_0051bb90:;
  /* 0051bb90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051bb91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051bb93 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051bb96 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051bb97 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051bb99 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051bb9c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051bb9e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051bb9f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051bba2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051bba3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051bba4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051bba6 call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51bbacu; SAVEALL; call_ind(c, t_); RETCHK(0x51bbacu, 0x51bba6u); LOADALL; }
  /* 0051bbac mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0051bbaf lea ecx, [esi + 0x21c] */ ecx = (u32)((u32)(esi + 0x21cu));
  /* 0051bbb5 call 0x52ce90 */ esp -= 4; M32(esp) = 0x51bbbau; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x51bbb5u); RETCHK(0x51bbbau, 0x51bbb5u); LOADALL;
  /* 0051bbba mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0051bbbd lea ecx, [esi + 0x224] */ ecx = (u32)((u32)(esi + 0x224u));
  /* 0051bbc3 call 0x52ce90 */ esp -= 4; M32(esp) = 0x51bbc8u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x51bbc3u); RETCHK(0x51bbc8u, 0x51bbc3u); LOADALL;
  /* 0051bbc8 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051bbca push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bbcc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051bbce mov dword ptr [esi + 0x230], 0 */ { const u32 m_ = (u32)(esi + 0x230u); M32(m_) = (u32)(0x0u); }
  /* 0051bbd8 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51bbdbu; SAVEALL; call_ind(c, t_); RETCHK(0x51bbdbu, 0x51bbd8u); LOADALL; }
  /* 0051bbdb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051bbdd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051bbde pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051bbdf ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0051bbf0(CPU *c) {
  NATIVE_HOOK(0x51bbf0u) REGS; LOADALL;
L_0051bbf0:;
  /* 0051bbf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051bbf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051bbf3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051bbf4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bbf5 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051bbf7 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0051bbf9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051bbfa call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51bbfdu; SAVEALL; call_ind(c, t_); RETCHK(0x51bbfdu, 0x51bbfau); LOADALL; }
  /* 0051bbfd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051bbff je 0x51bcb8 */ if (ZF_) goto L_0051bcb8;
  /* 0051bc05 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0051bc07 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051bc09 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51bc0cu; SAVEALL; call_ind(c, t_); RETCHK(0x51bc0cu, 0x51bc09u); LOADALL; }
  /* 0051bc0c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051bc0e je 0x51bcb8 */ if (ZF_) goto L_0051bcb8;
  /* 0051bc14 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0051bc16 call 0x5084b0 */ esp -= 4; M32(esp) = 0x51bc1bu; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x51bc16u); RETCHK(0x51bc1bu, 0x51bc16u); LOADALL;
  /* 0051bc1b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051bc1d je 0x51bcb8 */ if (ZF_) goto L_0051bcb8;
  /* 0051bc23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bc24 call 0x508500 */ esp -= 4; M32(esp) = 0x51bc29u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x51bc24u); RETCHK(0x51bc29u, 0x51bc24u); LOADALL;
  /* 0051bc29 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051bc2b jne 0x51bcb0 */ if (!ZF_) goto L_0051bcb0;
  /* 0051bc31 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051bc32 call 0x518bb0 */ esp -= 4; M32(esp) = 0x51bc37u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x51bc32u); RETCHK(0x51bc37u, 0x51bc32u); LOADALL;
  /* 0051bc37 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051bc3a call 0x5180e0 */ esp -= 4; M32(esp) = 0x51bc3fu; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x51bc3au); RETCHK(0x51bc3fu, 0x51bc3au); LOADALL;
  /* 0051bc3f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051bc41 call 0x508d10 */ esp -= 4; M32(esp) = 0x51bc46u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x51bc41u); RETCHK(0x51bc46u, 0x51bc41u); LOADALL;
  /* 0051bc46 mov edi, eax */ { edi = (u32)(eax); }
  /* 0051bc48 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bc4a je 0x51bc70 */ if (ZF_) goto L_0051bc70;
  /* 0051bc4c lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0051bc4f mov esi, 0x652540 */ { esi = (u32)(0x652540u); }
  /* 0051bc54 call 0x405bd0 */ esp -= 4; M32(esp) = 0x51bc59u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x51bc54u); RETCHK(0x51bc59u, 0x51bc54u); LOADALL;
  /* 0051bc59 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051bc5b je 0x51bc70 */ if (ZF_) goto L_0051bc70;
  /* 0051bc5d mov eax, edi */ { eax = (u32)(edi); }
  /* 0051bc5f nop */ ;
L_0051bc60:;
  /* 0051bc60 mov byte ptr [eax + 0x235], 0 */ { const u32 m_ = (u32)(eax + 0x235u); M8(m_) = (u8)(0x0u); }
  /* 0051bc67 call 0x51c300 */ esp -= 4; M32(esp) = 0x51bc6cu; SAVEALL; F_0051c300(c); ABI_CHECK(0x51c300u, 0x51bc67u); RETCHK(0x51bc6cu, 0x51bc67u); LOADALL;
  /* 0051bc6c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bc6e jne 0x51bc60 */ if (!ZF_) goto L_0051bc60;
L_0051bc70:;
  /* 0051bc70 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051bc73 call 0x5180e0 */ esp -= 4; M32(esp) = 0x51bc78u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x51bc73u); RETCHK(0x51bc78u, 0x51bc73u); LOADALL;
  /* 0051bc78 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0051bc7a mov edi, eax */ { edi = (u32)(eax); }
  /* 0051bc7c call 0x508d30 */ esp -= 4; M32(esp) = 0x51bc81u; SAVEALL; F_00508d30(c); ABI_CHECK(0x508d30u, 0x51bc7cu); RETCHK(0x51bc81u, 0x51bc7cu); LOADALL;
  /* 0051bc81 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051bc84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051bc85 call 0x5179b0 */ esp -= 4; M32(esp) = 0x51bc8au; SAVEALL; F_005179b0(c); ABI_CHECK(0x5179b0u, 0x51bc85u); RETCHK(0x51bc8au, 0x51bc85u); LOADALL;
  /* 0051bc8a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051bc8c call 0x507ac0 */ esp -= 4; M32(esp) = 0x51bc91u; SAVEALL; F_00507ac0(c); ABI_CHECK(0x507ac0u, 0x51bc8cu); RETCHK(0x51bc91u, 0x51bc8cu); LOADALL;
  /* 0051bc91 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051bc93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bc94 call 0x51bd30 */ esp -= 4; M32(esp) = 0x51bc99u; SAVEALL; F_0051bd30(c); ABI_CHECK(0x51bd30u, 0x51bc94u); RETCHK(0x51bc99u, 0x51bc94u); LOADALL;
  /* 0051bc99 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051bc9b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051bc9c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0051bca0:;
  /* 0051bca0 mov byte ptr [eax + 0x235], 1 */ { const u32 m_ = (u32)(eax + 0x235u); M8(m_) = (u8)(0x1u); }
  /* 0051bca7 call 0x51c300 */ esp -= 4; M32(esp) = 0x51bcacu; SAVEALL; F_0051c300(c); ABI_CHECK(0x51c300u, 0x51bca7u); RETCHK(0x51bcacu, 0x51bca7u); LOADALL;
  /* 0051bcac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bcae jne 0x51bca0 */ if (!ZF_) goto L_0051bca0;
L_0051bcb0:;
  /* 0051bcb0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051bcb1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051bcb3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051bcb4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051bcb6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051bcb7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051bcb8:;
  /* 0051bcb8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051bcb9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051bcbb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051bcbc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051bcbe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051bcbf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051bcc0(CPU *c) {
  NATIVE_HOOK(0x51bcc0u) REGS; LOADALL;
L_0051bcc0:;
  /* 0051bcc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051bcc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051bcc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051bcc4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bcc5 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051bcc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bcc8 call 0x508500 */ esp -= 4; M32(esp) = 0x51bccdu; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x51bcc8u); RETCHK(0x51bccdu, 0x51bcc8u); LOADALL;
  /* 0051bccd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051bccf je 0x51bd27 */ if (ZF_) goto L_0051bd27;
  /* 0051bcd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051bcd2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051bcd3 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051bcd5 call 0x507b00 */ esp -= 4; M32(esp) = 0x51bcdau; SAVEALL; F_00507b00(c); ABI_CHECK(0x507b00u, 0x51bcd5u); RETCHK(0x51bcdau, 0x51bcd5u); LOADALL;
  /* 0051bcda call 0x518bb0 */ esp -= 4; M32(esp) = 0x51bcdfu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x51bcdau); RETCHK(0x51bcdfu, 0x51bcdau); LOADALL;
  /* 0051bcdf call 0x5180e0 */ esp -= 4; M32(esp) = 0x51bce4u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x51bcdfu); RETCHK(0x51bce4u, 0x51bcdfu); LOADALL;
  /* 0051bce4 mov edi, dword ptr [eax + 0x1f4] */ { const u32 m_ = (u32)(eax + 0x1f4u); edi = (u32)(M32(m_)); }
  /* 0051bcea add eax, 0x1dc */ { u32 a_ = eax, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051bcef cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bcf2 lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 0051bcf5 jb 0x51bcfb */ if (CF_) goto L_0051bcfb;
  /* 0051bcf7 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 0051bcf9 jmp 0x51bcfd */ goto L_0051bcfd;
L_0051bcfb:;
  /* 0051bcfb mov esi, edx */ { esi = (u32)(edx); }
L_0051bcfd:;
  /* 0051bcfd mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0051bd00 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051bd02 cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bd05 jb 0x51bd09 */ if (CF_) goto L_0051bd09;
  /* 0051bd07 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
L_0051bd09:;
  /* 0051bd09 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051bd0a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051bd0b lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0051bd0e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051bd0f mov edi, eax */ { edi = (u32)(eax); }
  /* 0051bd11 call 0x40cdc0 */ esp -= 4; M32(esp) = 0x51bd16u; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x51bd11u); RETCHK(0x51bd16u, 0x51bd11u); LOADALL;
  /* 0051bd16 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bd18 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bd19 call 0x51bd30 */ esp -= 4; M32(esp) = 0x51bd1eu; SAVEALL; F_0051bd30(c); ABI_CHECK(0x51bd30u, 0x51bd19u); RETCHK(0x51bd1eu, 0x51bd19u); LOADALL;
  /* 0051bd1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051bd1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051bd20 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051bd22 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051bd23 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051bd25 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051bd26 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051bd27:;
  /* 0051bd27 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0051bd29 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051bd2a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051bd2c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051bd2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051bd30(CPU *c) {
  NATIVE_HOOK(0x51bd30u) REGS; LOADALL;
L_0051bd30:;
  /* 0051bd30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051bd31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051bd33 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051bd36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051bd37 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051bd3a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bd3c mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0051bd3f je 0x51be58 */ if (ZF_) goto L_0051be58;
  /* 0051bd45 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bd46 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051bd47 jmp 0x51bd50 */ goto L_0051bd50;
L_0051bd49:;
  /* 0051bd49 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0051bd4c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0051bd50:;
  /* 0051bd50 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bd52 je 0x51be56 */ if (ZF_) goto L_0051be56;
  /* 0051bd58 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0051bd5b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051bd5d lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051bd60 push 0x652540 */ { u32 v_ = 0x652540u; esp -= 4; M32(esp) = v_; }
  /* 0051bd65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051bd66 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bd68 call 0x405de0 */ esp -= 4; M32(esp) = 0x51bd6du; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x51bd68u); RETCHK(0x51bd6du, 0x51bd68u); LOADALL;
  /* 0051bd6d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bd6f jne 0x51be56 */ if (!ZF_) goto L_0051be56;
  /* 0051bd75 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051bd77 call 0x508720 */ esp -= 4; M32(esp) = 0x51bd7cu; SAVEALL; F_00508720(c); ABI_CHECK(0x508720u, 0x51bd77u); RETCHK(0x51bd7cu, 0x51bd77u); LOADALL;
  /* 0051bd7c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051bd7e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bd80 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 0051bd83 je 0x51bdfa */ if (ZF_) goto L_0051bdfa;
  /* 0051bd85 jmp 0x51bd90 */ goto L_0051bd90;
L_0051bd87:;
  /* 0051bd87 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0051bd8a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0051bd90:;
  /* 0051bd90 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 0051bd93 mov eax, edx */ { eax = (u32)(edx); }
  /* 0051bd95 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bd97 jae 0x51bd99 */ if (!CF_) goto L_0051bd99;
L_0051bd99:;
  /* 0051bd99 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bd9b je 0x51bdfa */ if (ZF_) goto L_0051bdfa;
  /* 0051bd9d cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bda0 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0051bda2 jb 0x51bda9 */ if (CF_) goto L_0051bda9;
  /* 0051bda4 mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_0051bda9:;
  /* 0051bda9 cmp dword ptr [ebx + 0x1c], 0x10 */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bdad jb 0x51bdb4 */ if (CF_) goto L_0051bdb4;
  /* 0051bdaf mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051bdb2 jmp 0x51bdb7 */ goto L_0051bdb7;
L_0051bdb4:;
  /* 0051bdb4 lea esi, [ebx + 8] */ esi = (u32)((u32)(ebx + 0x8u));
L_0051bdb7:;
  /* 0051bdb7 mov edi, 0x652540 */ { edi = (u32)(0x652540u); }
  /* 0051bdbc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051bdbe repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 0051bdc0 je 0x51bdc7 */ if (ZF_) goto L_0051bdc7;
  /* 0051bdc2 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0051bdc4 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_0051bdc7:;
  /* 0051bdc7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bdc9 jne 0x51bdf7 */ if (!ZF_) goto L_0051bdf7;
  /* 0051bdcb cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bdce jb 0x51bdf7 */ if (CF_) goto L_0051bdf7;
  /* 0051bdd0 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bdd3 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0051bdd6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bdd8 jne 0x51bdf7 */ if (!ZF_) goto L_0051bdf7;
  /* 0051bdda mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051bddd mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0051bddf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051bde0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051bde2 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51bde5u; SAVEALL; call_ind(c, t_); RETCHK(0x51bde5u, 0x51bde2u); LOADALL; }
  /* 0051bde5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051bde7 call 0x5086c0 */ esp -= 4; M32(esp) = 0x51bdecu; SAVEALL; F_005086c0(c); ABI_CHECK(0x5086c0u, 0x51bde7u); RETCHK(0x51bdecu, 0x51bde7u); LOADALL;
  /* 0051bdec mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051bdee cmp dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bdf1 je 0x51bdf7 */ if (ZF_) goto L_0051bdf7;
  /* 0051bdf3 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bdf5 jne 0x51bd87 */ if (!ZF_) goto L_0051bd87;
L_0051bdf7:;
  /* 0051bdf7 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
L_0051bdfa:;
  /* 0051bdfa mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051bdfd mov al, byte ptr [edi + 0x234] */ { const u32 m_ = (u32)(edi + 0x234u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051be03 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051be05 jne 0x51be3f */ if (!ZF_) goto L_0051be3f;
  /* 0051be07 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051be0a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051be0c jne 0x51be18 */ if (!ZF_) goto L_0051be18;
  /* 0051be0e mov cl, byte ptr [esi + 0x22c] */ { const u32 m_ = (u32)(esi + 0x22cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051be14 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051be16 jne 0x51be4f */ if (!ZF_) goto L_0051be4f;
L_0051be18:;
  /* 0051be18 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051be1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051be1b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051be1d call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51be20u; SAVEALL; call_ind(c, t_); RETCHK(0x51be20u, 0x51be1du); LOADALL; }
  /* 0051be20 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051be22 call 0x5086f0 */ esp -= 4; M32(esp) = 0x51be27u; SAVEALL; F_005086f0(c); ABI_CHECK(0x5086f0u, 0x51be22u); RETCHK(0x51be27u, 0x51be22u); LOADALL;
  /* 0051be27 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051be29 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051be2c je 0x51be56 */ if (ZF_) goto L_0051be56;
  /* 0051be2e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051be30 jne 0x51bd49 */ if (!ZF_) goto L_0051bd49;
  /* 0051be36 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051be37 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051be38 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051be39 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051be3b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051be3c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0051be3f:;
  /* 0051be3f mov byte ptr [edi + 0x234], 0 */ { const u32 m_ = (u32)(edi + 0x234u); M8(m_) = (u8)(0x0u); }
  /* 0051be46 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051be47 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051be48 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051be49 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051be4b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051be4c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0051be4f:;
  /* 0051be4f mov byte ptr [esi + 0x235], 0 */ { const u32 m_ = (u32)(esi + 0x235u); M8(m_) = (u8)(0x0u); }
L_0051be56:;
  /* 0051be56 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051be57 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0051be58:;
  /* 0051be58 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051be59 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051be5b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051be5c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051be60(CPU *c) {
  NATIVE_HOOK(0x51be60u) REGS; LOADALL;
L_0051be60:;
  /* 0051be60 mov al, byte ptr [ecx + 0x3f] */ { const u32 m_ = (u32)(ecx + 0x3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051be63 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051be65 je 0x51be6c */ if (ZF_) goto L_0051be6c;
  /* 0051be67 jmp 0x507dd0 */ SAVEALL; F_00507dd0(c); return;
L_0051be6c:;
  /* 0051be6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051be70(CPU *c) {
  NATIVE_HOOK(0x51be70u) REGS; LOADALL;
L_0051be70:;
  /* 0051be70 mov al, byte ptr [ecx + 0x3f] */ { const u32 m_ = (u32)(ecx + 0x3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051be73 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051be75 je 0x51be7c */ if (ZF_) goto L_0051be7c;
  /* 0051be77 jmp 0x507e90 */ SAVEALL; F_00507e90(c); return;
L_0051be7c:;
  /* 0051be7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051be80(CPU *c) {
  NATIVE_HOOK(0x51be80u) REGS; LOADALL;
L_0051be80:;
  /* 0051be80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051be81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051be83 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051be86 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051be89 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051be8a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051be8c mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0051be8f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051be90 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0051be92 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051be94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051be95 mov byte ptr [ebx + 0x22e], 1 */ { const u32 m_ = (u32)(ebx + 0x22eu); M8(m_) = (u8)(0x1u); }
  /* 0051be9c mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0051be9f mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0051bea2 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0051bea5 je 0x51beaf */ if (ZF_) goto L_0051beaf;
  /* 0051bea7 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0051beaa call 0x508540 */ esp -= 4; M32(esp) = 0x51beafu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51beaau); RETCHK(0x51beafu, 0x51beaau); LOADALL;
L_0051beaf:;
  /* 0051beaf call 0x518bb0 */ esp -= 4; M32(esp) = 0x51beb4u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x51beafu); RETCHK(0x51beb4u, 0x51beafu); LOADALL;
  /* 0051beb4 mov edi, eax */ { edi = (u32)(eax); }
  /* 0051beb6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051beb8 call 0x51c2d0 */ esp -= 4; M32(esp) = 0x51bebdu; SAVEALL; F_0051c2d0(c); ABI_CHECK(0x51c2d0u, 0x51beb8u); RETCHK(0x51bebdu, 0x51beb8u); LOADALL;
  /* 0051bebd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bebf je 0x51bf2c */ if (ZF_) goto L_0051bf2c;
  /* 0051bec1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bec2 call 0x508500 */ esp -= 4; M32(esp) = 0x51bec7u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x51bec2u); RETCHK(0x51bec7u, 0x51bec2u); LOADALL;
  /* 0051bec7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051bec9 jne 0x51bfce */ if (!ZF_) goto L_0051bfce;
  /* 0051becf mov eax, edi */ { eax = (u32)(edi); }
  /* 0051bed1 call 0x5180e0 */ esp -= 4; M32(esp) = 0x51bed6u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x51bed1u); RETCHK(0x51bed6u, 0x51bed1u); LOADALL;
  /* 0051bed6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051bed8 call 0x508d10 */ esp -= 4; M32(esp) = 0x51beddu; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x51bed8u); RETCHK(0x51beddu, 0x51bed8u); LOADALL;
  /* 0051bedd mov esi, eax */ { esi = (u32)(eax); }
  /* 0051bedf test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bee1 je 0x51bf1c */ if (ZF_) goto L_0051bf1c;
  /* 0051bee3 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 0051bee6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051bee8 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051beeb push 0x652540 */ { u32 v_ = 0x652540u; esp -= 4; M32(esp) = v_; }
  /* 0051bef0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051bef1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bef3 call 0x405de0 */ esp -= 4; M32(esp) = 0x51bef8u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x51bef3u); RETCHK(0x51bef8u, 0x51bef3u); LOADALL;
  /* 0051bef8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051befa push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051befc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051befe jne 0x51bf09 */ if (!ZF_) goto L_0051bf09;
  /* 0051bf00 add esi, 0x238 */ { u32 a_ = esi, b_ = 0x238u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051bf06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051bf07 jmp 0x51bf11 */ goto L_0051bf11;
L_0051bf09:;
  /* 0051bf09 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051bf0b call 0x5075c0 */ esp -= 4; M32(esp) = 0x51bf10u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x51bf0bu); RETCHK(0x51bf10u, 0x51bf0bu); LOADALL;
  /* 0051bf10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0051bf11:;
  /* 0051bf11 lea ecx, [ebx + 0x238] */ ecx = (u32)((u32)(ebx + 0x238u));
  /* 0051bf17 call 0x404140 */ esp -= 4; M32(esp) = 0x51bf1cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51bf17u); RETCHK(0x51bf1cu, 0x51bf17u); LOADALL;
L_0051bf1c:;
  /* 0051bf1c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0051bf1e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051bf20 call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51bf23u; SAVEALL; call_ind(c, t_); RETCHK(0x51bf23u, 0x51bf20u); LOADALL; }
  /* 0051bf23 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051bf24 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051bf25 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051bf26 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051bf28 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051bf29 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0051bf2c:;
  /* 0051bf2c mov eax, edi */ { eax = (u32)(edi); }
  /* 0051bf2e mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0051bf31 call 0x5180e0 */ esp -= 4; M32(esp) = 0x51bf36u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x51bf31u); RETCHK(0x51bf36u, 0x51bf31u); LOADALL;
  /* 0051bf36 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051bf38 call 0x508d10 */ esp -= 4; M32(esp) = 0x51bf3du; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x51bf38u); RETCHK(0x51bf3du, 0x51bf38u); LOADALL;
  /* 0051bf3d mov esi, eax */ { esi = (u32)(eax); }
  /* 0051bf3f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bf41 je 0x51bf66 */ if (ZF_) goto L_0051bf66;
  /* 0051bf43 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 0051bf46 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051bf48 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051bf4b push 0x652540 */ { u32 v_ = 0x652540u; esp -= 4; M32(esp) = v_; }
  /* 0051bf50 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051bf51 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bf53 call 0x405de0 */ esp -= 4; M32(esp) = 0x51bf58u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x51bf53u); RETCHK(0x51bf58u, 0x51bf53u); LOADALL;
  /* 0051bf58 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bf5a jne 0x51bf66 */ if (!ZF_) goto L_0051bf66;
  /* 0051bf5c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051bf5e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051bf60 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0051bf63 call dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51bf66u; SAVEALL; call_ind(c, t_); RETCHK(0x51bf66u, 0x51bf63u); LOADALL; }
L_0051bf66:;
  /* 0051bf66 lea ecx, [ebx + 0x238] */ ecx = (u32)((u32)(ebx + 0x238u));
  /* 0051bf6c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051bf6d mov eax, edi */ { eax = (u32)(edi); }
  /* 0051bf6f call 0x5180e0 */ esp -= 4; M32(esp) = 0x51bf74u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x51bf6fu); RETCHK(0x51bf74u, 0x51bf6fu); LOADALL;
  /* 0051bf74 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051bf76 call 0x5075d0 */ esp -= 4; M32(esp) = 0x51bf7bu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x51bf76u); RETCHK(0x51bf7bu, 0x51bf76u); LOADALL;
  /* 0051bf7b mov esi, eax */ { esi = (u32)(eax); }
  /* 0051bf7d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bf7f je 0x51bf8f */ if (ZF_) goto L_0051bf8f;
  /* 0051bf81 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051bf83 call 0x5180e0 */ esp -= 4; M32(esp) = 0x51bf88u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x51bf83u); RETCHK(0x51bf88u, 0x51bf83u); LOADALL;
  /* 0051bf88 mov edi, eax */ { edi = (u32)(eax); }
  /* 0051bf8a call 0x508d30 */ esp -= 4; M32(esp) = 0x51bf8fu; SAVEALL; F_00508d30(c); ABI_CHECK(0x508d30u, 0x51bf8au); RETCHK(0x51bf8fu, 0x51bf8au); LOADALL;
L_0051bf8f:;
  /* 0051bf8f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051bf92 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bf94 je 0x51bfb0 */ if (ZF_) goto L_0051bfb0;
  /* 0051bf96 jmp 0x51bfa0 */ goto L_0051bfa0;
L_0051bfa0:;
  /* 0051bfa0 mov byte ptr [eax + 0x235], 0 */ { const u32 m_ = (u32)(eax + 0x235u); M8(m_) = (u8)(0x0u); }
  /* 0051bfa7 call 0x51c300 */ esp -= 4; M32(esp) = 0x51bfacu; SAVEALL; F_0051c300(c); ABI_CHECK(0x51c300u, 0x51bfa7u); RETCHK(0x51bfacu, 0x51bfa7u); LOADALL;
  /* 0051bfac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bfae jne 0x51bfa0 */ if (!ZF_) goto L_0051bfa0;
L_0051bfb0:;
  /* 0051bfb0 mov eax, ebx */ { eax = (u32)(ebx); }
L_0051bfb2:;
  /* 0051bfb2 mov byte ptr [eax + 0x235], 0 */ { const u32 m_ = (u32)(eax + 0x235u); M8(m_) = (u8)(0x0u); }
  /* 0051bfb9 call 0x51c300 */ esp -= 4; M32(esp) = 0x51bfbeu; SAVEALL; F_0051c300(c); ABI_CHECK(0x51c300u, 0x51bfb9u); RETCHK(0x51bfbeu, 0x51bfb9u); LOADALL;
  /* 0051bfbe cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051bfc0 je 0x51bfc6 */ if (ZF_) goto L_0051bfc6;
  /* 0051bfc2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051bfc4 jne 0x51bfb2 */ if (!ZF_) goto L_0051bfb2;
L_0051bfc6:;
  /* 0051bfc6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051bfc8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051bfc9 call 0x51bd30 */ esp -= 4; M32(esp) = 0x51bfceu; SAVEALL; F_0051bd30(c); ABI_CHECK(0x51bd30u, 0x51bfc9u); RETCHK(0x51bfceu, 0x51bfc9u); LOADALL;
L_0051bfce:;
  /* 0051bfce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051bfcf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051bfd0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051bfd1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051bfd3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051bfd4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051bfe0(CPU *c) {
  NATIVE_HOOK(0x51bfe0u) REGS; LOADALL;
L_0051bfe0:;
  /* 0051bfe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051bfe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051bfe3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051bfe6 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051bfe9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051bfea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051bfeb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051bfec mov byte ptr [ecx + 0x22e], 0 */ { const u32 m_ = (u32)(ecx + 0x22eu); M8(m_) = (u8)(0x0u); }
  /* 0051bff3 call 0x507f80 */ esp -= 4; M32(esp) = 0x51bff8u; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x51bff3u); RETCHK(0x51bff8u, 0x51bff3u); LOADALL;
  /* 0051bff8 call 0x550820 */ esp -= 4; M32(esp) = 0x51bffdu; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x51bff8u); RETCHK(0x51bffdu, 0x51bff8u); LOADALL;
  /* 0051bffd mov esi, dword ptr [eax + 0xf64] */ { const u32 m_ = (u32)(eax + 0xf64u); esi = (u32)(M32(m_)); }
  /* 0051c003 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c005 je 0x51c029 */ if (ZF_) goto L_0051c029;
  /* 0051c007 call 0x518bb0 */ esp -= 4; M32(esp) = 0x51c00cu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x51c007u); RETCHK(0x51c00cu, 0x51c007u); LOADALL;
  /* 0051c00c mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051c00f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c011 je 0x51c029 */ if (ZF_) goto L_0051c029;
  /* 0051c013 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c015 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051c01a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c01c push 0x6506f4 */ { u32 v_ = 0x6506f4u; esp -= 4; M32(esp) = v_; }
  /* 0051c021 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c022 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051c024 call 0x531340 */ esp -= 4; M32(esp) = 0x51c029u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x51c024u); RETCHK(0x51c029u, 0x51c024u); LOADALL;
L_0051c029:;
  /* 0051c029 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c02a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c02b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051c030(CPU *c) {
  NATIVE_HOOK(0x51c030u) REGS; LOADALL;
L_0051c030:;
  /* 0051c030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c033 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c036 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051c039 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c03a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c03c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051c03e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c03f lea eax, [esi + 0x180] */ eax = (u32)((u32)(esi + 0x180u));
  /* 0051c045 call 0x529310 */ esp -= 4; M32(esp) = 0x51c04au; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x51c045u); RETCHK(0x51c04au, 0x51c045u); LOADALL;
  /* 0051c04a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c04c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c04e lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051c051 call 0x52ce60 */ esp -= 4; M32(esp) = 0x51c056u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x51c051u); RETCHK(0x51c056u, 0x51c051u); LOADALL;
  /* 0051c056 lea ecx, [esi + 0x21c] */ ecx = (u32)((u32)(esi + 0x21cu));
  /* 0051c05c call 0x52ce90 */ esp -= 4; M32(esp) = 0x51c061u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x51c05cu); RETCHK(0x51c061u, 0x51c05cu); LOADALL;
  /* 0051c061 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051c066 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051c06b lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051c06e call 0x52ce60 */ esp -= 4; M32(esp) = 0x51c073u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x51c06eu); RETCHK(0x51c073u, 0x51c06eu); LOADALL;
  /* 0051c073 lea ecx, [esi + 0x224] */ ecx = (u32)((u32)(esi + 0x224u));
  /* 0051c079 call 0x52ce90 */ esp -= 4; M32(esp) = 0x51c07eu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x51c079u); RETCHK(0x51c07eu, 0x51c079u); LOADALL;
  /* 0051c07e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051c080 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c081 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c083 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c084 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c090(CPU *c) {
  NATIVE_HOOK(0x51c090u) REGS; LOADALL;
L_0051c090:;
  /* 0051c090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c093 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c096 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c097 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051c098 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0051c09a lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0051c09d lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0051c0a0 call 0x52cea0 */ esp -= 4; M32(esp) = 0x51c0a5u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x51c0a0u); RETCHK(0x51c0a5u, 0x51c0a0u); LOADALL;
  /* 0051c0a5 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0051c0a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c0a9 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0051c0ac call 0x52cf90 */ esp -= 4; M32(esp) = 0x51c0b1u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51c0acu); RETCHK(0x51c0b1u, 0x51c0acu); LOADALL;
  /* 0051c0b1 mov eax, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); eax = (u32)(M32(m_)); }
  /* 0051c0b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c0ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c0bc je 0x51c1db */ if (ZF_) goto L_0051c1db;
  /* 0051c0c2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051c0c3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051c0c5 mov esi, edi */ { esi = (u32)(edi); }
  /* 0051c0c7 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 0051c0ca call 0x5084b0 */ esp -= 4; M32(esp) = 0x51c0cfu; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x51c0cau); RETCHK(0x51c0cfu, 0x51c0cau); LOADALL;
  /* 0051c0cf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c0d1 je 0x51c0f0 */ if (ZF_) goto L_0051c0f0;
  /* 0051c0d3 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051c0d5 call 0x5084a0 */ esp -= 4; M32(esp) = 0x51c0dau; SAVEALL; F_005084a0(c); ABI_CHECK(0x5084a0u, 0x51c0d5u); RETCHK(0x51c0dau, 0x51c0d5u); LOADALL;
  /* 0051c0da test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c0dc jne 0x51c0e8 */ if (!ZF_) goto L_0051c0e8;
  /* 0051c0de mov al, byte ptr [edi + 0x235] */ { const u32 m_ = (u32)(edi + 0x235u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051c0e4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c0e6 je 0x51c0f0 */ if (ZF_) goto L_0051c0f0;
L_0051c0e8:;
  /* 0051c0e8 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0051c0ed mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
L_0051c0f0:;
  /* 0051c0f0 mov esi, edi */ { esi = (u32)(edi); }
  /* 0051c0f2 call 0x5084b0 */ esp -= 4; M32(esp) = 0x51c0f7u; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x51c0f2u); RETCHK(0x51c0f7u, 0x51c0f2u); LOADALL;
  /* 0051c0f7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c0f9 je 0x51c10d */ if (ZF_) goto L_0051c10d;
  /* 0051c0fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051c0fc call 0x508500 */ esp -= 4; M32(esp) = 0x51c101u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x51c0fcu); RETCHK(0x51c101u, 0x51c0fcu); LOADALL;
  /* 0051c101 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c103 je 0x51c10d */ if (ZF_) goto L_0051c10d;
  /* 0051c105 mov ebx, 4 */ { ebx = (u32)(0x4u); }
  /* 0051c10a mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
L_0051c10d:;
  /* 0051c10d mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0051c10f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0051c111 call dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c114u; SAVEALL; call_ind(c, t_); RETCHK(0x51c114u, 0x51c111u); LOADALL; }
  /* 0051c114 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c116 jne 0x51c120 */ if (!ZF_) goto L_0051c120;
  /* 0051c118 mov ebx, 3 */ { ebx = (u32)(0x3u); }
  /* 0051c11d mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
L_0051c120:;
  /* 0051c120 mov al, byte ptr [edi + 0x22d] */ { const u32 m_ = (u32)(edi + 0x22du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051c126 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c128 je 0x51c14b */ if (ZF_) goto L_0051c14b;
  /* 0051c12a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c12c jne 0x51c14b */ if (!ZF_) goto L_0051c14b;
  /* 0051c12e fld dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); FPUSH((double)MF32(m_)); }
  /* 0051c134 fsub dword ptr [edi + 0x220] */ { const u32 m_ = (u32)(edi + 0x220u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051c13a fmul dword ptr [0x657008] */ { const u32 m_ = (u32)(0x657008u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051c140 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0051c143 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051c149 jmp 0x51c166 */ goto L_0051c166;
L_0051c14b:;
  /* 0051c14b fld dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); FPUSH((double)MF32(m_)); }
  /* 0051c151 fsub dword ptr [edi + 0x220] */ { const u32 m_ = (u32)(edi + 0x220u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051c157 fmul dword ptr [0x657008] */ { const u32 m_ = (u32)(0x657008u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051c15d fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c160 fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051c163 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
L_0051c166:;
  /* 0051c166 fadd dword ptr [edi + 0x220] */ { const u32 m_ = (u32)(edi + 0x220u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051c16c lea esi, [edi + 0x188] */ esi = (u32)((u32)(edi + 0x188u));
  /* 0051c172 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051c174 lea eax, [edi + 0x180] */ eax = (u32)((u32)(edi + 0x180u));
  /* 0051c17a fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c17d call 0x5267f0 */ esp -= 4; M32(esp) = 0x51c182u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x51c17du); RETCHK(0x51c182u, 0x51c17du); LOADALL;
  /* 0051c182 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0051c185 mov eax, dword ptr [edi + 0x224] */ { const u32 m_ = (u32)(edi + 0x224u); eax = (u32)(M32(m_)); }
  /* 0051c18b fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051c18e mov edx, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); edx = (u32)(M32(m_)); }
  /* 0051c194 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c195 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0051c198 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c19b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c19c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c19d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051c19e lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0051c1a1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c1a2 call 0x5050e0 */ esp -= 4; M32(esp) = 0x51c1a7u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x51c1a2u); RETCHK(0x51c1a7u, 0x51c1a2u); LOADALL;
  /* 0051c1a7 mov al, byte ptr [edi + 0x22d] */ { const u32 m_ = (u32)(edi + 0x22du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051c1ad test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c1af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051c1b0 je 0x51c1db */ if (ZF_) goto L_0051c1db;
  /* 0051c1b2 mov eax, dword ptr [edi + 0x224] */ { const u32 m_ = (u32)(edi + 0x224u); eax = (u32)(M32(m_)); }
  /* 0051c1b8 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0051c1be fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051c1c1 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051c1c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c1c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c1c8 mov ecx, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); ecx = (u32)(M32(m_)); }
  /* 0051c1ce fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c1d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c1d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c1d3 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0051c1d6 call 0x5050e0 */ esp -= 4; M32(esp) = 0x51c1dbu; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x51c1d6u); RETCHK(0x51c1dbu, 0x51c1d6u); LOADALL;
L_0051c1db:;
  /* 0051c1db pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051c1dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c1dd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c1df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c1e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c1f0(CPU *c) {
  NATIVE_HOOK(0x51c1f0u) REGS; LOADALL;
L_0051c1f0:;
  /* 0051c1f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c1f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c1f3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c1f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c1f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051c1f8 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051c1fb lea eax, [edi - 8] */ eax = (u32)((u32)(edi + 0xfffffff8u));
  /* 0051c1fe cmp eax, 0x1d */ { u32 a_ = eax, b_ = 0x1du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c201 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051c203 ja 0x51c238 */ if (!(CF_|ZF_)) goto L_0051c238;
  /* 0051c205 movzx eax, byte ptr [eax + 0x51c2a8] */ { const u32 m_ = (u32)(eax + 0x51c2a8u); eax = (u32)(M8(m_)); }
  /* 0051c20c jmp dword ptr [eax*4 + 0x51c298] */ { const u32 m_ = (u32)(eax * 4u + 0x51c298u); u32 t_ = M32(m_); switch (t_) { case 0x51c213u: goto L_0051c213; case 0x51c22fu: goto L_0051c22f; case 0x51c238u: goto L_0051c238; case 0x51c250u: goto L_0051c250; default: SAVEALL; call_ind(c, t_); return; } }
L_0051c213:;
  /* 0051c213 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c215 call 0x51c300 */ esp -= 4; M32(esp) = 0x51c21au; SAVEALL; F_0051c300(c); ABI_CHECK(0x51c300u, 0x51c215u); RETCHK(0x51c21au, 0x51c215u); LOADALL;
  /* 0051c21a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c21c je 0x51c238 */ if (ZF_) goto L_0051c238;
  /* 0051c21e mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0051c220 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051c222 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c225u; SAVEALL; call_ind(c, t_); RETCHK(0x51c225u, 0x51c222u); LOADALL; }
  /* 0051c225 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051c226 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051c228 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c229 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c22b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c22c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0051c22f:;
  /* 0051c22f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c231 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051c233 call 0x508150 */ esp -= 4; M32(esp) = 0x51c238u; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x51c233u); RETCHK(0x51c238u, 0x51c233u); LOADALL;
L_0051c238:;
  /* 0051c238 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051c23b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051c23e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c23f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c240 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051c241 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051c243 call 0x508230 */ esp -= 4; M32(esp) = 0x51c248u; SAVEALL; F_00508230(c); ABI_CHECK(0x508230u, 0x51c243u); RETCHK(0x51c248u, 0x51c243u); LOADALL;
  /* 0051c248 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051c249 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c24a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c24c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c24d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0051c250:;
  /* 0051c250 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051c252 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051c255 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c256 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051c258 call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c25bu; SAVEALL; call_ind(c, t_); RETCHK(0x51c25bu, 0x51c258u); LOADALL; }
  /* 0051c25b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051c25d lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051c260 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c261 push 0xfffffba9 */ { u32 v_ = 0xfffffba9u; esp -= 4; M32(esp) = v_; }
  /* 0051c266 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051c268 call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c26bu; SAVEALL; call_ind(c, t_); RETCHK(0x51c26bu, 0x51c268u); LOADALL; }
  /* 0051c26b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051c26d lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051c270 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c271 push 0xfffffba9 */ { u32 v_ = 0xfffffba9u; esp -= 4; M32(esp) = v_; }
  /* 0051c276 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051c278 call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c27bu; SAVEALL; call_ind(c, t_); RETCHK(0x51c27bu, 0x51c278u); LOADALL; }
  /* 0051c27b mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c27d call 0x51c2d0 */ esp -= 4; M32(esp) = 0x51c282u; SAVEALL; F_0051c2d0(c); ABI_CHECK(0x51c2d0u, 0x51c27du); RETCHK(0x51c282u, 0x51c27du); LOADALL;
  /* 0051c282 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c284 je 0x51c28d */ if (ZF_) goto L_0051c28d;
  /* 0051c286 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0051c288 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051c28a call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c28du; SAVEALL; call_ind(c, t_); RETCHK(0x51c28du, 0x51c28au); LOADALL; }
L_0051c28d:;
  /* 0051c28d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051c28e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051c290 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c291 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c293 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c294 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0051c2d0(CPU *c) {
  NATIVE_HOOK(0x51c2d0u) REGS; LOADALL;
L_0051c2d0:;
  /* 0051c2d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c2d1 call 0x508720 */ esp -= 4; M32(esp) = 0x51c2d6u; SAVEALL; F_00508720(c); ABI_CHECK(0x508720u, 0x51c2d1u); RETCHK(0x51c2d6u, 0x51c2d1u); LOADALL;
  /* 0051c2d6 mov esi, eax */ { esi = (u32)(eax); }
  /* 0051c2d8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c2da je 0x51c2f9 */ if (ZF_) goto L_0051c2f9;
  /* 0051c2dc mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0051c2df push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051c2e1 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051c2e4 push 0x652540 */ { u32 v_ = 0x652540u; esp -= 4; M32(esp) = v_; }
  /* 0051c2e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c2ea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c2ec call 0x405de0 */ esp -= 4; M32(esp) = 0x51c2f1u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x51c2ecu); RETCHK(0x51c2f1u, 0x51c2ecu); LOADALL;
  /* 0051c2f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c2f3 jne 0x51c2f9 */ if (!ZF_) goto L_0051c2f9;
  /* 0051c2f5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c2f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c2f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051c2f9:;
  /* 0051c2f9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051c2fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c2fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c300(CPU *c) {
  NATIVE_HOOK(0x51c300u) REGS; LOADALL;
L_0051c300:;
  /* 0051c300 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c301 call 0x5086f0 */ esp -= 4; M32(esp) = 0x51c306u; SAVEALL; F_005086f0(c); ABI_CHECK(0x5086f0u, 0x51c301u); RETCHK(0x51c306u, 0x51c301u); LOADALL;
  /* 0051c306 mov esi, eax */ { esi = (u32)(eax); }
  /* 0051c308 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c30a je 0x51c329 */ if (ZF_) goto L_0051c329;
  /* 0051c30c mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0051c30f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051c311 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051c314 push 0x652540 */ { u32 v_ = 0x652540u; esp -= 4; M32(esp) = v_; }
  /* 0051c319 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c31a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c31c call 0x405de0 */ esp -= 4; M32(esp) = 0x51c321u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x51c31cu); RETCHK(0x51c321u, 0x51c31cu); LOADALL;
  /* 0051c321 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c323 jne 0x51c329 */ if (!ZF_) goto L_0051c329;
  /* 0051c325 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c327 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c328 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051c329:;
  /* 0051c329 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051c32b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c32c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c330(CPU *c) {
  NATIVE_HOOK(0x51c330u) REGS; LOADALL;
L_0051c330:;
  /* 0051c330 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c332 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c333 mov esi, edi */ { esi = (u32)(edi); }
  /* 0051c335 je 0x51c36b */ if (ZF_) goto L_0051c36b;
  /* 0051c337 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c339 je 0x51c36b */ if (ZF_) goto L_0051c36b;
L_0051c33b:;
  /* 0051c33b mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0051c33e push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051c340 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051c343 push 0x652540 */ { u32 v_ = 0x652540u; esp -= 4; M32(esp) = v_; }
  /* 0051c348 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c349 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c34b call 0x405de0 */ esp -= 4; M32(esp) = 0x51c350u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x51c34bu); RETCHK(0x51c350u, 0x51c34bu); LOADALL;
  /* 0051c350 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c352 jne 0x51c36b */ if (!ZF_) goto L_0051c36b;
  /* 0051c354 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c356 mov byte ptr [esi + 0x22d], bl */ { const u32 m_ = (u32)(esi + 0x22du); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051c35c call 0x5086f0 */ esp -= 4; M32(esp) = 0x51c361u; SAVEALL; F_005086f0(c); ABI_CHECK(0x5086f0u, 0x51c35cu); RETCHK(0x51c361u, 0x51c35cu); LOADALL;
  /* 0051c361 mov esi, eax */ { esi = (u32)(eax); }
  /* 0051c363 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c365 je 0x51c36b */ if (ZF_) goto L_0051c36b;
  /* 0051c367 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c369 jne 0x51c33b */ if (!ZF_) goto L_0051c33b;
L_0051c36b:;
  /* 0051c36b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c36c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c370(CPU *c) {
  NATIVE_HOOK(0x51c370u) REGS; LOADALL;
L_0051c370:;
  /* 0051c370 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c371 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c373 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051c375 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0051c37a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051c380 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c381 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051c388 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c389 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051c38a push 0x51c3f0 */ { u32 v_ = 0x51c3f0u; esp -= 4; M32(esp) = v_; }
  /* 0051c38f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c392 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051c394 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0051c396 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0051c399 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051c39c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051c39e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051c39f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0051c3a2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0051c3a9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051c3ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c3ad mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051c3b0 call 0x404140 */ esp -= 4; M32(esp) = 0x51c3b5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51c3b0u); RETCHK(0x51c3b5u, 0x51c3b0u); LOADALL;
  /* 0051c3b5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051c3b8 call 0x405c00 */ esp -= 4; M32(esp) = 0x51c3bdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x51c3b8u); RETCHK(0x51c3bdu, 0x51c3b8u); LOADALL;
  /* 0051c3bd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051c3bf call 0x405c80 */ esp -= 4; M32(esp) = 0x51c3c4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x51c3bfu); RETCHK(0x51c3c4u, 0x51c3bfu); LOADALL;
  /* 0051c3c4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c3c8 jb 0x51c3d6 */ if (CF_) goto L_0051c3d6;
  /* 0051c3ca mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051c3cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c3ce call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51c3d3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51c3ceu); RETCHK(0x51c3d3u, 0x51c3ceu); LOADALL;
  /* 0051c3d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051c3d6:;
  /* 0051c3d6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051c3d9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c3db mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051c3e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051c3e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c3e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c3e6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0051c3f0(CPU *c) {
  NATIVE_HOOK(0x51c3f0u) REGS; LOADALL;
L_0051c3f0:;
  /* 0051c3f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c3f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c3f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051c3f5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0051c3fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051c400 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c401 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051c408 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c409 push 0x254 */ { u32 v_ = 0x254u; esp -= 4; M32(esp) = v_; }
  /* 0051c40e call 0x5fe934 */ esp -= 4; M32(esp) = 0x51c413u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51c40eu); RETCHK(0x51c413u, 0x51c40eu); LOADALL;
  /* 0051c413 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c416 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0051c419 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c41b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0051c422 je 0x51c43a */ if (ZF_) goto L_0051c43a;
  /* 0051c424 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c426 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c427 call 0x51b9b0 */ esp -= 4; M32(esp) = 0x51c42cu; SAVEALL; F_0051b9b0(c); ABI_CHECK(0x51b9b0u, 0x51c427u); RETCHK(0x51c42cu, 0x51c427u); LOADALL;
  /* 0051c42c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051c42f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051c436 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c438 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c439 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051c43a:;
  /* 0051c43a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051c43d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051c43f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051c446 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c448 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c449 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c450(CPU *c) {
  NATIVE_HOOK(0x51c450u) REGS; LOADALL;
L_0051c450:;
  /* 0051c450 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0051c452 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0051c455 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0051c458 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0051c45b mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0051c45e mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0051c461 mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0051c464 mov dword ptr [eax + 0x44], ecx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(ecx); }
  /* 0051c467 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051c469 mov dword ptr [eax], 0x65254c */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x65254cu); }
  /* 0051c46f mov dword ptr [eax + 0x18], 4 */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0x4u); }
  /* 0051c476 mov dword ptr [eax + 0x1c], 0x40000000 */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0x40000000u); }
  /* 0051c47d mov dword ptr [eax + 0x20], 0x652574 */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(0x652574u); }
  /* 0051c484 mov dword ptr [eax + 0x24], 0x652564 */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0x652564u); }
  /* 0051c48b mov dword ptr [eax + 0x28], 0x652550 */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(0x652550u); }
  /* 0051c492 mov byte ptr [eax + 0x34], cl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0051c495 mov byte ptr [eax + 0x3c], cl */ { const u32 m_ = (u32)(eax + 0x3cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0051c498 mov dword ptr [0x7a6d2c], eax */ { const u32 m_ = (u32)(0x7a6d2cu); M32(m_) = (u32)(eax); }
  /* 0051c49d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c4a0(CPU *c) {
  NATIVE_HOOK(0x51c4a0u) REGS; LOADALL;
L_0051c4a0:;
  /* 0051c4a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c4a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c4a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c4a4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051c4a6 call 0x51c4d0 */ esp -= 4; M32(esp) = 0x51c4abu; SAVEALL; F_0051c4d0(c); ABI_CHECK(0x51c4d0u, 0x51c4a6u); RETCHK(0x51c4abu, 0x51c4a6u); LOADALL;
  /* 0051c4ab test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c4af je 0x51c4ba */ if (ZF_) goto L_0051c4ba;
  /* 0051c4b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c4b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51c4b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51c4b2u); RETCHK(0x51c4b7u, 0x51c4b2u); LOADALL;
  /* 0051c4b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051c4ba:;
  /* 0051c4ba mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c4bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c4bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c4be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c4d0(CPU *c) {
  NATIVE_HOOK(0x51c4d0u) REGS; LOADALL;
L_0051c4d0:;
  /* 0051c4d0 mov dword ptr [ecx], 0x65254c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x65254cu); }
  /* 0051c4d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c4e0(CPU *c) {
  NATIVE_HOOK(0x51c4e0u) REGS; LOADALL;
L_0051c4e0:;
  /* 0051c4e0 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 0051c4e5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51c4eau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51c4e5u); RETCHK(0x51c4eau, 0x51c4e5u); LOADALL;
  /* 0051c4ea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c4ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c4ef je 0x51c4fc */ if (ZF_) goto L_0051c4fc;
  /* 0051c4f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c4f2 mov esi, eax */ { esi = (u32)(eax); }
  /* 0051c4f4 call 0x5267c0 */ esp -= 4; M32(esp) = 0x51c4f9u; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x51c4f4u); RETCHK(0x51c4f9u, 0x51c4f4u); LOADALL;
  /* 0051c4f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c4fa jmp 0x51c4fe */ goto L_0051c4fe;
L_0051c4fc:;
  /* 0051c4fc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051c4fe:;
  /* 0051c4fe mov dword ptr [edi + 0x40], eax */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(eax); }
  /* 0051c501 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0051c504 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c505 call 0x5ab540 */ esp -= 4; M32(esp) = 0x51c50au; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x51c505u); RETCHK(0x51c50au, 0x51c505u); LOADALL;
  /* 0051c50a mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0051c50d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c50e mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0051c511 call 0x5ab540 */ esp -= 4; M32(esp) = 0x51c516u; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x51c511u); RETCHK(0x51c516u, 0x51c511u); LOADALL;
  /* 0051c516 mov edx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 0051c519 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051c51a mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051c51d call 0x5ab540 */ esp -= 4; M32(esp) = 0x51c522u; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x51c51du); RETCHK(0x51c522u, 0x51c51du); LOADALL;
  /* 0051c522 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c525 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0051c528 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c530(CPU *c) {
  NATIVE_HOOK(0x51c530u) REGS; LOADALL;
L_0051c530:;
  /* 0051c530 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051c533 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051c534 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0051c536 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c538 je 0x51c546 */ if (ZF_) goto L_0051c546;
  /* 0051c53a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c53b call 0x5ab020 */ esp -= 4; M32(esp) = 0x51c540u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x51c53bu); RETCHK(0x51c540u, 0x51c53bu); LOADALL;
  /* 0051c540 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c543 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
L_0051c546:;
  /* 0051c546 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051c549 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c54b je 0x51c559 */ if (ZF_) goto L_0051c559;
  /* 0051c54d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c54e call 0x5ab020 */ esp -= 4; M32(esp) = 0x51c553u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x51c54eu); RETCHK(0x51c553u, 0x51c54eu); LOADALL;
  /* 0051c553 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c556 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_0051c559:;
  /* 0051c559 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051c55c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c55e je 0x51c56c */ if (ZF_) goto L_0051c56c;
  /* 0051c560 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c561 call 0x5ab020 */ esp -= 4; M32(esp) = 0x51c566u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x51c561u); RETCHK(0x51c566u, 0x51c561u); LOADALL;
  /* 0051c566 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c569 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
L_0051c56c:;
  /* 0051c56c mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0051c56f cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c571 je 0x51c57c */ if (ZF_) goto L_0051c57c;
  /* 0051c573 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051c575 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051c577 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c579u; SAVEALL; call_ind(c, t_); RETCHK(0x51c579u, 0x51c577u); LOADALL; }
  /* 0051c579 mov dword ptr [esi + 0x44], edi */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(edi); }
L_0051c57c:;
  /* 0051c57c mov edx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); edx = (u32)(M32(m_)); }
  /* 0051c57f cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c581 je 0x51c596 */ if (ZF_) goto L_0051c596;
  /* 0051c583 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0051c585 call 0x5267e0 */ esp -= 4; M32(esp) = 0x51c58au; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x51c585u); RETCHK(0x51c58au, 0x51c585u); LOADALL;
  /* 0051c58a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051c58b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51c590u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51c58bu); RETCHK(0x51c590u, 0x51c58bu); LOADALL;
  /* 0051c590 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c593 mov dword ptr [esi + 0x40], edi */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(edi); }
L_0051c596:;
  /* 0051c596 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051c597 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c5a0(CPU *c) {
  NATIVE_HOOK(0x51c5a0u) REGS; LOADALL;
L_0051c5a0:;
  /* 0051c5a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c5a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c5a3 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0051c5a6 fmul dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051c5a9 fiadd dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 0051c5ac call 0x61b154 */ esp -= 4; M32(esp) = 0x51c5b1u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x51c5acu); RETCHK(0x51c5b1u, 0x51c5acu); LOADALL;
  /* 0051c5b1 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 0051c5b4 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0051c5b6 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051c5b8 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0051c5bb jle 0x51c5c0 */ if ((ZF_|LT_)) goto L_0051c5c0;
  /* 0051c5bd mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
L_0051c5c0:;
  /* 0051c5c0 fld dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0051c5c3 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051c5c6 fst dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); }
  /* 0051c5c9 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051c5cf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051c5d1 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c5d4 jp 0x51c5d9 */ if (PF_) goto L_0051c5d9;
  /* 0051c5d6 mov byte ptr [esi + 0x34], cl */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((ecx & 0xffu)); }
L_0051c5d9:;
  /* 0051c5d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c5da ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c5e0(CPU *c) {
  NATIVE_HOOK(0x51c5e0u) REGS; LOADALL;
L_0051c5e0:;
  /* 0051c5e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c5e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c5e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c5e4 mov al, byte ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051c5e7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c5e9 je 0x51c64b */ if (ZF_) goto L_0051c64b;
  /* 0051c5eb mov al, byte ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051c5ee test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c5f0 je 0x51c64b */ if (ZF_) goto L_0051c64b;
  /* 0051c5f2 mov eax, dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); eax = (u32)(M32(m_)); }
  /* 0051c5f5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c5f7 je 0x51c64b */ if (ZF_) goto L_0051c64b;
  /* 0051c5f9 mov ecx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051c5fc mov ecx, dword ptr [edx + ecx*4 + 4] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051c600 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c602 je 0x51c64b */ if (ZF_) goto L_0051c64b;
  /* 0051c604 call 0x526830 */ esp -= 4; M32(esp) = 0x51c609u; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x51c604u); RETCHK(0x51c609u, 0x51c604u); LOADALL;
  /* 0051c609 mov eax, dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); eax = (u32)(M32(m_)); }
  /* 0051c60c mov ecx, dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0051c60f push 0x3e800000 */ { u32 v_ = 0x3e800000u; esp -= 4; M32(esp) = v_; }
  /* 0051c614 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051c619 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c61b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c61d sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051c620 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051c623 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051c626 mov eax, dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); eax = (u32)(M32(m_)); }
  /* 0051c629 push 0x42000000 */ { u32 v_ = 0x42000000u; esp -= 4; M32(esp) = v_; }
  /* 0051c62e push 0x42000000 */ { u32 v_ = 0x42000000u; esp -= 4; M32(esp) = v_; }
  /* 0051c633 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c636 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051c639 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c63d mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0051c640 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051c643 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c646 call 0x526bd0 */ esp -= 4; M32(esp) = 0x51c64bu; SAVEALL; F_00526bd0(c); ABI_CHECK(0x526bd0u, 0x51c646u); RETCHK(0x51c64bu, 0x51c646u); LOADALL;
L_0051c64b:;
  /* 0051c64b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c64d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c64e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c650(CPU *c) {
  NATIVE_HOOK(0x51c650u) REGS; LOADALL;
L_0051c650:;
  /* 0051c650 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0051c653 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c660(CPU *c) {
  NATIVE_HOOK(0x51c660u) REGS; LOADALL;
L_0051c660:;
  /* 0051c660 jmp 0x9dd258 */ goto L_009dd258;
L_0051c668:;
  /* 0051c668 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c66a je 0x51c68b */ if (ZF_) goto L_0051c68b;
  /* 0051c66c test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c66e jne 0x51c681 */ if (!ZF_) goto L_0051c681;
  /* 0051c670 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c671 mov esi, dword ptr [0x62e520] */ { const u32 m_ = (u32)(0x62e520u); esi = (u32)(M32(m_)); }
L_0051c677:;
  /* 0051c677 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051c679 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x51c67bu; SAVEALL; call_ind(c, t_); RETCHK(0x51c67bu, 0x51c679u); LOADALL; }
  /* 0051c67b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c67d jge 0x51c677 */ if (!LT_) goto L_0051c677;
  /* 0051c67f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c680 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051c681:;
  /* 0051c681 movzx ecx, cl */ { ecx = (u32)((ecx & 0xffu)); }
  /* 0051c684 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051c685 call dword ptr [0x62e520] */ { const u32 m_ = (u32)(0x62e520u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c68bu; SAVEALL; call_ind(c, t_); RETCHK(0x51c68bu, 0x51c685u); LOADALL; }
L_0051c68b:;
  /* 0051c68b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009dd258:;
  /* 009dd258 cmp dword ptr [0x9dd808], 0 */ { const u32 m_ = (u32)(0x9dd808u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dd25f je 0x9dd263 */ if (ZF_) goto L_009dd263;
  /* 009dd261 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_009dd263:;
  /* 009dd263 mov byte ptr [eax + 0x3c], cl */ { const u32 m_ = (u32)(eax + 0x3cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 009dd266 call 0x558f50 */ esp -= 4; M32(esp) = 0x9dd26bu; SAVEALL; F_00558f50(c); ABI_CHECK(0x558f50u, 0x9dd266u); RETCHK(0x9dd26bu, 0x9dd266u); LOADALL;
  /* 009dd26b jmp 0x51c668 */ goto L_0051c668;
}

void F_0051c690(CPU *c) {
  NATIVE_HOOK(0x51c690u) REGS; LOADALL;
L_0051c690:;
  /* 0051c690 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c691 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c693 call 0x518bb0 */ esp -= 4; M32(esp) = 0x51c698u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x51c693u); RETCHK(0x51c698u, 0x51c693u); LOADALL;
  /* 0051c698 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051c69b mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051c69e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c6a0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051c6a3 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0051c6a6 mov byte ptr [esi + 0x34], al */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0051c6a9 mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0051c6ac mov dword ptr [esi + 0x30], edx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edx); }
  /* 0051c6af mov dword ptr [esi + 0x38], 0x40400000 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x40400000u); }
  /* 0051c6b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c6b7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051c6c0(CPU *c) {
  NATIVE_HOOK(0x51c6c0u) REGS; LOADALL;
L_0051c6c0:;
  /* 0051c6c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c6c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c6c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c6c4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051c6c6 call 0x51c700 */ esp -= 4; M32(esp) = 0x51c6cbu; SAVEALL; F_0051c700(c); ABI_CHECK(0x51c700u, 0x51c6c6u); RETCHK(0x51c6cbu, 0x51c6c6u); LOADALL;
  /* 0051c6cb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c6cf je 0x51c6da */ if (ZF_) goto L_0051c6da;
  /* 0051c6d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c6d2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51c6d7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51c6d2u); RETCHK(0x51c6d7u, 0x51c6d2u); LOADALL;
  /* 0051c6d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051c6da:;
  /* 0051c6da mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c6dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c6dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c6de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c6f0(CPU *c) {
  NATIVE_HOOK(0x51c6f0u) REGS; LOADALL;
L_0051c6f0:;
  /* 0051c6f0 mov dword ptr [eax], 0x652588 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x652588u); }
  /* 0051c6f6 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0051c6f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c700(CPU *c) {
  NATIVE_HOOK(0x51c700u) REGS; LOADALL;
L_0051c700:;
  /* 0051c700 mov dword ptr [ecx], 0x652588 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x652588u); }
  /* 0051c706 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c710(CPU *c) {
  NATIVE_HOOK(0x51c710u) REGS; LOADALL;
L_0051c710:;
  /* 0051c710 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051c713 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c715 je 0x51c71e */ if (ZF_) goto L_0051c71e;
  /* 0051c717 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051c719 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051c71a call dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c71du; SAVEALL; call_ind(c, t_); RETCHK(0x51c71du, 0x51c71au); LOADALL; }
  /* 0051c71d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051c71e:;
  /* 0051c71e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0051c720 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c730(CPU *c) {
  NATIVE_HOOK(0x51c730u) REGS; LOADALL;
L_0051c730:;
  /* 0051c730 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c731 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c733 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051c739 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051c73b push 0x61c968 */ { u32 v_ = 0x61c968u; esp -= 4; M32(esp) = v_; }
  /* 0051c740 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c741 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051c744 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051c74b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051c74c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c74d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051c750 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c751 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c752 call 0x506b60 */ esp -= 4; M32(esp) = 0x51c757u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x51c752u); RETCHK(0x51c757u, 0x51c752u); LOADALL;
  /* 0051c757 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051c759 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0051c75b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0051c75e push 0x652894 */ { u32 v_ = 0x652894u; esp -= 4; M32(esp) = v_; }
  /* 0051c763 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051c766 mov dword ptr [esi], 0x652590 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652590u); }
  /* 0051c76c call 0x404420 */ esp -= 4; M32(esp) = 0x51c771u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51c76cu); RETCHK(0x51c771u, 0x51c76cu); LOADALL;
  /* 0051c771 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051c774 mov byte ptr [esi + 0x194], bl */ { const u32 m_ = (u32)(esi + 0x194u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051c77a mov byte ptr [esi + 0x195], bl */ { const u32 m_ = (u32)(esi + 0x195u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051c780 mov byte ptr [esi + 0x196], 0xf0 */ { const u32 m_ = (u32)(esi + 0x196u); M8(m_) = (u8)(0xf0u); }
  /* 0051c787 mov byte ptr [esi + 0x197], 0xc8 */ { const u32 m_ = (u32)(esi + 0x197u); M8(m_) = (u8)(0xc8u); }
  /* 0051c78e mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0051c794 mov dword ptr [esi + 0x1a0], eax */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 0051c79a mov dword ptr [esi + 0x19c], eax */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 0051c7a0 mov dword ptr [esi + 0x198], eax */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(eax); }
  /* 0051c7a6 mov dword ptr [esi + 0x184], ebx */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 0051c7ac mov dword ptr [esi + 0x180], ebx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 0051c7b2 mov dword ptr [esi + 0x18c], ebx */ { const u32 m_ = (u32)(esi + 0x18cu); M32(m_) = (u32)(ebx); }
  /* 0051c7b8 mov byte ptr [esi + 0x1a7], bl */ { const u32 m_ = (u32)(esi + 0x1a7u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051c7be mov dword ptr [esi + 0x188], 0x42c80000 */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(0x42c80000u); }
  /* 0051c7c8 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c7ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c7cb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051c7d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051c7d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c7d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c7d6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051c7e0(CPU *c) {
  NATIVE_HOOK(0x51c7e0u) REGS; LOADALL;
L_0051c7e0:;
  /* 0051c7e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c7e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c7e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c7e4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051c7e6 call 0x51c810 */ esp -= 4; M32(esp) = 0x51c7ebu; SAVEALL; F_0051c810(c); ABI_CHECK(0x51c810u, 0x51c7e6u); RETCHK(0x51c7ebu, 0x51c7e6u); LOADALL;
  /* 0051c7eb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c7ef je 0x51c7fa */ if (ZF_) goto L_0051c7fa;
  /* 0051c7f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c7f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51c7f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51c7f2u); RETCHK(0x51c7f7u, 0x51c7f2u); LOADALL;
  /* 0051c7f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051c7fa:;
  /* 0051c7fa mov eax, esi */ { eax = (u32)(esi); }
  /* 0051c7fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051c7fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c7fe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c810(CPU *c) {
  NATIVE_HOOK(0x51c810u) REGS; LOADALL;
L_0051c810:;
  /* 0051c810 mov dword ptr [ecx], 0x652590 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x652590u); }
  /* 0051c816 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0051c820(CPU *c) {
  NATIVE_HOOK(0x51c820u) REGS; LOADALL;
L_0051c820:;
  /* 0051c820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c823 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051c826 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051c829 mov dword ptr [eax + 0x194], ecx */ { const u32 m_ = (u32)(eax + 0x194u); M32(m_) = (u32)(ecx); }
  /* 0051c82f mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051c832 mov dword ptr [eax + 0x198], edx */ { const u32 m_ = (u32)(eax + 0x198u); M32(m_) = (u32)(edx); }
  /* 0051c838 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0051c83b mov dword ptr [eax + 0x19c], ecx */ { const u32 m_ = (u32)(eax + 0x19cu); M32(m_) = (u32)(ecx); }
  /* 0051c841 mov dword ptr [eax + 0x1a0], edx */ { const u32 m_ = (u32)(eax + 0x1a0u); M32(m_) = (u32)(edx); }
  /* 0051c847 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c848 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0051c850(CPU *c) {
  NATIVE_HOOK(0x51c850u) REGS; LOADALL;
L_0051c850:;
  /* 0051c850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c853 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051c856 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051c859 mov dword ptr [ecx + 0x184], eax */ { const u32 m_ = (u32)(ecx + 0x184u); M32(m_) = (u32)(eax); }
  /* 0051c85f mov dword ptr [ecx + 0x188], edx */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(edx); }
  /* 0051c865 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c866 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051c870(CPU *c) {
  NATIVE_HOOK(0x51c870u) REGS; LOADALL;
L_0051c870:;
  /* 0051c870 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c871 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c873 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051c876 mov dword ptr [ecx + 0x18c], eax */ { const u32 m_ = (u32)(ecx + 0x18cu); M32(m_) = (u32)(eax); }
  /* 0051c87c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c87d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c880(CPU *c) {
  NATIVE_HOOK(0x51c880u) REGS; LOADALL;
L_0051c880:;
  /* 0051c880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c883 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051c886 mov dword ptr [ecx + 0x180], eax */ { const u32 m_ = (u32)(ecx + 0x180u); M32(m_) = (u32)(eax); }
  /* 0051c88c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c88d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c890(CPU *c) {
  NATIVE_HOOK(0x51c890u) REGS; LOADALL;
L_0051c890:;
  /* 0051c890 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c891 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c893 mov ecx, dword ptr [eax + 0x184] */ { const u32 m_ = (u32)(eax + 0x184u); ecx = (u32)(M32(m_)); }
  /* 0051c899 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0051c89b mov eax, dword ptr [eax + 0x188] */ { const u32 m_ = (u32)(eax + 0x188u); eax = (u32)(M32(m_)); }
  /* 0051c8a1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051c8a4 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0051c8a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c8a7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c8b0(CPU *c) {
  NATIVE_HOOK(0x51c8b0u) REGS; LOADALL;
L_0051c8b0:;
  /* 0051c8b0 fld dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); FPUSH((double)MF32(m_)); }
  /* 0051c8b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051c8c0(CPU *c) {
  NATIVE_HOOK(0x51c8c0u) REGS; LOADALL;
L_0051c8c0:;
  /* 0051c8c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c8c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c8c3 fld dword ptr [ecx + 0x190] */ { const u32 m_ = (u32)(ecx + 0x190u); FPUSH((double)MF32(m_)); }
  /* 0051c8c9 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0051c8cf fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0051c8d1 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0051c8d3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051c8d5 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c8d8 jnp 0x51c8e7 */ if (!PF_) goto L_0051c8e7;
  /* 0051c8da fcom dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051c8e0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051c8e2 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c8e5 jne 0x51c8ef */ if (!ZF_) goto L_0051c8ef;
L_0051c8e7:;
  /* 0051c8e7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051c8e9 fld dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); FPUSH((double)MF32(m_)); }
L_0051c8ef:;
  /* 0051c8ef fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0051c8f2 fmul dword ptr [ecx + 0x18c] */ { const u32 m_ = (u32)(ecx + 0x18cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051c8f8 fadd dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051c8fe fst dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); MF32(m_) = (float)ST(0); }
  /* 0051c904 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0051c906 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051c908 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c90b jne 0x51c915 */ if (!ZF_) goto L_0051c915;
  /* 0051c90d fstp dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c913 jmp 0x51c917 */ goto L_0051c917;
L_0051c915:;
  /* 0051c915 fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051c917:;
  /* 0051c917 fld dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); FPUSH((double)MF32(m_)); }
  /* 0051c91d fcomp dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051c923 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051c925 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051c928 jp 0x51c936 */ if (PF_) goto L_0051c936;
  /* 0051c92a mov eax, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); eax = (u32)(M32(m_)); }
  /* 0051c930 mov dword ptr [ecx + 0x180], eax */ { const u32 m_ = (u32)(ecx + 0x180u); M32(m_) = (u32)(eax); }
L_0051c936:;
  /* 0051c936 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c937 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051c940(CPU *c) {
  NATIVE_HOOK(0x51c940u) REGS; LOADALL;
L_0051c940:;
  /* 0051c940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051c941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051c943 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051c945 push 0x61bac8 */ { u32 v_ = 0x61bac8u; esp -= 4; M32(esp) = v_; }
  /* 0051c94a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051c950 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051c951 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051c958 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051c95b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051c95c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051c95e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051c961 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c963 jne 0x51c978 */ if (!ZF_) goto L_0051c978;
  /* 0051c965 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0051c967 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051c968 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051c96b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051c972 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051c974 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051c975 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0051c978:;
  /* 0051c978 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051c97a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051c97b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051c97c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51c97fu; SAVEALL; call_ind(c, t_); RETCHK(0x51c97fu, 0x51c97cu); LOADALL; }
  /* 0051c97f push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0051c984 mov edi, eax */ { edi = (u32)(eax); }
  /* 0051c986 call 0x560fd0 */ esp -= 4; M32(esp) = 0x51c98bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51c986u); RETCHK(0x51c98bu, 0x51c986u); LOADALL;
  /* 0051c98b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051c98e fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051c991 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0051c996 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051c998 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c99b call 0x560fd0 */ esp -= 4; M32(esp) = 0x51c9a0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51c99bu); RETCHK(0x51c9a0u, 0x51c99bu); LOADALL;
  /* 0051c9a0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051c9a3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051c9a6 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0051c9ab mov eax, edi */ { eax = (u32)(edi); }
  /* 0051c9ad fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c9b0 call 0x560fd0 */ esp -= 4; M32(esp) = 0x51c9b5u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51c9b0u); RETCHK(0x51c9b5u, 0x51c9b0u); LOADALL;
  /* 0051c9b5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051c9b8 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051c9bb push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0051c9c0 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051c9c2 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051c9c5 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c9c8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x51c9cdu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51c9c8u); RETCHK(0x51c9cdu, 0x51c9c8u); LOADALL;
  /* 0051c9cd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051c9d0 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051c9d3 push 0x652890 */ { u32 v_ = 0x652890u; esp -= 4; M32(esp) = v_; }
  /* 0051c9d8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051c9da fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051c9dd fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051c9e0 call 0x560fd0 */ esp -= 4; M32(esp) = 0x51c9e5u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51c9e0u); RETCHK(0x51c9e5u, 0x51c9e0u); LOADALL;
  /* 0051c9e5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051c9e8 push 0x65288c */ { u32 v_ = 0x65288cu; esp -= 4; M32(esp) = v_; }
  /* 0051c9ed mov eax, edi */ { eax = (u32)(edi); }
  /* 0051c9ef call 0x560fd0 */ esp -= 4; M32(esp) = 0x51c9f4u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51c9efu); RETCHK(0x51c9f4u, 0x51c9efu); LOADALL;
  /* 0051c9f4 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051c9f7 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0051c9fa mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0051c9fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051c9ff fstp dword ptr [ebx + 0x184] */ { const u32 m_ = (u32)(ebx + 0x184u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051ca05 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 0051ca08 fstp dword ptr [ebx + 0x188] */ { const u32 m_ = (u32)(ebx + 0x188u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051ca0e je 0x51ca1c */ if (ZF_) goto L_0051ca1c;
  /* 0051ca10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ca11 lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0051ca14 call 0x52d060 */ esp -= 4; M32(esp) = 0x51ca19u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x51ca14u); RETCHK(0x51ca19u, 0x51ca14u); LOADALL;
  /* 0051ca19 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051ca1c:;
  /* 0051ca1c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ca1d mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0051ca22 call 0x560ed0 */ esp -= 4; M32(esp) = 0x51ca27u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x51ca22u); RETCHK(0x51ca27u, 0x51ca22u); LOADALL;
  /* 0051ca27 mov esi, eax */ { esi = (u32)(eax); }
  /* 0051ca29 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0051ca2b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051ca2d mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 0051ca34 mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 0051ca37 mov byte ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)(0x0u); }
  /* 0051ca3b lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0051ca3e mov edi, edi */ { edi = (u32)(edi); }
L_0051ca40:;
  /* 0051ca40 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051ca42 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051ca43 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051ca45 jne 0x51ca40 */ if (!ZF_) goto L_0051ca40;
  /* 0051ca47 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051ca49 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ca4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ca4b lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0051ca4e call 0x404420 */ esp -= 4; M32(esp) = 0x51ca53u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51ca4eu); RETCHK(0x51ca53u, 0x51ca4eu); LOADALL;
  /* 0051ca53 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0051ca56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ca57 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0051ca5a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0051ca5d mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0051ca5f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ca60 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051ca62 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51ca65u; SAVEALL; call_ind(c, t_); RETCHK(0x51ca65u, 0x51ca62u); LOADALL; }
  /* 0051ca65 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0051ca67 cmp dword ptr [ebp - 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051ca6b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051ca6c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051ca6d jb 0x51ca7b */ if (CF_) goto L_0051ca7b;
  /* 0051ca6f mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 0051ca72 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051ca73 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51ca78u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51ca73u); RETCHK(0x51ca78u, 0x51ca73u); LOADALL;
  /* 0051ca78 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051ca7b:;
  /* 0051ca7b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051ca7e mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0051ca80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051ca81 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051ca88 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051ca8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ca8b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051ca90(CPU *c) {
  NATIVE_HOOK(0x51ca90u) REGS; LOADALL;
L_0051ca90:;
  /* 0051ca90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051ca91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051ca93 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051ca96 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051ca97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ca98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ca99 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0051ca9b lea ebx, [edi + 0x44] */ ebx = (u32)((u32)(edi + 0x44u));
  /* 0051ca9e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051caa0 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051caa3 call 0x52cea0 */ esp -= 4; M32(esp) = 0x51caa8u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x51caa3u); RETCHK(0x51caa8u, 0x51caa3u); LOADALL;
  /* 0051caa8 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0051caab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051caac lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051caaf call 0x52cf90 */ esp -= 4; M32(esp) = 0x51cab4u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51caafu); RETCHK(0x51cab4u, 0x51caafu); LOADALL;
  /* 0051cab4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051cab7 call 0x518bb0 */ esp -= 4; M32(esp) = 0x51cabcu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x51cab7u); RETCHK(0x51cabcu, 0x51cab7u); LOADALL;
  /* 0051cabc call 0x518210 */ esp -= 4; M32(esp) = 0x51cac1u; SAVEALL; F_00518210(c); ABI_CHECK(0x518210u, 0x51cabcu); RETCHK(0x51cac1u, 0x51cabcu); LOADALL;
  /* 0051cac1 lea ecx, [edi + 0x1a4] */ ecx = (u32)((u32)(edi + 0x1a4u));
  /* 0051cac7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051cac8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051caca mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051cacd call 0x526e70 */ esp -= 4; M32(esp) = 0x51cad2u; SAVEALL; F_00526e70(c); ABI_CHECK(0x526e70u, 0x51cacdu); RETCHK(0x51cad2u, 0x51cacdu); LOADALL;
  /* 0051cad2 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0051cad5 fsub dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051cad7 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051cadd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cadf test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cae2 je 0x51caeb */ if (ZF_) goto L_0051caeb;
  /* 0051cae4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051cae6 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 0051cae8 fsub dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051caeb:;
  /* 0051caeb fmul dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051caf1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051caf3 fld dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); FPUSH((double)MF32(m_)); }
  /* 0051caf9 lea edx, [edi + 0x1a0] */ edx = (u32)((u32)(edi + 0x1a0u));
  /* 0051caff fsub dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051cb05 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051cb06 lea eax, [edi + 0x198] */ eax = (u32)((u32)(edi + 0x198u));
  /* 0051cb0c lea ecx, [edi + 0x19c] */ ecx = (u32)((u32)(edi + 0x19cu));
  /* 0051cb12 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 0051cb14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051cb15 add edi, 0x194 */ { u32 a_ = edi, b_ = 0x194u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051cb1b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051cb1c lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051cb1f fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051cb22 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051cb25 call 0x527210 */ esp -= 4; M32(esp) = 0x51cb2au; SAVEALL; F_00527210(c); ABI_CHECK(0x527210u, 0x51cb25u); RETCHK(0x51cb2au, 0x51cb25u); LOADALL;
  /* 0051cb2a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051cb2b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051cb2c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051cb2d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051cb2f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cb30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051cb40(CPU *c) {
  NATIVE_HOOK(0x51cb40u) REGS; LOADALL;
L_0051cb40:;
  /* 0051cb40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051cb41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051cb43 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051cb49 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051cb4b push 0x620148 */ { u32 v_ = 0x620148u; esp -= 4; M32(esp) = v_; }
  /* 0051cb50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051cb51 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051cb54 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051cb5b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051cb5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051cb5d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051cb60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051cb61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051cb62 call 0x51c730 */ esp -= 4; M32(esp) = 0x51cb67u; SAVEALL; F_0051c730(c); ABI_CHECK(0x51c730u, 0x51cb62u); RETCHK(0x51cb67u, 0x51cb62u); LOADALL;
  /* 0051cb67 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051cb69 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 0051cb6b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0051cb6e push 0x65287c */ { u32 v_ = 0x65287cu; esp -= 4; M32(esp) = v_; }
  /* 0051cb73 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051cb76 mov dword ptr [esi], 0x652778 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652778u); }
  /* 0051cb7c call 0x404420 */ esp -= 4; M32(esp) = 0x51cb81u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51cb7cu); RETCHK(0x51cb81u, 0x51cb7cu); LOADALL;
  /* 0051cb81 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051cb84 mov byte ptr [esi + 0x1a9], bl */ { const u32 m_ = (u32)(esi + 0x1a9u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051cb8a mov byte ptr [esi + 0x1aa], bl */ { const u32 m_ = (u32)(esi + 0x1aau); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051cb90 mov dword ptr [esi + 0x1ac], ebx */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(ebx); }
  /* 0051cb96 mov byte ptr [esi + 0x1a8], 0xff */ { const u32 m_ = (u32)(esi + 0x1a8u); M8(m_) = (u8)(0xffu); }
  /* 0051cb9d mov byte ptr [esi + 0x1ab], 0xb4 */ { const u32 m_ = (u32)(esi + 0x1abu); M8(m_) = (u8)(0xb4u); }
  /* 0051cba4 mov dword ptr [esi + 0x1b0], 0x42c80000 */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(0x42c80000u); }
  /* 0051cbae mov eax, esi */ { eax = (u32)(esi); }
  /* 0051cbb0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051cbb1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051cbb8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051cbb9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051cbbb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cbbc ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051cbc0(CPU *c) {
  NATIVE_HOOK(0x51cbc0u) REGS; LOADALL;
L_0051cbc0:;
  /* 0051cbc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051cbc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051cbc3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051cbc4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051cbc6 call 0x51cbf0 */ esp -= 4; M32(esp) = 0x51cbcbu; SAVEALL; F_0051cbf0(c); ABI_CHECK(0x51cbf0u, 0x51cbc6u); RETCHK(0x51cbcbu, 0x51cbc6u); LOADALL;
  /* 0051cbcb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cbcf je 0x51cbda */ if (ZF_) goto L_0051cbda;
  /* 0051cbd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051cbd2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51cbd7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51cbd2u); RETCHK(0x51cbd7u, 0x51cbd2u); LOADALL;
  /* 0051cbd7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051cbda:;
  /* 0051cbda mov eax, esi */ { eax = (u32)(esi); }
  /* 0051cbdc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051cbdd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cbde ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051cbf0(CPU *c) {
  NATIVE_HOOK(0x51cbf0u) REGS; LOADALL;
L_0051cbf0:;
  /* 0051cbf0 mov dword ptr [ecx], 0x652778 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x652778u); }
  /* 0051cbf6 jmp 0x51c810 */ SAVEALL; F_0051c810(c); return;
}

void F_0051cc00(CPU *c) {
  NATIVE_HOOK(0x51cc00u) REGS; LOADALL;
L_0051cc00:;
  /* 0051cc00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051cc01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051cc03 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051cc06 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051cc09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051cc0a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051cc0b call 0x507260 */ esp -= 4; M32(esp) = 0x51cc10u; SAVEALL; F_00507260(c); ABI_CHECK(0x507260u, 0x51cc0bu); RETCHK(0x51cc10u, 0x51cc0bu); LOADALL;
  /* 0051cc10 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cc12 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0051cc15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cc16 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051cc20(CPU *c) {
  NATIVE_HOOK(0x51cc20u) REGS; LOADALL;
L_0051cc20:;
  /* 0051cc20 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0051cc22 mov dword ptr [edx + 0x1a8], ecx */ { const u32 m_ = (u32)(edx + 0x1a8u); M32(m_) = (u32)(ecx); }
  /* 0051cc28 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051cc30(CPU *c) {
  NATIVE_HOOK(0x51cc30u) REGS; LOADALL;
L_0051cc30:;
  /* 0051cc30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051cc31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051cc33 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051cc36 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051cc39 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051cc3a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051cc3b call 0x51c850 */ esp -= 4; M32(esp) = 0x51cc40u; SAVEALL; F_0051c850(c); ABI_CHECK(0x51c850u, 0x51cc3bu); RETCHK(0x51cc40u, 0x51cc3bu); LOADALL;
  /* 0051cc40 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0051cc43 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051cc46 fmul dword ptr [0x656ef4] */ { const u32 m_ = (u32)(0x656ef4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051cc4c fstp dword ptr [ecx + 0x1b0] */ { const u32 m_ = (u32)(ecx + 0x1b0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051cc52 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cc53 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051cc60(CPU *c) {
  NATIVE_HOOK(0x51cc60u) REGS; LOADALL;
L_0051cc60:;
  /* 0051cc60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051cc61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051cc63 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051cc66 mov dword ptr [ecx + 0x1ac], eax */ { const u32 m_ = (u32)(ecx + 0x1acu); M32(m_) = (u32)(eax); }
  /* 0051cc6c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cc6d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051cc70(CPU *c) {
  NATIVE_HOOK(0x51cc70u) REGS; LOADALL;
L_0051cc70:;
  /* 0051cc70 fld dword ptr [ecx + 0x18c] */ { const u32 m_ = (u32)(ecx + 0x18cu); FPUSH((double)MF32(m_)); }
  /* 0051cc76 fadd dword ptr [ecx + 0x1ac] */ { const u32 m_ = (u32)(ecx + 0x1acu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051cc7c fst dword ptr [ecx + 0x1ac] */ { const u32 m_ = (u32)(ecx + 0x1acu); MF32(m_) = (float)ST(0); }
  /* 0051cc82 fcomp dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051cc88 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cc8a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cc8d jne 0x51cc9b */ if (!ZF_) goto L_0051cc9b;
  /* 0051cc8f mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 0051cc95 mov dword ptr [ecx + 0x1ac], eax */ { const u32 m_ = (u32)(ecx + 0x1acu); M32(m_) = (u32)(eax); }
L_0051cc9b:;
  /* 0051cc9b fld dword ptr [ecx + 0x1ac] */ { const u32 m_ = (u32)(ecx + 0x1acu); FPUSH((double)MF32(m_)); }
  /* 0051cca1 fcomp dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051cca7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cca9 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051ccac jp 0x51ccba */ if (PF_) goto L_0051ccba;
  /* 0051ccae mov edx, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); edx = (u32)(M32(m_)); }
  /* 0051ccb4 mov dword ptr [ecx + 0x1ac], edx */ { const u32 m_ = (u32)(ecx + 0x1acu); M32(m_) = (u32)(edx); }
L_0051ccba:;
  /* 0051ccba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051ccc0(CPU *c) {
  NATIVE_HOOK(0x51ccc0u) REGS; LOADALL;
L_0051ccc0:;
  /* 0051ccc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051ccc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051ccc3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051ccc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ccc7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ccc8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051ccca call 0x508630 */ esp -= 4; M32(esp) = 0x51cccfu; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x51cccau); RETCHK(0x51cccfu, 0x51cccau); LOADALL;
  /* 0051cccf fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0051ccd5 fld dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); FPUSH((double)MF32(m_)); }
  /* 0051ccdb fsub dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051cce1 fcom dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051cce7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cce9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051ccec je 0x51ccff */ if (ZF_) goto L_0051ccff;
  /* 0051ccee fcom dword ptr [0x656fa0] */ { const u32 m_ = (u32)(0x656fa0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051ccf4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051ccf6 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051ccf9 jp 0x51cd88 */ if (PF_) goto L_0051cd88;
L_0051ccff:;
  /* 0051ccff fcomp dword ptr [0x656fa0] */ { const u32 m_ = (u32)(0x656fa0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051cd05 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cd07 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cd0a jp 0x51cd14 */ if (PF_) goto L_0051cd14;
  /* 0051cd0c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051cd0e fld dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); FPUSH((double)MF32(m_)); }
L_0051cd14:;
  /* 0051cd14 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0051cd16 fmul dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051cd1c fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051cd1f fadd dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051cd25 fst dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); MF32(m_) = (float)ST(0); }
  /* 0051cd2b fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0051cd2d fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051cd33 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cd35 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cd38 jne 0x51cd55 */ if (!ZF_) goto L_0051cd55;
  /* 0051cd3a fcomp dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051cd40 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cd42 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cd45 jne 0x51cd57 */ if (!ZF_) goto L_0051cd57;
  /* 0051cd47 mov ecx, dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); ecx = (u32)(M32(m_)); }
  /* 0051cd4d mov dword ptr [esi + 0x180], ecx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ecx); }
  /* 0051cd53 jmp 0x51cd57 */ goto L_0051cd57;
L_0051cd55:;
  /* 0051cd55 fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051cd57:;
  /* 0051cd57 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051cd5d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cd5f test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cd62 jp 0x51cd8c */ if (PF_) goto L_0051cd8c;
  /* 0051cd64 fld dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); FPUSH((double)MF32(m_)); }
  /* 0051cd6a fcomp dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051cd70 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cd72 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cd75 jne 0x51cd8c */ if (!ZF_) goto L_0051cd8c;
  /* 0051cd77 mov edx, dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); edx = (u32)(M32(m_)); }
  /* 0051cd7d mov dword ptr [esi + 0x180], edx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(edx); }
  /* 0051cd83 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051cd84 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cd85 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0051cd88:;
  /* 0051cd88 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051cd8a fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051cd8c:;
  /* 0051cd8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051cd8d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cd8e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051cda0(CPU *c) {
  NATIVE_HOOK(0x51cda0u) REGS; LOADALL;
L_0051cda0:;
  /* 0051cda0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051cda1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051cda3 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051cda6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051cda7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051cda8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051cda9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0051cdab lea ebx, [edi + 0x44] */ ebx = (u32)((u32)(edi + 0x44u));
  /* 0051cdae mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051cdb0 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051cdb3 call 0x52cea0 */ esp -= 4; M32(esp) = 0x51cdb8u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x51cdb3u); RETCHK(0x51cdb8u, 0x51cdb3u); LOADALL;
  /* 0051cdb8 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0051cdbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051cdbc lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051cdbf call 0x52cf90 */ esp -= 4; M32(esp) = 0x51cdc4u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51cdbfu); RETCHK(0x51cdc4u, 0x51cdbfu); LOADALL;
  /* 0051cdc4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051cdc7 call 0x518bb0 */ esp -= 4; M32(esp) = 0x51cdccu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x51cdc7u); RETCHK(0x51cdccu, 0x51cdc7u); LOADALL;
  /* 0051cdcc call 0x518210 */ esp -= 4; M32(esp) = 0x51cdd1u; SAVEALL; F_00518210(c); ABI_CHECK(0x518210u, 0x51cdccu); RETCHK(0x51cdd1u, 0x51cdccu); LOADALL;
  /* 0051cdd1 lea ecx, [edi + 0x1a4] */ ecx = (u32)((u32)(edi + 0x1a4u));
  /* 0051cdd7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051cdd8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051cdda mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051cddd call 0x526e70 */ esp -= 4; M32(esp) = 0x51cde2u; SAVEALL; F_00526e70(c); ABI_CHECK(0x526e70u, 0x51cdddu); RETCHK(0x51cde2u, 0x51cdddu); LOADALL;
  /* 0051cde2 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0051cde5 fsub dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051cde7 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051cded fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051cdef test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cdf2 je 0x51cdfb */ if (ZF_) goto L_0051cdfb;
  /* 0051cdf4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051cdf6 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 0051cdf8 fsub dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051cdfb:;
  /* 0051cdfb fmul dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051ce01 lea ecx, [edi + 0x1a8] */ ecx = (u32)((u32)(edi + 0x1a8u));
  /* 0051ce07 fld dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); FPUSH((double)MF32(m_)); }
  /* 0051ce0d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051ce0f fsub dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051ce15 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ce16 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ce17 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051ce18 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 0051ce1a lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051ce1d fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051ce20 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051ce23 call 0x527210 */ esp -= 4; M32(esp) = 0x51ce28u; SAVEALL; F_00527210(c); ABI_CHECK(0x527210u, 0x51ce23u); RETCHK(0x51ce28u, 0x51ce23u); LOADALL;
  /* 0051ce28 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0051ce2b fsub dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051ce2d fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051ce33 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051ce35 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051ce38 je 0x51ce41 */ if (ZF_) goto L_0051ce41;
  /* 0051ce3a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051ce3c fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 0051ce3e fsub dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051ce41:;
  /* 0051ce41 fmul dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051ce47 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051ce49 fld dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); FPUSH((double)MF32(m_)); }
  /* 0051ce4f lea edx, [edi + 0x1a0] */ edx = (u32)((u32)(edi + 0x1a0u));
  /* 0051ce55 fsub dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051ce5b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051ce5c lea eax, [edi + 0x198] */ eax = (u32)((u32)(edi + 0x198u));
  /* 0051ce62 lea ecx, [edi + 0x19c] */ ecx = (u32)((u32)(edi + 0x19cu));
  /* 0051ce68 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 0051ce6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ce6b add edi, 0x194 */ { u32 a_ = edi, b_ = 0x194u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051ce71 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ce72 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051ce75 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051ce78 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051ce7b call 0x527210 */ esp -= 4; M32(esp) = 0x51ce80u; SAVEALL; F_00527210(c); ABI_CHECK(0x527210u, 0x51ce7bu); RETCHK(0x51ce80u, 0x51ce7bu); LOADALL;
  /* 0051ce80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051ce81 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051ce82 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051ce83 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051ce85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051ce86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0051ce90(CPU *c) {
  NATIVE_HOOK(0x51ce90u) REGS; LOADALL;
L_0051ce90:;
  /* 0051ce90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051ce91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051ce93 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0051ce99 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051ce9b push 0x620148 */ { u32 v_ = 0x620148u; esp -= 4; M32(esp) = v_; }
  /* 0051cea0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051cea1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051cea4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051ceab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ceac mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051ceaf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051ceb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ceb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ceb2 call 0x51c730 */ esp -= 4; M32(esp) = 0x51ceb7u; SAVEALL; F_0051c730(c); ABI_CHECK(0x51c730u, 0x51ceb2u); RETCHK(0x51ceb7u, 0x51ceb2u); LOADALL;
  /* 0051ceb7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0051ceb9 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0051cebb mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0051cebe push 0x65286c */ { u32 v_ = 0x65286cu; esp -= 4; M32(esp) = v_; }
  /* 0051cec3 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051cec6 mov dword ptr [esi], 0x652680 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652680u); }
  /* 0051cecc call 0x404420 */ esp -= 4; M32(esp) = 0x51ced1u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51ceccu); RETCHK(0x51ced1u, 0x51ceccu); LOADALL;
  /* 0051ced1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051ced4 mov dword ptr [esi + 0x1b0], edi */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(edi); }
  /* 0051ceda mov dword ptr [esi + 0x1a8], edi */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(edi); }
  /* 0051cee0 mov dword ptr [esi + 0x1ac], edi */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(edi); }
  /* 0051cee6 mov dword ptr [esi + 0x1b4], 0x42c80000 */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(0x42c80000u); }
  /* 0051cef0 mov byte ptr [esi + 0x1b8], 1 */ { const u32 m_ = (u32)(esi + 0x1b8u); M8(m_) = (u8)(0x1u); }
  /* 0051cef7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051cef8 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051cefa mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051cf01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051cf02 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051cf04 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cf05 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051cf10(CPU *c) {
  NATIVE_HOOK(0x51cf10u) REGS; LOADALL;
L_0051cf10:;
  /* 0051cf10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051cf11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051cf13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051cf14 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051cf16 call 0x51cf40 */ esp -= 4; M32(esp) = 0x51cf1bu; SAVEALL; F_0051cf40(c); ABI_CHECK(0x51cf40u, 0x51cf16u); RETCHK(0x51cf1bu, 0x51cf16u); LOADALL;
  /* 0051cf1b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cf1f je 0x51cf2a */ if (ZF_) goto L_0051cf2a;
  /* 0051cf21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051cf22 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51cf27u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51cf22u); RETCHK(0x51cf27u, 0x51cf22u); LOADALL;
  /* 0051cf27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051cf2a:;
  /* 0051cf2a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051cf2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051cf2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cf2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051cf40(CPU *c) {
  NATIVE_HOOK(0x51cf40u) REGS; LOADALL;
L_0051cf40:;
  /* 0051cf40 mov dword ptr [ecx], 0x652680 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x652680u); }
  /* 0051cf46 jmp 0x51c810 */ SAVEALL; F_0051c810(c); return;
}

void F_0051cf50(CPU *c) {
  NATIVE_HOOK(0x51cf50u) REGS; LOADALL;
L_0051cf50:;
  /* 0051cf50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051cf51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051cf53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051cf54 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051cf55 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051cf57 call 0x507260 */ esp -= 4; M32(esp) = 0x51cf5cu; SAVEALL; F_00507260(c); ABI_CHECK(0x507260u, 0x51cf57u); RETCHK(0x51cf5cu, 0x51cf57u); LOADALL;
  /* 0051cf5c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cf5e jne 0x51cf64 */ if (!ZF_) goto L_0051cf64;
  /* 0051cf60 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051cf61 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0051cf64:;
  /* 0051cf64 mov ecx, dword ptr [esi + 0x1a8] */ { const u32 m_ = (u32)(esi + 0x1a8u); ecx = (u32)(M32(m_)); }
  /* 0051cf6a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051cf6b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0051cf6d cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051cf6f je 0x51cf7d */ if (ZF_) goto L_0051cf7d;
  /* 0051cf71 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0051cf73 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051cf75 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51cf77u; SAVEALL; call_ind(c, t_); RETCHK(0x51cf77u, 0x51cf75u); LOADALL; }
  /* 0051cf77 mov dword ptr [esi + 0x1a8], edi */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(edi); }
L_0051cf7d:;
  /* 0051cf7d push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051cf7f call 0x5fe934 */ esp -= 4; M32(esp) = 0x51cf84u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51cf7fu); RETCHK(0x51cf84u, 0x51cf7fu); LOADALL;
  /* 0051cf84 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051cf87 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051cf89 je 0x51cf96 */ if (ZF_) goto L_0051cf96;
  /* 0051cf8b mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 0051cf91 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0051cf94 jmp 0x51cf98 */ goto L_0051cf98;
L_0051cf96:;
  /* 0051cf96 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051cf98:;
  /* 0051cf98 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051cf9a mov dword ptr [esi + 0x1a8], eax */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(eax); }
  /* 0051cfa0 je 0x51d062 */ if (ZF_) goto L_0051d062;
  /* 0051cfa6 cmp dword ptr [ebx + 0x14], edi */ { const u32 m_ = (u32)(ebx + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051cfa9 je 0x51d04c */ if (ZF_) goto L_0051d04c;
  /* 0051cfaf cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051cfb3 jb 0x51cfba */ if (CF_) goto L_0051cfba;
  /* 0051cfb5 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051cfb8 jmp 0x51cfbd */ goto L_0051cfbd;
L_0051cfba:;
  /* 0051cfba lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
L_0051cfbd:;
  /* 0051cfbd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051cfbe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051cfbf call 0x529310 */ esp -= 4; M32(esp) = 0x51cfc4u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x51cfbfu); RETCHK(0x51cfc4u, 0x51cfbfu); LOADALL;
  /* 0051cfc4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051cfc6 je 0x51d04c */ if (ZF_) goto L_0051d04c;
  /* 0051cfcc mov ecx, dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); ecx = (u32)(M32(m_)); }
  /* 0051cfd2 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051cfd4 je 0x51cfe2 */ if (ZF_) goto L_0051cfe2;
  /* 0051cfd6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051cfd8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051cfda call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51cfdcu; SAVEALL; call_ind(c, t_); RETCHK(0x51cfdcu, 0x51cfdau); LOADALL; }
  /* 0051cfdc mov dword ptr [esi + 0x1ac], edi */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(edi); }
L_0051cfe2:;
  /* 0051cfe2 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051cfe4 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51cfe9u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51cfe4u); RETCHK(0x51cfe9u, 0x51cfe4u); LOADALL;
  /* 0051cfe9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051cfec cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051cfee je 0x51cffb */ if (ZF_) goto L_0051cffb;
  /* 0051cff0 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 0051cff6 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0051cff9 jmp 0x51cffd */ goto L_0051cffd;
L_0051cffb:;
  /* 0051cffb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051cffd:;
  /* 0051cffd cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051cfff mov dword ptr [esi + 0x1ac], eax */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 0051d005 je 0x51d062 */ if (ZF_) goto L_0051d062;
  /* 0051d007 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051d00a cmp dword ptr [ecx + 0x14], edi */ { const u32 m_ = (u32)(ecx + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051d00d je 0x51d02f */ if (ZF_) goto L_0051d02f;
  /* 0051d00f cmp dword ptr [ecx + 0x18], 0x10 */ { const u32 m_ = (u32)(ecx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051d013 jb 0x51d01a */ if (CF_) goto L_0051d01a;
  /* 0051d015 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051d018 jmp 0x51d01d */ goto L_0051d01d;
L_0051d01a:;
  /* 0051d01a add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0051d01d:;
  /* 0051d01d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051d01e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051d01f call 0x529310 */ esp -= 4; M32(esp) = 0x51d024u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x51d01fu); RETCHK(0x51d024u, 0x51d01fu); LOADALL;
  /* 0051d024 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051d026 je 0x51d02f */ if (ZF_) goto L_0051d02f;
  /* 0051d028 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051d02a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051d02b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051d02c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0051d02f:;
  /* 0051d02f mov ecx, dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); ecx = (u32)(M32(m_)); }
  /* 0051d035 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051d037 je 0x51d03f */ if (ZF_) goto L_0051d03f;
  /* 0051d039 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0051d03b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051d03d call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51d03fu; SAVEALL; call_ind(c, t_); RETCHK(0x51d03fu, 0x51d03du); LOADALL; }
L_0051d03f:;
  /* 0051d03f mov dword ptr [esi + 0x1ac], edi */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(edi); }
  /* 0051d045 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0051d047 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051d048 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051d049 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0051d04c:;
  /* 0051d04c mov ecx, dword ptr [esi + 0x1a8] */ { const u32 m_ = (u32)(esi + 0x1a8u); ecx = (u32)(M32(m_)); }
  /* 0051d052 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051d054 je 0x51d05c */ if (ZF_) goto L_0051d05c;
  /* 0051d056 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051d058 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051d05a call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51d05cu; SAVEALL; call_ind(c, t_); RETCHK(0x51d05cu, 0x51d05au); LOADALL; }
L_0051d05c:;
  /* 0051d05c mov dword ptr [esi + 0x1a8], edi */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(edi); }
L_0051d062:;
  /* 0051d062 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0051d064 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051d065 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051d066 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0051d070(CPU *c) {
  NATIVE_HOOK(0x51d070u) REGS; LOADALL;
L_0051d070:;
  /* 0051d070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051d071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051d073 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051d076 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051d079 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051d07a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051d07b call 0x51c850 */ esp -= 4; M32(esp) = 0x51d080u; SAVEALL; F_0051c850(c); ABI_CHECK(0x51c850u, 0x51d07bu); RETCHK(0x51d080u, 0x51d07bu); LOADALL;
  /* 0051d080 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0051d083 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051d086 fmul dword ptr [0x656ef4] */ { const u32 m_ = (u32)(0x656ef4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051d08c fstp dword ptr [ecx + 0x1b4] */ { const u32 m_ = (u32)(ecx + 0x1b4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051d092 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051d093 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051d0a0(CPU *c) {
  NATIVE_HOOK(0x51d0a0u) REGS; LOADALL;
L_0051d0a0:;
  /* 0051d0a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0051d0a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0051d0a3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051d0a6 mov dword ptr [ecx + 0x1b0], eax */ { const u32 m_ = (u32)(ecx + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 0051d0ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051d0ad ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}
