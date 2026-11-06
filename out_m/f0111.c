#include "funcs.h"

void F_10307148(CPU *c) {
  NATIVE_HOOK(0x10307148u) REGS; LOADALL;
L_10307148:;
  /* 10307148 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030714c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307150(CPU *c) {
  NATIVE_HOOK(0x10307150u) REGS; LOADALL;
L_10307150:;
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307163(CPU *c) {
  NATIVE_HOOK(0x10307163u) REGS; LOADALL;
L_10307163:;
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030716c(CPU *c) {
  NATIVE_HOOK(0x1030716cu) REGS; LOADALL;
L_1030716c:;
  /* 1030716c jl 0x103071df */ if (LT_) goto L_103071df;
  /* 1030716e xor byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10307170 test byte ptr [ecx + 0x30], dh */ { const u32 m_ = (u32)(ecx + 0x30u); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10307173 adc byte ptr [eax - 0x5befcf8f], dl */ { const u32 m_ = (u32)(eax + 0xa4103071u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10307179 jno 0x103071ab */ if (!OF_) goto L_103071ab;
  /* 1030717b adc byte ptr [ebx + 0x5f5e0845], cl */ { const u32 m_ = (u32)(ebx + 0x5f5e0845u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071ab:;
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071df:;
  /* 103071df jae 0x10307211 */ if (!CF_) goto L_10307211;
  /* 103071e1 adc byte ptr [ebx - 0x260801], cl */ { const u32 m_ = (u32)(ebx + 0xffd9f7ffu); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  goto L_103071e7;
L_103071e4:;
  /* 103071e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103071e6 jmp dword ptr [ecx*4 + 0x103072b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103072b8u); u32 t_ = M32(m_); switch (t_) { case 0x103072ffu: goto L_103072ff; default: SAVEALL; call_ind(c, t_); return; } }
L_103071e7:;
  /* 103071e7 and al, 0x8d */ { u32 a_ = (eax & 0xffu), b_ = 0x8du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 103071e9 mov eax, 0x8d103072 */ { eax = (u32)(0x8d103072u); }
  /* 103071ee dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103071ef add byte ptr [ebx + 0x3bac7], cl */ { const u32 m_ = (u32)(ebx + 0x3bac7u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 103071f5 add byte ptr [eax], al */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 103071f7 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103071fa jb 0x10307208 */ if (CF_) goto L_10307208;
  /* 103071fc and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103071ff sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10307201 jmp dword ptr [eax*4 + 0x1030720c] */ { const u32 m_ = (u32)(eax * 4u + 0x1030720cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10307208:;
  /* 10307208 jmp dword ptr [ecx*4 + 0x10307308] */ { const u32 m_ = (u32)(ecx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307211:;
  /* 10307211 jb 0x10307243 */ if (CF_) goto L_10307243;
  /* 10307213 adc byte ptr [eax + 0x72], al */ { const u32 m_ = (u32)(eax + 0x72u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10307216 xor byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10307218 push 0x8a103072 */ { u32 v_ = 0x8a103072u; esp -= 4; M32(esp) = v_; }
  /* 1030721d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030721e add esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307220 ror dword ptr [eax - 0x117cfcb9], 1 */ { const u32 m_ = (u32)(eax + 0xee830347u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M32(m_); u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = (r_ >> 31) & 1u; u32 of_ = ((r_ >> 31) ^ (r_ >> 30)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); M32(m_) = (u32)(r_); } }
  /* 10307226 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10307228 jmp 0x121ff52f */ TRAP(0x121ff52fu, "bad jump target");
L_10307243:;
  /* 10307243 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10307245 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307248 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030724b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030724e mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307251 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307254 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10307257 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030725a jb 0x103071e4 */ if (CF_) goto L_103071e4;
  /* 1030725c std */ c->df = 1;
  /* 1030725d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1030725f cld */ c->df = 0;
  /* 10307260 jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_103072ff:;
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030717c(CPU *c) {
  NATIVE_HOOK(0x1030717cu) REGS; LOADALL;
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307184(CPU *c) {
  NATIVE_HOOK(0x10307184u) REGS; LOADALL;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307190(CPU *c) {
  NATIVE_HOOK(0x10307190u) REGS; LOADALL;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103071a4(CPU *c) {
  NATIVE_HOOK(0x103071a4u) REGS; LOADALL;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030720c(CPU *c) {
  NATIVE_HOOK(0x1030720cu) REGS; LOADALL;
  goto L_1030720c;
L_103071e4:;
  /* 103071e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103071e6 jmp dword ptr [ecx*4 + 0x103072b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103072b8u); u32 t_ = M32(m_); switch (t_) { case 0x103072ffu: goto L_103072ff; default: SAVEALL; call_ind(c, t_); return; } }
L_1030720c:;
  /* 1030720c jae 0x1030723e */ if (!CF_) goto L_1030723e;
  /* 1030720e adc byte ptr [eax + 0x1030721c], dl */ { const u32 m_ = (u32)(eax + 0x1030721cu); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10307214 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307215 jb 0x10307247 */ if (CF_) goto L_10307247;
  /* 10307217 adc byte ptr [eax + 0x72], ch */ { const u32 m_ = (u32)(eax + 0x72u); u32 a_ = M8(m_), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1030721a xor byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1030721c mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030721f and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10307221 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307224 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307227 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030722a sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1030722d cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307230 jb 0x103071e4 */ if (CF_) goto L_103071e4;
  /* 10307232 std */ c->df = 1;
  /* 10307233 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10307235 cld */ c->df = 0;
  /* 10307236 jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_1030723e:;
  /* 1030723e dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030723f add byte ptr [edx - 0x2edcfcba], cl */ { const u32 m_ = (u32)(edx + 0xd1230346u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10307245 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  goto L_10307248;
L_10307247:;
  /* 10307247 add ecx, dword ptr [edx - 0x163efdba] */ { const u32 m_ = (u32)(edx + 0xe9c10246u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  goto L_1030724d;
L_10307248:;
  /* 10307248 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030724b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  goto L_1030724e;
L_1030724d:;
  /* 1030724d add cl, byte ptr [eax - 0x117cfdb9] */ { const u32 m_ = (u32)(eax + 0xee830247u); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  goto L_10307253;
L_1030724e:;
  /* 1030724e mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307251 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  goto L_10307254;
L_10307253:;
  /* 10307253 add al, byte ptr [ebx - 0x67cfd11] */ { const u32 m_ = (u32)(ebx + 0xf98302efu); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  goto L_10307259;
L_10307254:;
  /* 10307254 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10307257 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  goto L_1030725a;
L_10307259:;
  /* 10307259 or byte ptr [edx - 0x78], dh */ { const u32 m_ = (u32)(edx + 0xffffff88u); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  goto L_1030725c;
L_1030725a:;
  /* 1030725a jb 0x103071e4 */ if (CF_) goto L_103071e4;
L_1030725c:;
  /* 1030725c std */ c->df = 1;
  /* 1030725d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1030725f cld */ c->df = 0;
  /* 10307260 jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_103072ff:;
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030721c(CPU *c) {
  NATIVE_HOOK(0x1030721cu) REGS; LOADALL;
  goto L_1030721c;
L_103071e4:;
  /* 103071e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103071e6 jmp dword ptr [ecx*4 + 0x103072b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103072b8u); u32 t_ = M32(m_); switch (t_) { case 0x103072ffu: goto L_103072ff; default: SAVEALL; call_ind(c, t_); return; } }
L_1030721c:;
  /* 1030721c mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030721f and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10307221 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307224 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307227 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030722a sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1030722d cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307230 jb 0x103071e4 */ if (CF_) goto L_103071e4;
  /* 10307232 std */ c->df = 1;
  /* 10307233 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10307235 cld */ c->df = 0;
  /* 10307236 jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_103072ff:;
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307240(CPU *c) {
  NATIVE_HOOK(0x10307240u) REGS; LOADALL;
  goto L_10307240;
L_103071e4:;
  /* 103071e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103071e6 jmp dword ptr [ecx*4 + 0x103072b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103072b8u); u32 t_ = M32(m_); switch (t_) { case 0x103072ffu: goto L_103072ff; default: SAVEALL; call_ind(c, t_); return; } }
L_10307240:;
  /* 10307240 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307243 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10307245 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307248 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030724b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030724e mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307251 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307254 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10307257 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030725a jb 0x103071e4 */ if (CF_) goto L_103071e4;
  /* 1030725c std */ c->df = 1;
  /* 1030725d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1030725f cld */ c->df = 0;
  /* 10307260 jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_103072ff:;
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307268(CPU *c) {
  NATIVE_HOOK(0x10307268u) REGS; LOADALL;
  goto L_10307268;
L_103071e4:;
  /* 103071e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103071e6 jmp dword ptr [ecx*4 + 0x103072b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103072b8u); u32 t_ = M32(m_); switch (t_) { case 0x103072ffu: goto L_103072ff; default: SAVEALL; call_ind(c, t_); return; } }
L_10307268:;
  /* 10307268 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030726b and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1030726d mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307270 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307273 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307276 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307279 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030727c mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030727f sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307282 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10307285 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307288 jb 0x103071e4 */ if (CF_) goto L_103071e4;
  /* 1030728e std */ c->df = 1;
  /* 1030728f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10307291 cld */ c->df = 0;
  /* 10307292 jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_103072ff:;
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103072b8(CPU *c) {
  NATIVE_HOOK(0x103072b8u) REGS; LOADALL;
L_103072b8:;
  /* 103072b8 push dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103072bb adc byte ptr [ebx - 0x76e371bc], cl */ { const u32 m_ = (u32)(ebx + 0x891c8e44u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 103072c1 inc esp */ { u32 a_ = esp; u32 r_ = (a_ + 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  TRAP(0x103072c2u, "undecodable");
}

void F_103072bc(CPU *c) {
  NATIVE_HOOK(0x103072bcu) REGS; LOADALL;
L_103072bc:;
  /* 103072bc mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 103072c0 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 103072c4 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 103072c8 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 103072cc mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 103072d0 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 103072d4 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 103072d8 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 103072dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103072e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103072e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103072e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103072ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103072f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103072f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103072fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103072fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103072c4(CPU *c) {
  NATIVE_HOOK(0x103072c4u) REGS; LOADALL;
L_103072c4:;
  /* 103072c4 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 103072c8 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 103072cc mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 103072d0 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 103072d4 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 103072d8 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 103072dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103072e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103072e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103072e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103072ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103072f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103072f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103072fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103072fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103072cc(CPU *c) {
  NATIVE_HOOK(0x103072ccu) REGS; LOADALL;
L_103072cc:;
  /* 103072cc mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 103072d0 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 103072d4 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 103072d8 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 103072dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103072e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103072e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103072e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103072ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103072f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103072f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103072fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103072fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103072d4(CPU *c) {
  NATIVE_HOOK(0x103072d4u) REGS; LOADALL;
L_103072d4:;
  /* 103072d4 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 103072d8 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 103072dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103072e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103072e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103072e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103072ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103072f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103072f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103072fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103072fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103072dc(CPU *c) {
  NATIVE_HOOK(0x103072dcu) REGS; LOADALL;
L_103072dc:;
  /* 103072dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103072e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103072e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103072e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103072ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103072f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103072f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103072fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103072fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103072e4(CPU *c) {
  NATIVE_HOOK(0x103072e4u) REGS; LOADALL;
L_103072e4:;
  /* 103072e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103072e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103072ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103072f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103072f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103072fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103072fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103072ec(CPU *c) {
  NATIVE_HOOK(0x103072ecu) REGS; LOADALL;
L_103072ec:;
  /* 103072ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103072f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103072f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103072fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103072fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103072ff(CPU *c) {
  NATIVE_HOOK(0x103072ffu) REGS; LOADALL;
L_103072ff:;
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307308(CPU *c) {
  NATIVE_HOOK(0x10307308u) REGS; LOADALL;
L_10307308:;
  /* 10307308 sbb byte ptr [ebx + 0x30], dh */ { const u32 m_ = (u32)(ebx + 0x30u); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1030730b adc byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1030730d jae 0x1030733f */ if (!CF_) goto L_1030733f;
  /* 1030730f adc byte ptr [eax], dh */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10307311 jae 0x10307343 */ if (!CF_) goto L_10307343;
  /* 10307313 adc byte ptr [ebx + esi*2 + 0x30], al */ { const u32 m_ = (u32)(ebx + esi * 2u + 0x30u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10307317 adc byte ptr [ebx + 0x5f5e0845], cl */ { const u32 m_ = (u32)(ebx + 0x5f5e0845u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1030733f:;
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307343:;
  /* 10307343 nop */ ;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307318(CPU *c) {
  NATIVE_HOOK(0x10307318u) REGS; LOADALL;
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307320(CPU *c) {
  NATIVE_HOOK(0x10307320u) REGS; LOADALL;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307330(CPU *c) {
  NATIVE_HOOK(0x10307330u) REGS; LOADALL;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307344(CPU *c) {
  NATIVE_HOOK(0x10307344u) REGS; LOADALL;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030735d(CPU *c) {
  NATIVE_HOOK(0x1030735du) REGS; LOADALL;
L_1030735d:;
  /* 1030735d call 0x10304039 */ esp -= 4; M32(esp) = 0x10307362u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x1030735du); RETCHK(0x10307362u, 0x1030735du); LOADALL;
  /* 10307362 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307365 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307366(CPU *c) {
  NATIVE_HOOK(0x10307366u) REGS; LOADALL;
L_10307366:;
  /* 10307366 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307367 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1030736b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030736d je 0x103074f4 */ if (ZF_) goto L_103074f4;
  /* 10307373 push dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307376 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030737bu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307376u); RETCHK(0x1030737bu, 0x10307376u); LOADALL;
  /* 1030737b push dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030737e call 0x10303326 */ esp -= 4; M32(esp) = 0x10307383u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030737eu); RETCHK(0x10307383u, 0x1030737eu); LOADALL;
  /* 10307383 push dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307386 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030738bu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307386u); RETCHK(0x1030738bu, 0x10307386u); LOADALL;
  /* 1030738b push dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030738e call 0x10303326 */ esp -= 4; M32(esp) = 0x10307393u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030738eu); RETCHK(0x10307393u, 0x1030738eu); LOADALL;
  /* 10307393 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307396 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030739bu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307396u); RETCHK(0x1030739bu, 0x10307396u); LOADALL;
  /* 1030739b push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030739e call 0x10303326 */ esp -= 4; M32(esp) = 0x103073a3u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030739eu); RETCHK(0x103073a3u, 0x1030739eu); LOADALL;
  /* 103073a3 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073a5 call 0x10303326 */ esp -= 4; M32(esp) = 0x103073aau; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073a5u); RETCHK(0x103073aau, 0x103073a5u); LOADALL;
  /* 103073aa push dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073ad call 0x10303326 */ esp -= 4; M32(esp) = 0x103073b2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073adu); RETCHK(0x103073b2u, 0x103073adu); LOADALL;
  /* 103073b2 push dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073b5 call 0x10303326 */ esp -= 4; M32(esp) = 0x103073bau; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073b5u); RETCHK(0x103073bau, 0x103073b5u); LOADALL;
  /* 103073ba push dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073bd call 0x10303326 */ esp -= 4; M32(esp) = 0x103073c2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073bdu); RETCHK(0x103073c2u, 0x103073bdu); LOADALL;
  /* 103073c2 push dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073c5 call 0x10303326 */ esp -= 4; M32(esp) = 0x103073cau; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073c5u); RETCHK(0x103073cau, 0x103073c5u); LOADALL;
  /* 103073ca push dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073cd call 0x10303326 */ esp -= 4; M32(esp) = 0x103073d2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073cdu); RETCHK(0x103073d2u, 0x103073cdu); LOADALL;
  /* 103073d2 push dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073d5 call 0x10303326 */ esp -= 4; M32(esp) = 0x103073dau; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073d5u); RETCHK(0x103073dau, 0x103073d5u); LOADALL;
  /* 103073da push dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073dd call 0x10303326 */ esp -= 4; M32(esp) = 0x103073e2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073ddu); RETCHK(0x103073e2u, 0x103073ddu); LOADALL;
  /* 103073e2 push dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073e5 call 0x10303326 */ esp -= 4; M32(esp) = 0x103073eau; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073e5u); RETCHK(0x103073eau, 0x103073e5u); LOADALL;
  /* 103073ea push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073ed call 0x10303326 */ esp -= 4; M32(esp) = 0x103073f2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073edu); RETCHK(0x103073f2u, 0x103073edu); LOADALL;
  /* 103073f2 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103073f5 push dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103073f8 call 0x10303326 */ esp -= 4; M32(esp) = 0x103073fdu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103073f8u); RETCHK(0x103073fdu, 0x103073f8u); LOADALL;
  /* 103073fd push dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307400 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307405u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307400u); RETCHK(0x10307405u, 0x10307400u); LOADALL;
  /* 10307405 push dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307408 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030740du; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307408u); RETCHK(0x1030740du, 0x10307408u); LOADALL;
  /* 1030740d push dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307410 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307415u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307410u); RETCHK(0x10307415u, 0x10307410u); LOADALL;
  /* 10307415 push dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307418 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030741du; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307418u); RETCHK(0x1030741du, 0x10307418u); LOADALL;
  /* 1030741d push dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307420 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307425u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307420u); RETCHK(0x10307425u, 0x10307420u); LOADALL;
  /* 10307425 push dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307428 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030742du; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307428u); RETCHK(0x1030742du, 0x10307428u); LOADALL;
  /* 1030742d push dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307430 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307435u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307430u); RETCHK(0x10307435u, 0x10307430u); LOADALL;
  /* 10307435 push dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307438 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030743du; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307438u); RETCHK(0x1030743du, 0x10307438u); LOADALL;
  /* 1030743d push dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307440 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307445u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307440u); RETCHK(0x10307445u, 0x10307440u); LOADALL;
  /* 10307445 push dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307448 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030744du; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307448u); RETCHK(0x1030744du, 0x10307448u); LOADALL;
  /* 1030744d push dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307450 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307455u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307450u); RETCHK(0x10307455u, 0x10307450u); LOADALL;
  /* 10307455 push dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307458 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030745du; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307458u); RETCHK(0x1030745du, 0x10307458u); LOADALL;
  /* 1030745d push dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307460 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307465u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307460u); RETCHK(0x10307465u, 0x10307460u); LOADALL;
  /* 10307465 push dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307468 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030746du; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307468u); RETCHK(0x1030746du, 0x10307468u); LOADALL;
  /* 1030746d push dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307470 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307475u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307470u); RETCHK(0x10307475u, 0x10307470u); LOADALL;
  /* 10307475 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307478 push dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030747e call 0x10303326 */ esp -= 4; M32(esp) = 0x10307483u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030747eu); RETCHK(0x10307483u, 0x1030747eu); LOADALL;
  /* 10307483 push dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307489 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030748eu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307489u); RETCHK(0x1030748eu, 0x10307489u); LOADALL;
  /* 1030748e push dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307494 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307499u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307494u); RETCHK(0x10307499u, 0x10307494u); LOADALL;
  /* 10307499 push dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030749f call 0x10303326 */ esp -= 4; M32(esp) = 0x103074a4u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030749fu); RETCHK(0x103074a4u, 0x1030749fu); LOADALL;
  /* 103074a4 push dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103074aa call 0x10303326 */ esp -= 4; M32(esp) = 0x103074afu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103074aau); RETCHK(0x103074afu, 0x103074aau); LOADALL;
  /* 103074af push dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103074b5 call 0x10303326 */ esp -= 4; M32(esp) = 0x103074bau; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103074b5u); RETCHK(0x103074bau, 0x103074b5u); LOADALL;
  /* 103074ba push dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103074c0 call 0x10303326 */ esp -= 4; M32(esp) = 0x103074c5u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103074c0u); RETCHK(0x103074c5u, 0x103074c0u); LOADALL;
  /* 103074c5 push dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103074cb call 0x10303326 */ esp -= 4; M32(esp) = 0x103074d0u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103074cbu); RETCHK(0x103074d0u, 0x103074cbu); LOADALL;
  /* 103074d0 push dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103074d6 call 0x10303326 */ esp -= 4; M32(esp) = 0x103074dbu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103074d6u); RETCHK(0x103074dbu, 0x103074d6u); LOADALL;
  /* 103074db push dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103074e1 call 0x10303326 */ esp -= 4; M32(esp) = 0x103074e6u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103074e1u); RETCHK(0x103074e6u, 0x103074e1u); LOADALL;
  /* 103074e6 push dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103074ec call 0x10303326 */ esp -= 4; M32(esp) = 0x103074f1u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103074ecu); RETCHK(0x103074f1u, 0x103074ecu); LOADALL;
  /* 103074f1 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_103074f4:;
  /* 103074f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103074f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103074f6(CPU *c) {
  NATIVE_HOOK(0x103074f6u) REGS; LOADALL;
L_103074f6:;
  /* 103074f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103074f7 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 103074fb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103074fd je 0x10307553 */ if (ZF_) goto L_10307553;
  /* 103074ff mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10307501 mov ecx, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); ecx = (u32)(M32(m_)); }
  /* 10307507 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307509 je 0x1030751a */ if (ZF_) goto L_1030751a;
  /* 1030750b cmp eax, dword ptr [0x1030b7a4] */ { const u32 m_ = (u32)(0x1030b7a4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307511 je 0x1030751a */ if (ZF_) goto L_1030751a;
  /* 10307513 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307514 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307519u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307514u); RETCHK(0x10307519u, 0x10307514u); LOADALL;
  /* 10307519 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030751a:;
  /* 1030751a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1030751d mov ecx, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); ecx = (u32)(M32(m_)); }
  /* 10307523 cmp eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307526 je 0x10307537 */ if (ZF_) goto L_10307537;
  /* 10307528 cmp eax, dword ptr [0x1030b7a8] */ { const u32 m_ = (u32)(0x1030b7a8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030752e je 0x10307537 */ if (ZF_) goto L_10307537;
  /* 10307530 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307531 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307536u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307531u); RETCHK(0x10307536u, 0x10307531u); LOADALL;
  /* 10307536 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307537:;
  /* 10307537 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 1030753a mov eax, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); eax = (u32)(M32(m_)); }
  /* 1030753f cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307542 je 0x10307553 */ if (ZF_) goto L_10307553;
  /* 10307544 cmp esi, dword ptr [0x1030b7ac] */ { const u32 m_ = (u32)(0x1030b7acu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030754a je 0x10307553 */ if (ZF_) goto L_10307553;
  /* 1030754c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030754d call 0x10303326 */ esp -= 4; M32(esp) = 0x10307552u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030754du); RETCHK(0x10307552u, 0x1030754du); LOADALL;
  /* 10307552 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307553:;
  /* 10307553 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307554 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307555(CPU *c) {
  NATIVE_HOOK(0x10307555u) REGS; LOADALL;
L_10307555:;
  /* 10307555 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307556 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1030755a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030755c je 0x1030762c */ if (ZF_) goto L_1030762c;
  /* 10307562 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10307565 mov ecx, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); ecx = (u32)(M32(m_)); }
  /* 1030756b cmp eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030756e je 0x1030757f */ if (ZF_) goto L_1030757f;
  /* 10307570 cmp eax, dword ptr [0x1030b7b0] */ { const u32 m_ = (u32)(0x1030b7b0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307576 je 0x1030757f */ if (ZF_) goto L_1030757f;
  /* 10307578 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307579 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030757eu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307579u); RETCHK(0x1030757eu, 0x10307579u); LOADALL;
  /* 1030757e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030757f:;
  /* 1030757f mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 10307582 mov ecx, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); ecx = (u32)(M32(m_)); }
  /* 10307588 cmp eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030758b je 0x1030759c */ if (ZF_) goto L_1030759c;
  /* 1030758d cmp eax, dword ptr [0x1030b7b4] */ { const u32 m_ = (u32)(0x1030b7b4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307593 je 0x1030759c */ if (ZF_) goto L_1030759c;
  /* 10307595 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307596 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030759bu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307596u); RETCHK(0x1030759bu, 0x10307596u); LOADALL;
  /* 1030759b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030759c:;
  /* 1030759c mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 1030759f mov ecx, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); ecx = (u32)(M32(m_)); }
  /* 103075a5 cmp eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103075a8 je 0x103075b9 */ if (ZF_) goto L_103075b9;
  /* 103075aa cmp eax, dword ptr [0x1030b7b8] */ { const u32 m_ = (u32)(0x1030b7b8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103075b0 je 0x103075b9 */ if (ZF_) goto L_103075b9;
  /* 103075b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103075b3 call 0x10303326 */ esp -= 4; M32(esp) = 0x103075b8u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103075b3u); RETCHK(0x103075b8u, 0x103075b3u); LOADALL;
  /* 103075b8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103075b9:;
  /* 103075b9 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 103075bc mov ecx, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); ecx = (u32)(M32(m_)); }
  /* 103075c2 cmp eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103075c5 je 0x103075d6 */ if (ZF_) goto L_103075d6;
  /* 103075c7 cmp eax, dword ptr [0x1030b7bc] */ { const u32 m_ = (u32)(0x1030b7bcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103075cd je 0x103075d6 */ if (ZF_) goto L_103075d6;
  /* 103075cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103075d0 call 0x10303326 */ esp -= 4; M32(esp) = 0x103075d5u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103075d0u); RETCHK(0x103075d5u, 0x103075d0u); LOADALL;
  /* 103075d5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103075d6:;
  /* 103075d6 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 103075d9 mov ecx, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); ecx = (u32)(M32(m_)); }
  /* 103075df cmp eax, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103075e2 je 0x103075f3 */ if (ZF_) goto L_103075f3;
  /* 103075e4 cmp eax, dword ptr [0x1030b7c0] */ { const u32 m_ = (u32)(0x1030b7c0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103075ea je 0x103075f3 */ if (ZF_) goto L_103075f3;
  /* 103075ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103075ed call 0x10303326 */ esp -= 4; M32(esp) = 0x103075f2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103075edu); RETCHK(0x103075f2u, 0x103075edu); LOADALL;
  /* 103075f2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103075f3:;
  /* 103075f3 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 103075f6 mov ecx, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); ecx = (u32)(M32(m_)); }
  /* 103075fc cmp eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103075ff je 0x10307610 */ if (ZF_) goto L_10307610;
  /* 10307601 cmp eax, dword ptr [0x1030b7c4] */ { const u32 m_ = (u32)(0x1030b7c4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307607 je 0x10307610 */ if (ZF_) goto L_10307610;
  /* 10307609 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030760a call 0x10303326 */ esp -= 4; M32(esp) = 0x1030760fu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030760au); RETCHK(0x1030760fu, 0x1030760au); LOADALL;
  /* 1030760f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307610:;
  /* 10307610 mov esi, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); esi = (u32)(M32(m_)); }
  /* 10307613 mov eax, dword ptr [0x1030b7d4] */ { const u32 m_ = (u32)(0x1030b7d4u); eax = (u32)(M32(m_)); }
  /* 10307618 cmp esi, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030761b je 0x1030762c */ if (ZF_) goto L_1030762c;
  /* 1030761d cmp esi, dword ptr [0x1030b7c8] */ { const u32 m_ = (u32)(0x1030b7c8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307623 je 0x1030762c */ if (ZF_) goto L_1030762c;
  /* 10307625 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307626 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030762bu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307626u); RETCHK(0x1030762bu, 0x10307626u); LOADALL;
  /* 1030762b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030762c:;
  /* 1030762c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030762d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307738(CPU *c) {
  NATIVE_HOOK(0x10307738u) REGS; LOADALL;
L_10307738:;
  /* 10307738 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 1030773a push 0x1030a108 */ { u32 v_ = 0x1030a108u; esp -= 4; M32(esp) = v_; }
  /* 1030773f call 0x10303548 */ esp -= 4; M32(esp) = 0x10307744u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x1030773fu); RETCHK(0x10307744u, 0x1030773fu); LOADALL;
  /* 10307744 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10307746 cmp dword ptr [0x1030bccc], esi */ { const u32 m_ = (u32)(0x1030bcccu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030774c jne 0x10307783 */ if (!ZF_) goto L_10307783;
  /* 1030774e lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 10307751 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307752 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10307754 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307755 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307756 push 0x1030a104 */ { u32 v_ = 0x1030a104u; esp -= 4; M32(esp) = v_; }
  /* 1030775b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030775c call dword ptr [0x103090dc] */ { const u32 m_ = (u32)(0x103090dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307762u; SAVEALL; call_ind(c, t_); RETCHK(0x10307762u, 0x1030775cu); LOADALL; }
  /* 10307762 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307764 je 0x1030776e */ if (ZF_) goto L_1030776e;
  /* 10307766 mov dword ptr [0x1030bccc], edi */ { const u32 m_ = (u32)(0x1030bcccu); M32(m_) = (u32)(edi); }
  /* 1030776c jmp 0x10307783 */ goto L_10307783;
L_1030776e:;
  /* 1030776e call dword ptr [0x1030903c] */ { const u32 m_ = (u32)(0x1030903cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307774u; SAVEALL; call_ind(c, t_); RETCHK(0x10307774u, 0x1030776eu); LOADALL; }
  /* 10307774 cmp eax, 0x78 */ { u32 a_ = eax, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307777 jne 0x10307783 */ if (!ZF_) goto L_10307783;
  /* 10307779 mov dword ptr [0x1030bccc], 2 */ { const u32 m_ = (u32)(0x1030bcccu); M32(m_) = (u32)(0x2u); }
L_10307783:;
  /* 10307783 mov eax, dword ptr [0x1030bccc] */ { const u32 m_ = (u32)(0x1030bcccu); eax = (u32)(M32(m_)); }
  /* 10307788 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030778b je 0x1030787b */ if (ZF_) goto L_1030787b;
  /* 10307791 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307793 je 0x1030787b */ if (ZF_) goto L_1030787b;
  /* 10307799 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030779c jne 0x103078a1 */ if (!ZF_) goto L_103078a1;
  /* 103077a2 mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 103077a5 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 103077a8 cmp dword ptr [ebp + 0x18], esi */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103077ab jne 0x103077b5 */ if (!ZF_) goto L_103077b5;
  /* 103077ad mov eax, dword ptr [0x1030bcc4] */ { const u32 m_ = (u32)(0x1030bcc4u); eax = (u32)(M32(m_)); }
  /* 103077b2 mov dword ptr [ebp + 0x18], eax */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(eax); }
L_103077b5:;
  /* 103077b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103077b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103077b7 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103077ba push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103077bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103077bf cmp dword ptr [ebp + 0x20], esi */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103077c2 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 103077c5 lea eax, [eax*8 + 1] */ eax = (u32)((u32)(eax * 8u + 0x1u));
  /* 103077cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103077cd push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103077d0 call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103077d6u; SAVEALL; call_ind(c, t_); RETCHK(0x103077d6u, 0x103077d0u); LOADALL; }
  /* 103077d6 mov edi, eax */ { edi = (u32)(eax); }
  /* 103077d8 mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 103077db test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103077dd je 0x103078a1 */ if (ZF_) goto L_103078a1;
  /* 103077e3 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103077e7 lea ebx, [edi + edi] */ ebx = (u32)((u32)(edi + edi));
  /* 103077ea mov eax, ebx */ { eax = (u32)(ebx); }
  /* 103077ec add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103077ef and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103077f2 call 0x10304df0 */ esp -= 4; M32(esp) = 0x103077f7u; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x103077f2u); RETCHK(0x103077f7u, 0x103077f2u); LOADALL;
  /* 103077f7 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 103077fa mov esi, esp */ { esi = (u32)(esp); }
  /* 103077fc mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 103077ff push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307800 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10307802 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307803 call 0x10306f20 */ esp -= 4; M32(esp) = 0x10307808u; SAVEALL; F_10306f20(c); ABI_CHECK(0x10306f20u, 0x10307803u); RETCHK(0x10307808u, 0x10307803u); LOADALL;
  /* 10307808 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030780b or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030780f jmp 0x10307826 */ goto L_10307826;
L_10307826:;
  /* 10307826 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307828 jne 0x10307841 */ if (!ZF_) goto L_10307841;
  /* 1030782a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030782b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1030782d call 0x10304573 */ esp -= 4; M32(esp) = 0x10307832u; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x1030782du); RETCHK(0x10307832u, 0x1030782du); LOADALL;
  /* 10307832 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307833 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307834 mov esi, eax */ { esi = (u32)(eax); }
  /* 10307836 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307838 je 0x103078a1 */ if (ZF_) goto L_103078a1;
  /* 1030783a mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
L_10307841:;
  /* 10307841 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307842 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307843 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307846 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307849 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1030784b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030784e call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307854u; SAVEALL; call_ind(c, t_); RETCHK(0x10307854u, 0x1030784eu); LOADALL; }
  /* 10307854 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307856 je 0x10307869 */ if (ZF_) goto L_10307869;
  /* 10307858 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030785b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030785c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030785d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307860 call dword ptr [0x103090dc] */ { const u32 m_ = (u32)(0x103090dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307866u; SAVEALL; call_ind(c, t_); RETCHK(0x10307866u, 0x10307860u); LOADALL; }
  /* 10307866 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
L_10307869:;
  /* 10307869 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030786d je 0x10307876 */ if (ZF_) goto L_10307876;
  /* 1030786f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307870 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307875u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307870u); RETCHK(0x10307875u, 0x10307870u); LOADALL;
  /* 10307875 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307876:;
  /* 10307876 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10307879 jmp 0x103078e9 */ goto L_103078e9;
L_1030787b:;
  /* 1030787b mov ebx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 1030787e cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307880 jne 0x10307888 */ if (!ZF_) goto L_10307888;
  /* 10307882 mov ebx, dword ptr [0x1030bcb4] */ { const u32 m_ = (u32)(0x1030bcb4u); ebx = (u32)(M32(m_)); }
L_10307888:;
  /* 10307888 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 1030788b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030788d jne 0x10307895 */ if (!ZF_) goto L_10307895;
  /* 1030788f mov edi, dword ptr [0x1030bcc4] */ { const u32 m_ = (u32)(0x1030bcc4u); edi = (u32)(M32(m_)); }
L_10307895:;
  /* 10307895 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307896 call 0x103082c9 */ esp -= 4; M32(esp) = 0x1030789bu; SAVEALL; F_103082c9(c); ABI_CHECK(0x103082c9u, 0x10307896u); RETCHK(0x1030789bu, 0x10307896u); LOADALL;
  /* 1030789b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030789c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030789f jne 0x103078a5 */ if (!ZF_) goto L_103078a5;
L_103078a1:;
  /* 103078a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103078a3 jmp 0x103078e9 */ goto L_103078e9;
L_103078a5:;
  /* 103078a5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103078a7 je 0x103078c7 */ if (ZF_) goto L_103078c7;
  /* 103078a9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103078ab push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103078ad lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 103078b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103078b1 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103078b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103078b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103078b6 call 0x1030830c */ esp -= 4; M32(esp) = 0x103078bbu; SAVEALL; F_1030830c(c); ABI_CHECK(0x1030830cu, 0x103078b6u); RETCHK(0x103078bbu, 0x103078b6u); LOADALL;
  /* 103078bb add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103078be mov esi, eax */ { esi = (u32)(eax); }
  /* 103078c0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103078c2 je 0x103078a1 */ if (ZF_) goto L_103078a1;
  /* 103078c4 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
L_103078c7:;
  /* 103078c7 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103078ca push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103078cd push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103078d0 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103078d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103078d4 call dword ptr [0x103090d4] */ { const u32 m_ = (u32)(0x103090d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103078dau; SAVEALL; call_ind(c, t_); RETCHK(0x103078dau, 0x103078d4u); LOADALL; }
  /* 103078da mov edi, eax */ { edi = (u32)(eax); }
  /* 103078dc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103078de je 0x103078e7 */ if (ZF_) goto L_103078e7;
  /* 103078e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103078e1 call 0x10303326 */ esp -= 4; M32(esp) = 0x103078e6u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103078e1u); RETCHK(0x103078e6u, 0x103078e1u); LOADALL;
  /* 103078e6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103078e7:;
  /* 103078e7 mov eax, edi */ { eax = (u32)(edi); }
L_103078e9:;
  /* 103078e9 lea esp, [ebp - 0x38] */ esp = (u32)((u32)(ebp + 0xffffffc8u));
  /* 103078ec call 0x10303583 */ esp -= 4; M32(esp) = 0x103078f1u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103078ecu); RETCHK(0x103078f1u, 0x103078ecu); LOADALL;
  /* 103078f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307811(CPU *c) {
  NATIVE_HOOK(0x10307811u) REGS; LOADALL;
L_10307811:;
  /* 10307811 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307813 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307814 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307815(CPU *c) {
  NATIVE_HOOK(0x10307815u) REGS; LOADALL;
L_10307815:;
  /* 10307815 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10307818 call 0x1030815e */ esp -= 4; M32(esp) = 0x1030781du; SAVEALL; F_1030815e(c); ABI_CHECK(0x1030815eu, 0x10307818u); RETCHK(0x1030781du, 0x10307818u); LOADALL;
  /* 1030781d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1030781f or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307823 mov edi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edi = (u32)(M32(m_)); }
  /* 10307826 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307828 jne 0x10307841 */ if (!ZF_) goto L_10307841;
  /* 1030782a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030782b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1030782d call 0x10304573 */ esp -= 4; M32(esp) = 0x10307832u; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x1030782du); RETCHK(0x10307832u, 0x1030782du); LOADALL;
  /* 10307832 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307833 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307834 mov esi, eax */ { esi = (u32)(eax); }
  /* 10307836 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307838 je 0x103078a1 */ if (ZF_) goto L_103078a1;
  /* 1030783a mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
L_10307841:;
  /* 10307841 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307842 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307843 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307846 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307849 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1030784b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030784e call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307854u; SAVEALL; call_ind(c, t_); RETCHK(0x10307854u, 0x1030784eu); LOADALL; }
  /* 10307854 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307856 je 0x10307869 */ if (ZF_) goto L_10307869;
  /* 10307858 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030785b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030785c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030785d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307860 call dword ptr [0x103090dc] */ { const u32 m_ = (u32)(0x103090dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307866u; SAVEALL; call_ind(c, t_); RETCHK(0x10307866u, 0x10307860u); LOADALL; }
  /* 10307866 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
L_10307869:;
  /* 10307869 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030786d je 0x10307876 */ if (ZF_) goto L_10307876;
  /* 1030786f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307870 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307875u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307870u); RETCHK(0x10307875u, 0x10307870u); LOADALL;
  /* 10307875 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307876:;
  /* 10307876 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10307879 jmp 0x103078e9 */ goto L_103078e9;
L_103078a1:;
  /* 103078a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103078a3 jmp 0x103078e9 */ goto L_103078e9;
L_103078e9:;
  /* 103078e9 lea esp, [ebp - 0x38] */ esp = (u32)((u32)(ebp + 0xffffffc8u));
  /* 103078ec call 0x10303583 */ esp -= 4; M32(esp) = 0x103078f1u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103078ecu); RETCHK(0x103078f1u, 0x103078ecu); LOADALL;
  /* 103078f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307980(CPU *c) {
  NATIVE_HOOK(0x10307980u) REGS; LOADALL;
L_10307980:;
  /* 10307980 push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 10307982 push 0x1030a118 */ { u32 v_ = 0x1030a118u; esp -= 4; M32(esp) = v_; }
  /* 10307987 call 0x10303548 */ esp -= 4; M32(esp) = 0x1030798cu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10307987u); RETCHK(0x1030798cu, 0x10307987u); LOADALL;
  /* 1030798c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1030798e cmp dword ptr [0x1030bcf4], ebx */ { const u32 m_ = (u32)(0x1030bcf4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307994 jne 0x103079ce */ if (!ZF_) goto L_103079ce;
  /* 10307996 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307997 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307998 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1030799a inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030799b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030799c push 0x1030a104 */ { u32 v_ = 0x1030a104u; esp -= 4; M32(esp) = v_; }
  /* 103079a1 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 103079a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103079a7 call dword ptr [0x103090e4] */ { const u32 m_ = (u32)(0x103090e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103079adu; SAVEALL; call_ind(c, t_); RETCHK(0x103079adu, 0x103079a7u); LOADALL; }
  /* 103079ad test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103079af je 0x103079b9 */ if (ZF_) goto L_103079b9;
  /* 103079b1 mov dword ptr [0x1030bcf4], esi */ { const u32 m_ = (u32)(0x1030bcf4u); M32(m_) = (u32)(esi); }
  /* 103079b7 jmp 0x103079ce */ goto L_103079ce;
L_103079b9:;
  /* 103079b9 call dword ptr [0x1030903c] */ { const u32 m_ = (u32)(0x1030903cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103079bfu; SAVEALL; call_ind(c, t_); RETCHK(0x103079bfu, 0x103079b9u); LOADALL; }
  /* 103079bf cmp eax, 0x78 */ { u32 a_ = eax, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103079c2 jne 0x103079ce */ if (!ZF_) goto L_103079ce;
  /* 103079c4 mov dword ptr [0x1030bcf4], 2 */ { const u32 m_ = (u32)(0x1030bcf4u); M32(m_) = (u32)(0x2u); }
L_103079ce:;
  /* 103079ce cmp dword ptr [ebp + 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103079d1 jle 0x103079ee */ if ((ZF_|LT_)) goto L_103079ee;
  /* 103079d3 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 103079d6 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
L_103079d9:;
  /* 103079d9 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103079da cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103079dc je 0x103079e6 */ if (ZF_) goto L_103079e6;
  /* 103079de inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103079df cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103079e1 jne 0x103079d9 */ if (!ZF_) goto L_103079d9;
  /* 103079e3 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_103079e6:;
  /* 103079e6 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103079e9 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103079eb add dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_103079ee:;
  /* 103079ee mov eax, dword ptr [0x1030bcf4] */ { const u32 m_ = (u32)(0x1030bcf4u); eax = (u32)(M32(m_)); }
  /* 103079f3 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103079f6 je 0x10307bd8 */ if (ZF_) goto L_10307bd8;
  /* 103079fc cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103079fe je 0x10307bd8 */ if (ZF_) goto L_10307bd8;
  /* 10307a04 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307a07 jne 0x10307c0b */ if (!ZF_) goto L_10307c0b;
  /* 10307a0d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10307a0f mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 10307a12 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 10307a15 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 10307a18 cmp dword ptr [ebp + 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307a1b jne 0x10307a25 */ if (!ZF_) goto L_10307a25;
  /* 10307a1d mov eax, dword ptr [0x1030bcc4] */ { const u32 m_ = (u32)(0x1030bcc4u); eax = (u32)(M32(m_)); }
  /* 10307a22 mov dword ptr [ebp + 0x20], eax */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(eax); }
L_10307a25:;
  /* 10307a25 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307a26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307a27 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307a2a push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307a2d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307a2f cmp dword ptr [ebp + 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0x24u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307a32 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10307a35 lea eax, [eax*8 + 1] */ eax = (u32)((u32)(eax * 8u + 0x1u));
  /* 10307a3c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307a3d push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307a40 call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307a46u; SAVEALL; call_ind(c, t_); RETCHK(0x10307a46u, 0x10307a40u); LOADALL; }
  /* 10307a46 mov esi, eax */ { esi = (u32)(eax); }
  /* 10307a48 mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 10307a4b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307a4d je 0x10307c0b */ if (ZF_) goto L_10307c0b;
  /* 10307a53 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10307a5a lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 10307a5d add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307a60 and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307a63 call 0x10304df0 */ esp -= 4; M32(esp) = 0x10307a68u; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x10307a63u); RETCHK(0x10307a68u, 0x10307a63u); LOADALL;
  /* 10307a68 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10307a6b mov eax, esp */ { eax = (u32)(esp); }
  /* 10307a6d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10307a70 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307a74 jmp 0x10307a91 */ goto L_10307a91;
L_10307a91:;
  /* 10307a91 cmp dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307a94 jne 0x10307ab2 */ if (!ZF_) goto L_10307ab2;
  /* 10307a96 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 10307a99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307a9a call 0x10303744 */ esp -= 4; M32(esp) = 0x10307a9fu; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10307a9au); RETCHK(0x10307a9fu, 0x10307a9au); LOADALL;
  /* 10307a9f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307aa0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10307aa3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307aa5 je 0x10307c0b */ if (ZF_) goto L_10307c0b;
  /* 10307aab mov dword ptr [ebp - 0x38], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x1u); }
L_10307ab2:;
  /* 10307ab2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307ab3 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ab6 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ab9 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307abc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10307abe push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ac1 call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307ac7u; SAVEALL; call_ind(c, t_); RETCHK(0x10307ac7u, 0x10307ac1u); LOADALL; }
  /* 10307ac7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307ac9 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307acf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307ad0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307ad1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307ad2 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ad5 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ad8 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307adb call dword ptr [0x103090e4] */ { const u32 m_ = (u32)(0x103090e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307ae1u; SAVEALL; call_ind(c, t_); RETCHK(0x10307ae1u, 0x10307adbu); LOADALL; }
  /* 10307ae1 mov edi, eax */ { edi = (u32)(eax); }
  /* 10307ae3 mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 10307ae6 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ae8 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307aee test byte ptr [ebp + 0xd], 4 */ { const u32 m_ = (u32)(ebp + 0xdu); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10307af2 je 0x10307b21 */ if (ZF_) goto L_10307b21;
  /* 10307af4 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307af7 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307afd cmp edi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b00 jg 0x10307bb5 */ if (!(ZF_|LT_)) goto L_10307bb5;
  /* 10307b06 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b09 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b0c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307b0d push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b10 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b13 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b16 call dword ptr [0x103090e4] */ { const u32 m_ = (u32)(0x103090e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307b1cu; SAVEALL; call_ind(c, t_); RETCHK(0x10307b1cu, 0x10307b16u); LOADALL; }
  /* 10307b1c jmp 0x10307bb5 */ goto L_10307bb5;
L_10307b21:;
  /* 10307b21 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 10307b28 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10307b2b add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307b2e and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307b31 call 0x10304df0 */ esp -= 4; M32(esp) = 0x10307b36u; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x10307b31u); RETCHK(0x10307b36u, 0x10307b31u); LOADALL;
  /* 10307b36 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10307b39 mov eax, esp */ { eax = (u32)(esp); }
  /* 10307b3b mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10307b3e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307b42 jmp 0x10307b5f */ goto L_10307b5f;
L_10307b5f:;
  /* 10307b5f cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b62 jne 0x10307b7c */ if (!ZF_) goto L_10307b7c;
  /* 10307b64 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10307b67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307b68 call 0x10303744 */ esp -= 4; M32(esp) = 0x10307b6du; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10307b68u); RETCHK(0x10307b6du, 0x10307b68u); LOADALL;
  /* 10307b6d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307b6e mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10307b71 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b73 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307b75 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
L_10307b7c:;
  /* 10307b7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307b7d push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307b81 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b84 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b87 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b8a call dword ptr [0x103090e4] */ { const u32 m_ = (u32)(0x103090e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307b90u; SAVEALL; call_ind(c, t_); RETCHK(0x10307b90u, 0x10307b8au); LOADALL; }
  /* 10307b90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307b92 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307b94 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b95 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b96 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b99 jne 0x10307b9f */ if (!ZF_) goto L_10307b9f;
  /* 10307b9b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b9c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b9d jmp 0x10307ba5 */ goto L_10307ba5;
L_10307b9f:;
  /* 10307b9f push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ba2 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10307ba5:;
  /* 10307ba5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307ba6 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ba9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307baa push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bad call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307bb3u; SAVEALL; call_ind(c, t_); RETCHK(0x10307bb3u, 0x10307badu); LOADALL; }
  /* 10307bb3 mov edi, eax */ { edi = (u32)(eax); }
L_10307bb5:;
  /* 10307bb5 cmp dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307bb8 je 0x10307bc3 */ if (ZF_) goto L_10307bc3;
  /* 10307bba push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bbd call 0x10303326 */ esp -= 4; M32(esp) = 0x10307bc2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307bbdu); RETCHK(0x10307bc2u, 0x10307bbdu); LOADALL;
  /* 10307bc2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307bc3:;
  /* 10307bc3 cmp dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307bc6 je 0x10307bd1 */ if (ZF_) goto L_10307bd1;
  /* 10307bc8 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bcb call 0x10303326 */ esp -= 4; M32(esp) = 0x10307bd0u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307bcbu); RETCHK(0x10307bd0u, 0x10307bcbu); LOADALL;
  /* 10307bd0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307bd1:;
  /* 10307bd1 mov eax, edi */ { eax = (u32)(edi); }
  /* 10307bd3 jmp 0x10307d33 */ goto L_10307d33;
L_10307bd8:;
  /* 10307bd8 mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 10307bdb xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10307bdd mov dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ebx); }
  /* 10307be0 cmp dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307be3 jne 0x10307bed */ if (!ZF_) goto L_10307bed;
  /* 10307be5 mov eax, dword ptr [0x1030bcb4] */ { const u32 m_ = (u32)(0x1030bcb4u); eax = (u32)(M32(m_)); }
  /* 10307bea mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
L_10307bed:;
  /* 10307bed cmp dword ptr [ebp + 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307bf0 jne 0x10307bfa */ if (!ZF_) goto L_10307bfa;
  /* 10307bf2 mov eax, dword ptr [0x1030bcc4] */ { const u32 m_ = (u32)(0x1030bcc4u); eax = (u32)(M32(m_)); }
  /* 10307bf7 mov dword ptr [ebp + 0x20], eax */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(eax); }
L_10307bfa:;
  /* 10307bfa push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bfd call 0x103082c9 */ esp -= 4; M32(esp) = 0x10307c02u; SAVEALL; F_103082c9(c); ABI_CHECK(0x103082c9u, 0x10307bfdu); RETCHK(0x10307c02u, 0x10307bfdu); LOADALL;
  /* 10307c02 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307c03 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10307c06 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307c09 jne 0x10307c12 */ if (!ZF_) goto L_10307c12;
L_10307c0b:;
  /* 10307c0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307c0d jmp 0x10307d33 */ goto L_10307d33;
L_10307c12:;
  /* 10307c12 cmp eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307c15 je 0x10307d09 */ if (ZF_) goto L_10307d09;
  /* 10307c1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307c1c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307c1d lea ecx, [ebp + 0x14] */ ecx = (u32)((u32)(ebp + 0x14u));
  /* 10307c20 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10307c21 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307c24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307c25 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307c28 call 0x1030830c */ esp -= 4; M32(esp) = 0x10307c2du; SAVEALL; F_1030830c(c); ABI_CHECK(0x1030830cu, 0x10307c28u); RETCHK(0x10307c2du, 0x10307c28u); LOADALL;
  /* 10307c2d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307c30 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10307c33 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307c35 je 0x10307c0b */ if (ZF_) goto L_10307c0b;
  /* 10307c37 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307c38 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307c39 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307c3c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307c3d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307c40 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307c43 call dword ptr [0x103090e0] */ { const u32 m_ = (u32)(0x103090e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307c49u; SAVEALL; call_ind(c, t_); RETCHK(0x10307c49u, 0x10307c43u); LOADALL; }
  /* 10307c49 mov esi, eax */ { esi = (u32)(eax); }
  /* 10307c4b mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 10307c4e cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307c50 je 0x10307cf8 */ if (ZF_) goto L_10307cf8;
  /* 10307c56 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 10307c59 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307c5c and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307c5f call 0x10304df0 */ esp -= 4; M32(esp) = 0x10307c64u; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x10307c5fu); RETCHK(0x10307c64u, 0x10307c5fu); LOADALL;
  /* 10307c64 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10307c67 mov edi, esp */ { edi = (u32)(esp); }
  /* 10307c69 mov dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edi); }
  /* 10307c6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307c6d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307c6e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307c6f call 0x10306f20 */ esp -= 4; M32(esp) = 0x10307c74u; SAVEALL; F_10306f20(c); ABI_CHECK(0x10306f20u, 0x10307c6fu); RETCHK(0x10307c74u, 0x10307c6fu); LOADALL;
  /* 10307c74 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307c77 jmp 0x10307c89 */ goto L_10307c89;
L_10307c89:;
  /* 10307c89 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307c8d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307c8f jne 0x10307cb4 */ if (!ZF_) goto L_10307cb4;
  /* 10307c91 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307c94 call 0x10303744 */ esp -= 4; M32(esp) = 0x10307c99u; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10307c94u); RETCHK(0x10307c99u, 0x10307c94u); LOADALL;
  /* 10307c99 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307c9a mov edi, eax */ { edi = (u32)(eax); }
  /* 10307c9c cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307c9e je 0x10307cd1 */ if (ZF_) goto L_10307cd1;
  /* 10307ca0 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ca3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307ca4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307ca5 call 0x10306f20 */ esp -= 4; M32(esp) = 0x10307caau; SAVEALL; F_10306f20(c); ABI_CHECK(0x10306f20u, 0x10307ca5u); RETCHK(0x10307caau, 0x10307ca5u); LOADALL;
  /* 10307caa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307cad mov dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x1u); }
L_10307cb4:;
  /* 10307cb4 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cb7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307cb8 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cbb push dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cbe push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cc1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cc4 call dword ptr [0x103090e0] */ { const u32 m_ = (u32)(0x103090e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307ccau; SAVEALL; call_ind(c, t_); RETCHK(0x10307ccau, 0x10307cc4u); LOADALL; }
  /* 10307cca mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 10307ccd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ccf jne 0x10307cd5 */ if (!ZF_) goto L_10307cd5;
L_10307cd1:;
  /* 10307cd1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10307cd3 jmp 0x10307cfb */ goto L_10307cfb;
L_10307cd5:;
  /* 10307cd5 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cd8 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cdb lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 10307cde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307cdf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307ce0 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ce3 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ce6 call 0x1030830c */ esp -= 4; M32(esp) = 0x10307cebu; SAVEALL; F_1030830c(c); ABI_CHECK(0x1030830cu, 0x10307ce6u); RETCHK(0x10307cebu, 0x10307ce6u); LOADALL;
  /* 10307ceb add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307cee mov esi, eax */ { esi = (u32)(eax); }
  /* 10307cf0 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10307cf2 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 10307cf4 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10307cf6 jmp 0x10307cfb */ goto L_10307cfb;
L_10307cf8:;
  /* 10307cf8 mov esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); esi = (u32)(M32(m_)); }
L_10307cfb:;
  /* 10307cfb cmp dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307cfe je 0x10307d23 */ if (ZF_) goto L_10307d23;
  /* 10307d00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307d01 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307d06u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307d01u); RETCHK(0x10307d06u, 0x10307d01u); LOADALL;
  /* 10307d06 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307d07 jmp 0x10307d23 */ goto L_10307d23;
L_10307d09:;
  /* 10307d09 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307d0c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307d0f push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307d12 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307d15 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307d18 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307d1b call dword ptr [0x103090e0] */ { const u32 m_ = (u32)(0x103090e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307d21u; SAVEALL; call_ind(c, t_); RETCHK(0x10307d21u, 0x10307d1bu); LOADALL; }
  /* 10307d21 mov esi, eax */ { esi = (u32)(eax); }
L_10307d23:;
  /* 10307d23 cmp dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307d26 je 0x10307d31 */ if (ZF_) goto L_10307d31;
  /* 10307d28 push dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307d2b call 0x10303326 */ esp -= 4; M32(esp) = 0x10307d30u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307d2bu); RETCHK(0x10307d30u, 0x10307d2bu); LOADALL;
  /* 10307d30 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307d31:;
  /* 10307d31 mov eax, esi */ { eax = (u32)(esi); }
L_10307d33:;
  /* 10307d33 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 10307d36 call 0x10303583 */ esp -= 4; M32(esp) = 0x10307d3bu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10307d36u); RETCHK(0x10307d3bu, 0x10307d36u); LOADALL;
  /* 10307d3b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307a76(CPU *c) {
  NATIVE_HOOK(0x10307a76u) REGS; LOADALL;
L_10307a76:;
  /* 10307a76 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307a78 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307a79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307a7a(CPU *c) {
  NATIVE_HOOK(0x10307a7au) REGS; LOADALL;
L_10307a7a:;
  /* 10307a7a mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10307a7d call 0x1030815e */ esp -= 4; M32(esp) = 0x10307a82u; SAVEALL; F_1030815e(c); ABI_CHECK(0x1030815eu, 0x10307a7du); RETCHK(0x10307a82u, 0x10307a7du); LOADALL;
  /* 10307a82 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10307a84 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 10307a87 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307a8b mov edi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edi = (u32)(M32(m_)); }
  /* 10307a8e mov esi, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); esi = (u32)(M32(m_)); }
  /* 10307a91 cmp dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307a94 jne 0x10307ab2 */ if (!ZF_) goto L_10307ab2;
  /* 10307a96 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 10307a99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307a9a call 0x10303744 */ esp -= 4; M32(esp) = 0x10307a9fu; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10307a9au); RETCHK(0x10307a9fu, 0x10307a9au); LOADALL;
  /* 10307a9f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307aa0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10307aa3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307aa5 je 0x10307c0b */ if (ZF_) goto L_10307c0b;
  /* 10307aab mov dword ptr [ebp - 0x38], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x1u); }
L_10307ab2:;
  /* 10307ab2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307ab3 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ab6 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ab9 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307abc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10307abe push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ac1 call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307ac7u; SAVEALL; call_ind(c, t_); RETCHK(0x10307ac7u, 0x10307ac1u); LOADALL; }
  /* 10307ac7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307ac9 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307acf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307ad0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307ad1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307ad2 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ad5 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ad8 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307adb call dword ptr [0x103090e4] */ { const u32 m_ = (u32)(0x103090e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307ae1u; SAVEALL; call_ind(c, t_); RETCHK(0x10307ae1u, 0x10307adbu); LOADALL; }
  /* 10307ae1 mov edi, eax */ { edi = (u32)(eax); }
  /* 10307ae3 mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 10307ae6 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ae8 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307aee test byte ptr [ebp + 0xd], 4 */ { const u32 m_ = (u32)(ebp + 0xdu); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10307af2 je 0x10307b21 */ if (ZF_) goto L_10307b21;
  /* 10307af4 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307af7 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307afd cmp edi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b00 jg 0x10307bb5 */ if (!(ZF_|LT_)) goto L_10307bb5;
  /* 10307b06 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b09 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b0c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307b0d push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b10 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b13 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b16 call dword ptr [0x103090e4] */ { const u32 m_ = (u32)(0x103090e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307b1cu; SAVEALL; call_ind(c, t_); RETCHK(0x10307b1cu, 0x10307b16u); LOADALL; }
  /* 10307b1c jmp 0x10307bb5 */ goto L_10307bb5;
L_10307b21:;
  /* 10307b21 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 10307b28 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10307b2b add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307b2e and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307b31 call 0x10304df0 */ esp -= 4; M32(esp) = 0x10307b36u; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x10307b31u); RETCHK(0x10307b36u, 0x10307b31u); LOADALL;
  /* 10307b36 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10307b39 mov eax, esp */ { eax = (u32)(esp); }
  /* 10307b3b mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10307b3e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307b42 jmp 0x10307b5f */ goto L_10307b5f;
L_10307b5f:;
  /* 10307b5f cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b62 jne 0x10307b7c */ if (!ZF_) goto L_10307b7c;
  /* 10307b64 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10307b67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307b68 call 0x10303744 */ esp -= 4; M32(esp) = 0x10307b6du; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10307b68u); RETCHK(0x10307b6du, 0x10307b68u); LOADALL;
  /* 10307b6d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307b6e mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10307b71 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b73 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307b75 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
L_10307b7c:;
  /* 10307b7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307b7d push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307b81 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b84 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b87 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b8a call dword ptr [0x103090e4] */ { const u32 m_ = (u32)(0x103090e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307b90u; SAVEALL; call_ind(c, t_); RETCHK(0x10307b90u, 0x10307b8au); LOADALL; }
  /* 10307b90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307b92 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307b94 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b95 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b96 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b99 jne 0x10307b9f */ if (!ZF_) goto L_10307b9f;
  /* 10307b9b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b9c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b9d jmp 0x10307ba5 */ goto L_10307ba5;
L_10307b9f:;
  /* 10307b9f push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ba2 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10307ba5:;
  /* 10307ba5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307ba6 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ba9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307baa push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bad call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307bb3u; SAVEALL; call_ind(c, t_); RETCHK(0x10307bb3u, 0x10307badu); LOADALL; }
  /* 10307bb3 mov edi, eax */ { edi = (u32)(eax); }
L_10307bb5:;
  /* 10307bb5 cmp dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307bb8 je 0x10307bc3 */ if (ZF_) goto L_10307bc3;
  /* 10307bba push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bbd call 0x10303326 */ esp -= 4; M32(esp) = 0x10307bc2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307bbdu); RETCHK(0x10307bc2u, 0x10307bbdu); LOADALL;
  /* 10307bc2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307bc3:;
  /* 10307bc3 cmp dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307bc6 je 0x10307bd1 */ if (ZF_) goto L_10307bd1;
  /* 10307bc8 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bcb call 0x10303326 */ esp -= 4; M32(esp) = 0x10307bd0u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307bcbu); RETCHK(0x10307bd0u, 0x10307bcbu); LOADALL;
  /* 10307bd0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307bd1:;
  /* 10307bd1 mov eax, edi */ { eax = (u32)(edi); }
  /* 10307bd3 jmp 0x10307d33 */ goto L_10307d33;
L_10307c0b:;
  /* 10307c0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307c0d jmp 0x10307d33 */ goto L_10307d33;
L_10307d33:;
  /* 10307d33 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 10307d36 call 0x10303583 */ esp -= 4; M32(esp) = 0x10307d3bu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10307d36u); RETCHK(0x10307d3bu, 0x10307d36u); LOADALL;
  /* 10307d3b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307b44(CPU *c) {
  NATIVE_HOOK(0x10307b44u) REGS; LOADALL;
L_10307b44:;
  /* 10307b44 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307b46 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307b47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307b48(CPU *c) {
  NATIVE_HOOK(0x10307b48u) REGS; LOADALL;
L_10307b48:;
  /* 10307b48 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10307b4b call 0x1030815e */ esp -= 4; M32(esp) = 0x10307b50u; SAVEALL; F_1030815e(c); ABI_CHECK(0x1030815eu, 0x10307b4bu); RETCHK(0x10307b50u, 0x10307b4bu); LOADALL;
  /* 10307b50 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10307b52 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 10307b55 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307b59 mov edi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edi = (u32)(M32(m_)); }
  /* 10307b5c mov esi, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); esi = (u32)(M32(m_)); }
  /* 10307b5f cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b62 jne 0x10307b7c */ if (!ZF_) goto L_10307b7c;
  /* 10307b64 lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 10307b67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307b68 call 0x10303744 */ esp -= 4; M32(esp) = 0x10307b6du; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10307b68u); RETCHK(0x10307b6du, 0x10307b68u); LOADALL;
  /* 10307b6d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307b6e mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10307b71 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b73 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307b75 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
L_10307b7c:;
  /* 10307b7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307b7d push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307b81 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b84 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b87 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307b8a call dword ptr [0x103090e4] */ { const u32 m_ = (u32)(0x103090e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307b90u; SAVEALL; call_ind(c, t_); RETCHK(0x10307b90u, 0x10307b8au); LOADALL; }
  /* 10307b90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307b92 je 0x10307bb5 */ if (ZF_) goto L_10307bb5;
  /* 10307b94 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b95 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b96 cmp dword ptr [ebp + 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307b99 jne 0x10307b9f */ if (!ZF_) goto L_10307b9f;
  /* 10307b9b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b9c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307b9d jmp 0x10307ba5 */ goto L_10307ba5;
L_10307b9f:;
  /* 10307b9f push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ba2 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10307ba5:;
  /* 10307ba5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307ba6 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ba9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307baa push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bad call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307bb3u; SAVEALL; call_ind(c, t_); RETCHK(0x10307bb3u, 0x10307badu); LOADALL; }
  /* 10307bb3 mov edi, eax */ { edi = (u32)(eax); }
L_10307bb5:;
  /* 10307bb5 cmp dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307bb8 je 0x10307bc3 */ if (ZF_) goto L_10307bc3;
  /* 10307bba push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bbd call 0x10303326 */ esp -= 4; M32(esp) = 0x10307bc2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307bbdu); RETCHK(0x10307bc2u, 0x10307bbdu); LOADALL;
  /* 10307bc2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307bc3:;
  /* 10307bc3 cmp dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307bc6 je 0x10307bd1 */ if (ZF_) goto L_10307bd1;
  /* 10307bc8 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307bcb call 0x10303326 */ esp -= 4; M32(esp) = 0x10307bd0u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307bcbu); RETCHK(0x10307bd0u, 0x10307bcbu); LOADALL;
  /* 10307bd0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307bd1:;
  /* 10307bd1 mov eax, edi */ { eax = (u32)(edi); }
  /* 10307bd3 jmp 0x10307d33 */ goto L_10307d33;
L_10307d33:;
  /* 10307d33 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 10307d36 call 0x10303583 */ esp -= 4; M32(esp) = 0x10307d3bu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10307d36u); RETCHK(0x10307d3bu, 0x10307d36u); LOADALL;
  /* 10307d3b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307c79(CPU *c) {
  NATIVE_HOOK(0x10307c79u) REGS; LOADALL;
L_10307c79:;
  /* 10307c79 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307c7b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307c7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307c7d(CPU *c) {
  NATIVE_HOOK(0x10307c7du) REGS; LOADALL;
L_10307c7d:;
  /* 10307c7d mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10307c80 call 0x1030815e */ esp -= 4; M32(esp) = 0x10307c85u; SAVEALL; F_1030815e(c); ABI_CHECK(0x1030815eu, 0x10307c80u); RETCHK(0x10307c85u, 0x10307c80u); LOADALL;
  /* 10307c85 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10307c87 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10307c89 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307c8d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307c8f jne 0x10307cb4 */ if (!ZF_) goto L_10307cb4;
  /* 10307c91 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307c94 call 0x10303744 */ esp -= 4; M32(esp) = 0x10307c99u; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10307c94u); RETCHK(0x10307c99u, 0x10307c94u); LOADALL;
  /* 10307c99 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307c9a mov edi, eax */ { edi = (u32)(eax); }
  /* 10307c9c cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307c9e je 0x10307cd1 */ if (ZF_) goto L_10307cd1;
  /* 10307ca0 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ca3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307ca4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307ca5 call 0x10306f20 */ esp -= 4; M32(esp) = 0x10307caau; SAVEALL; F_10306f20(c); ABI_CHECK(0x10306f20u, 0x10307ca5u); RETCHK(0x10307caau, 0x10307ca5u); LOADALL;
  /* 10307caa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307cad mov dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x1u); }
L_10307cb4:;
  /* 10307cb4 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cb7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307cb8 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cbb push dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cbe push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cc1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cc4 call dword ptr [0x103090e0] */ { const u32 m_ = (u32)(0x103090e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307ccau; SAVEALL; call_ind(c, t_); RETCHK(0x10307ccau, 0x10307cc4u); LOADALL; }
  /* 10307cca mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 10307ccd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ccf jne 0x10307cd5 */ if (!ZF_) goto L_10307cd5;
L_10307cd1:;
  /* 10307cd1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10307cd3 jmp 0x10307cfb */ goto L_10307cfb;
L_10307cd5:;
  /* 10307cd5 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cd8 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307cdb lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 10307cde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307cdf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307ce0 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ce3 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307ce6 call 0x1030830c */ esp -= 4; M32(esp) = 0x10307cebu; SAVEALL; F_1030830c(c); ABI_CHECK(0x1030830cu, 0x10307ce6u); RETCHK(0x10307cebu, 0x10307ce6u); LOADALL;
  /* 10307ceb add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307cee mov esi, eax */ { esi = (u32)(eax); }
  /* 10307cf0 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10307cf2 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 10307cf4 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10307cf6 jmp 0x10307cfb */ goto L_10307cfb;
L_10307cfb:;
  /* 10307cfb cmp dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307cfe je 0x10307d23 */ if (ZF_) goto L_10307d23;
  /* 10307d00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307d01 call 0x10303326 */ esp -= 4; M32(esp) = 0x10307d06u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307d01u); RETCHK(0x10307d06u, 0x10307d01u); LOADALL;
  /* 10307d06 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307d07 jmp 0x10307d23 */ goto L_10307d23;
L_10307d23:;
  /* 10307d23 cmp dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307d26 je 0x10307d31 */ if (ZF_) goto L_10307d31;
  /* 10307d28 push dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307d2b call 0x10303326 */ esp -= 4; M32(esp) = 0x10307d30u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307d2bu); RETCHK(0x10307d30u, 0x10307d2bu); LOADALL;
  /* 10307d30 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307d31:;
  /* 10307d31 mov eax, esi */ { eax = (u32)(esi); }
  /* 10307d33 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 10307d36 call 0x10303583 */ esp -= 4; M32(esp) = 0x10307d3bu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10307d36u); RETCHK(0x10307d3bu, 0x10307d36u); LOADALL;
  /* 10307d3b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307d3c(CPU *c) {
  NATIVE_HOOK(0x10307d3cu) REGS; LOADALL;
L_10307d3c:;
  /* 10307d3c mov ecx, dword ptr [0x1030b124] */ { const u32 m_ = (u32)(0x1030b124u); ecx = (u32)(M32(m_)); }
  /* 10307d42 mov eax, edx */ { eax = (u32)(edx); }
  /* 10307d44 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_10307d45:;
  /* 10307d45 cmp dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307d48 je 0x10307d57 */ if (ZF_) goto L_10307d57;
  /* 10307d4a lea edi, [ecx + ecx*2] */ edi = (u32)((u32)(ecx + ecx * 2u));
  /* 10307d4d add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307d50 lea edi, [edx + edi*4] */ edi = (u32)((u32)(edx + edi * 4u));
  /* 10307d53 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307d55 jb 0x10307d45 */ if (CF_) goto L_10307d45;
L_10307d57:;
  /* 10307d57 lea ecx, [ecx + ecx*2] */ ecx = (u32)((u32)(ecx + ecx * 2u));
  /* 10307d5a lea ecx, [edx + ecx*4] */ ecx = (u32)((u32)(edx + ecx * 4u));
  /* 10307d5d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307d5f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307d60 jae 0x10307d67 */ if (!CF_) goto L_10307d67;
  /* 10307d62 cmp dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307d65 je 0x10307d69 */ if (ZF_) goto L_10307d69;
L_10307d67:;
  /* 10307d67 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10307d69:;
  /* 10307d69 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307d6a(CPU *c) {
  NATIVE_HOOK(0x10307d6au) REGS; LOADALL;
L_10307d6a:;
  /* 10307d6a push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10307d6c push 0x1030a140 */ { u32 v_ = 0x1030a140u; esp -= 4; M32(esp) = v_; }
  /* 10307d71 call 0x10303548 */ esp -= 4; M32(esp) = 0x10307d76u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10307d71u); RETCHK(0x10307d76u, 0x10307d71u); LOADALL;
  /* 10307d76 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10307d78 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 10307d7b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307d7e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10307d7f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10307d80 je 0x10307dec */ if (ZF_) goto L_10307dec;
  /* 10307d82 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10307d83 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10307d84 je 0x10307dcc */ if (ZF_) goto L_10307dcc;
  /* 10307d86 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307d89 je 0x10307dcc */ if (ZF_) goto L_10307dcc;
  /* 10307d8b sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307d8e je 0x10307dcc */ if (ZF_) goto L_10307dcc;
  /* 10307d90 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307d93 je 0x10307dbf */ if (ZF_) goto L_10307dbf;
  /* 10307d95 sub eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307d98 je 0x10307db2 */ if (ZF_) goto L_10307db2;
  /* 10307d9a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10307d9b je 0x10307da5 */ if (ZF_) goto L_10307da5;
  /* 10307d9d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307da0 jmp 0x10307edd */ goto L_10307edd;
L_10307da5:;
  /* 10307da5 mov esi, 0x1030bd00 */ { esi = (u32)(0x1030bd00u); }
  /* 10307daa mov edi, dword ptr [0x1030bd00] */ { const u32 m_ = (u32)(0x1030bd00u); edi = (u32)(M32(m_)); }
  /* 10307db0 jmp 0x10307df7 */ goto L_10307df7;
L_10307db2:;
  /* 10307db2 mov esi, 0x1030bcfc */ { esi = (u32)(0x1030bcfcu); }
  /* 10307db7 mov edi, dword ptr [0x1030bcfc] */ { const u32 m_ = (u32)(0x1030bcfcu); edi = (u32)(M32(m_)); }
  /* 10307dbd jmp 0x10307df7 */ goto L_10307df7;
L_10307dbf:;
  /* 10307dbf mov esi, 0x1030bd04 */ { esi = (u32)(0x1030bd04u); }
  /* 10307dc4 mov edi, dword ptr [0x1030bd04] */ { const u32 m_ = (u32)(0x1030bd04u); edi = (u32)(M32(m_)); }
  /* 10307dca jmp 0x10307df7 */ goto L_10307df7;
L_10307dcc:;
  /* 10307dcc call 0x10304039 */ esp -= 4; M32(esp) = 0x10307dd1u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10307dccu); RETCHK(0x10307dd1u, 0x10307dccu); LOADALL;
  /* 10307dd1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10307dd3 mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 10307dd6 mov edx, dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); edx = (u32)(M32(m_)); }
  /* 10307dd9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10307ddc call 0x10307d3c */ esp -= 4; M32(esp) = 0x10307de1u; SAVEALL; F_10307d3c(c); ABI_CHECK(0x10307d3cu, 0x10307ddcu); RETCHK(0x10307de1u, 0x10307ddcu); LOADALL;
  /* 10307de1 mov esi, eax */ { esi = (u32)(eax); }
  /* 10307de3 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307de6 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 10307de8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10307dea jmp 0x10307e01 */ goto L_10307e01;
L_10307dec:;
  /* 10307dec mov esi, 0x1030bcf8 */ { esi = (u32)(0x1030bcf8u); }
  /* 10307df1 mov edi, dword ptr [0x1030bcf8] */ { const u32 m_ = (u32)(0x1030bcf8u); edi = (u32)(M32(m_)); }
L_10307df7:;
  /* 10307df7 mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 10307dfe mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
L_10307e01:;
  /* 10307e01 mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 10307e04 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e07 je 0x10307edb */ if (ZF_) goto L_10307edb;
  /* 10307e0d cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e0f jne 0x10307e18 */ if (!ZF_) goto L_10307e18;
  /* 10307e11 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10307e13 call 0x10304553 */ esp -= 4; M32(esp) = 0x10307e18u; SAVEALL; F_10304553(c); ABI_CHECK(0x10304553u, 0x10307e13u); RETCHK(0x10307e18u, 0x10307e13u); LOADALL;
L_10307e18:;
  /* 10307e18 cmp dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e1b je 0x10307e26 */ if (ZF_) goto L_10307e26;
  /* 10307e1d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10307e1e call 0x103052af */ esp -= 4; M32(esp) = 0x10307e23u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x10307e1eu); RETCHK(0x10307e23u, 0x10307e1eu); LOADALL;
  /* 10307e23 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307e24 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_10307e26:;
  /* 10307e26 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10307e29 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307e2c cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e2f je 0x10307e3b */ if (ZF_) goto L_10307e3b;
  /* 10307e31 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e34 je 0x10307e3b */ if (ZF_) goto L_10307e3b;
  /* 10307e36 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e39 jne 0x10307e56 */ if (!ZF_) goto L_10307e56;
L_10307e3b:;
  /* 10307e3b mov edx, dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); edx = (u32)(M32(m_)); }
  /* 10307e3e mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 10307e41 mov dword ptr [ebx + 0x58], ecx */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(ecx); }
  /* 10307e44 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e47 jne 0x10307e82 */ if (!ZF_) goto L_10307e82;
  /* 10307e49 mov edx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); edx = (u32)(M32(m_)); }
  /* 10307e4c mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 10307e4f mov dword ptr [ebx + 0x5c], 0x8c */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(0x8cu); }
L_10307e56:;
  /* 10307e56 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e59 jne 0x10307e82 */ if (!ZF_) goto L_10307e82;
  /* 10307e5b mov eax, dword ptr [0x1030b118] */ { const u32 m_ = (u32)(0x1030b118u); eax = (u32)(M32(m_)); }
L_10307e60:;
  /* 10307e60 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10307e63 mov edx, dword ptr [0x1030b11c] */ { const u32 m_ = (u32)(0x1030b11cu); edx = (u32)(M32(m_)); }
  /* 10307e69 mov esi, dword ptr [0x1030b118] */ { const u32 m_ = (u32)(0x1030b118u); esi = (u32)(M32(m_)); }
  /* 10307e6f add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10307e71 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e73 jge 0x10307e84 */ if (!LT_) goto L_10307e84;
  /* 10307e75 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 10307e78 mov esi, dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); esi = (u32)(M32(m_)); }
  /* 10307e7b mov dword ptr [esi + edx*4 + 8], ecx */ { const u32 m_ = (u32)(esi + edx * 4u + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10307e7f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307e80 jmp 0x10307e60 */ goto L_10307e60;
L_10307e82:;
  /* 10307e82 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
L_10307e84:;
  /* 10307e84 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307e88 call 0x10307ea5 */ esp -= 4; M32(esp) = 0x10307e8du; SAVEALL; F_10307ea5(c); ABI_CHECK(0x10307ea5u, 0x10307e88u); RETCHK(0x10307e8du, 0x10307e88u); LOADALL;
  /* 10307e8d cmp dword ptr [ebp + 8], 8 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307e91 jne 0x10307eb2 */ if (!ZF_) goto L_10307eb2;
  /* 10307e93 push dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307e96 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10307e98 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10307e9au; SAVEALL; call_ind(c, t_); RETCHK(0x10307e9au, 0x10307e98u); LOADALL; }
  /* 10307e9a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307e9b jmp 0x10307eb7 */ goto L_10307eb7;
L_10307eb2:;
  /* 10307eb2 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307eb5 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10307eb7u; SAVEALL; call_ind(c, t_); RETCHK(0x10307eb7u, 0x10307eb5u); LOADALL; }
L_10307eb7:;
  /* 10307eb7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307eb8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307ebb cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ebe je 0x10307eca */ if (ZF_) goto L_10307eca;
  /* 10307ec0 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ec3 je 0x10307eca */ if (ZF_) goto L_10307eca;
  /* 10307ec5 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ec8 jne 0x10307edb */ if (!ZF_) goto L_10307edb;
L_10307eca:;
  /* 10307eca mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 10307ecd mov dword ptr [ebx + 0x58], ecx */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(ecx); }
  /* 10307ed0 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ed3 jne 0x10307edb */ if (!ZF_) goto L_10307edb;
  /* 10307ed5 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 10307ed8 mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
L_10307edb:;
  /* 10307edb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10307edd:;
  /* 10307edd call 0x10303583 */ esp -= 4; M32(esp) = 0x10307ee2u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10307eddu); RETCHK(0x10307ee2u, 0x10307eddu); LOADALL;
  /* 10307ee2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307e9d(CPU *c) {
  NATIVE_HOOK(0x10307e9du) REGS; LOADALL;
L_10307e9d:;
  /* 10307e9d mov edi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edi = (u32)(M32(m_)); }
  /* 10307ea0 mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
  /* 10307ea3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10307ea5 cmp dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ea8 je 0x10307eb1 */ if (ZF_) goto L_10307eb1;
  /* 10307eaa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10307eab call 0x103051fa */ esp -= 4; M32(esp) = 0x10307eb0u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10307eabu); RETCHK(0x10307eb0u, 0x10307eabu); LOADALL;
  /* 10307eb0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307eb1:;
  /* 10307eb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307ea5(CPU *c) {
  NATIVE_HOOK(0x10307ea5u) REGS; LOADALL;
L_10307ea5:;
  /* 10307ea5 cmp dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ea8 je 0x10307eb1 */ if (ZF_) goto L_10307eb1;
  /* 10307eaa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10307eab call 0x103051fa */ esp -= 4; M32(esp) = 0x10307eb0u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10307eabu); RETCHK(0x10307eb0u, 0x10307eabu); LOADALL;
  /* 10307eb0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10307eb1:;
  /* 10307eb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307ee3(CPU *c) {
  NATIVE_HOOK(0x10307ee3u) REGS; LOADALL;
L_10307ee3:;
  /* 10307ee3 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 10307ee5 push 0x1030a150 */ { u32 v_ = 0x1030a150u; esp -= 4; M32(esp) = v_; }
  /* 10307eea call 0x10303548 */ esp -= 4; M32(esp) = 0x10307eefu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10307eeau); RETCHK(0x10307eefu, 0x10307eeau); LOADALL;
  /* 10307eef mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10307ef2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10307ef4 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307ef6 jne 0x10307f06 */ if (!ZF_) goto L_10307f06;
  /* 10307ef8 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307efb call 0x10303744 */ esp -= 4; M32(esp) = 0x10307f00u; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10307efbu); RETCHK(0x10307f00u, 0x10307efbu); LOADALL;
  /* 10307f00 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307f01 jmp 0x1030808a */ goto L_1030808a;
L_10307f06:;
  /* 10307f06 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10307f09 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307f0b jne 0x10307f19 */ if (!ZF_) goto L_10307f19;
  /* 10307f0d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307f0e call 0x10303326 */ esp -= 4; M32(esp) = 0x10307f13u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10307f0eu); RETCHK(0x10307f13u, 0x10307f0eu); LOADALL;
  /* 10307f13 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307f14 jmp 0x10308088 */ goto L_10308088;
L_10307f19:;
  /* 10307f19 cmp dword ptr [0x1030c040], 3 */ { const u32 m_ = (u32)(0x1030c040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307f20 jne 0x10308054 */ if (!ZF_) goto L_10308054;
L_10307f26:;
  /* 10307f26 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 10307f29 cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307f2c ja 0x10308023 */ if (!(CF_|ZF_)) goto L_10308023;
  /* 10307f32 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10307f34 call 0x103052af */ esp -= 4; M32(esp) = 0x10307f39u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x10307f34u); RETCHK(0x10307f39u, 0x10307f34u); LOADALL;
  /* 10307f39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307f3a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 10307f3d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307f3e call 0x10305328 */ esp -= 4; M32(esp) = 0x10307f43u; SAVEALL; F_10305328(c); ABI_CHECK(0x10305328u, 0x10307f3eu); RETCHK(0x10307f43u, 0x10307f3eu); LOADALL;
  /* 10307f43 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307f44 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10307f47 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307f49 je 0x10307ff3 */ if (ZF_) goto L_10307ff3;
  /* 10307f4f cmp esi, dword ptr [0x1030c02c] */ { const u32 m_ = (u32)(0x1030c02cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307f55 ja 0x10307fa3 */ if (!(CF_|ZF_)) goto L_10307fa3;
  /* 10307f57 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307f58 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307f59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307f5a call 0x10305828 */ esp -= 4; M32(esp) = 0x10307f5fu; SAVEALL; F_10305828(c); ABI_CHECK(0x10305828u, 0x10307f5au); RETCHK(0x10307f5fu, 0x10307f5au); LOADALL;
  /* 10307f5f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10307f62 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307f64 je 0x10307f6b */ if (ZF_) goto L_10307f6b;
  /* 10307f66 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 10307f69 jmp 0x10307fa3 */ goto L_10307fa3;
L_10307f6b:;
  /* 10307f6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307f6c call 0x10305b07 */ esp -= 4; M32(esp) = 0x10307f71u; SAVEALL; F_10305b07(c); ABI_CHECK(0x10305b07u, 0x10307f6cu); RETCHK(0x10307f71u, 0x10307f6cu); LOADALL;
  /* 10307f71 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10307f72 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10307f75 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307f77 je 0x10307fa3 */ if (ZF_) goto L_10307fa3;
  /* 10307f79 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307f7c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10307f7d mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 10307f80 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307f82 jb 0x10307f86 */ if (CF_) goto L_10307f86;
  /* 10307f84 mov eax, esi */ { eax = (u32)(esi); }
L_10307f86:;
  /* 10307f86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307f87 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307f88 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307f8b call 0x10307020 */ esp -= 4; M32(esp) = 0x10307f90u; SAVEALL; F_10307020(c); ABI_CHECK(0x10307020u, 0x10307f8bu); RETCHK(0x10307f90u, 0x10307f8bu); LOADALL;
  /* 10307f90 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307f91 call 0x10305328 */ esp -= 4; M32(esp) = 0x10307f96u; SAVEALL; F_10305328(c); ABI_CHECK(0x10305328u, 0x10307f91u); RETCHK(0x10307f96u, 0x10307f91u); LOADALL;
  /* 10307f96 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10307f99 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307f9a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307f9b call 0x10305353 */ esp -= 4; M32(esp) = 0x10307fa0u; SAVEALL; F_10305353(c); ABI_CHECK(0x10305353u, 0x10307f9bu); RETCHK(0x10307fa0u, 0x10307f9bu); LOADALL;
  /* 10307fa0 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10307fa3:;
  /* 10307fa3 cmp dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307fa6 jne 0x10307ff3 */ if (!ZF_) goto L_10307ff3;
  /* 10307fa8 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307faa jne 0x10307fb2 */ if (!ZF_) goto L_10307fb2;
  /* 10307fac xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10307fae inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307faf mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
L_10307fb2:;
  /* 10307fb2 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307fb5 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10307fb8 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10307fbb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307fbc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10307fbd push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307fc3 call dword ptr [0x10309030] */ { const u32 m_ = (u32)(0x10309030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10307fc9u; SAVEALL; call_ind(c, t_); RETCHK(0x10307fc9u, 0x10307fc3u); LOADALL; }
  /* 10307fc9 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10307fcc cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307fce je 0x10307ff3 */ if (ZF_) goto L_10307ff3;
  /* 10307fd0 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307fd3 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10307fd4 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 10307fd7 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307fd9 jb 0x10307fdd */ if (CF_) goto L_10307fdd;
  /* 10307fdb mov eax, esi */ { eax = (u32)(esi); }
L_10307fdd:;
  /* 10307fdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10307fde push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307fdf push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307fe2 call 0x10307020 */ esp -= 4; M32(esp) = 0x10307fe7u; SAVEALL; F_10307020(c); ABI_CHECK(0x10307020u, 0x10307fe2u); RETCHK(0x10307fe7u, 0x10307fe2u); LOADALL;
  /* 10307fe7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307fe8 push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10307feb call 0x10305353 */ esp -= 4; M32(esp) = 0x10307ff0u; SAVEALL; F_10305353(c); ABI_CHECK(0x10305353u, 0x10307febu); RETCHK(0x10307ff0u, 0x10307febu); LOADALL;
  /* 10307ff0 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10307ff3:;
  /* 10307ff3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307ff7 call 0x1030804b */ esp -= 4; M32(esp) = 0x10307ffcu; SAVEALL; F_1030804b(c); ABI_CHECK(0x1030804bu, 0x10307ff7u); RETCHK(0x10307ffcu, 0x10307ff7u); LOADALL;
  /* 10307ffc cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307fff jne 0x10308023 */ if (!ZF_) goto L_10308023;
  /* 10308001 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308003 jne 0x10308008 */ if (!ZF_) goto L_10308008;
  /* 10308005 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10308007 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10308008:;
  /* 10308008 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1030800b and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1030800e mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10308011 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308012 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308013 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308014 push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030801a call dword ptr [0x103090a0] */ { const u32 m_ = (u32)(0x103090a0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10308020u; SAVEALL; call_ind(c, t_); RETCHK(0x10308020u, 0x1030801au); LOADALL; }
  /* 10308020 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10308023:;
  /* 10308023 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10308026 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308028 jne 0x1030808a */ if (!ZF_) goto L_1030808a;
  /* 1030802a cmp dword ptr [0x1030bc60], ebx */ { const u32 m_ = (u32)(0x1030bc60u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308030 je 0x1030808a */ if (ZF_) goto L_1030808a;
  /* 10308032 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308033 call 0x103062b4 */ esp -= 4; M32(esp) = 0x10308038u; SAVEALL; F_103062b4(c); ABI_CHECK(0x103062b4u, 0x10308033u); RETCHK(0x10308038u, 0x10308033u); LOADALL;
  /* 10308038 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308039 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030803b jne 0x10307f26 */ if (!ZF_) goto L_10307f26;
  /* 10308041 jmp 0x10308088 */ goto L_10308088;
L_10308054:;
  /* 10308054 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10308056 cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308059 ja 0x10308071 */ if (!(CF_|ZF_)) goto L_10308071;
  /* 1030805b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030805d jne 0x10308062 */ if (!ZF_) goto L_10308062;
  /* 1030805f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10308061 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10308062:;
  /* 10308062 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308063 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308064 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308065 push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030806b call dword ptr [0x103090a0] */ { const u32 m_ = (u32)(0x103090a0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10308071u; SAVEALL; call_ind(c, t_); RETCHK(0x10308071u, 0x1030806bu); LOADALL; }
L_10308071:;
  /* 10308071 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308073 jne 0x1030808a */ if (!ZF_) goto L_1030808a;
  /* 10308075 cmp dword ptr [0x1030bc60], ebx */ { const u32 m_ = (u32)(0x1030bc60u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030807b je 0x1030808a */ if (ZF_) goto L_1030808a;
  /* 1030807d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030807e call 0x103062b4 */ esp -= 4; M32(esp) = 0x10308083u; SAVEALL; F_103062b4(c); ABI_CHECK(0x103062b4u, 0x1030807eu); RETCHK(0x10308083u, 0x1030807eu); LOADALL;
  /* 10308083 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308084 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10308086 jne 0x10308054 */ if (!ZF_) goto L_10308054;
L_10308088:;
  /* 10308088 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1030808a:;
  /* 1030808a call 0x10303583 */ esp -= 4; M32(esp) = 0x1030808fu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x1030808au); RETCHK(0x1030808fu, 0x1030808au); LOADALL;
  /* 1030808f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10308043(CPU *c) {
  NATIVE_HOOK(0x10308043u) REGS; LOADALL;
L_10308043:;
  /* 10308043 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10308045 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10308048 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1030804b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1030804d call 0x103051fa */ esp -= 4; M32(esp) = 0x10308052u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x1030804du); RETCHK(0x10308052u, 0x1030804du); LOADALL;
  /* 10308052 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308053 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030804b(CPU *c) {
  NATIVE_HOOK(0x1030804bu) REGS; LOADALL;
L_1030804b:;
  /* 1030804b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1030804d call 0x103051fa */ esp -= 4; M32(esp) = 0x10308052u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x1030804du); RETCHK(0x10308052u, 0x1030804du); LOADALL;
  /* 10308052 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308053 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10308090(CPU *c) {
  NATIVE_HOOK(0x10308090u) REGS; LOADALL;
L_10308090:;
  /* 10308090 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10308092 push 0x1030a160 */ { u32 v_ = 0x1030a160u; esp -= 4; M32(esp) = v_; }
  /* 10308097 call 0x10303548 */ esp -= 4; M32(esp) = 0x1030809cu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10308097u); RETCHK(0x1030809cu, 0x10308097u); LOADALL;
  /* 1030809c cmp dword ptr [0x1030c040], 3 */ { const u32 m_ = (u32)(0x1030c040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103080a3 jne 0x103080df */ if (!ZF_) goto L_103080df;
  /* 103080a5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 103080a7 call 0x103052af */ esp -= 4; M32(esp) = 0x103080acu; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x103080a7u); RETCHK(0x103080acu, 0x103080a7u); LOADALL;
  /* 103080ac pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103080ad and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103080b1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 103080b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103080b5 call 0x10305328 */ esp -= 4; M32(esp) = 0x103080bau; SAVEALL; F_10305328(c); ABI_CHECK(0x10305328u, 0x103080b5u); RETCHK(0x103080bau, 0x103080b5u); LOADALL;
  /* 103080ba pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103080bb mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 103080be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103080c0 je 0x103080cd */ if (ZF_) goto L_103080cd;
  /* 103080c2 mov esi, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 103080c5 sub esi, 9 */ { u32 a_ = esi, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103080c8 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 103080cb jmp 0x103080d0 */ goto L_103080d0;
L_103080cd:;
  /* 103080cd mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
L_103080d0:;
  /* 103080d0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103080d4 call 0x103080fd */ esp -= 4; M32(esp) = 0x103080d9u; SAVEALL; F_103080fd(c); ABI_CHECK(0x103080fdu, 0x103080d4u); RETCHK(0x103080d9u, 0x103080d4u); LOADALL;
  /* 103080d9 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103080dd jne 0x103080f2 */ if (!ZF_) goto L_103080f2;
L_103080df:;
  /* 103080df push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103080e2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103080e4 push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103080ea call dword ptr [0x103090e8] */ { const u32 m_ = (u32)(0x103090e8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103080f0u; SAVEALL; call_ind(c, t_); RETCHK(0x103080f0u, 0x103080eau); LOADALL; }
  /* 103080f0 mov esi, eax */ { esi = (u32)(eax); }
L_103080f2:;
  /* 103080f2 mov eax, esi */ { eax = (u32)(esi); }
  /* 103080f4 call 0x10303583 */ esp -= 4; M32(esp) = 0x103080f9u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103080f4u); RETCHK(0x103080f9u, 0x103080f4u); LOADALL;
  /* 103080f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103080fa(CPU *c) {
  NATIVE_HOOK(0x103080fau) REGS; LOADALL;
L_103080fa:;
  /* 103080fa mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 103080fd push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 103080ff call 0x103051fa */ esp -= 4; M32(esp) = 0x10308104u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x103080ffu); RETCHK(0x10308104u, 0x103080ffu); LOADALL;
  /* 10308104 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308105 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103080fd(CPU *c) {
  NATIVE_HOOK(0x103080fdu) REGS; LOADALL;
L_103080fd:;
  /* 103080fd push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 103080ff call 0x103051fa */ esp -= 4; M32(esp) = 0x10308104u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x103080ffu); RETCHK(0x10308104u, 0x103080ffu); LOADALL;
  /* 10308104 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308105 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030815e(CPU *c) {
  NATIVE_HOOK(0x1030815eu) REGS; LOADALL;
L_1030815e:;
  /* 1030815e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1030815f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10308161 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10308164 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308165 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308166 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308167 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10308169 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 1030816a call 0x10304df0 */ esp -= 4; M32(esp) = 0x1030816fu; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x1030816au); RETCHK(0x1030816fu, 0x1030816au); LOADALL;
  /* 1030816f mov esi, esp */ { esi = (u32)(esp); }
  /* 10308171 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 10308173 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10308176 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10308177 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308178 call dword ptr [0x103090b0] */ { const u32 m_ = (u32)(0x103090b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030817eu; SAVEALL; call_ind(c, t_); RETCHK(0x1030817eu, 0x10308178u); LOADALL; }
  /* 1030817e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10308180 je 0x103081f9 */ if (ZF_) goto L_103081f9;
  /* 10308182 mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
  /* 10308185 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10308188 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10308189 call dword ptr [0x103090f0] */ { const u32 m_ = (u32)(0x103090f0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030818fu; SAVEALL; call_ind(c, t_); RETCHK(0x1030818fu, 0x10308189u); LOADALL; }
  /* 1030818f mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 10308192 mov eax, dword ptr [0x1030b950] */ { const u32 m_ = (u32)(0x1030b950u); eax = (u32)(M32(m_)); }
  /* 10308197 lea edi, [ecx - 1] */ edi = (u32)((u32)(ecx + 0xffffffffu));
  /* 1030819a not edi */ { edi = (u32)(~edi & 0xffffffffu); }
  /* 1030819c and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1030819e sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103081a0 mov esi, eax */ { esi = (u32)(eax); }
  /* 103081a2 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103081a3 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103081a5 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 103081a7 and esi, 0xfffffff1 */ { u32 a_ = esi, b_ = 0xfffffff1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103081aa add esi, 0x11 */ { u32 a_ = esi, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103081ad imul esi, ecx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 103081b0 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103081b2 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103081b4 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 103081b7 jb 0x103081f9 */ if (CF_) goto L_103081f9;
  /* 103081b9 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103081bc je 0x1030821a */ if (ZF_) goto L_1030821a;
  /* 103081be mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 103081c1 mov ebx, 0x1000 */ { ebx = (u32)(0x1000u); }
L_103081c6:;
  /* 103081c6 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 103081c8 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 103081cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103081cc push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103081cf call dword ptr [0x103090b0] */ { const u32 m_ = (u32)(0x103090b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103081d5u; SAVEALL; call_ind(c, t_); RETCHK(0x103081d5u, 0x103081cfu); LOADALL; }
  /* 103081d5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103081d7 je 0x103081f9 */ if (ZF_) goto L_103081f9;
  /* 103081d9 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 103081dc add dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 103081df test dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103081e2 je 0x103081c6 */ if (ZF_) goto L_103081c6;
  /* 103081e4 test byte ptr [ebp - 0x13], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffedu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 103081e8 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 103081eb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 103081ee je 0x103081f5 */ if (ZF_) goto L_103081f5;
  /* 103081f0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103081f2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103081f3 jmp 0x10308239 */ goto L_10308239;
L_103081f5:;
  /* 103081f5 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103081f7 jae 0x103081fd */ if (!CF_) goto L_103081fd;
L_103081f9:;
  /* 103081f9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103081fb jmp 0x10308239 */ goto L_10308239;
L_103081fd:;
  /* 103081fd cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103081ff jae 0x10308204 */ if (!CF_) goto L_10308204;
  /* 10308201 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
L_10308204:;
  /* 10308204 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10308206 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308207 push dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030820a push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030820d call dword ptr [0x1030909c] */ { const u32 m_ = (u32)(0x1030909cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10308213u; SAVEALL; call_ind(c, t_); RETCHK(0x10308213u, 0x1030820du); LOADALL; }
  /* 10308213 mov eax, dword ptr [0x1030b950] */ { const u32 m_ = (u32)(0x1030b950u); eax = (u32)(M32(m_)); }
  /* 10308218 jmp 0x1030821d */ goto L_1030821d;
L_1030821a:;
  /* 1030821a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
L_1030821d:;
  /* 1030821d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030821e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10308220 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10308222 and eax, 0x103 */ { u32 a_ = eax, b_ = 0x103u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10308227 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 1030822a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030822b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030822c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030822d push dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308230 push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308233 call dword ptr [0x103090ec] */ { const u32 m_ = (u32)(0x103090ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10308239u; SAVEALL; call_ind(c, t_); RETCHK(0x10308239u, 0x10308233u); LOADALL; }
L_10308239:;
  /* 10308239 lea esp, [ebp - 0x58] */ esp = (u32)((u32)(ebp + 0xffffffa8u));
  /* 1030823c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030823d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030823e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1030823f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10308240 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10308241(CPU *c) {
  NATIVE_HOOK(0x10308241u) REGS; LOADALL;
L_10308241:;
  /* 10308241 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308242 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308243 call 0x10304039 */ esp -= 4; M32(esp) = 0x10308248u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10308243u); RETCHK(0x10308248u, 0x10308243u); LOADALL;
  /* 10308248 mov edi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); edi = (u32)(M32(m_)); }
  /* 1030824b cmp edi, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308251 je 0x1030825a */ if (ZF_) goto L_1030825a;
  /* 10308253 call 0x103068ee */ esp -= 4; M32(esp) = 0x10308258u; SAVEALL; F_103068ee(c); ABI_CHECK(0x103068eeu, 0x10308253u); RETCHK(0x10308258u, 0x10308253u); LOADALL;
  /* 10308258 mov edi, eax */ { edi = (u32)(eax); }
L_1030825a:;
  /* 1030825a mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
L_1030825e:;
  /* 1030825e cmp dword ptr [edi + 0x28], 1 */ { const u32 m_ = (u32)(edi + 0x28u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308262 movzx eax, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M8(m_)); }
  /* 10308265 jle 0x10308275 */ if ((ZF_|LT_)) goto L_10308275;
  /* 10308267 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10308269 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030826a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030826b call 0x103084d5 */ esp -= 4; M32(esp) = 0x10308270u; SAVEALL; F_103084d5(c); ABI_CHECK(0x103084d5u, 0x1030826bu); RETCHK(0x10308270u, 0x1030826bu); LOADALL;
  /* 10308270 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10308273 jmp 0x1030827f */ goto L_1030827f;
L_10308275:;
  /* 10308275 mov ecx, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 10308278 movzx eax, byte ptr [ecx + eax*2] */ { const u32 m_ = (u32)(ecx + eax * 2u); eax = (u32)(M8(m_)); }
  /* 1030827c and eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1030827f:;
  /* 1030827f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10308281 je 0x10308286 */ if (ZF_) goto L_10308286;
  /* 10308283 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10308284 jmp 0x1030825e */ goto L_1030825e;
L_10308286:;
  /* 10308286 movzx ecx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M8(m_)); }
  /* 10308289 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030828a cmp ecx, 0x2d */ { u32 a_ = ecx, b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030828d mov edx, ecx */ { edx = (u32)(ecx); }
  /* 1030828f je 0x10308296 */ if (ZF_) goto L_10308296;
  /* 10308291 cmp ecx, 0x2b */ { u32 a_ = ecx, b_ = 0x2bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308294 jne 0x1030829a */ if (!ZF_) goto L_1030829a;
L_10308296:;
  /* 10308296 movzx ecx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M8(m_)); }
  /* 10308299 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030829a:;
  /* 1030829a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1030829c:;
  /* 1030829c cmp ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030829f jl 0x103082ab */ if (LT_) goto L_103082ab;
  /* 103082a1 cmp ecx, 0x39 */ { u32 a_ = ecx, b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103082a4 jg 0x103082ab */ if (!(ZF_|LT_)) goto L_103082ab;
  /* 103082a6 sub ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 103082a9 jmp 0x103082ae */ goto L_103082ae;
L_103082ab:;
  /* 103082ab or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_103082ae:;
  /* 103082ae cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103082b1 je 0x103082bf */ if (ZF_) goto L_103082bf;
  /* 103082b3 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 103082b6 lea eax, [ecx + eax*2] */ eax = (u32)((u32)(ecx + eax * 2u));
  /* 103082b9 movzx ecx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M8(m_)); }
  /* 103082bc inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103082bd jmp 0x1030829c */ goto L_1030829c;
L_103082bf:;
  /* 103082bf cmp edx, 0x2d */ { u32 a_ = edx, b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103082c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103082c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103082c4 jne 0x103082c8 */ if (!ZF_) goto L_103082c8;
  /* 103082c6 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
L_103082c8:;
  /* 103082c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103082c9(CPU *c) {
  NATIVE_HOOK(0x103082c9u) REGS; LOADALL;
L_103082c9:;
  /* 103082c9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103082ca mov ebp, esp */ { ebp = (u32)(esp); }
  /* 103082cc sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103082cf mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 103082d4 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 103082d6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 103082d9 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 103082dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103082dd push 0x1004 */ { u32 v_ = 0x1004u; esp -= 4; M32(esp) = v_; }
  /* 103082e2 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103082e5 mov byte ptr [ebp - 6], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffau); M8(m_) = (u8)(0x0u); }
  /* 103082e9 call dword ptr [0x103090d0] */ { const u32 m_ = (u32)(0x103090d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103082efu; SAVEALL; call_ind(c, t_); RETCHK(0x103082efu, 0x103082e9u); LOADALL; }
  /* 103082ef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103082f1 jne 0x103082f8 */ if (!ZF_) goto L_103082f8;
  /* 103082f3 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103082f6 jmp 0x10308302 */ goto L_10308302;
L_103082f8:;
  /* 103082f8 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 103082fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103082fc call 0x10308241 */ esp -= 4; M32(esp) = 0x10308301u; SAVEALL; F_10308241(c); ABI_CHECK(0x10308241u, 0x103082fcu); RETCHK(0x10308301u, 0x103082fcu); LOADALL;
  /* 10308301 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10308302:;
  /* 10308302 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10308305 call 0x10302a7d */ esp -= 4; M32(esp) = 0x1030830au; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10308305u); RETCHK(0x1030830au, 0x10308305u); LOADALL;
  /* 1030830a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030830b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030830c(CPU *c) {
  NATIVE_HOOK(0x1030830cu) REGS; LOADALL;
L_1030830c:;
  /* 1030830c push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 1030830e push 0x1030a1b0 */ { u32 v_ = 0x1030a1b0u; esp -= 4; M32(esp) = v_; }
  /* 10308313 call 0x10303548 */ esp -= 4; M32(esp) = 0x10308318u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10308313u); RETCHK(0x10308318u, 0x10308313u); LOADALL;
  /* 10308318 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 1030831d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10308320 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10308322 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 10308325 mov dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edi); }
  /* 10308328 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1030832b mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 1030832d mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 10308330 mov dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edi); }
  /* 10308333 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10308336 cmp eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308339 je 0x103084b2 */ if (ZF_) goto L_103084b2;
  /* 1030833f lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 10308342 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10308343 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10308344 mov esi, dword ptr [0x103090c8] */ { const u32 m_ = (u32)(0x103090c8u); esi = (u32)(M32(m_)); }
  /* 1030834a call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1030834cu; SAVEALL; call_ind(c, t_); RETCHK(0x1030834cu, 0x1030834au); LOADALL; }
  /* 1030834c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030834e je 0x10308370 */ if (ZF_) goto L_10308370;
  /* 10308350 cmp dword ptr [ebp - 0x30], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308354 jne 0x10308370 */ if (!ZF_) goto L_10308370;
  /* 10308356 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 10308359 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030835a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030835d call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1030835fu; SAVEALL; call_ind(c, t_); RETCHK(0x1030835fu, 0x1030835du); LOADALL; }
  /* 1030835f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10308361 je 0x10308370 */ if (ZF_) goto L_10308370;
  /* 10308363 cmp dword ptr [ebp - 0x30], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308367 jne 0x10308370 */ if (!ZF_) goto L_10308370;
  /* 10308369 mov dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x1u); }
L_10308370:;
  /* 10308370 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308373 je 0x1030838f */ if (ZF_) goto L_1030838f;
  /* 10308375 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308378 je 0x1030837e */ if (ZF_) goto L_1030837e;
  /* 1030837a mov esi, ebx */ { esi = (u32)(ebx); }
  /* 1030837c jmp 0x1030838a */ goto L_1030838a;
L_1030837e:;
  /* 1030837e push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308381 call 0x10306000 */ esp -= 4; M32(esp) = 0x10308386u; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x10308381u); RETCHK(0x10308386u, 0x10308381u); LOADALL;
  /* 10308386 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308387 mov esi, eax */ { esi = (u32)(eax); }
  /* 10308389 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030838a:;
  /* 1030838a mov dword ptr [ebp - 0x38], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(esi); }
  /* 1030838d jmp 0x10308392 */ goto L_10308392;
L_1030838f:;
  /* 1030838f mov esi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); esi = (u32)(M32(m_)); }
L_10308392:;
  /* 10308392 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308395 jne 0x103083b1 */ if (!ZF_) goto L_103083b1;
  /* 10308397 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308398 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308399 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030839a push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030839d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1030839f push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103083a2 call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103083a8u; SAVEALL; call_ind(c, t_); RETCHK(0x103083a8u, 0x103083a2u); LOADALL; }
  /* 103083a8 mov esi, eax */ { esi = (u32)(eax); }
  /* 103083aa mov dword ptr [ebp - 0x38], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(esi); }
  /* 103083ad cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103083af je 0x10308409 */ if (ZF_) goto L_10308409;
L_103083b1:;
  /* 103083b1 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 103083b4 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 103083b7 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103083ba and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103083bd call 0x10304df0 */ esp -= 4; M32(esp) = 0x103083c2u; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x103083bdu); RETCHK(0x103083c2u, 0x103083bdu); LOADALL;
  /* 103083c2 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 103083c5 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 103083c7 mov dword ptr [ebp - 0x48], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ebx); }
  /* 103083ca lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 103083cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103083ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103083cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103083d0 call 0x10306f20 */ esp -= 4; M32(esp) = 0x103083d5u; SAVEALL; F_10306f20(c); ABI_CHECK(0x10306f20u, 0x103083d0u); RETCHK(0x103083d5u, 0x103083d0u); LOADALL;
  /* 103083d5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103083d8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103083dc jmp 0x103083f5 */ goto L_103083f5;
L_103083f5:;
  /* 103083f5 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103083f7 jne 0x10308417 */ if (!ZF_) goto L_10308417;
  /* 103083f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103083fa push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 103083fc call 0x10304573 */ esp -= 4; M32(esp) = 0x10308401u; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x103083fcu); RETCHK(0x10308401u, 0x103083fcu); LOADALL;
  /* 10308401 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308402 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308403 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10308405 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308407 jne 0x10308410 */ if (!ZF_) goto L_10308410;
L_10308409:;
  /* 10308409 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030840b jmp 0x103084c4 */ goto L_103084c4;
L_10308410:;
  /* 10308410 mov dword ptr [ebp - 0x44], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x1u); }
L_10308417:;
  /* 10308417 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308418 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308419 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030841c push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030841f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10308421 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308424 call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030842au; SAVEALL; call_ind(c, t_); RETCHK(0x1030842au, 0x10308424u); LOADALL; }
  /* 1030842a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030842c je 0x103084b5 */ if (ZF_) goto L_103084b5;
  /* 10308432 cmp dword ptr [ebp + 0x18], edi */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308435 je 0x10308457 */ if (ZF_) goto L_10308457;
  /* 10308437 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308438 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308439 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030843c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030843f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308440 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308441 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308442 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308445 call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030844bu; SAVEALL; call_ind(c, t_); RETCHK(0x1030844bu, 0x10308445u); LOADALL; }
  /* 1030844b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030844d je 0x103084b5 */ if (ZF_) goto L_103084b5;
  /* 1030844f mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10308452 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 10308455 jmp 0x103084b5 */ goto L_103084b5;
L_10308457:;
  /* 10308457 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030845a jne 0x10308472 */ if (!ZF_) goto L_10308472;
  /* 1030845c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030845d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030845e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030845f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308461 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308462 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308463 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308466 call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030846cu; SAVEALL; call_ind(c, t_); RETCHK(0x1030846cu, 0x10308466u); LOADALL; }
  /* 1030846c mov esi, eax */ { esi = (u32)(eax); }
  /* 1030846e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308470 je 0x103084b5 */ if (ZF_) goto L_103084b5;
L_10308472:;
  /* 10308472 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308473 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10308475 call 0x10304573 */ esp -= 4; M32(esp) = 0x1030847au; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x10308475u); RETCHK(0x1030847au, 0x10308475u); LOADALL;
  /* 1030847a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030847b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030847c mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1030847f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308481 je 0x103084b5 */ if (ZF_) goto L_103084b5;
  /* 10308483 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308484 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308485 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308486 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10308487 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308488 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308489 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030848a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030848d call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10308493u; SAVEALL; call_ind(c, t_); RETCHK(0x10308493u, 0x1030848du); LOADALL; }
  /* 10308493 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308495 jne 0x103084a5 */ if (!ZF_) goto L_103084a5;
  /* 10308497 push dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030849a call 0x10303326 */ esp -= 4; M32(esp) = 0x1030849fu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030849au); RETCHK(0x1030849fu, 0x1030849au); LOADALL;
  /* 1030849f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103084a0 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 103084a3 jmp 0x103084b5 */ goto L_103084b5;
L_103084a5:;
  /* 103084a5 cmp dword ptr [ebp - 0x40], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103084a9 je 0x103084b5 */ if (ZF_) goto L_103084b5;
  /* 103084ab mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 103084ae mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 103084b0 jmp 0x103084b5 */ goto L_103084b5;
L_103084b2:;
  /* 103084b2 mov ebx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ebx = (u32)(M32(m_)); }
L_103084b5:;
  /* 103084b5 cmp dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103084b8 je 0x103084c1 */ if (ZF_) goto L_103084c1;
  /* 103084ba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103084bb call 0x10303326 */ esp -= 4; M32(esp) = 0x103084c0u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103084bbu); RETCHK(0x103084c0u, 0x103084bbu); LOADALL;
  /* 103084c0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103084c1:;
  /* 103084c1 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_103084c4:;
  /* 103084c4 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 103084c7 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 103084ca call 0x10302a7d */ esp -= 4; M32(esp) = 0x103084cfu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103084cau); RETCHK(0x103084cfu, 0x103084cau); LOADALL;
  /* 103084cf call 0x10303583 */ esp -= 4; M32(esp) = 0x103084d4u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103084cfu); RETCHK(0x103084d4u, 0x103084cfu); LOADALL;
  /* 103084d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103083de(CPU *c) {
  NATIVE_HOOK(0x103083deu) REGS; LOADALL;
L_103083de:;
  /* 103083de xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103083e0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103083e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103083e2(CPU *c) {
  NATIVE_HOOK(0x103083e2u) REGS; LOADALL;
L_103083e2:;
  /* 103083e2 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 103083e5 call 0x1030815e */ esp -= 4; M32(esp) = 0x103083eau; SAVEALL; F_1030815e(c); ABI_CHECK(0x1030815eu, 0x103083e5u); RETCHK(0x103083eau, 0x103083e5u); LOADALL;
  /* 103083ea xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 103083ec xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 103083ee or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103083f2 mov esi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); esi = (u32)(M32(m_)); }
  /* 103083f5 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103083f7 jne 0x10308417 */ if (!ZF_) goto L_10308417;
  /* 103083f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103083fa push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 103083fc call 0x10304573 */ esp -= 4; M32(esp) = 0x10308401u; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x103083fcu); RETCHK(0x10308401u, 0x103083fcu); LOADALL;
  /* 10308401 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308402 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10308403 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10308405 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308407 jne 0x10308410 */ if (!ZF_) goto L_10308410;
  /* 10308409 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030840b jmp 0x103084c4 */ goto L_103084c4;
L_10308410:;
  /* 10308410 mov dword ptr [ebp - 0x44], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x1u); }
L_10308417:;
  /* 10308417 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308418 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308419 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030841c push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030841f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10308421 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308424 call dword ptr [0x103090d8] */ { const u32 m_ = (u32)(0x103090d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030842au; SAVEALL; call_ind(c, t_); RETCHK(0x1030842au, 0x10308424u); LOADALL; }
  /* 1030842a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030842c je 0x103084b5 */ if (ZF_) goto L_103084b5;
  /* 10308432 cmp dword ptr [ebp + 0x18], edi */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308435 je 0x10308457 */ if (ZF_) goto L_10308457;
  /* 10308437 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308438 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308439 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030843c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030843f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308440 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308441 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308442 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308445 call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030844bu; SAVEALL; call_ind(c, t_); RETCHK(0x1030844bu, 0x10308445u); LOADALL; }
  /* 1030844b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030844d je 0x103084b5 */ if (ZF_) goto L_103084b5;
  /* 1030844f mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10308452 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 10308455 jmp 0x103084b5 */ goto L_103084b5;
L_10308457:;
  /* 10308457 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030845a jne 0x10308472 */ if (!ZF_) goto L_10308472;
  /* 1030845c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030845d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030845e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030845f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308461 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308462 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308463 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308466 call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030846cu; SAVEALL; call_ind(c, t_); RETCHK(0x1030846cu, 0x10308466u); LOADALL; }
  /* 1030846c mov esi, eax */ { esi = (u32)(eax); }
  /* 1030846e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308470 je 0x103084b5 */ if (ZF_) goto L_103084b5;
L_10308472:;
  /* 10308472 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308473 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10308475 call 0x10304573 */ esp -= 4; M32(esp) = 0x1030847au; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x10308475u); RETCHK(0x1030847au, 0x10308475u); LOADALL;
  /* 1030847a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030847b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030847c mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1030847f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308481 je 0x103084b5 */ if (ZF_) goto L_103084b5;
  /* 10308483 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308484 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10308485 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308486 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10308487 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10308488 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10308489 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030848a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030848d call dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10308493u; SAVEALL; call_ind(c, t_); RETCHK(0x10308493u, 0x1030848du); LOADALL; }
  /* 10308493 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10308495 jne 0x103084a5 */ if (!ZF_) goto L_103084a5;
  /* 10308497 push dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030849a call 0x10303326 */ esp -= 4; M32(esp) = 0x1030849fu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030849au); RETCHK(0x1030849fu, 0x1030849au); LOADALL;
  /* 1030849f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103084a0 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 103084a3 jmp 0x103084b5 */ goto L_103084b5;
L_103084a5:;
  /* 103084a5 cmp dword ptr [ebp - 0x40], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103084a9 je 0x103084b5 */ if (ZF_) goto L_103084b5;
  /* 103084ab mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 103084ae mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 103084b0 jmp 0x103084b5 */ goto L_103084b5;
L_103084b5:;
  /* 103084b5 cmp dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103084b8 je 0x103084c1 */ if (ZF_) goto L_103084c1;
  /* 103084ba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103084bb call 0x10303326 */ esp -= 4; M32(esp) = 0x103084c0u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103084bbu); RETCHK(0x103084c0u, 0x103084bbu); LOADALL;
  /* 103084c0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103084c1:;
  /* 103084c1 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_103084c4:;
  /* 103084c4 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 103084c7 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 103084ca call 0x10302a7d */ esp -= 4; M32(esp) = 0x103084cfu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103084cau); RETCHK(0x103084cfu, 0x103084cau); LOADALL;
  /* 103084cf call 0x10303583 */ esp -= 4; M32(esp) = 0x103084d4u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103084cfu); RETCHK(0x103084d4u, 0x103084cfu); LOADALL;
  /* 103084d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103084d5(CPU *c) {
  NATIVE_HOOK(0x103084d5u) REGS; LOADALL;
L_103084d5:;
  /* 103084d5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103084d6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 103084d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103084d9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 103084dc lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 103084df cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103084e5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103084e8 ja 0x103084f3 */ if (!(CF_|ZF_)) goto L_103084f3;
  /* 103084ea mov ecx, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ecx = (u32)(M32(m_)); }
  /* 103084ed movzx eax, word ptr [ecx + eax*2] */ { const u32 m_ = (u32)(ecx + eax * 2u); eax = (u32)(M16(m_)); }
  /* 103084f1 jmp 0x10308547 */ goto L_10308547;
L_103084f3:;
  /* 103084f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103084f4 mov edx, eax */ { edx = (u32)(eax); }
  /* 103084f6 sar edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 103084f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103084fa mov edi, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); edi = (u32)(M32(m_)); }
  /* 103084fd movzx esi, dl */ { esi = (u32)((edx & 0xffu)); }
  /* 10308500 test byte ptr [edi + esi*2 + 1], 0x80 */ { const u32 m_ = (u32)(edi + esi * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10308505 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10308506 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10308507 je 0x10308518 */ if (ZF_) goto L_10308518;
  /* 10308509 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1030850b mov byte ptr [ebp - 3], al */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030850e mov byte ptr [ebp - 4], dl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10308511 mov byte ptr [ebp - 2], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)(0x0u); }
  /* 10308515 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10308516 jmp 0x10308522 */ goto L_10308522;
L_10308518:;
  /* 10308518 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030851b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030851d mov byte ptr [ebp - 3], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)(0x0u); }
  /* 10308521 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10308522:;
  /* 10308522 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10308524 push dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10308527 push dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030852a lea ecx, [ebp + 0xe] */ ecx = (u32)((u32)(ebp + 0xeu));
  /* 1030852d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030852e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030852f lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10308532 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10308533 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10308535 call 0x10307738 */ esp -= 4; M32(esp) = 0x1030853au; SAVEALL; F_10307738(c); ABI_CHECK(0x10307738u, 0x10308535u); RETCHK(0x1030853au, 0x10308535u); LOADALL;
  /* 1030853a add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030853d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030853f jne 0x10308543 */ if (!ZF_) goto L_10308543;
  /* 10308541 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10308542 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10308543:;
  /* 10308543 movzx eax, word ptr [ebp + 0xe] */ { const u32 m_ = (u32)(ebp + 0xeu); eax = (u32)(M16(m_)); }
L_10308547:;
  /* 10308547 and eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030854a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030854b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030876e(CPU *c) {
  NATIVE_HOOK(0x1030876eu) REGS; LOADALL;
L_1030876e:;
  /* 1030876e jmp dword ptr [0x10309008] */ { const u32 m_ = (u32)(0x10309008u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10308780(CPU *c) {
  NATIVE_HOOK(0x10308780u) REGS; LOADALL;
L_10308780:;
  /* 10308780 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 10308783 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10308784 call 0x10302a47 */ esp -= 4; M32(esp) = 0x10308789u; SAVEALL; F_10302a47(c); ABI_CHECK(0x10302a47u, 0x10308784u); RETCHK(0x10308789u, 0x10308784u); LOADALL;
  /* 10308789 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030878a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030878b(CPU *c) {
  NATIVE_HOOK(0x1030878bu) REGS; LOADALL;
  goto L_1030878b;
L_10302c4b:;
  /* 10302c4b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302c4c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10302c4e sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10302c51 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302c52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302c53 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302c54 cld */ c->df = 0;
  /* 10302c55 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10302c58 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302c5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302c5b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302c5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302c5d push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302c60 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302c63 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302c66 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302c69 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302c6c call 0x10303f5e */ esp -= 4; M32(esp) = 0x10302c71u; SAVEALL; F_10303f5e(c); ABI_CHECK(0x10303f5eu, 0x10302c6cu); RETCHK(0x10302c71u, 0x10302c6cu); LOADALL;
  /* 10302c71 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10302c74 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10302c77 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302c78 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302c79 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302c7a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10302c7d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10302c7f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10302c80 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1030878b:;
  /* 1030878b mov eax, 0x1030a29c */ { eax = (u32)(0x1030a29cu); }
  /* 10308790 jmp 0x10302c4b */ goto L_10302c4b;
}

void F_10401000(CPU *c) {
  NATIVE_HOOK(0x10401000u) REGS; LOADALL;
L_10401000:;
  /* 10401000 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10401005 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401010(CPU *c) {
  NATIVE_HOOK(0x10401010u) REGS; LOADALL;
L_10401010:;
  /* 10401010 mov dword ptr [ecx], 0x1040b130 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1040b130u); }
  /* 10401016 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10401019 jmp 0x10402190 */ goto L_10402190;
L_10402190:;
  /* 10402190 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10402196 jmp 0x104049d0 */ goto L_104049d0;
L_104049d0:;
  /* 104049d0 mov dword ptr [ecx], 0x1040b184 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1040b184u); }
  /* 104049d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10401020(CPU *c) {
  NATIVE_HOOK(0x10401020u) REGS; LOADALL;
L_10401020:;
  /* 10401020 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401024 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10401027 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10401029 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10401030(CPU *c) {
  NATIVE_HOOK(0x10401030u) REGS; LOADALL;
L_10401030:;
  /* 10401030 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401033 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10401037 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401039 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040103a mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 1040103e mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10401042 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401044 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10401048 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 1040104c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040104d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040104e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040104f push 0x44d */ { u32 v_ = 0x44du; esp -= 4; M32(esp) = v_; }
  /* 10401054 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401057 call 0x10404960 */ esp -= 4; M32(esp) = 0x1040105cu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x10401057u); RETCHK(0x1040105cu, 0x10401057u); LOADALL;
  /* 1040105c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040105e jl 0x10401077 */ if (LT_) goto L_10401077;
  /* 10401060 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 10401064 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401067 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10401069 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040106a mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 1040106e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040106f mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10401073 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401074 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401077u; SAVEALL; call_ind(c, t_); RETCHK(0x10401077u, 0x10401074u); LOADALL; }
L_10401077:;
  /* 10401077 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401078 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040107b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401080(CPU *c) {
  NATIVE_HOOK(0x10401080u) REGS; LOADALL;
L_10401080:;
  /* 10401080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10401081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10401083 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10401086 sub esp, 0x120 */ { u32 a_ = esp, b_ = 0x120u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040108c mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10401091 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10401094 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401095 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401096 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401098 mov dword ptr [esp + 0x124], eax */ { const u32 m_ = (u32)(esp + 0x124u); M32(m_) = (u32)(eax); }
  /* 1040109f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104010a1 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 104010a9 mov ecx, 0x45 */ { ecx = (u32)(0x45u); }
  /* 104010ae lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 104010b2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 104010b4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 104010b7 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 104010bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104010bc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104010bd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104010be push 0x45b */ { u32 v_ = 0x45bu; esp -= 4; M32(esp) = v_; }
  /* 104010c3 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 104010c6 call 0x10404960 */ esp -= 4; M32(esp) = 0x104010cbu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x104010c6u); RETCHK(0x104010cbu, 0x104010c6u); LOADALL;
  /* 104010cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104010cd jl 0x104010e5 */ if (LT_) goto L_104010e5;
  /* 104010cf mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 104010d2 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104010d5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 104010d7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104010d8 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 104010dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104010dd mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 104010e1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104010e2 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104010e5u; SAVEALL; call_ind(c, t_); RETCHK(0x104010e5u, 0x104010e2u); LOADALL; }
L_104010e5:;
  /* 104010e5 mov ecx, dword ptr [esp + 0x124] */ { const u32 m_ = (u32)(esp + 0x124u); ecx = (u32)(M32(m_)); }
  /* 104010ec call 0x10404cdd */ esp -= 4; M32(esp) = 0x104010f1u; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x104010ecu); RETCHK(0x104010f1u, 0x104010ecu); LOADALL;
  /* 104010f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104010f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104010f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 104010f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104010f6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401100(CPU *c) {
  NATIVE_HOOK(0x10401100u) REGS; LOADALL;
L_10401100:;
  /* 10401100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10401101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10401103 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10401106 sub esp, 0x310 */ { u32 a_ = esp, b_ = 0x310u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040110c mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10401111 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10401114 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401115 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401116 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401118 mov dword ptr [esp + 0x314], eax */ { const u32 m_ = (u32)(esp + 0x314u); M32(m_) = (u32)(eax); }
  /* 1040111f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401121 mov word ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)(0x0u); }
  /* 10401128 mov ecx, 0xc0 */ { ecx = (u32)(0xc0u); }
  /* 1040112d lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10401131 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10401133 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10401136 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1040113a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040113b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040113c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040113d push 0x451 */ { u32 v_ = 0x451u; esp -= 4; M32(esp) = v_; }
  /* 10401142 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401145 call 0x10404960 */ esp -= 4; M32(esp) = 0x1040114au; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x10401145u); RETCHK(0x1040114au, 0x10401145u); LOADALL;
  /* 1040114a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040114c jl 0x10401164 */ if (LT_) goto L_10401164;
  /* 1040114e mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401151 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401154 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10401156 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401157 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 1040115b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040115c mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401160 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401161 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401164u; SAVEALL; call_ind(c, t_); RETCHK(0x10401164u, 0x10401161u); LOADALL; }
L_10401164:;
  /* 10401164 mov ecx, dword ptr [esp + 0x314] */ { const u32 m_ = (u32)(esp + 0x314u); ecx = (u32)(M32(m_)); }
  /* 1040116b call 0x10404cdd */ esp -= 4; M32(esp) = 0x10401170u; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x1040116bu); RETCHK(0x10401170u, 0x1040116bu); LOADALL;
  /* 10401170 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401171 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401172 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10401174 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10401175 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401180(CPU *c) {
  NATIVE_HOOK(0x10401180u) REGS; LOADALL;
L_10401180:;
  /* 10401180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10401181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10401183 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10401186 mov eax, 0x1130 */ { eax = (u32)(0x1130u); }
  /* 1040118b call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10401190u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x1040118bu); RETCHK(0x10401190u, 0x1040118bu); LOADALL;
  /* 10401190 mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10401195 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10401198 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401199 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040119a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1040119c mov dword ptr [esp + 0x1134], eax */ { const u32 m_ = (u32)(esp + 0x1134u); M32(m_) = (u32)(eax); }
  /* 104011a3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104011a5 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 104011ad mov ecx, 0x448 */ { ecx = (u32)(0x448u); }
  /* 104011b2 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 104011b6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 104011b8 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 104011bb lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 104011bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104011c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104011c1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104011c2 push 0x453 */ { u32 v_ = 0x453u; esp -= 4; M32(esp) = v_; }
  /* 104011c7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 104011ca call 0x10404960 */ esp -= 4; M32(esp) = 0x104011cfu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x104011cau); RETCHK(0x104011cfu, 0x104011cau); LOADALL;
  /* 104011cf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104011d1 jl 0x1040120c */ if (LT_) goto L_1040120c;
  /* 104011d3 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104011d7 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 104011da mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104011dd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104011df mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 104011e1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104011e2 jne 0x10401202 */ if (!ZF_) goto L_10401202;
  /* 104011e4 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 104011e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104011e9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 104011eb call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104011eeu; SAVEALL; call_ind(c, t_); RETCHK(0x104011eeu, 0x104011ebu); LOADALL; }
  /* 104011ee mov ecx, dword ptr [esp + 0x1134] */ { const u32 m_ = (u32)(esp + 0x1134u); ecx = (u32)(M32(m_)); }
  /* 104011f5 call 0x10404cdd */ esp -= 4; M32(esp) = 0x104011fau; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x104011f5u); RETCHK(0x104011fau, 0x104011f5u); LOADALL;
  /* 104011fa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104011fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104011fc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 104011fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104011ff ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10401202:;
  /* 10401202 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401206 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10401208 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401209 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040120cu; SAVEALL; call_ind(c, t_); RETCHK(0x1040120cu, 0x10401209u); LOADALL; }
L_1040120c:;
  /* 1040120c mov ecx, dword ptr [esp + 0x1134] */ { const u32 m_ = (u32)(esp + 0x1134u); ecx = (u32)(M32(m_)); }
  /* 10401213 call 0x10404cdd */ esp -= 4; M32(esp) = 0x10401218u; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x10401213u); RETCHK(0x10401218u, 0x10401213u); LOADALL;
  /* 10401218 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401219 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040121a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1040121c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040121d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401220(CPU *c) {
  NATIVE_HOOK(0x10401220u) REGS; LOADALL;
L_10401220:;
  /* 10401220 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10401221 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10401223 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10401226 sub esp, 0x350 */ { u32 a_ = esp, b_ = 0x350u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040122c mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10401231 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10401234 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401235 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401236 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401238 mov dword ptr [esp + 0x354], eax */ { const u32 m_ = (u32)(esp + 0x354u); M32(m_) = (u32)(eax); }
  /* 1040123f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401241 mov word ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)(0x0u); }
  /* 10401248 mov ecx, 0xd0 */ { ecx = (u32)(0xd0u); }
  /* 1040124d lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10401251 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10401253 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10401256 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1040125a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040125b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040125c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040125d push 0x44f */ { u32 v_ = 0x44fu; esp -= 4; M32(esp) = v_; }
  /* 10401262 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401265 call 0x10404960 */ esp -= 4; M32(esp) = 0x1040126au; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x10401265u); RETCHK(0x1040126au, 0x10401265u); LOADALL;
  /* 1040126a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040126c jl 0x10401284 */ if (LT_) goto L_10401284;
  /* 1040126e mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401271 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401274 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10401276 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401277 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 1040127b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040127c mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401280 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401281 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401284u; SAVEALL; call_ind(c, t_); RETCHK(0x10401284u, 0x10401281u); LOADALL; }
L_10401284:;
  /* 10401284 mov ecx, dword ptr [esp + 0x354] */ { const u32 m_ = (u32)(esp + 0x354u); ecx = (u32)(M32(m_)); }
  /* 1040128b call 0x10404cdd */ esp -= 4; M32(esp) = 0x10401290u; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x1040128bu); RETCHK(0x10401290u, 0x1040128bu); LOADALL;
  /* 10401290 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401291 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401292 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10401294 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10401295 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_104012a0(CPU *c) {
  NATIVE_HOOK(0x104012a0u) REGS; LOADALL;
L_104012a0:;
  /* 104012a0 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104012a3 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 104012a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104012a8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 104012aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104012ac mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 104012b0 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 104012b4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104012b5 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 104012b9 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 104012bd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104012be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104012bf push 0x455 */ { u32 v_ = 0x455u; esp -= 4; M32(esp) = v_; }
  /* 104012c4 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 104012c7 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 104012cf call 0x10404960 */ esp -= 4; M32(esp) = 0x104012d4u; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x104012cfu); RETCHK(0x104012d4u, 0x104012cfu); LOADALL;
  /* 104012d4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104012d6 jl 0x104012f4 */ if (LT_) goto L_104012f4;
  /* 104012d8 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 104012dc mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104012df mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 104012e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104012e2 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 104012e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104012e7 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 104012eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104012ec mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 104012f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104012f1 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104012f4u; SAVEALL; call_ind(c, t_); RETCHK(0x104012f4u, 0x104012f1u); LOADALL; }
L_104012f4:;
  /* 104012f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104012f5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104012f8 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401300(CPU *c) {
  NATIVE_HOOK(0x10401300u) REGS; LOADALL;
L_10401300:;
  /* 10401300 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401303 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10401307 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401308 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1040130a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040130c mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10401310 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10401314 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401315 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401319 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 1040131d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040131e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040131f push 0x457 */ { u32 v_ = 0x457u; esp -= 4; M32(esp) = v_; }
  /* 10401324 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401327 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 1040132f call 0x10404960 */ esp -= 4; M32(esp) = 0x10401334u; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x1040132fu); RETCHK(0x10401334u, 0x1040132fu); LOADALL;
  /* 10401334 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401336 jl 0x10401354 */ if (LT_) goto L_10401354;
  /* 10401338 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 1040133c mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040133f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401341 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401342 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10401346 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401347 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1040134b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040134c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10401350 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401351 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401354u; SAVEALL; call_ind(c, t_); RETCHK(0x10401354u, 0x10401351u); LOADALL; }
L_10401354:;
  /* 10401354 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401355 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401358 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401360(CPU *c) {
  NATIVE_HOOK(0x10401360u) REGS; LOADALL;
L_10401360:;
  /* 10401360 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401363 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10401367 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401368 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1040136a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040136c mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10401370 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10401374 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401375 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401379 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 1040137d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040137e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040137f push 0x459 */ { u32 v_ = 0x459u; esp -= 4; M32(esp) = v_; }
  /* 10401384 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401387 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 1040138f call 0x10404960 */ esp -= 4; M32(esp) = 0x10401394u; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x1040138fu); RETCHK(0x10401394u, 0x1040138fu); LOADALL;
  /* 10401394 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401396 jl 0x104013b4 */ if (LT_) goto L_104013b4;
  /* 10401398 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 1040139c mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040139f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 104013a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104013a2 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 104013a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104013a7 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 104013ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104013ac mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 104013b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104013b1 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104013b4u; SAVEALL; call_ind(c, t_); RETCHK(0x104013b4u, 0x104013b1u); LOADALL; }
L_104013b4:;
  /* 104013b4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104013b5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104013b8 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_104013c0(CPU *c) {
  NATIVE_HOOK(0x104013c0u) REGS; LOADALL;
L_104013c0:;
  /* 104013c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104013c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104013c3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 104013c6 sub esp, 0xd0 */ { u32 a_ = esp, b_ = 0xd0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104013cc mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 104013cf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104013d0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104013d1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 104013d3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104013d5 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 104013dd mov ecx, 0x33 */ { ecx = (u32)(0x33u); }
  /* 104013e2 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 104013e6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 104013e8 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 104013eb lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 104013ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104013f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104013f1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104013f2 push 0x45d */ { u32 v_ = 0x45du; esp -= 4; M32(esp) = v_; }
  /* 104013f7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 104013fa call 0x10404960 */ esp -= 4; M32(esp) = 0x104013ffu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x104013fau); RETCHK(0x104013ffu, 0x104013fau); LOADALL;
  /* 104013ff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401401 jl 0x10401423 */ if (LT_) goto L_10401423;
  /* 10401403 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401406 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401409 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 1040140b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040140c lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 10401410 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401411 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 10401415 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401416 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 1040141a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040141b mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 1040141f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401420 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401423u; SAVEALL; call_ind(c, t_); RETCHK(0x10401423u, 0x10401420u); LOADALL; }
L_10401423:;
  /* 10401423 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401424 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401425 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10401427 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10401428 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401430(CPU *c) {
  NATIVE_HOOK(0x10401430u) REGS; LOADALL;
L_10401430:;
  /* 10401430 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401434 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401435 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401436 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401438 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 1040143e push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401443 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10401446 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401447 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 1040144b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040144c push 0x7d0 */ { u32 v_ = 0x7d0u; esp -= 4; M32(esp) = v_; }
  /* 10401451 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401454 mov word ptr [esi + 4], 0x7d0 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7d0u); }
  /* 1040145a mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 1040145c call 0x10404920 */ esp -= 4; M32(esp) = 0x10401461u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x1040145cu); RETCHK(0x10401461u, 0x1040145cu); LOADALL;
  /* 10401461 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401463 jge 0x1040146c */ if (!LT_) goto L_1040146c;
  /* 10401465 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401466 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401468 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401469 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040146c:;
  /* 1040146c mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040146f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401471 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401474 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401475 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401476 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401478u; SAVEALL; call_ind(c, t_); RETCHK(0x10401478u, 0x10401476u); LOADALL; }
  /* 10401478 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401479 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040147a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10401480(CPU *c) {
  NATIVE_HOOK(0x10401480u) REGS; LOADALL;
L_10401480:;
  /* 10401480 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401483 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 10401487 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401488 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040148a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1040148c mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10401490 mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10401494 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10401498 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401499 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 1040149d mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 104014a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104014a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104014a3 push 0x7d1 */ { u32 v_ = 0x7d1u; esp -= 4; M32(esp) = v_; }
  /* 104014a8 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 104014ab mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 104014b3 call 0x10404960 */ esp -= 4; M32(esp) = 0x104014b8u; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x104014b3u); RETCHK(0x104014b8u, 0x104014b3u); LOADALL;
  /* 104014b8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104014ba jl 0x104014fc */ if (LT_) goto L_104014fc;
  /* 104014bc mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 104014c0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104014c4 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104014c6 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 104014ca mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 104014ce mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 104014d2 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 104014d6 mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 104014da mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 104014de mov dword ptr [esp + 0x20], edx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(edx); }
  /* 104014e2 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 104014e6 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 104014ea mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104014ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104014ee lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 104014f2 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 104014f6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 104014f8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104014f9 call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104014fcu; SAVEALL; call_ind(c, t_); RETCHK(0x104014fcu, 0x104014f9u); LOADALL; }
L_104014fc:;
  /* 104014fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104014fd add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401500 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401510(CPU *c) {
  NATIVE_HOOK(0x10401510u) REGS; LOADALL;
L_10401510:;
  /* 10401510 mov ax, word ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10401515 cmp ax, 0x10 */ { u32 a_ = (eax & 0xffffu), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10401519 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040151a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 1040151c jbe 0x10401524 */ if ((CF_|ZF_)) goto L_10401524;
  /* 1040151e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401520 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401521 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401524:;
  /* 10401524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401525 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 1040152b push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401530 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10401533 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401534 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10401538 mov word ptr [esp + 0x14], ax */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1040153d mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10401541 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401542 push 0x7d2 */ { u32 v_ = 0x7d2u; esp -= 4; M32(esp) = v_; }
  /* 10401547 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 1040154a mov word ptr [esi + 4], 0x7d2 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7d2u); }
  /* 10401550 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10401552 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401557u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401552u); RETCHK(0x10401557u, 0x10401552u); LOADALL;
  /* 10401557 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401559 jge 0x10401562 */ if (!LT_) goto L_10401562;
  /* 1040155b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040155c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1040155e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040155f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401562:;
  /* 10401562 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401565 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401567 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040156a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040156b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040156c call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040156eu; SAVEALL; call_ind(c, t_); RETCHK(0x1040156eu, 0x1040156cu); LOADALL; }
  /* 1040156e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040156f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401570 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401580(CPU *c) {
  NATIVE_HOOK(0x10401580u) REGS; LOADALL;
L_10401580:;
  /* 10401580 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10401581 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10401583 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10401586 sub esp, 0x88 */ { u32 a_ = esp, b_ = 0x88u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040158c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1040158f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401590 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401591 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401593 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401595 mov word ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)(0x0u); }
  /* 1040159c mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 104015a1 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 104015a5 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 104015a7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 104015aa lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 104015ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104015af push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104015b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104015b1 push 0x7d3 */ { u32 v_ = 0x7d3u; esp -= 4; M32(esp) = v_; }
  /* 104015b6 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 104015b9 call 0x10404960 */ esp -= 4; M32(esp) = 0x104015beu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x104015b9u); RETCHK(0x104015beu, 0x104015b9u); LOADALL;
  /* 104015be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104015c0 jl 0x104015d8 */ if (LT_) goto L_104015d8;
  /* 104015c2 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 104015c5 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104015c8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 104015ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104015cb mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 104015cf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104015d0 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 104015d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104015d5 call dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104015d8u; SAVEALL; call_ind(c, t_); RETCHK(0x104015d8u, 0x104015d5u); LOADALL; }
L_104015d8:;
  /* 104015d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104015d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104015da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 104015dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104015dd ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_104015e0(CPU *c) {
  NATIVE_HOOK(0x104015e0u) REGS; LOADALL;
L_104015e0:;
  /* 104015e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104015e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104015e3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 104015e6 sub esp, 0x80c */ { u32 a_ = esp, b_ = 0x80cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104015ec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104015ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104015ee mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 104015f1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104015f3 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 104015f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104015f6 mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 104015fa je 0x1040169d */ if (ZF_) goto L_1040169d;
  /* 10401600 mov dx, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10401604 cmp dx, 0x100 */ { u32 a_ = (edx & 0xffffu), b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10401609 ja 0x1040169d */ if (!(CF_|ZF_)) goto L_1040169d;
  /* 1040160f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401611 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10401614 mov ecx, 0x201 */ { ecx = (u32)(0x201u); }
  /* 10401619 lea edi, [esp + 0x14] */ edi = (u32)((u32)(esp + 0x14u));
  /* 1040161d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1040161f mov dword ptr [esp + 0x10], esi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(esi); }
  /* 10401623 mov word ptr [esp + 0x14], dx */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 10401628 jbe 0x1040166d */ if ((CF_|ZF_)) goto L_1040166d;
  /* 1040162a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1040162d lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10401631 lea esi, [esp + 0x16] */ esi = (u32)((u32)(esp + 0x16u));
  /* 10401635 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10401637 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10401639 lea edi, [esp + 0x18] */ edi = (u32)((u32)(esp + 0x18u));
  /* 1040163d lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 10401640 sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10401642 movzx ecx, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M16(m_)); }
  /* 10401646 jmp 0x10401650 */ goto L_10401650;
L_10401650:;
  /* 10401650 mov bx, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10401654 mov word ptr [edx + eax], bx */ { const u32 m_ = (u32)(edx + eax); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 10401658 mov bl, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040165b mov byte ptr [esi + eax], bl */ { const u32 m_ = (u32)(esi + eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 1040165e mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 10401660 mov dword ptr [edi + eax], ebx */ { const u32 m_ = (u32)(edi + eax); M32(m_) = (u32)(ebx); }
  /* 10401663 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401666 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10401667 jne 0x10401650 */ if (!ZF_) goto L_10401650;
  /* 10401669 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
L_1040166d:;
  /* 1040166d mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10401670 lea esi, [ebx + 0x10018] */ esi = (u32)((u32)(ebx + 0x10018u));
  /* 10401676 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 1040167b lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 1040167e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040167f lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 10401683 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401684 push 0x7d4 */ { u32 v_ = 0x7d4u; esp -= 4; M32(esp) = v_; }
  /* 10401689 lea ecx, [ebx + 8] */ ecx = (u32)((u32)(ebx + 0x8u));
  /* 1040168c mov word ptr [esi + 4], 0x7d4 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7d4u); }
  /* 10401692 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10401694 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401699u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401694u); RETCHK(0x10401699u, 0x10401694u); LOADALL;
  /* 10401699 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040169b jge 0x104016a8 */ if (!LT_) goto L_104016a8;
L_1040169d:;
  /* 1040169d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1040169f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104016a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104016a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104016a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 104016a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104016a5 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_104016a8:;
  /* 104016a8 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104016ab mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 104016ad add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104016b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104016b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104016b2 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104016b4u; SAVEALL; call_ind(c, t_); RETCHK(0x104016b4u, 0x104016b2u); LOADALL; }
  /* 104016b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104016b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104016b6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104016b7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 104016b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104016ba ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_104016c0(CPU *c) {
  NATIVE_HOOK(0x104016c0u) REGS; LOADALL;
L_104016c0:;
  /* 104016c0 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104016c3 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 104016c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104016c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104016ca mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 104016ce mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 104016d2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 104016d4 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 104016d8 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 104016dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104016dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104016de push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104016df push 0x7d5 */ { u32 v_ = 0x7d5u; esp -= 4; M32(esp) = v_; }
  /* 104016e4 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 104016e7 call 0x10404960 */ esp -= 4; M32(esp) = 0x104016ecu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x104016e7u); RETCHK(0x104016ecu, 0x104016e7u); LOADALL;
  /* 104016ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104016ee jl 0x10401702 */ if (LT_) goto L_10401702;
  /* 104016f0 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 104016f4 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104016f7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 104016f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104016fa mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 104016fe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104016ff call dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401702u; SAVEALL; call_ind(c, t_); RETCHK(0x10401702u, 0x104016ffu); LOADALL; }
L_10401702:;
  /* 10401702 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401703 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401706 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401710(CPU *c) {
  NATIVE_HOOK(0x10401710u) REGS; LOADALL;
L_10401710:;
  /* 10401710 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401714 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401716 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401717 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401719 jne 0x10401721 */ if (!ZF_) goto L_10401721;
  /* 1040171b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1040171d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040171e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401721:;
  /* 10401721 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401722 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401728 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 1040172d lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10401730 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401731 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10401735 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10401739 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 1040173d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040173e push 0x7d6 */ { u32 v_ = 0x7d6u; esp -= 4; M32(esp) = v_; }
  /* 10401743 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401746 mov word ptr [esi + 4], 0x7d6 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7d6u); }
  /* 1040174c mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 1040174e call 0x10404920 */ esp -= 4; M32(esp) = 0x10401753u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x1040174eu); RETCHK(0x10401753u, 0x1040174eu); LOADALL;
  /* 10401753 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401755 jge 0x1040175e */ if (!LT_) goto L_1040175e;
  /* 10401757 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401758 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1040175a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040175b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1040175e:;
  /* 1040175e mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401761 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401763 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401766 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401767 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401768 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040176au; SAVEALL; call_ind(c, t_); RETCHK(0x1040176au, 0x10401768u); LOADALL; }
  /* 1040176a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040176b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040176c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401770(CPU *c) {
  NATIVE_HOOK(0x10401770u) REGS; LOADALL;
L_10401770:;
  /* 10401770 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10401771 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10401773 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10401776 sub esp, 0x808 */ { u32 a_ = esp, b_ = 0x808u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040177c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1040177f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401780 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401781 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401783 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401785 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 1040178d mov ecx, 0x201 */ { ecx = (u32)(0x201u); }
  /* 10401792 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10401796 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10401798 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1040179b lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1040179f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104017a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104017a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104017a2 push 0x7d7 */ { u32 v_ = 0x7d7u; esp -= 4; M32(esp) = v_; }
  /* 104017a7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 104017aa call 0x10404960 */ esp -= 4; M32(esp) = 0x104017afu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x104017aau); RETCHK(0x104017afu, 0x104017aau); LOADALL;
  /* 104017af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104017b1 jl 0x104017ce */ if (LT_) goto L_104017ce;
  /* 104017b3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 104017b6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104017b9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 104017bb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104017bc mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 104017c0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104017c1 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 104017c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104017c6 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 104017ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104017cb call dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104017ceu; SAVEALL; call_ind(c, t_); RETCHK(0x104017ceu, 0x104017cbu); LOADALL; }
L_104017ce:;
  /* 104017ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104017cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104017d0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 104017d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104017d3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_104017e0(CPU *c) {
  NATIVE_HOOK(0x104017e0u) REGS; LOADALL;
L_104017e0:;
  /* 104017e0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 104017e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104017e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104017e6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 104017e8 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 104017ee push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 104017f3 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 104017f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104017f7 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 104017fb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104017fc push 0x7d8 */ { u32 v_ = 0x7d8u; esp -= 4; M32(esp) = v_; }
  /* 10401801 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401804 mov word ptr [esi + 4], 0x7d8 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7d8u); }
  /* 1040180a mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 1040180c call 0x10404920 */ esp -= 4; M32(esp) = 0x10401811u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x1040180cu); RETCHK(0x10401811u, 0x1040180cu); LOADALL;
  /* 10401811 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401813 jge 0x1040181c */ if (!LT_) goto L_1040181c;
  /* 10401815 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401816 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401818 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401819 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040181c:;
  /* 1040181c mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040181f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401821 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401824 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401825 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401826 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401828u; SAVEALL; call_ind(c, t_); RETCHK(0x10401828u, 0x10401826u); LOADALL; }
  /* 10401828 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401829 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040182a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10401830(CPU *c) {
  NATIVE_HOOK(0x10401830u) REGS; LOADALL;
L_10401830:;
  /* 10401830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10401831 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10401833 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10401836 sub esp, 0xc08 */ { u32 a_ = esp, b_ = 0xc08u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040183c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1040183f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401840 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401841 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401843 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401845 mov word ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)(0x0u); }
  /* 1040184c mov ecx, 0x300 */ { ecx = (u32)(0x300u); }
  /* 10401851 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10401855 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10401857 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1040185a lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1040185e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040185f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401860 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401861 push 0x7d9 */ { u32 v_ = 0x7d9u; esp -= 4; M32(esp) = v_; }
  /* 10401866 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401869 call 0x10404960 */ esp -= 4; M32(esp) = 0x1040186eu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x10401869u); RETCHK(0x1040186eu, 0x10401869u); LOADALL;
  /* 1040186e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401870 jl 0x10401888 */ if (LT_) goto L_10401888;
  /* 10401872 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401875 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401878 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 1040187a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040187b mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 1040187f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401880 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10401884 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401885 call dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401888u; SAVEALL; call_ind(c, t_); RETCHK(0x10401888u, 0x10401885u); LOADALL; }
L_10401888:;
  /* 10401888 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401889 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040188a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1040188c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040188d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401890(CPU *c) {
  NATIVE_HOOK(0x10401890u) REGS; LOADALL;
L_10401890:;
  /* 10401890 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401894 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401895 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401896 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401898 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040189c lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 104018a2 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 104018a7 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 104018aa mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 104018ae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104018af lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 104018b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104018b4 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 104018b6 push 0x7da */ { u32 v_ = 0x7dau; esp -= 4; M32(esp) = v_; }
  /* 104018bb lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 104018be mov word ptr [esi + 4], 0x7da */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7dau); }
  /* 104018c4 call 0x10404920 */ esp -= 4; M32(esp) = 0x104018c9u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x104018c4u); RETCHK(0x104018c9u, 0x104018c4u); LOADALL;
  /* 104018c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104018cb jge 0x104018d4 */ if (!LT_) goto L_104018d4;
  /* 104018cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104018ce xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104018d0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104018d1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_104018d4:;
  /* 104018d4 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104018d7 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 104018d9 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104018dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104018dd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104018de call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104018e0u; SAVEALL; call_ind(c, t_); RETCHK(0x104018e0u, 0x104018deu); LOADALL; }
  /* 104018e0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104018e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104018e2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_104018f0(CPU *c) {
  NATIVE_HOOK(0x104018f0u) REGS; LOADALL;
L_104018f0:;
  /* 104018f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104018f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104018f3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 104018f6 mov eax, 0x1210 */ { eax = (u32)(0x1210u); }
  /* 104018fb call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10401900u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x104018fbu); RETCHK(0x10401900u, 0x104018fbu); LOADALL;
  /* 10401900 mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10401905 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10401908 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401909 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040190a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1040190c mov dword ptr [esp + 0x1214], eax */ { const u32 m_ = (u32)(esp + 0x1214u); M32(m_) = (u32)(eax); }
  /* 10401913 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401915 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 1040191d mov ecx, 0x481 */ { ecx = (u32)(0x481u); }
  /* 10401922 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10401926 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10401928 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1040192b lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1040192f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401930 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401931 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401932 push 0x7db */ { u32 v_ = 0x7dbu; esp -= 4; M32(esp) = v_; }
  /* 10401937 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1040193a call 0x10404960 */ esp -= 4; M32(esp) = 0x1040193fu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x1040193au); RETCHK(0x1040193fu, 0x1040193au); LOADALL;
  /* 1040193f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401941 jl 0x1040195e */ if (LT_) goto L_1040195e;
  /* 10401943 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401946 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401949 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 1040194b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040194c mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401950 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401951 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 10401955 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401956 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 1040195a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040195b call dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040195eu; SAVEALL; call_ind(c, t_); RETCHK(0x1040195eu, 0x1040195bu); LOADALL; }
L_1040195e:;
  /* 1040195e mov ecx, dword ptr [esp + 0x1214] */ { const u32 m_ = (u32)(esp + 0x1214u); ecx = (u32)(M32(m_)); }
  /* 10401965 call 0x10404cdd */ esp -= 4; M32(esp) = 0x1040196au; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x10401965u); RETCHK(0x1040196au, 0x10401965u); LOADALL;
  /* 1040196a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040196b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040196c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1040196e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040196f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401980(CPU *c) {
  NATIVE_HOOK(0x10401980u) REGS; LOADALL;
L_10401980:;
  /* 10401980 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401984 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401985 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401986 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401988 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040198c lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401992 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401997 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 1040199a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 1040199e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040199f lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 104019a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104019a4 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 104019a6 push 0x7dc */ { u32 v_ = 0x7dcu; esp -= 4; M32(esp) = v_; }
  /* 104019ab lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 104019ae mov word ptr [esi + 4], 0x7dc */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7dcu); }
  /* 104019b4 call 0x10404920 */ esp -= 4; M32(esp) = 0x104019b9u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x104019b4u); RETCHK(0x104019b9u, 0x104019b4u); LOADALL;
  /* 104019b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104019bb jge 0x104019c4 */ if (!LT_) goto L_104019c4;
  /* 104019bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104019be xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104019c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104019c1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_104019c4:;
  /* 104019c4 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104019c7 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 104019c9 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104019cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104019cd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104019ce call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104019d0u; SAVEALL; call_ind(c, t_); RETCHK(0x104019d0u, 0x104019ceu); LOADALL; }
  /* 104019d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104019d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104019d2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_104019e0(CPU *c) {
  NATIVE_HOOK(0x104019e0u) REGS; LOADALL;
L_104019e0:;
  /* 104019e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104019e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104019e3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 104019e6 sub esp, 0x290 */ { u32 a_ = esp, b_ = 0x290u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104019ec mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 104019f1 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 104019f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104019f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104019f6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 104019f8 mov dword ptr [esp + 0x294], eax */ { const u32 m_ = (u32)(esp + 0x294u); M32(m_) = (u32)(eax); }
  /* 104019ff xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401a01 mov word ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)(0x0u); }
  /* 10401a08 mov ecx, 0xa0 */ { ecx = (u32)(0xa0u); }
  /* 10401a0d lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10401a11 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10401a13 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10401a16 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10401a1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401a1b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401a1c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401a1d push 0x7dd */ { u32 v_ = 0x7ddu; esp -= 4; M32(esp) = v_; }
  /* 10401a22 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401a25 call 0x10404960 */ esp -= 4; M32(esp) = 0x10401a2au; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x10401a25u); RETCHK(0x10401a2au, 0x10401a25u); LOADALL;
  /* 10401a2a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401a2c jl 0x10401a44 */ if (LT_) goto L_10401a44;
  /* 10401a2e mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401a31 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401a34 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10401a36 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401a37 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10401a3b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401a3c lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10401a40 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401a41 call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401a44u; SAVEALL; call_ind(c, t_); RETCHK(0x10401a44u, 0x10401a41u); LOADALL; }
L_10401a44:;
  /* 10401a44 mov ecx, dword ptr [esp + 0x294] */ { const u32 m_ = (u32)(esp + 0x294u); ecx = (u32)(M32(m_)); }
  /* 10401a4b call 0x10404cdd */ esp -= 4; M32(esp) = 0x10401a50u; SAVEALL; F_10404cdd(c); ABI_CHECK(0x10404cddu, 0x10401a4bu); RETCHK(0x10401a50u, 0x10401a4bu); LOADALL;
  /* 10401a50 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401a51 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401a52 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10401a54 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10401a55 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401a60(CPU *c) {
  NATIVE_HOOK(0x10401a60u) REGS; LOADALL;
L_10401a60:;
  /* 10401a60 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401a64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401a65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401a66 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401a68 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401a6e push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401a73 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10401a76 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401a77 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10401a7b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401a7c push 0x7de */ { u32 v_ = 0x7deu; esp -= 4; M32(esp) = v_; }
  /* 10401a81 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401a84 mov word ptr [esi + 4], 0x7de */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7deu); }
  /* 10401a8a mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10401a8c call 0x10404920 */ esp -= 4; M32(esp) = 0x10401a91u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401a8cu); RETCHK(0x10401a91u, 0x10401a8cu); LOADALL;
  /* 10401a91 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401a93 jge 0x10401a9c */ if (!LT_) goto L_10401a9c;
  /* 10401a95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401a96 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401a98 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401a99 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10401a9c:;
  /* 10401a9c mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401a9f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401aa1 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401aa4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401aa5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401aa6 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401aa8u; SAVEALL; call_ind(c, t_); RETCHK(0x10401aa8u, 0x10401aa6u); LOADALL; }
  /* 10401aa8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401aa9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401aaa ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10401ab0(CPU *c) {
  NATIVE_HOOK(0x10401ab0u) REGS; LOADALL;
L_10401ab0:;
  /* 10401ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10401ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10401ab3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10401ab6 sub esp, 0x818 */ { u32 a_ = esp, b_ = 0x818u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401abc mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10401abf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401ac0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401ac1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401ac3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401ac5 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10401acd mov ecx, 0x204 */ { ecx = (u32)(0x204u); }
  /* 10401ad2 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10401ad6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10401ad8 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10401adb lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10401adf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401ae0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401ae1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401ae2 push 0x7df */ { u32 v_ = 0x7dfu; esp -= 4; M32(esp) = v_; }
  /* 10401ae7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401aea call 0x10404960 */ esp -= 4; M32(esp) = 0x10401aefu; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x10401aeau); RETCHK(0x10401aefu, 0x10401aeau); LOADALL;
  /* 10401aef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401af1 jl 0x10401b09 */ if (LT_) goto L_10401b09;
  /* 10401af3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401af6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401af9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10401afb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401afc lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10401b00 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401b01 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10401b05 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401b06 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401b09u; SAVEALL; call_ind(c, t_); RETCHK(0x10401b09u, 0x10401b06u); LOADALL; }
L_10401b09:;
  /* 10401b09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401b0a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401b0b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10401b0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10401b0e ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401b20(CPU *c) {
  NATIVE_HOOK(0x10401b20u) REGS; LOADALL;
L_10401b20:;
  /* 10401b20 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401b24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401b25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401b26 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401b28 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10401b2c lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401b32 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401b37 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10401b3a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401b3e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401b3f lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10401b43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401b44 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10401b46 push 0x7e0 */ { u32 v_ = 0x7e0u; esp -= 4; M32(esp) = v_; }
  /* 10401b4b lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401b4e mov word ptr [esi + 4], 0x7e0 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x7e0u); }
  /* 10401b54 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401b59u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401b54u); RETCHK(0x10401b59u, 0x10401b54u); LOADALL;
  /* 10401b59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401b5b jge 0x10401b64 */ if (!LT_) goto L_10401b64;
  /* 10401b5d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401b5e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401b60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401b61 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401b64:;
  /* 10401b64 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401b67 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401b69 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401b6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401b6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401b6e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401b70u; SAVEALL; call_ind(c, t_); RETCHK(0x10401b70u, 0x10401b6eu); LOADALL; }
  /* 10401b70 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401b71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401b72 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401b80(CPU *c) {
  NATIVE_HOOK(0x10401b80u) REGS; LOADALL;
L_10401b80:;
  /* 10401b80 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401b83 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10401b87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401b88 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401b8a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10401b8c mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10401b90 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10401b94 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401b95 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401b99 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10401b9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401b9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401b9f push 0x7e1 */ { u32 v_ = 0x7e1u; esp -= 4; M32(esp) = v_; }
  /* 10401ba4 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10401ba7 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10401baf call 0x10404960 */ esp -= 4; M32(esp) = 0x10401bb4u; SAVEALL; F_10404960(c); ABI_CHECK(0x10404960u, 0x10401bafu); RETCHK(0x10401bb4u, 0x10401bafu); LOADALL;
  /* 10401bb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401bb6 jl 0x10401bcf */ if (LT_) goto L_10401bcf;
  /* 10401bb8 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10401bbc mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401bbf mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401bc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401bc2 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10401bc6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401bc7 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10401bcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401bcc call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401bcfu; SAVEALL; call_ind(c, t_); RETCHK(0x10401bcfu, 0x10401bccu); LOADALL; }
L_10401bcf:;
  /* 10401bcf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401bd0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10401bd3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10401be0(CPU *c) {
  NATIVE_HOOK(0x10401be0u) REGS; LOADALL;
L_10401be0:;
  /* 10401be0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401be1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10401be3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401be5 je 0x10401bf5 */ if (ZF_) goto L_10401bf5;
  /* 10401be7 call 0x10401010 */ esp -= 4; M32(esp) = 0x10401becu; SAVEALL; F_10401010(c); ABI_CHECK(0x10401010u, 0x10401be7u); RETCHK(0x10401becu, 0x10401be7u); LOADALL;
  /* 10401bec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401bed call 0x10404ca7 */ esp -= 4; M32(esp) = 0x10401bf2u; SAVEALL; F_10404ca7(c); ABI_CHECK(0x10404ca7u, 0x10401bedu); RETCHK(0x10401bf2u, 0x10401bedu); LOADALL;
  /* 10401bf2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10401bf5:;
  /* 10401bf5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401bf6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10401c00(CPU *c) {
  NATIVE_HOOK(0x10401c00u) REGS; LOADALL;
L_10401c00:;
  /* 10401c00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401c04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401c05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401c06 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401c08 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10401c0c lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401c12 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401c17 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10401c1a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401c1e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401c1f lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10401c23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401c24 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10401c26 push 0x45a */ { u32 v_ = 0x45au; esp -= 4; M32(esp) = v_; }
  /* 10401c2b lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401c2e mov word ptr [esi + 4], 0x45a */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x45au); }
  /* 10401c34 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401c39u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401c34u); RETCHK(0x10401c39u, 0x10401c34u); LOADALL;
  /* 10401c39 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401c3b jge 0x10401c44 */ if (!LT_) goto L_10401c44;
  /* 10401c3d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401c3e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401c40 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401c41 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401c44:;
  /* 10401c44 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401c47 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401c49 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401c4c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401c4d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401c4e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401c50u; SAVEALL; call_ind(c, t_); RETCHK(0x10401c50u, 0x10401c4eu); LOADALL; }
  /* 10401c50 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401c51 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401c52 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401c60(CPU *c) {
  NATIVE_HOOK(0x10401c60u) REGS; LOADALL;
L_10401c60:;
  /* 10401c60 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401c64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401c65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401c66 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401c68 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10401c6c lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401c72 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401c77 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10401c7a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401c7e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401c7f lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10401c83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401c84 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10401c86 push 0x44c */ { u32 v_ = 0x44cu; esp -= 4; M32(esp) = v_; }
  /* 10401c8b lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401c8e mov word ptr [esi + 4], 0x44c */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x44cu); }
  /* 10401c94 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401c99u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401c94u); RETCHK(0x10401c99u, 0x10401c94u); LOADALL;
  /* 10401c99 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401c9b jge 0x10401ca4 */ if (!LT_) goto L_10401ca4;
  /* 10401c9d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401c9e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401ca0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401ca1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401ca4:;
  /* 10401ca4 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401ca7 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401ca9 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401cac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401cad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401cae call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401cb0u; SAVEALL; call_ind(c, t_); RETCHK(0x10401cb0u, 0x10401caeu); LOADALL; }
  /* 10401cb0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401cb1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401cb2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401cc0(CPU *c) {
  NATIVE_HOOK(0x10401cc0u) REGS; LOADALL;
L_10401cc0:;
  /* 10401cc0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401cc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401cc5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401cc6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401cc8 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401cce push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401cd3 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10401cd6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401cd7 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10401cdb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401cdc push 0x450 */ { u32 v_ = 0x450u; esp -= 4; M32(esp) = v_; }
  /* 10401ce1 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401ce4 mov word ptr [esi + 4], 0x450 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x450u); }
  /* 10401cea mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10401cec call 0x10404920 */ esp -= 4; M32(esp) = 0x10401cf1u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401cecu); RETCHK(0x10401cf1u, 0x10401cecu); LOADALL;
  /* 10401cf1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401cf3 jge 0x10401cfc */ if (!LT_) goto L_10401cfc;
  /* 10401cf5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401cf6 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401cf8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401cf9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10401cfc:;
  /* 10401cfc mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401cff mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401d01 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401d04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401d05 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401d06 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401d08u; SAVEALL; call_ind(c, t_); RETCHK(0x10401d08u, 0x10401d06u); LOADALL; }
  /* 10401d08 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401d09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401d0a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10401d10(CPU *c) {
  NATIVE_HOOK(0x10401d10u) REGS; LOADALL;
L_10401d10:;
  /* 10401d10 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401d14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401d15 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401d16 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401d18 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10401d1c lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401d22 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401d27 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10401d2a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401d2e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401d2f lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10401d33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401d34 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10401d36 push 0x452 */ { u32 v_ = 0x452u; esp -= 4; M32(esp) = v_; }
  /* 10401d3b lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401d3e mov word ptr [esi + 4], 0x452 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x452u); }
  /* 10401d44 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401d49u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401d44u); RETCHK(0x10401d49u, 0x10401d44u); LOADALL;
  /* 10401d49 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401d4b jge 0x10401d54 */ if (!LT_) goto L_10401d54;
  /* 10401d4d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401d4e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401d50 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401d51 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401d54:;
  /* 10401d54 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401d57 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401d59 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401d5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401d5d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401d5e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401d60u; SAVEALL; call_ind(c, t_); RETCHK(0x10401d60u, 0x10401d5eu); LOADALL; }
  /* 10401d60 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401d61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401d62 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401d70(CPU *c) {
  NATIVE_HOOK(0x10401d70u) REGS; LOADALL;
L_10401d70:;
  /* 10401d70 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401d74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401d75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401d76 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401d78 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401d7e push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401d83 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10401d86 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10401d87 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10401d8b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401d8c push 0x44e */ { u32 v_ = 0x44eu; esp -= 4; M32(esp) = v_; }
  /* 10401d91 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401d94 mov word ptr [esi + 4], 0x44e */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x44eu); }
  /* 10401d9a mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10401d9c call 0x10404920 */ esp -= 4; M32(esp) = 0x10401da1u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401d9cu); RETCHK(0x10401da1u, 0x10401d9cu); LOADALL;
  /* 10401da1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401da3 jge 0x10401dac */ if (!LT_) goto L_10401dac;
  /* 10401da5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401da6 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401da8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401da9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10401dac:;
  /* 10401dac mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401daf mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401db1 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401db4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401db5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401db6 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401db8u; SAVEALL; call_ind(c, t_); RETCHK(0x10401db8u, 0x10401db6u); LOADALL; }
  /* 10401db8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401db9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401dba ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10401dc0(CPU *c) {
  NATIVE_HOOK(0x10401dc0u) REGS; LOADALL;
L_10401dc0:;
  /* 10401dc0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401dc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401dc5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401dc6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401dc8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10401dcc lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401dd2 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401dd7 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10401dda mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401dde push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401ddf lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10401de3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401de4 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10401de6 push 0x454 */ { u32 v_ = 0x454u; esp -= 4; M32(esp) = v_; }
  /* 10401deb lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401dee mov word ptr [esi + 4], 0x454 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x454u); }
  /* 10401df4 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401df9u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401df4u); RETCHK(0x10401df9u, 0x10401df4u); LOADALL;
  /* 10401df9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401dfb jge 0x10401e04 */ if (!LT_) goto L_10401e04;
  /* 10401dfd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401dfe xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401e00 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401e01 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401e04:;
  /* 10401e04 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401e07 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401e09 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401e0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401e0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401e0e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401e10u; SAVEALL; call_ind(c, t_); RETCHK(0x10401e10u, 0x10401e0eu); LOADALL; }
  /* 10401e10 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401e11 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401e12 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401e20(CPU *c) {
  NATIVE_HOOK(0x10401e20u) REGS; LOADALL;
L_10401e20:;
  /* 10401e20 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401e24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401e25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401e26 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401e28 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10401e2c lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401e32 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401e37 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10401e3a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401e3e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401e3f lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10401e43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401e44 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10401e46 push 0x456 */ { u32 v_ = 0x456u; esp -= 4; M32(esp) = v_; }
  /* 10401e4b lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401e4e mov word ptr [esi + 4], 0x456 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x456u); }
  /* 10401e54 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401e59u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401e54u); RETCHK(0x10401e59u, 0x10401e54u); LOADALL;
  /* 10401e59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401e5b jge 0x10401e64 */ if (!LT_) goto L_10401e64;
  /* 10401e5d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401e5e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401e60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401e61 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401e64:;
  /* 10401e64 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401e67 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401e69 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401e6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401e6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401e6e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401e70u; SAVEALL; call_ind(c, t_); RETCHK(0x10401e70u, 0x10401e6eu); LOADALL; }
  /* 10401e70 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401e71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401e72 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401e80(CPU *c) {
  NATIVE_HOOK(0x10401e80u) REGS; LOADALL;
L_10401e80:;
  /* 10401e80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401e84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401e85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401e86 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401e88 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10401e8c lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401e92 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401e97 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10401e9a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401e9e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401e9f lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10401ea3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401ea4 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10401ea6 push 0x458 */ { u32 v_ = 0x458u; esp -= 4; M32(esp) = v_; }
  /* 10401eab lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401eae mov word ptr [esi + 4], 0x458 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x458u); }
  /* 10401eb4 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401eb9u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401eb4u); RETCHK(0x10401eb9u, 0x10401eb4u); LOADALL;
  /* 10401eb9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401ebb jge 0x10401ec4 */ if (!LT_) goto L_10401ec4;
  /* 10401ebd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401ebe xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401ec0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401ec1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401ec4:;
  /* 10401ec4 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401ec7 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401ec9 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401ecc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401ecd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401ece call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401ed0u; SAVEALL; call_ind(c, t_); RETCHK(0x10401ed0u, 0x10401eceu); LOADALL; }
  /* 10401ed0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401ed1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401ed2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401ee0(CPU *c) {
  NATIVE_HOOK(0x10401ee0u) REGS; LOADALL;
L_10401ee0:;
  /* 10401ee0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401ee4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401ee5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401ee6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10401ee8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10401eec lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 10401ef2 push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10401ef7 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10401efa mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10401efe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401eff lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10401f03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401f04 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10401f06 push 0x45c */ { u32 v_ = 0x45cu; esp -= 4; M32(esp) = v_; }
  /* 10401f0b lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10401f0e mov word ptr [esi + 4], 0x45c */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x45cu); }
  /* 10401f14 call 0x10404920 */ esp -= 4; M32(esp) = 0x10401f19u; SAVEALL; F_10404920(c); ABI_CHECK(0x10404920u, 0x10401f14u); RETCHK(0x10401f19u, 0x10401f14u); LOADALL;
  /* 10401f19 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10401f1b jge 0x10401f24 */ if (!LT_) goto L_10401f24;
  /* 10401f1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401f1e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10401f20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401f21 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401f24:;
  /* 10401f24 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10401f27 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10401f29 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10401f2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401f2d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401f2e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10401f30u; SAVEALL; call_ind(c, t_); RETCHK(0x10401f30u, 0x10401f2eu); LOADALL; }
  /* 10401f30 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401f31 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401f32 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401f40(CPU *c) {
  NATIVE_HOOK(0x10401f40u) REGS; LOADALL;
L_10401f40:;
  /* 10401f40 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10401f44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401f45 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10401f49 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10401f4a movzx edi, word ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M16(m_)); }
  /* 10401f4e add esi, -6 */ { u32 a_ = esi, b_ = 0xfffffffau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10401f51 cmp edi, 0x7d1 */ { u32 a_ = edi, b_ = 0x7d1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10401f57 lea edx, [eax + 6] */ edx = (u32)((u32)(eax + 0x6u));
  /* 10401f5a jg 0x10402019 */ if (!(ZF_|LT_)) goto L_10402019;
  /* 10401f60 je 0x1040200a */ if (ZF_) goto L_1040200a;
  /* 10401f66 sub edi, 0x44d */ { u32 a_ = edi, b_ = 0x44du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10401f6c cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10401f6f ja 0x104020a9 */ if (!(CF_|ZF_)) goto L_104020a9;
  /* 10401f75 movzx edi, byte ptr [edi + 0x104020d8] */ { const u32 m_ = (u32)(edi + 0x104020d8u); edi = (u32)(M8(m_)); }
  /* 10401f7c jmp dword ptr [edi*4 + 0x104020b0] */ { const u32 m_ = (u32)(edi * 4u + 0x104020b0u); u32 t_ = M32(m_); switch (t_) { case 0x10401f83u: goto L_10401f83; case 0x10401f92u: goto L_10401f92; case 0x10401fa1u: goto L_10401fa1; case 0x10401fb0u: goto L_10401fb0; case 0x10401fbfu: goto L_10401fbf; case 0x10401fceu: goto L_10401fce; case 0x10401fddu: goto L_10401fdd; case 0x10401fecu: goto L_10401fec; case 0x10401ffbu: goto L_10401ffb; case 0x104020a9u: goto L_104020a9; default: SAVEALL; call_ind(c, t_); return; } }
L_10401f83:;
  /* 10401f83 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401f85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401f86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401f87 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401f88 call 0x10401030 */ esp -= 4; M32(esp) = 0x10401f8du; SAVEALL; F_10401030(c); ABI_CHECK(0x10401030u, 0x10401f88u); RETCHK(0x10401f8du, 0x10401f88u); LOADALL;
  /* 10401f8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401f8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401f8f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401f92:;
  /* 10401f92 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401f94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401f95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401f96 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401f97 call 0x10401100 */ esp -= 4; M32(esp) = 0x10401f9cu; SAVEALL; F_10401100(c); ABI_CHECK(0x10401100u, 0x10401f97u); RETCHK(0x10401f9cu, 0x10401f97u); LOADALL;
  /* 10401f9c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401f9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401f9e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401fa1:;
  /* 10401fa1 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fa3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fa4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fa5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fa6 call 0x10401180 */ esp -= 4; M32(esp) = 0x10401fabu; SAVEALL; F_10401180(c); ABI_CHECK(0x10401180u, 0x10401fa6u); RETCHK(0x10401fabu, 0x10401fa6u); LOADALL;
  /* 10401fab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fad ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401fb0:;
  /* 10401fb0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fb3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fb4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fb5 call 0x10401220 */ esp -= 4; M32(esp) = 0x10401fbau; SAVEALL; F_10401220(c); ABI_CHECK(0x10401220u, 0x10401fb5u); RETCHK(0x10401fbau, 0x10401fb5u); LOADALL;
  /* 10401fba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fbb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fbc ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401fbf:;
  /* 10401fbf mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fc2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fc3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fc4 call 0x104012a0 */ esp -= 4; M32(esp) = 0x10401fc9u; SAVEALL; F_104012a0(c); ABI_CHECK(0x104012a0u, 0x10401fc4u); RETCHK(0x10401fc9u, 0x10401fc4u); LOADALL;
  /* 10401fc9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fcb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401fce:;
  /* 10401fce mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fd2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fd3 call 0x10401080 */ esp -= 4; M32(esp) = 0x10401fd8u; SAVEALL; F_10401080(c); ABI_CHECK(0x10401080u, 0x10401fd3u); RETCHK(0x10401fd8u, 0x10401fd3u); LOADALL;
  /* 10401fd8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fd9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fda ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401fdd:;
  /* 10401fdd mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fdf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fe0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fe1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fe2 call 0x10401300 */ esp -= 4; M32(esp) = 0x10401fe7u; SAVEALL; F_10401300(c); ABI_CHECK(0x10401300u, 0x10401fe2u); RETCHK(0x10401fe7u, 0x10401fe2u); LOADALL;
  /* 10401fe7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fe8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fe9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401fec:;
  /* 10401fec mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401ff0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401ff1 call 0x10401360 */ esp -= 4; M32(esp) = 0x10401ff6u; SAVEALL; F_10401360(c); ABI_CHECK(0x10401360u, 0x10401ff1u); RETCHK(0x10401ff6u, 0x10401ff1u); LOADALL;
  /* 10401ff6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401ff7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401ff8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10401ffb:;
  /* 10401ffb mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401ffd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401ffe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fff push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402000 call 0x104013c0 */ esp -= 4; M32(esp) = 0x10402005u; SAVEALL; F_104013c0(c); ABI_CHECK(0x104013c0u, 0x10402000u); RETCHK(0x10402005u, 0x10402000u); LOADALL;
  /* 10402005 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402006 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402007 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1040200a:;
  /* 1040200a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 1040200c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040200d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040200e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040200f call 0x10401480 */ esp -= 4; M32(esp) = 0x10402014u; SAVEALL; F_10401480(c); ABI_CHECK(0x10401480u, 0x1040200fu); RETCHK(0x10402014u, 0x1040200fu); LOADALL;
  /* 10402014 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402015 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402016 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10402019:;
  /* 10402019 sub edi, 0x7d3 */ { u32 a_ = edi, b_ = 0x7d3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040201f cmp edi, 0xe */ { u32 a_ = edi, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402022 ja 0x104020a9 */ if (!(CF_|ZF_)) goto L_104020a9;
  /* 10402028 movzx edi, byte ptr [edi + 0x10402110] */ { const u32 m_ = (u32)(edi + 0x10402110u); edi = (u32)(M8(m_)); }
  /* 1040202f jmp dword ptr [edi*4 + 0x104020ec] */ { const u32 m_ = (u32)(edi * 4u + 0x104020ecu); u32 t_ = M32(m_); switch (t_) { case 0x10402036u: goto L_10402036; case 0x10402045u: goto L_10402045; case 0x10402054u: goto L_10402054; case 0x10402063u: goto L_10402063; case 0x10402072u: goto L_10402072; case 0x10402081u: goto L_10402081; case 0x10402090u: goto L_10402090; case 0x1040209fu: goto L_1040209f; case 0x104020a9u: goto L_104020a9; default: SAVEALL; call_ind(c, t_); return; } }
L_10402036:;
  /* 10402036 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402038 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402039 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040203a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040203b call 0x10401580 */ esp -= 4; M32(esp) = 0x10402040u; SAVEALL; F_10401580(c); ABI_CHECK(0x10401580u, 0x1040203bu); RETCHK(0x10402040u, 0x1040203bu); LOADALL;
  /* 10402040 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402041 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402042 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10402045:;
  /* 10402045 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402047 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402048 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402049 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040204a call 0x104016c0 */ esp -= 4; M32(esp) = 0x1040204fu; SAVEALL; F_104016c0(c); ABI_CHECK(0x104016c0u, 0x1040204au); RETCHK(0x1040204fu, 0x1040204au); LOADALL;
  /* 1040204f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402050 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402051 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10402054:;
  /* 10402054 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402056 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402057 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402058 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402059 call 0x10401770 */ esp -= 4; M32(esp) = 0x1040205eu; SAVEALL; F_10401770(c); ABI_CHECK(0x10401770u, 0x10402059u); RETCHK(0x1040205eu, 0x10402059u); LOADALL;
  /* 1040205e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040205f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402060 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10402063:;
  /* 10402063 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402065 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402066 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402067 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402068 call 0x10401830 */ esp -= 4; M32(esp) = 0x1040206du; SAVEALL; F_10401830(c); ABI_CHECK(0x10401830u, 0x10402068u); RETCHK(0x1040206du, 0x10402068u); LOADALL;
  /* 1040206d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040206e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040206f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10402072:;
  /* 10402072 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402074 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402075 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402076 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402077 call 0x104018f0 */ esp -= 4; M32(esp) = 0x1040207cu; SAVEALL; F_104018f0(c); ABI_CHECK(0x104018f0u, 0x10402077u); RETCHK(0x1040207cu, 0x10402077u); LOADALL;
  /* 1040207c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040207d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040207e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10402081:;
  /* 10402081 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402083 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402084 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402085 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402086 call 0x104019e0 */ esp -= 4; M32(esp) = 0x1040208bu; SAVEALL; F_104019e0(c); ABI_CHECK(0x104019e0u, 0x10402086u); RETCHK(0x1040208bu, 0x10402086u); LOADALL;
  /* 1040208b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040208c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040208d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10402090:;
  /* 10402090 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402092 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402093 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402094 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402095 call 0x10401ab0 */ esp -= 4; M32(esp) = 0x1040209au; SAVEALL; F_10401ab0(c); ABI_CHECK(0x10401ab0u, 0x10402095u); RETCHK(0x1040209au, 0x10402095u); LOADALL;
  /* 1040209a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040209b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040209c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1040209f:;
  /* 1040209f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 104020a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104020a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104020a3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104020a4 call 0x10401b80 */ esp -= 4; M32(esp) = 0x104020a9u; SAVEALL; F_10401b80(c); ABI_CHECK(0x10401b80u, 0x104020a4u); RETCHK(0x104020a9u, 0x104020a4u); LOADALL;
L_104020a9:;
  /* 104020a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104020aa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104020ab ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401f83(CPU *c) {
  NATIVE_HOOK(0x10401f83u) REGS; LOADALL;
L_10401f83:;
  /* 10401f83 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401f85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401f86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401f87 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401f88 call 0x10401030 */ esp -= 4; M32(esp) = 0x10401f8du; SAVEALL; F_10401030(c); ABI_CHECK(0x10401030u, 0x10401f88u); RETCHK(0x10401f8du, 0x10401f88u); LOADALL;
  /* 10401f8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401f8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401f8f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401f92(CPU *c) {
  NATIVE_HOOK(0x10401f92u) REGS; LOADALL;
L_10401f92:;
  /* 10401f92 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401f94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401f95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401f96 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401f97 call 0x10401100 */ esp -= 4; M32(esp) = 0x10401f9cu; SAVEALL; F_10401100(c); ABI_CHECK(0x10401100u, 0x10401f97u); RETCHK(0x10401f9cu, 0x10401f97u); LOADALL;
  /* 10401f9c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401f9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401f9e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401fa1(CPU *c) {
  NATIVE_HOOK(0x10401fa1u) REGS; LOADALL;
L_10401fa1:;
  /* 10401fa1 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fa3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fa4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fa5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fa6 call 0x10401180 */ esp -= 4; M32(esp) = 0x10401fabu; SAVEALL; F_10401180(c); ABI_CHECK(0x10401180u, 0x10401fa6u); RETCHK(0x10401fabu, 0x10401fa6u); LOADALL;
  /* 10401fab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fad ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401fb0(CPU *c) {
  NATIVE_HOOK(0x10401fb0u) REGS; LOADALL;
L_10401fb0:;
  /* 10401fb0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fb3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fb4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fb5 call 0x10401220 */ esp -= 4; M32(esp) = 0x10401fbau; SAVEALL; F_10401220(c); ABI_CHECK(0x10401220u, 0x10401fb5u); RETCHK(0x10401fbau, 0x10401fb5u); LOADALL;
  /* 10401fba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fbb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fbc ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401fbf(CPU *c) {
  NATIVE_HOOK(0x10401fbfu) REGS; LOADALL;
L_10401fbf:;
  /* 10401fbf mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fc2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fc3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fc4 call 0x104012a0 */ esp -= 4; M32(esp) = 0x10401fc9u; SAVEALL; F_104012a0(c); ABI_CHECK(0x104012a0u, 0x10401fc4u); RETCHK(0x10401fc9u, 0x10401fc4u); LOADALL;
  /* 10401fc9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fcb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401fce(CPU *c) {
  NATIVE_HOOK(0x10401fceu) REGS; LOADALL;
L_10401fce:;
  /* 10401fce mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fd2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fd3 call 0x10401080 */ esp -= 4; M32(esp) = 0x10401fd8u; SAVEALL; F_10401080(c); ABI_CHECK(0x10401080u, 0x10401fd3u); RETCHK(0x10401fd8u, 0x10401fd3u); LOADALL;
  /* 10401fd8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fd9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fda ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401fdd(CPU *c) {
  NATIVE_HOOK(0x10401fddu) REGS; LOADALL;
L_10401fdd:;
  /* 10401fdd mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fdf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fe0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fe1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401fe2 call 0x10401300 */ esp -= 4; M32(esp) = 0x10401fe7u; SAVEALL; F_10401300(c); ABI_CHECK(0x10401300u, 0x10401fe2u); RETCHK(0x10401fe7u, 0x10401fe2u); LOADALL;
  /* 10401fe7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401fe8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401fe9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401fec(CPU *c) {
  NATIVE_HOOK(0x10401fecu) REGS; LOADALL;
L_10401fec:;
  /* 10401fec mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401fee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401fef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401ff0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10401ff1 call 0x10401360 */ esp -= 4; M32(esp) = 0x10401ff6u; SAVEALL; F_10401360(c); ABI_CHECK(0x10401360u, 0x10401ff1u); RETCHK(0x10401ff6u, 0x10401ff1u); LOADALL;
  /* 10401ff6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10401ff7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10401ff8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10401ffb(CPU *c) {
  NATIVE_HOOK(0x10401ffbu) REGS; LOADALL;
L_10401ffb:;
  /* 10401ffb mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10401ffd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10401ffe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10401fff push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402000 call 0x104013c0 */ esp -= 4; M32(esp) = 0x10402005u; SAVEALL; F_104013c0(c); ABI_CHECK(0x104013c0u, 0x10402000u); RETCHK(0x10402005u, 0x10402000u); LOADALL;
  /* 10402005 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402006 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402007 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10402036(CPU *c) {
  NATIVE_HOOK(0x10402036u) REGS; LOADALL;
L_10402036:;
  /* 10402036 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402038 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402039 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040203a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040203b call 0x10401580 */ esp -= 4; M32(esp) = 0x10402040u; SAVEALL; F_10401580(c); ABI_CHECK(0x10401580u, 0x1040203bu); RETCHK(0x10402040u, 0x1040203bu); LOADALL;
  /* 10402040 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402041 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402042 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10402045(CPU *c) {
  NATIVE_HOOK(0x10402045u) REGS; LOADALL;
L_10402045:;
  /* 10402045 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402047 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402048 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402049 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040204a call 0x104016c0 */ esp -= 4; M32(esp) = 0x1040204fu; SAVEALL; F_104016c0(c); ABI_CHECK(0x104016c0u, 0x1040204au); RETCHK(0x1040204fu, 0x1040204au); LOADALL;
  /* 1040204f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402050 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402051 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10402054(CPU *c) {
  NATIVE_HOOK(0x10402054u) REGS; LOADALL;
L_10402054:;
  /* 10402054 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402056 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402057 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402058 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402059 call 0x10401770 */ esp -= 4; M32(esp) = 0x1040205eu; SAVEALL; F_10401770(c); ABI_CHECK(0x10401770u, 0x10402059u); RETCHK(0x1040205eu, 0x10402059u); LOADALL;
  /* 1040205e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040205f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402060 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10402063(CPU *c) {
  NATIVE_HOOK(0x10402063u) REGS; LOADALL;
L_10402063:;
  /* 10402063 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402065 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402066 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402067 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402068 call 0x10401830 */ esp -= 4; M32(esp) = 0x1040206du; SAVEALL; F_10401830(c); ABI_CHECK(0x10401830u, 0x10402068u); RETCHK(0x1040206du, 0x10402068u); LOADALL;
  /* 1040206d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040206e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040206f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10402072(CPU *c) {
  NATIVE_HOOK(0x10402072u) REGS; LOADALL;
L_10402072:;
  /* 10402072 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402074 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402075 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402076 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402077 call 0x104018f0 */ esp -= 4; M32(esp) = 0x1040207cu; SAVEALL; F_104018f0(c); ABI_CHECK(0x104018f0u, 0x10402077u); RETCHK(0x1040207cu, 0x10402077u); LOADALL;
  /* 1040207c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040207d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040207e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10402081(CPU *c) {
  NATIVE_HOOK(0x10402081u) REGS; LOADALL;
L_10402081:;
  /* 10402081 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402083 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402084 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402085 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402086 call 0x104019e0 */ esp -= 4; M32(esp) = 0x1040208bu; SAVEALL; F_104019e0(c); ABI_CHECK(0x104019e0u, 0x10402086u); RETCHK(0x1040208bu, 0x10402086u); LOADALL;
  /* 1040208b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040208c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040208d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10402090(CPU *c) {
  NATIVE_HOOK(0x10402090u) REGS; LOADALL;
L_10402090:;
  /* 10402090 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10402092 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402093 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402094 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402095 call 0x10401ab0 */ esp -= 4; M32(esp) = 0x1040209au; SAVEALL; F_10401ab0(c); ABI_CHECK(0x10401ab0u, 0x10402095u); RETCHK(0x1040209au, 0x10402095u); LOADALL;
  /* 1040209a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040209b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040209c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1040209f(CPU *c) {
  NATIVE_HOOK(0x1040209fu) REGS; LOADALL;
L_1040209f:;
  /* 1040209f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 104020a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104020a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104020a3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104020a4 call 0x10401b80 */ esp -= 4; M32(esp) = 0x104020a9u; SAVEALL; F_10401b80(c); ABI_CHECK(0x10401b80u, 0x104020a4u); RETCHK(0x104020a9u, 0x104020a4u); LOADALL;
  /* 104020a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104020aa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104020ab ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_104020a9(CPU *c) {
  NATIVE_HOOK(0x104020a9u) REGS; LOADALL;
L_104020a9:;
  /* 104020a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104020aa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104020ab ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_104020b0(CPU *c) {
  NATIVE_HOOK(0x104020b0u) REGS; LOADALL;
L_104020b0:;
  /* 104020b0 sbb dword ptr [edi], 0x40 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x40u; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); M32(m_) = (u32)(r_); }
  /* 104020b3 adc byte ptr [eax - 0x6defbfe1], dh */ { const u32 m_ = (u32)(eax + 0x9210401fu); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 104020b9 pop ds */ TRAP(0x104020b9u, "unimpl pop ds");
  /* 104020ba inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020bb adc byte ptr [ecx - 0x40efbfe1], ah */ { const u32 m_ = (u32)(ecx + 0xbf10401fu); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 104020c1 pop ds */ TRAP(0x104020c1u, "unimpl pop ds");
  /* 104020c2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020c3 adc ch, bl */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 104020c5 pop ds */ TRAP(0x104020c5u, "unimpl pop ds");
  /* 104020c6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020c7 adc ah, ch */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 104020c9 pop ds */ TRAP(0x104020c9u, "unimpl pop ds");
  /* 104020ca inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020cb adc dh, cl */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); edx = (edx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 104020cd pop ds */ TRAP(0x104020cdu, "unimpl pop ds");
  /* 104020ce inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020cf adc bl, bh */ { u32 a_ = (ebx & 0xffu), b_ = ((ebx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104020d1 pop ds */ TRAP(0x104020d1u, "unimpl pop ds");
  /* 104020d2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020d3 adc byte ptr [ecx + 0x104020], ch */ { const u32 m_ = (u32)(ecx + 0x104020u); u32 a_ = M8(m_), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 104020d9 or dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104020db or dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104020dd or dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104020df or dword ptr [ecx + ecx], eax */ { const u32 m_ = (u32)(ecx + ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104020e2 add eax, 0x7090609 */ { u32 a_ = eax, b_ = 0x7090609u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104020e7 or dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104020e9 lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
  /* 104020ec and byte ptr ss:[eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f0 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020f1 and byte ptr [eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f4 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 104020f5 and byte ptr [eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f8 arpl word ptr [eax], sp */ TRAP(0x104020f8u, "arpl");
}

void F_104020d8(CPU *c) {
  NATIVE_HOOK(0x104020d8u) REGS; LOADALL;
L_104020d8:;
  /* 104020d8 add byte ptr [ecx], cl */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020da add dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 104020dc add cl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104020de add ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104020e0 add al, 9 */ { u32 a_ = (eax & 0xffu), b_ = 0x9u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 104020e2 add eax, 0x7090609 */ { u32 a_ = eax, b_ = 0x7090609u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 104020e7 or dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104020e9 lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
  /* 104020ec and byte ptr ss:[eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f0 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020f1 and byte ptr [eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f4 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 104020f5 and byte ptr [eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f8 arpl word ptr [eax], sp */ TRAP(0x104020f8u, "arpl");
}

void F_104020ec(CPU *c) {
  NATIVE_HOOK(0x104020ecu) REGS; LOADALL;
L_104020ec:;
  /* 104020ec and byte ptr ss:[eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f0 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104020f1 and byte ptr [eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f4 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 104020f5 and byte ptr [eax + 0x10], al */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 104020f8 arpl word ptr [eax], sp */ TRAP(0x104020f8u, "arpl");
}

void F_10402110(CPU *c) {
  NATIVE_HOOK(0x10402110u) REGS; LOADALL;
L_10402110:;
  /* 10402110 add byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10402112 add dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10402114 add cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10402116 add ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10402118 add al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1040211a add eax, 0x7080608 */ { u32 a_ = eax, b_ = 0x7080608u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040211f int3 */ TRAP(0x1040211fu, "int3");
}

void F_10402120(CPU *c) {
  NATIVE_HOOK(0x10402120u) REGS; LOADALL;
L_10402120:;
  /* 10402120 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10402122 push 0x1040a9db */ { u32 v_ = 0x1040a9dbu; esp -= 4; M32(esp) = v_; }
  /* 10402127 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1040212d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040212e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10402135 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402136 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402137 push 0x12018 */ { u32 v_ = 0x12018u; esp -= 4; M32(esp) = v_; }
  /* 1040213c call 0x10404d2d */ esp -= 4; M32(esp) = 0x10402141u; SAVEALL; F_10404d2d(c); ABI_CHECK(0x10404d2du, 0x1040213cu); RETCHK(0x10402141u, 0x1040213cu); LOADALL;
  /* 10402141 mov esi, eax */ { esi = (u32)(eax); }
  /* 10402143 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10402146 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 1040214a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040214c mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 10402154 je 0x1040217d */ if (ZF_) goto L_1040217d;
  /* 10402156 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10402159 mov dword ptr [esi], 0x1040b130 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1040b130u); }
  /* 1040215f call 0x104048e0 */ esp -= 4; M32(esp) = 0x10402164u; SAVEALL; F_104048e0(c); ABI_CHECK(0x104048e0u, 0x1040215fu); RETCHK(0x10402164u, 0x1040215fu); LOADALL;
  /* 10402164 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 1040216b mov eax, esi */ { eax = (u32)(esi); }
  /* 1040216d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040216e mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10402172 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10402179 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040217c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040217d:;
  /* 1040217d mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10402181 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402183 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402184 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1040218b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040218e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104021a0(CPU *c) {
  NATIVE_HOOK(0x104021a0u) REGS; LOADALL;
L_104021a0:;
  /* 104021a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104021a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104021a2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104021a6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104021ac push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 104021b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104021b2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104021b4 call 0x10404c20 */ esp -= 4; M32(esp) = 0x104021b9u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x104021b4u); RETCHK(0x104021b9u, 0x104021b4u); LOADALL;
  /* 104021b9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104021bc je 0x1040221f */ if (ZF_) goto L_1040221f;
  /* 104021be xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104021c0 mov al, byte ptr [edi + 0x100] */ { const u32 m_ = (u32)(edi + 0x100u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104021c6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104021c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104021c9 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104021ceu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104021c9u); RETCHK(0x104021ceu, 0x104021c9u); LOADALL;
  /* 104021ce cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104021d1 je 0x1040221f */ if (ZF_) goto L_1040221f;
  /* 104021d3 mov ecx, dword ptr [edi + 0x104] */ { const u32 m_ = (u32)(edi + 0x104u); ecx = (u32)(M32(m_)); }
  /* 104021d9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104021da mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104021dc call 0x10404af0 */ esp -= 4; M32(esp) = 0x104021e1u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104021dcu); RETCHK(0x104021e1u, 0x104021dcu); LOADALL;
  /* 104021e1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104021e4 je 0x1040221f */ if (ZF_) goto L_1040221f;
  /* 104021e6 mov edx, dword ptr [edi + 0x108] */ { const u32 m_ = (u32)(edi + 0x108u); edx = (u32)(M32(m_)); }
  /* 104021ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104021ed mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104021ef call 0x10404af0 */ esp -= 4; M32(esp) = 0x104021f4u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104021efu); RETCHK(0x104021f4u, 0x104021efu); LOADALL;
  /* 104021f4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104021f7 je 0x1040221f */ if (ZF_) goto L_1040221f;
  /* 104021f9 mov eax, dword ptr [edi + 0x10c] */ { const u32 m_ = (u32)(edi + 0x10cu); eax = (u32)(M32(m_)); }
  /* 104021ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402200 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402202 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402207u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402202u); RETCHK(0x10402207u, 0x10402202u); LOADALL;
  /* 10402207 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040220a je 0x1040221f */ if (ZF_) goto L_1040221f;
  /* 1040220c mov ecx, dword ptr [edi + 0x110] */ { const u32 m_ = (u32)(edi + 0x110u); ecx = (u32)(M32(m_)); }
  /* 10402212 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402213 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402215 call 0x10404af0 */ esp -= 4; M32(esp) = 0x1040221au; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402215u); RETCHK(0x1040221au, 0x10402215u); LOADALL;
  /* 1040221a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040221d jne 0x10402227 */ if (!ZF_) goto L_10402227;
L_1040221f:;
  /* 1040221f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402220 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402223 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402224 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402227:;
  /* 10402227 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402229 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040222eu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402229u); RETCHK(0x1040222eu, 0x10402229u); LOADALL;
  /* 1040222e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040222f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402230 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402240(CPU *c) {
  NATIVE_HOOK(0x10402240u) REGS; LOADALL;
L_10402240:;
  /* 10402240 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402241 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402242 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402246 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040224c push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10402251 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402252 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402254 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402259u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402254u); RETCHK(0x10402259u, 0x10402254u); LOADALL;
  /* 10402259 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040225c jne 0x10402266 */ if (!ZF_) goto L_10402266;
L_1040225e:;
  /* 1040225e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040225f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402262 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402263 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402266:;
  /* 10402266 lea eax, [edi + 0x100] */ eax = (u32)((u32)(edi + 0x100u));
  /* 1040226c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040226d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040226f call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402274u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x1040226fu); RETCHK(0x10402274u, 0x1040226fu); LOADALL;
  /* 10402274 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402277 je 0x1040225e */ if (ZF_) goto L_1040225e;
  /* 10402279 lea ecx, [edi + 0x104] */ ecx = (u32)((u32)(edi + 0x104u));
  /* 1040227f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402280 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402282 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402287u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402282u); RETCHK(0x10402287u, 0x10402282u); LOADALL;
  /* 10402287 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040228a je 0x1040225e */ if (ZF_) goto L_1040225e;
  /* 1040228c lea edx, [edi + 0x108] */ edx = (u32)((u32)(edi + 0x108u));
  /* 10402292 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402293 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402295 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040229au; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402295u); RETCHK(0x1040229au, 0x10402295u); LOADALL;
  /* 1040229a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040229d je 0x1040225e */ if (ZF_) goto L_1040225e;
  /* 1040229f lea eax, [edi + 0x10c] */ eax = (u32)((u32)(edi + 0x10cu));
  /* 104022a5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104022a6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104022a8 call 0x10404b30 */ esp -= 4; M32(esp) = 0x104022adu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x104022a8u); RETCHK(0x104022adu, 0x104022a8u); LOADALL;
  /* 104022ad cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104022b0 je 0x1040225e */ if (ZF_) goto L_1040225e;
  /* 104022b2 add edi, 0x110 */ { u32 a_ = edi, b_ = 0x110u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104022b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104022b9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104022bb call 0x10404b30 */ esp -= 4; M32(esp) = 0x104022c0u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x104022bbu); RETCHK(0x104022c0u, 0x104022bbu); LOADALL;
  /* 104022c0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104022c1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 104022c3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104022c5 and eax, 0x115 */ { u32 a_ = eax, b_ = 0x115u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104022ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104022cb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104022cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104022cd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104022d0(CPU *c) {
  NATIVE_HOOK(0x104022d0u) REGS; LOADALL;
L_104022d0:;
  /* 104022d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104022d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104022d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104022d6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 104022d8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104022de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104022df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104022e1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104022e6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104022e1u); RETCHK(0x104022e6u, 0x104022e1u); LOADALL;
  /* 104022e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104022e9 je 0x10402331 */ if (ZF_) goto L_10402331;
  /* 104022eb mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104022ee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104022ef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104022f1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104022f6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104022f1u); RETCHK(0x104022f6u, 0x104022f1u); LOADALL;
  /* 104022f6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104022f9 je 0x10402331 */ if (ZF_) goto L_10402331;
  /* 104022fb xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104022fd mov dl, byte ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402300 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402302 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402303 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402308u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402303u); RETCHK(0x10402308u, 0x10402303u); LOADALL;
  /* 10402308 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040230b je 0x10402331 */ if (ZF_) goto L_10402331;
  /* 1040230d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040230f mov al, byte ptr [edi + 9] */ { const u32 m_ = (u32)(edi + 0x9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402312 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402314 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402315 call 0x10404a10 */ esp -= 4; M32(esp) = 0x1040231au; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402315u); RETCHK(0x1040231au, 0x10402315u); LOADALL;
  /* 1040231a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040231d je 0x10402331 */ if (ZF_) goto L_10402331;
  /* 1040231f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10402321 mov cl, byte ptr [edi + 0xa] */ { const u32 m_ = (u32)(edi + 0xau); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402324 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402325 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402327 call 0x10404a10 */ esp -= 4; M32(esp) = 0x1040232cu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402327u); RETCHK(0x1040232cu, 0x10402327u); LOADALL;
  /* 1040232c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040232f jne 0x10402339 */ if (!ZF_) goto L_10402339;
L_10402331:;
  /* 10402331 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402332 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402335 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402336 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402339:;
  /* 10402339 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040233b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402340u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040233bu); RETCHK(0x10402340u, 0x1040233bu); LOADALL;
  /* 10402340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402341 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402342 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402350(CPU *c) {
  NATIVE_HOOK(0x10402350u) REGS; LOADALL;
L_10402350:;
  /* 10402350 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402351 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402352 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402356 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040235c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040235d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040235f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402364u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040235fu); RETCHK(0x10402364u, 0x1040235fu); LOADALL;
  /* 10402364 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402367 jne 0x10402371 */ if (!ZF_) goto L_10402371;
L_10402369:;
  /* 10402369 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040236a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040236d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040236e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402371:;
  /* 10402371 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10402374 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402375 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402377 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040237cu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402377u); RETCHK(0x1040237cu, 0x10402377u); LOADALL;
  /* 1040237c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040237f je 0x10402369 */ if (ZF_) goto L_10402369;
  /* 10402381 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10402384 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402385 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402387 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040238cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402387u); RETCHK(0x1040238cu, 0x10402387u); LOADALL;
  /* 1040238c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040238f je 0x10402369 */ if (ZF_) goto L_10402369;
  /* 10402391 lea edx, [edi + 9] */ edx = (u32)((u32)(edi + 0x9u));
  /* 10402394 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402395 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402397 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040239cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402397u); RETCHK(0x1040239cu, 0x10402397u); LOADALL;
  /* 1040239c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040239f je 0x10402369 */ if (ZF_) goto L_10402369;
  /* 104023a1 add edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104023a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104023a5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104023a7 call 0x10404a40 */ esp -= 4; M32(esp) = 0x104023acu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x104023a7u); RETCHK(0x104023acu, 0x104023a7u); LOADALL;
  /* 104023ac inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104023ad neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 104023af sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104023b1 and eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104023b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104023b5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104023b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104023b7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104023c0(CPU *c) {
  NATIVE_HOOK(0x104023c0u) REGS; LOADALL;
L_104023c0:;
  /* 104023c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104023c1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104023c2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104023c3 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 104023c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104023c9 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104023cd mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 104023cf lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 104023d5 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 104023d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104023da call 0x10404a70 */ esp -= 4; M32(esp) = 0x104023dfu; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104023dau); RETCHK(0x104023dfu, 0x104023dau); LOADALL;
  /* 104023df cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104023e2 jne 0x104023ec */ if (!ZF_) goto L_104023ec;
  /* 104023e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104023e5 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104023e7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104023e8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104023e9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104023ec:;
  /* 104023ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104023ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104023ee xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104023f0 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_104023f3:;
  /* 104023f3 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 104023f7 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104023f9 jge 0x10402411 */ if (!LT_) goto L_10402411;
  /* 104023fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104023fc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104023fe call 0x104022d0 */ esp -= 4; M32(esp) = 0x10402403u; SAVEALL; F_104022d0(c); ABI_CHECK(0x104022d0u, 0x104023feu); RETCHK(0x10402403u, 0x104023feu); LOADALL;
  /* 10402403 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402406 je 0x10402422 */ if (ZF_) goto L_10402422;
  /* 10402408 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402409 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040240c cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040240f jl 0x104023f3 */ if (LT_) goto L_104023f3;
L_10402411:;
  /* 10402411 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10402415 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040241au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402415u); RETCHK(0x1040241au, 0x10402415u); LOADALL;
  /* 1040241a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040241b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040241c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040241d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040241e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040241f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402422:;
  /* 10402422 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402423 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402424 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402425 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402428 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402429 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040242a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402430(CPU *c) {
  NATIVE_HOOK(0x10402430u) REGS; LOADALL;
L_10402430:;
  /* 10402430 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402431 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402432 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10402436 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10402438 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402439 lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 1040243f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402444u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x1040243fu); RETCHK(0x10402444u, 0x1040243fu); LOADALL;
  /* 10402444 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402447 jne 0x10402450 */ if (!ZF_) goto L_10402450;
  /* 10402449 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040244a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040244c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040244d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402450:;
  /* 10402450 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402451 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402452 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10402454 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10402457:;
  /* 10402457 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1040245b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040245d jge 0x10402475 */ if (!LT_) goto L_10402475;
  /* 1040245f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402460 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402462 call 0x10402350 */ esp -= 4; M32(esp) = 0x10402467u; SAVEALL; F_10402350(c); ABI_CHECK(0x10402350u, 0x10402462u); RETCHK(0x10402467u, 0x10402462u); LOADALL;
  /* 10402467 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040246a je 0x10402481 */ if (ZF_) goto L_10402481;
  /* 1040246c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040246d add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402470 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402473 jl 0x10402457 */ if (LT_) goto L_10402457;
L_10402475:;
  /* 10402475 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402476 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402477 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402478 mov eax, 0xc4 */ { eax = (u32)(0xc4u); }
  /* 1040247d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040247e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402481:;
  /* 10402481 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402482 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402483 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402484 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402487 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402488 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402490(CPU *c) {
  NATIVE_HOOK(0x10402490u) REGS; LOADALL;
L_10402490:;
  /* 10402490 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402491 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402492 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402493 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 10402497 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402499 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1040249d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1040249f lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 104024a5 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 104024a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104024aa call 0x10404a70 */ esp -= 4; M32(esp) = 0x104024afu; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104024aau); RETCHK(0x104024afu, 0x104024aau); LOADALL;
  /* 104024af cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104024b2 jne 0x104024bc */ if (!ZF_) goto L_104024bc;
  /* 104024b4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104024b5 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104024b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104024b8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104024b9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104024bc:;
  /* 104024bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104024bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104024be xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104024c0 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_104024c3:;
  /* 104024c3 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 104024c7 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104024c9 jge 0x104024e4 */ if (!LT_) goto L_104024e4;
  /* 104024cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104024cc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104024ce call 0x104023c0 */ esp -= 4; M32(esp) = 0x104024d3u; SAVEALL; F_104023c0(c); ABI_CHECK(0x104023c0u, 0x104024ceu); RETCHK(0x104024d3u, 0x104024ceu); LOADALL;
  /* 104024d3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104024d6 je 0x104024f5 */ if (ZF_) goto L_104024f5;
  /* 104024d8 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104024d9 add edi, 0xc4 */ { u32 a_ = edi, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104024df cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104024e2 jl 0x104024c3 */ if (LT_) goto L_104024c3;
L_104024e4:;
  /* 104024e4 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 104024e8 call 0x10404a00 */ esp -= 4; M32(esp) = 0x104024edu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104024e8u); RETCHK(0x104024edu, 0x104024e8u); LOADALL;
  /* 104024ed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104024ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104024ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104024f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104024f1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104024f2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104024f5:;
  /* 104024f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104024f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104024f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104024f8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104024fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104024fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104024fd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402500(CPU *c) {
  NATIVE_HOOK(0x10402500u) REGS; LOADALL;
L_10402500:;
  /* 10402500 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402501 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402502 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10402506 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10402508 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402509 lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 1040250f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402514u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x1040250fu); RETCHK(0x10402514u, 0x1040250fu); LOADALL;
  /* 10402514 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402517 jne 0x10402520 */ if (!ZF_) goto L_10402520;
  /* 10402519 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040251a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040251c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040251d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402520:;
  /* 10402520 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402521 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402522 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10402524 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10402527:;
  /* 10402527 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1040252b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040252d jge 0x10402548 */ if (!LT_) goto L_10402548;
  /* 1040252f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402530 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402532 call 0x10402430 */ esp -= 4; M32(esp) = 0x10402537u; SAVEALL; F_10402430(c); ABI_CHECK(0x10402430u, 0x10402532u); RETCHK(0x10402537u, 0x10402532u); LOADALL;
  /* 10402537 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040253a je 0x10402554 */ if (ZF_) goto L_10402554;
  /* 1040253c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040253d add edi, 0xc4 */ { u32 a_ = edi, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402543 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402546 jl 0x10402527 */ if (LT_) goto L_10402527;
L_10402548:;
  /* 10402548 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402549 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040254a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040254b mov eax, 0xc44 */ { eax = (u32)(0xc44u); }
  /* 10402550 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402551 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402554:;
  /* 10402554 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402555 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402556 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402557 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040255a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040255b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402560(CPU *c) {
  NATIVE_HOOK(0x10402560u) REGS; LOADALL;
L_10402560:;
  /* 10402560 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402561 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10402565 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402566 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402567 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10402569 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 1040256e lea edi, [esi + 0x10000] */ edi = (u32)((u32)(esi + 0x10000u));
  /* 10402574 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402575 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402577 call 0x10404c20 */ esp -= 4; M32(esp) = 0x1040257cu; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402577u); RETCHK(0x1040257cu, 0x10402577u); LOADALL;
  /* 1040257c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040257f je 0x10402594 */ if (ZF_) goto L_10402594;
  /* 10402581 add ebx, 0x100 */ { u32 a_ = ebx, b_ = 0x100u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10402587 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402588 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040258a call 0x104023c0 */ esp -= 4; M32(esp) = 0x1040258fu; SAVEALL; F_104023c0(c); ABI_CHECK(0x104023c0u, 0x1040258au); RETCHK(0x1040258fu, 0x1040258au); LOADALL;
  /* 1040258f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402592 jne 0x1040259d */ if (!ZF_) goto L_1040259d;
L_10402594:;
  /* 10402594 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402595 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402596 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402599 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040259a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040259d:;
  /* 1040259d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1040259f call 0x10404a00 */ esp -= 4; M32(esp) = 0x104025a4u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040259fu); RETCHK(0x104025a4u, 0x1040259fu); LOADALL;
  /* 104025a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104025a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104025a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104025a7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104025b0(CPU *c) {
  NATIVE_HOOK(0x104025b0u) REGS; LOADALL;
L_104025b0:;
  /* 104025b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104025b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104025b2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104025b6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 104025b8 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 104025bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104025be lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 104025c4 call 0x10404b70 */ esp -= 4; M32(esp) = 0x104025c9u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x104025c4u); RETCHK(0x104025c9u, 0x104025c4u); LOADALL;
  /* 104025c9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104025cc jne 0x104025d5 */ if (!ZF_) goto L_104025d5;
  /* 104025ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104025cf or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104025d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104025d2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104025d5:;
  /* 104025d5 add edi, 0x100 */ { u32 a_ = edi, b_ = 0x100u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104025db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104025dc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104025de call 0x10402430 */ esp -= 4; M32(esp) = 0x104025e3u; SAVEALL; F_10402430(c); ABI_CHECK(0x10402430u, 0x104025deu); RETCHK(0x104025e3u, 0x104025deu); LOADALL;
  /* 104025e3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104025e4 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 104025e6 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104025e8 and eax, 0x1c5 */ { u32 a_ = eax, b_ = 0x1c5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104025ed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104025ee dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104025ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104025f0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402600(CPU *c) {
  NATIVE_HOOK(0x10402600u) REGS; LOADALL;
L_10402600:;
  /* 10402600 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402601 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402602 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402606 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10402608 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040260e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040260f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402611 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402616u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402611u); RETCHK(0x10402616u, 0x10402611u); LOADALL;
  /* 10402616 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402619 je 0x10402651 */ if (ZF_) goto L_10402651;
  /* 1040261b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1040261d mov cl, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402620 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402621 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402623 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402628u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402623u); RETCHK(0x10402628u, 0x10402623u); LOADALL;
  /* 10402628 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040262b je 0x10402651 */ if (ZF_) goto L_10402651;
  /* 1040262d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040262f mov dl, byte ptr [edi + 5] */ { const u32 m_ = (u32)(edi + 0x5u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402632 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402634 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402635 call 0x10404a10 */ esp -= 4; M32(esp) = 0x1040263au; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402635u); RETCHK(0x1040263au, 0x10402635u); LOADALL;
  /* 1040263a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040263d je 0x10402651 */ if (ZF_) goto L_10402651;
  /* 1040263f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402641 mov al, byte ptr [edi + 6] */ { const u32 m_ = (u32)(edi + 0x6u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402644 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402646 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402647 call 0x10404a10 */ esp -= 4; M32(esp) = 0x1040264cu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402647u); RETCHK(0x1040264cu, 0x10402647u); LOADALL;
  /* 1040264c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040264f jne 0x10402659 */ if (!ZF_) goto L_10402659;
L_10402651:;
  /* 10402651 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402652 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402655 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402656 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402659:;
  /* 10402659 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040265b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402660u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040265bu); RETCHK(0x10402660u, 0x1040265bu); LOADALL;
  /* 10402660 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402661 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402662 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402670(CPU *c) {
  NATIVE_HOOK(0x10402670u) REGS; LOADALL;
L_10402670:;
  /* 10402670 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402671 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402672 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402676 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040267c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040267d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040267f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402684u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040267fu); RETCHK(0x10402684u, 0x1040267fu); LOADALL;
  /* 10402684 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402687 jne 0x10402691 */ if (!ZF_) goto L_10402691;
L_10402689:;
  /* 10402689 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040268a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040268d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040268e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402691:;
  /* 10402691 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10402694 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402695 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402697 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040269cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402697u); RETCHK(0x1040269cu, 0x10402697u); LOADALL;
  /* 1040269c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040269f je 0x10402689 */ if (ZF_) goto L_10402689;
  /* 104026a1 lea ecx, [edi + 5] */ ecx = (u32)((u32)(edi + 0x5u));
  /* 104026a4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104026a5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104026a7 call 0x10404a40 */ esp -= 4; M32(esp) = 0x104026acu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x104026a7u); RETCHK(0x104026acu, 0x104026a7u); LOADALL;
  /* 104026ac cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104026af je 0x10402689 */ if (ZF_) goto L_10402689;
  /* 104026b1 add edi, 6 */ { u32 a_ = edi, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104026b4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104026b5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104026b7 call 0x10404a40 */ esp -= 4; M32(esp) = 0x104026bcu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x104026b7u); RETCHK(0x104026bcu, 0x104026b7u); LOADALL;
  /* 104026bc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104026bd neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 104026bf sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104026c1 and eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104026c4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104026c5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104026c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104026c7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104026d0(CPU *c) {
  NATIVE_HOOK(0x104026d0u) REGS; LOADALL;
L_104026d0:;
  /* 104026d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104026d1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104026d2 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 104026d6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104026d8 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104026da push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104026db mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 104026dd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104026de lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 104026e4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104026e6 mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 104026ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104026eb call 0x10404a10 */ esp -= 4; M32(esp) = 0x104026f0u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104026ebu); RETCHK(0x104026f0u, 0x104026ebu); LOADALL;
  /* 104026f0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104026f3 je 0x10402708 */ if (ZF_) goto L_10402708;
  /* 104026f5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104026f7 mov cx, word ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104026fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104026fc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104026fe call 0x10404a70 */ esp -= 4; M32(esp) = 0x10402703u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104026feu); RETCHK(0x10402703u, 0x104026feu); LOADALL;
  /* 10402703 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402706 jne 0x10402712 */ if (!ZF_) goto L_10402712;
L_10402708:;
  /* 10402708 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402709 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040270a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040270d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040270e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040270f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402712:;
  /* 10402712 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402713 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10402715 lea edi, [ebx + 4] */ edi = (u32)((u32)(ebx + 0x4u));
L_10402718:;
  /* 10402718 movzx edx, word ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); edx = (u32)(M16(m_)); }
  /* 1040271c cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040271e jge 0x10402736 */ if (!LT_) goto L_10402736;
  /* 10402720 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402721 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10402723 call 0x10402600 */ esp -= 4; M32(esp) = 0x10402728u; SAVEALL; F_10402600(c); ABI_CHECK(0x10402600u, 0x10402723u); RETCHK(0x10402728u, 0x10402723u); LOADALL;
  /* 10402728 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040272b je 0x10402747 */ if (ZF_) goto L_10402747;
  /* 1040272d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040272e add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402731 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402734 jl 0x10402718 */ if (LT_) goto L_10402718;
L_10402736:;
  /* 10402736 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040273a call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040273fu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040273au); RETCHK(0x1040273fu, 0x1040273au); LOADALL;
  /* 1040273f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402740 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402741 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402742 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402743 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10402744 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402747:;
  /* 10402747 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402748 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402749 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040274a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040274d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040274e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040274f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402760(CPU *c) {
  NATIVE_HOOK(0x10402760u) REGS; LOADALL;
L_10402760:;
  /* 10402760 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402761 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402762 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10402764 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402765 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10402769 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 1040276f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402770 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402772 call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402777u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402772u); RETCHK(0x10402777u, 0x10402772u); LOADALL;
  /* 10402777 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040277a jne 0x10402784 */ if (!ZF_) goto L_10402784;
  /* 1040277c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040277d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040277e or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402780 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402781 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402784:;
  /* 10402784 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402785 lea ebp, [edi + 2] */ ebp = (u32)((u32)(edi + 0x2u));
  /* 10402788 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402789 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040278b call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402790u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x1040278bu); RETCHK(0x10402790u, 0x1040278bu); LOADALL;
  /* 10402790 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402793 jne 0x1040279f */ if (!ZF_) goto L_1040279f;
L_10402795:;
  /* 10402795 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402796 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402797 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402798 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040279b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040279c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040279f:;
  /* 1040279f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104027a1 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104027a4:;
  /* 104027a4 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 104027a8 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027aa jge 0x104027c2 */ if (!LT_) goto L_104027c2;
  /* 104027ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104027ad mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104027af call 0x10402670 */ esp -= 4; M32(esp) = 0x104027b4u; SAVEALL; F_10402670(c); ABI_CHECK(0x10402670u, 0x104027afu); RETCHK(0x104027b4u, 0x104027afu); LOADALL;
  /* 104027b4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027b7 je 0x10402795 */ if (ZF_) goto L_10402795;
  /* 104027b9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104027ba add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104027bd cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027c0 jl 0x104027a4 */ if (LT_) goto L_104027a4;
L_104027c2:;
  /* 104027c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104027c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104027c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104027c5 mov eax, 0x84 */ { eax = (u32)(0x84u); }
  /* 104027ca pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104027cb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104027d0(CPU *c) {
  NATIVE_HOOK(0x104027d0u) REGS; LOADALL;
L_104027d0:;
  /* 104027d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104027d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104027d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104027d6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104027d8 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104027da lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104027e0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104027e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104027e3 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104027e8u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104027e3u); RETCHK(0x104027e8u, 0x104027e3u); LOADALL;
  /* 104027e8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027eb je 0x10402811 */ if (ZF_) goto L_10402811;
  /* 104027ed xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104027ef mov cl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104027f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104027f3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104027f5 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104027fau; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104027f5u); RETCHK(0x104027fau, 0x104027f5u); LOADALL;
  /* 104027fa cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027fd je 0x10402811 */ if (ZF_) goto L_10402811;
  /* 104027ff xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10402801 mov dl, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402804 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402806 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402807 call 0x10404a10 */ esp -= 4; M32(esp) = 0x1040280cu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402807u); RETCHK(0x1040280cu, 0x10402807u); LOADALL;
  /* 1040280c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040280f jne 0x10402819 */ if (!ZF_) goto L_10402819;
L_10402811:;
  /* 10402811 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402812 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402815 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402816 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402819:;
  /* 10402819 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040281b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402820u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040281bu); RETCHK(0x10402820u, 0x1040281bu); LOADALL;
  /* 10402820 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402821 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402822 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402830(CPU *c) {
  NATIVE_HOOK(0x10402830u) REGS; LOADALL;
L_10402830:;
  /* 10402830 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402831 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402832 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402836 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040283c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040283d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040283f call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402844u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x1040283fu); RETCHK(0x10402844u, 0x1040283fu); LOADALL;
  /* 10402844 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402847 jne 0x10402851 */ if (!ZF_) goto L_10402851;
L_10402849:;
  /* 10402849 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040284a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040284d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040284e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402851:;
  /* 10402851 lea eax, [edi + 1] */ eax = (u32)((u32)(edi + 0x1u));
  /* 10402854 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402855 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402857 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040285cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402857u); RETCHK(0x1040285cu, 0x10402857u); LOADALL;
  /* 1040285c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040285f je 0x10402849 */ if (ZF_) goto L_10402849;
  /* 10402861 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402864 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402865 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402867 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040286cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402867u); RETCHK(0x1040286cu, 0x10402867u); LOADALL;
  /* 1040286c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040286d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040286f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402871 and eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402874 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402875 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402876 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402877 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402880(CPU *c) {
  NATIVE_HOOK(0x10402880u) REGS; LOADALL;
L_10402880:;
  /* 10402880 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402881 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402882 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10402886 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402888 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1040288c lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 10402892 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402894 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402895 call 0x10404a70 */ esp -= 4; M32(esp) = 0x1040289au; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10402895u); RETCHK(0x1040289au, 0x10402895u); LOADALL;
  /* 1040289a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040289d jne 0x104028a6 */ if (!ZF_) goto L_104028a6;
  /* 1040289f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104028a0 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104028a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104028a3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104028a6:;
  /* 104028a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104028a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104028a8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104028aa lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
  /* 104028ad lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_104028b0:;
  /* 104028b0 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 104028b4 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104028b6 jge 0x104028d0 */ if (!LT_) goto L_104028d0;
  /* 104028b8 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 104028ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104028bb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104028bd call 0x10404af0 */ esp -= 4; M32(esp) = 0x104028c2u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104028bdu); RETCHK(0x104028c2u, 0x104028bdu); LOADALL;
  /* 104028c2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104028c5 je 0x104028de */ if (ZF_) goto L_104028de;
  /* 104028c7 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104028c8 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104028cb cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104028ce jl 0x104028b0 */ if (LT_) goto L_104028b0;
L_104028d0:;
  /* 104028d0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104028d2 call 0x10404a00 */ esp -= 4; M32(esp) = 0x104028d7u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104028d2u); RETCHK(0x104028d7u, 0x104028d2u); LOADALL;
  /* 104028d7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104028d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104028d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104028da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104028db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104028de:;
  /* 104028de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104028df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104028e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104028e1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104028e4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104028e5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104028f0(CPU *c) {
  NATIVE_HOOK(0x104028f0u) REGS; LOADALL;
L_104028f0:;
  /* 104028f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104028f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104028f2 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 104028f6 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 104028fc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104028fd mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104028ff call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402904u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x104028ffu); RETCHK(0x10402904u, 0x104028ffu); LOADALL;
  /* 10402904 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402907 jne 0x10402910 */ if (!ZF_) goto L_10402910;
  /* 10402909 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040290a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040290c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040290d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402910:;
  /* 10402910 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402911 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402912 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10402914 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10402917:;
  /* 10402917 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1040291b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040291d jge 0x10402935 */ if (!LT_) goto L_10402935;
  /* 1040291f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402920 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402922 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402927u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402922u); RETCHK(0x10402927u, 0x10402922u); LOADALL;
  /* 10402927 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040292a je 0x10402941 */ if (ZF_) goto L_10402941;
  /* 1040292c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040292d add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402930 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402933 jl 0x10402917 */ if (LT_) goto L_10402917;
L_10402935:;
  /* 10402935 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402936 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402937 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402938 mov eax, 0x44 */ { eax = (u32)(0x44u); }
  /* 1040293d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040293e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402941:;
  /* 10402941 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402942 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402943 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402944 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402947 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402948 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402950(CPU *c) {
  NATIVE_HOOK(0x10402950u) REGS; LOADALL;
L_10402950:;
  /* 10402950 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402951 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402952 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10402956 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10402958 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1040295a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040295b lea edi, [ebx + 0x10000] */ edi = (u32)((u32)(ebx + 0x10000u));
  /* 10402961 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402962 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402964 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402969u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402964u); RETCHK(0x10402969u, 0x10402964u); LOADALL;
  /* 10402969 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040296c je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402972 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10402974 mov cx, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10402978 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402979 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1040297b call 0x10404a70 */ esp -= 4; M32(esp) = 0x10402980u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x1040297bu); RETCHK(0x10402980u, 0x1040297bu); LOADALL;
  /* 10402980 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402983 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402989 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040298b mov dl, byte ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040298e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402990 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402991 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402996u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402991u); RETCHK(0x10402996u, 0x10402991u); LOADALL;
  /* 10402996 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402999 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 1040299f push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 104029a1 lea eax, [esi + 7] */ eax = (u32)((u32)(esi + 0x7u));
  /* 104029a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104029a5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104029a7 call 0x10404c20 */ esp -= 4; M32(esp) = 0x104029acu; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x104029a7u); RETCHK(0x104029acu, 0x104029a7u); LOADALL;
  /* 104029ac cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104029af je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 104029b5 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 104029ba lea ecx, [esi + 0x27] */ ecx = (u32)((u32)(esi + 0x27u));
  /* 104029bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104029be mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104029c0 call 0x10404c20 */ esp -= 4; M32(esp) = 0x104029c5u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x104029c0u); RETCHK(0x104029c5u, 0x104029c0u); LOADALL;
  /* 104029c5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104029c8 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 104029ce mov edx, dword ptr [esi + 0x128] */ { const u32 m_ = (u32)(esi + 0x128u); edx = (u32)(M32(m_)); }
  /* 104029d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104029d5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104029d7 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104029dcu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104029d7u); RETCHK(0x104029dcu, 0x104029d7u); LOADALL;
  /* 104029dc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104029df je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 104029e5 mov eax, dword ptr [esi + 0x12c] */ { const u32 m_ = (u32)(esi + 0x12cu); eax = (u32)(M32(m_)); }
  /* 104029eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104029ec mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104029ee call 0x10404af0 */ esp -= 4; M32(esp) = 0x104029f3u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104029eeu); RETCHK(0x104029f3u, 0x104029eeu); LOADALL;
  /* 104029f3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104029f6 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 104029fc lea ecx, [esi + 0x130] */ ecx = (u32)((u32)(esi + 0x130u));
  /* 10402a02 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402a03 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a05 call 0x10402880 */ esp -= 4; M32(esp) = 0x10402a0au; SAVEALL; F_10402880(c); ABI_CHECK(0x10402880u, 0x10402a05u); RETCHK(0x10402a0au, 0x10402a05u); LOADALL;
  /* 10402a0a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a0d je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a13 lea edx, [esi + 0x174] */ edx = (u32)((u32)(esi + 0x174u));
  /* 10402a19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402a1a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a1c call 0x104021a0 */ esp -= 4; M32(esp) = 0x10402a21u; SAVEALL; F_104021a0(c); ABI_CHECK(0x104021a0u, 0x10402a1cu); RETCHK(0x10402a21u, 0x10402a1cu); LOADALL;
  /* 10402a21 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a24 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a2a lea eax, [esi + 0x288] */ eax = (u32)((u32)(esi + 0x288u));
  /* 10402a30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402a31 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a33 call 0x10402490 */ esp -= 4; M32(esp) = 0x10402a38u; SAVEALL; F_10402490(c); ABI_CHECK(0x10402490u, 0x10402a33u); RETCHK(0x10402a38u, 0x10402a33u); LOADALL;
  /* 10402a38 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a3b je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a3d lea ecx, [esi + 0xecc] */ ecx = (u32)((u32)(esi + 0xeccu));
  /* 10402a43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402a44 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a46 call 0x10402560 */ esp -= 4; M32(esp) = 0x10402a4bu; SAVEALL; F_10402560(c); ABI_CHECK(0x10402560u, 0x10402a46u); RETCHK(0x10402a4bu, 0x10402a46u); LOADALL;
  /* 10402a4b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a4e je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a50 lea edx, [esi + 0x1090] */ edx = (u32)((u32)(esi + 0x1090u));
  /* 10402a56 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402a57 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a59 call 0x104026d0 */ esp -= 4; M32(esp) = 0x10402a5eu; SAVEALL; F_104026d0(c); ABI_CHECK(0x104026d0u, 0x10402a59u); RETCHK(0x10402a5eu, 0x10402a59u); LOADALL;
  /* 10402a5e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a61 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a63 lea eax, [esi + 0x1114] */ eax = (u32)((u32)(esi + 0x1114u));
  /* 10402a69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402a6a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a6c call 0x104027d0 */ esp -= 4; M32(esp) = 0x10402a71u; SAVEALL; F_104027d0(c); ABI_CHECK(0x104027d0u, 0x10402a6cu); RETCHK(0x10402a71u, 0x10402a6cu); LOADALL;
  /* 10402a71 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a74 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a76 mov ecx, dword ptr [esi + 0x1118] */ { const u32 m_ = (u32)(esi + 0x1118u); ecx = (u32)(M32(m_)); }
  /* 10402a7c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402a7d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402a7f call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402a84u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402a7fu); RETCHK(0x10402a84u, 0x10402a7fu); LOADALL;
  /* 10402a84 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a87 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a89 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10402a8b mov dl, byte ptr [esi + 0x111c] */ { const u32 m_ = (u32)(esi + 0x111cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402a91 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402a93 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402a94 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402a99u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402a94u); RETCHK(0x10402a99u, 0x10402a94u); LOADALL;
  /* 10402a99 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a9c je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a9e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402aa0 mov al, byte ptr [esi + 0x111d] */ { const u32 m_ = (u32)(esi + 0x111du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402aa6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402aa8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402aa9 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402aaeu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402aa9u); RETCHK(0x10402aaeu, 0x10402aa9u); LOADALL;
  /* 10402aae cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ab1 jne 0x10402abc */ if (!ZF_) goto L_10402abc;
L_10402ab3:;
  /* 10402ab3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ab4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402ab5 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402ab8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402ab9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402abc:;
  /* 10402abc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402abe call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402ac3u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402abeu); RETCHK(0x10402ac3u, 0x10402abeu); LOADALL;
  /* 10402ac3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ac4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402ac5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402ac6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402ad0(CPU *c) {
  NATIVE_HOOK(0x10402ad0u) REGS; LOADALL;
L_10402ad0:;
  /* 10402ad0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402ad1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402ad2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10402ad6 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10402ad8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402ad9 lea edi, [ebx + 0x10000] */ edi = (u32)((u32)(ebx + 0x10000u));
  /* 10402adf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402ae0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402ae2 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402ae7u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402ae2u); RETCHK(0x10402ae7u, 0x10402ae2u); LOADALL;
  /* 10402ae7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402aea jne 0x10402af5 */ if (!ZF_) goto L_10402af5;
L_10402aec:;
  /* 10402aec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402aed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402aee or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402af1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402af2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402af5:;
  /* 10402af5 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10402af8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402af9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402afb call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402b00u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10402afbu); RETCHK(0x10402b00u, 0x10402afbu); LOADALL;
  /* 10402b00 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b03 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b05 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10402b08 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402b09 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b0b call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402b10u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402b0bu); RETCHK(0x10402b10u, 0x10402b0bu); LOADALL;
  /* 10402b10 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b13 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b15 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402b17 lea edx, [esi + 7] */ edx = (u32)((u32)(esi + 0x7u));
  /* 10402b1a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402b1b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b1d call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402b22u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402b1du); RETCHK(0x10402b22u, 0x10402b1du); LOADALL;
  /* 10402b22 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b25 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b27 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10402b2c lea eax, [esi + 0x27] */ eax = (u32)((u32)(esi + 0x27u));
  /* 10402b2f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402b30 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b32 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402b37u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402b32u); RETCHK(0x10402b37u, 0x10402b32u); LOADALL;
  /* 10402b37 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b3a je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b3c lea ecx, [esi + 0x128] */ ecx = (u32)((u32)(esi + 0x128u));
  /* 10402b42 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402b43 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b45 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402b4au; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402b45u); RETCHK(0x10402b4au, 0x10402b45u); LOADALL;
  /* 10402b4a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b4d je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b4f lea edx, [esi + 0x12c] */ edx = (u32)((u32)(esi + 0x12cu));
  /* 10402b55 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402b56 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b58 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402b5du; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402b58u); RETCHK(0x10402b5du, 0x10402b58u); LOADALL;
  /* 10402b5d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b60 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b62 lea eax, [esi + 0x130] */ eax = (u32)((u32)(esi + 0x130u));
  /* 10402b68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402b69 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402b6b call 0x104028f0 */ esp -= 4; M32(esp) = 0x10402b70u; SAVEALL; F_104028f0(c); ABI_CHECK(0x104028f0u, 0x10402b6bu); RETCHK(0x10402b70u, 0x10402b6bu); LOADALL;
  /* 10402b70 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b73 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b79 lea ecx, [esi + 0x174] */ ecx = (u32)((u32)(esi + 0x174u));
  /* 10402b7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402b80 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402b82 call 0x10402240 */ esp -= 4; M32(esp) = 0x10402b87u; SAVEALL; F_10402240(c); ABI_CHECK(0x10402240u, 0x10402b82u); RETCHK(0x10402b87u, 0x10402b82u); LOADALL;
  /* 10402b87 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b8a je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b90 lea edx, [esi + 0x288] */ edx = (u32)((u32)(esi + 0x288u));
  /* 10402b96 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402b97 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402b99 call 0x10402500 */ esp -= 4; M32(esp) = 0x10402b9eu; SAVEALL; F_10402500(c); ABI_CHECK(0x10402500u, 0x10402b99u); RETCHK(0x10402b9eu, 0x10402b99u); LOADALL;
  /* 10402b9e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ba1 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402ba7 lea eax, [esi + 0xecc] */ eax = (u32)((u32)(esi + 0xeccu));
  /* 10402bad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402bae mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402bb0 call 0x104025b0 */ esp -= 4; M32(esp) = 0x10402bb5u; SAVEALL; F_104025b0(c); ABI_CHECK(0x104025b0u, 0x10402bb0u); RETCHK(0x10402bb5u, 0x10402bb0u); LOADALL;
  /* 10402bb5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402bb8 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402bbe lea ecx, [esi + 0x1090] */ ecx = (u32)((u32)(esi + 0x1090u));
  /* 10402bc4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402bc5 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402bc7 call 0x10402760 */ esp -= 4; M32(esp) = 0x10402bccu; SAVEALL; F_10402760(c); ABI_CHECK(0x10402760u, 0x10402bc7u); RETCHK(0x10402bccu, 0x10402bc7u); LOADALL;
  /* 10402bcc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402bcf je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402bd5 lea edx, [esi + 0x1114] */ edx = (u32)((u32)(esi + 0x1114u));
  /* 10402bdb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402bdc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402bde call 0x10402830 */ esp -= 4; M32(esp) = 0x10402be3u; SAVEALL; F_10402830(c); ABI_CHECK(0x10402830u, 0x10402bdeu); RETCHK(0x10402be3u, 0x10402bdeu); LOADALL;
  /* 10402be3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402be6 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402bec lea eax, [esi + 0x1118] */ eax = (u32)((u32)(esi + 0x1118u));
  /* 10402bf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402bf3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402bf5 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402bfau; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402bf5u); RETCHK(0x10402bfau, 0x10402bf5u); LOADALL;
  /* 10402bfa cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402bfd je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402c03 lea ecx, [esi + 0x111c] */ ecx = (u32)((u32)(esi + 0x111cu));
  /* 10402c09 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402c0a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402c0c call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402c11u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402c0cu); RETCHK(0x10402c11u, 0x10402c0cu); LOADALL;
  /* 10402c11 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c14 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402c1a add esi, 0x111d */ { u32 a_ = esi, b_ = 0x111du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10402c20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402c21 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402c23 call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402c28u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402c23u); RETCHK(0x10402c28u, 0x10402c23u); LOADALL;
  /* 10402c28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402c29 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10402c2b sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402c2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402c2e and eax, 0x1121 */ { u32 a_ = eax, b_ = 0x1121u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402c33 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402c34 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402c35 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402c36 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402c40(CPU *c) {
  NATIVE_HOOK(0x10402c40u) REGS; LOADALL;
L_10402c40:;
  /* 10402c40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402c41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402c42 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402c46 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402c4c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402c4e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402c4f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c51 call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402c56u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402c51u); RETCHK(0x10402c56u, 0x10402c51u); LOADALL;
  /* 10402c56 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c59 je 0x10402c8b */ if (ZF_) goto L_10402c8b;
  /* 10402c5b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402c5d lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10402c60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402c61 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c63 call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402c68u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402c63u); RETCHK(0x10402c68u, 0x10402c63u); LOADALL;
  /* 10402c68 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c6b je 0x10402c8b */ if (ZF_) goto L_10402c8b;
  /* 10402c6d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c6f call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402c74u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402c6fu); RETCHK(0x10402c74u, 0x10402c6fu); LOADALL;
  /* 10402c74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c77 je 0x10402c8b */ if (ZF_) goto L_10402c8b;
  /* 10402c79 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10402c7b mov cl, byte ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402c7e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402c7f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c81 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402c86u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402c81u); RETCHK(0x10402c86u, 0x10402c81u); LOADALL;
  /* 10402c86 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c89 jne 0x10402c93 */ if (!ZF_) goto L_10402c93;
L_10402c8b:;
  /* 10402c8b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402c8c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402c8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402c90 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402c93:;
  /* 10402c93 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c95 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402c9au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402c95u); RETCHK(0x10402c9au, 0x10402c95u); LOADALL;
  /* 10402c9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402c9b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402c9c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402ca0(CPU *c) {
  NATIVE_HOOK(0x10402ca0u) REGS; LOADALL;
L_10402ca0:;
  /* 10402ca0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402ca1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402ca2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402ca6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402cac push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402cae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402caf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402cb1 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402cb6u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402cb1u); RETCHK(0x10402cb6u, 0x10402cb1u); LOADALL;
  /* 10402cb6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402cb9 je 0x10402ccd */ if (ZF_) goto L_10402ccd;
  /* 10402cbb push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402cbd lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10402cc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402cc1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402cc3 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402cc8u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402cc3u); RETCHK(0x10402cc8u, 0x10402cc3u); LOADALL;
  /* 10402cc8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ccb jne 0x10402cd5 */ if (!ZF_) goto L_10402cd5;
L_10402ccd:;
  /* 10402ccd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402cce or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402cd1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402cd2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402cd5:;
  /* 10402cd5 add edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402cd8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402cd9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402cdb call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402ce0u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402cdbu); RETCHK(0x10402ce0u, 0x10402cdbu); LOADALL;
  /* 10402ce0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402ce1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10402ce3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402ce5 and eax, 0x42 */ { u32 a_ = eax, b_ = 0x42u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402ce8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ce9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402cea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402ceb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402cf0(CPU *c) {
  NATIVE_HOOK(0x10402cf0u) REGS; LOADALL;
L_10402cf0:;
  /* 10402cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402cf1 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10402cf5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402cf7 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10402cfb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402cfc lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402d02 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402d05 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10402d0au; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10402d05u); RETCHK(0x10402d0au, 0x10402d05u); LOADALL;
  /* 10402d0a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d0d jne 0x10402d16 */ if (!ZF_) goto L_10402d16;
  /* 10402d0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402d10 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402d12 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402d13 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402d16:;
  /* 10402d16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402d17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402d18 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10402d1a lea edi, [ebp + 2] */ edi = (u32)((u32)(ebp + 0x2u));
  /* 10402d1d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10402d20:;
  /* 10402d20 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 10402d24 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d26 jge 0x10402d5e */ if (!LT_) goto L_10402d5e;
  /* 10402d28 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402d2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402d2b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d2d call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402d32u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402d2du); RETCHK(0x10402d32u, 0x10402d2du); LOADALL;
  /* 10402d32 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d35 je 0x10402d6c */ if (ZF_) goto L_10402d6c;
  /* 10402d37 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402d39 lea edx, [edi + 0x20] */ edx = (u32)((u32)(edi + 0x20u));
  /* 10402d3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402d3d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d3f call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402d44u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402d3fu); RETCHK(0x10402d44u, 0x10402d3fu); LOADALL;
  /* 10402d44 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d47 je 0x10402d6c */ if (ZF_) goto L_10402d6c;
  /* 10402d49 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d4b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402d50u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402d4bu); RETCHK(0x10402d50u, 0x10402d4bu); LOADALL;
  /* 10402d50 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d53 je 0x10402d6c */ if (ZF_) goto L_10402d6c;
  /* 10402d55 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402d56 add edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402d59 cmp ebx, 0x64 */ { u32 a_ = ebx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d5c jl 0x10402d20 */ if (LT_) goto L_10402d20;
L_10402d5e:;
  /* 10402d5e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d60 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402d65u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402d60u); RETCHK(0x10402d65u, 0x10402d60u); LOADALL;
  /* 10402d65 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402d66 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402d67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402d68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402d69 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402d6c:;
  /* 10402d6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402d6d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402d6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402d6f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402d72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402d73 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402d80(CPU *c) {
  NATIVE_HOOK(0x10402d80u) REGS; LOADALL;
L_10402d80:;
  /* 10402d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402d81 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10402d85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402d86 lea edi, [ecx + 0x10000] */ edi = (u32)((u32)(ecx + 0x10000u));
  /* 10402d8c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402d8d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402d8f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402d94u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10402d8fu); RETCHK(0x10402d94u, 0x10402d8fu); LOADALL;
  /* 10402d94 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d97 jne 0x10402da0 */ if (!ZF_) goto L_10402da0;
  /* 10402d99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402d9a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402d9c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402d9d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402da0:;
  /* 10402da0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402da1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402da2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10402da4 lea esi, [ebp + 2] */ esi = (u32)((u32)(ebp + 0x2u));
L_10402da7:;
  /* 10402da7 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 10402dab cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402dad jge 0x10402dd9 */ if (!LT_) goto L_10402dd9;
  /* 10402daf push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402db1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402db2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402db4 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402db9u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402db4u); RETCHK(0x10402db9u, 0x10402db4u); LOADALL;
  /* 10402db9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402dbc je 0x10402de5 */ if (ZF_) goto L_10402de5;
  /* 10402dbe push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402dc0 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 10402dc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402dc4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402dc6 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402dcbu; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402dc6u); RETCHK(0x10402dcbu, 0x10402dc6u); LOADALL;
  /* 10402dcb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402dce je 0x10402de5 */ if (ZF_) goto L_10402de5;
  /* 10402dd0 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402dd1 add esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10402dd4 cmp ebx, 0x64 */ { u32 a_ = ebx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402dd7 jl 0x10402da7 */ if (LT_) goto L_10402da7;
L_10402dd9:;
  /* 10402dd9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402dda pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402ddb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ddc mov eax, 0x1902 */ { eax = (u32)(0x1902u); }
  /* 10402de1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402de2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402de5:;
  /* 10402de5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402de6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402de7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402de8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402deb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402dec ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402df0(CPU *c) {
  NATIVE_HOOK(0x10402df0u) REGS; LOADALL;
L_10402df0:;
  /* 10402df0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10402df4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402df5 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402dfb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10402dfd mov cx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10402e00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402e01 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402e03 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10402e08u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10402e03u); RETCHK(0x10402e08u, 0x10402e03u); LOADALL;
  /* 10402e08 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402e0b jne 0x10402e13 */ if (!ZF_) goto L_10402e13;
  /* 10402e0d or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402e0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402e10 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402e13:;
  /* 10402e13 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402e15 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402e1au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402e15u); RETCHK(0x10402e1au, 0x10402e15u); LOADALL;
  /* 10402e1a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402e1b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402e20(CPU *c) {
  NATIVE_HOOK(0x10402e20u) REGS; LOADALL;
L_10402e20:;
  /* 10402e20 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10402e24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402e25 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10402e2b call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402e30u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10402e2bu); RETCHK(0x10402e30u, 0x10402e2bu); LOADALL;
  /* 10402e30 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402e31 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10402e33 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402e35 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402e38 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402e39 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}
