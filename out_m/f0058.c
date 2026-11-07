#include "funcs.h"

void F_005fae80(CPU *c) {
  NATIVE_HOOK(0x5fae80u) REGS; LOADALL;
L_005fae80:;
  /* 005fae80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fae84 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fae86 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005fae88 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fae8b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fae8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fae90(CPU *c) {
  NATIVE_HOOK(0x5fae90u) REGS; LOADALL;
L_005fae90:;
  /* 005fae90 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fae94 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fae97 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 005fae9b jmp dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005faeb0(CPU *c) {
  NATIVE_HOOK(0x5faeb0u) REGS; LOADALL;
L_005faeb0:;
  /* 005faeb0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005faeb1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005faeb2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005faeb6 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 005faeb9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005faeba call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5faec0u; SAVEALL; call_ind(c, t_); RETCHK(0x5faec0u, 0x5faebau); LOADALL; }
  /* 005faec0 mov esi, eax */ { esi = (u32)(eax); }
  /* 005faec2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005faec4 jne 0x5faee5 */ if (!ZF_) goto L_005faee5;
  /* 005faec6 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005faec9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005faeca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005faecc je 0x5faedd */ if (ZF_) goto L_005faedd;
  /* 005faece call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5faed3u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5faeceu); RETCHK(0x5faed3u, 0x5faeceu); LOADALL;
  /* 005faed3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005faed6 mov eax, esi */ { eax = (u32)(esi); }
  /* 005faed8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005faed9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005faeda ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005faedd:;
  /* 005faedd call 0x5fae80 */ esp -= 4; M32(esp) = 0x5faee2u; SAVEALL; F_005fae80(c); ABI_CHECK(0x5fae80u, 0x5faeddu); RETCHK(0x5faee2u, 0x5faeddu); LOADALL;
  /* 005faee2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005faee5:;
  /* 005faee5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005faee7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005faee8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005faee9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005faef0(CPU *c) {
  NATIVE_HOOK(0x5faef0u) REGS; LOADALL;
L_005faef0:;
  /* 005faef0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005faef4 push 0x63cf50 */ { u32 v_ = 0x63cf50u; esp -= 4; M32(esp) = v_; }
  /* 005faef9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005faefa call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5faeffu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5faefau); RETCHK(0x5faeffu, 0x5faefau); LOADALL;
  /* 005faeff add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005faf02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005faf04 jne 0x5faf1b */ if (!ZF_) goto L_005faf1b;
  /* 005faf06 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005faf0a mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005faf0e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005faf0f mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005faf11 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005faf13 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5faf16u; SAVEALL; call_ind(c, t_); RETCHK(0x5faf16u, 0x5faf13u); LOADALL; }
  /* 005faf16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005faf18 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005faf1b:;
  /* 005faf1b mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005faf1f mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 005faf25 mov eax, 0x80004002 */ { eax = (u32)(0x80004002u); }
  /* 005faf2a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005faf30(CPU *c) {
  NATIVE_HOOK(0x5faf30u) REGS; LOADALL;
L_005faf30:;
  /* 005faf30 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005faf31 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005faf32 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005faf33 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005faf34 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005faf38 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005faf3a cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005faf3c jne 0x5faf6b */ if (!ZF_) goto L_005faf6b;
  /* 005faf3e mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005faf43 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005faf48 push 0x9c00ec */ { u32 v_ = 0x9c00ecu; esp -= 4; M32(esp) = v_; }
  /* 005faf4d call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5faf53u; SAVEALL; call_ind(c, t_); RETCHK(0x5faf53u, 0x5faf4du); LOADALL; }
  /* 005faf53 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005faf56 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005faf58 je 0x5faf83 */ if (ZF_) goto L_005faf83;
  /* 005faf5a mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 005faf5c mov dword ptr [eax + 4], 0xffffffff */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0xffffffffu); }
  /* 005faf63 mov dword ptr [eax + 8], esi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(esi); }
  /* 005faf66 mov dword ptr [eax + 0xc], esi */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(esi); }
  /* 005faf69 mov edi, eax */ { edi = (u32)(eax); }
L_005faf6b:;
  /* 005faf6b mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005faf6f lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 005faf73 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005faf75 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005faf76 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005faf77 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5faf7cu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5faf77u); RETCHK(0x5faf7cu, 0x5faf77u); LOADALL;
  /* 005faf7c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005faf7f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005faf81 jne 0x5faf8a */ if (!ZF_) goto L_005faf8a;
L_005faf83:;
  /* 005faf83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005faf84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005faf85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005faf86 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005faf88 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005faf89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005faf8a:;
  /* 005faf8a mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005faf8e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005faf90 jle 0x5fafe2 */ if ((ZF_|LT_)) goto L_005fafe2;
  /* 005faf92 mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 005faf96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005faf97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005faf98 mov edx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005faf9b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005faf9c call 0x5fd3d0 */ esp -= 4; M32(esp) = 0x5fafa1u; SAVEALL; F_005fd3d0(c); ABI_CHECK(0x5fd3d0u, 0x5faf9cu); RETCHK(0x5fafa1u, 0x5faf9cu); LOADALL;
  /* 005fafa1 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fafa3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fafa6 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fafa9 jne 0x5fafb2 */ if (!ZF_) goto L_005fafb2;
  /* 005fafab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fafac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fafad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fafae xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fafb0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fafb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fafb2:;
  /* 005fafb2 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fafb6 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fafb9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fafba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fafbb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fafbc call 0x5fd420 */ esp -= 4; M32(esp) = 0x5fafc1u; SAVEALL; F_005fd420(c); ABI_CHECK(0x5fd420u, 0x5fafbcu); RETCHK(0x5fafc1u, 0x5fafbcu); LOADALL;
  /* 005fafc1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fafc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fafc5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fafc6 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fafcbu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fafc6u); RETCHK(0x5fafcbu, 0x5fafc6u); LOADALL;
  /* 005fafcb mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005fafcf add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fafd2 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fafd4 je 0x5fafdd */ if (ZF_) goto L_005fafdd;
  /* 005fafd6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fafd7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fafd8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fafd9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fafdb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fafdc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fafdd:;
  /* 005fafdd mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 005fafe0 jmp 0x5fafe9 */ goto L_005fafe9;
L_005fafe2:;
  /* 005fafe2 mov dword ptr [edi + 4], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0xffffffffu); }
L_005fafe9:;
  /* 005fafe9 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fafeb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fafec push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fafed call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5faff2u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fafedu); RETCHK(0x5faff2u, 0x5fafedu); LOADALL;
  /* 005faff2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005faff5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005faff7 jne 0x5faffe */ if (!ZF_) goto L_005faffe;
  /* 005faff9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005faffa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005faffb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005faffc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005faffd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005faffe:;
  /* 005faffe lea edx, [edi + 8] */ edx = (u32)((u32)(edi + 0x8u));
  /* 005fb001 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fb003 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb004 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb005 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fb00au; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fb005u); RETCHK(0x5fb00au, 0x5fb005u); LOADALL;
  /* 005fb00a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb00d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fb00f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fb011 and eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fb013 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb014 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb015 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb016 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb017 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb020(CPU *c) {
  NATIVE_HOOK(0x5fb020u) REGS; LOADALL;
L_005fb020:;
  /* 005fb020 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fb025 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fb027 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fb02cu; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fb027u); RETCHK(0x5fb02cu, 0x5fb027u); LOADALL;
  /* 005fb02c mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fb030 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb033 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 005fb036 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fb038 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fb03a and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fb03c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb040(CPU *c) {
  NATIVE_HOOK(0x5fb040u) REGS; LOADALL;
L_005fb040:;
  /* 005fb040 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb041 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005fb045 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb046 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005fb048 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb04b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb04d je 0x5fb09f */ if (ZF_) goto L_005fb09f;
  /* 005fb04f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb050 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb051 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fb056u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fb051u); RETCHK(0x5fb056u, 0x5fb051u); LOADALL;
  /* 005fb056 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb058 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb05b cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb05d jle 0x5fb08f */ if ((ZF_|LT_)) goto L_005fb08f;
  /* 005fb05f mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb062 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb063 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fb068u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fb063u); RETCHK(0x5fb068u, 0x5fb063u); LOADALL;
  /* 005fb068 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005fb06b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fb06d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb070 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb072 je 0x5fb08f */ if (ZF_) goto L_005fb08f;
  /* 005fb074 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fb077 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005fb07a:;
  /* 005fb07a mov dword ptr [eax - 8], edi */ { const u32 m_ = (u32)(eax + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 005fb07d mov dword ptr [eax - 4], ecx */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005fb080 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 005fb082 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fb085 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fb088 lea edx, [eax - 8] */ edx = (u32)((u32)(eax + 0xfffffff8u));
  /* 005fb08b cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb08d jne 0x5fb07a */ if (!ZF_) goto L_005fb07a;
L_005fb08f:;
  /* 005fb08f mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb092 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb093 call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fb098u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fb093u); RETCHK(0x5fb098u, 0x5fb093u); LOADALL;
  /* 005fb098 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb09b mov dword ptr [ebx + 0xc], edi */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edi); }
  /* 005fb09e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005fb09f:;
  /* 005fb09f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb0a1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb0a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb0a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb0b0(CPU *c) {
  NATIVE_HOOK(0x5fb0b0u) REGS; LOADALL;
L_005fb0b0:;
  /* 005fb0b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb0b1 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fb0b5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb0b6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb0b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb0b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb0b9 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 005fb0bd push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fb0bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb0c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb0c1 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fb0c6u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fb0c1u); RETCHK(0x5fb0c6u, 0x5fb0c1u); LOADALL;
  /* 005fb0c6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb0c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb0cb jne 0x5fb0d3 */ if (!ZF_) goto L_005fb0d3;
  /* 005fb0cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb0ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb0cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb0d0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb0d1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fb0d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb0d3:;
  /* 005fb0d3 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fb0d7 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 005fb0db xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fb0dd cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb0df jle 0x5fb156 */ if ((ZF_|LT_)) goto L_005fb156;
  /* 005fb0e1 cmp dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb0e4 jne 0x5fb0f8 */ if (!ZF_) goto L_005fb0f8;
  /* 005fb0e6 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fb0eb push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fb0ed call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fb0f2u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fb0edu); RETCHK(0x5fb0f2u, 0x5fb0edu); LOADALL;
  /* 005fb0f2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb0f5 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
L_005fb0f8:;
  /* 005fb0f8 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb0fb cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb0fd je 0x5fb116 */ if (ZF_) goto L_005fb116;
  /* 005fb0ff mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fb103 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fb108 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb109 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb10a call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fb10fu; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fb10au); RETCHK(0x5fb10fu, 0x5fb10au); LOADALL;
  /* 005fb10f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb112 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb114 jne 0x5fb11e */ if (!ZF_) goto L_005fb11e;
L_005fb116:;
  /* 005fb116 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb117 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb118 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb119 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fb11b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb11c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fb11d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb11e:;
  /* 005fb11e mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005fb122 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb124 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005fb127 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fb129 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb12b je 0x5fb156 */ if (ZF_) goto L_005fb156;
L_005fb12d:;
  /* 005fb12d mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fb131 mov dword ptr [esi], ebp */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebp); }
  /* 005fb133 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb134 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb135 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb136 mov dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0xffffffffu); }
  /* 005fb13d mov dword ptr [esi + 8], ebp */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebp); }
  /* 005fb140 mov dword ptr [esi + 0xc], ebp */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebp); }
  /* 005fb143 call 0x5faf30 */ esp -= 4; M32(esp) = 0x5fb148u; SAVEALL; F_005faf30(c); ABI_CHECK(0x5faf30u, 0x5fb143u); RETCHK(0x5fb148u, 0x5fb143u); LOADALL;
  /* 005fb148 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb14b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb14d je 0x5fb116 */ if (ZF_) goto L_005fb116;
  /* 005fb14f add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fb152 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb154 jne 0x5fb12d */ if (!ZF_) goto L_005fb12d;
L_005fb156:;
  /* 005fb156 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb157 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb158 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb15a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb15b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb15c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fb15d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb160(CPU *c) {
  NATIVE_HOOK(0x5fb160u) REGS; LOADALL;
L_005fb160:;
  /* 005fb160 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb161 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005fb165 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb166 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb167 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb16a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005fb16c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb16e je 0x5fb19a */ if (ZF_) goto L_005fb19a;
  /* 005fb170 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb171 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fb176u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fb171u); RETCHK(0x5fb176u, 0x5fb171u); LOADALL;
  /* 005fb176 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb179 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb17b jle 0x5fb19a */ if ((ZF_|LT_)) goto L_005fb19a;
  /* 005fb17d mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005fb181 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb183 jge 0x5fb19a */ if (!LT_) goto L_005fb19a;
  /* 005fb185 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb188 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb189 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fb18eu; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fb189u); RETCHK(0x5fb18eu, 0x5fb189u); LOADALL;
  /* 005fb18e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb191 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005fb194 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fb196 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb197 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb198 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb199 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb19a:;
  /* 005fb19a mov eax, edi */ { eax = (u32)(edi); }
  /* 005fb19c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb19d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb19e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb19f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb1a0(CPU *c) {
  NATIVE_HOOK(0x5fb1a0u) REGS; LOADALL;
L_005fb1a0:;
  /* 005fb1a0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb1a4 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fb1a8 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fb1ab mov eax, dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fb1ae mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fb1b2 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 005fb1b6 jmp 0x5fd420 */ SAVEALL; F_005fd420(c); return;
}

void F_005fb1c0(CPU *c) {
  NATIVE_HOOK(0x5fb1c0u) REGS; LOADALL;
L_005fb1c0:;
  /* 005fb1c0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb1c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb1c4 mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 005fb1c8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb1c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb1ca mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb1cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb1ce call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fb1d3u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fb1ceu); RETCHK(0x5fb1d3u, 0x5fb1ceu); LOADALL;
  /* 005fb1d3 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fb1d6 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb1d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb1d9 mov dword ptr [esp + 0x30], esi */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(esi); }
  /* 005fb1dd call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fb1e2u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fb1ddu); RETCHK(0x5fb1e2u, 0x5fb1ddu); LOADALL;
  /* 005fb1e2 mov ecx, dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005fb1e5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb1e8 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fb1ea mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 005fb1ee test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb1f0 mov dword ptr [esp + 0x20], ebp */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebp); }
  /* 005fb1f4 jle 0x5fb3fe */ if ((ZF_|LT_)) goto L_005fb3fe;
  /* 005fb1fa lea esi, [eax + 0x30] */ esi = (u32)((u32)(eax + 0x30u));
  /* 005fb1fd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb1fe mov dword ptr [esp + 0x20], esi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(esi); }
L_005fb202:;
  /* 005fb202 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb203 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb204 mov dword ptr [ebx + 0x44], ebp */ { const u32 m_ = (u32)(ebx + 0x44u); M32(m_) = (u32)(ebp); }
  /* 005fb207 call 0x5fd330 */ esp -= 4; M32(esp) = 0x5fb20cu; SAVEALL; F_005fd330(c); ABI_CHECK(0x5fd330u, 0x5fb207u); RETCHK(0x5fb20cu, 0x5fb207u); LOADALL;
  /* 005fb20c lea edx, [esi - 0x2c] */ edx = (u32)((u32)(esi + 0xffffffd4u));
  /* 005fb20f mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 005fb213 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb214 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fb219u; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fb214u); RETCHK(0x5fb219u, 0x5fb214u); LOADALL;
  /* 005fb219 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb21c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb21e jl 0x5fb3dd */ if (LT_) goto L_005fb3dd;
  /* 005fb224 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb225 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fb227 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb228 call 0x5fd9f0 */ esp -= 4; M32(esp) = 0x5fb22du; SAVEALL; F_005fd9f0(c); ABI_CHECK(0x5fd9f0u, 0x5fb228u); RETCHK(0x5fb22du, 0x5fb228u); LOADALL;
  /* 005fb22d mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb22f mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fb232 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb233 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fb238u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fb233u); RETCHK(0x5fb238u, 0x5fb233u); LOADALL;
  /* 005fb238 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fb23b mov edi, eax */ { edi = (u32)(eax); }
  /* 005fb23d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb23e call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fb243u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fb23eu); RETCHK(0x5fb243u, 0x5fb23eu); LOADALL;
  /* 005fb243 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb246 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fb24a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb24c jle 0x5fb3dd */ if ((ZF_|LT_)) goto L_005fb3dd;
  /* 005fb252 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
L_005fb256:;
  /* 005fb256 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fb258 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb259 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb25a call 0x5fd610 */ esp -= 4; M32(esp) = 0x5fb25fu; SAVEALL; F_005fd610(c); ABI_CHECK(0x5fd610u, 0x5fb25au); RETCHK(0x5fb25fu, 0x5fb25au); LOADALL;
  /* 005fb25f mov edi, eax */ { edi = (u32)(eax); }
  /* 005fb261 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb264 test byte ptr [edi + 8], 1 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb268 je 0x5fb3bf */ if (ZF_) goto L_005fb3bf;
  /* 005fb26e mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fb271 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 005fb275 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb276 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb277 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb27cu; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb277u); RETCHK(0x5fb27cu, 0x5fb277u); LOADALL;
  /* 005fb27c xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fb27e mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005fb282 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb283 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb284 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb289u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb284u); RETCHK(0x5fb289u, 0x5fb284u); LOADALL;
  /* 005fb289 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb28b mov dword ptr [esp + 0x20], ebp */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebp); }
  /* 005fb28f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb290 call 0x5736d0 */ esp -= 4; M32(esp) = 0x5fb295u; SAVEALL; F_005736d0(c); ABI_CHECK(0x5736d0u, 0x5fb290u); RETCHK(0x5fb295u, 0x5fb290u); LOADALL;
  /* 005fb295 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb298 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb29a jle 0x5fb2de */ if ((ZF_|LT_)) goto L_005fb2de;
L_005fb29c:;
  /* 005fb29c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb29d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb29e call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb2a3u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb29eu); RETCHK(0x5fb2a3u, 0x5fb29eu); LOADALL;
  /* 005fb2a3 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005fb2a7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb2aa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb2ac jne 0x5fb2c8 */ if (!ZF_) goto L_005fb2c8;
  /* 005fb2ae mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005fb2b2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb2b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb2b4 call 0x572630 */ esp -= 4; M32(esp) = 0x5fb2b9u; SAVEALL; F_00572630(c); ABI_CHECK(0x572630u, 0x5fb2b4u); RETCHK(0x5fb2b9u, 0x5fb2b4u); LOADALL;
  /* 005fb2b9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb2bc mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 005fb2c4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb2c6 je 0x5fb2d0 */ if (ZF_) goto L_005fb2d0;
L_005fb2c8:;
  /* 005fb2c8 mov dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x1u); }
L_005fb2d0:;
  /* 005fb2d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb2d1 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fb2d2 call 0x5736d0 */ esp -= 4; M32(esp) = 0x5fb2d7u; SAVEALL; F_005736d0(c); ABI_CHECK(0x5736d0u, 0x5fb2d2u); RETCHK(0x5fb2d7u, 0x5fb2d2u); LOADALL;
  /* 005fb2d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb2da cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb2dc jl 0x5fb29c */ if (LT_) goto L_005fb29c;
L_005fb2de:;
  /* 005fb2de mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fb2e1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fb2e5 and edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fb2e8 mov ebp, 1 */ { ebp = (u32)(0x1u); }
  /* 005fb2ed lea ecx, [eax + edx*4] */ ecx = (u32)((u32)(eax + edx * 4u));
  /* 005fb2f0 mov eax, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (u32)(M32(m_)); }
  /* 005fb2f3 shl ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fb2f6 lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 005fb2f9 mov al, byte ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fb2fc shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005fb2ff add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fb301 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb303 lea esi, [edx + ebx + 0x58] */ esi = (u32)((u32)(edx + ebx + 0x58u));
  /* 005fb307 mov ebx, dword ptr [edx + ebx + 0x58] */ { const u32 m_ = (u32)(edx + ebx + 0x58u); ebx = (u32)(M32(m_)); }
  /* 005fb30b je 0x5fb32d */ if (ZF_) goto L_005fb32d;
  /* 005fb30d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fb310 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fb314 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb315 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb316 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb317 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb31cu; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb317u); RETCHK(0x5fb31cu, 0x5fb317u); LOADALL;
  /* 005fb31c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb31f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb320 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fb325u; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fb320u); RETCHK(0x5fb325u, 0x5fb320u); LOADALL;
  /* 005fb325 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb328 mov ebp, 2 */ { ebp = (u32)(0x2u); }
L_005fb32d:;
  /* 005fb32d test byte ptr [edi + 8], 4 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb331 je 0x5fb34f */ if (ZF_) goto L_005fb34f;
  /* 005fb333 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fb336 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fb33a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb33b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb33c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb33d call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb342u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb33du); RETCHK(0x5fb342u, 0x5fb33du); LOADALL;
  /* 005fb342 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb345 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb346 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fb34bu; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fb346u); RETCHK(0x5fb34bu, 0x5fb346u); LOADALL;
  /* 005fb34b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb34e inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_005fb34f:;
  /* 005fb34f test byte ptr [edi + 8], 8 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb353 je 0x5fb370 */ if (ZF_) goto L_005fb370;
  /* 005fb355 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fb358 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005fb35c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb35d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb35e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb35f call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb364u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb35fu); RETCHK(0x5fb364u, 0x5fb35fu); LOADALL;
  /* 005fb364 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb367 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb368 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fb36du; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fb368u); RETCHK(0x5fb36du, 0x5fb368u); LOADALL;
  /* 005fb36d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fb370:;
  /* 005fb370 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb373 test ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb375 je 0x5fb3a7 */ if (ZF_) goto L_005fb3a7;
  /* 005fb377 shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fb37a sar ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005fb37d mov ecx, 0xffffffff */ { ecx = (u32)(0xffffffffu); }
  /* 005fb382 je 0x5fb391 */ if (ZF_) goto L_005fb391;
L_005fb384:;
  /* 005fb384 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb386 je 0x5fb389 */ if (ZF_) goto L_005fb389;
  /* 005fb388 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_005fb389:;
  /* 005fb389 sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005fb38b sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fb38d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb38f jne 0x5fb384 */ if (!ZF_) goto L_005fb384;
L_005fb391:;
  /* 005fb391 mov eax, dword ptr [edi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fb395 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb397 jl 0x5fb3a7 */ if (LT_) goto L_005fb3a7;
  /* 005fb399 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb39a mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005fb39e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb39f call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fb3a4u; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fb39fu); RETCHK(0x5fb3a4u, 0x5fb39fu); LOADALL;
  /* 005fb3a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fb3a7:;
  /* 005fb3a7 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fb3ab mov ebx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebx = (u32)(M32(m_)); }
  /* 005fb3af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb3b1 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb3b4 je 0x5fb3ba */ if (ZF_) goto L_005fb3ba;
  /* 005fb3b6 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fb3b8 jmp 0x5fb3bc */ goto L_005fb3bc;
L_005fb3ba:;
  /* 005fb3ba and al, 0xfe */ { u32 a_ = (eax & 0xffu), b_ = 0xfeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_005fb3bc:;
  /* 005fb3bc mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
L_005fb3bf:;
  /* 005fb3bf mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fb3c3 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fb3c7 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fb3ca dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fb3cb mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fb3cf mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005fb3d3 jne 0x5fb256 */ if (!ZF_) goto L_005fb256;
  /* 005fb3d9 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
L_005fb3dd:;
  /* 005fb3dd mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 005fb3e1 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005fb3e5 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fb3e8 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fb3e9 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb3eb mov dword ptr [esp + 0x20], esi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(esi); }
  /* 005fb3ef mov dword ptr [esp + 0x24], ebp */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebp); }
  /* 005fb3f3 jl 0x5fb202 */ if (LT_) goto L_005fb202;
  /* 005fb3f9 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005fb3fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005fb3fe:;
  /* 005fb3fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb3ff mov dword ptr [ebx + 0x44], ecx */ { const u32 m_ = (u32)(ebx + 0x44u); M32(m_) = (u32)(ecx); }
  /* 005fb402 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb403 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb404 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb407 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb410(CPU *c) {
  NATIVE_HOOK(0x5fb410u) REGS; LOADALL;
L_005fb410:;
  /* 005fb410 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb413 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb414 mov ebx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ebx = (u32)(M32(m_)); }
  /* 005fb418 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb419 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb41a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005fb41c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb41d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fb41e cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb421 ja 0x5fb7b0 */ if (!(CF_|ZF_)) goto L_005fb7b0;
  /* 005fb427 jmp dword ptr [eax*4 + 0x5fb7bc] */ { const u32 m_ = (u32)(eax * 4u + 0x5fb7bcu); u32 t_ = M32(m_); switch (t_) { case 0x5fb42eu: goto L_005fb42e; case 0x5fb450u: goto L_005fb450; case 0x5fb472u: goto L_005fb472; case 0x5fb49du: goto L_005fb49d; case 0x5fb4dau: goto L_005fb4da; case 0x5fb50eu: goto L_005fb50e; case 0x5fb54cu: goto L_005fb54c; case 0x5fb567u: goto L_005fb567; case 0x5fb59cu: goto L_005fb59c; case 0x5fb790u: goto L_005fb790; case 0x5fb79au: goto L_005fb79a; case 0x5fb7b0u: goto L_005fb7b0; default: SAVEALL; call_ind(c, t_); return; } }
L_005fb42e:;
  /* 005fb42e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fb431 mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005fb435 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb436 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb437 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fb43cu; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fb437u); RETCHK(0x5fb43cu, 0x5fb437u); LOADALL;
  /* 005fb43c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fb43e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb441 and ecx, 0xfffffffe */ { u32 a_ = ecx, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fb444 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb445 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005fb447 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb448 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb44a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb44b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb44c add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb44f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb450:;
  /* 005fb450 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fb453 mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005fb457 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb458 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb459 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fb45eu; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fb459u); RETCHK(0x5fb45eu, 0x5fb459u); LOADALL;
  /* 005fb45e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fb460 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb463 or ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fb466 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb467 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005fb469 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb46a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb46c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb46d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb46e add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb471 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb472:;
  /* 005fb472 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fb475 mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005fb479 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb47a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb47b call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fb480u; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fb47bu); RETCHK(0x5fb480u, 0x5fb47bu); LOADALL;
  /* 005fb480 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb482 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 005fb485 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb486 call 0x5fc770 */ esp -= 4; M32(esp) = 0x5fb48bu; SAVEALL; F_005fc770(c); ABI_CHECK(0x5fc770u, 0x5fb486u); RETCHK(0x5fb48bu, 0x5fb486u); LOADALL;
  /* 005fb48b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb48c mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fb48e call 0x5fc6d0 */ esp -= 4; M32(esp) = 0x5fb493u; SAVEALL; F_005fc6d0(c); ABI_CHECK(0x5fc6d0u, 0x5fb48eu); RETCHK(0x5fb493u, 0x5fb48eu); LOADALL;
  /* 005fb493 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb496 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb498 jge 0x5fb4d0 */ if (!LT_) goto L_005fb4d0;
  /* 005fb49a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb49b jmp 0x5fb4bd */ goto L_005fb4bd;
L_005fb49d:;
  /* 005fb49d mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fb4a0 mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005fb4a4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb4a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb4a6 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fb4abu; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fb4a6u); RETCHK(0x5fb4abu, 0x5fb4a6u); LOADALL;
  /* 005fb4ab mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb4ad lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 005fb4b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb4b1 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fb4b6u; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fb4b1u); RETCHK(0x5fb4b6u, 0x5fb4b1u); LOADALL;
  /* 005fb4b6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb4b9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fb4ba js 0x5fb4d0 */ if (SF_) goto L_005fb4d0;
  /* 005fb4bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_005fb4bd:;
  /* 005fb4bd lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 005fb4c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb4c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb4c2 call 0x5fc610 */ esp -= 4; M32(esp) = 0x5fb4c7u; SAVEALL; F_005fc610(c); ABI_CHECK(0x5fc610u, 0x5fb4c2u); RETCHK(0x5fb4c7u, 0x5fb4c2u); LOADALL;
  /* 005fb4c7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fb4c9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb4cc or al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fb4ce mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
L_005fb4d0:;
  /* 005fb4d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb4d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb4d2 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb4d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb4d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb4d6 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb4d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb4da:;
  /* 005fb4da mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fb4dd mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005fb4e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb4e2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb4e3 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fb4e8u; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fb4e3u); RETCHK(0x5fb4e8u, 0x5fb4e3u); LOADALL;
  /* 005fb4e8 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb4ea mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb4ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb4ee lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 005fb4f1 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 005fb4f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb4f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb4f6 call 0x5fc610 */ esp -= 4; M32(esp) = 0x5fb4fbu; SAVEALL; F_005fc610(c); ABI_CHECK(0x5fc610u, 0x5fb4f6u); RETCHK(0x5fb4fbu, 0x5fb4f6u); LOADALL;
  /* 005fb4fb mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fb4fd add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb500 or al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fb502 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fb504 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb505 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb506 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb508 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb509 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb50a add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb50d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb50e:;
  /* 005fb50e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fb511 mov edi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edi = (u32)(M32(m_)); }
  /* 005fb515 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb516 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb517 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fb51cu; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fb517u); RETCHK(0x5fb51cu, 0x5fb517u); LOADALL;
  /* 005fb51c mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fb51f mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb521 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb522 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb523 call 0x5fb160 */ esp -= 4; M32(esp) = 0x5fb528u; SAVEALL; F_005fb160(c); ABI_CHECK(0x5fb160u, 0x5fb523u); RETCHK(0x5fb528u, 0x5fb523u); LOADALL;
  /* 005fb528 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fb52b lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 005fb52e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb52f lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 005fb532 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb533 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb534 call 0x5fc610 */ esp -= 4; M32(esp) = 0x5fb539u; SAVEALL; F_005fc610(c); ABI_CHECK(0x5fc610u, 0x5fb534u); RETCHK(0x5fb539u, 0x5fb534u); LOADALL;
  /* 005fb539 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fb53b add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb53e or al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fb540 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fb542 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb543 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb544 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb546 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb547 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb548 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb54b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb54c:;
  /* 005fb54c mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fb54f mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005fb553 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb554 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb555 call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fb55au; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fb555u); RETCHK(0x5fb55au, 0x5fb555u); LOADALL;
  /* 005fb55a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb55d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb55f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb560 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb561 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb562 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb563 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb566 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb567:;
  /* 005fb567 fild dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005fb56a mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005fb56e fmul dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fb571 lea ecx, [eax + 0x2c] */ ecx = (u32)((u32)(eax + 0x2cu));
  /* 005fb574 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb575 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb576 fmul dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fb579 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fb57b fild dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 005fb57e fmul dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fb581 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005fb587 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fb58a call 0x5fb1c0 */ esp -= 4; M32(esp) = 0x5fb58fu; SAVEALL; F_005fb1c0(c); ABI_CHECK(0x5fb1c0u, 0x5fb58au); RETCHK(0x5fb58fu, 0x5fb58au); LOADALL;
  /* 005fb58f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb592 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb594 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb595 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb596 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb597 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb598 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb59b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb59c:;
  /* 005fb59c mov edi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edi = (u32)(M32(m_)); }
  /* 005fb5a0 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fb5a3 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005fb5a7 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb5aa mov edx, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); edx = (u32)(M32(m_)); }
  /* 005fb5ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb5ae mov dword ptr [esp + 0x30], edx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edx); }
  /* 005fb5b2 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fb5b7u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fb5b2u); RETCHK(0x5fb5b7u, 0x5fb5b2u); LOADALL;
  /* 005fb5b7 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fb5ba mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb5bc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb5bd mov dword ptr [esp + 0x38], esi */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(esi); }
  /* 005fb5c1 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fb5c6u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fb5c1u); RETCHK(0x5fb5c6u, 0x5fb5c1u); LOADALL;
  /* 005fb5c6 mov edx, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); edx = (u32)(M32(m_)); }
  /* 005fb5c9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb5cc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fb5ce mov dword ptr [esp + 0x34], edx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edx); }
  /* 005fb5d2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb5d4 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005fb5d8 jle 0x5fb782 */ if ((ZF_|LT_)) goto L_005fb782;
  /* 005fb5de lea esi, [eax + 0x30] */ esi = (u32)((u32)(eax + 0x30u));
  /* 005fb5e1 mov dword ptr [esp + 0x14], esi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(esi); }
  /* 005fb5e5 jmp 0x5fb5ef */ goto L_005fb5ef;
L_005fb5e7:;
  /* 005fb5e7 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005fb5eb mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
L_005fb5ef:;
  /* 005fb5ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb5f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb5f1 mov dword ptr [edi + 0x44], ecx */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(ecx); }
  /* 005fb5f4 call 0x5fd330 */ esp -= 4; M32(esp) = 0x5fb5f9u; SAVEALL; F_005fd330(c); ABI_CHECK(0x5fd330u, 0x5fb5f4u); RETCHK(0x5fb5f9u, 0x5fb5f4u); LOADALL;
  /* 005fb5f9 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 005fb5fd lea eax, [esi - 0x2c] */ eax = (u32)((u32)(esi + 0xffffffd4u));
  /* 005fb600 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb601 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fb606u; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fb601u); RETCHK(0x5fb606u, 0x5fb601u); LOADALL;
  /* 005fb606 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005fb608 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb609 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb60a call 0x5fd9f0 */ esp -= 4; M32(esp) = 0x5fb60fu; SAVEALL; F_005fd9f0(c); ABI_CHECK(0x5fd9f0u, 0x5fb60au); RETCHK(0x5fb60fu, 0x5fb60au); LOADALL;
  /* 005fb60f mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb611 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fb614 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb615 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fb61au; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fb615u); RETCHK(0x5fb61au, 0x5fb615u); LOADALL;
  /* 005fb61a mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fb61c mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb61f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb620 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fb625u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fb620u); RETCHK(0x5fb625u, 0x5fb620u); LOADALL;
  /* 005fb625 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb628 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005fb62c test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb62e jle 0x5fb762 */ if ((ZF_|LT_)) goto L_005fb762;
  /* 005fb634 mov dword ptr [esp + 0x24], ebp */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebp); }
L_005fb638:;
  /* 005fb638 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fb63c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005fb63e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb63f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb640 call 0x5fd610 */ esp -= 4; M32(esp) = 0x5fb645u; SAVEALL; F_005fd610(c); ABI_CHECK(0x5fd610u, 0x5fb640u); RETCHK(0x5fb645u, 0x5fb640u); LOADALL;
  /* 005fb645 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb647 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb64a test byte ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb64e je 0x5fb748 */ if (ZF_) goto L_005fb748;
  /* 005fb654 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fb657 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fb65b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb65c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb65d call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb662u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb65du); RETCHK(0x5fb662u, 0x5fb65du); LOADALL;
  /* 005fb662 mov ebx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ebx = (u32)(M32(m_)); }
  /* 005fb666 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005fb668 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb66b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb66e and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fb671 mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005fb675 mov ebp, 1 */ { ebp = (u32)(0x1u); }
  /* 005fb67a lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 005fb67d mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fb681 lea eax, [eax + ebx*4] */ eax = (u32)((u32)(eax + ebx * 4u));
  /* 005fb684 lea edx, [eax + edx*2] */ edx = (u32)((u32)(eax + edx * 2u));
  /* 005fb687 mov al, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fb68a shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005fb68d test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb68f mov ebx, dword ptr [edx + edi + 0x58] */ { const u32 m_ = (u32)(edx + edi + 0x58u); ebx = (u32)(M32(m_)); }
  /* 005fb693 lea edi, [edx + edi + 0x58] */ edi = (u32)((u32)(edx + edi + 0x58u));
  /* 005fb697 je 0x5fb6b9 */ if (ZF_) goto L_005fb6b9;
  /* 005fb699 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fb69c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb69d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb69e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb69f call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb6a4u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb69fu); RETCHK(0x5fb6a4u, 0x5fb69fu); LOADALL;
  /* 005fb6a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb6a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb6a8 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fb6adu; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fb6a8u); RETCHK(0x5fb6adu, 0x5fb6a8u); LOADALL;
  /* 005fb6ad mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fb6b1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb6b4 mov ebp, 2 */ { ebp = (u32)(0x2u); }
L_005fb6b9:;
  /* 005fb6b9 test byte ptr [esi + 8], 4 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb6bd je 0x5fb6db */ if (ZF_) goto L_005fb6db;
  /* 005fb6bf mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fb6c2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb6c3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb6c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb6c5 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb6cau; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb6c5u); RETCHK(0x5fb6cau, 0x5fb6c5u); LOADALL;
  /* 005fb6ca add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb6cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb6ce call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fb6d3u; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fb6ceu); RETCHK(0x5fb6d3u, 0x5fb6ceu); LOADALL;
  /* 005fb6d3 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fb6d7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb6da inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_005fb6db:;
  /* 005fb6db test byte ptr [esi + 8], 8 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb6df je 0x5fb6f8 */ if (ZF_) goto L_005fb6f8;
  /* 005fb6e1 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb6e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb6e5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb6e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb6e7 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fb6ecu; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fb6e7u); RETCHK(0x5fb6ecu, 0x5fb6e7u); LOADALL;
  /* 005fb6ec add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb6ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb6f0 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fb6f5u; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fb6f0u); RETCHK(0x5fb6f5u, 0x5fb6f0u); LOADALL;
  /* 005fb6f5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fb6f8:;
  /* 005fb6f8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb6fb test ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb6fd je 0x5fb72c */ if (ZF_) goto L_005fb72c;
  /* 005fb6ff shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fb702 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fb705 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb707 je 0x5fb716 */ if (ZF_) goto L_005fb716;
L_005fb709:;
  /* 005fb709 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb70b je 0x5fb70e */ if (ZF_) goto L_005fb70e;
  /* 005fb70d inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_005fb70e:;
  /* 005fb70e sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005fb710 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fb712 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb714 jne 0x5fb709 */ if (!ZF_) goto L_005fb709;
L_005fb716:;
  /* 005fb716 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fb71a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb71c jl 0x5fb72c */ if (LT_) goto L_005fb72c;
  /* 005fb71e mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005fb722 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb723 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb724 call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fb729u; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fb724u); RETCHK(0x5fb729u, 0x5fb724u); LOADALL;
  /* 005fb729 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fb72c:;
  /* 005fb72c mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fb730 mov edi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edi = (u32)(M32(m_)); }
  /* 005fb734 mov ebx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ebx = (u32)(M32(m_)); }
  /* 005fb738 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb73a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fb73d je 0x5fb743 */ if (ZF_) goto L_005fb743;
  /* 005fb73f or al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fb741 jmp 0x5fb745 */ goto L_005fb745;
L_005fb743:;
  /* 005fb743 and al, 0xfd */ { u32 a_ = (eax & 0xffu), b_ = 0xfdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_005fb745:;
  /* 005fb745 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
L_005fb748:;
  /* 005fb748 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fb74c mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fb750 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fb753 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fb754 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005fb758 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 005fb75c jne 0x5fb638 */ if (!ZF_) goto L_005fb638;
L_005fb762:;
  /* 005fb762 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005fb766 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fb76a mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005fb76e add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fb771 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fb772 mov dword ptr [esp + 0x14], esi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(esi); }
  /* 005fb776 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb778 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fb77c jl 0x5fb5e7 */ if (LT_) goto L_005fb5e7;
L_005fb782:;
  /* 005fb782 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 005fb786 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fb78a mov dword ptr [edi + 0x44], edx */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(edx); }
  /* 005fb78d mov dword ptr [edi + 0x34], eax */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(eax); }
L_005fb790:;
  /* 005fb790 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb791 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb792 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb794 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb795 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb796 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb799 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb79a:;
  /* 005fb79a mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005fb79e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb79f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb7a0 call 0x5fb7f0 */ esp -= 4; M32(esp) = 0x5fb7a5u; SAVEALL; F_005fb7f0(c); ABI_CHECK(0x5fb7f0u, 0x5fb7a0u); RETCHK(0x5fb7a5u, 0x5fb7a0u); LOADALL;
  /* 005fb7a5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb7a8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb7a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb7aa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb7ab pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb7ac add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb7af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb7b0:;
  /* 005fb7b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb7b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb7b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb7b3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fb7b5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb7b6 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb7b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb7f0(CPU *c) {
  NATIVE_HOOK(0x5fb7f0u) REGS; LOADALL;
L_005fb7f0:;
  /* 005fb7f0 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb7f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb7f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb7f5 mov esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 005fb7f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb7fa mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005fb7fe mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fb801 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb802 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb803 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fb808u; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fb803u); RETCHK(0x5fb808u, 0x5fb803u); LOADALL;
  /* 005fb808 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fb80b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb80e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb810 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fb812 mov dword ptr [esp + 0x1c], esi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(esi); }
  /* 005fb816 jge 0x5fb821 */ if (!LT_) goto L_005fb821;
  /* 005fb818 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb819 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb81a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fb81c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb81d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb820 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb821:;
  /* 005fb821 lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 005fb824 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb825 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb826 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fb82bu; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fb826u); RETCHK(0x5fb82bu, 0x5fb826u); LOADALL;
  /* 005fb82b mov edx, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); edx = (u32)(M32(m_)); }
  /* 005fb82e mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fb830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb831 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb832 call 0x5fd9f0 */ esp -= 4; M32(esp) = 0x5fb837u; SAVEALL; F_005fd9f0(c); ABI_CHECK(0x5fd9f0u, 0x5fb832u); RETCHK(0x5fb837u, 0x5fb832u); LOADALL;
  /* 005fb837 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 005fb83b mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb83e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb83f call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fb844u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fb83fu); RETCHK(0x5fb844u, 0x5fb83fu); LOADALL;
  /* 005fb844 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb847 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005fb849 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb84b mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fb84f jle 0x5fb8f0 */ if ((ZF_|LT_)) goto L_005fb8f0;
L_005fb855:;
  /* 005fb855 mov edx, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); edx = (u32)(M32(m_)); }
  /* 005fb858 lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 005fb85c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fb85d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb85e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb85f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb860 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb861 call 0x5fdb20 */ esp -= 4; M32(esp) = 0x5fb866u; SAVEALL; F_005fdb20(c); ABI_CHECK(0x5fdb20u, 0x5fb861u); RETCHK(0x5fb866u, 0x5fb861u); LOADALL;
  /* 005fb866 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 005fb86a mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005fb86e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb871 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb873 je 0x5fb88a */ if (ZF_) goto L_005fb88a;
  /* 005fb875 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fb879 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fb87a cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb87c jl 0x5fb855 */ if (LT_) goto L_005fb855;
  /* 005fb87e mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fb882 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb883 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb884 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb885 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb886 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb889 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb88a:;
  /* 005fb88a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb88c jl 0x5fb8f0 */ if (LT_) goto L_005fb8f0;
  /* 005fb88e mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005fb892 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb893 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fb896 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb897 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fb89cu; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fb897u); RETCHK(0x5fb89cu, 0x5fb897u); LOADALL;
  /* 005fb89c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fb89e mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 005fb8a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb8a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb8a4 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fb8a7 call 0x5fd610 */ esp -= 4; M32(esp) = 0x5fb8acu; SAVEALL; F_005fd610(c); ABI_CHECK(0x5fd610u, 0x5fb8a7u); RETCHK(0x5fb8acu, 0x5fb8a7u); LOADALL;
  /* 005fb8ac mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fb8af add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb8b2 test esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb8b4 je 0x5fb8f0 */ if (ZF_) goto L_005fb8f0;
  /* 005fb8b6 shr ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fb8b9 or edx, 0xffffffff */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fb8bc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb8be je 0x5fb8ce */ if (ZF_) goto L_005fb8ce;
L_005fb8c0:;
  /* 005fb8c0 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fb8c3 je 0x5fb8c6 */ if (ZF_) goto L_005fb8c6;
  /* 005fb8c5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_005fb8c6:;
  /* 005fb8c6 shr esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005fb8c8 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fb8ca test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb8cc jne 0x5fb8c0 */ if (!ZF_) goto L_005fb8c0;
L_005fb8ce:;
  /* 005fb8ce mov ecx, dword ptr [eax + edx*4 + 0x10] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fb8d2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb8d4 jl 0x5fb8f0 */ if (LT_) goto L_005fb8f0;
  /* 005fb8d6 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fb8d9 mov esi, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); esi = (u32)(M32(m_)); }
  /* 005fb8dc mov dword ptr [edi + 0x44], ecx */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(ecx); }
  /* 005fb8df mov edx, dword ptr [eax + edx*4 + 0x10] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fb8e3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fb8e4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb8e5 call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fb8eau; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fb8e5u); RETCHK(0x5fb8eau, 0x5fb8e5u); LOADALL;
  /* 005fb8ea add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb8ed mov dword ptr [edi + 0x44], esi */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(esi); }
L_005fb8f0:;
  /* 005fb8f0 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fb8f4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb8f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb8f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb8f7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb8f8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb8fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb900(CPU *c) {
  NATIVE_HOOK(0x5fb900u) REGS; LOADALL;
L_005fb900:;
  /* 005fb900 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fb904 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fb908 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fb90b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb910(CPU *c) {
  NATIVE_HOOK(0x5fb910u) REGS; LOADALL;
L_005fb910:;
  /* 005fb910 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fb914 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb920(CPU *c) {
  NATIVE_HOOK(0x5fb920u) REGS; LOADALL;
L_005fb920:;
  /* 005fb920 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb921 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fb926 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fb928 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fb92du; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fb928u); RETCHK(0x5fb92du, 0x5fb928u); LOADALL;
  /* 005fb92d mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005fb931 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb934 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb936 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fb939 jne 0x5fb93d */ if (!ZF_) goto L_005fb93d;
  /* 005fb93b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb93c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb93d:;
  /* 005fb93d push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fb942 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fb944 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fb949u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fb944u); RETCHK(0x5fb949u, 0x5fb944u); LOADALL;
  /* 005fb949 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb94c mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fb94f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fb951 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fb953 and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fb955 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb956 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb960(CPU *c) {
  NATIVE_HOOK(0x5fb960u) REGS; LOADALL;
L_005fb960:;
  /* 005fb960 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fb961 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005fb965 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fb966 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fb968 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fb96b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb96c cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb96e je 0x5fb979 */ if (ZF_) goto L_005fb979;
  /* 005fb970 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb971 call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fb976u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fb971u); RETCHK(0x5fb976u, 0x5fb971u); LOADALL;
  /* 005fb976 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fb979:;
  /* 005fb979 mov edi, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edi = (u32)(M32(m_)); }
  /* 005fb97c mov dword ptr [ebx + 0x18], ebp */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(ebp); }
  /* 005fb97f cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb981 je 0x5fb9bb */ if (ZF_) goto L_005fb9bb;
  /* 005fb983 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb984 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb985 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fb98au; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fb985u); RETCHK(0x5fb98au, 0x5fb985u); LOADALL;
  /* 005fb98a mov esi, eax */ { esi = (u32)(eax); }
  /* 005fb98c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb98f cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb991 jle 0x5fb9b1 */ if ((ZF_|LT_)) goto L_005fb9b1;
  /* 005fb993 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb994 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fb999u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fb994u); RETCHK(0x5fb999u, 0x5fb994u); LOADALL;
  /* 005fb999 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb99c cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fb99e jle 0x5fb9b1 */ if ((ZF_|LT_)) goto L_005fb9b1;
  /* 005fb9a0 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005fb9a3:;
  /* 005fb9a3 mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
  /* 005fb9a5 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fb9a8 mov dword ptr [eax + 8], ebp */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebp); }
  /* 005fb9ab add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fb9ae dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fb9af jne 0x5fb9a3 */ if (!ZF_) goto L_005fb9a3;
L_005fb9b1:;
  /* 005fb9b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb9b2 call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fb9b7u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fb9b2u); RETCHK(0x5fb9b7u, 0x5fb9b2u); LOADALL;
  /* 005fb9b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb9ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005fb9bb:;
  /* 005fb9bb mov dword ptr [ebx + 0x14], ebp */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ebp); }
  /* 005fb9be pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb9bf mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fb9c1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fb9c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fb9c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fb9d0(CPU *c) {
  NATIVE_HOOK(0x5fb9d0u) REGS; LOADALL;
L_005fb9d0:;
  /* 005fb9d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fb9d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb9d2 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005fb9d6 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 005fb9da push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fb9dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fb9dd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fb9de call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fb9e3u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fb9deu); RETCHK(0x5fb9e3u, 0x5fb9deu); LOADALL;
  /* 005fb9e3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fb9e6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb9e8 jne 0x5fb9ed */ if (!ZF_) goto L_005fb9ed;
  /* 005fb9ea pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fb9eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fb9ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fb9ed:;
  /* 005fb9ed mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fb9f1 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fb9f5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb9f7 jle 0x5fba68 */ if ((ZF_|LT_)) goto L_005fba68;
  /* 005fb9f9 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fb9fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fb9fe jne 0x5fba28 */ if (!ZF_) goto L_005fba28;
  /* 005fba00 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fba05 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fba07 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fba0cu; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fba07u); RETCHK(0x5fba0cu, 0x5fba07u); LOADALL;
  /* 005fba0c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fba0f mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fba12 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fba14 je 0x5fba28 */ if (ZF_) goto L_005fba28;
  /* 005fba16 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fba1b push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fba1d call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fba22u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fba1du); RETCHK(0x5fba22u, 0x5fba1du); LOADALL;
  /* 005fba22 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fba25 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
L_005fba28:;
  /* 005fba28 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fba2b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fba2d je 0x5fba63 */ if (ZF_) goto L_005fba63;
  /* 005fba2f mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fba33 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fba38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fba39 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fba3a call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fba3fu; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fba3au); RETCHK(0x5fba3fu, 0x5fba3au); LOADALL;
  /* 005fba3f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fba42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fba44 jne 0x5fba49 */ if (!ZF_) goto L_005fba49;
  /* 005fba46 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fba47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fba48 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fba49:;
  /* 005fba49 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fba4d lea ecx, [edx*4] */ ecx = (u32)((u32)(edx * 4u));
  /* 005fba54 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fba55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fba56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fba57 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fba5cu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fba57u); RETCHK(0x5fba5cu, 0x5fba57u); LOADALL;
  /* 005fba5c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fba5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fba61 jne 0x5fba68 */ if (!ZF_) goto L_005fba68;
L_005fba63:;
  /* 005fba63 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fba64 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fba66 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fba67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fba68:;
  /* 005fba68 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fba6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fba6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fba6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fba70(CPU *c) {
  NATIVE_HOOK(0x5fba70u) REGS; LOADALL;
L_005fba70:;
  /* 005fba70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fba71 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fba72 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fba73 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fba74 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005fba78 mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fba7b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fba7c call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fba81u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fba7cu); RETCHK(0x5fba81u, 0x5fba7cu); LOADALL;
  /* 005fba81 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fba85 mov esi, dword ptr [eax + ecx*4] */ { const u32 m_ = (u32)(eax + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 005fba88 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fba8b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fba8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fba8d call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fba92u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fba8du); RETCHK(0x5fba92u, 0x5fba8du); LOADALL;
  /* 005fba92 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fba94 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fba97 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fba98 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005fba9a cmp dword ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fba9e je 0x5fbad5 */ if (ZF_) goto L_005fbad5;
L_005fbaa0:;
  /* 005fbaa0 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fbaa3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbaa4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbaa5 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fbaa6 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fbaabu; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fbaa6u); RETCHK(0x5fbaabu, 0x5fbaa6u); LOADALL;
  /* 005fbaab mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fbaad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbab0 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fbab1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbab3 jne 0x5fbaa0 */ if (!ZF_) goto L_005fbaa0;
  /* 005fbab5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbab7 jle 0x5fbad5 */ if ((ZF_|LT_)) goto L_005fbad5;
  /* 005fbab9 mov edx, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); edx = (u32)(M32(m_)); }
  /* 005fbabc mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fbabf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fbac0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fbac1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbac2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbac3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbac4 call 0x5fbe50 */ esp -= 4; M32(esp) = 0x5fbac9u; SAVEALL; F_005fbe50(c); ABI_CHECK(0x5fbe50u, 0x5fbac4u); RETCHK(0x5fbac9u, 0x5fbac4u); LOADALL;
  /* 005fbac9 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbacc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbace jne 0x5fbad5 */ if (!ZF_) goto L_005fbad5;
  /* 005fbad0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbad1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbad2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbad3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbad4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbad5:;
  /* 005fbad5 mov eax, edi */ { eax = (u32)(edi); }
  /* 005fbad7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbad8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbad9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbada pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbadb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fbae0(CPU *c) {
  NATIVE_HOOK(0x5fbae0u) REGS; LOADALL;
L_005fbae0:;
  /* 005fbae0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fbae1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fbae2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbae3 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 005fbae7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbae8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbae9 lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 005fbaed push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fbaef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbaf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbaf1 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fbaf6u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fbaf1u); RETCHK(0x5fbaf6u, 0x5fbaf1u); LOADALL;
  /* 005fbaf6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbaf9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbafb jne 0x5fbb03 */ if (!ZF_) goto L_005fbb03;
  /* 005fbafd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbafe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbaff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbb00 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbb01 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fbb02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbb03:;
  /* 005fbb03 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fbb07 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbb09 jle 0x5fbc17 */ if ((ZF_|LT_)) goto L_005fbc17;
  /* 005fbb0f mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005fbb13 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fbb16 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbb18 jne 0x5fbb4e */ if (!ZF_) goto L_005fbb4e;
  /* 005fbb1a push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fbb1f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fbb21 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fbb26u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fbb21u); RETCHK(0x5fbb26u, 0x5fbb21u); LOADALL;
  /* 005fbb26 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbb29 mov dword ptr [edi + 0x18], eax */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fbb2c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbb2e je 0x5fbb46 */ if (ZF_) goto L_005fbb46;
  /* 005fbb30 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fbb35 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fbb37 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fbb3cu; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fbb37u); RETCHK(0x5fbb3cu, 0x5fbb37u); LOADALL;
  /* 005fbb3c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbb3f mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fbb42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbb44 jne 0x5fbb4e */ if (!ZF_) goto L_005fbb4e;
L_005fbb46:;
  /* 005fbb46 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbb47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbb48 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbb49 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fbb4b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbb4c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fbb4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbb4e:;
  /* 005fbb4e mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fbb52 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005fbb55 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fbb5a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fbb5b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fbb5c call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fbb61u; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fbb5cu); RETCHK(0x5fbb61u, 0x5fbb5cu); LOADALL;
  /* 005fbb61 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fbb63 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbb66 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbb68 jne 0x5fbb72 */ if (!ZF_) goto L_005fbb72;
L_005fbb6a:;
  /* 005fbb6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbb6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbb6c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbb6d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fbb6f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbb70 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fbb71 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbb72:;
  /* 005fbb72 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fbb76 mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 005fbb7e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbb80 jle 0x5fbc1b */ if ((ZF_|LT_)) goto L_005fbc1b;
L_005fbb86:;
  /* 005fbb86 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 005fbb89 lea ebx, [esi + 8] */ ebx = (u32)((u32)(esi + 0x8u));
  /* 005fbb8c push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fbb8e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbb8f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbb90 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005fbb96 mov dword ptr [edi], 0xffffffff */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0xffffffffu); }
  /* 005fbb9c mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
  /* 005fbba2 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fbba7u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fbba2u); RETCHK(0x5fbba7u, 0x5fbba2u); LOADALL;
  /* 005fbba7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbbaa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbbac je 0x5fbb6a */ if (ZF_) goto L_005fbb6a;
  /* 005fbbae push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fbbb0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbbb1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbbb2 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fbbb7u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fbbb2u); RETCHK(0x5fbbb7u, 0x5fbbb2u); LOADALL;
  /* 005fbbb7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbbba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbbbc je 0x5fbb6a */ if (ZF_) goto L_005fbb6a;
  /* 005fbbbe push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fbbc0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fbbc1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbbc2 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fbbc7u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fbbc2u); RETCHK(0x5fbbc7u, 0x5fbbc2u); LOADALL;
  /* 005fbbc7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbbca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbbcc je 0x5fbb6a */ if (ZF_) goto L_005fbb6a;
  /* 005fbbce lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 005fbbd1 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fbbd3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbbd4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbbd5 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fbbdau; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fbbd5u); RETCHK(0x5fbbdau, 0x5fbbd5u); LOADALL;
  /* 005fbbda add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbbdd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbbdf je 0x5fbb6a */ if (ZF_) goto L_005fbb6a;
  /* 005fbbe1 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fbbe3 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005fbbe7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbbe8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbbe9 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 005fbbec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fbbed call dword ptr [ecx*4 + 0x67f874] */ { const u32 m_ = (u32)(ecx * 4u + 0x67f874u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fbbf4u; SAVEALL; call_ind(c, t_); RETCHK(0x5fbbf4u, 0x5fbbedu); LOADALL; }
  /* 005fbbf4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbbf7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbbf9 je 0x5fbb6a */ if (ZF_) goto L_005fbb6a;
  /* 005fbbff mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fbc03 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fbc07 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fbc0a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fbc0b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbc0d mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005fbc11 jl 0x5fbb86 */ if (LT_) goto L_005fbb86;
L_005fbc17:;
  /* 005fbc17 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
L_005fbc1b:;
  /* 005fbc1b mov eax, edi */ { eax = (u32)(edi); }
  /* 005fbc1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbc1e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbc1f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbc20 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbc21 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fbc22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fbc30(CPU *c) {
  NATIVE_HOOK(0x5fbc30u) REGS; LOADALL;
L_005fbc30:;
  /* 005fbc30 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fbc34 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fbc38 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbc39 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fbc3d mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 005fbc40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbc41 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fbc44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fbc45 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fbc46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbc47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbc48 call 0x5fbe50 */ esp -= 4; M32(esp) = 0x5fbc4du; SAVEALL; F_005fbe50(c); ABI_CHECK(0x5fbe50u, 0x5fbc48u); RETCHK(0x5fbc4du, 0x5fbc48u); LOADALL;
  /* 005fbc4d add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbc50 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fbc52 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fbc54 and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fbc56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbc57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fbc60(CPU *c) {
  NATIVE_HOOK(0x5fbc60u) REGS; LOADALL;
L_005fbc60:;
  /* 005fbc60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fbc61 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbc62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbc63 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbc64 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005fbc68 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005fbc6a test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fbc6c jne 0x5fbd1b */ if (!ZF_) goto L_005fbd1b;
  /* 005fbc72 or al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fbc74 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 005fbc76 call 0x56bd00 */ esp -= 4; M32(esp) = 0x5fbc7bu; SAVEALL; F_0056bd00(c); ABI_CHECK(0x56bd00u, 0x5fbc76u); RETCHK(0x5fbc7bu, 0x5fbc76u); LOADALL;
  /* 005fbc7b xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fbc7d cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbc7f je 0x5fbcaf */ if (ZF_) goto L_005fbcaf;
  /* 005fbc81 mov ecx, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); ecx = (u32)(M32(m_)); }
  /* 005fbc84 fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 005fbc87 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fbc8a mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005fbc8e fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 005fbc94 fstp dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fbc97 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 005fbc9b fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 005fbca1 fstp dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fbca4 fld dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); FPUSH((double)MF32(m_)); }
  /* 005fbca7 fdivr dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 005fbcaa fstp dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fbcad jmp 0x5fbcb8 */ goto L_005fbcb8;
L_005fbcaf:;
  /* 005fbcaf mov dword ptr [edi + 0x3c], ebp */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(ebp); }
  /* 005fbcb2 mov dword ptr [edi + 0x38], ebp */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(ebp); }
  /* 005fbcb5 mov dword ptr [edi + 0x40], ebp */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(ebp); }
L_005fbcb8:;
  /* 005fbcb8 mov esi, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); esi = (u32)(M32(m_)); }
  /* 005fbcbb mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fbcbe cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbcc0 je 0x5fbd15 */ if (ZF_) goto L_005fbd15;
  /* 005fbcc2 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fbcc5 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 005fbcc7 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005fbcc9 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fbccc add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fbcce inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fbccf cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbcd1 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fbcd4 jl 0x5fbcdc */ if (LT_) goto L_005fbcdc;
  /* 005fbcd6 mov dword ptr [esi + 4], ebp */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebp); }
  /* 005fbcd9 mov dword ptr [esi + 8], ebp */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebp); }
L_005fbcdc:;
  /* 005fbcdc cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbcde mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fbce0 je 0x5fbd15 */ if (ZF_) goto L_005fbd15;
L_005fbce2:;
  /* 005fbce2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fbce3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbce4 call dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fbce7u; SAVEALL; call_ind(c, t_); RETCHK(0x5fbce7u, 0x5fbce4u); LOADALL; }
  /* 005fbce7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbcea cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbcec jne 0x5fbd22 */ if (!ZF_) goto L_005fbd22;
  /* 005fbcee mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fbcf1 cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbcf3 je 0x5fbd15 */ if (ZF_) goto L_005fbd15;
  /* 005fbcf5 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fbcf8 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 005fbcfa mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005fbcfc shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fbcff add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fbd01 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fbd02 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbd04 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fbd07 jl 0x5fbd0f */ if (LT_) goto L_005fbd0f;
  /* 005fbd09 mov dword ptr [esi + 4], ebp */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebp); }
  /* 005fbd0c mov dword ptr [esi + 8], ebp */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebp); }
L_005fbd0f:;
  /* 005fbd0f cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbd11 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fbd13 jne 0x5fbce2 */ if (!ZF_) goto L_005fbce2;
L_005fbd15:;
  /* 005fbd15 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005fbd17 and al, 0xfd */ { u32 a_ = (eax & 0xffu), b_ = 0xfdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fbd19 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
L_005fbd1b:;
  /* 005fbd1b mov eax, edi */ { eax = (u32)(edi); }
  /* 005fbd1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbd1e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbd1f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbd20 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbd21 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbd22:;
  /* 005fbd22 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005fbd24 and al, 0xfd */ { u32 a_ = (eax & 0xffu), b_ = 0xfdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fbd26 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 005fbd28 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbd29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbd2a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbd2b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fbd2d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbd2e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fbd30(CPU *c) {
  NATIVE_HOOK(0x5fbd30u) REGS; LOADALL;
L_005fbd30:;
  /* 005fbd30 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fbd31 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005fbd35 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbd36 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005fbd3a mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fbd3d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbd3e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbd40 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fbd43 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005fbd45 jl 0x5fbde4 */ if (LT_) goto L_005fbde4;
  /* 005fbd4b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbd4d jle 0x5fbd9b */ if ((ZF_|LT_)) goto L_005fbd9b;
  /* 005fbd4f mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005fbd53 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbd54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbd55 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbd56 lea ebp, [eax - 1] */ ebp = (u32)((u32)(eax + 0xffffffffu));
  /* 005fbd59 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fbd5eu; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fbd59u); RETCHK(0x5fbd5eu, 0x5fbd59u); LOADALL;
  /* 005fbd5e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbd61 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fbd63 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbd65 jle 0x5fbd79 */ if ((ZF_|LT_)) goto L_005fbd79;
L_005fbd67:;
  /* 005fbd67 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 005fbd6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbd6b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbd6c call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fbd71u; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fbd6cu); RETCHK(0x5fbd71u, 0x5fbd6cu); LOADALL;
  /* 005fbd71 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbd74 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fbd75 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fbd77 jne 0x5fbd67 */ if (!ZF_) goto L_005fbd67;
L_005fbd79:;
  /* 005fbd79 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fbd7c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fbd7d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbd7e call 0x5fb160 */ esp -= 4; M32(esp) = 0x5fbd83u; SAVEALL; F_005fb160(c); ABI_CHECK(0x5fb160u, 0x5fbd7eu); RETCHK(0x5fbd83u, 0x5fbd7eu); LOADALL;
  /* 005fbd83 mov ecx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005fbd86 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fbd89 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbd8c add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fbd8e mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005fbd92 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fbd94 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbd95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbd96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbd97 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fbd99 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbd9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbd9b:;
  /* 005fbd9b jne 0x5fbdbf */ if (!ZF_) goto L_005fbdbf;
  /* 005fbd9d mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fbda0 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fbda4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fbda5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbda6 call 0x5fb160 */ esp -= 4; M32(esp) = 0x5fbdabu; SAVEALL; F_005fb160(c); ABI_CHECK(0x5fb160u, 0x5fbda6u); RETCHK(0x5fbdabu, 0x5fbda6u); LOADALL;
  /* 005fbdab mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fbdae mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 005fbdb2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbdb5 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fbdb7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fbdb9 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fbdbb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbdbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbdbd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbdbe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbdbf:;
  /* 005fbdbf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbdc2 jne 0x5fbe3c */ if (!ZF_) goto L_005fbe3c;
  /* 005fbdc4 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fbdc7 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fbdcb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fbdcc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fbdcd call 0x5fb160 */ esp -= 4; M32(esp) = 0x5fbdd2u; SAVEALL; F_005fb160(c); ABI_CHECK(0x5fb160u, 0x5fbdcdu); RETCHK(0x5fbdd2u, 0x5fbdcdu); LOADALL;
  /* 005fbdd2 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 005fbdd6 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fbdd9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbddc mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fbdde mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fbde0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbde1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbde2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbde3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbde4:;
  /* 005fbde4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbde6 jle 0x5fbe21 */ if ((ZF_|LT_)) goto L_005fbe21;
  /* 005fbde8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbde9 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005fbded push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbdee lea edi, [eax - 1] */ edi = (u32)((u32)(eax + 0xffffffffu));
  /* 005fbdf1 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fbdf6u; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fbdf1u); RETCHK(0x5fbdf6u, 0x5fbdf1u); LOADALL;
  /* 005fbdf6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbdf9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbdfb jle 0x5fbe0d */ if ((ZF_|LT_)) goto L_005fbe0d;
L_005fbdfd:;
  /* 005fbdfd mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 005fbe00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbe01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbe02 call 0x5fcde0 */ esp -= 4; M32(esp) = 0x5fbe07u; SAVEALL; F_005fcde0(c); ABI_CHECK(0x5fcde0u, 0x5fbe02u); RETCHK(0x5fbe07u, 0x5fbe02u); LOADALL;
  /* 005fbe07 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbe0a dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fbe0b jne 0x5fbdfd */ if (!ZF_) goto L_005fbdfd;
L_005fbe0d:;
  /* 005fbe0d mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005fbe10 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fbe13 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005fbe17 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fbe19 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbe1a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fbe1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbe1d mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fbe1f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbe20 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbe21:;
  /* 005fbe21 jne 0x5fbe34 */ if (!ZF_) goto L_005fbe34;
  /* 005fbe23 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fbe26 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005fbe2a add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fbe2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbe2d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fbe2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbe30 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fbe32 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbe33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbe34:;
  /* 005fbe34 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbe37 jne 0x5fbe3c */ if (!ZF_) goto L_005fbe3c;
  /* 005fbe39 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
L_005fbe3c:;
  /* 005fbe3c mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005fbe40 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbe41 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fbe43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbe44 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fbe46 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbe47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fbe50(CPU *c) {
  NATIVE_HOOK(0x5fbe50u) REGS; LOADALL;
L_005fbe50:;
  /* 005fbe50 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fbe54 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fbe55 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005fbe59 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fbe5a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbe5b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbe5c mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fbe5f mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fbe62 lea edx, [eax + ecx] */ edx = (u32)((u32)(eax + ecx));
  /* 005fbe65 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbe67 jbe 0x5fbe70 */ if ((CF_|ZF_)) goto L_005fbe70;
L_005fbe69:;
  /* 005fbe69 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbe6a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbe6b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbe6c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fbe6e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbe6f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbe70:;
  /* 005fbe70 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005fbe72 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fbe74 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fbe77 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fbe79 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fbe7b mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fbe7f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbe81 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fbe85 jle 0x5fbf0d */ if ((ZF_|LT_)) goto L_005fbf0d;
  /* 005fbe8b mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
L_005fbe8f:;
  /* 005fbe8f cmp dword ptr [edi], 0xc */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbe92 je 0x5fbee1 */ if (ZF_) goto L_005fbee1;
  /* 005fbe94 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005fbe96 mov edx, esi */ { edx = (u32)(esi); }
  /* 005fbe98 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005fbe9a mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 005fbe9c mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fbe9f mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005fbea2 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fbea5 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005fbea8 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fbeab mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005fbeae mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fbeb1 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fbeb2 mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005fbeb5 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fbeb8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbeba jge 0x5fbec8 */ if (!LT_) goto L_005fbec8;
  /* 005fbebc mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005fbec0 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fbec3 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fbec6 jmp 0x5fbf01 */ goto L_005fbf01;
L_005fbec8:;
  /* 005fbec8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbec9 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fbecd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbece call 0x5fb160 */ esp -= 4; M32(esp) = 0x5fbed3u; SAVEALL; F_005fb160(c); ABI_CHECK(0x5fb160u, 0x5fbeceu); RETCHK(0x5fbed3u, 0x5fbeceu); LOADALL;
  /* 005fbed3 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fbed6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbed9 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fbedc add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fbedf jmp 0x5fbf01 */ goto L_005fbf01;
L_005fbee1:;
  /* 005fbee1 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fbee5 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fbee9 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 005fbeed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fbeee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbeef push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbef0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fbef1 call 0x5fbd30 */ esp -= 4; M32(esp) = 0x5fbef6u; SAVEALL; F_005fbd30(c); ABI_CHECK(0x5fbd30u, 0x5fbef1u); RETCHK(0x5fbef6u, 0x5fbef1u); LOADALL;
  /* 005fbef6 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbef9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbefb je 0x5fbe69 */ if (ZF_) goto L_005fbe69;
L_005fbf01:;
  /* 005fbf01 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fbf05 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fbf08 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fbf09 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbf0b jl 0x5fbe8f */ if (LT_) goto L_005fbe8f;
L_005fbf0d:;
  /* 005fbf0d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbf0e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbf0f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fbf11 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fbf12 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbf13 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fbf20(CPU *c) {
  NATIVE_HOOK(0x5fbf20u) REGS; LOADALL;
L_005fbf20:;
  /* 005fbf20 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fbf25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbf26 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fbf2b push 0x9c0134 */ { u32 v_ = 0x9c0134u; esp -= 4; M32(esp) = v_; }
  /* 005fbf30 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fbf36u; SAVEALL; call_ind(c, t_); RETCHK(0x5fbf36u, 0x5fbf30u); LOADALL; }
  /* 005fbf36 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fbf38 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbf3b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbf3d jne 0x5fbf50 */ if (!ZF_) goto L_005fbf50;
L_005fbf3f:;
  /* 005fbf3f mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fbf43 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fbf45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbf46 mov dword ptr [ecx + 0x20], eax */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(eax); }
  /* 005fbf49 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fbf4b sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fbf4d and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fbf4f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fbf50:;
  /* 005fbf50 mov ecx, dword ptr [0x67f93c] */ { const u32 m_ = (u32)(0x67f93cu); ecx = (u32)(M32(m_)); }
  /* 005fbf56 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005fbf5c shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fbf5f push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fbf64 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fbf65 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fbf6bu; SAVEALL; call_ind(c, t_); RETCHK(0x5fbf6bu, 0x5fbf65u); LOADALL; }
  /* 005fbf6b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fbf6e mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fbf70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fbf72 je 0x5fbf3f */ if (ZF_) goto L_005fbf3f;
  /* 005fbf74 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fbf78 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005fbf7f mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005fbf86 mov eax, dword ptr [0x67f93c] */ { const u32 m_ = (u32)(0x67f93cu); eax = (u32)(M32(m_)); }
  /* 005fbf8b mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005fbf8e mov eax, esi */ { eax = (u32)(esi); }
  /* 005fbf90 mov dword ptr [ecx + 0x20], eax */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(eax); }
  /* 005fbf93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbf94 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fbf96 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fbf98 and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fbf9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fbfa0(CPU *c) {
  NATIVE_HOOK(0x5fbfa0u) REGS; LOADALL;
L_005fbfa0:;
  /* 005fbfa0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fbfa1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbfa2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fbfa3 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005fbfa7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005fbfa9 mov esi, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); esi = (u32)(M32(m_)); }
  /* 005fbfac cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbfae je 0x5fbfe0 */ if (ZF_) goto L_005fbfe0;
  /* 005fbfb0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fbfb2 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 005fbfb5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fbfb7 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005fbfba je 0x5fbfcb */ if (ZF_) goto L_005fbfcb;
  /* 005fbfbc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fbfbd mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fbfc2 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fbfc8u; SAVEALL; call_ind(c, t_); RETCHK(0x5fbfc8u, 0x5fbfc2u); LOADALL; }
  /* 005fbfc8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fbfcb:;
  /* 005fbfcb mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005fbfd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fbfd2 push 0x9c0134 */ { u32 v_ = 0x9c0134u; esp -= 4; M32(esp) = v_; }
  /* 005fbfd7 call dword ptr [ecx + 0x11c] */ { const u32 m_ = (u32)(ecx + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fbfddu; SAVEALL; call_ind(c, t_); RETCHK(0x5fbfddu, 0x5fbfd7u); LOADALL; }
  /* 005fbfdd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fbfe0:;
  /* 005fbfe0 mov dword ptr [edi + 0x20], ebx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 005fbfe3 mov eax, edi */ { eax = (u32)(edi); }
  /* 005fbfe5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fbfe6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fbfe7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fbfe8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fbff0(CPU *c) {
  NATIVE_HOOK(0x5fbff0u) REGS; LOADALL;
L_005fbff0:;
  /* 005fbff0 mov eax, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); eax = (u32)(M32(m_)); }
  /* 005fbff5 mov ecx, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); ecx = (u32)(M32(m_)); }
  /* 005fbffb push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc000 push 0x9c0080 */ { u32 v_ = 0x9c0080u; esp -= 4; M32(esp) = v_; }
  /* 005fc005 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc006 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc008 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc009 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 005fc00b call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc010u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc00bu); RETCHK(0x5fc010u, 0x5fc00bu); LOADALL;
  /* 005fc010 mov edx, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); edx = (u32)(M32(m_)); }
  /* 005fc016 mov eax, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); eax = (u32)(M32(m_)); }
  /* 005fc01b push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc020 push 0x9c00a4 */ { u32 v_ = 0x9c00a4u; esp -= 4; M32(esp) = v_; }
  /* 005fc025 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc026 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc028 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc029 push 0x90 */ { u32 v_ = 0x90u; esp -= 4; M32(esp) = v_; }
  /* 005fc02e call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc033u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc02eu); RETCHK(0x5fc033u, 0x5fc02eu); LOADALL;
  /* 005fc033 mov ecx, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); ecx = (u32)(M32(m_)); }
  /* 005fc039 mov edx, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); edx = (u32)(M32(m_)); }
  /* 005fc03f push 0x401b1 */ { u32 v_ = 0x401b1u; esp -= 4; M32(esp) = v_; }
  /* 005fc044 push 0x9c00c8 */ { u32 v_ = 0x9c00c8u; esp -= 4; M32(esp) = v_; }
  /* 005fc049 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc04a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc04c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc04d push 0x158 */ { u32 v_ = 0x158u; esp -= 4; M32(esp) = v_; }
  /* 005fc052 call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc057u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc052u); RETCHK(0x5fc057u, 0x5fc052u); LOADALL;
  /* 005fc057 mov eax, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); eax = (u32)(M32(m_)); }
  /* 005fc05c mov ecx, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); ecx = (u32)(M32(m_)); }
  /* 005fc062 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc065 push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc06a push 0x9c00ec */ { u32 v_ = 0x9c00ecu; esp -= 4; M32(esp) = v_; }
  /* 005fc06f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc070 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc072 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc073 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fc075 call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc07au; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc075u); RETCHK(0x5fc07au, 0x5fc075u); LOADALL;
  /* 005fc07a mov edx, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); edx = (u32)(M32(m_)); }
  /* 005fc080 mov eax, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); eax = (u32)(M32(m_)); }
  /* 005fc085 push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc08a push 0x9c0110 */ { u32 v_ = 0x9c0110u; esp -= 4; M32(esp) = v_; }
  /* 005fc08f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc090 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc092 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc093 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fc095 call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc09au; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc095u); RETCHK(0x5fc09au, 0x5fc095u); LOADALL;
  /* 005fc09a mov ecx, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); ecx = (u32)(M32(m_)); }
  /* 005fc0a0 mov edx, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); edx = (u32)(M32(m_)); }
  /* 005fc0a6 push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc0ab push 0x9c0134 */ { u32 v_ = 0x9c0134u; esp -= 4; M32(esp) = v_; }
  /* 005fc0b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc0b1 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc0b3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc0b4 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fc0b6 call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc0bbu; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc0b6u); RETCHK(0x5fc0bbu, 0x5fc0b6u); LOADALL;
  /* 005fc0bb mov eax, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); eax = (u32)(M32(m_)); }
  /* 005fc0c0 mov ecx, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); ecx = (u32)(M32(m_)); }
  /* 005fc0c6 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc0c9 push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc0ce push 0x9c0158 */ { u32 v_ = 0x9c0158u; esp -= 4; M32(esp) = v_; }
  /* 005fc0d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc0d4 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc0d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc0d7 push 0x9c */ { u32 v_ = 0x9cu; esp -= 4; M32(esp) = v_; }
  /* 005fc0dc call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc0e1u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc0dcu); RETCHK(0x5fc0e1u, 0x5fc0dcu); LOADALL;
  /* 005fc0e1 mov edx, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); edx = (u32)(M32(m_)); }
  /* 005fc0e7 mov eax, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); eax = (u32)(M32(m_)); }
  /* 005fc0ec push 0x401b0 */ { u32 v_ = 0x401b0u; esp -= 4; M32(esp) = v_; }
  /* 005fc0f1 push 0x9c017c */ { u32 v_ = 0x9c017cu; esp -= 4; M32(esp) = v_; }
  /* 005fc0f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc0f7 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc0f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc0fa push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005fc0fc call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc101u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc0fcu); RETCHK(0x5fc101u, 0x5fc0fcu); LOADALL;
  /* 005fc101 mov ecx, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); ecx = (u32)(M32(m_)); }
  /* 005fc107 mov edx, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); edx = (u32)(M32(m_)); }
  /* 005fc10d push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc112 push 0x9c01a0 */ { u32 v_ = 0x9c01a0u; esp -= 4; M32(esp) = v_; }
  /* 005fc117 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc118 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc11a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc11b push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fc11d call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc122u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc11du); RETCHK(0x5fc122u, 0x5fc11du); LOADALL;
  /* 005fc122 mov eax, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); eax = (u32)(M32(m_)); }
  /* 005fc127 mov ecx, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); ecx = (u32)(M32(m_)); }
  /* 005fc12d add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc130 push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc135 push 0x9c01c4 */ { u32 v_ = 0x9c01c4u; esp -= 4; M32(esp) = v_; }
  /* 005fc13a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc13b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc13d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc13e push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005fc140 call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc145u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc140u); RETCHK(0x5fc145u, 0x5fc140u); LOADALL;
  /* 005fc145 mov edx, dword ptr [0x67f944] */ { const u32 m_ = (u32)(0x67f944u); edx = (u32)(M32(m_)); }
  /* 005fc14b mov eax, dword ptr [0x67f940] */ { const u32 m_ = (u32)(0x67f940u); eax = (u32)(M32(m_)); }
  /* 005fc150 push 0x401a9 */ { u32 v_ = 0x401a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc155 push 0x9c01e8 */ { u32 v_ = 0x9c01e8u; esp -= 4; M32(esp) = v_; }
  /* 005fc15a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc15b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc15d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc15e push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fc160 call 0x5bded0 */ esp -= 4; M32(esp) = 0x5fc165u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x5fc160u); RETCHK(0x5fc165u, 0x5fc160u); LOADALL;
  /* 005fc165 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc168 mov dword ptr [0x694578], 1 */ { const u32 m_ = (u32)(0x694578u); M32(m_) = (u32)(0x1u); }
  /* 005fc172 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc180(CPU *c) {
  NATIVE_HOOK(0x5fc180u) REGS; LOADALL;
L_005fc180:;
  /* 005fc180 push 0x9c0080 */ { u32 v_ = 0x9c0080u; esp -= 4; M32(esp) = v_; }
  /* 005fc185 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc18au; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc185u); RETCHK(0x5fc18au, 0x5fc185u); LOADALL;
  /* 005fc18a push 0x9c00a4 */ { u32 v_ = 0x9c00a4u; esp -= 4; M32(esp) = v_; }
  /* 005fc18f call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc194u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc18fu); RETCHK(0x5fc194u, 0x5fc18fu); LOADALL;
  /* 005fc194 push 0x9c00c8 */ { u32 v_ = 0x9c00c8u; esp -= 4; M32(esp) = v_; }
  /* 005fc199 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc19eu; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc199u); RETCHK(0x5fc19eu, 0x5fc199u); LOADALL;
  /* 005fc19e push 0x9c00ec */ { u32 v_ = 0x9c00ecu; esp -= 4; M32(esp) = v_; }
  /* 005fc1a3 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc1a8u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc1a3u); RETCHK(0x5fc1a8u, 0x5fc1a3u); LOADALL;
  /* 005fc1a8 push 0x9c0110 */ { u32 v_ = 0x9c0110u; esp -= 4; M32(esp) = v_; }
  /* 005fc1ad call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc1b2u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc1adu); RETCHK(0x5fc1b2u, 0x5fc1adu); LOADALL;
  /* 005fc1b2 push 0x9c0134 */ { u32 v_ = 0x9c0134u; esp -= 4; M32(esp) = v_; }
  /* 005fc1b7 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc1bcu; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc1b7u); RETCHK(0x5fc1bcu, 0x5fc1b7u); LOADALL;
  /* 005fc1bc push 0x9c0158 */ { u32 v_ = 0x9c0158u; esp -= 4; M32(esp) = v_; }
  /* 005fc1c1 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc1c6u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc1c1u); RETCHK(0x5fc1c6u, 0x5fc1c1u); LOADALL;
  /* 005fc1c6 push 0x9c017c */ { u32 v_ = 0x9c017cu; esp -= 4; M32(esp) = v_; }
  /* 005fc1cb call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc1d0u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc1cbu); RETCHK(0x5fc1d0u, 0x5fc1cbu); LOADALL;
  /* 005fc1d0 push 0x9c01a0 */ { u32 v_ = 0x9c01a0u; esp -= 4; M32(esp) = v_; }
  /* 005fc1d5 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc1dau; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc1d5u); RETCHK(0x5fc1dau, 0x5fc1d5u); LOADALL;
  /* 005fc1da push 0x9c01c4 */ { u32 v_ = 0x9c01c4u; esp -= 4; M32(esp) = v_; }
  /* 005fc1df call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc1e4u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc1dfu); RETCHK(0x5fc1e4u, 0x5fc1dfu); LOADALL;
  /* 005fc1e4 push 0x9c01e8 */ { u32 v_ = 0x9c01e8u; esp -= 4; M32(esp) = v_; }
  /* 005fc1e9 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5fc1eeu; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5fc1e9u); RETCHK(0x5fc1eeu, 0x5fc1e9u); LOADALL;
  /* 005fc1ee add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc1f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc200(CPU *c) {
  NATIVE_HOOK(0x5fc200u) REGS; LOADALL;
L_005fc200:;
  /* 005fc200 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc201 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc202 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 005fc206 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc207 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc208 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005fc20d mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005fc210 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc211 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fc216u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fc211u); RETCHK(0x5fc216u, 0x5fc211u); LOADALL;
  /* 005fc216 mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 005fc219 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fc21b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc21c call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fc221u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fc21cu); RETCHK(0x5fc221u, 0x5fc21cu); LOADALL;
  /* 005fc221 lea ebx, [esi + eax*8] */ ebx = (u32)((u32)(esi + eax * 8u));
  /* 005fc224 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc227 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc229 je 0x5fc24f */ if (ZF_) goto L_005fc24f;
L_005fc22b:;
  /* 005fc22b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fc22e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc22f call 0x5fdc20 */ esp -= 4; M32(esp) = 0x5fc234u; SAVEALL; F_005fdc20(c); ABI_CHECK(0x5fdc20u, 0x5fc22fu); RETCHK(0x5fc234u, 0x5fc22fu); LOADALL;
  /* 005fc234 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc237 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc239 je 0x5fc246 */ if (ZF_) goto L_005fc246;
  /* 005fc23b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc23d je 0x5fc246 */ if (ZF_) goto L_005fc246;
  /* 005fc23f mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005fc244 jmp 0x5fc248 */ goto L_005fc248;
L_005fc246:;
  /* 005fc246 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_005fc248:;
  /* 005fc248 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fc24b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc24d jne 0x5fc22b */ if (!ZF_) goto L_005fc22b;
L_005fc24f:;
  /* 005fc24f mov edx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (u32)(M32(m_)); }
  /* 005fc252 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc253 call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fc258u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fc253u); RETCHK(0x5fc258u, 0x5fc253u); LOADALL;
  /* 005fc258 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc25b mov dword ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(0x0u); }
  /* 005fc262 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005fc264 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc265 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc266 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fc267 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fc268 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc270(CPU *c) {
  NATIVE_HOOK(0x5fc270u) REGS; LOADALL;
L_005fc270:;
  /* 005fc270 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc271 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc272 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc273 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 005fc277 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc278 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc279 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 005fc27d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc27f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005fc281 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc282 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc283 mov dword ptr [esp + 0x1c], ebx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 005fc287 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fc28cu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fc287u); RETCHK(0x5fc28cu, 0x5fc287u); LOADALL;
  /* 005fc28c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc28f cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc292 je 0x5fc29c */ if (ZF_) goto L_005fc29c;
L_005fc294:;
  /* 005fc294 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc295 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc296 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fc297 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc299 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fc29a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fc29b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fc29c:;
  /* 005fc29c mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005fc2a0 push 0x301b0 */ { u32 v_ = 0x301b0u; esp -= 4; M32(esp) = v_; }
  /* 005fc2a5 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005fc2a7 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fc2acu; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fc2a7u); RETCHK(0x5fc2acu, 0x5fc2a7u); LOADALL;
  /* 005fc2ac mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 005fc2b0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc2b3 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc2b5 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fc2b7 je 0x5fc2c8 */ if (ZF_) goto L_005fc2c8;
  /* 005fc2b9 push 0x301b0 */ { u32 v_ = 0x301b0u; esp -= 4; M32(esp) = v_; }
  /* 005fc2be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc2bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc2c0 call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fc2c5u; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fc2c0u); RETCHK(0x5fc2c5u, 0x5fc2c0u); LOADALL;
  /* 005fc2c5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc2c8:;
  /* 005fc2c8 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005fc2ca mov dword ptr [esi + 4], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x3f800000u); }
  /* 005fc2d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc2d2 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005fc2d5 mov dword ptr [esi + 0xc], 1 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x1u); }
  /* 005fc2dc mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 005fc2df mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005fc2e2 mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 005fc2e5 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fc2eau; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fc2e5u); RETCHK(0x5fc2eau, 0x5fc2e5u); LOADALL;
  /* 005fc2ea mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005fc2ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc2f1 mov edi, eax */ { edi = (u32)(eax); }
  /* 005fc2f3 lea ecx, [eax + edx*8] */ ecx = (u32)((u32)(eax + edx * 8u));
  /* 005fc2f6 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc2f8 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005fc2fc je 0x5fc377 */ if (ZF_) goto L_005fc377;
L_005fc2fe:;
  /* 005fc2fe lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 005fc302 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fc304 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc305 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc306 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fc30bu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fc306u); RETCHK(0x5fc30bu, 0x5fc306u); LOADALL;
  /* 005fc30b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc30e cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc311 jne 0x5fc294 */ if (!ZF_) goto L_005fc294;
  /* 005fc313 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fc317 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc318 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc319 push 0x1b0 */ { u32 v_ = 0x1b0u; esp -= 4; M32(esp) = v_; }
  /* 005fc31e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc31f mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 005fc321 call 0x5b3890 */ esp -= 4; M32(esp) = 0x5fc326u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5fc321u); RETCHK(0x5fc326u, 0x5fc321u); LOADALL;
  /* 005fc326 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc329 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc32b je 0x5fc294 */ if (ZF_) goto L_005fc294;
  /* 005fc331 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc332 call 0x5fe080 */ esp -= 4; M32(esp) = 0x5fc337u; SAVEALL; F_005fe080(c); ABI_CHECK(0x5fe080u, 0x5fc332u); RETCHK(0x5fc337u, 0x5fc332u); LOADALL;
  /* 005fc337 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc33a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc33c je 0x5fc294 */ if (ZF_) goto L_005fc294;
  /* 005fc342 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005fc345 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005fc347 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc348 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fc34du; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fc348u); RETCHK(0x5fc34du, 0x5fc348u); LOADALL;
  /* 005fc34d mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fc350 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fc353 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc356 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc358 je 0x5fc369 */ if (ZF_) goto L_005fc369;
  /* 005fc35a fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005fc35e fcomp dword ptr [eax] */ { const u32 m_ = (u32)(eax); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fc360 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fc362 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc367 jne 0x5fc36c */ if (!ZF_) goto L_005fc36c;
L_005fc369:;
  /* 005fc369 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
L_005fc36c:;
  /* 005fc36c mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fc370 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fc373 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc375 jne 0x5fc2fe */ if (!ZF_) goto L_005fc2fe;
L_005fc377:;
  /* 005fc377 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc379 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc37a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc37b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fc37c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fc37d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fc37e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc380(CPU *c) {
  NATIVE_HOOK(0x5fc380u) REGS; LOADALL;
L_005fc380:;
  /* 005fc380 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc381 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fc385 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc386 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fc388 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc389 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fc38eu; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fc389u); RETCHK(0x5fc38eu, 0x5fc389u); LOADALL;
  /* 005fc38e mov edi, eax */ { edi = (u32)(eax); }
  /* 005fc390 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc393 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc395 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc398 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005fc39b mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005fc39e jl 0x5fc3d2 */ if (LT_) goto L_005fc3d2;
  /* 005fc3a0 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005fc3a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc3a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc3a4 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fc3a9u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fc3a4u); RETCHK(0x5fc3a9u, 0x5fc3a4u); LOADALL;
  /* 005fc3a9 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005fc3ab dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fc3ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc3ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc3ae mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fc3b1 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fc3b6u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fc3b1u); RETCHK(0x5fc3b6u, 0x5fc3b1u); LOADALL;
  /* 005fc3b6 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fc3b9 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fc3bc mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fc3c0 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fc3c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc3c4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc3c5 call 0x5fe0b0 */ esp -= 4; M32(esp) = 0x5fc3cau; SAVEALL; F_005fe0b0(c); ABI_CHECK(0x5fe0b0u, 0x5fc3c5u); RETCHK(0x5fc3cau, 0x5fc3c5u); LOADALL;
  /* 005fc3ca add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc3cd mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc3cf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc3d0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc3d1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fc3d2:;
  /* 005fc3d2 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fc3d5 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fc3d8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc3da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc3db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc3dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc3e0(CPU *c) {
  NATIVE_HOOK(0x5fc3e0u) REGS; LOADALL;
L_005fc3e0:;
  /* 005fc3e0 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005fc3e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc3e5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fc3e9 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fc3ed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc3ee fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fc3f1 fadd dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fc3f4 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fc3f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc3f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc3f9 call 0x5fc520 */ esp -= 4; M32(esp) = 0x5fc3feu; SAVEALL; F_005fc520(c); ABI_CHECK(0x5fc520u, 0x5fc3f9u); RETCHK(0x5fc3feu, 0x5fc3f9u); LOADALL;
  /* 005fc3fe add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc401 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc403 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc404 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc410(CPU *c) {
  NATIVE_HOOK(0x5fc410u) REGS; LOADALL;
L_005fc410:;
  /* 005fc410 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc411 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc412 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc413 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005fc417 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc418 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fc41a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc41b call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fc420u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fc41bu); RETCHK(0x5fc420u, 0x5fc41bu); LOADALL;
  /* 005fc420 mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 005fc424 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005fc428 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc42b mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fc42d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc42f jle 0x5fc46d */ if ((ZF_|LT_)) goto L_005fc46d;
L_005fc431:;
  /* 005fc431 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc434 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc436 je 0x5fc46b */ if (ZF_) goto L_005fc46b;
  /* 005fc438 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fc43a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc43b mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fc43e mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fc441 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc442 call 0x5fe0b0 */ esp -= 4; M32(esp) = 0x5fc447u; SAVEALL; F_005fe0b0(c); ABI_CHECK(0x5fe0b0u, 0x5fc442u); RETCHK(0x5fc447u, 0x5fc442u); LOADALL;
  /* 005fc447 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc44a mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005fc44d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc450 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc452 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005fc455 jae 0x5fc45f */ if (!CF_) goto L_005fc45f;
  /* 005fc457 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fc45a mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fc45d jmp 0x5fc466 */ goto L_005fc466;
L_005fc45f:;
  /* 005fc45f mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
L_005fc466:;
  /* 005fc466 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fc467 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc469 jg 0x5fc431 */ if (!(ZF_|LT_)) goto L_005fc431;
L_005fc46b:;
  /* 005fc46b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_005fc46d:;
  /* 005fc46d jge 0x5fc4a4 */ if (!LT_) goto L_005fc4a4;
L_005fc46f:;
  /* 005fc46f mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc472 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc474 je 0x5fc4a4 */ if (ZF_) goto L_005fc4a4;
  /* 005fc476 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fc478 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc479 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fc47c mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fc47f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc480 call 0x5fe0b0 */ esp -= 4; M32(esp) = 0x5fc485u; SAVEALL; F_005fe0b0(c); ABI_CHECK(0x5fe0b0u, 0x5fc480u); RETCHK(0x5fc485u, 0x5fc480u); LOADALL;
  /* 005fc485 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc488 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc48b cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc48d mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fc490 jbe 0x5fc49a */ if ((CF_|ZF_)) goto L_005fc49a;
  /* 005fc492 add eax, -8 */ { u32 a_ = eax, b_ = 0xfffffff8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fc495 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005fc498 jmp 0x5fc4a1 */ goto L_005fc4a1;
L_005fc49a:;
  /* 005fc49a mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
L_005fc4a1:;
  /* 005fc4a1 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fc4a2 js 0x5fc46f */ if (SF_) goto L_005fc46f;
L_005fc4a4:;
  /* 005fc4a4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc4a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc4a7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc4a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fc4a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fc4aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc4b0(CPU *c) {
  NATIVE_HOOK(0x5fc4b0u) REGS; LOADALL;
L_005fc4b0:;
  /* 005fc4b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc4b1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fc4b5 test byte ptr [esi + 0xc], 2 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fc4b9 je 0x5fc4da */ if (ZF_) goto L_005fc4da;
  /* 005fc4bb mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc4be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc4c0 je 0x5fc4da */ if (ZF_) goto L_005fc4da;
  /* 005fc4c2 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fc4c5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc4c7 je 0x5fc4da */ if (ZF_) goto L_005fc4da;
  /* 005fc4c9 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005fc4cc fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fc4ce fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fc4d0 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fc4d2 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 005fc4d4 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fc4d8 jmp 0x5fc4e2 */ goto L_005fc4e2;
L_005fc4da:;
  /* 005fc4da mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
L_005fc4e2:;
  /* 005fc4e2 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc4e5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc4e7 jne 0x5fc4f0 */ if (!ZF_) goto L_005fc4f0;
  /* 005fc4e9 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fc4ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc4ee je 0x5fc50e */ if (ZF_) goto L_005fc50e;
L_005fc4f0:;
  /* 005fc4f0 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fc4f4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fc4f8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fc4fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc4fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc4fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc4fe call 0x5fe200 */ esp -= 4; M32(esp) = 0x5fc503u; SAVEALL; F_005fe200(c); ABI_CHECK(0x5fe200u, 0x5fc4feu); RETCHK(0x5fc503u, 0x5fc4feu); LOADALL;
  /* 005fc503 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc506 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc508 je 0x5fc50e */ if (ZF_) goto L_005fc50e;
  /* 005fc50a mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc50c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc50d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fc50e:;
  /* 005fc50e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc510 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc511 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc520(CPU *c) {
  NATIVE_HOOK(0x5fc520u) REGS; LOADALL;
L_005fc520:;
  /* 005fc520 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc521 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005fc525 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc526 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc527 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005fc52b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc52c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005fc52e fcomp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fc531 mov dword ptr [esp + 0xc], edi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edi); }
  /* 005fc535 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fc537 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc53c jne 0x5fc545 */ if (!ZF_) goto L_005fc545;
  /* 005fc53e mov ebp, 1 */ { ebp = (u32)(0x1u); }
  /* 005fc543 jmp 0x5fc55a */ goto L_005fc55a;
L_005fc545:;
  /* 005fc545 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005fc549 fcomp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fc54c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fc54e test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fc551 jp 0x5fc5fd */ if (PF_) goto L_005fc5fd;
  /* 005fc557 or ebp, 0xffffffff */ { u32 a_ = ebp, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
L_005fc55a:;
  /* 005fc55a fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005fc55e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fc564 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005fc568 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fc56a test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fc56d jp 0x5fc579 */ if (PF_) goto L_005fc579;
  /* 005fc56f mov dword ptr [esp + 0x1c], 0 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 005fc577 jmp 0x5fc593 */ goto L_005fc593;
L_005fc579:;
  /* 005fc579 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005fc57c fcomp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fc57e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fc580 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc585 jne 0x5fc59f */ if (!ZF_) goto L_005fc59f;
  /* 005fc587 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 005fc58b fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fc58d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005fc58f mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
L_005fc593:;
  /* 005fc593 fdiv dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005fc596 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005fc59b fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
L_005fc59f:;
  /* 005fc59f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc5a0 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
L_005fc5a4:;
  /* 005fc5a4 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc5a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc5a9 je 0x5fc5b8 */ if (ZF_) goto L_005fc5b8;
  /* 005fc5ab fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 005fc5ad fcomp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fc5b1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fc5b3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fc5b6 jnp 0x5fc5ce */ if (!PF_) goto L_005fc5ce;
L_005fc5b8:;
  /* 005fc5b8 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc5bb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc5bd je 0x5fc5db */ if (ZF_) goto L_005fc5db;
  /* 005fc5bf fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 005fc5c1 fcomp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fc5c5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fc5c7 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc5cc jne 0x5fc5db */ if (!ZF_) goto L_005fc5db;
L_005fc5ce:;
  /* 005fc5ce push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc5cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc5d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc5d1 call 0x5fc410 */ esp -= 4; M32(esp) = 0x5fc5d6u; SAVEALL; F_005fc410(c); ABI_CHECK(0x5fc410u, 0x5fc5d1u); RETCHK(0x5fc5d6u, 0x5fc5d1u); LOADALL;
  /* 005fc5d6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc5d9 jmp 0x5fc5a4 */ goto L_005fc5a4;
L_005fc5db:;
  /* 005fc5db mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005fc5df cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc5e2 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fc5e5 jne 0x5fc5fc */ if (!ZF_) goto L_005fc5fc;
  /* 005fc5e7 mov eax, dword ptr [0x69457c] */ { const u32 m_ = (u32)(0x69457cu); eax = (u32)(M32(m_)); }
  /* 005fc5ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc5ee je 0x5fc5fc */ if (ZF_) goto L_005fc5fc;
  /* 005fc5f0 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fc5f4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc5f5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc5f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc5f7 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5fc5f9u; SAVEALL; call_ind(c, t_); RETCHK(0x5fc5f9u, 0x5fc5f7u); LOADALL; }
  /* 005fc5f9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc5fc:;
  /* 005fc5fc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005fc5fd:;
  /* 005fc5fd mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc5ff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc600 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc601 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fc602 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fc603 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc610(CPU *c) {
  NATIVE_HOOK(0x5fc610u) REGS; LOADALL;
L_005fc610:;
  /* 005fc610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc611 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc612 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fc616 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc617 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fc619 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc61a call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fc61fu; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fc61au); RETCHK(0x5fc61fu, 0x5fc61au); LOADALL;
  /* 005fc61f mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fc623 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc626 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fc628 lea edi, [eax + ecx*8] */ edi = (u32)((u32)(eax + ecx * 8u));
  /* 005fc62b mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc62e cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc630 jae 0x5fc691 */ if (!CF_) goto L_005fc691;
  /* 005fc632 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005fc634 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc635 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc636 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fc63bu; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fc636u); RETCHK(0x5fc63bu, 0x5fc636u); LOADALL;
  /* 005fc63b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fc63d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc640 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc643 mov dword ptr [esi + 8], ebp */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebp); }
  /* 005fc646 mov dword ptr [esi + 0x10], ebp */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebp); }
  /* 005fc649 jl 0x5fc67a */ if (LT_) goto L_005fc67a;
  /* 005fc64b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fc64d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc64e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc64f call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fc654u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fc64fu); RETCHK(0x5fc654u, 0x5fc64fu); LOADALL;
  /* 005fc654 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005fc656 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fc657 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc658 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc659 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fc65c call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fc661u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fc65cu); RETCHK(0x5fc661u, 0x5fc65cu); LOADALL;
  /* 005fc661 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 005fc665 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fc668 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc66b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc66c mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fc66f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc670 call 0x5fe0b0 */ esp -= 4; M32(esp) = 0x5fc675u; SAVEALL; F_005fe0b0(c); ABI_CHECK(0x5fe0b0u, 0x5fc670u); RETCHK(0x5fc675u, 0x5fc670u); LOADALL;
  /* 005fc675 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc678 jmp 0x5fc680 */ goto L_005fc680;
L_005fc67a:;
  /* 005fc67a mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 005fc67d mov dword ptr [esi + 0x18], ebp */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebp); }
L_005fc680:;
  /* 005fc680 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005fc684 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005fc686 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc687 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc688 call 0x5fc410 */ esp -= 4; M32(esp) = 0x5fc68du; SAVEALL; F_005fc410(c); ABI_CHECK(0x5fc410u, 0x5fc688u); RETCHK(0x5fc68du, 0x5fc688u); LOADALL;
  /* 005fc68d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc690 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005fc691:;
  /* 005fc691 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc694 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc696 je 0x5fc6b0 */ if (ZF_) goto L_005fc6b0;
  /* 005fc698 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fc69a mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc69e sar edi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005fc6a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc6a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc6a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc6a4 call 0x5fc410 */ esp -= 4; M32(esp) = 0x5fc6a9u; SAVEALL; F_005fc410(c); ABI_CHECK(0x5fc410u, 0x5fc6a4u); RETCHK(0x5fc6a9u, 0x5fc6a4u); LOADALL;
  /* 005fc6a9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc6ac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc6ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc6ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fc6af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fc6b0:;
  /* 005fc6b0 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005fc6b4 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc6b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc6b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc6ba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc6bb call 0x5fc410 */ esp -= 4; M32(esp) = 0x5fc6c0u; SAVEALL; F_005fc410(c); ABI_CHECK(0x5fc410u, 0x5fc6bbu); RETCHK(0x5fc6c0u, 0x5fc6bbu); LOADALL;
  /* 005fc6c0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc6c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc6c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc6c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fc6c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc6d0(CPU *c) {
  NATIVE_HOOK(0x5fc6d0u) REGS; LOADALL;
L_005fc6d0:;
  /* 005fc6d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fc6d4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fc6d6 mov dword ptr [esp + 4], ecx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fc6da jmp 0x5bdc40 */ SAVEALL; F_005bdc40(c); return;
}

void F_005fc6e0(CPU *c) {
  NATIVE_HOOK(0x5fc6e0u) REGS; LOADALL;
L_005fc6e0:;
  /* 005fc6e0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fc6e4 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fc6e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc6e9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005fc6eb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc6ec call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fc6f1u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fc6ecu); RETCHK(0x5fc6f1u, 0x5fc6ecu); LOADALL;
  /* 005fc6f1 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fc6f4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc6f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc700(CPU *c) {
  NATIVE_HOOK(0x5fc700u) REGS; LOADALL;
L_005fc700:;
  /* 005fc700 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fc704 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005fc707 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc710(CPU *c) {
  NATIVE_HOOK(0x5fc710u) REGS; LOADALL;
L_005fc710:;
  /* 005fc710 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fc714 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005fc717 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fc719 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc720(CPU *c) {
  NATIVE_HOOK(0x5fc720u) REGS; LOADALL;
L_005fc720:;
  /* 005fc720 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc721 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fc725 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc728 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc72a je 0x5fc743 */ if (ZF_) goto L_005fc743;
  /* 005fc72c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fc72e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc72f call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fc734u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fc72fu); RETCHK(0x5fc734u, 0x5fc72fu); LOADALL;
  /* 005fc734 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005fc736 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc739 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc73c sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fc73e sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fc741 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fc743:;
  /* 005fc743 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc746 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc747 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc750(CPU *c) {
  NATIVE_HOOK(0x5fc750u) REGS; LOADALL;
L_005fc750:;
  /* 005fc750 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fc754 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fc757 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc759 je 0x5fc75e */ if (ZF_) goto L_005fc75e;
  /* 005fc75b fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 005fc75d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fc75e:;
  /* 005fc75e fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 005fc764 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc770(CPU *c) {
  NATIVE_HOOK(0x5fc770u) REGS; LOADALL;
L_005fc770:;
  /* 005fc770 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc771 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fc775 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc778 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc77a je 0x5fc793 */ if (ZF_) goto L_005fc793;
  /* 005fc77c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fc77e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc77f call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fc784u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fc77fu); RETCHK(0x5fc784u, 0x5fc77fu); LOADALL;
  /* 005fc784 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005fc786 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc789 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc78c sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fc78e sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fc791 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc792 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fc793:;
  /* 005fc793 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005fc795 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc796 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fc79a jmp 0x5bdc40 */ SAVEALL; F_005bdc40(c); return;
}

void F_005fc7a0(CPU *c) {
  NATIVE_HOOK(0x5fc7a0u) REGS; LOADALL;
L_005fc7a0:;
  /* 005fc7a0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fc7a4 mov eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fc7a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc7a9 jne 0x5fc7ae */ if (!ZF_) goto L_005fc7ae;
  /* 005fc7ab mov eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M32(m_)); }
L_005fc7ae:;
  /* 005fc7ae fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 005fc7b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc7c0(CPU *c) {
  NATIVE_HOOK(0x5fc7c0u) REGS; LOADALL;
L_005fc7c0:;
  /* 005fc7c0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fc7c4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc7c6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fc7ca mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fc7cd je 0x5fc7d6 */ if (ZF_) goto L_005fc7d6;
  /* 005fc7cf or ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fc7d2 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005fc7d5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fc7d6:;
  /* 005fc7d6 and ecx, 0xfffffffd */ { u32 a_ = ecx, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fc7d9 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005fc7dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc7e0(CPU *c) {
  NATIVE_HOOK(0x5fc7e0u) REGS; LOADALL;
L_005fc7e0:;
  /* 005fc7e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc7e1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fc7e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc7e6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005fc7e8 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fc7ed push 0x3c */ { u32 v_ = 0x3cu; esp -= 4; M32(esp) = v_; }
  /* 005fc7ef mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fc7f1 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fc7f4 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fc7f7 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 005fc7fa mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005fc7fd mov dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edi); }
  /* 005fc800 mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 005fc803 mov dword ptr [esi + 0x44], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(0xffffffffu); }
  /* 005fc80a call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fc80fu; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fc80au); RETCHK(0x5fc80fu, 0x5fc80au); LOADALL;
  /* 005fc80f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc810 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005fc813 call 0x5fb020 */ esp -= 4; M32(esp) = 0x5fc818u; SAVEALL; F_005fb020(c); ABI_CHECK(0x5fb020u, 0x5fc813u); RETCHK(0x5fc818u, 0x5fc813u); LOADALL;
  /* 005fc818 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc819 call 0x5fd5d0 */ esp -= 4; M32(esp) = 0x5fc81eu; SAVEALL; F_005fd5d0(c); ABI_CHECK(0x5fd5d0u, 0x5fc819u); RETCHK(0x5fc81eu, 0x5fc819u); LOADALL;
  /* 005fc81e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc81f call 0x5fb920 */ esp -= 4; M32(esp) = 0x5fc824u; SAVEALL; F_005fb920(c); ABI_CHECK(0x5fb920u, 0x5fc81fu); RETCHK(0x5fc824u, 0x5fc81fu); LOADALL;
  /* 005fc824 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc825 call 0x5fbf20 */ esp -= 4; M32(esp) = 0x5fc82au; SAVEALL; F_005fbf20(c); ABI_CHECK(0x5fbf20u, 0x5fc825u); RETCHK(0x5fc82au, 0x5fc825u); LOADALL;
  /* 005fc82a call 0x5fd3a0 */ esp -= 4; M32(esp) = 0x5fc82fu; SAVEALL; F_005fd3a0(c); ABI_CHECK(0x5fd3a0u, 0x5fc82au); RETCHK(0x5fc82fu, 0x5fc82au); LOADALL;
  /* 005fc82f mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005fc832 mov eax, 0x4f800000 */ { eax = (u32)(0x4f800000u); }
  /* 005fc837 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005fc83a mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 005fc83d lea eax, [esi + 0x58] */ eax = (u32)((u32)(esi + 0x58u));
  /* 005fc840 mov dword ptr [esi + 0x28], 0x5fb410 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x5fb410u); }
  /* 005fc847 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc848 mov dword ptr [esi + 0x34], edi */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edi); }
  /* 005fc84b mov dword ptr [esi + 0x48], edi */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(edi); }
  /* 005fc84e mov dword ptr [esi + 0x4c], edi */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(edi); }
  /* 005fc851 mov dword ptr [esi + 0x50], edi */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(edi); }
  /* 005fc854 mov dword ptr [esi + 0x54], edi */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(edi); }
  /* 005fc857 call 0x5fd620 */ esp -= 4; M32(esp) = 0x5fc85cu; SAVEALL; F_005fd620(c); ABI_CHECK(0x5fd620u, 0x5fc857u); RETCHK(0x5fc85cu, 0x5fc857u); LOADALL;
  /* 005fc85c add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc85f mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc861 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc862 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc863 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc870(CPU *c) {
  NATIVE_HOOK(0x5fc870u) REGS; LOADALL;
L_005fc870:;
  /* 005fc870 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fc875 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc876 push 0x301b1 */ { u32 v_ = 0x301b1u; esp -= 4; M32(esp) = v_; }
  /* 005fc87b push 0x9c00c8 */ { u32 v_ = 0x9c00c8u; esp -= 4; M32(esp) = v_; }
  /* 005fc880 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fc886u; SAVEALL; call_ind(c, t_); RETCHK(0x5fc886u, 0x5fc880u); LOADALL; }
  /* 005fc886 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fc888 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc88b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc88d je 0x5fc898 */ if (ZF_) goto L_005fc898;
  /* 005fc88f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc890 call 0x5fc7e0 */ esp -= 4; M32(esp) = 0x5fc895u; SAVEALL; F_005fc7e0(c); ABI_CHECK(0x5fc7e0u, 0x5fc890u); RETCHK(0x5fc895u, 0x5fc890u); LOADALL;
  /* 005fc895 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc898:;
  /* 005fc898 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fc89a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc89b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc8a0(CPU *c) {
  NATIVE_HOOK(0x5fc8a0u) REGS; LOADALL;
L_005fc8a0:;
  /* 005fc8a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fc8a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc8a2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005fc8a6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005fc8a8 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fc8ab cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc8ad je 0x5fc942 */ if (ZF_) goto L_005fc942;
  /* 005fc8b3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc8b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc8b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc8b6 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fc8bbu; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fc8b6u); RETCHK(0x5fc8bbu, 0x5fc8b6u); LOADALL;
  /* 005fc8bb mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fc8bd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc8c0 cmp ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc8c2 mov dword ptr [esp + 0x14], ebp */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebp); }
  /* 005fc8c6 jle 0x5fc928 */ if ((ZF_|LT_)) goto L_005fc928;
  /* 005fc8c8 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fc8cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc8cc call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fc8d1u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fc8ccu); RETCHK(0x5fc8d1u, 0x5fc8ccu); LOADALL;
  /* 005fc8d1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc8d4 cmp ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc8d6 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fc8d8 jle 0x5fc928 */ if ((ZF_|LT_)) goto L_005fc928;
L_005fc8da:;
  /* 005fc8da lea ebp, [esi + 0x20] */ ebp = (u32)((u32)(esi + 0x20u));
  /* 005fc8dd lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 005fc8e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc8e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fc8e2 mov dword ptr [edi + 0x44], ebx */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(ebx); }
  /* 005fc8e5 call 0x5fc200 */ esp -= 4; M32(esp) = 0x5fc8eau; SAVEALL; F_005fc200(c); ABI_CHECK(0x5fc200u, 0x5fc8e5u); RETCHK(0x5fc8eau, 0x5fc8e5u); LOADALL;
  /* 005fc8ea or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fc8ed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc8f0 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 005fc8f3 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 005fc8f6 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005fc8f9 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005fc8ff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc901 je 0x5fc90c */ if (ZF_) goto L_005fc90c;
  /* 005fc903 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc904 call 0x5fda80 */ esp -= 4; M32(esp) = 0x5fc909u; SAVEALL; F_005fda80(c); ABI_CHECK(0x5fda80u, 0x5fc904u); RETCHK(0x5fc909u, 0x5fc904u); LOADALL;
  /* 005fc909 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc90c:;
  /* 005fc90c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fc90d call 0x5fe650 */ esp -= 4; M32(esp) = 0x5fc912u; SAVEALL; F_005fe650(c); ABI_CHECK(0x5fe650u, 0x5fc90du); RETCHK(0x5fc912u, 0x5fc90du); LOADALL;
  /* 005fc912 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fc916 mov dword ptr [esi + 0x30], 0 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 005fc91d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc920 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fc923 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fc924 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc926 jl 0x5fc8da */ if (LT_) goto L_005fc8da;
L_005fc928:;
  /* 005fc928 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fc92b mov dword ptr [edi + 0x44], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(0xffffffffu); }
  /* 005fc932 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fc933 call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fc938u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fc933u); RETCHK(0x5fc938u, 0x5fc933u); LOADALL;
  /* 005fc938 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc93b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005fc93d mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005fc940 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fc941 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_005fc942:;
  /* 005fc942 cmp dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc945 je 0x5fc950 */ if (ZF_) goto L_005fc950;
  /* 005fc947 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc948 call 0x5fb040 */ esp -= 4; M32(esp) = 0x5fc94du; SAVEALL; F_005fb040(c); ABI_CHECK(0x5fb040u, 0x5fc948u); RETCHK(0x5fc94du, 0x5fc948u); LOADALL;
  /* 005fc94d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc950:;
  /* 005fc950 cmp dword ptr [edi + 0x10], ebx */ { const u32 m_ = (u32)(edi + 0x10u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc953 je 0x5fc95e */ if (ZF_) goto L_005fc95e;
  /* 005fc955 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc956 call 0x5fd5f0 */ esp -= 4; M32(esp) = 0x5fc95bu; SAVEALL; F_005fd5f0(c); ABI_CHECK(0x5fd5f0u, 0x5fc956u); RETCHK(0x5fc95bu, 0x5fc956u); LOADALL;
  /* 005fc95b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc95e:;
  /* 005fc95e cmp dword ptr [edi + 0x18], ebx */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc961 je 0x5fc96c */ if (ZF_) goto L_005fc96c;
  /* 005fc963 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc964 call 0x5fb960 */ esp -= 4; M32(esp) = 0x5fc969u; SAVEALL; F_005fb960(c); ABI_CHECK(0x5fb960u, 0x5fc964u); RETCHK(0x5fc969u, 0x5fc964u); LOADALL;
  /* 005fc969 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc96c:;
  /* 005fc96c mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fc96f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc971 je 0x5fc97c */ if (ZF_) goto L_005fc97c;
  /* 005fc973 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc974 call 0x573480 */ esp -= 4; M32(esp) = 0x5fc979u; SAVEALL; F_00573480(c); ABI_CHECK(0x573480u, 0x5fc974u); RETCHK(0x5fc979u, 0x5fc974u); LOADALL;
  /* 005fc979 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc97c:;
  /* 005fc97c cmp dword ptr [edi + 0x20], ebx */ { const u32 m_ = (u32)(edi + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc97f je 0x5fc98a */ if (ZF_) goto L_005fc98a;
  /* 005fc981 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc982 call 0x5fbfa0 */ esp -= 4; M32(esp) = 0x5fc987u; SAVEALL; F_005fbfa0(c); ABI_CHECK(0x5fbfa0u, 0x5fc982u); RETCHK(0x5fc987u, 0x5fc982u); LOADALL;
  /* 005fc987 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fc98a:;
  /* 005fc98a mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fc98d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fc98f je 0x5fc99d */ if (ZF_) goto L_005fc99d;
  /* 005fc991 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fc992 call 0x5fd3b0 */ esp -= 4; M32(esp) = 0x5fc997u; SAVEALL; F_005fd3b0(c); ABI_CHECK(0x5fd3b0u, 0x5fc992u); RETCHK(0x5fc997u, 0x5fc992u); LOADALL;
  /* 005fc997 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc99a mov dword ptr [edi + 0x1c], ebx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(ebx); }
L_005fc99d:;
  /* 005fc99d mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fc9a2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc9a3 push 0x9c00c8 */ { u32 v_ = 0x9c00c8u; esp -= 4; M32(esp) = v_; }
  /* 005fc9a8 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fc9aeu; SAVEALL; call_ind(c, t_); RETCHK(0x5fc9aeu, 0x5fc9a8u); LOADALL; }
  /* 005fc9ae add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc9b1 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005fc9b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fc9b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fc9b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fc9c0(CPU *c) {
  NATIVE_HOOK(0x5fc9c0u) REGS; LOADALL;
L_005fc9c0:;
  /* 005fc9c0 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc9c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fc9c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc9c5 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005fc9c9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc9cb jne 0x5fca00 */ if (!ZF_) goto L_005fca00;
  /* 005fc9cd mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fc9d2 push 0x301b1 */ { u32 v_ = 0x301b1u; esp -= 4; M32(esp) = v_; }
  /* 005fc9d7 push 0x9c00c8 */ { u32 v_ = 0x9c00c8u; esp -= 4; M32(esp) = v_; }
  /* 005fc9dc call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fc9e2u; SAVEALL; call_ind(c, t_); RETCHK(0x5fc9e2u, 0x5fc9dcu); LOADALL; }
  /* 005fc9e2 mov edi, eax */ { edi = (u32)(eax); }
  /* 005fc9e4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc9e7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc9e9 je 0x5fcc48 */ if (ZF_) goto L_005fcc48;
  /* 005fc9ef push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fc9f0 call 0x5fc7e0 */ esp -= 4; M32(esp) = 0x5fc9f5u; SAVEALL; F_005fc7e0(c); ABI_CHECK(0x5fc7e0u, 0x5fc9f0u); RETCHK(0x5fc9f5u, 0x5fc9f0u); LOADALL;
  /* 005fc9f5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fc9f8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fc9fa je 0x5fcc48 */ if (ZF_) goto L_005fcc48;
L_005fca00:;
  /* 005fca00 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 005fca04 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 005fca08 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fca0a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fca0b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fca0c call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fca11u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fca0cu); RETCHK(0x5fca11u, 0x5fca0cu); LOADALL;
  /* 005fca11 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca14 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fca16 jne 0x5fca1e */ if (!ZF_) goto L_005fca1e;
  /* 005fca18 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fca19 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fca1a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fca1e:;
  /* 005fca1e lea edx, [edi + 0x48] */ edx = (u32)((u32)(edi + 0x48u));
  /* 005fca21 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fca23 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fca24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fca25 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fca2au; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fca25u); RETCHK(0x5fca2au, 0x5fca25u); LOADALL;
  /* 005fca2a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca2d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fca2f jne 0x5fca37 */ if (!ZF_) goto L_005fca37;
  /* 005fca31 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fca32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fca33 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fca37:;
  /* 005fca37 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fca38 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fca39 call 0x5fb0b0 */ esp -= 4; M32(esp) = 0x5fca3eu; SAVEALL; F_005fb0b0(c); ABI_CHECK(0x5fb0b0u, 0x5fca39u); RETCHK(0x5fca3eu, 0x5fca39u); LOADALL;
  /* 005fca3e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca41 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fca43 jne 0x5fca4b */ if (!ZF_) goto L_005fca4b;
  /* 005fca45 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fca46 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fca47 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fca4b:;
  /* 005fca4b lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 005fca4f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fca51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fca52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fca53 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fca58u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fca53u); RETCHK(0x5fca58u, 0x5fca53u); LOADALL;
  /* 005fca58 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fca5d je 0x5fca97 */ if (ZF_) goto L_005fca97;
  /* 005fca5f mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fca63 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fca65 jle 0x5fca93 */ if ((ZF_|LT_)) goto L_005fca93;
  /* 005fca67 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 005fca6b lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 005fca6f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fca70 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fca71 push 0x1a5 */ { u32 v_ = 0x1a5u; esp -= 4; M32(esp) = v_; }
  /* 005fca76 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fca77 call 0x5b3890 */ esp -= 4; M32(esp) = 0x5fca7cu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5fca77u); RETCHK(0x5fca7cu, 0x5fca77u); LOADALL;
  /* 005fca7c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca7f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fca81 je 0x5fca97 */ if (ZF_) goto L_005fca97;
  /* 005fca83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fca84 call 0x573c70 */ esp -= 4; M32(esp) = 0x5fca89u; SAVEALL; F_00573c70(c); ABI_CHECK(0x573c70u, 0x5fca84u); RETCHK(0x5fca89u, 0x5fca84u); LOADALL;
  /* 005fca89 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca8c mov dword ptr [edi + 0x24], eax */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(eax); }
  /* 005fca8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fca91 je 0x5fca97 */ if (ZF_) goto L_005fca97;
L_005fca93:;
  /* 005fca93 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fca95 jne 0x5fca9f */ if (!ZF_) goto L_005fca9f;
L_005fca97:;
  /* 005fca97 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fca98 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fca9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fca9b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fca9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fca9f:;
  /* 005fca9f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcaa0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcaa1 call 0x5fd430 */ esp -= 4; M32(esp) = 0x5fcaa6u; SAVEALL; F_005fd430(c); ABI_CHECK(0x5fd430u, 0x5fcaa1u); RETCHK(0x5fcaa6u, 0x5fcaa1u); LOADALL;
  /* 005fcaa6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcaa9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcaab jne 0x5fcab3 */ if (!ZF_) goto L_005fcab3;
  /* 005fcaad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcaae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcaaf add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcab2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fcab3:;
  /* 005fcab3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcab4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcab5 call 0x5fb9d0 */ esp -= 4; M32(esp) = 0x5fcabau; SAVEALL; F_005fb9d0(c); ABI_CHECK(0x5fb9d0u, 0x5fcab5u); RETCHK(0x5fcabau, 0x5fcab5u); LOADALL;
  /* 005fcaba add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcabd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcabf jne 0x5fcac7 */ if (!ZF_) goto L_005fcac7;
  /* 005fcac1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcac2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcac3 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcac6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fcac7:;
  /* 005fcac7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcac8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcac9 call 0x5fbae0 */ esp -= 4; M32(esp) = 0x5fcaceu; SAVEALL; F_005fbae0(c); ABI_CHECK(0x5fbae0u, 0x5fcac9u); RETCHK(0x5fcaceu, 0x5fcac9u); LOADALL;
  /* 005fcace add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcad1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcad3 jne 0x5fcadb */ if (!ZF_) goto L_005fcadb;
  /* 005fcad5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcad6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcad7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcada ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fcadb:;
  /* 005fcadb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcadc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcadd call 0x5fcc50 */ esp -= 4; M32(esp) = 0x5fcae2u; SAVEALL; F_005fcc50(c); ABI_CHECK(0x5fcc50u, 0x5fcaddu); RETCHK(0x5fcae2u, 0x5fcaddu); LOADALL;
  /* 005fcae2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcae5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcae7 jne 0x5fcaef */ if (!ZF_) goto L_005fcaef;
  /* 005fcae9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcaea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcaeb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcaee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fcaef:;
  /* 005fcaef mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcaf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcaf3 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fcaf8u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fcaf3u); RETCHK(0x5fcaf8u, 0x5fcaf3u); LOADALL;
  /* 005fcaf8 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fcafa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcafd test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcaff mov dword ptr [esp + 0x10], esi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(esi); }
  /* 005fcb03 jle 0x5fcc41 */ if ((ZF_|LT_)) goto L_005fcc41;
  /* 005fcb09 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fcb0c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcb0d call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fcb12u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fcb0du); RETCHK(0x5fcb12u, 0x5fcb0du); LOADALL;
  /* 005fcb12 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcb15 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005fcb1d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcb1f jle 0x5fcc41 */ if ((ZF_|LT_)) goto L_005fcc41;
  /* 005fcb25 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fcb26 lea ebx, [eax + 0x38] */ ebx = (u32)((u32)(eax + 0x38u));
  /* 005fcb29 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcb2a mov dword ptr [esp + 0x28], ebx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebx); }
L_005fcb2e:;
  /* 005fcb2e mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fcb32 mov dword ptr [edi + 0x44], edx */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(edx); }
  /* 005fcb35 mov eax, dword ptr [ebx - 4] */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005fcb38 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fcb3b jne 0x5fcb46 */ if (!ZF_) goto L_005fcb46;
  /* 005fcb3d cmp dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fcb3f jne 0x5fcb46 */ if (!ZF_) goto L_005fcb46;
  /* 005fcb41 mov ebp, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ebp = (u32)(M32(m_)); }
  /* 005fcb44 jmp 0x5fcb8c */ goto L_005fcb8c;
L_005fcb46:;
  /* 005fcb46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcb48 jle 0x5fcb73 */ if ((ZF_|LT_)) goto L_005fcb73;
  /* 005fcb4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcb4b mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcb4e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcb4f call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fcb54u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fcb4fu); RETCHK(0x5fcb54u, 0x5fcb4fu); LOADALL;
  /* 005fcb54 mov ecx, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005fcb57 mov edx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); edx = (u32)(M32(m_)); }
  /* 005fcb5a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcb5d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcb5e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fcb5f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcb60 call 0x5fd330 */ esp -= 4; M32(esp) = 0x5fcb65u; SAVEALL; F_005fd330(c); ABI_CHECK(0x5fd330u, 0x5fcb60u); RETCHK(0x5fcb65u, 0x5fcb60u); LOADALL;
  /* 005fcb65 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcb68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcb69 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fcb6eu; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fcb69u); RETCHK(0x5fcb6eu, 0x5fcb69u); LOADALL;
  /* 005fcb6e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcb71 jmp 0x5fcb76 */ goto L_005fcb76;
L_005fcb73:;
  /* 005fcb73 mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
L_005fcb76:;
  /* 005fcb76 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005fcb78 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcb79 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcb7a call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fcb7fu; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fcb7au); RETCHK(0x5fcb7fu, 0x5fcb7au); LOADALL;
  /* 005fcb7f mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fcb81 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fcb83 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcb84 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fcb89u; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fcb84u); RETCHK(0x5fcb89u, 0x5fcb84u); LOADALL;
  /* 005fcb89 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fcb8c:;
  /* 005fcb8c lea eax, [ebx - 0x34] */ eax = (u32)((u32)(ebx + 0xffffffccu));
  /* 005fcb8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcb90 call 0x5fc6d0 */ esp -= 4; M32(esp) = 0x5fcb95u; SAVEALL; F_005fc6d0(c); ABI_CHECK(0x5fc6d0u, 0x5fcb90u); RETCHK(0x5fcb95u, 0x5fcb90u); LOADALL;
  /* 005fcb95 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcb98 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005fcb9c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcb9e mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 005fcba6 jle 0x5fcc0a */ if ((ZF_|LT_)) goto L_005fcc0a;
L_005fcba8:;
  /* 005fcba8 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 005fcbac mov eax, dword ptr [ebx - 8] */ { const u32 m_ = (u32)(ebx + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005fcbaf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fcbb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcbb1 call 0x5fd9f0 */ esp -= 4; M32(esp) = 0x5fcbb6u; SAVEALL; F_005fd9f0(c); ABI_CHECK(0x5fd9f0u, 0x5fcbb1u); RETCHK(0x5fcbb6u, 0x5fcbb1u); LOADALL;
  /* 005fcbb6 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fcbb8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcbbb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcbbd je 0x5fcbf9 */ if (ZF_) goto L_005fcbf9;
  /* 005fcbbf mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fcbc2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcbc3 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fcbc8u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fcbc3u); RETCHK(0x5fcbc8u, 0x5fcbc3u); LOADALL;
  /* 005fcbc8 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fcbcb mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fcbcd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fcbce call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fcbd3u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fcbceu); RETCHK(0x5fcbd3u, 0x5fcbceu); LOADALL;
  /* 005fcbd3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcbd6 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fcbd8 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcbda jle 0x5fcbf5 */ if ((ZF_|LT_)) goto L_005fcbf5;
L_005fcbdc:;
  /* 005fcbdc mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fcbde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcbdf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcbe0 call 0x5fd610 */ esp -= 4; M32(esp) = 0x5fcbe5u; SAVEALL; F_005fd610(c); ABI_CHECK(0x5fd610u, 0x5fcbe0u); RETCHK(0x5fcbe5u, 0x5fcbe0u); LOADALL;
  /* 005fcbe5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcbe6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcbe7 call 0x5fd770 */ esp -= 4; M32(esp) = 0x5fcbecu; SAVEALL; F_005fd770(c); ABI_CHECK(0x5fd770u, 0x5fcbe7u); RETCHK(0x5fcbecu, 0x5fcbe7u); LOADALL;
  /* 005fcbec add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcbef add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fcbf2 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fcbf3 jne 0x5fcbdc */ if (!ZF_) goto L_005fcbdc;
L_005fcbf5:;
  /* 005fcbf5 mov ebx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebx = (u32)(M32(m_)); }
L_005fcbf9:;
  /* 005fcbf9 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fcbfd mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fcc01 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fcc02 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fcc04 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 005fcc08 jl 0x5fcba8 */ if (LT_) goto L_005fcba8;
L_005fcc0a:;
  /* 005fcc0a lea esi, [ebx - 0x18] */ esi = (u32)((u32)(ebx + 0xffffffe8u));
  /* 005fcc0d lea ebp, [ebx - 0x34] */ ebp = (u32)((u32)(ebx + 0xffffffccu));
  /* 005fcc10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcc11 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcc12 call 0x5fc380 */ esp -= 4; M32(esp) = 0x5fcc17u; SAVEALL; F_005fc380(c); ABI_CHECK(0x5fc380u, 0x5fcc12u); RETCHK(0x5fcc17u, 0x5fcc12u); LOADALL;
  /* 005fcc17 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005fcc19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcc1a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcc1b call 0x5fc410 */ esp -= 4; M32(esp) = 0x5fcc20u; SAVEALL; F_005fc410(c); ABI_CHECK(0x5fc410u, 0x5fcc1bu); RETCHK(0x5fcc20u, 0x5fcc1bu); LOADALL;
  /* 005fcc20 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fcc24 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005fcc28 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcc2b add ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fcc2e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fcc2f mov dword ptr [esp + 0x28], ebx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebx); }
  /* 005fcc33 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fcc35 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005fcc39 jl 0x5fcb2e */ if (LT_) goto L_005fcb2e;
  /* 005fcc3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fcc40 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005fcc41:;
  /* 005fcc41 mov dword ptr [edi + 0x44], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(0xffffffffu); }
L_005fcc48:;
  /* 005fcc48 mov eax, edi */ { eax = (u32)(edi); }
  /* 005fcc4a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcc4b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcc4c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcc4f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fcc50(CPU *c) {
  NATIVE_HOOK(0x5fcc50u) REGS; LOADALL;
L_005fcc50:;
  /* 005fcc50 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fcc54 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcc57 lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 005fcc5b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fcc5c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcc5d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcc5e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcc5f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fcc61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcc62 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcc63 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fcc68u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fcc63u); RETCHK(0x5fcc68u, 0x5fcc63u); LOADALL;
  /* 005fcc68 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcc6b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcc6d jne 0x5fcc77 */ if (!ZF_) goto L_005fcc77;
  /* 005fcc6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcc70 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcc71 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fcc72 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fcc73 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcc76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fcc77:;
  /* 005fcc77 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fcc7b mov ebp, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (u32)(M32(m_)); }
  /* 005fcc7f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcc81 jle 0x5fcdd4 */ if ((ZF_|LT_)) goto L_005fcdd4;
  /* 005fcc87 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcc8a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcc8c jne 0x5fcca0 */ if (!ZF_) goto L_005fcca0;
  /* 005fcc8e push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fcc93 push 0x3c */ { u32 v_ = 0x3cu; esp -= 4; M32(esp) = v_; }
  /* 005fcc95 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fcc9au; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fcc95u); RETCHK(0x5fcc9au, 0x5fcc95u); LOADALL;
  /* 005fcc9a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcc9d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
L_005fcca0:;
  /* 005fcca0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcca3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcca5 je 0x5fccc0 */ if (ZF_) goto L_005fccc0;
  /* 005fcca7 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fccab push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fccb0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fccb1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fccb2 call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fccb7u; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fccb2u); RETCHK(0x5fccb7u, 0x5fccb2u); LOADALL;
  /* 005fccb7 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fccb9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fccbc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fccbe jne 0x5fccca */ if (!ZF_) goto L_005fccca;
L_005fccc0:;
  /* 005fccc0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fccc1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fccc2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fccc3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fccc5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fccc6 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fccc9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fccca:;
  /* 005fccca mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fccce mov dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 005fccd6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fccd8 jle 0x5fcdc6 */ if ((ZF_|LT_)) goto L_005fcdc6;
L_005fccde:;
  /* 005fccde lea edi, [esi + 0x34] */ edi = (u32)((u32)(esi + 0x34u));
  /* 005fcce1 lea ebx, [esi + 0x38] */ ebx = (u32)((u32)(esi + 0x38u));
  /* 005fcce4 mov dword ptr [esi], 2 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x2u); }
  /* 005fccea mov dword ptr [edi], 0xffffffff */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0xffffffffu); }
  /* 005fccf0 mov dword ptr [ebx], 0xffffffff */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0xffffffffu); }
  /* 005fccf6 call 0x5fda10 */ esp -= 4; M32(esp) = 0x5fccfbu; SAVEALL; F_005fda10(c); ABI_CHECK(0x5fda10u, 0x5fccf6u); RETCHK(0x5fccfbu, 0x5fccf6u); LOADALL;
  /* 005fccfb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fccfd mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 005fcd00 je 0x5fccc0 */ if (ZF_) goto L_005fccc0;
  /* 005fcd02 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005fcd06 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcd07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcd08 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcd09 call 0x5fd8d0 */ esp -= 4; M32(esp) = 0x5fcd0eu; SAVEALL; F_005fd8d0(c); ABI_CHECK(0x5fd8d0u, 0x5fcd09u); RETCHK(0x5fcd0eu, 0x5fcd09u); LOADALL;
  /* 005fcd0e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcd11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcd13 je 0x5fccc0 */ if (ZF_) goto L_005fccc0;
  /* 005fcd15 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fcd17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcd18 mov edi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edi = (u32)(M32(m_)); }
  /* 005fcd1c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcd1d call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fcd22u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fcd1du); RETCHK(0x5fcd22u, 0x5fcd1du); LOADALL;
  /* 005fcd22 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcd25 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcd27 je 0x5fccc0 */ if (ZF_) goto L_005fccc0;
  /* 005fcd29 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fcd2b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fcd2c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcd2d call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fcd32u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fcd2du); RETCHK(0x5fcd32u, 0x5fcd2du); LOADALL;
  /* 005fcd32 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcd35 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcd37 je 0x5fccc0 */ if (ZF_) goto L_005fccc0;
  /* 005fcd39 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 005fcd3d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fcd3e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcd3f call 0x5b3a90 */ esp -= 4; M32(esp) = 0x5fcd44u; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x5fcd3fu); RETCHK(0x5fcd44u, 0x5fcd3fu); LOADALL;
  /* 005fcd44 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcd47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcd49 je 0x5fccc0 */ if (ZF_) goto L_005fccc0;
  /* 005fcd4f mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 005fcd53 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcd55 jle 0x5fcd80 */ if ((ZF_|LT_)) goto L_005fcd80;
  /* 005fcd57 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcd5a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fcd5b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcd5c call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fcd61u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fcd5cu); RETCHK(0x5fcd61u, 0x5fcd5cu); LOADALL;
  /* 005fcd61 mov ecx, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005fcd64 mov edx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); edx = (u32)(M32(m_)); }
  /* 005fcd67 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcd6a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcd6b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fcd6c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcd6d call 0x5fd330 */ esp -= 4; M32(esp) = 0x5fcd72u; SAVEALL; F_005fd330(c); ABI_CHECK(0x5fd330u, 0x5fcd6du); RETCHK(0x5fcd72u, 0x5fcd6du); LOADALL;
  /* 005fcd72 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcd75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcd76 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fcd7bu; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fcd76u); RETCHK(0x5fcd7bu, 0x5fcd76u); LOADALL;
  /* 005fcd7b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcd7e jmp 0x5fcd83 */ goto L_005fcd83;
L_005fcd80:;
  /* 005fcd80 mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
L_005fcd83:;
  /* 005fcd83 lea edi, [esi + 0x20] */ edi = (u32)((u32)(esi + 0x20u));
  /* 005fcd86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcd87 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcd88 call 0x5fe5e0 */ esp -= 4; M32(esp) = 0x5fcd8du; SAVEALL; F_005fe5e0(c); ABI_CHECK(0x5fe5e0u, 0x5fcd88u); RETCHK(0x5fcd8du, 0x5fcd88u); LOADALL;
  /* 005fcd8d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcd90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcd92 je 0x5fccc0 */ if (ZF_) goto L_005fccc0;
  /* 005fcd98 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005fcd9c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcd9d lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 005fcda0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcda1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcda2 call 0x5fc270 */ esp -= 4; M32(esp) = 0x5fcda7u; SAVEALL; F_005fc270(c); ABI_CHECK(0x5fc270u, 0x5fcda2u); RETCHK(0x5fcda7u, 0x5fcda2u); LOADALL;
  /* 005fcda7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcdaa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcdac je 0x5fccc0 */ if (ZF_) goto L_005fccc0;
  /* 005fcdb2 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fcdb6 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fcdb9 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fcdba cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fcdbc mov dword ptr [esp + 0x2c], ebx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 005fcdc0 jl 0x5fccde */ if (LT_) goto L_005fccde;
L_005fcdc6:;
  /* 005fcdc6 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fcdc9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fcdcb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fcdcc call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fcdd1u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fcdccu); RETCHK(0x5fcdd1u, 0x5fcdccu); LOADALL;
  /* 005fcdd1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fcdd4:;
  /* 005fcdd4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcdd5 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005fcdd7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcdd8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fcdd9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fcdda add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcddd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fcde0(CPU *c) {
  NATIVE_HOOK(0x5fcde0u) REGS; LOADALL;
L_005fcde0:;
  /* 005fcde0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fcde4 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fcde7 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fcdeb jmp 0x5bdca0 */ SAVEALL; F_005bdca0(c); return;
}

void F_005fcdf0(CPU *c) {
  NATIVE_HOOK(0x5fcdf0u) REGS; LOADALL;
L_005fcdf0:;
  /* 005fcdf0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fcdf1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcdf2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcdf3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcdf4 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005fcdf8 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcdfb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcdfc call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fce01u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fcdfcu); RETCHK(0x5fce01u, 0x5fcdfcu); LOADALL;
  /* 005fce01 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fce03 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fce06 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fce08 jle 0x5fce88 */ if ((ZF_|LT_)) goto L_005fce88;
  /* 005fce0a mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fce0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fce0e call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fce13u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fce0eu); RETCHK(0x5fce13u, 0x5fce0eu); LOADALL;
  /* 005fce13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fce16 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005fce18 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fce1a mov esi, eax */ { esi = (u32)(eax); }
  /* 005fce1c jle 0x5fce88 */ if ((ZF_|LT_)) goto L_005fce88;
L_005fce1e:;
  /* 005fce1e mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 005fce21 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fce24 je 0x5fce3e */ if (ZF_) goto L_005fce3e;
  /* 005fce26 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fce29 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fce2a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fce2b call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fce30u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fce2bu); RETCHK(0x5fce30u, 0x5fce2bu); LOADALL;
  /* 005fce30 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fce32 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fce35 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fce38 jne 0x5fce3e */ if (!ZF_) goto L_005fce3e;
  /* 005fce3a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fce3c jmp 0x5fce43 */ goto L_005fce43;
L_005fce3e:;
  /* 005fce3e mov eax, 1 */ { eax = (u32)(0x1u); }
L_005fce43:;
  /* 005fce43 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fce45 mov dword ptr [edi + 0x44], ebx */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(ebx); }
  /* 005fce48 je 0x5fce7a */ if (ZF_) goto L_005fce7a;
  /* 005fce4a mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005fce4d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fce4e call 0x56e9d0 */ esp -= 4; M32(esp) = 0x5fce53u; SAVEALL; F_0056e9d0(c); ABI_CHECK(0x56e9d0u, 0x5fce4eu); RETCHK(0x5fce53u, 0x5fce4eu); LOADALL;
  /* 005fce53 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fce56 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fce58 je 0x5fce7a */ if (ZF_) goto L_005fce7a;
  /* 005fce5a mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005fce5e mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005fce60 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fce61 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fce64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fce65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fce66 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 005fce68 call dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fce6cu; SAVEALL; call_ind(c, t_); RETCHK(0x5fce6cu, 0x5fce68u); LOADALL; }
  /* 005fce6c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fce6f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fce71 je 0x5fce80 */ if (ZF_) goto L_005fce80;
  /* 005fce73 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fce74 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fce75 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fce76 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fce78 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fce79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fce7a:;
  /* 005fce7a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fce7c and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fce7e mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
L_005fce80:;
  /* 005fce80 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fce83 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fce84 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fce86 jl 0x5fce1e */ if (LT_) goto L_005fce1e;
L_005fce88:;
  /* 005fce88 mov dword ptr [edi + 0x44], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(0xffffffffu); }
  /* 005fce8f mov eax, edi */ { eax = (u32)(edi); }
  /* 005fce91 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fce92 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fce93 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fce94 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fce95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fcea0(CPU *c) {
  NATIVE_HOOK(0x5fcea0u) REGS; LOADALL;
L_005fcea0:;
  /* 005fcea0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fcea1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcea2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcea3 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005fcea7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcea8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fceab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fceac call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fceb1u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fceacu); RETCHK(0x5fceb1u, 0x5fceacu); LOADALL;
  /* 005fceb1 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fceb3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fceb6 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fceb8 jle 0x5fcef0 */ if ((ZF_|LT_)) goto L_005fcef0;
  /* 005fceba mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fcebd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcebe call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fcec3u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fcebeu); RETCHK(0x5fcec3u, 0x5fcebeu); LOADALL;
  /* 005fcec3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcec6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005fcec8 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fceca jle 0x5fcef0 */ if ((ZF_|LT_)) goto L_005fcef0;
  /* 005fcecc lea edi, [eax + 4] */ edi = (u32)((u32)(eax + 0x4u));
L_005fcecf:;
  /* 005fcecf mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005fced3 lea eax, [edi + 0x1c] */ eax = (u32)((u32)(edi + 0x1cu));
  /* 005fced6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fced7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fced8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fced9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fceda mov dword ptr [esi + 0x44], ebx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ebx); }
  /* 005fcedd call dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fcee1u; SAVEALL; call_ind(c, t_); RETCHK(0x5fcee1u, 0x5fceddu); LOADALL; }
  /* 005fcee1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcee4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fcee6 jne 0x5fcefe */ if (!ZF_) goto L_005fcefe;
  /* 005fcee8 add edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fceeb inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fceec cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fceee jl 0x5fcecf */ if (LT_) goto L_005fcecf;
L_005fcef0:;
  /* 005fcef0 mov dword ptr [esi + 0x44], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(0xffffffffu); }
  /* 005fcef7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fcef9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcefa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcefb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fcefc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fcefd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fcefe:;
  /* 005fcefe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fceff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcf00 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fcf01 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fcf03 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fcf04 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fcf10(CPU *c) {
  NATIVE_HOOK(0x5fcf10u) REGS; LOADALL;
L_005fcf10:;
  /* 005fcf10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcf11 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fcf15 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcf18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcf1a je 0x5fcf32 */ if (ZF_) goto L_005fcf32;
  /* 005fcf1c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fcf1e push 0x5fcf40 */ { u32 v_ = 0x5fcf40u; esp -= 4; M32(esp) = v_; }
  /* 005fcf23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcf24 call 0x5fcdf0 */ esp -= 4; M32(esp) = 0x5fcf29u; SAVEALL; F_005fcdf0(c); ABI_CHECK(0x5fcdf0u, 0x5fcf24u); RETCHK(0x5fcf29u, 0x5fcf24u); LOADALL;
  /* 005fcf29 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcf2c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcf2e jne 0x5fcf32 */ if (!ZF_) goto L_005fcf32;
  /* 005fcf30 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcf31 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fcf32:;
  /* 005fcf32 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fcf34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcf35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fcf40(CPU *c) {
  NATIVE_HOOK(0x5fcf40u) REGS; LOADALL;
L_005fcf40:;
  /* 005fcf40 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcf44 lea ecx, [eax + 0x20] */ ecx = (u32)((u32)(eax + 0x20u));
  /* 005fcf47 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fcf4a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcf4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcf4c call 0x5fc4b0 */ esp -= 4; M32(esp) = 0x5fcf51u; SAVEALL; F_005fc4b0(c); ABI_CHECK(0x5fc4b0u, 0x5fcf4cu); RETCHK(0x5fcf51u, 0x5fcf4cu); LOADALL;
  /* 005fcf51 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fcf55 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcf58 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fcf5a sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fcf5c and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fcf5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fcf60(CPU *c) {
  NATIVE_HOOK(0x5fcf60u) REGS; LOADALL;
L_005fcf60:;
  /* 005fcf60 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fcf64 mov eax, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fcf67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fcf70(CPU *c) {
  NATIVE_HOOK(0x5fcf70u) REGS; LOADALL;
L_005fcf70:;
  /* 005fcf70 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcf73 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fcf74 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fcf75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcf76 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fcf77 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 005fcf7b mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fcf7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcf7f call 0x5bdcc0 */ esp -= 4; M32(esp) = 0x5fcf84u; SAVEALL; F_005bdcc0(c); ABI_CHECK(0x5bdcc0u, 0x5fcf7fu); RETCHK(0x5fcf84u, 0x5fcf7fu); LOADALL;
  /* 005fcf84 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fcf87 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fcf89 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fcf8a call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fcf8fu; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fcf8au); RETCHK(0x5fcf8fu, 0x5fcf8au); LOADALL;
  /* 005fcf8f mov esi, eax */ { esi = (u32)(eax); }
  /* 005fcf91 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcf94 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fcf96 je 0x5fcfbf */ if (ZF_) goto L_005fcfbf;
L_005fcf98:;
  /* 005fcf98 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005fcf9a and edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fcf9d test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fcf9f jne 0x5fcfb8 */ if (!ZF_) goto L_005fcfb8;
  /* 005fcfa1 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fcfa4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcfa6 jne 0x5fcfc9 */ if (!ZF_) goto L_005fcfc9;
  /* 005fcfa8 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005fcfab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcfac call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fcfb1u; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fcfacu); RETCHK(0x5fcfb1u, 0x5fcfacu); LOADALL;
  /* 005fcfb1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcfb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fcfb6 jg 0x5fcff7 */ if (!(ZF_|LT_)) goto L_005fcff7;
L_005fcfb8:;
  /* 005fcfb8 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fcfbb cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fcfbd jne 0x5fcf98 */ if (!ZF_) goto L_005fcf98;
L_005fcfbf:;
  /* 005fcfbf mov eax, edi */ { eax = (u32)(edi); }
  /* 005fcfc1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fcfc2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fcfc3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fcfc4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fcfc5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcfc8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fcfc9:;
  /* 005fcfc9 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fcfcc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcfcd call 0x5fc750 */ esp -= 4; M32(esp) = 0x5fcfd2u; SAVEALL; F_005fc750(c); ABI_CHECK(0x5fc750u, 0x5fcfcdu); RETCHK(0x5fcfd2u, 0x5fcfcdu); LOADALL;
  /* 005fcfd2 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fcfd6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcfd7 call 0x5fc700 */ esp -= 4; M32(esp) = 0x5fcfdcu; SAVEALL; F_005fc700(c); ABI_CHECK(0x5fc700u, 0x5fcfd7u); RETCHK(0x5fcfdcu, 0x5fcfd7u); LOADALL;
  /* 005fcfdc fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fcfe0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcfe1 call 0x5fc7a0 */ esp -= 4; M32(esp) = 0x5fcfe6u; SAVEALL; F_005fc7a0(c); ABI_CHECK(0x5fc7a0u, 0x5fcfe1u); RETCHK(0x5fcfe6u, 0x5fcfe1u); LOADALL;
  /* 005fcfe6 fst dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); MF32(m_) = (float)ST(0); }
  /* 005fcfea fsub dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fcfee add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fcff1 fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fcff5 jmp 0x5fd02b */ goto L_005fd02b;
L_005fcff7:;
  /* 005fcff7 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fcffa dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fcffb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fcffc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fcffd call 0x5fc6e0 */ esp -= 4; M32(esp) = 0x5fd002u; SAVEALL; F_005fc6e0(c); ABI_CHECK(0x5fc6e0u, 0x5fcffdu); RETCHK(0x5fd002u, 0x5fcffdu); LOADALL;
  /* 005fd002 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fd004 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd005 mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005fd009 call 0x5fc750 */ esp -= 4; M32(esp) = 0x5fd00eu; SAVEALL; F_005fc750(c); ABI_CHECK(0x5fc750u, 0x5fd009u); RETCHK(0x5fd00eu, 0x5fd009u); LOADALL;
  /* 005fd00e fst dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); MF32(m_) = (float)ST(0); }
  /* 005fd012 fsub dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fd016 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd017 fstp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fd01b call 0x5fc700 */ esp -= 4; M32(esp) = 0x5fd020u; SAVEALL; F_005fc700(c); ABI_CHECK(0x5fc700u, 0x5fd01bu); RETCHK(0x5fd020u, 0x5fd01bu); LOADALL;
  /* 005fd020 fsub dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fd024 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd027 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
L_005fd02b:;
  /* 005fd02b fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005fd02f fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fd035 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fd037 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd03a jnp 0x5fcfbf */ if (!PF_) goto L_005fcfbf;
  /* 005fd03c fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 005fd040 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fd046 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fd048 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd04d jne 0x5fcfbf */ if (!ZF_) goto L_005fcfbf;
L_005fd053:;
  /* 005fd053 fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005fd057 fsub dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fd05b fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 005fd05f fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 005fd061 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fd063 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd068 jne 0x5fd095 */ if (!ZF_) goto L_005fd095;
  /* 005fd06a fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 005fd06e fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 005fd070 mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 005fd075 fstp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fd079 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005fd07d fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 005fd07f fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fd083 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005fd087 fadd dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fd08b fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fd08f fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fd093 jmp 0x5fd0a9 */ goto L_005fd0a9;
L_005fd095:;
  /* 005fd095 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 005fd099 mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 005fd0a1 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005fd0a3 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 005fd0a7 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_005fd0a9:;
  /* 005fd0a9 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 005fd0ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd0ae push 0x5fd150 */ { u32 v_ = 0x5fd150u; esp -= 4; M32(esp) = v_; }
  /* 005fd0b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd0b4 call 0x5fcdf0 */ esp -= 4; M32(esp) = 0x5fd0b9u; SAVEALL; F_005fcdf0(c); ABI_CHECK(0x5fcdf0u, 0x5fd0b4u); RETCHK(0x5fd0b9u, 0x5fd0b4u); LOADALL;
  /* 005fd0b9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd0bc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd0be je 0x5fd144 */ if (ZF_) goto L_005fd144;
  /* 005fd0c4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd0c6 je 0x5fd0db */ if (ZF_) goto L_005fd0db;
  /* 005fd0c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd0c9 call 0x5fbc60 */ esp -= 4; M32(esp) = 0x5fd0ceu; SAVEALL; F_005fbc60(c); ABI_CHECK(0x5fbc60u, 0x5fd0c9u); RETCHK(0x5fd0ceu, 0x5fd0c9u); LOADALL;
  /* 005fd0ce lea ecx, [edi + 0x2c] */ ecx = (u32)((u32)(edi + 0x2cu));
  /* 005fd0d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd0d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd0d3 call 0x5fb1c0 */ esp -= 4; M32(esp) = 0x5fd0d8u; SAVEALL; F_005fb1c0(c); ABI_CHECK(0x5fb1c0u, 0x5fd0d3u); RETCHK(0x5fd0d8u, 0x5fd0d3u); LOADALL;
  /* 005fd0d8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd0db:;
  /* 005fd0db mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fd0de push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd0df call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fd0e4u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fd0dfu); RETCHK(0x5fd0e4u, 0x5fd0dfu); LOADALL;
  /* 005fd0e4 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fd0e6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd0e9 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd0eb jle 0x5fd11c */ if ((ZF_|LT_)) goto L_005fd11c;
  /* 005fd0ed mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fd0f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd0f1 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fd0f6u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd0f1u); RETCHK(0x5fd0f6u, 0x5fd0f1u); LOADALL;
  /* 005fd0f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd0f9 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005fd0fb test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd0fd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fd0ff jle 0x5fd11c */ if ((ZF_|LT_)) goto L_005fd11c;
L_005fd101:;
  /* 005fd101 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fd103 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd104 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd105 mov dword ptr [edi + 0x44], esi */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(esi); }
  /* 005fd108 call 0x5fd230 */ esp -= 4; M32(esp) = 0x5fd10du; SAVEALL; F_005fd230(c); ABI_CHECK(0x5fd230u, 0x5fd108u); RETCHK(0x5fd10du, 0x5fd108u); LOADALL;
  /* 005fd10d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd110 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd112 jne 0x5fd123 */ if (!ZF_) goto L_005fd123;
  /* 005fd114 add ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fd117 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fd118 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd11a jl 0x5fd101 */ if (LT_) goto L_005fd101;
L_005fd11c:;
  /* 005fd11c mov dword ptr [edi + 0x44], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(0xffffffffu); }
L_005fd123:;
  /* 005fd123 fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 005fd127 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fd12d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fd12f and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd134 je 0x5fd053 */ if (ZF_) goto L_005fd053;
  /* 005fd13a mov eax, edi */ { eax = (u32)(edi); }
  /* 005fd13c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd13d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd13e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd13f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd140 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd143 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd144:;
  /* 005fd144 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd145 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd146 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd147 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd149 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd14a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd14d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd150(CPU *c) {
  NATIVE_HOOK(0x5fd150u) REGS; LOADALL;
L_005fd150:;
  /* 005fd150 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fd154 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd155 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd156 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd157 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005fd15b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fd15d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd15e mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005fd162 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 005fd165 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd166 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fd16bu; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fd166u); RETCHK(0x5fd16bu, 0x5fd166u); LOADALL;
  /* 005fd16b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fd16d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fd16f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd172 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd174 je 0x5fd1b7 */ if (ZF_) goto L_005fd1b7;
  /* 005fd176 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 005fd179 and al, 0xfd */ { u32 a_ = (eax & 0xffu), b_ = 0xfdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fd17b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fd17d mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005fd17f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd180 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fd185u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd180u); RETCHK(0x5fd185u, 0x5fd180u); LOADALL;
  /* 005fd185 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005fd187 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 005fd18b shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fd18e add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fd190 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd193 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fd196 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd198 jl 0x5fd1a4 */ if (LT_) goto L_005fd1a4;
  /* 005fd19a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd19b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd19c call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fd1a1u; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fd19cu); RETCHK(0x5fd1a1u, 0x5fd19cu); LOADALL;
  /* 005fd1a1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd1a4:;
  /* 005fd1a4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1a5 call 0x5fbc60 */ esp -= 4; M32(esp) = 0x5fd1aau; SAVEALL; F_005fbc60(c); ABI_CHECK(0x5fbc60u, 0x5fd1a5u); RETCHK(0x5fd1aau, 0x5fd1a5u); LOADALL;
  /* 005fd1aa lea edx, [ebp + 0x2c] */ edx = (u32)((u32)(ebp + 0x2cu));
  /* 005fd1ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd1ae push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1af call 0x5fb1c0 */ esp -= 4; M32(esp) = 0x5fd1b4u; SAVEALL; F_005fb1c0(c); ABI_CHECK(0x5fb1c0u, 0x5fd1afu); RETCHK(0x5fd1b4u, 0x5fd1afu); LOADALL;
  /* 005fd1b4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd1b7:;
  /* 005fd1b7 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fd1ba lea ebp, [esi + 0x20] */ ebp = (u32)((u32)(esi + 0x20u));
  /* 005fd1bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd1be call 0x56e9d0 */ esp -= 4; M32(esp) = 0x5fd1c3u; SAVEALL; F_0056e9d0(c); ABI_CHECK(0x56e9d0u, 0x5fd1beu); RETCHK(0x5fd1c3u, 0x5fd1beu); LOADALL;
  /* 005fd1c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd1c8 je 0x5fd21e */ if (ZF_) goto L_005fd21e;
  /* 005fd1ca test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd1cd jne 0x5fd21e */ if (!ZF_) goto L_005fd21e;
  /* 005fd1cf mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fd1d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd1d4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd1d6 call 0x5fc3e0 */ esp -= 4; M32(esp) = 0x5fd1dbu; SAVEALL; F_005fc3e0(c); ABI_CHECK(0x5fc3e0u, 0x5fd1d6u); RETCHK(0x5fd1dbu, 0x5fd1d6u); LOADALL;
  /* 005fd1db add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd1e0 jne 0x5fd1e7 */ if (!ZF_) goto L_005fd1e7;
  /* 005fd1e2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd1e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd1e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd1e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd1e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd1e7:;
  /* 005fd1e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd1e8 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fd1edu; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fd1e8u); RETCHK(0x5fd1edu, 0x5fd1e8u); LOADALL;
  /* 005fd1ed mov edi, eax */ { edi = (u32)(eax); }
  /* 005fd1ef add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1f2 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd1f4 je 0x5fd21e */ if (ZF_) goto L_005fd21e;
  /* 005fd1f6 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 005fd1f9 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005fd1fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd1fc call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fd201u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd1fcu); RETCHK(0x5fd201u, 0x5fd1fcu); LOADALL;
  /* 005fd201 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005fd204 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fd206 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd209 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fd20c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd20e jl 0x5fd21e */ if (LT_) goto L_005fd21e;
  /* 005fd210 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fd214 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd215 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd216 call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fd21bu; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fd216u); RETCHK(0x5fd21bu, 0x5fd216u); LOADALL;
  /* 005fd21b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd21e:;
  /* 005fd21e mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fd222 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd223 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd224 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd225 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd226 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd15a(CPU *c) {
  NATIVE_HOOK(0x5fd15au) REGS; LOADALL;
L_005fd15a:;
  /* 005fd15a adc al, 0x8b */ { u32 a_ = (eax & 0xffu), b_ = 0x8bu; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fd15c or byte ptr [edi - 0x77], dl */ { const u32 m_ = (u32)(edi + 0xffffff89u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 005fd15f dec esp */ { u32 a_ = esp; u32 r_ = (a_ - 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fd160 and al, 0x1c */ { u32 a_ = (eax & 0xffu), b_ = 0x1cu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fd162 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 005fd165 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd166 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fd16bu; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fd166u); RETCHK(0x5fd16bu, 0x5fd166u); LOADALL;
  /* 005fd16b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fd16d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fd16f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd172 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd174 je 0x5fd1b7 */ if (ZF_) goto L_005fd1b7;
  /* 005fd176 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 005fd179 and al, 0xfd */ { u32 a_ = (eax & 0xffu), b_ = 0xfdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fd17b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fd17d mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005fd17f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd180 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fd185u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd180u); RETCHK(0x5fd185u, 0x5fd180u); LOADALL;
  /* 005fd185 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005fd187 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 005fd18b shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fd18e add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fd190 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd193 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fd196 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd198 jl 0x5fd1a4 */ if (LT_) goto L_005fd1a4;
  /* 005fd19a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd19b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd19c call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fd1a1u; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fd19cu); RETCHK(0x5fd1a1u, 0x5fd19cu); LOADALL;
  /* 005fd1a1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd1a4:;
  /* 005fd1a4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1a5 call 0x5fbc60 */ esp -= 4; M32(esp) = 0x5fd1aau; SAVEALL; F_005fbc60(c); ABI_CHECK(0x5fbc60u, 0x5fd1a5u); RETCHK(0x5fd1aau, 0x5fd1a5u); LOADALL;
  /* 005fd1aa lea edx, [ebp + 0x2c] */ edx = (u32)((u32)(ebp + 0x2cu));
  /* 005fd1ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd1ae push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1af call 0x5fb1c0 */ esp -= 4; M32(esp) = 0x5fd1b4u; SAVEALL; F_005fb1c0(c); ABI_CHECK(0x5fb1c0u, 0x5fd1afu); RETCHK(0x5fd1b4u, 0x5fd1afu); LOADALL;
  /* 005fd1b4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd1b7:;
  /* 005fd1b7 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fd1ba lea ebp, [esi + 0x20] */ ebp = (u32)((u32)(esi + 0x20u));
  /* 005fd1bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd1be call 0x56e9d0 */ esp -= 4; M32(esp) = 0x5fd1c3u; SAVEALL; F_0056e9d0(c); ABI_CHECK(0x56e9d0u, 0x5fd1beu); RETCHK(0x5fd1c3u, 0x5fd1beu); LOADALL;
  /* 005fd1c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd1c8 je 0x5fd21e */ if (ZF_) goto L_005fd21e;
  /* 005fd1ca test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd1cd jne 0x5fd21e */ if (!ZF_) goto L_005fd21e;
  /* 005fd1cf mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fd1d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd1d4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd1d6 call 0x5fc3e0 */ esp -= 4; M32(esp) = 0x5fd1dbu; SAVEALL; F_005fc3e0(c); ABI_CHECK(0x5fc3e0u, 0x5fd1d6u); RETCHK(0x5fd1dbu, 0x5fd1d6u); LOADALL;
  /* 005fd1db add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd1e0 jne 0x5fd1e7 */ if (!ZF_) goto L_005fd1e7;
  /* 005fd1e2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd1e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd1e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd1e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd1e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd1e7:;
  /* 005fd1e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd1e8 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fd1edu; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fd1e8u); RETCHK(0x5fd1edu, 0x5fd1e8u); LOADALL;
  /* 005fd1ed mov edi, eax */ { edi = (u32)(eax); }
  /* 005fd1ef add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1f2 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd1f4 je 0x5fd21e */ if (ZF_) goto L_005fd21e;
  /* 005fd1f6 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 005fd1f9 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005fd1fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd1fc call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fd201u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd1fcu); RETCHK(0x5fd201u, 0x5fd1fcu); LOADALL;
  /* 005fd201 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005fd204 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fd206 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd209 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fd20c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd20e jl 0x5fd21e */ if (LT_) goto L_005fd21e;
  /* 005fd210 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fd214 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd215 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd216 call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fd21bu; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fd216u); RETCHK(0x5fd21bu, 0x5fd216u); LOADALL;
  /* 005fd21b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd21e:;
  /* 005fd21e mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fd222 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd223 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd224 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd225 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd226 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd15b(CPU *c) {
  NATIVE_HOOK(0x5fd15bu) REGS; LOADALL;
L_005fd15b:;
  /* 005fd15b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fd15d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd15e mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005fd162 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 005fd165 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd166 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fd16bu; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fd166u); RETCHK(0x5fd16bu, 0x5fd166u); LOADALL;
  /* 005fd16b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fd16d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fd16f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd172 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd174 je 0x5fd1b7 */ if (ZF_) goto L_005fd1b7;
  /* 005fd176 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 005fd179 and al, 0xfd */ { u32 a_ = (eax & 0xffu), b_ = 0xfdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fd17b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fd17d mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005fd17f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd180 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fd185u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd180u); RETCHK(0x5fd185u, 0x5fd180u); LOADALL;
  /* 005fd185 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005fd187 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 005fd18b shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fd18e add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fd190 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd193 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fd196 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd198 jl 0x5fd1a4 */ if (LT_) goto L_005fd1a4;
  /* 005fd19a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd19b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd19c call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fd1a1u; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fd19cu); RETCHK(0x5fd1a1u, 0x5fd19cu); LOADALL;
  /* 005fd1a1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd1a4:;
  /* 005fd1a4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1a5 call 0x5fbc60 */ esp -= 4; M32(esp) = 0x5fd1aau; SAVEALL; F_005fbc60(c); ABI_CHECK(0x5fbc60u, 0x5fd1a5u); RETCHK(0x5fd1aau, 0x5fd1a5u); LOADALL;
  /* 005fd1aa lea edx, [ebp + 0x2c] */ edx = (u32)((u32)(ebp + 0x2cu));
  /* 005fd1ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd1ae push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1af call 0x5fb1c0 */ esp -= 4; M32(esp) = 0x5fd1b4u; SAVEALL; F_005fb1c0(c); ABI_CHECK(0x5fb1c0u, 0x5fd1afu); RETCHK(0x5fd1b4u, 0x5fd1afu); LOADALL;
  /* 005fd1b4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd1b7:;
  /* 005fd1b7 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fd1ba lea ebp, [esi + 0x20] */ ebp = (u32)((u32)(esi + 0x20u));
  /* 005fd1bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd1be call 0x56e9d0 */ esp -= 4; M32(esp) = 0x5fd1c3u; SAVEALL; F_0056e9d0(c); ABI_CHECK(0x56e9d0u, 0x5fd1beu); RETCHK(0x5fd1c3u, 0x5fd1beu); LOADALL;
  /* 005fd1c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd1c8 je 0x5fd21e */ if (ZF_) goto L_005fd21e;
  /* 005fd1ca test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd1cd jne 0x5fd21e */ if (!ZF_) goto L_005fd21e;
  /* 005fd1cf mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fd1d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd1d4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd1d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd1d6 call 0x5fc3e0 */ esp -= 4; M32(esp) = 0x5fd1dbu; SAVEALL; F_005fc3e0(c); ABI_CHECK(0x5fc3e0u, 0x5fd1d6u); RETCHK(0x5fd1dbu, 0x5fd1d6u); LOADALL;
  /* 005fd1db add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd1e0 jne 0x5fd1e7 */ if (!ZF_) goto L_005fd1e7;
  /* 005fd1e2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd1e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd1e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd1e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd1e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd1e7:;
  /* 005fd1e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd1e8 call 0x5fc720 */ esp -= 4; M32(esp) = 0x5fd1edu; SAVEALL; F_005fc720(c); ABI_CHECK(0x5fc720u, 0x5fd1e8u); RETCHK(0x5fd1edu, 0x5fd1e8u); LOADALL;
  /* 005fd1ed mov edi, eax */ { edi = (u32)(eax); }
  /* 005fd1ef add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd1f2 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd1f4 je 0x5fd21e */ if (ZF_) goto L_005fd21e;
  /* 005fd1f6 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 005fd1f9 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005fd1fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd1fc call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fd201u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd1fcu); RETCHK(0x5fd201u, 0x5fd1fcu); LOADALL;
  /* 005fd201 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005fd204 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fd206 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd209 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fd20c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd20e jl 0x5fd21e */ if (LT_) goto L_005fd21e;
  /* 005fd210 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fd214 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd215 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd216 call 0x5fba70 */ esp -= 4; M32(esp) = 0x5fd21bu; SAVEALL; F_005fba70(c); ABI_CHECK(0x5fba70u, 0x5fd216u); RETCHK(0x5fd21bu, 0x5fd216u); LOADALL;
  /* 005fd21b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd21e:;
  /* 005fd21e mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fd222 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd223 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd224 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd225 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd226 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd230(CPU *c) {
  NATIVE_HOOK(0x5fd230u) REGS; LOADALL;
L_005fd230:;
  /* 005fd230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd231 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd232 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005fd236 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd237 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd23a jne 0x5fd252 */ if (!ZF_) goto L_005fd252;
  /* 005fd23c lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005fd23f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd240 call 0x5fc710 */ esp -= 4; M32(esp) = 0x5fd245u; SAVEALL; F_005fc710(c); ABI_CHECK(0x5fc710u, 0x5fd240u); RETCHK(0x5fd245u, 0x5fd240u); LOADALL;
  /* 005fd245 fcomp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fd248 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd24b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fd24d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd250 jnp 0x5fd25e */ if (!PF_) goto L_005fd25e;
L_005fd252:;
  /* 005fd252 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fd256 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd258 je 0x5fd322 */ if (ZF_) goto L_005fd322;
L_005fd25e:;
  /* 005fd25e mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005fd262 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fd265 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd266 call 0x5bdcc0 */ esp -= 4; M32(esp) = 0x5fd26bu; SAVEALL; F_005bdcc0(c); ABI_CHECK(0x5bdcc0u, 0x5fd266u); RETCHK(0x5fd26bu, 0x5fd266u); LOADALL;
  /* 005fd26b mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fd26e mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fd270 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd271 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fd276u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd271u); RETCHK(0x5fd276u, 0x5fd271u); LOADALL;
  /* 005fd276 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005fd278 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fd27a sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fd27c mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 005fd281 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005fd283 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005fd285 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 005fd288 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005fd28b mov eax, edx */ { eax = (u32)(edx); }
  /* 005fd28d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd28e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fd291 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005fd293 mov dword ptr [esp + 0x20], edx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(edx); }
  /* 005fd297 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 005fd29a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd29b call 0x5fc610 */ esp -= 4; M32(esp) = 0x5fd2a0u; SAVEALL; F_005fc610(c); ABI_CHECK(0x5fc610u, 0x5fd29bu); RETCHK(0x5fd2a0u, 0x5fd29bu); LOADALL;
  /* 005fd2a0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005fd2a2 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fd2a5 or edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fd2a8 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd2ab mov dword ptr [esi - 0x3c], edx */ { const u32 m_ = (u32)(esi + 0xffffffc4u); M32(m_) = (u32)(edx); }
  /* 005fd2ae cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd2b0 je 0x5fd31c */ if (ZF_) goto L_005fd31c;
  /* 005fd2b2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_005fd2b3:;
  /* 005fd2b3 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 005fd2b6 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fd2ba cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd2bc jne 0x5fd30e */ if (!ZF_) goto L_005fd30e;
  /* 005fd2be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd2c0 jle 0x5fd2eb */ if ((ZF_|LT_)) goto L_005fd2eb;
  /* 005fd2c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd2c3 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fd2c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd2c7 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fd2ccu; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fd2c7u); RETCHK(0x5fd2ccu, 0x5fd2c7u); LOADALL;
  /* 005fd2cc mov ecx, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005fd2cf mov edx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); edx = (u32)(M32(m_)); }
  /* 005fd2d2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd2d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd2d6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd2d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd2d8 call 0x5fd330 */ esp -= 4; M32(esp) = 0x5fd2ddu; SAVEALL; F_005fd330(c); ABI_CHECK(0x5fd330u, 0x5fd2d8u); RETCHK(0x5fd2ddu, 0x5fd2d8u); LOADALL;
  /* 005fd2dd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd2e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd2e1 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fd2e6u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fd2e1u); RETCHK(0x5fd2e6u, 0x5fd2e1u); LOADALL;
  /* 005fd2e6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd2e9 jmp 0x5fd2ee */ goto L_005fd2ee;
L_005fd2eb:;
  /* 005fd2eb mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
L_005fd2ee:;
  /* 005fd2ee mov ecx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005fd2f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd2f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd2f3 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fd2f8u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fd2f3u); RETCHK(0x5fd2f8u, 0x5fd2f3u); LOADALL;
  /* 005fd2f8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005fd2fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd2fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd2fc mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fd2fe call 0x5fd230 */ esp -= 4; M32(esp) = 0x5fd303u; SAVEALL; F_005fd230(c); ABI_CHECK(0x5fd230u, 0x5fd2feu); RETCHK(0x5fd303u, 0x5fd2feu); LOADALL;
  /* 005fd303 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fd305 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd306 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fd30bu; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fd306u); RETCHK(0x5fd30bu, 0x5fd306u); LOADALL;
  /* 005fd30b add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd30e:;
  /* 005fd30e add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fd311 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd313 jne 0x5fd2b3 */ if (!ZF_) goto L_005fd2b3;
  /* 005fd315 mov eax, edi */ { eax = (u32)(edi); }
  /* 005fd317 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd318 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd319 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd31a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd31b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd31c:;
  /* 005fd31c mov eax, edi */ { eax = (u32)(edi); }
  /* 005fd31e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd31f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd320 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd321 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd322:;
  /* 005fd322 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fd326 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd327 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd328 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd329 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd330(CPU *c) {
  NATIVE_HOOK(0x5fd330u) REGS; LOADALL;
L_005fd330:;
  /* 005fd330 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fd334 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd336 jle 0x5fd366 */ if ((ZF_|LT_)) goto L_005fd366;
  /* 005fd338 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd339 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fd33d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd33e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fd341 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd342 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fd347u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fd342u); RETCHK(0x5fd347u, 0x5fd342u); LOADALL;
  /* 005fd347 mov ecx, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005fd34a mov edx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); edx = (u32)(M32(m_)); }
  /* 005fd34d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd350 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd351 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd352 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd353 call 0x5fd330 */ esp -= 4; M32(esp) = 0x5fd358u; SAVEALL; F_005fd330(c); ABI_CHECK(0x5fd330u, 0x5fd353u); RETCHK(0x5fd358u, 0x5fd353u); LOADALL;
  /* 005fd358 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd35b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd35c call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fd361u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fd35cu); RETCHK(0x5fd361u, 0x5fd35cu); LOADALL;
  /* 005fd361 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd364 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd365 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd366:;
  /* 005fd366 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fd36a mov eax, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fd36d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd370(CPU *c) {
  NATIVE_HOOK(0x5fd370u) REGS; LOADALL;
L_005fd370:;
  /* 005fd370 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd371 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fd375 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005fd378 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd37a je 0x5fd38b */ if (ZF_) goto L_005fd38b;
  /* 005fd37c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd37d call 0x573720 */ esp -= 4; M32(esp) = 0x5fd382u; SAVEALL; F_00573720(c); ABI_CHECK(0x573720u, 0x5fd37du); RETCHK(0x5fd382u, 0x5fd37du); LOADALL;
  /* 005fd382 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd385 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd387 jne 0x5fd38b */ if (!ZF_) goto L_005fd38b;
  /* 005fd389 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd38a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd38b:;
  /* 005fd38b mov eax, esi */ { eax = (u32)(esi); }
  /* 005fd38d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd38e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd390(CPU *c) {
  NATIVE_HOOK(0x5fd390u) REGS; LOADALL;
L_005fd390:;
  /* 005fd390 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fd394 add eax, 0x48 */ { u32 a_ = eax, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fd397 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd3a0(CPU *c) {
  NATIVE_HOOK(0x5fd3a0u) REGS; LOADALL;
L_005fd3a0:;
  /* 005fd3a0 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fd3a5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005fd3a7 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fd3acu; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fd3a7u); RETCHK(0x5fd3acu, 0x5fd3a7u); LOADALL;
  /* 005fd3ac add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd3af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd3b0(CPU *c) {
  NATIVE_HOOK(0x5fd3b0u) REGS; LOADALL;
L_005fd3b0:;
  /* 005fd3b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fd3b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd3b5 call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fd3bau; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fd3b5u); RETCHK(0x5fd3bau, 0x5fd3b5u); LOADALL;
  /* 005fd3ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd3bd mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005fd3c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd3d0(CPU *c) {
  NATIVE_HOOK(0x5fd3d0u) REGS; LOADALL;
L_005fd3d0:;
  /* 005fd3d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd3d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd3d2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fd3d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd3d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd3d8 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fd3ddu; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fd3d8u); RETCHK(0x5fd3ddu, 0x5fd3d8u); LOADALL;
  /* 005fd3dd mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005fd3e1 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fd3e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd3e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd3e8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fd3ea call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fd3efu; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fd3eau); RETCHK(0x5fd3efu, 0x5fd3eau); LOADALL;
  /* 005fd3ef add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd3f2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd3f4 jne 0x5fd3fd */ if (!ZF_) goto L_005fd3fd;
  /* 005fd3f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd3f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd3f8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd3fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd3fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd3fd:;
  /* 005fd3fd mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005fd401 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd403 je 0x5fd417 */ if (ZF_) goto L_005fd417;
  /* 005fd405 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005fd407 mov edi, eax */ { edi = (u32)(eax); }
  /* 005fd409 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005fd40b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fd40e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005fd410 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005fd412 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fd415 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_005fd417:;
  /* 005fd417 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd418 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fd41a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd41b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd41c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd420(CPU *c) {
  NATIVE_HOOK(0x5fd420u) REGS; LOADALL;
L_005fd420:;
  /* 005fd420 jmp 0x5bdca0 */ SAVEALL; F_005bdca0(c); return;
}

void F_005fd430(CPU *c) {
  NATIVE_HOOK(0x5fd430u) REGS; LOADALL;
L_005fd430:;
  /* 005fd430 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd433 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd434 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd435 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd436 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd437 mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
  /* 005fd43b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd43d jne 0x5fd458 */ if (!ZF_) goto L_005fd458;
  /* 005fd43f call 0x5fc870 */ esp -= 4; M32(esp) = 0x5fd444u; SAVEALL; F_005fc870(c); ABI_CHECK(0x5fc870u, 0x5fd43fu); RETCHK(0x5fd444u, 0x5fd43fu); LOADALL;
  /* 005fd444 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd446 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 005fd44a jne 0x5fd454 */ if (!ZF_) goto L_005fd454;
  /* 005fd44c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd44d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd44e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd44f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd450 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd453 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd454:;
  /* 005fd454 mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
L_005fd458:;
  /* 005fd458 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 005fd45c lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 005fd460 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd462 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd463 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd464 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd469u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd464u); RETCHK(0x5fd469u, 0x5fd464u); LOADALL;
  /* 005fd469 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd46c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd46e jne 0x5fd478 */ if (!ZF_) goto L_005fd478;
  /* 005fd470 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd471 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd472 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd473 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd474 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd477 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd478:;
  /* 005fd478 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 005fd47c push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd47e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd47f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd480 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd485u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd480u); RETCHK(0x5fd485u, 0x5fd480u); LOADALL;
  /* 005fd485 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd488 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd48a jne 0x5fd494 */ if (!ZF_) goto L_005fd494;
  /* 005fd48c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd48d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd48e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd48f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd490 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd493 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd494:;
  /* 005fd494 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 005fd498 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd49a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd49b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd49c call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd4a1u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd49cu); RETCHK(0x5fd4a1u, 0x5fd49cu); LOADALL;
  /* 005fd4a1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd4a4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd4a6 jne 0x5fd4b0 */ if (!ZF_) goto L_005fd4b0;
  /* 005fd4a8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd4a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd4aa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd4ab pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd4ac add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd4af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd4b0:;
  /* 005fd4b0 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fd4b4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd4b6 jle 0x5fd5c0 */ if ((ZF_|LT_)) goto L_005fd5c0;
  /* 005fd4bc mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fd4bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd4c1 jne 0x5fd4d8 */ if (!ZF_) goto L_005fd4d8;
  /* 005fd4c3 push 0x301b1 */ { u32 v_ = 0x301b1u; esp -= 4; M32(esp) = v_; }
  /* 005fd4c8 push 0x90 */ { u32 v_ = 0x90u; esp -= 4; M32(esp) = v_; }
  /* 005fd4cd call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fd4d2u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fd4cdu); RETCHK(0x5fd4d2u, 0x5fd4cdu); LOADALL;
  /* 005fd4d2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd4d5 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
L_005fd4d8:;
  /* 005fd4d8 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fd4db test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd4dd je 0x5fd4f6 */ if (ZF_) goto L_005fd4f6;
  /* 005fd4df mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fd4e3 push 0x301b1 */ { u32 v_ = 0x301b1u; esp -= 4; M32(esp) = v_; }
  /* 005fd4e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd4e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd4ea call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fd4efu; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fd4eau); RETCHK(0x5fd4efu, 0x5fd4eau); LOADALL;
  /* 005fd4ef add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd4f2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd4f4 jne 0x5fd500 */ if (!ZF_) goto L_005fd500;
L_005fd4f6:;
  /* 005fd4f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd4f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd4f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd4f9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd4fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd4fc add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd4ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd500:;
  /* 005fd500 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fd504 lea ecx, [ecx + ecx*8] */ ecx = (u32)((u32)(ecx + ecx * 8u));
  /* 005fd507 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fd50a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fd50c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd50e mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005fd512 je 0x5fd5c0 */ if (ZF_) goto L_005fd5c0;
  /* 005fd518 lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
L_005fd51b:;
  /* 005fd51b lea edx, [esi - 4] */ edx = (u32)((u32)(esi + 0xfffffffcu));
  /* 005fd51e lea ebx, [esi + 4] */ ebx = (u32)((u32)(esi + 0x4u));
  /* 005fd521 lea ebp, [esi + 0xc] */ ebp = (u32)((u32)(esi + 0xcu));
  /* 005fd524 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 005fd529 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd52c mov edi, ebp */ { edi = (u32)(ebp); }
  /* 005fd52e mov dword ptr [edx], 0xffffffff */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0xffffffffu); }
  /* 005fd534 mov dword ptr [esi], 0xffffffff */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xffffffffu); }
  /* 005fd53a mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
  /* 005fd540 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005fd547 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005fd549 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 005fd54d mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fd551 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd553 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd554 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd555 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 005fd559 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd55eu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd559u); RETCHK(0x5fd55eu, 0x5fd559u); LOADALL;
  /* 005fd55e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd561 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd563 je 0x5fd4f6 */ if (ZF_) goto L_005fd4f6;
  /* 005fd565 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd567 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd568 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd569 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd56eu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd569u); RETCHK(0x5fd56eu, 0x5fd569u); LOADALL;
  /* 005fd56e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd571 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd573 je 0x5fd4f6 */ if (ZF_) goto L_005fd4f6;
  /* 005fd575 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd577 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd578 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd579 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd57eu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd579u); RETCHK(0x5fd57eu, 0x5fd579u); LOADALL;
  /* 005fd57e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd581 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd583 je 0x5fd4f6 */ if (ZF_) goto L_005fd4f6;
  /* 005fd589 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005fd58d lea edx, [ecx*4] */ edx = (u32)((u32)(ecx * 4u));
  /* 005fd594 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd595 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd596 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd597 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd59cu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd597u); RETCHK(0x5fd59cu, 0x5fd597u); LOADALL;
  /* 005fd59c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd59f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd5a1 je 0x5fd4f6 */ if (ZF_) goto L_005fd4f6;
  /* 005fd5a7 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fd5ab add esi, 0x90 */ { u32 a_ = esi, b_ = 0x90u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fd5b1 lea eax, [esi - 4] */ eax = (u32)((u32)(esi + 0xfffffffcu));
  /* 005fd5b4 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd5b6 jne 0x5fd51b */ if (!ZF_) goto L_005fd51b;
  /* 005fd5bc mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
L_005fd5c0:;
  /* 005fd5c0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005fd5c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd5c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd5c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd5c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd5c6 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd5c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd5d0(CPU *c) {
  NATIVE_HOOK(0x5fd5d0u) REGS; LOADALL;
L_005fd5d0:;
  /* 005fd5d0 push 0x301b1 */ { u32 v_ = 0x301b1u; esp -= 4; M32(esp) = v_; }
  /* 005fd5d5 push 0x90 */ { u32 v_ = 0x90u; esp -= 4; M32(esp) = v_; }
  /* 005fd5da call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fd5dfu; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fd5dau); RETCHK(0x5fd5dfu, 0x5fd5dau); LOADALL;
  /* 005fd5df mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fd5e3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd5e6 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 005fd5e9 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fd5eb sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fd5ed and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd5ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd5f0(CPU *c) {
  NATIVE_HOOK(0x5fd5f0u) REGS; LOADALL;
L_005fd5f0:;
  /* 005fd5f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd5f1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fd5f5 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fd5f8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd5fa je 0x5fd60c */ if (ZF_) goto L_005fd60c;
  /* 005fd5fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd5fd call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fd602u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fd5fdu); RETCHK(0x5fd602u, 0x5fd5fdu); LOADALL;
  /* 005fd602 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd605 mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
L_005fd60c:;
  /* 005fd60c mov eax, esi */ { eax = (u32)(esi); }
  /* 005fd60e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd60f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd610(CPU *c) {
  NATIVE_HOOK(0x5fd610u) REGS; LOADALL;
L_005fd610:;
  /* 005fd610 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fd614 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fd617 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fd61b jmp 0x5bdca0 */ SAVEALL; F_005bdca0(c); return;
}

void F_005fd620(CPU *c) {
  NATIVE_HOOK(0x5fd620u) REGS; LOADALL;
L_005fd620:;
  /* 005fd620 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fd624 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fd626 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005fd62b mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005fd62d mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fd630 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fd633 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005fd636 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005fd639 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 005fd63c mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005fd63f mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005fd642 mov dword ptr [eax + 0x20], 0x10 */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(0x10u); }
  /* 005fd649 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005fd64c mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fd64f mov dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(edx); }
  /* 005fd652 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005fd655 mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 005fd658 mov dword ptr [eax + 0x38], edx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(edx); }
  /* 005fd65b mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 005fd65e mov dword ptr [eax + 0x40], 0x400 */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(0x400u); }
  /* 005fd665 mov dword ptr [eax + 0x44], edx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(edx); }
  /* 005fd668 mov dword ptr [eax + 0x48], ecx */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(ecx); }
  /* 005fd66b mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 005fd66e mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 005fd671 mov dword ptr [eax + 0x54], edx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(edx); }
  /* 005fd674 mov dword ptr [eax + 0x58], ecx */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(ecx); }
  /* 005fd677 mov dword ptr [eax + 0x5c], ecx */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(ecx); }
  /* 005fd67a mov dword ptr [eax + 0x60], ecx */ { const u32 m_ = (u32)(eax + 0x60u); M32(m_) = (u32)(ecx); }
  /* 005fd67d mov dword ptr [eax + 0x64], ecx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ecx); }
  /* 005fd680 mov dword ptr [eax + 0x68], ecx */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(ecx); }
  /* 005fd683 mov dword ptr [eax + 0x6c], edx */ { const u32 m_ = (u32)(eax + 0x6cu); M32(m_) = (u32)(edx); }
  /* 005fd686 mov dword ptr [eax + 0x70], 0xa00 */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(0xa00u); }
  /* 005fd68d mov dword ptr [eax + 0x74], ecx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(ecx); }
  /* 005fd690 mov dword ptr [eax + 0x78], edx */ { const u32 m_ = (u32)(eax + 0x78u); M32(m_) = (u32)(edx); }
  /* 005fd693 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 005fd696 mov dword ptr [eax + 0x80], 0x20 */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(0x20u); }
  /* 005fd6a0 mov dword ptr [eax + 0x84], edx */ { const u32 m_ = (u32)(eax + 0x84u); M32(m_) = (u32)(edx); }
  /* 005fd6a6 mov dword ptr [eax + 0x88], ecx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(ecx); }
  /* 005fd6ac mov dword ptr [eax + 0x8c], ecx */ { const u32 m_ = (u32)(eax + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 005fd6b2 mov dword ptr [eax + 0x90], ecx */ { const u32 m_ = (u32)(eax + 0x90u); M32(m_) = (u32)(ecx); }
  /* 005fd6b8 mov dword ptr [eax + 0x94], ecx */ { const u32 m_ = (u32)(eax + 0x94u); M32(m_) = (u32)(ecx); }
  /* 005fd6be mov dword ptr [eax + 0x98], ecx */ { const u32 m_ = (u32)(eax + 0x98u); M32(m_) = (u32)(ecx); }
  /* 005fd6c4 mov dword ptr [eax + 0x9c], edx */ { const u32 m_ = (u32)(eax + 0x9cu); M32(m_) = (u32)(edx); }
  /* 005fd6ca mov dword ptr [eax + 0xa0], ecx */ { const u32 m_ = (u32)(eax + 0xa0u); M32(m_) = (u32)(ecx); }
  /* 005fd6d0 mov dword ptr [eax + 0xa4], ecx */ { const u32 m_ = (u32)(eax + 0xa4u); M32(m_) = (u32)(ecx); }
  /* 005fd6d6 mov dword ptr [eax + 0xa8], ecx */ { const u32 m_ = (u32)(eax + 0xa8u); M32(m_) = (u32)(ecx); }
  /* 005fd6dc mov dword ptr [eax + 0xac], edx */ { const u32 m_ = (u32)(eax + 0xacu); M32(m_) = (u32)(edx); }
  /* 005fd6e2 mov dword ptr [eax + 0xb0], 0x40 */ { const u32 m_ = (u32)(eax + 0xb0u); M32(m_) = (u32)(0x40u); }
  /* 005fd6ec mov dword ptr [eax + 0xb4], ecx */ { const u32 m_ = (u32)(eax + 0xb4u); M32(m_) = (u32)(ecx); }
  /* 005fd6f2 mov dword ptr [eax + 0xb8], edx */ { const u32 m_ = (u32)(eax + 0xb8u); M32(m_) = (u32)(edx); }
  /* 005fd6f8 mov dword ptr [eax + 0xbc], ecx */ { const u32 m_ = (u32)(eax + 0xbcu); M32(m_) = (u32)(ecx); }
  /* 005fd6fe mov dword ptr [eax + 0xc0], ecx */ { const u32 m_ = (u32)(eax + 0xc0u); M32(m_) = (u32)(ecx); }
  /* 005fd704 mov dword ptr [eax + 0xc4], edx */ { const u32 m_ = (u32)(eax + 0xc4u); M32(m_) = (u32)(edx); }
  /* 005fd70a mov dword ptr [eax + 0xc8], ecx */ { const u32 m_ = (u32)(eax + 0xc8u); M32(m_) = (u32)(ecx); }
  /* 005fd710 mov dword ptr [eax + 0xcc], ecx */ { const u32 m_ = (u32)(eax + 0xccu); M32(m_) = (u32)(ecx); }
  /* 005fd716 mov dword ptr [eax + 0xd0], 0x1100 */ { const u32 m_ = (u32)(eax + 0xd0u); M32(m_) = (u32)(0x1100u); }
  /* 005fd720 mov dword ptr [eax + 0xd4], edx */ { const u32 m_ = (u32)(eax + 0xd4u); M32(m_) = (u32)(edx); }
  /* 005fd726 mov dword ptr [eax + 0xd8], ecx */ { const u32 m_ = (u32)(eax + 0xd8u); M32(m_) = (u32)(ecx); }
  /* 005fd72c mov dword ptr [eax + 0xdc], ecx */ { const u32 m_ = (u32)(eax + 0xdcu); M32(m_) = (u32)(ecx); }
  /* 005fd732 mov dword ptr [eax + 0xe0], 0x80 */ { const u32 m_ = (u32)(eax + 0xe0u); M32(m_) = (u32)(0x80u); }
  /* 005fd73c mov dword ptr [eax + 0xe4], ecx */ { const u32 m_ = (u32)(eax + 0xe4u); M32(m_) = (u32)(ecx); }
  /* 005fd742 mov dword ptr [eax + 0xe8], ecx */ { const u32 m_ = (u32)(eax + 0xe8u); M32(m_) = (u32)(ecx); }
  /* 005fd748 mov dword ptr [eax + 0xec], edx */ { const u32 m_ = (u32)(eax + 0xecu); M32(m_) = (u32)(edx); }
  /* 005fd74e mov dword ptr [eax + 0xf0], ecx */ { const u32 m_ = (u32)(eax + 0xf0u); M32(m_) = (u32)(ecx); }
  /* 005fd754 mov dword ptr [eax + 0xf4], ecx */ { const u32 m_ = (u32)(eax + 0xf4u); M32(m_) = (u32)(ecx); }
  /* 005fd75a mov dword ptr [eax + 0xf8], edx */ { const u32 m_ = (u32)(eax + 0xf8u); M32(m_) = (u32)(edx); }
  /* 005fd760 mov dword ptr [eax + 0xfc], ecx */ { const u32 m_ = (u32)(eax + 0xfcu); M32(m_) = (u32)(ecx); }
  /* 005fd766 add eax, 0x1e0 */ { u32 a_ = eax, b_ = 0x1e0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fd76b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd770(CPU *c) {
  NATIVE_HOOK(0x5fd770u) REGS; LOADALL;
L_005fd770:;
  /* 005fd770 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd771 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd772 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd773 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005fd777 test byte ptr [edi + 8], 1 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd77b je 0x5fd7ec */ if (ZF_) goto L_005fd7ec;
  /* 005fd77d mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fd780 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fd784 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd785 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd786 call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fd78bu; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fd786u); RETCHK(0x5fd78bu, 0x5fd786u); LOADALL;
  /* 005fd78b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fd78d mov al, byte ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fd790 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd793 mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 005fd798 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd79a je 0x5fd7b5 */ if (ZF_) goto L_005fd7b5;
  /* 005fd79c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd79d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd79e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd79f call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fd7a4u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fd79fu); RETCHK(0x5fd7a4u, 0x5fd79fu); LOADALL;
  /* 005fd7a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd7a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd7a8 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fd7adu; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fd7a8u); RETCHK(0x5fd7adu, 0x5fd7a8u); LOADALL;
  /* 005fd7ad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd7b0 mov esi, 2 */ { esi = (u32)(0x2u); }
L_005fd7b5:;
  /* 005fd7b5 test byte ptr [edi + 8], 4 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd7b9 je 0x5fd7d1 */ if (ZF_) goto L_005fd7d1;
  /* 005fd7bb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fd7bd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd7be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd7bf call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fd7c4u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fd7bfu); RETCHK(0x5fd7c4u, 0x5fd7bfu); LOADALL;
  /* 005fd7c4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd7c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd7c8 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fd7cdu; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fd7c8u); RETCHK(0x5fd7cdu, 0x5fd7c8u); LOADALL;
  /* 005fd7cd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd7d0 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_005fd7d1:;
  /* 005fd7d1 test byte ptr [edi + 8], 8 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd7d5 je 0x5fd7ec */ if (ZF_) goto L_005fd7ec;
  /* 005fd7d7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fd7d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd7da push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd7db call 0x5736e0 */ esp -= 4; M32(esp) = 0x5fd7e0u; SAVEALL; F_005736e0(c); ABI_CHECK(0x5736e0u, 0x5fd7dbu); RETCHK(0x5fd7e0u, 0x5fd7dbu); LOADALL;
  /* 005fd7e0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd7e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd7e4 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fd7e9u; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fd7e4u); RETCHK(0x5fd7e9u, 0x5fd7e4u); LOADALL;
  /* 005fd7e9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fd7ec:;
  /* 005fd7ec mov eax, edi */ { eax = (u32)(edi); }
  /* 005fd7ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd7ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd7f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd7f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd800(CPU *c) {
  NATIVE_HOOK(0x5fd800u) REGS; LOADALL;
L_005fd800:;
  /* 005fd800 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd801 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fd805 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd806 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005fd80a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd80c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd80d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd80e call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd813u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd80eu); RETCHK(0x5fd813u, 0x5fd80eu); LOADALL;
  /* 005fd813 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd816 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd818 jne 0x5fd81d */ if (!ZF_) goto L_005fd81d;
  /* 005fd81a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd81b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd81c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd81d:;
  /* 005fd81d lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005fd820 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd822 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd823 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd824 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd829u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd824u); RETCHK(0x5fd829u, 0x5fd824u); LOADALL;
  /* 005fd829 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd82c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd82e jne 0x5fd833 */ if (!ZF_) goto L_005fd833;
  /* 005fd830 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd831 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd832 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd833:;
  /* 005fd833 lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 005fd837 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd839 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd83a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd83b call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd840u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd83bu); RETCHK(0x5fd840u, 0x5fd83bu); LOADALL;
  /* 005fd840 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd843 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd845 jne 0x5fd84a */ if (!ZF_) goto L_005fd84a;
  /* 005fd847 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd848 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd849 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd84a:;
  /* 005fd84a mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fd84e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd850 jle 0x5fd8ac */ if ((ZF_|LT_)) goto L_005fd8ac;
  /* 005fd852 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fd855 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd857 jne 0x5fd86b */ if (!ZF_) goto L_005fd86b;
  /* 005fd859 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fd85e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd860 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fd865u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fd860u); RETCHK(0x5fd865u, 0x5fd860u); LOADALL;
  /* 005fd865 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd868 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_005fd86b:;
  /* 005fd86b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fd86e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd870 jne 0x5fd875 */ if (!ZF_) goto L_005fd875;
  /* 005fd872 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd873 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd874 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd875:;
  /* 005fd875 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fd879 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fd87e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd87f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd880 call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fd885u; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fd880u); RETCHK(0x5fd885u, 0x5fd880u); LOADALL;
  /* 005fd885 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd888 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd88a jne 0x5fd88f */ if (!ZF_) goto L_005fd88f;
  /* 005fd88c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd88d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd88e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd88f:;
  /* 005fd88f mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fd893 lea edx, [ecx*4] */ edx = (u32)((u32)(ecx * 4u));
  /* 005fd89a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd89b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd89c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd89d call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd8a2u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd89du); RETCHK(0x5fd8a2u, 0x5fd89du); LOADALL;
  /* 005fd8a2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd8a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd8a7 jne 0x5fd8ac */ if (!ZF_) goto L_005fd8ac;
  /* 005fd8a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd8aa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd8ab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd8ac:;
  /* 005fd8ac lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 005fd8af push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd8b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd8b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd8b3 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd8b8u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd8b3u); RETCHK(0x5fd8b8u, 0x5fd8b3u); LOADALL;
  /* 005fd8b8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd8bb neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fd8bd sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fd8bf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd8c0 and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd8c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd8c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd8d0(CPU *c) {
  NATIVE_HOOK(0x5fd8d0u) REGS; LOADALL;
L_005fd8d0:;
  /* 005fd8d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fd8d1 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fd8d5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fd8d6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fd8d7 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fd8d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd8da cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd8dc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd8dd jne 0x5fd951 */ if (!ZF_) goto L_005fd951;
  /* 005fd8df mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fd8e4 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fd8e9 push 0x9c01c4 */ { u32 v_ = 0x9c01c4u; esp -= 4; M32(esp) = v_; }
  /* 005fd8ee call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fd8f4u; SAVEALL; call_ind(c, t_); RETCHK(0x5fd8f4u, 0x5fd8eeu); LOADALL; }
  /* 005fd8f4 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fd8f6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd8f9 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd8fb je 0x5fd93d */ if (ZF_) goto L_005fd93d;
  /* 005fd8fd push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fd902 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fd904 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fd909u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fd904u); RETCHK(0x5fd909u, 0x5fd904u); LOADALL;
  /* 005fd909 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd90c cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd90e mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fd910 je 0x5fd91b */ if (ZF_) goto L_005fd91b;
  /* 005fd912 mov dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x1u); }
  /* 005fd919 jmp 0x5fd935 */ goto L_005fd935;
L_005fd91b:;
  /* 005fd91b mov dword ptr [esi + 4], ebp */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebp); }
  /* 005fd91e mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005fd924 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd925 push 0x9c01c4 */ { u32 v_ = 0x9c01c4u; esp -= 4; M32(esp) = v_; }
  /* 005fd92a call dword ptr [ecx + 0x11c] */ { const u32 m_ = (u32)(ecx + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fd930u; SAVEALL; call_ind(c, t_); RETCHK(0x5fd930u, 0x5fd92au); LOADALL; }
  /* 005fd930 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd933 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_005fd935:;
  /* 005fd935 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd937 mov dword ptr [esp + 0x1c], esi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(esi); }
  /* 005fd93b jne 0x5fd945 */ if (!ZF_) goto L_005fd945;
L_005fd93d:;
  /* 005fd93d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd93e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd93f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd940 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd942 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd943 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fd944 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd945:;
  /* 005fd945 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fd948 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fd94a je 0x5fd951 */ if (ZF_) goto L_005fd951;
  /* 005fd94c and al, 0xfe */ { u32 a_ = (eax & 0xffu), b_ = 0xfeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fd94e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_005fd951:;
  /* 005fd951 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fd955 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 005fd959 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd95b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd95c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd95d call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5fd962u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5fd95du); RETCHK(0x5fd962u, 0x5fd95du); LOADALL;
  /* 005fd962 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd965 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd967 jne 0x5fd96f */ if (!ZF_) goto L_005fd96f;
  /* 005fd969 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd96a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd96b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd96c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd96d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fd96e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd96f:;
  /* 005fd96f mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fd973 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd975 jle 0x5fd9dd */ if ((ZF_|LT_)) goto L_005fd9dd;
  /* 005fd977 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fd97b push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fd980 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd981 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005fd983 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fd984 call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fd989u; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fd984u); RETCHK(0x5fd989u, 0x5fd984u); LOADALL;
  /* 005fd989 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fd98b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd98e cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd990 jne 0x5fd99a */ if (!ZF_) goto L_005fd99a;
L_005fd992:;
  /* 005fd992 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd993 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd994 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd995 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fd997 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd998 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fd999 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd99a:;
  /* 005fd99a cmp dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd99e jle 0x5fd9dd */ if ((ZF_|LT_)) goto L_005fd9dd;
  /* 005fd9a0 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005fd9a4 or ebx, 0xffffffff */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_005fd9a7:;
  /* 005fd9a7 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fd9ac push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fd9ae mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 005fd9b0 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 005fd9b3 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 005fd9b6 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fd9bbu; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fd9b6u); RETCHK(0x5fd9bbu, 0x5fd9b6u); LOADALL;
  /* 005fd9bb mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005fd9be mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005fd9c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd9c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fd9c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fd9c5 call 0x5fd800 */ esp -= 4; M32(esp) = 0x5fd9cau; SAVEALL; F_005fd800(c); ABI_CHECK(0x5fd800u, 0x5fd9c5u); RETCHK(0x5fd9cau, 0x5fd9c5u); LOADALL;
  /* 005fd9ca add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fd9cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd9cf je 0x5fd992 */ if (ZF_) goto L_005fd992;
  /* 005fd9d1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fd9d5 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fd9d8 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fd9d9 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fd9db jl 0x5fd9a7 */ if (LT_) goto L_005fd9a7;
L_005fd9dd:;
  /* 005fd9dd mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005fd9e1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fd9e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fd9e3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fd9e4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fd9e5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fd9e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fd9f0(CPU *c) {
  NATIVE_HOOK(0x5fd9f0u) REGS; LOADALL;
L_005fd9f0:;
  /* 005fd9f0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fd9f4 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fd9f6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fd9f8 jne 0x5fd9fb */ if (!ZF_) goto L_005fd9fb;
  /* 005fd9fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fd9fb:;
  /* 005fd9fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fd9fc call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fda01u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fd9fcu); RETCHK(0x5fda01u, 0x5fd9fcu); LOADALL;
  /* 005fda01 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fda05 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fda08 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fda0b add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fda0d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fda10(CPU *c) {
  NATIVE_HOOK(0x5fda10u) REGS; LOADALL;
L_005fda10:;
  /* 005fda10 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fda15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fda16 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fda1b push 0x9c01c4 */ { u32 v_ = 0x9c01c4u; esp -= 4; M32(esp) = v_; }
  /* 005fda20 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fda26u; SAVEALL; call_ind(c, t_); RETCHK(0x5fda26u, 0x5fda20u); LOADALL; }
  /* 005fda26 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fda28 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fda2b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fda2d jne 0x5fda31 */ if (!ZF_) goto L_005fda31;
  /* 005fda2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fda30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fda31:;
  /* 005fda31 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fda36 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fda38 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fda3du; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fda38u); RETCHK(0x5fda3du, 0x5fda38u); LOADALL;
  /* 005fda3d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fda40 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fda42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fda44 je 0x5fda51 */ if (ZF_) goto L_005fda51;
  /* 005fda46 mov dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x1u); }
  /* 005fda4d mov eax, esi */ { eax = (u32)(esi); }
  /* 005fda4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fda50 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fda51:;
  /* 005fda51 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005fda58 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005fda5e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fda5f push 0x9c01c4 */ { u32 v_ = 0x9c01c4u; esp -= 4; M32(esp) = v_; }
  /* 005fda64 call dword ptr [ecx + 0x11c] */ { const u32 m_ = (u32)(ecx + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fda6au; SAVEALL; call_ind(c, t_); RETCHK(0x5fda6au, 0x5fda64u); LOADALL; }
  /* 005fda6a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fda6d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005fda6f mov eax, esi */ { eax = (u32)(esi); }
  /* 005fda71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fda72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fda80(CPU *c) {
  NATIVE_HOOK(0x5fda80u) REGS; LOADALL;
L_005fda80:;
  /* 005fda80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fda81 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 005fda85 mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005fda88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fda8a je 0x5fdaef */ if (ZF_) goto L_005fdaef;
  /* 005fda8c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fda8d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fda8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fda8f call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fda94u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fda8fu); RETCHK(0x5fda94u, 0x5fda8fu); LOADALL;
  /* 005fda94 mov edi, eax */ { edi = (u32)(eax); }
  /* 005fda96 mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005fda99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fda9a call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fda9fu; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fda9au); RETCHK(0x5fda9fu, 0x5fda9au); LOADALL;
  /* 005fda9f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdaa2 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fdaa4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdaa6 jle 0x5fdada */ if ((ZF_|LT_)) goto L_005fdada;
  /* 005fdaa8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdaaa je 0x5fdada */ if (ZF_) goto L_005fdada;
  /* 005fdaac test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdaae jle 0x5fdada */ if ((ZF_|LT_)) goto L_005fdada;
  /* 005fdab0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fdab1 or ebx, 0xffffffff */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_005fdab4:;
  /* 005fdab4 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fdab7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdab9 je 0x5fdac4 */ if (ZF_) goto L_005fdac4;
  /* 005fdabb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdabc call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fdac1u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fdabcu); RETCHK(0x5fdac1u, 0x5fdabcu); LOADALL;
  /* 005fdac1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fdac4:;
  /* 005fdac4 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005fdacb mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 005fdacd mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 005fdad0 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 005fdad3 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fdad6 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fdad7 jne 0x5fdab4 */ if (!ZF_) goto L_005fdab4;
  /* 005fdad9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005fdada:;
  /* 005fdada mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 005fdadd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fdade call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fdae3u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fdadeu); RETCHK(0x5fdae3u, 0x5fdadeu); LOADALL;
  /* 005fdae3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdae6 mov dword ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(0x0u); }
  /* 005fdaed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fdaee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005fdaef:;
  /* 005fdaef mov dword ptr [ebp + 4], 0 */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005fdaf6 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005fdafc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdafd push 0x9c01c4 */ { u32 v_ = 0x9c01c4u; esp -= 4; M32(esp) = v_; }
  /* 005fdb02 call dword ptr [edx + 0x11c] */ { const u32 m_ = (u32)(edx + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fdb08u; SAVEALL; call_ind(c, t_); RETCHK(0x5fdb08u, 0x5fdb02u); LOADALL; }
  /* 005fdb08 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdb0b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005fdb10 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fdb11 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fdb20(CPU *c) {
  NATIVE_HOOK(0x5fdb20u) REGS; LOADALL;
L_005fdb20:;
  /* 005fdb20 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fdb24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fdb25 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fdb29 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdb2a mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005fdb2c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fdb2d call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fdb32u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fdb2du); RETCHK(0x5fdb32u, 0x5fdb2du); LOADALL;
  /* 005fdb32 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdb35 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdb37 jne 0x5fdb3b */ if (!ZF_) goto L_005fdb3b;
  /* 005fdb39 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fdb3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fdb3b:;
  /* 005fdb3b mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005fdb3f mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fdb42 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fdb43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdb44 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fdb49u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fdb44u); RETCHK(0x5fdb49u, 0x5fdb44u); LOADALL;
  /* 005fdb49 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdb4c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdb4e jne 0x5fdb52 */ if (!ZF_) goto L_005fdb52;
  /* 005fdb50 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fdb51 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fdb52:;
  /* 005fdb52 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fdb56 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fdb58 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fdb59 mov eax, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fdb5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdb5d call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fdb62u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fdb5du); RETCHK(0x5fdb62u, 0x5fdb5du); LOADALL;
  /* 005fdb62 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdb65 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdb67 jne 0x5fdb6b */ if (!ZF_) goto L_005fdb6b;
  /* 005fdb69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fdb6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fdb6b:;
  /* 005fdb6b mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005fdb6f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fdb71 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fdb73 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fdb74 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fdb76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fdb80(CPU *c) {
  NATIVE_HOOK(0x5fdb80u) REGS; LOADALL;
L_005fdb80:;
  /* 005fdb80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fdb81 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdb82 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fdb83 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fdb84 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fdb89 push 0x9c */ { u32 v_ = 0x9cu; esp -= 4; M32(esp) = v_; }
  /* 005fdb8e call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fdb93u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fdb8eu); RETCHK(0x5fdb93u, 0x5fdb8eu); LOADALL;
  /* 005fdb93 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005fdb97 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fdb99 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fdb9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdb9d call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fdba2u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fdb9du); RETCHK(0x5fdba2u, 0x5fdb9du); LOADALL;
  /* 005fdba2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdba5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdba7 je 0x5fdc15 */ if (ZF_) goto L_005fdc15;
  /* 005fdba9 mov ecx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fdbac push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fdbb1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fdbb2 call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fdbb7u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fdbb2u); RETCHK(0x5fdbb7u, 0x5fdbb2u); LOADALL;
  /* 005fdbb7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdbba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdbbb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fdbbc call 0x5bdb00 */ esp -= 4; M32(esp) = 0x5fdbc1u; SAVEALL; F_005bdb00(c); ABI_CHECK(0x5bdb00u, 0x5fdbbcu); RETCHK(0x5fdbc1u, 0x5fdbbcu); LOADALL;
  /* 005fdbc1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fdbc2 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fdbc7u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fdbc2u); RETCHK(0x5fdbc7u, 0x5fdbc2u); LOADALL;
  /* 005fdbc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fdbc8 mov edi, eax */ { edi = (u32)(eax); }
  /* 005fdbca call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fdbcfu; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fdbcau); RETCHK(0x5fdbcfu, 0x5fdbcau); LOADALL;
  /* 005fdbcf lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 005fdbd2 shl edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005fdbd5 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005fdbd7 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fdbda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdbdb lea esi, [edi + edx*4] */ esi = (u32)((u32)(edi + edx * 4u));
  /* 005fdbde call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fdbe3u; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fdbdeu); RETCHK(0x5fdbe3u, 0x5fdbdeu); LOADALL;
  /* 005fdbe3 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdbe6 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdbe8 je 0x5fdc15 */ if (ZF_) goto L_005fdc15;
  /* 005fdbea lea ecx, [edi + 0x4c] */ ecx = (u32)((u32)(edi + 0x4cu));
  /* 005fdbed xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_005fdbef:;
  /* 005fdbef mov dword ptr [ecx - 0x4c], edx */ { const u32 m_ = (u32)(ecx + 0xffffffb4u); M32(m_) = (u32)(edx); }
  /* 005fdbf2 mov dword ptr [ecx - 0x44], edx */ { const u32 m_ = (u32)(ecx + 0xffffffbcu); M32(m_) = (u32)(edx); }
  /* 005fdbf5 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005fdbf7 mov dword ptr [ecx + 0x14], edx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(edx); }
  /* 005fdbfa mov dword ptr [ecx + 0x28], edx */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(edx); }
  /* 005fdbfd mov dword ptr [ecx + 0x3c], edx */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(edx); }
  /* 005fdc00 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005fdc02 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fdc05 mov dword ptr [ecx - 0x48], edi */ { const u32 m_ = (u32)(ecx + 0xffffffb8u); M32(m_) = (u32)(edi); }
  /* 005fdc08 add ecx, 0x9c */ { u32 a_ = ecx, b_ = 0x9cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fdc0e lea edi, [ecx - 0x4c] */ edi = (u32)((u32)(ecx + 0xffffffb4u));
  /* 005fdc11 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdc13 jne 0x5fdbef */ if (!ZF_) goto L_005fdbef;
L_005fdc15:;
  /* 005fdc15 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fdc16 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fdc17 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005fdc19 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fdc1a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fdc1b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fdc20(CPU *c) {
  NATIVE_HOOK(0x5fdc20u) REGS; LOADALL;
L_005fdc20:;
  /* 005fdc20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fdc21 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fdc25 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fdc27 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fdc28 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdc2a setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005fdc2d mov edi, eax */ { edi = (u32)(eax); }
  /* 005fdc2f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdc31 je 0x5fdc6c */ if (ZF_) goto L_005fdc6c;
  /* 005fdc33 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fdc36 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdc38 je 0x5fdc45 */ if (ZF_) goto L_005fdc45;
  /* 005fdc3a mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fdc3d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fdc3e call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fdc43u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fdc3eu); RETCHK(0x5fdc43u, 0x5fdc3eu); LOADALL;
  /* 005fdc43 jmp 0x5fdc54 */ goto L_005fdc54;
L_005fdc45:;
  /* 005fdc45 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fdc48 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fdc4d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fdc4e call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fdc54u; SAVEALL; call_ind(c, t_); RETCHK(0x5fdc54u, 0x5fdc4eu); LOADALL; }
L_005fdc54:;
  /* 005fdc54 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005fdc5a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdc5d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fdc5e push 0x9c017c */ { u32 v_ = 0x9c017cu; esp -= 4; M32(esp) = v_; }
  /* 005fdc63 call dword ptr [ecx + 0x11c] */ { const u32 m_ = (u32)(ecx + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fdc69u; SAVEALL; call_ind(c, t_); RETCHK(0x5fdc69u, 0x5fdc63u); LOADALL; }
  /* 005fdc69 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fdc6c:;
  /* 005fdc6c mov eax, edi */ { eax = (u32)(edi); }
  /* 005fdc6e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fdc6f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fdc70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fdc80(CPU *c) {
  NATIVE_HOOK(0x5fdc80u) REGS; LOADALL;
L_005fdc80:;
  /* 005fdc80 sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdc83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fdc84 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdc85 mov ebp, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); ebp = (u32)(M32(m_)); }
  /* 005fdc89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fdc8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fdc8b lea eax, [esp + 0x24] */ eax = (u32)((u32)(esp + 0x24u));
  /* 005fdc8f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005fdc91 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005fdc93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdc94 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdc95 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005fdc99 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fdc9eu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fdc99u); RETCHK(0x5fdc9eu, 0x5fdc99u); LOADALL;
  /* 005fdc9e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdca1 cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdca4 je 0x5fdcb0 */ if (ZF_) goto L_005fdcb0;
  /* 005fdca6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fdca7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fdca8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fdca9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fdcab pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fdcac add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdcaf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fdcb0:;
  /* 005fdcb0 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 005fdcb4 mov ecx, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); ecx = (u32)(M32(m_)); }
  /* 005fdcb8 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005fdcbc cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdcbe fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fdcc0 je 0x5fdeaa */ if (ZF_) goto L_005fdeaa;
  /* 005fdcc6 lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 005fdcc9 push 0x101a9 */ { u32 v_ = 0x101a9u; esp -= 4; M32(esp) = v_; }
  /* 005fdcce shl edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005fdcd1 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005fdcd3 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fdcd8 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005fdcdb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fdcdc call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fdce2u; SAVEALL; call_ind(c, t_); RETCHK(0x5fdce2u, 0x5fdcdcu); LOADALL; }
  /* 005fdce2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdce5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdce7 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005fdceb jne 0x5fdcf7 */ if (!ZF_) goto L_005fdcf7;
  /* 005fdced pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fdcee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fdcef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fdcf0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fdcf2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fdcf3 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdcf6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fdcf7:;
  /* 005fdcf7 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005fdcfb mov dword ptr [esp + 0x64], edi */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(edi); }
  /* 005fdcff cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdd01 jle 0x5fdeaa */ if ((ZF_|LT_)) goto L_005fdeaa;
  /* 005fdd07 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fdd0b mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 005fdd10 lea esi, [ecx + 0x58] */ esi = (u32)((u32)(ecx + 0x58u));
L_005fdd13:;
  /* 005fdd13 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 005fdd17 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005fdd19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fdd1a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdd1b call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fdd20u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fdd1bu); RETCHK(0x5fdd20u, 0x5fdd1bu); LOADALL;
  /* 005fdd20 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdd23 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdd26 jne 0x5fe020 */ if (!ZF_) goto L_005fe020;
  /* 005fdd2c mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fdd30 mov cl, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fdd34 mov dword ptr [esi - 0x54], eax */ { const u32 m_ = (u32)(esi + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 005fdd37 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fdd3a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fdd3c mov dword ptr [esi - 0x58], ebx */ { const u32 m_ = (u32)(esi + 0xffffffa8u); M32(m_) = (u32)(ebx); }
  /* 005fdd3f test bl, cl */ { u32 a_ = (ebx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fdd41 mov dword ptr [esi - 0x50], eax */ { const u32 m_ = (u32)(esi + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 005fdd44 mov dword ptr [esi - 0xc], eax */ { const u32 m_ = (u32)(esi + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 005fdd47 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005fdd4a mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005fdd4d mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 005fdd50 je 0x5fdd8d */ if (ZF_) goto L_005fdd8d;
  /* 005fdd52 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdd53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdd54 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 005fdd56 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdd57 call 0x5b3890 */ esp -= 4; M32(esp) = 0x5fdd5cu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5fdd57u); RETCHK(0x5fdd5cu, 0x5fdd57u); LOADALL;
  /* 005fdd5c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdd5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdd61 je 0x5fe03d */ if (ZF_) goto L_005fe03d;
  /* 005fdd67 lea ecx, [esi - 0x4c] */ ecx = (u32)((u32)(esi + 0xffffffb4u));
  /* 005fdd6a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fdd6b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdd6c call 0x5be6f0 */ esp -= 4; M32(esp) = 0x5fdd71u; SAVEALL; F_005be6f0(c); ABI_CHECK(0x5be6f0u, 0x5fdd6cu); RETCHK(0x5fdd71u, 0x5fdd6cu); LOADALL;
  /* 005fdd71 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdd74 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdd76 je 0x5fe03d */ if (ZF_) goto L_005fe03d;
  /* 005fdd7c lea edx, [esi - 0x4c] */ edx = (u32)((u32)(esi + 0xffffffb4u));
  /* 005fdd7f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdd81 je 0x5fe03d */ if (ZF_) goto L_005fe03d;
  /* 005fdd87 mov dword ptr [esi - 0x50], ebx */ { const u32 m_ = (u32)(esi + 0xffffffb0u); M32(m_) = (u32)(ebx); }
  /* 005fdd8a add edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005fdd8d:;
  /* 005fdd8d test byte ptr [esp + 0x14], 2 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fdd92 je 0x5fddce */ if (ZF_) goto L_005fddce;
  /* 005fdd94 lea eax, [esp + 0x30] */ eax = (u32)((u32)(esp + 0x30u));
  /* 005fdd98 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fdd9a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fdd9b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdd9c call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fdda1u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fdd9cu); RETCHK(0x5fdda1u, 0x5fdd9cu); LOADALL;
  /* 005fdda1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdda4 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdda7 jne 0x5fe05b */ if (!ZF_) goto L_005fe05b;
  /* 005fddad mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005fddb1 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 005fddb5 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 005fddb9 mov dword ptr [esi - 8], ecx */ { const u32 m_ = (u32)(esi + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 005fddbc mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005fddc0 mov dword ptr [esi - 4], edx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005fddc3 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fddc5 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fddc8 mov dword ptr [esi - 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 005fddcb add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005fddce:;
  /* 005fddce test byte ptr [esp + 0x14], 4 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fddd3 je 0x5fde10 */ if (ZF_) goto L_005fde10;
  /* 005fddd5 lea edx, [esp + 0x40] */ edx = (u32)((u32)(esp + 0x40u));
  /* 005fddd9 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fdddb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fdddc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fdddd call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fdde2u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fddddu); RETCHK(0x5fdde2u, 0x5fddddu); LOADALL;
  /* 005fdde2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdde5 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdde8 jne 0x5fe020 */ if (!ZF_) goto L_005fe020;
  /* 005fddee mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005fddf2 mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005fddf6 mov edx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); edx = (u32)(M32(m_)); }
  /* 005fddfa mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005fddfd mov eax, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005fde01 mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005fde04 mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 005fde07 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005fde0a mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005fde0d add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005fde10:;
  /* 005fde10 test byte ptr [esp + 0x14], 8 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fde15 je 0x5fde4b */ if (ZF_) goto L_005fde4b;
  /* 005fde17 lea ecx, [esp + 0x1c] */ ecx = (u32)((u32)(esp + 0x1cu));
  /* 005fde1b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005fde1d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fde1e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fde1f call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fde24u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fde1fu); RETCHK(0x5fde24u, 0x5fde1fu); LOADALL;
  /* 005fde24 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fde27 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fde2a jne 0x5fe03d */ if (!ZF_) goto L_005fe03d;
  /* 005fde30 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005fde34 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fde38 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fde3a mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 005fde3d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fde3f setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005fde42 mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 005fde45 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 005fde48 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005fde4b:;
  /* 005fde4b test byte ptr [esp + 0x14], 0x10 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fde50 je 0x5fde8f */ if (ZF_) goto L_005fde8f;
  /* 005fde52 lea ecx, [esp + 0x50] */ ecx = (u32)((u32)(esp + 0x50u));
  /* 005fde56 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fde58 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fde59 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fde5a call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5fde5fu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5fde5au); RETCHK(0x5fde5fu, 0x5fde5au); LOADALL;
  /* 005fde5f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fde62 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fde65 jne 0x5fe05b */ if (!ZF_) goto L_005fe05b;
  /* 005fde6b mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 005fde6f mov ecx, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); ecx = (u32)(M32(m_)); }
  /* 005fde73 lea edx, [esi + 0x34] */ edx = (u32)((u32)(esi + 0x34u));
  /* 005fde76 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fde79 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 005fde7b mov eax, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (u32)(M32(m_)); }
  /* 005fde7f mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fde82 mov ecx, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005fde86 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005fde89 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005fde8c mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
L_005fde8f:;
  /* 005fde8f mov eax, dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); eax = (u32)(M32(m_)); }
  /* 005fde93 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005fde97 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fde98 add esi, 0x9c */ { u32 a_ = esi, b_ = 0x9cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fde9e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdea0 mov dword ptr [esp + 0x64], eax */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(eax); }
  /* 005fdea4 jl 0x5fdd13 */ if (LT_) goto L_005fdd13;
L_005fdeaa:;
  /* 005fdeaa mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005fdeb0 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fdeb3 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fdeb8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fdeb9 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fdebfu; SAVEALL; call_ind(c, t_); RETCHK(0x5fdebfu, 0x5fdeb9u); LOADALL; }
  /* 005fdebf mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005fdec3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fdec6 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fdec8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005fdeca test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdecc jle 0x5fdfea */ if ((ZF_|LT_)) goto L_005fdfea;
  /* 005fded2 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fded6 lea edx, [ecx + 8] */ edx = (u32)((u32)(ecx + 0x8u));
L_005fded9:;
  /* 005fded9 mov ecx, dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 005fdedc mov esi, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); esi = (u32)(M32(m_)); }
  /* 005fdee2 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fdee4 sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 005fdee6 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005fdee8 and ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fdeeb mov dword ptr [esp + 0x64], eax */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(eax); }
  /* 005fdeef neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fdef1 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 005fdef3 and esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005fdef6 or ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fdef8 mov esi, dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); esi = (u32)(M32(m_)); }
  /* 005fdefb neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fdefd sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 005fdeff and esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005fdf02 or ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fdf04 mov esi, dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); esi = (u32)(M32(m_)); }
  /* 005fdf07 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fdf09 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 005fdf0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fdf0d and esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005fdf10 or ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fdf12 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdf14 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005fdf17 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fdf19 mov dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ecx); }
  /* 005fdf1b mov ecx, dword ptr [edx - 4] */ { const u32 m_ = (u32)(edx + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005fdf1e mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fdf21 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005fdf23 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fdf26 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdf28 mov eax, dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); eax = (u32)(M32(m_)); }
  /* 005fdf2c je 0x5fdf3d */ if (ZF_) goto L_005fdf3d;
  /* 005fdf2e lea esi, [edx + 4] */ esi = (u32)((u32)(edx + 0x4u));
  /* 005fdf31 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 005fdf36 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005fdf38 add ebx, 0x40 */ { u32 a_ = ebx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fdf3b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_005fdf3d:;
  /* 005fdf3d mov ecx, dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005fdf40 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdf42 je 0x5fdf62 */ if (ZF_) goto L_005fdf62;
  /* 005fdf44 lea ecx, [edx + 0x48] */ ecx = (u32)((u32)(edx + 0x48u));
  /* 005fdf47 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005fdf49 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fdf4c mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 005fdf4e mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fdf50 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005fdf53 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fdf56 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fdf59 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fdf5c mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fdf5f mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
L_005fdf62:;
  /* 005fdf62 mov ecx, dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); ecx = (u32)(M32(m_)); }
  /* 005fdf65 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdf67 je 0x5fdf87 */ if (ZF_) goto L_005fdf87;
  /* 005fdf69 lea ecx, [edx + 0x5c] */ ecx = (u32)((u32)(edx + 0x5cu));
  /* 005fdf6c mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005fdf6e add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fdf71 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 005fdf73 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fdf75 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005fdf78 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fdf7b mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fdf7e mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fdf81 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fdf84 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
L_005fdf87:;
  /* 005fdf87 mov ecx, dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 005fdf8a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdf8c je 0x5fdfac */ if (ZF_) goto L_005fdfac;
  /* 005fdf8e lea ecx, [edx + 0x70] */ ecx = (u32)((u32)(edx + 0x70u));
  /* 005fdf91 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005fdf93 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fdf96 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 005fdf98 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fdf9a mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005fdf9d mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fdfa0 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fdfa3 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fdfa6 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fdfa9 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
L_005fdfac:;
  /* 005fdfac mov ecx, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); ecx = (u32)(M32(m_)); }
  /* 005fdfb2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdfb4 je 0x5fdfd7 */ if (ZF_) goto L_005fdfd7;
  /* 005fdfb6 lea ecx, [edx + 0x84] */ ecx = (u32)((u32)(edx + 0x84u));
  /* 005fdfbc mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005fdfbe add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fdfc1 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 005fdfc3 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fdfc5 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005fdfc8 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fdfcb mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fdfce mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fdfd1 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fdfd4 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
L_005fdfd7:;
  /* 005fdfd7 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005fdfdb inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fdfdc add edx, 0x9c */ { u32 a_ = edx, b_ = 0x9cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005fdfe2 cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fdfe4 jl 0x5fded9 */ if (LT_) goto L_005fded9;
L_005fdfea:;
  /* 005fdfea mov esi, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); esi = (u32)(M32(m_)); }
  /* 005fdfee mov dword ptr [ebx], 0x20 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x20u); }
  /* 005fdff4 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005fdff7 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fdffb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fdffd mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005fe004 je 0x5fe016 */ if (ZF_) goto L_005fe016;
  /* 005fe006 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005fe00c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe00d call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fe013u; SAVEALL; call_ind(c, t_); RETCHK(0x5fe013u, 0x5fe00du); LOADALL; }
  /* 005fe013 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fe016:;
  /* 005fe016 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fe018 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fe019 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe01a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fe01b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fe01c add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe01f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fe020:;
  /* 005fe020 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fe024 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fe029 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fe02a call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fe030u; SAVEALL; call_ind(c, t_); RETCHK(0x5fe030u, 0x5fe02au); LOADALL; }
  /* 005fe030 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe033 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fe035 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fe036 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe037 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fe038 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fe039 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe03c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fe03d:;
  /* 005fe03d mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fe041 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005fe047 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe048 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fe04eu; SAVEALL; call_ind(c, t_); RETCHK(0x5fe04eu, 0x5fe048u); LOADALL; }
  /* 005fe04e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe051 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fe053 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fe054 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe055 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fe056 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fe057 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe05a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fe05b:;
  /* 005fe05b mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fe05f mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005fe065 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe066 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fe06cu; SAVEALL; call_ind(c, t_); RETCHK(0x5fe06cu, 0x5fe066u); LOADALL; }
  /* 005fe06c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe06f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fe071 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fe072 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe073 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fe074 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fe075 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe078 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe080(CPU *c) {
  NATIVE_HOOK(0x5fe080u) REGS; LOADALL;
L_005fe080:;
  /* 005fe080 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005fe085 push 0x301b0 */ { u32 v_ = 0x301b0u; esp -= 4; M32(esp) = v_; }
  /* 005fe08a push 0x9c017c */ { u32 v_ = 0x9c017cu; esp -= 4; M32(esp) = v_; }
  /* 005fe08f call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fe095u; SAVEALL; call_ind(c, t_); RETCHK(0x5fe095u, 0x5fe08fu); LOADALL; }
  /* 005fe095 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fe099 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe09a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe09b call 0x5fdc80 */ esp -= 4; M32(esp) = 0x5fe0a0u; SAVEALL; F_005fdc80(c); ABI_CHECK(0x5fdc80u, 0x5fe09bu); RETCHK(0x5fe0a0u, 0x5fe09bu); LOADALL;
  /* 005fe0a0 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe0a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe0b0(CPU *c) {
  NATIVE_HOOK(0x5fe0b0u) REGS; LOADALL;
L_005fe0b0:;
  /* 005fe0b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe0b1 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fe0b5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fe0b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe0b7 mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005fe0ba mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005fe0bc mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005fe0be mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 005fe0c2 and ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fe0c5 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe0c7 jne 0x5fe1fa */ if (!ZF_) goto L_005fe1fa;
  /* 005fe0cd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fe0ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fe0cf jmp 0x5fe0d5 */ goto L_005fe0d5;
L_005fe0d1:;
  /* 005fe0d1 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
L_005fe0d5:;
  /* 005fe0d5 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe0d8 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005fe0dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe0dd mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fe0e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe0e1 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fe0e6u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fe0e1u); RETCHK(0x5fe0e6u, 0x5fe0e1u); LOADALL;
  /* 005fe0e6 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 005fe0e8 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fe0ea add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe0ed add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fe0f0 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe0f2 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005fe0f7 je 0x5fe112 */ if (ZF_) goto L_005fe112;
  /* 005fe0f9 lea edi, [ebp + 0xc] */ edi = (u32)((u32)(ebp + 0xcu));
  /* 005fe0fc mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 005fe101 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005fe103 add ebx, 0x40 */ { u32 a_ = ebx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fe106 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005fe108 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005fe10c mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005fe10f mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
L_005fe112:;
  /* 005fe112 test byte ptr [esi], 2 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe115 je 0x5fe13b */ if (ZF_) goto L_005fe13b;
  /* 005fe117 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005fe119 lea ecx, [ebp + 0x50] */ ecx = (u32)((u32)(ebp + 0x50u));
  /* 005fe11c add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fe11f mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005fe121 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 005fe123 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005fe126 mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fe129 mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fe12c mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fe12f mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fe132 mov dword ptr [ebp + 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0x4cu); M32(m_) = (u32)(eax); }
  /* 005fe135 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 005fe138 mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
L_005fe13b:;
  /* 005fe13b test byte ptr [esi], 4 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe13e je 0x5fe164 */ if (ZF_) goto L_005fe164;
  /* 005fe140 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005fe142 lea ecx, [ebp + 0x64] */ ecx = (u32)((u32)(ebp + 0x64u));
  /* 005fe145 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fe148 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005fe14a mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 005fe14c mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005fe14f mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fe152 mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fe155 mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fe158 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fe15b mov dword ptr [ebp + 0x60], eax */ { const u32 m_ = (u32)(ebp + 0x60u); M32(m_) = (u32)(eax); }
  /* 005fe15e mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 005fe161 mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
L_005fe164:;
  /* 005fe164 test byte ptr [esi], 8 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe167 je 0x5fe18d */ if (ZF_) goto L_005fe18d;
  /* 005fe169 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005fe16b lea ecx, [ebp + 0x78] */ ecx = (u32)((u32)(ebp + 0x78u));
  /* 005fe16e add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005fe171 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005fe173 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 005fe175 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005fe178 mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fe17b mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fe17e mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fe181 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fe184 mov dword ptr [ebp + 0x74], eax */ { const u32 m_ = (u32)(ebp + 0x74u); M32(m_) = (u32)(eax); }
  /* 005fe187 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 005fe18a mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
L_005fe18d:;
  /* 005fe18d test byte ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe190 je 0x5fe1e3 */ if (ZF_) goto L_005fe1e3;
  /* 005fe192 lea esi, [ebp + 0x8c] */ esi = (u32)((u32)(ebp + 0x8cu));
  /* 005fe198 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005fe19a mov edx, esi */ { edx = (u32)(esi); }
  /* 005fe19c mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 005fe19e mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 005fe1a0 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005fe1a3 mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 005fe1a6 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fe1a9 mov dword ptr [edx + 8], edi */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(edi); }
  /* 005fe1ac mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005fe1b0 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fe1b3 mov dword ptr [ebp + 0x88], eax */ { const u32 m_ = (u32)(ebp + 0x88u); M32(m_) = (u32)(eax); }
  /* 005fe1b9 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005fe1bc mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005fe1be push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fe1bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fe1c0 mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
  /* 005fe1c3 call 0x5fe690 */ esp -= 4; M32(esp) = 0x5fe1c8u; SAVEALL; F_005fe690(c); ABI_CHECK(0x5fe690u, 0x5fe1c3u); RETCHK(0x5fe1c8u, 0x5fe1c3u); LOADALL;
  /* 005fe1c8 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fe1ca mov eax, dword ptr [ebp + 0x90] */ { const u32 m_ = (u32)(ebp + 0x90u); eax = (u32)(M32(m_)); }
  /* 005fe1d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe1d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fe1d2 call 0x5fe690 */ esp -= 4; M32(esp) = 0x5fe1d7u; SAVEALL; F_005fe690(c); ABI_CHECK(0x5fe690u, 0x5fe1d2u); RETCHK(0x5fe1d7u, 0x5fe1d2u); LOADALL;
  /* 005fe1d7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe1da mov dword ptr [ebp + 0x90], eax */ { const u32 m_ = (u32)(ebp + 0x90u); M32(m_) = (u32)(eax); }
  /* 005fe1e0 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_005fe1e3:;
  /* 005fe1e3 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005fe1e5 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 005fe1e9 and ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fe1ec test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe1ee je 0x5fe0d1 */ if (ZF_) goto L_005fe0d1;
  /* 005fe1f4 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fe1f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fe1f9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_005fe1fa:;
  /* 005fe1fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe1fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fe1fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fe1fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe200(CPU *c) {
  NATIVE_HOOK(0x5fe200u) REGS; LOADALL;
L_005fe200:;
  /* 005fe200 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe201 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005fe205 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fe20b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fe20c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fe20d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fe20f and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fe214 jne 0x5fe466 */ if (!ZF_) goto L_005fe466;
  /* 005fe21a fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005fe21e fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005fe224 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005fe226 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe229 jp 0x5fe466 */ if (PF_) goto L_005fe466;
  /* 005fe22f mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fe233 mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 005fe236 mov ebp, edi */ { ebp = (u32)(edi); }
  /* 005fe238 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005fe23a and ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fe23d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe23f jne 0x5fe466 */ if (!ZF_) goto L_005fe466;
  /* 005fe245 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fe246 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe247 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_005fe249:;
  /* 005fe249 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe24c mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005fe250 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe251 mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fe254 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe255 call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fe25au; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fe255u); RETCHK(0x5fe25au, 0x5fe255u); LOADALL;
  /* 005fe25a mov esi, eax */ { esi = (u32)(eax); }
  /* 005fe25c mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fe25f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe262 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fe265 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe267 je 0x5fe39b */ if (ZF_) goto L_005fe39b;
  /* 005fe26d fld dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 005fe270 fsub dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe273 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe276 add eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fe279 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe27b fld dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 005fe27e fsub dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe281 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe284 fld dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); FPUSH((double)MF32(m_)); }
  /* 005fe287 fsub dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe28a fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe28d fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005fe291 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe293 fst dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); }
  /* 005fe295 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005fe298 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe29c fst dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); }
  /* 005fe29f fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005fe2a2 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe2a6 fst dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 005fe2aa fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe2ad fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005fe2af fadd dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe2b2 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe2b4 fld dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); FPUSH((double)MF32(m_)); }
  /* 005fe2b7 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 005fe2b9 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe2bc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005fe2be fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005fe2c1 fadd dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe2c5 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe2c8 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 005fe2ca mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe2cd fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe2d0 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fe2d3 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe2d5 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005fe2d8 fsub dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe2db fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe2de fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005fe2e1 fsub dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe2e4 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe2e7 fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005fe2eb fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe2ed fst dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); }
  /* 005fe2ef fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005fe2f2 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe2f6 fst dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); }
  /* 005fe2f9 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005fe2fc fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe300 fst dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 005fe304 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe307 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005fe309 fadd dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe30c fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe30e fld dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005fe311 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 005fe313 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe316 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005fe318 fld dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005fe31b fadd dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe31f fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe322 fld dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005fe325 fsub dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe328 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe32b add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fe32e fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe330 fld dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); FPUSH((double)MF32(m_)); }
  /* 005fe333 fsub dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe336 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe339 fld dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005fe33c fsub dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe33f fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe342 fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005fe346 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe348 fst dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); }
  /* 005fe34a fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005fe34d fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe351 fst dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); }
  /* 005fe354 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005fe357 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe35b fst dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 005fe35f fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe362 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005fe364 fadd dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe367 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe369 fld dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005fe36c fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 005fe36e fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe371 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005fe373 fld dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); FPUSH((double)MF32(m_)); }
  /* 005fe376 fadd dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe37a fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe37d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fe380 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fe383 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe384 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x5fe389u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x5fe384u); RETCHK(0x5fe389u, 0x5fe384u); LOADALL;
  /* 005fe389 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fe38c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fe38d call 0x56ea00 */ esp -= 4; M32(esp) = 0x5fe392u; SAVEALL; F_0056ea00(c); ABI_CHECK(0x56ea00u, 0x5fe38du); RETCHK(0x5fe392u, 0x5fe38du); LOADALL;
  /* 005fe392 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe395 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005fe398 add edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005fe39b:;
  /* 005fe39b test byte ptr [ebp], 2 */ { const u32 m_ = (u32)(ebp); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe39f je 0x5fe426 */ if (ZF_) goto L_005fe426;
  /* 005fe3a5 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 005fe3a7 fsub dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe3aa mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe3ad fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe3b1 fadd dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe3b4 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe3ba fstp dword ptr [eax + 0x9c] */ { const u32 m_ = (u32)(eax + 0x9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe3c0 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005fe3c3 fsub dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe3c6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fe3c9 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe3cd fadd dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe3d0 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe3d6 fstp dword ptr [ecx + 0xa0] */ { const u32 m_ = (u32)(ecx + 0xa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe3dc fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005fe3df fsub dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe3e2 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fe3e5 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe3e9 fadd dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe3ec fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe3f2 fstp dword ptr [edx + 0xa4] */ { const u32 m_ = (u32)(edx + 0xa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe3f8 fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005fe3fb fsub dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe3fe mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe401 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe405 fadd dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe408 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe40e fstp dword ptr [eax + 0xa8] */ { const u32 m_ = (u32)(eax + 0xa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe414 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe417 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fe41a or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fe41d add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005fe420 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fe423 mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
L_005fe426:;
  /* 005fe426 test byte ptr [ebp], 4 */ { const u32 m_ = (u32)(ebp); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe42a je 0x5fe43e */ if (ZF_) goto L_005fe43e;
  /* 005fe42c mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005fe430 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe431 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fe432 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe433 call 0x5fe480 */ esp -= 4; M32(esp) = 0x5fe438u; SAVEALL; F_005fe480(c); ABI_CHECK(0x5fe480u, 0x5fe433u); RETCHK(0x5fe438u, 0x5fe433u); LOADALL;
  /* 005fe438 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe43b add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005fe43e:;
  /* 005fe43e mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005fe441 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe443 je 0x5fe448 */ if (ZF_) goto L_005fe448;
  /* 005fe445 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005fe448:;
  /* 005fe448 test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe44a je 0x5fe455 */ if (ZF_) goto L_005fe455;
  /* 005fe44c mov dword ptr [esi + 0x88], ebx */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(ebx); }
  /* 005fe452 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005fe455:;
  /* 005fe455 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005fe457 mov ebp, edi */ { ebp = (u32)(edi); }
  /* 005fe459 and edx, 0x20 */ { u32 a_ = edx, b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fe45c test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe45e je 0x5fe249 */ if (ZF_) goto L_005fe249;
  /* 005fe464 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe465 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005fe466:;
  /* 005fe466 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fe46a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe46b call 0x5fe500 */ esp -= 4; M32(esp) = 0x5fe470u; SAVEALL; F_005fe500(c); ABI_CHECK(0x5fe500u, 0x5fe46bu); RETCHK(0x5fe470u, 0x5fe46bu); LOADALL;
  /* 005fe470 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fe474 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe477 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fe478 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fe479 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fe47a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe480(CPU *c) {
  NATIVE_HOOK(0x5fe480u) REGS; LOADALL;
L_005fe480:;
  /* 005fe480 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fe484 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe488 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fe48a fsub dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe48d mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fe490 fmul dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe494 fadd dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe497 fstp dword ptr [edx + 0x8c] */ { const u32 m_ = (u32)(edx + 0x8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe49d fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005fe4a0 fsub dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe4a3 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fe4a6 fmul dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe4aa fadd dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe4ad fstp dword ptr [edx + 0x90] */ { const u32 m_ = (u32)(edx + 0x90u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe4b3 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005fe4b6 fsub dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe4b9 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fe4bc fmul dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe4c0 fadd dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe4c3 fstp dword ptr [edx + 0x94] */ { const u32 m_ = (u32)(edx + 0x94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe4c9 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005fe4cc fsub dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005fe4cf mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fe4d2 fmul dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fe4d6 fadd dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005fe4d9 fstp dword ptr [ecx + 0x98] */ { const u32 m_ = (u32)(ecx + 0x98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fe4df mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fe4e2 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fe4e5 or edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fe4e8 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005fe4eb mov dword ptr [eax + 0x60], 0 */ { const u32 m_ = (u32)(eax + 0x60u); M32(m_) = (u32)(0x0u); }
  /* 005fe4f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe500(CPU *c) {
  NATIVE_HOOK(0x5fe500u) REGS; LOADALL;
L_005fe500:;
  /* 005fe500 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fe501 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fe502 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 005fe506 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe507 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fe508 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fe50b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe50c call 0x5bdc40 */ esp -= 4; M32(esp) = 0x5fe511u; SAVEALL; F_005bdc40(c); ABI_CHECK(0x5bdc40u, 0x5fe50cu); RETCHK(0x5fe511u, 0x5fe50cu); LOADALL;
  /* 005fe511 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fe514 mov edi, eax */ { edi = (u32)(eax); }
  /* 005fe516 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe517 call 0x5bdbd0 */ esp -= 4; M32(esp) = 0x5fe51cu; SAVEALL; F_005bdbd0(c); ABI_CHECK(0x5bdbd0u, 0x5fe517u); RETCHK(0x5fe51cu, 0x5fe517u); LOADALL;
  /* 005fe51c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005fe51e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe521 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe523 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fe525 jle 0x5fe5d7 */ if ((ZF_|LT_)) goto L_005fe5d7;
L_005fe52b:;
  /* 005fe52b cmp dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe52e jne 0x5fe5ca */ if (!ZF_) goto L_005fe5ca;
  /* 005fe534 cmp dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe537 je 0x5fe54c */ if (ZF_) goto L_005fe54c;
  /* 005fe539 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe53c lea edx, [esi + 0xc] */ edx = (u32)((u32)(esi + 0xcu));
  /* 005fe53f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fe540 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe541 call 0x56e9e0 */ esp -= 4; M32(esp) = 0x5fe546u; SAVEALL; F_0056e9e0(c); ABI_CHECK(0x56e9e0u, 0x5fe541u); RETCHK(0x5fe546u, 0x5fe541u); LOADALL;
  /* 005fe546 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe549 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
L_005fe54c:;
  /* 005fe54c cmp dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe54f je 0x5fe564 */ if (ZF_) goto L_005fe564;
  /* 005fe551 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fe554 lea ecx, [esi + 0x50] */ ecx = (u32)((u32)(esi + 0x50u));
  /* 005fe557 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe558 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fe559 call 0x56eb40 */ esp -= 4; M32(esp) = 0x5fe55eu; SAVEALL; F_0056eb40(c); ABI_CHECK(0x56eb40u, 0x5fe559u); RETCHK(0x5fe55eu, 0x5fe559u); LOADALL;
  /* 005fe55e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe561 mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
L_005fe564:;
  /* 005fe564 cmp dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe567 je 0x5fe57c */ if (ZF_) goto L_005fe57c;
  /* 005fe569 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fe56c lea eax, [esi + 0x64] */ eax = (u32)((u32)(esi + 0x64u));
  /* 005fe56f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe570 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe571 call 0x56eb00 */ esp -= 4; M32(esp) = 0x5fe576u; SAVEALL; F_0056eb00(c); ABI_CHECK(0x56eb00u, 0x5fe571u); RETCHK(0x5fe576u, 0x5fe571u); LOADALL;
  /* 005fe576 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe579 mov dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ebx); }
L_005fe57c:;
  /* 005fe57c cmp dword ptr [esi + 0x74], ebx */ { const u32 m_ = (u32)(esi + 0x74u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe57f je 0x5fe5b2 */ if (ZF_) goto L_005fe5b2;
  /* 005fe581 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe584 mov ecx, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 005fe587 cmp dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe58a je 0x5fe59f */ if (ZF_) goto L_005fe59f;
  /* 005fe58c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe58d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe58e call 0x56ebb0 */ esp -= 4; M32(esp) = 0x5fe593u; SAVEALL; F_0056ebb0(c); ABI_CHECK(0x56ebb0u, 0x5fe58eu); RETCHK(0x5fe593u, 0x5fe58eu); LOADALL;
  /* 005fe593 mov edx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (u32)(M32(m_)); }
  /* 005fe596 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fe597 call 0x573d60 */ esp -= 4; M32(esp) = 0x5fe59cu; SAVEALL; F_00573d60(c); ABI_CHECK(0x573d60u, 0x5fe597u); RETCHK(0x5fe59cu, 0x5fe597u); LOADALL;
  /* 005fe59c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fe59f:;
  /* 005fe59f mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 005fe5a2 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fe5a5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe5a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe5a7 call 0x56e9b0 */ esp -= 4; M32(esp) = 0x5fe5acu; SAVEALL; F_0056e9b0(c); ABI_CHECK(0x56e9b0u, 0x5fe5a7u); RETCHK(0x5fe5acu, 0x5fe5a7u); LOADALL;
  /* 005fe5ac add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe5af mov dword ptr [esi + 0x74], ebx */ { const u32 m_ = (u32)(esi + 0x74u); M32(m_) = (u32)(ebx); }
L_005fe5b2:;
  /* 005fe5b2 cmp dword ptr [esi + 0x88], ebx */ { const u32 m_ = (u32)(esi + 0x88u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe5b8 je 0x5fe5c8 */ if (ZF_) goto L_005fe5c8;
  /* 005fe5ba cmp dword ptr [esi + 0x8c], ebx */ { const u32 m_ = (u32)(esi + 0x8cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe5c0 je 0x5fe5c8 */ if (ZF_) goto L_005fe5c8;
  /* 005fe5c2 mov dword ptr [esi + 0x88], ebx */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(ebx); }
L_005fe5c8:;
  /* 005fe5c8 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
L_005fe5ca:;
  /* 005fe5ca add esi, 0x9c */ { u32 a_ = esi, b_ = 0x9cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fe5d0 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fe5d1 jne 0x5fe52b */ if (!ZF_) goto L_005fe52b;
L_005fe5d7:;
  /* 005fe5d7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fe5d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe5d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fe5da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fe5db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe5e0(CPU *c) {
  NATIVE_HOOK(0x5fe5e0u) REGS; LOADALL;
L_005fe5e0:;
  /* 005fe5e0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fe5e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe5e5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fe5e9 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fe5ee push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005fe5f0 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005fe5f2 call 0x5bd970 */ esp -= 4; M32(esp) = 0x5fe5f7u; SAVEALL; F_005bd970(c); ABI_CHECK(0x5bd970u, 0x5fe5f2u); RETCHK(0x5fe5f7u, 0x5fe5f2u); LOADALL;
  /* 005fe5f7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe5fa mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005fe5fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fe5ff jne 0x5fe603 */ if (!ZF_) goto L_005fe603;
  /* 005fe601 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe602 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fe603:;
  /* 005fe603 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005fe605 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe606 push 0x5fe630 */ { u32 v_ = 0x5fe630u; esp -= 4; M32(esp) = v_; }
  /* 005fe60b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fe60c call 0x573930 */ esp -= 4; M32(esp) = 0x5fe611u; SAVEALL; F_00573930(c); ABI_CHECK(0x573930u, 0x5fe60cu); RETCHK(0x5fe611u, 0x5fe60cu); LOADALL;
  /* 005fe611 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe612 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005fe619 call 0x5fdb80 */ esp -= 4; M32(esp) = 0x5fe61eu; SAVEALL; F_005fdb80(c); ABI_CHECK(0x5fdb80u, 0x5fe619u); RETCHK(0x5fe61eu, 0x5fe619u); LOADALL;
  /* 005fe61e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe621 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 005fe624 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fe626 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe627 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe630(CPU *c) {
  NATIVE_HOOK(0x5fe630u) REGS; LOADALL;
L_005fe630:;
  /* 005fe630 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fe634 push 0x301a9 */ { u32 v_ = 0x301a9u; esp -= 4; M32(esp) = v_; }
  /* 005fe639 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe63a call 0x5bda50 */ esp -= 4; M32(esp) = 0x5fe63fu; SAVEALL; F_005bda50(c); ABI_CHECK(0x5bda50u, 0x5fe63au); RETCHK(0x5fe63fu, 0x5fe63au); LOADALL;
  /* 005fe63f mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fe643 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe646 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005fe648 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005fe64a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe650(CPU *c) {
  NATIVE_HOOK(0x5fe650u) REGS; LOADALL;
L_005fe650:;
  /* 005fe650 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe651 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fe655 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fe658 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005fe65e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fe660 je 0x5fe66b */ if (ZF_) goto L_005fe66b;
  /* 005fe662 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe663 call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fe668u; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fe663u); RETCHK(0x5fe668u, 0x5fe663u); LOADALL;
  /* 005fe668 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fe66b:;
  /* 005fe66b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fe66e mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005fe675 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fe677 je 0x5fe682 */ if (ZF_) goto L_005fe682;
  /* 005fe679 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe67a call 0x5bdbf0 */ esp -= 4; M32(esp) = 0x5fe67fu; SAVEALL; F_005bdbf0(c); ABI_CHECK(0x5bdbf0u, 0x5fe67au); RETCHK(0x5fe67fu, 0x5fe67au); LOADALL;
  /* 005fe67f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fe682:;
  /* 005fe682 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 005fe689 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fe68b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe68c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe690(CPU *c) {
  NATIVE_HOOK(0x5fe690u) REGS; LOADALL;
L_005fe690:;
  /* 005fe690 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fe694 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fe698 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fe699 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fe69c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fe69d call 0x5bdca0 */ esp -= 4; M32(esp) = 0x5fe6a2u; SAVEALL; F_005bdca0(c); ABI_CHECK(0x5bdca0u, 0x5fe69du); RETCHK(0x5fe6a2u, 0x5fe69du); LOADALL;
  /* 005fe6a2 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fe6a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe6a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe6b0(CPU *c) {
  NATIVE_HOOK(0x5fe6b0u) REGS; LOADALL;
L_005fe6b0:;
  /* 005fe6b0 jmp dword ptr [0x62e0ac] */ { const u32 m_ = (u32)(0x62e0acu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6b6(CPU *c) {
  NATIVE_HOOK(0x5fe6b6u) REGS; LOADALL;
L_005fe6b6:;
  /* 005fe6b6 jmp dword ptr [0x62e0b0] */ { const u32 m_ = (u32)(0x62e0b0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6bc(CPU *c) {
  NATIVE_HOOK(0x5fe6bcu) REGS; LOADALL;
L_005fe6bc:;
  /* 005fe6bc jmp dword ptr [0x62e0a8] */ { const u32 m_ = (u32)(0x62e0a8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6c2(CPU *c) {
  NATIVE_HOOK(0x5fe6c2u) REGS; LOADALL;
L_005fe6c2:;
  /* 005fe6c2 jmp dword ptr [0x62e0a4] */ { const u32 m_ = (u32)(0x62e0a4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6c8(CPU *c) {
  NATIVE_HOOK(0x5fe6c8u) REGS; LOADALL;
L_005fe6c8:;
  /* 005fe6c8 jmp dword ptr [0x62e730] */ { const u32 m_ = (u32)(0x62e730u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6ce(CPU *c) {
  NATIVE_HOOK(0x5fe6ceu) REGS; LOADALL;
L_005fe6ce:;
  /* 005fe6ce jmp dword ptr [0x62e6bc] */ { const u32 m_ = (u32)(0x62e6bcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6d4(CPU *c) {
  NATIVE_HOOK(0x5fe6d4u) REGS; LOADALL;
L_005fe6d4:;
  /* 005fe6d4 jmp dword ptr [0x62e6c0] */ { const u32 m_ = (u32)(0x62e6c0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6da(CPU *c) {
  NATIVE_HOOK(0x5fe6dau) REGS; LOADALL;
L_005fe6da:;
  /* 005fe6da jmp dword ptr [0x62e6c4] */ { const u32 m_ = (u32)(0x62e6c4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6e0(CPU *c) {
  NATIVE_HOOK(0x5fe6e0u) REGS; LOADALL;
L_005fe6e0:;
  /* 005fe6e0 jmp dword ptr [0x62e6c8] */ { const u32 m_ = (u32)(0x62e6c8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6e6(CPU *c) {
  NATIVE_HOOK(0x5fe6e6u) REGS; LOADALL;
L_005fe6e6:;
  /* 005fe6e6 jmp dword ptr [0x62e6d0] */ { const u32 m_ = (u32)(0x62e6d0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6ec(CPU *c) {
  NATIVE_HOOK(0x5fe6ecu) REGS; LOADALL;
L_005fe6ec:;
  /* 005fe6ec jmp dword ptr [0x62e6d4] */ { const u32 m_ = (u32)(0x62e6d4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6f2(CPU *c) {
  NATIVE_HOOK(0x5fe6f2u) REGS; LOADALL;
L_005fe6f2:;
  /* 005fe6f2 jmp dword ptr [0x62e6d8] */ { const u32 m_ = (u32)(0x62e6d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6f8(CPU *c) {
  NATIVE_HOOK(0x5fe6f8u) REGS; LOADALL;
L_005fe6f8:;
  /* 005fe6f8 jmp dword ptr [0x62e6dc] */ { const u32 m_ = (u32)(0x62e6dcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe6fe(CPU *c) {
  NATIVE_HOOK(0x5fe6feu) REGS; LOADALL;
L_005fe6fe:;
  /* 005fe6fe jmp dword ptr [0x62e6e0] */ { const u32 m_ = (u32)(0x62e6e0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe704(CPU *c) {
  NATIVE_HOOK(0x5fe704u) REGS; LOADALL;
L_005fe704:;
  /* 005fe704 jmp dword ptr [0x62e700] */ { const u32 m_ = (u32)(0x62e700u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe70a(CPU *c) {
  NATIVE_HOOK(0x5fe70au) REGS; LOADALL;
L_005fe70a:;
  /* 005fe70a jmp dword ptr [0x62e704] */ { const u32 m_ = (u32)(0x62e704u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe710(CPU *c) {
  NATIVE_HOOK(0x5fe710u) REGS; LOADALL;
L_005fe710:;
  /* 005fe710 jmp dword ptr [0x62e708] */ { const u32 m_ = (u32)(0x62e708u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe716(CPU *c) {
  NATIVE_HOOK(0x5fe716u) REGS; LOADALL;
L_005fe716:;
  /* 005fe716 jmp dword ptr [0x62e70c] */ { const u32 m_ = (u32)(0x62e70cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe71c(CPU *c) {
  NATIVE_HOOK(0x5fe71cu) REGS; LOADALL;
L_005fe71c:;
  /* 005fe71c jmp dword ptr [0x62e710] */ { const u32 m_ = (u32)(0x62e710u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe722(CPU *c) {
  NATIVE_HOOK(0x5fe722u) REGS; LOADALL;
L_005fe722:;
  /* 005fe722 jmp dword ptr [0x62e714] */ { const u32 m_ = (u32)(0x62e714u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe728(CPU *c) {
  NATIVE_HOOK(0x5fe728u) REGS; LOADALL;
L_005fe728:;
  /* 005fe728 jmp dword ptr [0x62e718] */ { const u32 m_ = (u32)(0x62e718u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe72e(CPU *c) {
  NATIVE_HOOK(0x5fe72eu) REGS; LOADALL;
L_005fe72e:;
  /* 005fe72e jmp dword ptr [0x62e71c] */ { const u32 m_ = (u32)(0x62e71cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe734(CPU *c) {
  NATIVE_HOOK(0x5fe734u) REGS; LOADALL;
L_005fe734:;
  /* 005fe734 jmp dword ptr [0x62e720] */ { const u32 m_ = (u32)(0x62e720u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe73a(CPU *c) {
  NATIVE_HOOK(0x5fe73au) REGS; LOADALL;
L_005fe73a:;
  /* 005fe73a jmp dword ptr [0x62e724] */ { const u32 m_ = (u32)(0x62e724u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe740(CPU *c) {
  NATIVE_HOOK(0x5fe740u) REGS; LOADALL;
L_005fe740:;
  /* 005fe740 jmp dword ptr [0x62e728] */ { const u32 m_ = (u32)(0x62e728u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe746(CPU *c) {
  NATIVE_HOOK(0x5fe746u) REGS; LOADALL;
L_005fe746:;
  /* 005fe746 jmp dword ptr [0x62e72c] */ { const u32 m_ = (u32)(0x62e72cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe74c(CPU *c) {
  NATIVE_HOOK(0x5fe74cu) REGS; LOADALL;
L_005fe74c:;
  /* 005fe74c jmp dword ptr [0x62e6fc] */ { const u32 m_ = (u32)(0x62e6fcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe752(CPU *c) {
  NATIVE_HOOK(0x5fe752u) REGS; LOADALL;
L_005fe752:;
  /* 005fe752 jmp dword ptr [0x62e6f8] */ { const u32 m_ = (u32)(0x62e6f8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe758(CPU *c) {
  NATIVE_HOOK(0x5fe758u) REGS; LOADALL;
L_005fe758:;
  /* 005fe758 jmp dword ptr [0x62e6f4] */ { const u32 m_ = (u32)(0x62e6f4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe75e(CPU *c) {
  NATIVE_HOOK(0x5fe75eu) REGS; LOADALL;
L_005fe75e:;
  /* 005fe75e jmp dword ptr [0x62e6f0] */ { const u32 m_ = (u32)(0x62e6f0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe764(CPU *c) {
  NATIVE_HOOK(0x5fe764u) REGS; LOADALL;
L_005fe764:;
  /* 005fe764 jmp dword ptr [0x62e6ec] */ { const u32 m_ = (u32)(0x62e6ecu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe76a(CPU *c) {
  NATIVE_HOOK(0x5fe76au) REGS; LOADALL;
L_005fe76a:;
  /* 005fe76a jmp dword ptr [0x62e6e8] */ { const u32 m_ = (u32)(0x62e6e8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe770(CPU *c) {
  NATIVE_HOOK(0x5fe770u) REGS; LOADALL;
L_005fe770:;
  /* 005fe770 jmp dword ptr [0x62e6e4] */ { const u32 m_ = (u32)(0x62e6e4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe776(CPU *c) {
  NATIVE_HOOK(0x5fe776u) REGS; LOADALL;
L_005fe776:;
  /* 005fe776 jmp dword ptr [0x62e6cc] */ { const u32 m_ = (u32)(0x62e6ccu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe77c(CPU *c) {
  NATIVE_HOOK(0x5fe77cu) REGS; LOADALL;
L_005fe77c:;
  /* 005fe77c jmp dword ptr [0x62e02c] */ { const u32 m_ = (u32)(0x62e02cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe788(CPU *c) {
  NATIVE_HOOK(0x5fe788u) REGS; LOADALL;
L_005fe788:;
  /* 005fe788 jmp dword ptr [0x62e024] */ { const u32 m_ = (u32)(0x62e024u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe78e(CPU *c) {
  NATIVE_HOOK(0x5fe78eu) REGS; LOADALL;
L_005fe78e:;
  /* 005fe78e jmp dword ptr [0x62e020] */ { const u32 m_ = (u32)(0x62e020u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe794(CPU *c) {
  NATIVE_HOOK(0x5fe794u) REGS; LOADALL;
L_005fe794:;
  /* 005fe794 jmp dword ptr [0x62e01c] */ { const u32 m_ = (u32)(0x62e01cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe79a(CPU *c) {
  NATIVE_HOOK(0x5fe79au) REGS; LOADALL;
L_005fe79a:;
  /* 005fe79a jmp dword ptr [0x62e048] */ { const u32 m_ = (u32)(0x62e048u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7a0(CPU *c) {
  NATIVE_HOOK(0x5fe7a0u) REGS; LOADALL;
L_005fe7a0:;
  /* 005fe7a0 jmp dword ptr [0x62e038] */ { const u32 m_ = (u32)(0x62e038u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7a6(CPU *c) {
  NATIVE_HOOK(0x5fe7a6u) REGS; LOADALL;
L_005fe7a6:;
  /* 005fe7a6 jmp dword ptr [0x62e030] */ { const u32 m_ = (u32)(0x62e030u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7ac(CPU *c) {
  NATIVE_HOOK(0x5fe7acu) REGS; LOADALL;
L_005fe7ac:;
  /* 005fe7ac jmp dword ptr [0x62e034] */ { const u32 m_ = (u32)(0x62e034u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7b2(CPU *c) {
  NATIVE_HOOK(0x5fe7b2u) REGS; LOADALL;
L_005fe7b2:;
  /* 005fe7b2 jmp dword ptr [0x62e044] */ { const u32 m_ = (u32)(0x62e044u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7b8(CPU *c) {
  NATIVE_HOOK(0x5fe7b8u) REGS; LOADALL;
L_005fe7b8:;
  /* 005fe7b8 jmp dword ptr [0x62e040] */ { const u32 m_ = (u32)(0x62e040u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7be(CPU *c) {
  NATIVE_HOOK(0x5fe7beu) REGS; LOADALL;
L_005fe7be:;
  /* 005fe7be jmp dword ptr [0x62e03c] */ { const u32 m_ = (u32)(0x62e03cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7c4(CPU *c) {
  NATIVE_HOOK(0x5fe7c4u) REGS; LOADALL;
L_005fe7c4:;
  /* 005fe7c4 jmp dword ptr [0x62e3f4] */ { const u32 m_ = (u32)(0x62e3f4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7ca(CPU *c) {
  NATIVE_HOOK(0x5fe7cau) REGS; LOADALL;
L_005fe7ca:;
  /* 005fe7ca jmp dword ptr [0x62e3f0] */ { const u32 m_ = (u32)(0x62e3f0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe7d0(CPU *c) {
  NATIVE_HOOK(0x5fe7d0u) REGS; LOADALL;
L_005fe7d0:;
  /* 005fe7d0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fe7d2 push 0x63cc68 */ { u32 v_ = 0x63cc68u; esp -= 4; M32(esp) = v_; }
  /* 005fe7d7 call 0x5fee88 */ esp -= 4; M32(esp) = 0x5fe7dcu; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x5fe7d7u); RETCHK(0x5fe7dcu, 0x5fe7d7u); LOADALL;
  /* 005fe7dc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fe7de mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 005fe7e1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005fe7e4 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_005fe7e7:;
  /* 005fe7e7 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005fe7ea cmp eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe7ed jge 0x5fe802 */ if (!LT_) goto L_005fe802;
  /* 005fe7ef mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fe7f2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005fe7f4 call dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fe7f7u; SAVEALL; call_ind(c, t_); RETCHK(0x5fe7f7u, 0x5fe7f4u); LOADALL; }
  /* 005fe7f7 add esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005fe7fa mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 005fe7fd inc dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fe800 jmp 0x5fe7e7 */ goto L_005fe7e7;
L_005fe802:;
  /* 005fe802 mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
  /* 005fe809 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fe80d call 0x5fe81a */ esp -= 4; M32(esp) = 0x5fe812u; SAVEALL; F_005fe81a(c); ABI_CHECK(0x5fe81au, 0x5fe80du); RETCHK(0x5fe812u, 0x5fe80du); LOADALL;
  /* 005fe812 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fe817u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fe812u); RETCHK(0x5fe817u, 0x5fe812u); LOADALL;
  /* 005fe817 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_005fe81a(CPU *c) {
  NATIVE_HOOK(0x5fe81au) REGS; LOADALL;
L_005fe81a:;
  /* 005fe81a cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe81e jne 0x5fe831 */ if (!ZF_) goto L_005fe831;
  /* 005fe820 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe823 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe826 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe829 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe82c call 0x5fe832 */ esp -= 4; M32(esp) = 0x5fe831u; SAVEALL; F_005fe832(c); ABI_CHECK(0x5fe832u, 0x5fe82cu); RETCHK(0x5fe831u, 0x5fe82cu); LOADALL;
L_005fe831:;
  /* 005fe831 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe832(CPU *c) {
  NATIVE_HOOK(0x5fe832u) REGS; LOADALL;
L_005fe832:;
  /* 005fe832 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 005fe834 push 0x63cc78 */ { u32 v_ = 0x63cc78u; esp -= 4; M32(esp) = v_; }
  /* 005fe839 call 0x5fee88 */ esp -= 4; M32(esp) = 0x5fe83eu; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x5fe839u); RETCHK(0x5fe83eu, 0x5fe839u); LOADALL;
  /* 005fe83e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_005fe842:;
  /* 005fe842 dec dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fe845 js 0x5fe855 */ if (SF_) goto L_005fe855;
  /* 005fe847 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fe84a sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fe84d mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fe850 call dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fe853u; SAVEALL; call_ind(c, t_); RETCHK(0x5fe853u, 0x5fe850u); LOADALL; }
  /* 005fe853 jmp 0x5fe842 */ goto L_005fe842;
L_005fe855:;
  /* 005fe855 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fe859 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fe85eu; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fe859u); RETCHK(0x5fe85eu, 0x5fe859u); LOADALL;
  /* 005fe85e ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_005fe861(CPU *c) {
  NATIVE_HOOK(0x5fe861u) REGS; LOADALL;
L_005fe861:;
  /* 005fe861 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005fe864 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 005fe867 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005fe86a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fe86c mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 005fe86f mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 005fe872 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe878 je 0x5fe88a */ if (ZF_) goto L_005fe88a;
  /* 005fe87a mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 005fe881 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 005fe884 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fe88a:;
  /* 005fe88a call 0x5feed4 */ esp -= 4; M32(esp) = 0x5fe88fu; SAVEALL; F_005feed4(c); ABI_CHECK(0x5feed4u, 0x5fe88au); RETCHK(0x5fe88fu, 0x5fe88au); LOADALL;
  /* 005fe88f int3 */ TRAP(0x5fe88fu, "int3");
}

void F_005fe885(CPU *c) {
  NATIVE_HOOK(0x5fe885u) REGS; LOADALL;
  goto L_005fe885;
L_005fe855:;
  /* 005fe855 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fe859 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fe85eu; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fe859u); RETCHK(0x5fe85eu, 0x5fe859u); LOADALL;
  /* 005fe85e ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_005fe885:;
  /* 005fe885 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 005fe888 jmp 0x5fe855 */ goto L_005fe855;
}

void F_005fe890(CPU *c) {
  NATIVE_HOOK(0x5fe890u) REGS; LOADALL;
L_005fe890:;
  /* 005fe890 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005fe892 push 0x63cc88 */ { u32 v_ = 0x63cc88u; esp -= 4; M32(esp) = v_; }
  /* 005fe897 call 0x5fee88 */ esp -= 4; M32(esp) = 0x5fe89cu; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x5fe897u); RETCHK(0x5fe89cu, 0x5fe897u); LOADALL;
  /* 005fe89c and dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fe8a0 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fe8a3 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fe8a5 imul eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005fe8a9 add dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fe8ac and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_005fe8b0:;
  /* 005fe8b0 dec dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fe8b3 js 0x5fe8c0 */ if (SF_) goto L_005fe8c0;
  /* 005fe8b5 sub dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fe8b8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fe8bb call dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fe8beu; SAVEALL; call_ind(c, t_); RETCHK(0x5fe8beu, 0x5fe8bbu); LOADALL; }
  /* 005fe8be jmp 0x5fe8b0 */ goto L_005fe8b0;
L_005fe8c0:;
  /* 005fe8c0 mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 005fe8c7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fe8cb call 0x5fe8d8 */ esp -= 4; M32(esp) = 0x5fe8d0u; SAVEALL; F_005fe8d8(c); ABI_CHECK(0x5fe8d8u, 0x5fe8cbu); RETCHK(0x5fe8d0u, 0x5fe8cbu); LOADALL;
  /* 005fe8d0 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fe8d5u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fe8d0u); RETCHK(0x5fe8d5u, 0x5fe8d0u); LOADALL;
  /* 005fe8d5 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_005fe8d8(CPU *c) {
  NATIVE_HOOK(0x5fe8d8u) REGS; LOADALL;
L_005fe8d8:;
  /* 005fe8d8 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe8dc jne 0x5fe8ef */ if (!ZF_) goto L_005fe8ef;
  /* 005fe8de push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe8e1 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe8e4 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe8e7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe8ea call 0x5fe832 */ esp -= 4; M32(esp) = 0x5fe8efu; SAVEALL; F_005fe832(c); ABI_CHECK(0x5fe832u, 0x5fe8eau); RETCHK(0x5fe8efu, 0x5fe8eau); LOADALL;
L_005fe8ef:;
  /* 005fe8ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe8f0(CPU *c) {
  NATIVE_HOOK(0x5fe8f0u) REGS; LOADALL;
L_005fe8f0:;
  /* 005fe8f0 cmp dword ptr [0x9c0214], -1 */ { const u32 m_ = (u32)(0x9c0214u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fe8f7 jne 0x5fe8ff */ if (!ZF_) goto L_005fe8ff;
  /* 005fe8f9 jmp dword ptr [0x62e2c0] */ { const u32 m_ = (u32)(0x62e2c0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005fe8ff:;
  /* 005fe8ff push 0x9c0210 */ { u32 v_ = 0x9c0210u; esp -= 4; M32(esp) = v_; }
  /* 005fe904 push 0x9c0214 */ { u32 v_ = 0x9c0214u; esp -= 4; M32(esp) = v_; }
  /* 005fe909 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe90d call 0x5feeda */ esp -= 4; M32(esp) = 0x5fe912u; SAVEALL; F_005feeda(c); ABI_CHECK(0x5feedau, 0x5fe90du); RETCHK(0x5fe912u, 0x5fe90du); LOADALL;
  /* 005fe912 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fe915 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe916(CPU *c) {
  NATIVE_HOOK(0x5fe916u) REGS; LOADALL;
L_005fe916:;
  /* 005fe916 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe91a call 0x5fe8f0 */ esp -= 4; M32(esp) = 0x5fe91fu; SAVEALL; F_005fe8f0(c); ABI_CHECK(0x5fe8f0u, 0x5fe91au); RETCHK(0x5fe91fu, 0x5fe91au); LOADALL;
  /* 005fe91f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fe921 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fe923 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fe925 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fe926 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005fe927 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fe928(CPU *c) {
  NATIVE_HOOK(0x5fe928u) REGS; LOADALL;
L_005fe928:;
  /* 005fe928 jmp dword ptr [0x62e3ec] */ { const u32 m_ = (u32)(0x62e3ecu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe92e(CPU *c) {
  NATIVE_HOOK(0x5fe92eu) REGS; LOADALL;
L_005fe92e:;
  /* 005fe92e jmp dword ptr [0x62e3e8] */ { const u32 m_ = (u32)(0x62e3e8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}
