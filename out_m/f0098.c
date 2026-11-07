#include "funcs.h"

void F_0062ae10(CPU *c) {
  NATIVE_HOOK(0x62ae10u) REGS; LOADALL;
L_0062ae10:;
  /* 0062ae10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ae11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ae13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062ae14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062ae15 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0062ae18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062ae19 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0062ae1e mov esi, 0x7a815c */ { esi = (u32)(0x7a815cu); }
  /* 0062ae23 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0062ae2a call 0x5233d0 */ esp -= 4; M32(esp) = 0x62ae2fu; SAVEALL; F_005233d0(c); ABI_CHECK(0x5233d0u, 0x62ae2au); RETCHK(0x62ae2fu, 0x62ae2au); LOADALL;
  /* 0062ae2f push 0x62c5b0 */ { u32 v_ = 0x62c5b0u; esp -= 4; M32(esp) = v_; }
  /* 0062ae34 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62ae39u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62ae34u); RETCHK(0x62ae39u, 0x62ae34u); LOADALL;
  /* 0062ae39 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062ae3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062ae3d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062ae3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062ae40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ae50(CPU *c) {
  NATIVE_HOOK(0x62ae50u) REGS; LOADALL;
L_0062ae50:;
  /* 0062ae50 mov dword ptr [0x7a816c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a816cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062ae5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ae60(CPU *c) {
  NATIVE_HOOK(0x62ae60u) REGS; LOADALL;
L_0062ae60:;
  /* 0062ae60 mov dword ptr [0x7a8170], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8170u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062ae6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ae70(CPU *c) {
  NATIVE_HOOK(0x62ae70u) REGS; LOADALL;
L_0062ae70:;
  /* 0062ae70 mov dword ptr [0x7a8174], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8174u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062ae7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ae80(CPU *c) {
  NATIVE_HOOK(0x62ae80u) REGS; LOADALL;
L_0062ae80:;
  /* 0062ae80 mov dword ptr [0x7a8178], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8178u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062ae8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ae90(CPU *c) {
  NATIVE_HOOK(0x62ae90u) REGS; LOADALL;
L_0062ae90:;
  /* 0062ae90 call 0x4fbe00 */ esp -= 4; M32(esp) = 0x62ae95u; SAVEALL; F_004fbe00(c); ABI_CHECK(0x4fbe00u, 0x62ae90u); RETCHK(0x62ae95u, 0x62ae90u); LOADALL;
  /* 0062ae95 push 0x62c610 */ { u32 v_ = 0x62c610u; esp -= 4; M32(esp) = v_; }
  /* 0062ae9a mov dword ptr [0x7a8180], eax */ { const u32 m_ = (u32)(0x7a8180u); M32(m_) = (u32)(eax); }
  /* 0062ae9f mov dword ptr [0x7a8184], 0 */ { const u32 m_ = (u32)(0x7a8184u); M32(m_) = (u32)(0x0u); }
  /* 0062aea9 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62aeaeu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62aea9u); RETCHK(0x62aeaeu, 0x62aea9u); LOADALL;
  /* 0062aeae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062aeaf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aeb0(CPU *c) {
  NATIVE_HOOK(0x62aeb0u) REGS; LOADALL;
L_0062aeb0:;
  /* 0062aeb0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062aeb2 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0062aeb7 mov ecx, 0x68a57c */ { ecx = (u32)(0x68a57cu); }
  /* 0062aebc call 0x404420 */ esp -= 4; M32(esp) = 0x62aec1u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62aebcu); RETCHK(0x62aec1u, 0x62aebcu); LOADALL;
  /* 0062aec1 push 0x62c650 */ { u32 v_ = 0x62c650u; esp -= 4; M32(esp) = v_; }
  /* 0062aec6 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62aecbu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62aec6u); RETCHK(0x62aecbu, 0x62aec6u); LOADALL;
  /* 0062aecb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062aecc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aed0(CPU *c) {
  NATIVE_HOOK(0x62aed0u) REGS; LOADALL;
L_0062aed0:;
  /* 0062aed0 call 0x531470 */ esp -= 4; M32(esp) = 0x62aed5u; SAVEALL; F_00531470(c); ABI_CHECK(0x531470u, 0x62aed0u); RETCHK(0x62aed5u, 0x62aed0u); LOADALL;
  /* 0062aed5 push 0x62c6c0 */ { u32 v_ = 0x62c6c0u; esp -= 4; M32(esp) = v_; }
  /* 0062aeda mov dword ptr [0x7a818c], eax */ { const u32 m_ = (u32)(0x7a818cu); M32(m_) = (u32)(eax); }
  /* 0062aedf mov dword ptr [0x7a8190], 0 */ { const u32 m_ = (u32)(0x7a8190u); M32(m_) = (u32)(0x0u); }
  /* 0062aee9 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62aeeeu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62aee9u); RETCHK(0x62aeeeu, 0x62aee9u); LOADALL;
  /* 0062aeee pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062aeef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aef0(CPU *c) {
  NATIVE_HOOK(0x62aef0u) REGS; LOADALL;
L_0062aef0:;
  /* 0062aef0 push 0x62c6f0 */ { u32 v_ = 0x62c6f0u; esp -= 4; M32(esp) = v_; }
  /* 0062aef5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62aefau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62aef5u); RETCHK(0x62aefau, 0x62aef5u); LOADALL;
  /* 0062aefa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062aefb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062af00(CPU *c) {
  NATIVE_HOOK(0x62af00u) REGS; LOADALL;
L_0062af00:;
  /* 0062af00 mov edx, 0x7a81a8 */ { edx = (u32)(0x7a81a8u); }
  /* 0062af05 call 0x531670 */ esp -= 4; M32(esp) = 0x62af0au; SAVEALL; F_00531670(c); ABI_CHECK(0x531670u, 0x62af05u); RETCHK(0x62af0au, 0x62af05u); LOADALL;
  /* 0062af0a push 0x62c700 */ { u32 v_ = 0x62c700u; esp -= 4; M32(esp) = v_; }
  /* 0062af0f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62af14u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62af0fu); RETCHK(0x62af14u, 0x62af0fu); LOADALL;
  /* 0062af14 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062af15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062af20(CPU *c) {
  NATIVE_HOOK(0x62af20u) REGS; LOADALL;
L_0062af20:;
  /* 0062af20 mov dword ptr [0x7a8418], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8418u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062af2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062af30(CPU *c) {
  NATIVE_HOOK(0x62af30u) REGS; LOADALL;
L_0062af30:;
  /* 0062af30 mov dword ptr [0x7a841c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a841cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062af3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062af40(CPU *c) {
  NATIVE_HOOK(0x62af40u) REGS; LOADALL;
L_0062af40:;
  /* 0062af40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062af41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062af43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062af44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062af45 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062af48 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062af4a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062af4d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062af4f push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0062af51 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062af58 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062af5b push 0x653558 */ { u32 v_ = 0x653558u; esp -= 4; M32(esp) = v_; }
  /* 0062af60 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062af63 call 0x404420 */ esp -= 4; M32(esp) = 0x62af68u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62af63u); RETCHK(0x62af68u, 0x62af63u); LOADALL;
  /* 0062af68 mov esi, 0x7a8420 */ { esi = (u32)(0x7a8420u); }
  /* 0062af6d call 0x532f30 */ esp -= 4; M32(esp) = 0x62af72u; SAVEALL; F_00532f30(c); ABI_CHECK(0x532f30u, 0x62af6du); RETCHK(0x62af72u, 0x62af6du); LOADALL;
  /* 0062af72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062af73 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062af75 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062af76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062af80(CPU *c) {
  NATIVE_HOOK(0x62af80u) REGS; LOADALL;
L_0062af80:;
  /* 0062af80 push 0x42860000 */ { u32 v_ = 0x42860000u; esp -= 4; M32(esp) = v_; }
  /* 0062af85 push 0x40a00000 */ { u32 v_ = 0x40a00000u; esp -= 4; M32(esp) = v_; }
  /* 0062af8a mov eax, 0x7a8428 */ { eax = (u32)(0x7a8428u); }
  /* 0062af8f call 0x52ce60 */ esp -= 4; M32(esp) = 0x62af94u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62af8fu); RETCHK(0x62af94u, 0x62af8fu); LOADALL;
  /* 0062af94 push 0x42980000 */ { u32 v_ = 0x42980000u; esp -= 4; M32(esp) = v_; }
  /* 0062af99 push 0x40a00000 */ { u32 v_ = 0x40a00000u; esp -= 4; M32(esp) = v_; }
  /* 0062af9e mov eax, 0x7a8430 */ { eax = (u32)(0x7a8430u); }
  /* 0062afa3 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62afa8u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62afa3u); RETCHK(0x62afa8u, 0x62afa3u); LOADALL;
  /* 0062afa8 push 0x42700000 */ { u32 v_ = 0x42700000u; esp -= 4; M32(esp) = v_; }
  /* 0062afad push 0x41400000 */ { u32 v_ = 0x41400000u; esp -= 4; M32(esp) = v_; }
  /* 0062afb2 mov eax, 0x7a8438 */ { eax = (u32)(0x7a8438u); }
  /* 0062afb7 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62afbcu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62afb7u); RETCHK(0x62afbcu, 0x62afb7u); LOADALL;
  /* 0062afbc push 0x42980000 */ { u32 v_ = 0x42980000u; esp -= 4; M32(esp) = v_; }
  /* 0062afc1 push 0x41400000 */ { u32 v_ = 0x41400000u; esp -= 4; M32(esp) = v_; }
  /* 0062afc6 mov eax, 0x7a8440 */ { eax = (u32)(0x7a8440u); }
  /* 0062afcb call 0x52ce60 */ esp -= 4; M32(esp) = 0x62afd0u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62afcbu); RETCHK(0x62afd0u, 0x62afcbu); LOADALL;
  /* 0062afd0 push 0x425c0000 */ { u32 v_ = 0x425c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062afd5 push 0x41600000 */ { u32 v_ = 0x41600000u; esp -= 4; M32(esp) = v_; }
  /* 0062afda mov eax, 0x7a8448 */ { eax = (u32)(0x7a8448u); }
  /* 0062afdf call 0x52ce60 */ esp -= 4; M32(esp) = 0x62afe4u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62afdfu); RETCHK(0x62afe4u, 0x62afdfu); LOADALL;
  /* 0062afe4 push 0x42980000 */ { u32 v_ = 0x42980000u; esp -= 4; M32(esp) = v_; }
  /* 0062afe9 push 0x41600000 */ { u32 v_ = 0x41600000u; esp -= 4; M32(esp) = v_; }
  /* 0062afee mov eax, 0x7a8450 */ { eax = (u32)(0x7a8450u); }
  /* 0062aff3 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62aff8u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62aff3u); RETCHK(0x62aff8u, 0x62aff3u); LOADALL;
  /* 0062aff8 push 0x42400000 */ { u32 v_ = 0x42400000u; esp -= 4; M32(esp) = v_; }
  /* 0062affd push 0x41a80000 */ { u32 v_ = 0x41a80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b002 mov eax, 0x7a8458 */ { eax = (u32)(0x7a8458u); }
  /* 0062b007 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b00cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b007u); RETCHK(0x62b00cu, 0x62b007u); LOADALL;
  /* 0062b00c push 0x42980000 */ { u32 v_ = 0x42980000u; esp -= 4; M32(esp) = v_; }
  /* 0062b011 push 0x41a80000 */ { u32 v_ = 0x41a80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b016 mov eax, 0x7a8460 */ { eax = (u32)(0x7a8460u); }
  /* 0062b01b call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b020u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b01bu); RETCHK(0x62b020u, 0x62b01bu); LOADALL;
  /* 0062b020 push 0x42300000 */ { u32 v_ = 0x42300000u; esp -= 4; M32(esp) = v_; }
  /* 0062b025 push 0x41b80000 */ { u32 v_ = 0x41b80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b02a mov eax, 0x7a8468 */ { eax = (u32)(0x7a8468u); }
  /* 0062b02f call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b034u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b02fu); RETCHK(0x62b034u, 0x62b02fu); LOADALL;
  /* 0062b034 push 0x42980000 */ { u32 v_ = 0x42980000u; esp -= 4; M32(esp) = v_; }
  /* 0062b039 push 0x41b80000 */ { u32 v_ = 0x41b80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b03e mov eax, 0x7a8470 */ { eax = (u32)(0x7a8470u); }
  /* 0062b043 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b048u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b043u); RETCHK(0x62b048u, 0x62b043u); LOADALL;
  /* 0062b048 push 0x42180000 */ { u32 v_ = 0x42180000u; esp -= 4; M32(esp) = v_; }
  /* 0062b04d push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b052 mov eax, 0x7a8478 */ { eax = (u32)(0x7a8478u); }
  /* 0062b057 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b05cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b057u); RETCHK(0x62b05cu, 0x62b057u); LOADALL;
  /* 0062b05c push 0x427c0000 */ { u32 v_ = 0x427c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b061 push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b066 mov eax, 0x7a8480 */ { eax = (u32)(0x7a8480u); }
  /* 0062b06b call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b070u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b06bu); RETCHK(0x62b070u, 0x62b06bu); LOADALL;
  /* 0062b070 push 0x42100000 */ { u32 v_ = 0x42100000u; esp -= 4; M32(esp) = v_; }
  /* 0062b075 push 0x41f80000 */ { u32 v_ = 0x41f80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b07a mov eax, 0x7a8488 */ { eax = (u32)(0x7a8488u); }
  /* 0062b07f call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b084u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b07fu); RETCHK(0x62b084u, 0x62b07fu); LOADALL;
  /* 0062b084 push 0x42840000 */ { u32 v_ = 0x42840000u; esp -= 4; M32(esp) = v_; }
  /* 0062b089 push 0x41f80000 */ { u32 v_ = 0x41f80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b08e mov eax, 0x7a8490 */ { eax = (u32)(0x7a8490u); }
  /* 0062b093 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b098u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b093u); RETCHK(0x62b098u, 0x62b093u); LOADALL;
  /* 0062b098 push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b09d push 0x42240000 */ { u32 v_ = 0x42240000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0a2 mov eax, 0x7a8498 */ { eax = (u32)(0x7a8498u); }
  /* 0062b0a7 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b0acu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b0a7u); RETCHK(0x62b0acu, 0x62b0a7u); LOADALL;
  /* 0062b0ac push 0x42540000 */ { u32 v_ = 0x42540000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0b1 push 0x42240000 */ { u32 v_ = 0x42240000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0b6 mov eax, 0x7a84a0 */ { eax = (u32)(0x7a84a0u); }
  /* 0062b0bb call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b0c0u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b0bbu); RETCHK(0x62b0c0u, 0x62b0bbu); LOADALL;
  /* 0062b0c0 push 0x41e00000 */ { u32 v_ = 0x41e00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0c5 push 0x422c0000 */ { u32 v_ = 0x422c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0ca mov eax, 0x7a84a8 */ { eax = (u32)(0x7a84a8u); }
  /* 0062b0cf call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b0d4u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b0cfu); RETCHK(0x62b0d4u, 0x62b0cfu); LOADALL;
  /* 0062b0d4 push 0x424c0000 */ { u32 v_ = 0x424c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0d9 push 0x422c0000 */ { u32 v_ = 0x422c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0de mov eax, 0x7a84b0 */ { eax = (u32)(0x7a84b0u); }
  /* 0062b0e3 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b0e8u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b0e3u); RETCHK(0x62b0e8u, 0x62b0e3u); LOADALL;
  /* 0062b0e8 push 0x41c00000 */ { u32 v_ = 0x41c00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0ed push 0x42500000 */ { u32 v_ = 0x42500000u; esp -= 4; M32(esp) = v_; }
  /* 0062b0f2 mov eax, 0x7a84b8 */ { eax = (u32)(0x7a84b8u); }
  /* 0062b0f7 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b0fcu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b0f7u); RETCHK(0x62b0fcu, 0x62b0f7u); LOADALL;
  /* 0062b0fc push 0x42340000 */ { u32 v_ = 0x42340000u; esp -= 4; M32(esp) = v_; }
  /* 0062b101 push 0x42500000 */ { u32 v_ = 0x42500000u; esp -= 4; M32(esp) = v_; }
  /* 0062b106 mov eax, 0x7a84c0 */ { eax = (u32)(0x7a84c0u); }
  /* 0062b10b call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b110u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b10bu); RETCHK(0x62b110u, 0x62b10bu); LOADALL;
  /* 0062b110 push 0x41b00000 */ { u32 v_ = 0x41b00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b115 push 0x42580000 */ { u32 v_ = 0x42580000u; esp -= 4; M32(esp) = v_; }
  /* 0062b11a mov eax, 0x7a84c8 */ { eax = (u32)(0x7a84c8u); }
  /* 0062b11f call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b124u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b11fu); RETCHK(0x62b124u, 0x62b11fu); LOADALL;
  /* 0062b124 push 0x42300000 */ { u32 v_ = 0x42300000u; esp -= 4; M32(esp) = v_; }
  /* 0062b129 push 0x42580000 */ { u32 v_ = 0x42580000u; esp -= 4; M32(esp) = v_; }
  /* 0062b12e mov eax, 0x7a84d0 */ { eax = (u32)(0x7a84d0u); }
  /* 0062b133 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b138u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b133u); RETCHK(0x62b138u, 0x62b133u); LOADALL;
  /* 0062b138 push 0x41900000 */ { u32 v_ = 0x41900000u; esp -= 4; M32(esp) = v_; }
  /* 0062b13d push 0x427c0000 */ { u32 v_ = 0x427c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b142 mov eax, 0x7a84d8 */ { eax = (u32)(0x7a84d8u); }
  /* 0062b147 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b14cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b147u); RETCHK(0x62b14cu, 0x62b147u); LOADALL;
  /* 0062b14c push 0x421c0000 */ { u32 v_ = 0x421c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b151 push 0x427c0000 */ { u32 v_ = 0x427c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b156 mov eax, 0x7a84e0 */ { eax = (u32)(0x7a84e0u); }
  /* 0062b15b call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b160u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b15bu); RETCHK(0x62b160u, 0x62b15bu); LOADALL;
  /* 0062b160 push 0x41880000 */ { u32 v_ = 0x41880000u; esp -= 4; M32(esp) = v_; }
  /* 0062b165 push 0x42800000 */ { u32 v_ = 0x42800000u; esp -= 4; M32(esp) = v_; }
  /* 0062b16a mov eax, 0x7a84e8 */ { eax = (u32)(0x7a84e8u); }
  /* 0062b16f call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b174u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b16fu); RETCHK(0x62b174u, 0x62b16fu); LOADALL;
  /* 0062b174 push 0x421c0000 */ { u32 v_ = 0x421c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b179 push 0x42800000 */ { u32 v_ = 0x42800000u; esp -= 4; M32(esp) = v_; }
  /* 0062b17e mov eax, 0x7a84f0 */ { eax = (u32)(0x7a84f0u); }
  /* 0062b183 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b188u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b183u); RETCHK(0x62b188u, 0x62b183u); LOADALL;
  /* 0062b188 push 0x41400000 */ { u32 v_ = 0x41400000u; esp -= 4; M32(esp) = v_; }
  /* 0062b18d push 0x429c0000 */ { u32 v_ = 0x429c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b192 mov eax, 0x7a84f8 */ { eax = (u32)(0x7a84f8u); }
  /* 0062b197 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b19cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b197u); RETCHK(0x62b19cu, 0x62b197u); LOADALL;
  /* 0062b19c push 0x420c0000 */ { u32 v_ = 0x420c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1a1 push 0x429c0000 */ { u32 v_ = 0x429c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1a6 mov eax, 0x7a8500 */ { eax = (u32)(0x7a8500u); }
  /* 0062b1ab call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b1b0u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b1abu); RETCHK(0x62b1b0u, 0x62b1abu); LOADALL;
  /* 0062b1b0 push 0x41400000 */ { u32 v_ = 0x41400000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1b5 push 0x42a00000 */ { u32 v_ = 0x42a00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1ba mov eax, 0x7a8508 */ { eax = (u32)(0x7a8508u); }
  /* 0062b1bf call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b1c4u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b1bfu); RETCHK(0x62b1c4u, 0x62b1bfu); LOADALL;
  /* 0062b1c4 push 0x420c0000 */ { u32 v_ = 0x420c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1c9 push 0x42a00000 */ { u32 v_ = 0x42a00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1ce mov eax, 0x7a8510 */ { eax = (u32)(0x7a8510u); }
  /* 0062b1d3 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b1d8u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b1d3u); RETCHK(0x62b1d8u, 0x62b1d3u); LOADALL;
  /* 0062b1d8 push 0x41100000 */ { u32 v_ = 0x41100000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1dd push 0x42b80000 */ { u32 v_ = 0x42b80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1e2 mov eax, 0x7a8518 */ { eax = (u32)(0x7a8518u); }
  /* 0062b1e7 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b1ecu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b1e7u); RETCHK(0x62b1ecu, 0x62b1e7u); LOADALL;
  /* 0062b1ec push 0x42040000 */ { u32 v_ = 0x42040000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1f1 push 0x42b80000 */ { u32 v_ = 0x42b80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b1f6 mov eax, 0x7a8520 */ { eax = (u32)(0x7a8520u); }
  /* 0062b1fb call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b200u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b1fbu); RETCHK(0x62b200u, 0x62b1fbu); LOADALL;
  /* 0062b200 push 0x40e00000 */ { u32 v_ = 0x40e00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b205 push 0x42ba0000 */ { u32 v_ = 0x42ba0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b20a mov eax, 0x7a8528 */ { eax = (u32)(0x7a8528u); }
  /* 0062b20f call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b214u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b20fu); RETCHK(0x62b214u, 0x62b20fu); LOADALL;
  /* 0062b214 push 0x42000000 */ { u32 v_ = 0x42000000u; esp -= 4; M32(esp) = v_; }
  /* 0062b219 push 0x42ba0000 */ { u32 v_ = 0x42ba0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b21e mov eax, 0x7a8530 */ { eax = (u32)(0x7a8530u); }
  /* 0062b223 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b228u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b223u); RETCHK(0x62b228u, 0x62b223u); LOADALL;
  /* 0062b228 push 0x40e00000 */ { u32 v_ = 0x40e00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b22d push 0x42d20000 */ { u32 v_ = 0x42d20000u; esp -= 4; M32(esp) = v_; }
  /* 0062b232 mov eax, 0x7a8538 */ { eax = (u32)(0x7a8538u); }
  /* 0062b237 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b23cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b237u); RETCHK(0x62b23cu, 0x62b237u); LOADALL;
  /* 0062b23c push 0x42000000 */ { u32 v_ = 0x42000000u; esp -= 4; M32(esp) = v_; }
  /* 0062b241 push 0x42d20000 */ { u32 v_ = 0x42d20000u; esp -= 4; M32(esp) = v_; }
  /* 0062b246 mov eax, 0x7a8540 */ { eax = (u32)(0x7a8540u); }
  /* 0062b24b call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b250u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b24bu); RETCHK(0x62b250u, 0x62b24bu); LOADALL;
  /* 0062b250 push 0x40c00000 */ { u32 v_ = 0x40c00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b255 push 0x42d60000 */ { u32 v_ = 0x42d60000u; esp -= 4; M32(esp) = v_; }
  /* 0062b25a mov eax, 0x7a8548 */ { eax = (u32)(0x7a8548u); }
  /* 0062b25f call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b264u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b25fu); RETCHK(0x62b264u, 0x62b25fu); LOADALL;
  /* 0062b264 push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b269 push 0x42d60000 */ { u32 v_ = 0x42d60000u; esp -= 4; M32(esp) = v_; }
  /* 0062b26e mov eax, 0x7a8550 */ { eax = (u32)(0x7a8550u); }
  /* 0062b273 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b278u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b273u); RETCHK(0x62b278u, 0x62b273u); LOADALL;
  /* 0062b278 push 0x40c00000 */ { u32 v_ = 0x40c00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b27d push 0x42f00000 */ { u32 v_ = 0x42f00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b282 mov eax, 0x7a8558 */ { eax = (u32)(0x7a8558u); }
  /* 0062b287 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b28cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b287u); RETCHK(0x62b28cu, 0x62b287u); LOADALL;
  /* 0062b28c push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b291 push 0x42f00000 */ { u32 v_ = 0x42f00000u; esp -= 4; M32(esp) = v_; }
  /* 0062b296 mov eax, 0x7a8560 */ { eax = (u32)(0x7a8560u); }
  /* 0062b29b call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b2a0u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b29bu); RETCHK(0x62b2a0u, 0x62b29bu); LOADALL;
  /* 0062b2a0 push 0x40800000 */ { u32 v_ = 0x40800000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2a5 push 0x42f20000 */ { u32 v_ = 0x42f20000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2aa mov eax, 0x7a8568 */ { eax = (u32)(0x7a8568u); }
  /* 0062b2af call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b2b4u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b2afu); RETCHK(0x62b2b4u, 0x62b2afu); LOADALL;
  /* 0062b2b4 push 0x41d80000 */ { u32 v_ = 0x41d80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2b9 push 0x42f20000 */ { u32 v_ = 0x42f20000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2be mov eax, 0x7a8570 */ { eax = (u32)(0x7a8570u); }
  /* 0062b2c3 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b2c8u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b2c3u); RETCHK(0x62b2c8u, 0x62b2c3u); LOADALL;
  /* 0062b2c8 push 0x40800000 */ { u32 v_ = 0x40800000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2cd push 0x430b0000 */ { u32 v_ = 0x430b0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2d2 mov eax, 0x7a8578 */ { eax = (u32)(0x7a8578u); }
  /* 0062b2d7 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b2dcu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b2d7u); RETCHK(0x62b2dcu, 0x62b2d7u); LOADALL;
  /* 0062b2dc push 0x41d80000 */ { u32 v_ = 0x41d80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2e1 push 0x430b0000 */ { u32 v_ = 0x430b0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2e6 mov eax, 0x7a8580 */ { eax = (u32)(0x7a8580u); }
  /* 0062b2eb call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b2f0u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b2ebu); RETCHK(0x62b2f0u, 0x62b2ebu); LOADALL;
  /* 0062b2f0 push 0x40800000 */ { u32 v_ = 0x40800000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2f5 push 0x430c0000 */ { u32 v_ = 0x430c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b2fa mov eax, 0x7a8588 */ { eax = (u32)(0x7a8588u); }
  /* 0062b2ff call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b304u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b2ffu); RETCHK(0x62b304u, 0x62b2ffu); LOADALL;
  /* 0062b304 push 0x41d80000 */ { u32 v_ = 0x41d80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b309 push 0x430c0000 */ { u32 v_ = 0x430c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b30e mov eax, 0x7a8590 */ { eax = (u32)(0x7a8590u); }
  /* 0062b313 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b318u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b313u); RETCHK(0x62b318u, 0x62b313u); LOADALL;
  /* 0062b318 push 0x40800000 */ { u32 v_ = 0x40800000u; esp -= 4; M32(esp) = v_; }
  /* 0062b31d push 0x431c0000 */ { u32 v_ = 0x431c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b322 mov eax, 0x7a8598 */ { eax = (u32)(0x7a8598u); }
  /* 0062b327 call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b32cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b327u); RETCHK(0x62b32cu, 0x62b327u); LOADALL;
  /* 0062b32c push 0x41d80000 */ { u32 v_ = 0x41d80000u; esp -= 4; M32(esp) = v_; }
  /* 0062b331 push 0x431c0000 */ { u32 v_ = 0x431c0000u; esp -= 4; M32(esp) = v_; }
  /* 0062b336 mov eax, 0x7a85a0 */ { eax = (u32)(0x7a85a0u); }
  /* 0062b33b call 0x52ce60 */ esp -= 4; M32(esp) = 0x62b340u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x62b33bu); RETCHK(0x62b340u, 0x62b33bu); LOADALL;
  /* 0062b340 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b350(CPU *c) {
  NATIVE_HOOK(0x62b350u) REGS; LOADALL;
L_0062b350:;
  /* 0062b350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b353 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b354 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b355 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b358 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b35a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b35d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b35f push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0062b361 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b368 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b36b push 0x64e0d8 */ { u32 v_ = 0x64e0d8u; esp -= 4; M32(esp) = v_; }
  /* 0062b370 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b373 call 0x404420 */ esp -= 4; M32(esp) = 0x62b378u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b373u); RETCHK(0x62b378u, 0x62b373u); LOADALL;
  /* 0062b378 mov esi, 0x7a85a8 */ { esi = (u32)(0x7a85a8u); }
  /* 0062b37d call 0x533900 */ esp -= 4; M32(esp) = 0x62b382u; SAVEALL; F_00533900(c); ABI_CHECK(0x533900u, 0x62b37du); RETCHK(0x62b382u, 0x62b37du); LOADALL;
  /* 0062b382 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b383 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b385 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b386 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b390(CPU *c) {
  NATIVE_HOOK(0x62b390u) REGS; LOADALL;
L_0062b390:;
  /* 0062b390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b393 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b394 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b395 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b398 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b39a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b39d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b39f push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0062b3a1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b3a8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b3ab push 0x6537e4 */ { u32 v_ = 0x6537e4u; esp -= 4; M32(esp) = v_; }
  /* 0062b3b0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b3b3 call 0x404420 */ esp -= 4; M32(esp) = 0x62b3b8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b3b3u); RETCHK(0x62b3b8u, 0x62b3b3u); LOADALL;
  /* 0062b3b8 mov esi, 0x7a85a9 */ { esi = (u32)(0x7a85a9u); }
  /* 0062b3bd call 0x534880 */ esp -= 4; M32(esp) = 0x62b3c2u; SAVEALL; F_00534880(c); ABI_CHECK(0x534880u, 0x62b3bdu); RETCHK(0x62b3c2u, 0x62b3bdu); LOADALL;
  /* 0062b3c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b3c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b3c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b3c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b3d0(CPU *c) {
  NATIVE_HOOK(0x62b3d0u) REGS; LOADALL;
L_0062b3d0:;
  /* 0062b3d0 mov dword ptr [0x7a85ac], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a85acu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062b3da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b3e0(CPU *c) {
  NATIVE_HOOK(0x62b3e0u) REGS; LOADALL;
L_0062b3e0:;
  /* 0062b3e0 mov dword ptr [0x7a85b0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a85b0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062b3ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b3f0(CPU *c) {
  NATIVE_HOOK(0x62b3f0u) REGS; LOADALL;
L_0062b3f0:;
  /* 0062b3f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b3f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b3f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b3f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b3f5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b3f8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b3fa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b3fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b3ff push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0062b401 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b408 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b40b push 0x649750 */ { u32 v_ = 0x649750u; esp -= 4; M32(esp) = v_; }
  /* 0062b410 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b413 call 0x404420 */ esp -= 4; M32(esp) = 0x62b418u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b413u); RETCHK(0x62b418u, 0x62b413u); LOADALL;
  /* 0062b418 mov esi, 0x7a85b4 */ { esi = (u32)(0x7a85b4u); }
  /* 0062b41d call 0x5356d0 */ esp -= 4; M32(esp) = 0x62b422u; SAVEALL; F_005356d0(c); ABI_CHECK(0x5356d0u, 0x62b41du); RETCHK(0x62b422u, 0x62b41du); LOADALL;
  /* 0062b422 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b423 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b425 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b426 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b430(CPU *c) {
  NATIVE_HOOK(0x62b430u) REGS; LOADALL;
L_0062b430:;
  /* 0062b430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b431 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b433 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b434 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b435 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b438 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b43a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b43d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b43f push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0062b441 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b448 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b44b push 0x642bd4 */ { u32 v_ = 0x642bd4u; esp -= 4; M32(esp) = v_; }
  /* 0062b450 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b453 call 0x404420 */ esp -= 4; M32(esp) = 0x62b458u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b453u); RETCHK(0x62b458u, 0x62b453u); LOADALL;
  /* 0062b458 mov esi, 0x7a85b5 */ { esi = (u32)(0x7a85b5u); }
  /* 0062b45d call 0x536260 */ esp -= 4; M32(esp) = 0x62b462u; SAVEALL; F_00536260(c); ABI_CHECK(0x536260u, 0x62b45du); RETCHK(0x62b462u, 0x62b45du); LOADALL;
  /* 0062b462 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b463 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b465 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b466 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b470(CPU *c) {
  NATIVE_HOOK(0x62b470u) REGS; LOADALL;
L_0062b470:;
  /* 0062b470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b473 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b474 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b475 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b478 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b47a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b47d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b47f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0062b481 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b488 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b48b push 0x653b64 */ { u32 v_ = 0x653b64u; esp -= 4; M32(esp) = v_; }
  /* 0062b490 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b493 call 0x404420 */ esp -= 4; M32(esp) = 0x62b498u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b493u); RETCHK(0x62b498u, 0x62b493u); LOADALL;
  /* 0062b498 mov esi, 0x7a85b6 */ { esi = (u32)(0x7a85b6u); }
  /* 0062b49d call 0x536730 */ esp -= 4; M32(esp) = 0x62b4a2u; SAVEALL; F_00536730(c); ABI_CHECK(0x536730u, 0x62b49du); RETCHK(0x62b4a2u, 0x62b49du); LOADALL;
  /* 0062b4a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b4a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b4a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b4a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b4b0(CPU *c) {
  NATIVE_HOOK(0x62b4b0u) REGS; LOADALL;
L_0062b4b0:;
  /* 0062b4b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b4b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b4b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b4b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b4b5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b4b8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b4ba mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b4bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b4bf push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0062b4c1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b4c8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b4cb push 0x653e84 */ { u32 v_ = 0x653e84u; esp -= 4; M32(esp) = v_; }
  /* 0062b4d0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b4d3 call 0x404420 */ esp -= 4; M32(esp) = 0x62b4d8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b4d3u); RETCHK(0x62b4d8u, 0x62b4d3u); LOADALL;
  /* 0062b4d8 mov esi, 0x7a85b7 */ { esi = (u32)(0x7a85b7u); }
  /* 0062b4dd call 0x536ff0 */ esp -= 4; M32(esp) = 0x62b4e2u; SAVEALL; F_00536ff0(c); ABI_CHECK(0x536ff0u, 0x62b4ddu); RETCHK(0x62b4e2u, 0x62b4ddu); LOADALL;
  /* 0062b4e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b4e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b4e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b4e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b4f0(CPU *c) {
  NATIVE_HOOK(0x62b4f0u) REGS; LOADALL;
L_0062b4f0:;
  /* 0062b4f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b4f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b4f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b4f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b4f5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b4f8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b4fa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b4fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b4ff push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0062b501 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b508 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b50b push 0x653e6c */ { u32 v_ = 0x653e6cu; esp -= 4; M32(esp) = v_; }
  /* 0062b510 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b513 call 0x404420 */ esp -= 4; M32(esp) = 0x62b518u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b513u); RETCHK(0x62b518u, 0x62b513u); LOADALL;
  /* 0062b518 mov esi, 0x7a85b8 */ { esi = (u32)(0x7a85b8u); }
  /* 0062b51d call 0x537070 */ esp -= 4; M32(esp) = 0x62b522u; SAVEALL; F_00537070(c); ABI_CHECK(0x537070u, 0x62b51du); RETCHK(0x62b522u, 0x62b51du); LOADALL;
  /* 0062b522 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b523 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b525 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b526 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b530(CPU *c) {
  NATIVE_HOOK(0x62b530u) REGS; LOADALL;
L_0062b530:;
  /* 0062b530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b533 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b534 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b535 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b538 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b53a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b53d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b53f push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0062b541 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b548 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b54b push 0x653e78 */ { u32 v_ = 0x653e78u; esp -= 4; M32(esp) = v_; }
  /* 0062b550 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b553 call 0x404420 */ esp -= 4; M32(esp) = 0x62b558u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b553u); RETCHK(0x62b558u, 0x62b553u); LOADALL;
  /* 0062b558 mov esi, 0x7a85b9 */ { esi = (u32)(0x7a85b9u); }
  /* 0062b55d call 0x5370f0 */ esp -= 4; M32(esp) = 0x62b562u; SAVEALL; F_005370f0(c); ABI_CHECK(0x5370f0u, 0x62b55du); RETCHK(0x62b562u, 0x62b55du); LOADALL;
  /* 0062b562 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b563 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b565 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b566 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b570(CPU *c) {
  NATIVE_HOOK(0x62b570u) REGS; LOADALL;
L_0062b570:;
  /* 0062b570 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b571 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b573 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b574 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b575 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b578 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b57a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b57d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b57f push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0062b581 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b588 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b58b push 0x653fcc */ { u32 v_ = 0x653fccu; esp -= 4; M32(esp) = v_; }
  /* 0062b590 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b593 call 0x404420 */ esp -= 4; M32(esp) = 0x62b598u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b593u); RETCHK(0x62b598u, 0x62b593u); LOADALL;
  /* 0062b598 mov esi, 0x7a85ba */ { esi = (u32)(0x7a85bau); }
  /* 0062b59d call 0x538630 */ esp -= 4; M32(esp) = 0x62b5a2u; SAVEALL; F_00538630(c); ABI_CHECK(0x538630u, 0x62b59du); RETCHK(0x62b5a2u, 0x62b59du); LOADALL;
  /* 0062b5a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b5a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b5a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b5a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b5b0(CPU *c) {
  NATIVE_HOOK(0x62b5b0u) REGS; LOADALL;
L_0062b5b0:;
  /* 0062b5b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b5b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b5b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b5b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b5b5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b5b8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b5ba mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b5bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b5bf push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0062b5c1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b5c8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b5cb push 0x6540c8 */ { u32 v_ = 0x6540c8u; esp -= 4; M32(esp) = v_; }
  /* 0062b5d0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b5d3 call 0x404420 */ esp -= 4; M32(esp) = 0x62b5d8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b5d3u); RETCHK(0x62b5d8u, 0x62b5d3u); LOADALL;
  /* 0062b5d8 mov esi, 0x7a85bb */ { esi = (u32)(0x7a85bbu); }
  /* 0062b5dd call 0x538770 */ esp -= 4; M32(esp) = 0x62b5e2u; SAVEALL; F_00538770(c); ABI_CHECK(0x538770u, 0x62b5ddu); RETCHK(0x62b5e2u, 0x62b5ddu); LOADALL;
  /* 0062b5e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b5e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b5e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b5e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b5f0(CPU *c) {
  NATIVE_HOOK(0x62b5f0u) REGS; LOADALL;
L_0062b5f0:;
  /* 0062b5f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b5f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b5f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b5f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b5f5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b5f8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b5fa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b5fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b5ff push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0062b601 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b608 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b60b push 0x6541e4 */ { u32 v_ = 0x6541e4u; esp -= 4; M32(esp) = v_; }
  /* 0062b610 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b613 call 0x404420 */ esp -= 4; M32(esp) = 0x62b618u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b613u); RETCHK(0x62b618u, 0x62b613u); LOADALL;
  /* 0062b618 mov esi, 0x7a85bc */ { esi = (u32)(0x7a85bcu); }
  /* 0062b61d call 0x539080 */ esp -= 4; M32(esp) = 0x62b622u; SAVEALL; F_00539080(c); ABI_CHECK(0x539080u, 0x62b61du); RETCHK(0x62b622u, 0x62b61du); LOADALL;
  /* 0062b622 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b623 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b625 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b626 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b630(CPU *c) {
  NATIVE_HOOK(0x62b630u) REGS; LOADALL;
L_0062b630:;
  /* 0062b630 mov dword ptr [0x7a85c0], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a85c0u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062b63a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b640(CPU *c) {
  NATIVE_HOOK(0x62b640u) REGS; LOADALL;
L_0062b640:;
  /* 0062b640 mov dword ptr [0x7a85c4], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a85c4u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062b64a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b650(CPU *c) {
  NATIVE_HOOK(0x62b650u) REGS; LOADALL;
L_0062b650:;
  /* 0062b650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b653 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b654 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b655 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b658 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b65a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b65d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b65f push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0062b661 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b668 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b66b push 0x654308 */ { u32 v_ = 0x654308u; esp -= 4; M32(esp) = v_; }
  /* 0062b670 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b673 call 0x404420 */ esp -= 4; M32(esp) = 0x62b678u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b673u); RETCHK(0x62b678u, 0x62b673u); LOADALL;
  /* 0062b678 mov esi, 0x7a85c8 */ { esi = (u32)(0x7a85c8u); }
  /* 0062b67d call 0x5395f0 */ esp -= 4; M32(esp) = 0x62b682u; SAVEALL; F_005395f0(c); ABI_CHECK(0x5395f0u, 0x62b67du); RETCHK(0x62b682u, 0x62b67du); LOADALL;
  /* 0062b682 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b683 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b685 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b686 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b690(CPU *c) {
  NATIVE_HOOK(0x62b690u) REGS; LOADALL;
L_0062b690:;
  /* 0062b690 mov dword ptr [0x7a85cc], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a85ccu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062b69a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b6a0(CPU *c) {
  NATIVE_HOOK(0x62b6a0u) REGS; LOADALL;
L_0062b6a0:;
  /* 0062b6a0 mov dword ptr [0x7a85d0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a85d0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062b6aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b6b0(CPU *c) {
  NATIVE_HOOK(0x62b6b0u) REGS; LOADALL;
L_0062b6b0:;
  /* 0062b6b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b6b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b6b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b6b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b6b5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b6b8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b6ba mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b6bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b6bf push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 0062b6c1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b6c8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b6cb push 0x654800 */ { u32 v_ = 0x654800u; esp -= 4; M32(esp) = v_; }
  /* 0062b6d0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b6d3 call 0x404420 */ esp -= 4; M32(esp) = 0x62b6d8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b6d3u); RETCHK(0x62b6d8u, 0x62b6d3u); LOADALL;
  /* 0062b6d8 mov esi, 0x7a85d4 */ { esi = (u32)(0x7a85d4u); }
  /* 0062b6dd call 0x53d170 */ esp -= 4; M32(esp) = 0x62b6e2u; SAVEALL; F_0053d170(c); ABI_CHECK(0x53d170u, 0x62b6ddu); RETCHK(0x62b6e2u, 0x62b6ddu); LOADALL;
  /* 0062b6e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b6e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b6e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b6e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b6f0(CPU *c) {
  NATIVE_HOOK(0x62b6f0u) REGS; LOADALL;
L_0062b6f0:;
  /* 0062b6f0 mov dword ptr [0x7a85d8], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a85d8u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062b6fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b700(CPU *c) {
  NATIVE_HOOK(0x62b700u) REGS; LOADALL;
L_0062b700:;
  /* 0062b700 mov dword ptr [0x7a85dc], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a85dcu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062b70a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b710(CPU *c) {
  NATIVE_HOOK(0x62b710u) REGS; LOADALL;
L_0062b710:;
  /* 0062b710 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b711 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b713 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b714 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b715 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b718 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b71a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b71d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b71f push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0062b721 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b728 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b72b push 0x654a5c */ { u32 v_ = 0x654a5cu; esp -= 4; M32(esp) = v_; }
  /* 0062b730 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b733 call 0x404420 */ esp -= 4; M32(esp) = 0x62b738u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b733u); RETCHK(0x62b738u, 0x62b733u); LOADALL;
  /* 0062b738 mov esi, 0x7a85e0 */ { esi = (u32)(0x7a85e0u); }
  /* 0062b73d call 0x53f860 */ esp -= 4; M32(esp) = 0x62b742u; SAVEALL; F_0053f860(c); ABI_CHECK(0x53f860u, 0x62b73du); RETCHK(0x62b742u, 0x62b73du); LOADALL;
  /* 0062b742 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b743 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b745 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b746 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b750(CPU *c) {
  NATIVE_HOOK(0x62b750u) REGS; LOADALL;
L_0062b750:;
  /* 0062b750 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b751 mov esi, 0x7a85e4 */ { esi = (u32)(0x7a85e4u); }
  /* 0062b756 call 0x4d0a40 */ esp -= 4; M32(esp) = 0x62b75bu; SAVEALL; F_004d0a40(c); ABI_CHECK(0x4d0a40u, 0x62b756u); RETCHK(0x62b75bu, 0x62b756u); LOADALL;
  /* 0062b75b push 0x62c720 */ { u32 v_ = 0x62c720u; esp -= 4; M32(esp) = v_; }
  /* 0062b760 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b765u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b760u); RETCHK(0x62b765u, 0x62b760u); LOADALL;
  /* 0062b765 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b768 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b769 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b770(CPU *c) {
  NATIVE_HOOK(0x62b770u) REGS; LOADALL;
L_0062b770:;
  /* 0062b770 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b771 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b773 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b774 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b775 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b778 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b77a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b77d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b77f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0062b781 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b788 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b78b push 0x654bec */ { u32 v_ = 0x654becu; esp -= 4; M32(esp) = v_; }
  /* 0062b790 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b793 call 0x404420 */ esp -= 4; M32(esp) = 0x62b798u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b793u); RETCHK(0x62b798u, 0x62b793u); LOADALL;
  /* 0062b798 mov esi, 0x7a85f0 */ { esi = (u32)(0x7a85f0u); }
  /* 0062b79d call 0x5402b0 */ esp -= 4; M32(esp) = 0x62b7a2u; SAVEALL; F_005402b0(c); ABI_CHECK(0x5402b0u, 0x62b79du); RETCHK(0x62b7a2u, 0x62b79du); LOADALL;
  /* 0062b7a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b7a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b7a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b7a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b7b0(CPU *c) {
  NATIVE_HOOK(0x62b7b0u) REGS; LOADALL;
L_0062b7b0:;
  /* 0062b7b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b7b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b7b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b7b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b7b5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b7b8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b7ba mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b7bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b7bf push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0062b7c1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b7c8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b7cb push 0x654cfc */ { u32 v_ = 0x654cfcu; esp -= 4; M32(esp) = v_; }
  /* 0062b7d0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b7d3 call 0x404420 */ esp -= 4; M32(esp) = 0x62b7d8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b7d3u); RETCHK(0x62b7d8u, 0x62b7d3u); LOADALL;
  /* 0062b7d8 mov esi, 0x7a85f1 */ { esi = (u32)(0x7a85f1u); }
  /* 0062b7dd call 0x5407b0 */ esp -= 4; M32(esp) = 0x62b7e2u; SAVEALL; F_005407b0(c); ABI_CHECK(0x5407b0u, 0x62b7ddu); RETCHK(0x62b7e2u, 0x62b7ddu); LOADALL;
  /* 0062b7e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b7e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b7e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b7e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b7f0(CPU *c) {
  NATIVE_HOOK(0x62b7f0u) REGS; LOADALL;
L_0062b7f0:;
  /* 0062b7f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062b7f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062b7f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062b7f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b7f5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b7f8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062b7fa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062b7fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062b7ff push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0062b801 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062b808 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062b80b push 0x654e10 */ { u32 v_ = 0x654e10u; esp -= 4; M32(esp) = v_; }
  /* 0062b810 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062b813 call 0x404420 */ esp -= 4; M32(esp) = 0x62b818u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b813u); RETCHK(0x62b818u, 0x62b813u); LOADALL;
  /* 0062b818 mov esi, 0x7a85f2 */ { esi = (u32)(0x7a85f2u); }
  /* 0062b81d call 0x540db0 */ esp -= 4; M32(esp) = 0x62b822u; SAVEALL; F_00540db0(c); ABI_CHECK(0x540db0u, 0x62b81du); RETCHK(0x62b822u, 0x62b81du); LOADALL;
  /* 0062b822 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b823 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062b825 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062b826 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b830(CPU *c) {
  NATIVE_HOOK(0x62b830u) REGS; LOADALL;
L_0062b830:;
  /* 0062b830 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b831 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 0062b836 call 0x540ea0 */ esp -= 4; M32(esp) = 0x62b83bu; SAVEALL; F_00540ea0(c); ABI_CHECK(0x540ea0u, 0x62b836u); RETCHK(0x62b83bu, 0x62b836u); LOADALL;
  /* 0062b83b push 0x62c730 */ { u32 v_ = 0x62c730u; esp -= 4; M32(esp) = v_; }
  /* 0062b840 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b845u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b840u); RETCHK(0x62b845u, 0x62b840u); LOADALL;
  /* 0062b845 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062b848 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b849 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b850(CPU *c) {
  NATIVE_HOOK(0x62b850u) REGS; LOADALL;
L_0062b850:;
  /* 0062b850 push 0x7a85f8 */ { u32 v_ = 0x7a85f8u; esp -= 4; M32(esp) = v_; }
  /* 0062b855 call 0x5410c0 */ esp -= 4; M32(esp) = 0x62b85au; SAVEALL; F_005410c0(c); ABI_CHECK(0x5410c0u, 0x62b855u); RETCHK(0x62b85au, 0x62b855u); LOADALL;
  /* 0062b85a push 0x62c740 */ { u32 v_ = 0x62c740u; esp -= 4; M32(esp) = v_; }
  /* 0062b85f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b864u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b85fu); RETCHK(0x62b864u, 0x62b85fu); LOADALL;
  /* 0062b864 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b865 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b870(CPU *c) {
  NATIVE_HOOK(0x62b870u) REGS; LOADALL;
L_0062b870:;
  /* 0062b870 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062b872 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0062b877 mov ecx, 0x68a5b4 */ { ecx = (u32)(0x68a5b4u); }
  /* 0062b87c call 0x404420 */ esp -= 4; M32(esp) = 0x62b881u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62b87cu); RETCHK(0x62b881u, 0x62b87cu); LOADALL;
  /* 0062b881 push 0x62c750 */ { u32 v_ = 0x62c750u; esp -= 4; M32(esp) = v_; }
  /* 0062b886 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b88bu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b886u); RETCHK(0x62b88bu, 0x62b886u); LOADALL;
  /* 0062b88b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b88c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b890(CPU *c) {
  NATIVE_HOOK(0x62b890u) REGS; LOADALL;
L_0062b890:;
  /* 0062b890 mov dword ptr [0x7a8618], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8618u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062b89a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b8a0(CPU *c) {
  NATIVE_HOOK(0x62b8a0u) REGS; LOADALL;
L_0062b8a0:;
  /* 0062b8a0 mov dword ptr [0x7a861c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a861cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062b8aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b8b0(CPU *c) {
  NATIVE_HOOK(0x62b8b0u) REGS; LOADALL;
L_0062b8b0:;
  /* 0062b8b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062b8b1 mov esi, 0x62d6d5 */ { esi = (u32)(0x62d6d5u); }
  /* 0062b8b6 nop */ ;
  /* 0062b8b7 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0062b8bc call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x62b8beu; SAVEALL; call_ind(c, t_); RETCHK(0x62b8beu, 0x62b8bcu); LOADALL; }
  /* 0062b8be push 0x650bfc */ { u32 v_ = 0x650bfcu; esp -= 4; M32(esp) = v_; }
  /* 0062b8c3 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x62b8c5u; SAVEALL; call_ind(c, t_); RETCHK(0x62b8c5u, 0x62b8c3u); LOADALL; }
  /* 0062b8c5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062b8c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b8d0(CPU *c) {
  NATIVE_HOOK(0x62b8d0u) REGS; LOADALL;
L_0062b8d0:;
  /* 0062b8d0 push 0x7a8624 */ { u32 v_ = 0x7a8624u; esp -= 4; M32(esp) = v_; }
  /* 0062b8d5 call 0x542840 */ esp -= 4; M32(esp) = 0x62b8dau; SAVEALL; F_00542840(c); ABI_CHECK(0x542840u, 0x62b8d5u); RETCHK(0x62b8dau, 0x62b8d5u); LOADALL;
  /* 0062b8da push 0x62c780 */ { u32 v_ = 0x62c780u; esp -= 4; M32(esp) = v_; }
  /* 0062b8df call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b8e4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b8dfu); RETCHK(0x62b8e4u, 0x62b8dfu); LOADALL;
  /* 0062b8e4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b8e5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b8f0(CPU *c) {
  NATIVE_HOOK(0x62b8f0u) REGS; LOADALL;
L_0062b8f0:;
  /* 0062b8f0 push 0x7a8634 */ { u32 v_ = 0x7a8634u; esp -= 4; M32(esp) = v_; }
  /* 0062b8f5 call 0x542930 */ esp -= 4; M32(esp) = 0x62b8fau; SAVEALL; F_00542930(c); ABI_CHECK(0x542930u, 0x62b8f5u); RETCHK(0x62b8fau, 0x62b8f5u); LOADALL;
  /* 0062b8fa push 0x62c790 */ { u32 v_ = 0x62c790u; esp -= 4; M32(esp) = v_; }
  /* 0062b8ff call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b904u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b8ffu); RETCHK(0x62b904u, 0x62b8ffu); LOADALL;
  /* 0062b904 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b905 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b910(CPU *c) {
  NATIVE_HOOK(0x62b910u) REGS; LOADALL;
L_0062b910:;
  /* 0062b910 push 0x7a8644 */ { u32 v_ = 0x7a8644u; esp -= 4; M32(esp) = v_; }
  /* 0062b915 call 0x542a50 */ esp -= 4; M32(esp) = 0x62b91au; SAVEALL; F_00542a50(c); ABI_CHECK(0x542a50u, 0x62b915u); RETCHK(0x62b91au, 0x62b915u); LOADALL;
  /* 0062b91a push 0x62c7a0 */ { u32 v_ = 0x62c7a0u; esp -= 4; M32(esp) = v_; }
  /* 0062b91f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b924u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b91fu); RETCHK(0x62b924u, 0x62b91fu); LOADALL;
  /* 0062b924 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b925 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b930(CPU *c) {
  NATIVE_HOOK(0x62b930u) REGS; LOADALL;
L_0062b930:;
  /* 0062b930 push 0x7a8654 */ { u32 v_ = 0x7a8654u; esp -= 4; M32(esp) = v_; }
  /* 0062b935 call 0x542c40 */ esp -= 4; M32(esp) = 0x62b93au; SAVEALL; F_00542c40(c); ABI_CHECK(0x542c40u, 0x62b935u); RETCHK(0x62b93au, 0x62b935u); LOADALL;
  /* 0062b93a push 0x62c7b0 */ { u32 v_ = 0x62c7b0u; esp -= 4; M32(esp) = v_; }
  /* 0062b93f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b944u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b93fu); RETCHK(0x62b944u, 0x62b93fu); LOADALL;
  /* 0062b944 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b945 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b950(CPU *c) {
  NATIVE_HOOK(0x62b950u) REGS; LOADALL;
L_0062b950:;
  /* 0062b950 push 0x7a8664 */ { u32 v_ = 0x7a8664u; esp -= 4; M32(esp) = v_; }
  /* 0062b955 call 0x542cb0 */ esp -= 4; M32(esp) = 0x62b95au; SAVEALL; F_00542cb0(c); ABI_CHECK(0x542cb0u, 0x62b955u); RETCHK(0x62b95au, 0x62b955u); LOADALL;
  /* 0062b95a push 0x62c7c0 */ { u32 v_ = 0x62c7c0u; esp -= 4; M32(esp) = v_; }
  /* 0062b95f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b964u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b95fu); RETCHK(0x62b964u, 0x62b95fu); LOADALL;
  /* 0062b964 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b965 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b970(CPU *c) {
  NATIVE_HOOK(0x62b970u) REGS; LOADALL;
L_0062b970:;
  /* 0062b970 push 0x7a8674 */ { u32 v_ = 0x7a8674u; esp -= 4; M32(esp) = v_; }
  /* 0062b975 call 0x542d20 */ esp -= 4; M32(esp) = 0x62b97au; SAVEALL; F_00542d20(c); ABI_CHECK(0x542d20u, 0x62b975u); RETCHK(0x62b97au, 0x62b975u); LOADALL;
  /* 0062b97a push 0x62c7d0 */ { u32 v_ = 0x62c7d0u; esp -= 4; M32(esp) = v_; }
  /* 0062b97f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b984u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b97fu); RETCHK(0x62b984u, 0x62b97fu); LOADALL;
  /* 0062b984 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b985 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b990(CPU *c) {
  NATIVE_HOOK(0x62b990u) REGS; LOADALL;
L_0062b990:;
  /* 0062b990 push 0x7a8684 */ { u32 v_ = 0x7a8684u; esp -= 4; M32(esp) = v_; }
  /* 0062b995 call 0x542de0 */ esp -= 4; M32(esp) = 0x62b99au; SAVEALL; F_00542de0(c); ABI_CHECK(0x542de0u, 0x62b995u); RETCHK(0x62b99au, 0x62b995u); LOADALL;
  /* 0062b99a push 0x62c7e0 */ { u32 v_ = 0x62c7e0u; esp -= 4; M32(esp) = v_; }
  /* 0062b99f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b9a4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b99fu); RETCHK(0x62b9a4u, 0x62b99fu); LOADALL;
  /* 0062b9a4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b9a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b9b0(CPU *c) {
  NATIVE_HOOK(0x62b9b0u) REGS; LOADALL;
L_0062b9b0:;
  /* 0062b9b0 push 0x7a8694 */ { u32 v_ = 0x7a8694u; esp -= 4; M32(esp) = v_; }
  /* 0062b9b5 call 0x542f50 */ esp -= 4; M32(esp) = 0x62b9bau; SAVEALL; F_00542f50(c); ABI_CHECK(0x542f50u, 0x62b9b5u); RETCHK(0x62b9bau, 0x62b9b5u); LOADALL;
  /* 0062b9ba push 0x62c7f0 */ { u32 v_ = 0x62c7f0u; esp -= 4; M32(esp) = v_; }
  /* 0062b9bf call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b9c4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b9bfu); RETCHK(0x62b9c4u, 0x62b9bfu); LOADALL;
  /* 0062b9c4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b9c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b9d0(CPU *c) {
  NATIVE_HOOK(0x62b9d0u) REGS; LOADALL;
L_0062b9d0:;
  /* 0062b9d0 push 0x7a86a4 */ { u32 v_ = 0x7a86a4u; esp -= 4; M32(esp) = v_; }
  /* 0062b9d5 call 0x543040 */ esp -= 4; M32(esp) = 0x62b9dau; SAVEALL; F_00543040(c); ABI_CHECK(0x543040u, 0x62b9d5u); RETCHK(0x62b9dau, 0x62b9d5u); LOADALL;
  /* 0062b9da push 0x62c800 */ { u32 v_ = 0x62c800u; esp -= 4; M32(esp) = v_; }
  /* 0062b9df call 0x5fe916 */ esp -= 4; M32(esp) = 0x62b9e4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b9dfu); RETCHK(0x62b9e4u, 0x62b9dfu); LOADALL;
  /* 0062b9e4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062b9e5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062b9f0(CPU *c) {
  NATIVE_HOOK(0x62b9f0u) REGS; LOADALL;
L_0062b9f0:;
  /* 0062b9f0 push 0x7a86b4 */ { u32 v_ = 0x7a86b4u; esp -= 4; M32(esp) = v_; }
  /* 0062b9f5 call 0x543150 */ esp -= 4; M32(esp) = 0x62b9fau; SAVEALL; F_00543150(c); ABI_CHECK(0x543150u, 0x62b9f5u); RETCHK(0x62b9fau, 0x62b9f5u); LOADALL;
  /* 0062b9fa push 0x62c810 */ { u32 v_ = 0x62c810u; esp -= 4; M32(esp) = v_; }
  /* 0062b9ff call 0x5fe916 */ esp -= 4; M32(esp) = 0x62ba04u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62b9ffu); RETCHK(0x62ba04u, 0x62b9ffu); LOADALL;
  /* 0062ba04 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062ba05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ba10(CPU *c) {
  NATIVE_HOOK(0x62ba10u) REGS; LOADALL;
L_0062ba10:;
  /* 0062ba10 push 0x7a86c4 */ { u32 v_ = 0x7a86c4u; esp -= 4; M32(esp) = v_; }
  /* 0062ba15 call 0x543210 */ esp -= 4; M32(esp) = 0x62ba1au; SAVEALL; F_00543210(c); ABI_CHECK(0x543210u, 0x62ba15u); RETCHK(0x62ba1au, 0x62ba15u); LOADALL;
  /* 0062ba1a push 0x62c820 */ { u32 v_ = 0x62c820u; esp -= 4; M32(esp) = v_; }
  /* 0062ba1f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62ba24u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62ba1fu); RETCHK(0x62ba24u, 0x62ba1fu); LOADALL;
  /* 0062ba24 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062ba25 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ba30(CPU *c) {
  NATIVE_HOOK(0x62ba30u) REGS; LOADALL;
L_0062ba30:;
  /* 0062ba30 push 0x7a86d4 */ { u32 v_ = 0x7a86d4u; esp -= 4; M32(esp) = v_; }
  /* 0062ba35 call 0x5432d0 */ esp -= 4; M32(esp) = 0x62ba3au; SAVEALL; F_005432d0(c); ABI_CHECK(0x5432d0u, 0x62ba35u); RETCHK(0x62ba3au, 0x62ba35u); LOADALL;
  /* 0062ba3a push 0x62c830 */ { u32 v_ = 0x62c830u; esp -= 4; M32(esp) = v_; }
  /* 0062ba3f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62ba44u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62ba3fu); RETCHK(0x62ba44u, 0x62ba3fu); LOADALL;
  /* 0062ba44 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062ba45 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ba50(CPU *c) {
  NATIVE_HOOK(0x62ba50u) REGS; LOADALL;
L_0062ba50:;
  /* 0062ba50 push 0x7a86e4 */ { u32 v_ = 0x7a86e4u; esp -= 4; M32(esp) = v_; }
  /* 0062ba55 call 0x543350 */ esp -= 4; M32(esp) = 0x62ba5au; SAVEALL; F_00543350(c); ABI_CHECK(0x543350u, 0x62ba55u); RETCHK(0x62ba5au, 0x62ba55u); LOADALL;
  /* 0062ba5a push 0x62c840 */ { u32 v_ = 0x62c840u; esp -= 4; M32(esp) = v_; }
  /* 0062ba5f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62ba64u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62ba5fu); RETCHK(0x62ba64u, 0x62ba5fu); LOADALL;
  /* 0062ba64 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062ba65 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ba70(CPU *c) {
  NATIVE_HOOK(0x62ba70u) REGS; LOADALL;
L_0062ba70:;
  /* 0062ba70 push 0x7a86f4 */ { u32 v_ = 0x7a86f4u; esp -= 4; M32(esp) = v_; }
  /* 0062ba75 call 0x5433d0 */ esp -= 4; M32(esp) = 0x62ba7au; SAVEALL; F_005433d0(c); ABI_CHECK(0x5433d0u, 0x62ba75u); RETCHK(0x62ba7au, 0x62ba75u); LOADALL;
  /* 0062ba7a push 0x62c850 */ { u32 v_ = 0x62c850u; esp -= 4; M32(esp) = v_; }
  /* 0062ba7f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62ba84u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62ba7fu); RETCHK(0x62ba84u, 0x62ba7fu); LOADALL;
  /* 0062ba84 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062ba85 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ba90(CPU *c) {
  NATIVE_HOOK(0x62ba90u) REGS; LOADALL;
L_0062ba90:;
  /* 0062ba90 push 0x7a8704 */ { u32 v_ = 0x7a8704u; esp -= 4; M32(esp) = v_; }
  /* 0062ba95 call 0x543440 */ esp -= 4; M32(esp) = 0x62ba9au; SAVEALL; F_00543440(c); ABI_CHECK(0x543440u, 0x62ba95u); RETCHK(0x62ba9au, 0x62ba95u); LOADALL;
  /* 0062ba9a push 0x62c860 */ { u32 v_ = 0x62c860u; esp -= 4; M32(esp) = v_; }
  /* 0062ba9f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62baa4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62ba9fu); RETCHK(0x62baa4u, 0x62ba9fu); LOADALL;
  /* 0062baa4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062baa5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bab0(CPU *c) {
  NATIVE_HOOK(0x62bab0u) REGS; LOADALL;
L_0062bab0:;
  /* 0062bab0 push 0x7a8714 */ { u32 v_ = 0x7a8714u; esp -= 4; M32(esp) = v_; }
  /* 0062bab5 call 0x5434c0 */ esp -= 4; M32(esp) = 0x62babau; SAVEALL; F_005434c0(c); ABI_CHECK(0x5434c0u, 0x62bab5u); RETCHK(0x62babau, 0x62bab5u); LOADALL;
  /* 0062baba push 0x62c870 */ { u32 v_ = 0x62c870u; esp -= 4; M32(esp) = v_; }
  /* 0062babf call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bac4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62babfu); RETCHK(0x62bac4u, 0x62babfu); LOADALL;
  /* 0062bac4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bac5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bad0(CPU *c) {
  NATIVE_HOOK(0x62bad0u) REGS; LOADALL;
L_0062bad0:;
  /* 0062bad0 push 0x7a8724 */ { u32 v_ = 0x7a8724u; esp -= 4; M32(esp) = v_; }
  /* 0062bad5 call 0x5435e0 */ esp -= 4; M32(esp) = 0x62badau; SAVEALL; F_005435e0(c); ABI_CHECK(0x5435e0u, 0x62bad5u); RETCHK(0x62badau, 0x62bad5u); LOADALL;
  /* 0062bada push 0x62c880 */ { u32 v_ = 0x62c880u; esp -= 4; M32(esp) = v_; }
  /* 0062badf call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bae4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62badfu); RETCHK(0x62bae4u, 0x62badfu); LOADALL;
  /* 0062bae4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bae5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062baf0(CPU *c) {
  NATIVE_HOOK(0x62baf0u) REGS; LOADALL;
L_0062baf0:;
  /* 0062baf0 mov dword ptr [0x7a8734], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8734u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bafa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb00(CPU *c) {
  NATIVE_HOOK(0x62bb00u) REGS; LOADALL;
L_0062bb00:;
  /* 0062bb00 mov dword ptr [0x7a8738], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8738u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bb0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb10(CPU *c) {
  NATIVE_HOOK(0x62bb10u) REGS; LOADALL;
L_0062bb10:;
  /* 0062bb10 mov dword ptr [0x7a873c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a873cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bb1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb20(CPU *c) {
  NATIVE_HOOK(0x62bb20u) REGS; LOADALL;
L_0062bb20:;
  /* 0062bb20 mov dword ptr [0x7a8740], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8740u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bb2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb30(CPU *c) {
  NATIVE_HOOK(0x62bb30u) REGS; LOADALL;
L_0062bb30:;
  /* 0062bb30 mov dword ptr [0x7a8744], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8744u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bb3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb40(CPU *c) {
  NATIVE_HOOK(0x62bb40u) REGS; LOADALL;
L_0062bb40:;
  /* 0062bb40 mov dword ptr [0x7a8748], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8748u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bb4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb50(CPU *c) {
  NATIVE_HOOK(0x62bb50u) REGS; LOADALL;
L_0062bb50:;
  /* 0062bb50 mov dword ptr [0x7a874c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a874cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bb5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb60(CPU *c) {
  NATIVE_HOOK(0x62bb60u) REGS; LOADALL;
L_0062bb60:;
  /* 0062bb60 mov dword ptr [0x7a8750], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8750u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bb6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb70(CPU *c) {
  NATIVE_HOOK(0x62bb70u) REGS; LOADALL;
L_0062bb70:;
  /* 0062bb70 mov dword ptr [0x7a8754], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8754u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bb7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb80(CPU *c) {
  NATIVE_HOOK(0x62bb80u) REGS; LOADALL;
L_0062bb80:;
  /* 0062bb80 mov dword ptr [0x7a8758], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8758u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bb8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bb90(CPU *c) {
  NATIVE_HOOK(0x62bb90u) REGS; LOADALL;
L_0062bb90:;
  /* 0062bb90 mov dword ptr [0x7a875c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a875cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bb9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bba0(CPU *c) {
  NATIVE_HOOK(0x62bba0u) REGS; LOADALL;
L_0062bba0:;
  /* 0062bba0 mov dword ptr [0x7a8760], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8760u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bbaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bbb0(CPU *c) {
  NATIVE_HOOK(0x62bbb0u) REGS; LOADALL;
L_0062bbb0:;
  /* 0062bbb0 mov dword ptr [0x7a8764], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8764u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bbba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bbc0(CPU *c) {
  NATIVE_HOOK(0x62bbc0u) REGS; LOADALL;
L_0062bbc0:;
  /* 0062bbc0 mov dword ptr [0x7a8768], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8768u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bbca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bbd0(CPU *c) {
  NATIVE_HOOK(0x62bbd0u) REGS; LOADALL;
L_0062bbd0:;
  /* 0062bbd0 mov dword ptr [0x7a876c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a876cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bbda ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bbe0(CPU *c) {
  NATIVE_HOOK(0x62bbe0u) REGS; LOADALL;
L_0062bbe0:;
  /* 0062bbe0 mov dword ptr [0x7a8770], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8770u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bbea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bbf0(CPU *c) {
  NATIVE_HOOK(0x62bbf0u) REGS; LOADALL;
L_0062bbf0:;
  /* 0062bbf0 mov dword ptr [0x7a8774], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8774u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bbfa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bc00(CPU *c) {
  NATIVE_HOOK(0x62bc00u) REGS; LOADALL;
L_0062bc00:;
  /* 0062bc00 mov dword ptr [0x7a8778], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8778u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bc0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bc10(CPU *c) {
  NATIVE_HOOK(0x62bc10u) REGS; LOADALL;
L_0062bc10:;
  /* 0062bc10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062bc11 mov esi, 0x7a877c */ { esi = (u32)(0x7a877cu); }
  /* 0062bc16 call 0x54c2b0 */ esp -= 4; M32(esp) = 0x62bc1bu; SAVEALL; F_0054c2b0(c); ABI_CHECK(0x54c2b0u, 0x62bc16u); RETCHK(0x62bc1bu, 0x62bc16u); LOADALL;
  /* 0062bc1b push 0x62c8b0 */ { u32 v_ = 0x62c8b0u; esp -= 4; M32(esp) = v_; }
  /* 0062bc20 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bc25u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bc20u); RETCHK(0x62bc25u, 0x62bc20u); LOADALL;
  /* 0062bc25 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062bc28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062bc29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bc30(CPU *c) {
  NATIVE_HOOK(0x62bc30u) REGS; LOADALL;
L_0062bc30:;
  /* 0062bc30 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0062bc35 call 0x62d6d5 */ esp -= 4; M32(esp) = 0x62bc3au; SAVEALL; F_0062d6d5(c); ABI_CHECK(0x62d6d5u, 0x62bc35u); RETCHK(0x62bc3au, 0x62bc35u); LOADALL;
  /* 0062bc3a nop */ ;
  /* 0062bc3b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bc40(CPU *c) {
  NATIVE_HOOK(0x62bc40u) REGS; LOADALL;
L_0062bc40:;
  /* 0062bc40 push 0x7a8788 */ { u32 v_ = 0x7a8788u; esp -= 4; M32(esp) = v_; }
  /* 0062bc45 call 0x54d330 */ esp -= 4; M32(esp) = 0x62bc4au; SAVEALL; F_0054d330(c); ABI_CHECK(0x54d330u, 0x62bc45u); RETCHK(0x62bc4au, 0x62bc45u); LOADALL;
  /* 0062bc4a push 0x62c8c0 */ { u32 v_ = 0x62c8c0u; esp -= 4; M32(esp) = v_; }
  /* 0062bc4f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bc54u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bc4fu); RETCHK(0x62bc54u, 0x62bc4fu); LOADALL;
  /* 0062bc54 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bc55 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bc60(CPU *c) {
  NATIVE_HOOK(0x62bc60u) REGS; LOADALL;
L_0062bc60:;
  /* 0062bc60 mov dword ptr [0x7a879c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a879cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bc6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bc70(CPU *c) {
  NATIVE_HOOK(0x62bc70u) REGS; LOADALL;
L_0062bc70:;
  /* 0062bc70 mov dword ptr [0x7a87a0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a87a0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bc7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bc80(CPU *c) {
  NATIVE_HOOK(0x62bc80u) REGS; LOADALL;
L_0062bc80:;
  /* 0062bc80 push 0x62c8d0 */ { u32 v_ = 0x62c8d0u; esp -= 4; M32(esp) = v_; }
  /* 0062bc85 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bc8au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bc85u); RETCHK(0x62bc8au, 0x62bc85u); LOADALL;
  /* 0062bc8a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bc8b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bc90(CPU *c) {
  NATIVE_HOOK(0x62bc90u) REGS; LOADALL;
L_0062bc90:;
  /* 0062bc90 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062bc92 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0062bc97 mov ecx, 0x68a5f0 */ { ecx = (u32)(0x68a5f0u); }
  /* 0062bc9c call 0x404420 */ esp -= 4; M32(esp) = 0x62bca1u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62bc9cu); RETCHK(0x62bca1u, 0x62bc9cu); LOADALL;
  /* 0062bca1 push 0x62c900 */ { u32 v_ = 0x62c900u; esp -= 4; M32(esp) = v_; }
  /* 0062bca6 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bcabu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bca6u); RETCHK(0x62bcabu, 0x62bca6u); LOADALL;
  /* 0062bcab pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bcac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bcb0(CPU *c) {
  NATIVE_HOOK(0x62bcb0u) REGS; LOADALL;
L_0062bcb0:;
  /* 0062bcb0 mov dword ptr [0x7a87a4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a87a4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bcba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bcc0(CPU *c) {
  NATIVE_HOOK(0x62bcc0u) REGS; LOADALL;
L_0062bcc0:;
  /* 0062bcc0 mov dword ptr [0x7a87a8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a87a8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bcca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bcd0(CPU *c) {
  NATIVE_HOOK(0x62bcd0u) REGS; LOADALL;
L_0062bcd0:;
  /* 0062bcd0 mov dword ptr [0x7a87ac], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a87acu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bcda ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bce0(CPU *c) {
  NATIVE_HOOK(0x62bce0u) REGS; LOADALL;
L_0062bce0:;
  /* 0062bce0 mov dword ptr [0x7a87b0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a87b0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bcea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bcf0(CPU *c) {
  NATIVE_HOOK(0x62bcf0u) REGS; LOADALL;
L_0062bcf0:;
  /* 0062bcf0 mov dword ptr [0x7a87b4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a87b4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bcfa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bd00(CPU *c) {
  NATIVE_HOOK(0x62bd00u) REGS; LOADALL;
L_0062bd00:;
  /* 0062bd00 mov dword ptr [0x7a87b8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a87b8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bd0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bd10(CPU *c) {
  NATIVE_HOOK(0x62bd10u) REGS; LOADALL;
L_0062bd10:;
  /* 0062bd10 mov dword ptr [0x7a87c0], 5 */ { const u32 m_ = (u32)(0x7a87c0u); M32(m_) = (u32)(0x5u); }
  /* 0062bd1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bd20(CPU *c) {
  NATIVE_HOOK(0x62bd20u) REGS; LOADALL;
L_0062bd20:;
  /* 0062bd20 mov eax, dword ptr [0x7a87c0] */ { const u32 m_ = (u32)(0x7a87c0u); eax = (u32)(M32(m_)); }
  /* 0062bd25 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062bd27 mov dword ptr [0x7a87bc], eax */ { const u32 m_ = (u32)(0x7a87bcu); M32(m_) = (u32)(eax); }
  /* 0062bd2c jg 0x62bd38 */ if (!(ZF_|LT_)) goto L_0062bd38;
  /* 0062bd2e mov dword ptr [0x7a87bc], 1 */ { const u32 m_ = (u32)(0x7a87bcu); M32(m_) = (u32)(0x1u); }
L_0062bd38:;
  /* 0062bd38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bd40(CPU *c) {
  NATIVE_HOOK(0x62bd40u) REGS; LOADALL;
L_0062bd40:;
  /* 0062bd40 push 0x655dbc */ { u32 v_ = 0x655dbcu; esp -= 4; M32(esp) = v_; }
  /* 0062bd45 call 0x62d6d5 */ esp -= 4; M32(esp) = 0x62bd4au; SAVEALL; F_0062d6d5(c); ABI_CHECK(0x62d6d5u, 0x62bd45u); RETCHK(0x62bd4au, 0x62bd45u); LOADALL;
  /* 0062bd4a nop */ ;
  /* 0062bd4b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bd50(CPU *c) {
  NATIVE_HOOK(0x62bd50u) REGS; LOADALL;
L_0062bd50:;
  /* 0062bd50 mov dword ptr [0x7a87c8], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a87c8u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bd5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bd60(CPU *c) {
  NATIVE_HOOK(0x62bd60u) REGS; LOADALL;
L_0062bd60:;
  /* 0062bd60 mov dword ptr [0x7a87cc], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a87ccu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bd6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bd70(CPU *c) {
  NATIVE_HOOK(0x62bd70u) REGS; LOADALL;
L_0062bd70:;
  /* 0062bd70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062bd71 mov esi, 0x7a87d0 */ { esi = (u32)(0x7a87d0u); }
  /* 0062bd76 call 0x55d9e0 */ esp -= 4; M32(esp) = 0x62bd7bu; SAVEALL; F_0055d9e0(c); ABI_CHECK(0x55d9e0u, 0x62bd76u); RETCHK(0x62bd7bu, 0x62bd76u); LOADALL;
  /* 0062bd7b push 0x62c980 */ { u32 v_ = 0x62c980u; esp -= 4; M32(esp) = v_; }
  /* 0062bd80 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bd85u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bd80u); RETCHK(0x62bd85u, 0x62bd80u); LOADALL;
  /* 0062bd85 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062bd88 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062bd89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bd90(CPU *c) {
  NATIVE_HOOK(0x62bd90u) REGS; LOADALL;
L_0062bd90:;
  /* 0062bd90 mov eax, 0x9b8814 */ { eax = (u32)(0x9b8814u); }
  /* 0062bd95 call 0x55dac0 */ esp -= 4; M32(esp) = 0x62bd9au; SAVEALL; F_0055dac0(c); ABI_CHECK(0x55dac0u, 0x62bd95u); RETCHK(0x62bd9au, 0x62bd95u); LOADALL;
  /* 0062bd9a push 0x62c990 */ { u32 v_ = 0x62c990u; esp -= 4; M32(esp) = v_; }
  /* 0062bd9f call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bda4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bd9fu); RETCHK(0x62bda4u, 0x62bd9fu); LOADALL;
  /* 0062bda4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bda5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bdb0(CPU *c) {
  NATIVE_HOOK(0x62bdb0u) REGS; LOADALL;
L_0062bdb0:;
  /* 0062bdb0 mov dword ptr [0x9b8828], 0x42652ee0 */ { const u32 m_ = (u32)(0x9b8828u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062bdba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bdc0(CPU *c) {
  NATIVE_HOOK(0x62bdc0u) REGS; LOADALL;
L_0062bdc0:;
  /* 0062bdc0 mov dword ptr [0x9b882c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x9b882cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062bdca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bdd0(CPU *c) {
  NATIVE_HOOK(0x62bdd0u) REGS; LOADALL;
L_0062bdd0:;
  /* 0062bdd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062bdd1 mov esi, 0x9b8830 */ { esi = (u32)(0x9b8830u); }
  /* 0062bdd6 call 0x5640a0 */ esp -= 4; M32(esp) = 0x62bddbu; SAVEALL; F_005640a0(c); ABI_CHECK(0x5640a0u, 0x62bdd6u); RETCHK(0x62bddbu, 0x62bdd6u); LOADALL;
  /* 0062bddb push 0x62c9a0 */ { u32 v_ = 0x62c9a0u; esp -= 4; M32(esp) = v_; }
  /* 0062bde0 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bde5u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bde0u); RETCHK(0x62bde5u, 0x62bde0u); LOADALL;
  /* 0062bde5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062bde8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062bde9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bdf0(CPU *c) {
  NATIVE_HOOK(0x62bdf0u) REGS; LOADALL;
L_0062bdf0:;
  /* 0062bdf0 push 0x9b883c */ { u32 v_ = 0x9b883cu; esp -= 4; M32(esp) = v_; }
  /* 0062bdf5 call 0x564550 */ esp -= 4; M32(esp) = 0x62bdfau; SAVEALL; F_00564550(c); ABI_CHECK(0x564550u, 0x62bdf5u); RETCHK(0x62bdfau, 0x62bdf5u); LOADALL;
  /* 0062bdfa push 0x62c9b0 */ { u32 v_ = 0x62c9b0u; esp -= 4; M32(esp) = v_; }
  /* 0062bdff call 0x5fe916 */ esp -= 4; M32(esp) = 0x62be04u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bdffu); RETCHK(0x62be04u, 0x62bdffu); LOADALL;
  /* 0062be04 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062be05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be10(CPU *c) {
  NATIVE_HOOK(0x62be10u) REGS; LOADALL;
L_0062be10:;
  /* 0062be10 mov dword ptr [0x9b8858], 0x42652ee0 */ { const u32 m_ = (u32)(0x9b8858u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062be1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be20(CPU *c) {
  NATIVE_HOOK(0x62be20u) REGS; LOADALL;
L_0062be20:;
  /* 0062be20 mov dword ptr [0x9b885c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x9b885cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062be2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be30(CPU *c) {
  NATIVE_HOOK(0x62be30u) REGS; LOADALL;
L_0062be30:;
  /* 0062be30 mov dword ptr [0x9b8860], 0x42652ee0 */ { const u32 m_ = (u32)(0x9b8860u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062be3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be40(CPU *c) {
  NATIVE_HOOK(0x62be40u) REGS; LOADALL;
L_0062be40:;
  /* 0062be40 mov dword ptr [0x9b8864], 0x3c8efa35 */ { const u32 m_ = (u32)(0x9b8864u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062be4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be50(CPU *c) {
  NATIVE_HOOK(0x62be50u) REGS; LOADALL;
L_0062be50:;
  /* 0062be50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062be51 mov edi, 0x9b8868 */ { edi = (u32)(0x9b8868u); }
  /* 0062be56 call 0x5662a0 */ esp -= 4; M32(esp) = 0x62be5bu; SAVEALL; F_005662a0(c); ABI_CHECK(0x5662a0u, 0x62be56u); RETCHK(0x62be5bu, 0x62be56u); LOADALL;
  /* 0062be5b push 0x62c9c0 */ { u32 v_ = 0x62c9c0u; esp -= 4; M32(esp) = v_; }
  /* 0062be60 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62be65u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62be60u); RETCHK(0x62be65u, 0x62be60u); LOADALL;
  /* 0062be65 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062be68 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062be69 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be70(CPU *c) {
  NATIVE_HOOK(0x62be70u) REGS; LOADALL;
L_0062be70:;
  /* 0062be70 mov dword ptr [0x9b8884], 0x42652ee0 */ { const u32 m_ = (u32)(0x9b8884u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062be7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be80(CPU *c) {
  NATIVE_HOOK(0x62be80u) REGS; LOADALL;
L_0062be80:;
  /* 0062be80 mov dword ptr [0x9b8888], 0x3c8efa35 */ { const u32 m_ = (u32)(0x9b8888u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062be8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be8b(CPU *c) {
  NATIVE_HOOK(0x62be8bu) REGS; LOADALL;
L_0062be8b:;
  /* 0062be8b push 0x62c9d1 */ { u32 v_ = 0x62c9d1u; esp -= 4; M32(esp) = v_; }
  /* 0062be90 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62be95u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62be90u); RETCHK(0x62be95u, 0x62be90u); LOADALL;
  /* 0062be95 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062be96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062be97(CPU *c) {
  NATIVE_HOOK(0x62be97u) REGS; LOADALL;
L_0062be97:;
  /* 0062be97 mov ecx, 0x694668 */ { ecx = (u32)(0x694668u); }
  /* 0062be9c call 0x601e39 */ esp -= 4; M32(esp) = 0x62bea1u; SAVEALL; F_00601e39(c); ABI_CHECK(0x601e39u, 0x62be9cu); RETCHK(0x62bea1u, 0x62be9cu); LOADALL;
  /* 0062bea1 push 0x62c9db */ { u32 v_ = 0x62c9dbu; esp -= 4; M32(esp) = v_; }
  /* 0062bea6 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62beabu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bea6u); RETCHK(0x62beabu, 0x62bea6u); LOADALL;
  /* 0062beab pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062beac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bead(CPU *c) {
  NATIVE_HOOK(0x62beadu) REGS; LOADALL;
L_0062bead:;
  /* 0062bead mov ecx, 0x6946cc */ { ecx = (u32)(0x6946ccu); }
  /* 0062beb2 call 0x601e39 */ esp -= 4; M32(esp) = 0x62beb7u; SAVEALL; F_00601e39(c); ABI_CHECK(0x601e39u, 0x62beb2u); RETCHK(0x62beb7u, 0x62beb2u); LOADALL;
  /* 0062beb7 push 0x62c9e5 */ { u32 v_ = 0x62c9e5u; esp -= 4; M32(esp) = v_; }
  /* 0062bebc call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bec1u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bebcu); RETCHK(0x62bec1u, 0x62bebcu); LOADALL;
  /* 0062bec1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bec2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bec3(CPU *c) {
  NATIVE_HOOK(0x62bec3u) REGS; LOADALL;
L_0062bec3:;
  /* 0062bec3 call 0x61af64 */ esp -= 4; M32(esp) = 0x62bec8u; SAVEALL; F_0061af64(c); ABI_CHECK(0x61af64u, 0x62bec3u); RETCHK(0x62bec8u, 0x62bec3u); LOADALL;
  /* 0062bec8 add eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0062becb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062becc mov ecx, 0x694670 */ { ecx = (u32)(0x694670u); }
  /* 0062bed1 call 0x4ff480 */ esp -= 4; M32(esp) = 0x62bed6u; SAVEALL; F_004ff480(c); ABI_CHECK(0x4ff480u, 0x62bed1u); RETCHK(0x62bed6u, 0x62bed1u); LOADALL;
  /* 0062bed6 push 0x62ca0b */ { u32 v_ = 0x62ca0bu; esp -= 4; M32(esp) = v_; }
  /* 0062bedb call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bee0u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bedbu); RETCHK(0x62bee0u, 0x62bedbu); LOADALL;
  /* 0062bee0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bee1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bee2(CPU *c) {
  NATIVE_HOOK(0x62bee2u) REGS; LOADALL;
L_0062bee2:;
  /* 0062bee2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0062bee4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062bee6 push 0x694670 */ { u32 v_ = 0x694670u; esp -= 4; M32(esp) = v_; }
  /* 0062beeb mov ecx, 0x6946d0 */ { ecx = (u32)(0x6946d0u); }
  /* 0062bef0 call 0x4d2530 */ esp -= 4; M32(esp) = 0x62bef5u; SAVEALL; F_004d2530(c); ABI_CHECK(0x4d2530u, 0x62bef0u); RETCHK(0x62bef5u, 0x62bef0u); LOADALL;
  /* 0062bef5 push 0x62c9ef */ { u32 v_ = 0x62c9efu; esp -= 4; M32(esp) = v_; }
  /* 0062befa call 0x5fe916 */ esp -= 4; M32(esp) = 0x62beffu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62befau); RETCHK(0x62beffu, 0x62befau); LOADALL;
  /* 0062beff pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bf00 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bf01(CPU *c) {
  NATIVE_HOOK(0x62bf01u) REGS; LOADALL;
  goto L_0062bf01;
L_0060239a:;
  /* 0060239a mov edx, dword ptr [0x69470c] */ { const u32 m_ = (u32)(0x69470cu); edx = (u32)(M32(m_)); }
  /* 006023a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006023a1 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 006023a3 mov ecx, dword ptr [0x6946d0] */ { const u32 m_ = (u32)(0x6946d0u); ecx = (u32)(M32(m_)); }
  /* 006023a9 mov esi, 0x6946d0 */ { esi = (u32)(0x6946d0u); }
  /* 006023ae mov dword ptr [0x694710], esi */ { const u32 m_ = (u32)(0x694710u); M32(m_) = (u32)(esi); }
  /* 006023b4 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006023b7 mov dword ptr [ecx + 0x6946fc], edx */ { const u32 m_ = (u32)(ecx + 0x6946fcu); M32(m_) = (u32)(edx); }
  /* 006023bd mov ecx, dword ptr [0x6946d0] */ { const u32 m_ = (u32)(0x6946d0u); ecx = (u32)(M32(m_)); }
  /* 006023c3 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 006023c6 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006023c8 or dword ptr [edx + 0x10], 2 */ { const u32 m_ = (u32)(edx + 0x10u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 006023cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006023cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062bf01:;
  /* 0062bf01 mov ecx, 0x6946cd */ { ecx = (u32)(0x6946cdu); }
  /* 0062bf06 jmp 0x60239a */ goto L_0060239a;
}

void F_0062bf0b(CPU *c) {
  NATIVE_HOOK(0x62bf0bu) REGS; LOADALL;
L_0062bf0b:;
  /* 0062bf0b mov ecx, 0x694750 */ { ecx = (u32)(0x694750u); }
  /* 0062bf10 call 0x601e39 */ esp -= 4; M32(esp) = 0x62bf15u; SAVEALL; F_00601e39(c); ABI_CHECK(0x601e39u, 0x62bf10u); RETCHK(0x62bf15u, 0x62bf10u); LOADALL;
  /* 0062bf15 push 0x62ca15 */ { u32 v_ = 0x62ca15u; esp -= 4; M32(esp) = v_; }
  /* 0062bf1a call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bf1fu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bf1au); RETCHK(0x62bf1fu, 0x62bf1au); LOADALL;
  /* 0062bf1f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bf20 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bf21(CPU *c) {
  NATIVE_HOOK(0x62bf21u) REGS; LOADALL;
L_0062bf21:;
  /* 0062bf21 push 0x62ca1f */ { u32 v_ = 0x62ca1fu; esp -= 4; M32(esp) = v_; }
  /* 0062bf26 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bf2bu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bf26u); RETCHK(0x62bf2bu, 0x62bf26u); LOADALL;
  /* 0062bf2b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bf2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bf2d(CPU *c) {
  NATIVE_HOOK(0x62bf2du) REGS; LOADALL;
L_0062bf2d:;
  /* 0062bf2d mov ecx, 0x694754 */ { ecx = (u32)(0x694754u); }
  /* 0062bf32 call 0x6024d0 */ esp -= 4; M32(esp) = 0x62bf37u; SAVEALL; F_006024d0(c); ABI_CHECK(0x6024d0u, 0x62bf32u); RETCHK(0x62bf37u, 0x62bf32u); LOADALL;
  /* 0062bf37 push 0x62ca29 */ { u32 v_ = 0x62ca29u; esp -= 4; M32(esp) = v_; }
  /* 0062bf3c call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bf41u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bf3cu); RETCHK(0x62bf41u, 0x62bf3cu); LOADALL;
  /* 0062bf41 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bf42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bf50(CPU *c) {
  NATIVE_HOOK(0x62bf50u) REGS; LOADALL;
L_0062bf50:;
  /* 0062bf50 push 0x62ca40 */ { u32 v_ = 0x62ca40u; esp -= 4; M32(esp) = v_; }
  /* 0062bf55 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62bf5au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62bf55u); RETCHK(0x62bf5au, 0x62bf55u); LOADALL;
  /* 0062bf5a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062bf5b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bf60(CPU *c) {
  NATIVE_HOOK(0x62bf60u) REGS; LOADALL;
L_0062bf60:;
  /* 0062bf60 push 0x401830 */ { u32 v_ = 0x401830u; esp -= 4; M32(esp) = v_; }
  /* 0062bf65 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0062bf67 push 0x1180 */ { u32 v_ = 0x1180u; esp -= 4; M32(esp) = v_; }
  /* 0062bf6c push 0x9bb280 */ { u32 v_ = 0x9bb280u; esp -= 4; M32(esp) = v_; }
  /* 0062bf71 call 0x5fe890 */ esp -= 4; M32(esp) = 0x62bf76u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x62bf71u); RETCHK(0x62bf76u, 0x62bf71u); LOADALL;
  /* 0062bf76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bf80(CPU *c) {
  NATIVE_HOOK(0x62bf80u) REGS; LOADALL;
  goto L_0062bf80;
L_00405cd0:;
  /* 00405cd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00405cd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00405cd3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00405cd4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00405cd5 mov esi, eax */ { esi = (u32)(eax); }
  /* 00405cd7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00405cda mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00405cdc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00405cdd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00405cde lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00405ce1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00405ce2 call 0x406010 */ esp -= 4; M32(esp) = 0x405ce7u; SAVEALL; F_00406010(c); ABI_CHECK(0x406010u, 0x405ce2u); RETCHK(0x405ce7u, 0x405ce2u); LOADALL;
  /* 00405ce7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00405cea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00405ceb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x405cf0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x405cebu); RETCHK(0x405cf0u, 0x405cebu); LOADALL;
  /* 00405cf0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00405cf3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00405cf5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00405cf8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00405cfb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00405cfc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00405cfe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00405cff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062bf80:;
  /* 0062bf80 mov eax, 0x9bb26c */ { eax = (u32)(0x9bb26cu); }
  /* 0062bf85 jmp 0x405cd0 */ goto L_00405cd0;
}

void F_0062bf90(CPU *c) {
  NATIVE_HOOK(0x62bf90u) REGS; LOADALL;
L_0062bf90:;
  /* 0062bf90 cmp dword ptr [0x68a3f0], 0x10 */ { const u32 m_ = (u32)(0x68a3f0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062bf97 jb 0x62bfa7 */ if (CF_) goto L_0062bfa7;
  /* 0062bf99 mov eax, dword ptr [0x68a3dc] */ { const u32 m_ = (u32)(0x68a3dcu); eax = (u32)(M32(m_)); }
  /* 0062bf9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062bf9f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62bfa4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62bf9fu); RETCHK(0x62bfa4u, 0x62bf9fu); LOADALL;
  /* 0062bfa4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062bfa7:;
  /* 0062bfa7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062bfa9 mov dword ptr [0x68a3f0], 0xf */ { const u32 m_ = (u32)(0x68a3f0u); M32(m_) = (u32)(0xfu); }
  /* 0062bfb3 mov dword ptr [0x68a3ec], eax */ { const u32 m_ = (u32)(0x68a3ecu); M32(m_) = (u32)(eax); }
  /* 0062bfb8 mov byte ptr [0x68a3dc], al */ { const u32 m_ = (u32)(0x68a3dcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062bfbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bfc0(CPU *c) {
  NATIVE_HOOK(0x62bfc0u) REGS; LOADALL;
L_0062bfc0:;
  /* 0062bfc0 cmp dword ptr [0x68a40c], 0x10 */ { const u32 m_ = (u32)(0x68a40cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062bfc7 jb 0x62bfd7 */ if (CF_) goto L_0062bfd7;
  /* 0062bfc9 mov eax, dword ptr [0x68a3f8] */ { const u32 m_ = (u32)(0x68a3f8u); eax = (u32)(M32(m_)); }
  /* 0062bfce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062bfcf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62bfd4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62bfcfu); RETCHK(0x62bfd4u, 0x62bfcfu); LOADALL;
  /* 0062bfd4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062bfd7:;
  /* 0062bfd7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062bfd9 mov dword ptr [0x68a40c], 0xf */ { const u32 m_ = (u32)(0x68a40cu); M32(m_) = (u32)(0xfu); }
  /* 0062bfe3 mov dword ptr [0x68a408], eax */ { const u32 m_ = (u32)(0x68a408u); M32(m_) = (u32)(eax); }
  /* 0062bfe8 mov byte ptr [0x68a3f8], al */ { const u32 m_ = (u32)(0x68a3f8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062bfed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062bff0(CPU *c) {
  NATIVE_HOOK(0x62bff0u) REGS; LOADALL;
L_0062bff0:;
  /* 0062bff0 cmp dword ptr [0x68a428], 0x10 */ { const u32 m_ = (u32)(0x68a428u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062bff7 jb 0x62c007 */ if (CF_) goto L_0062c007;
  /* 0062bff9 mov eax, dword ptr [0x68a414] */ { const u32 m_ = (u32)(0x68a414u); eax = (u32)(M32(m_)); }
  /* 0062bffe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062bfff call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c004u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62bfffu); RETCHK(0x62c004u, 0x62bfffu); LOADALL;
  /* 0062c004 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c007:;
  /* 0062c007 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c009 mov dword ptr [0x68a428], 0xf */ { const u32 m_ = (u32)(0x68a428u); M32(m_) = (u32)(0xfu); }
  /* 0062c013 mov dword ptr [0x68a424], eax */ { const u32 m_ = (u32)(0x68a424u); M32(m_) = (u32)(eax); }
  /* 0062c018 mov byte ptr [0x68a414], al */ { const u32 m_ = (u32)(0x68a414u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c01d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c020(CPU *c) {
  NATIVE_HOOK(0x62c020u) REGS; LOADALL;
L_0062c020:;
  /* 0062c020 cmp dword ptr [0x68a444], 0x10 */ { const u32 m_ = (u32)(0x68a444u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c027 jb 0x62c037 */ if (CF_) goto L_0062c037;
  /* 0062c029 mov eax, dword ptr [0x68a430] */ { const u32 m_ = (u32)(0x68a430u); eax = (u32)(M32(m_)); }
  /* 0062c02e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c02f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c034u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c02fu); RETCHK(0x62c034u, 0x62c02fu); LOADALL;
  /* 0062c034 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c037:;
  /* 0062c037 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c039 mov dword ptr [0x68a444], 0xf */ { const u32 m_ = (u32)(0x68a444u); M32(m_) = (u32)(0xfu); }
  /* 0062c043 mov dword ptr [0x68a440], eax */ { const u32 m_ = (u32)(0x68a440u); M32(m_) = (u32)(eax); }
  /* 0062c048 mov byte ptr [0x68a430], al */ { const u32 m_ = (u32)(0x68a430u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c04d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c050(CPU *c) {
  NATIVE_HOOK(0x62c050u) REGS; LOADALL;
L_0062c050:;
  /* 0062c050 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c051 mov esi, 0x9b9678 */ { esi = (u32)(0x9b9678u); }
  /* 0062c056 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c05bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c056u); RETCHK(0x62c05bu, 0x62c056u); LOADALL;
  /* 0062c05b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c05c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c060(CPU *c) {
  NATIVE_HOOK(0x62c060u) REGS; LOADALL;
L_0062c060:;
  /* 0062c060 cmp dword ptr [0x68a460], 0x10 */ { const u32 m_ = (u32)(0x68a460u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c067 jb 0x62c077 */ if (CF_) goto L_0062c077;
  /* 0062c069 mov eax, dword ptr [0x68a44c] */ { const u32 m_ = (u32)(0x68a44cu); eax = (u32)(M32(m_)); }
  /* 0062c06e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c06f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c074u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c06fu); RETCHK(0x62c074u, 0x62c06fu); LOADALL;
  /* 0062c074 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c077:;
  /* 0062c077 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c079 mov dword ptr [0x68a460], 0xf */ { const u32 m_ = (u32)(0x68a460u); M32(m_) = (u32)(0xfu); }
  /* 0062c083 mov dword ptr [0x68a45c], eax */ { const u32 m_ = (u32)(0x68a45cu); M32(m_) = (u32)(eax); }
  /* 0062c088 mov byte ptr [0x68a44c], al */ { const u32 m_ = (u32)(0x68a44cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c08d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c090(CPU *c) {
  NATIVE_HOOK(0x62c090u) REGS; LOADALL;
L_0062c090:;
  /* 0062c090 cmp dword ptr [0x68a47c], 0x10 */ { const u32 m_ = (u32)(0x68a47cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c097 jb 0x62c0a7 */ if (CF_) goto L_0062c0a7;
  /* 0062c099 mov eax, dword ptr [0x68a468] */ { const u32 m_ = (u32)(0x68a468u); eax = (u32)(M32(m_)); }
  /* 0062c09e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c09f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c0a4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c09fu); RETCHK(0x62c0a4u, 0x62c09fu); LOADALL;
  /* 0062c0a4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c0a7:;
  /* 0062c0a7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c0a9 mov dword ptr [0x68a47c], 0xf */ { const u32 m_ = (u32)(0x68a47cu); M32(m_) = (u32)(0xfu); }
  /* 0062c0b3 mov dword ptr [0x68a478], eax */ { const u32 m_ = (u32)(0x68a478u); M32(m_) = (u32)(eax); }
  /* 0062c0b8 mov byte ptr [0x68a468], al */ { const u32 m_ = (u32)(0x68a468u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c0bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c0c0(CPU *c) {
  NATIVE_HOOK(0x62c0c0u) REGS; LOADALL;
  goto L_0062c0c0;
L_0041b520:;
  /* 0041b520 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041b521 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041b523 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041b524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041b525 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041b527 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041b52a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0041b52c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041b52d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041b52e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0041b531 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041b532 call 0x41b8a0 */ esp -= 4; M32(esp) = 0x41b537u; SAVEALL; F_0041b8a0(c); ABI_CHECK(0x41b8a0u, 0x41b532u); RETCHK(0x41b537u, 0x41b532u); LOADALL;
  /* 0041b537 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0041b53a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041b53b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41b540u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41b53bu); RETCHK(0x41b540u, 0x41b53bu); LOADALL;
  /* 0041b540 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041b543 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041b545 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041b548 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0041b54b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041b54c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041b54e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041b54f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c0c0:;
  /* 0062c0c0 mov eax, 0x9bb258 */ { eax = (u32)(0x9bb258u); }
  /* 0062c0c5 jmp 0x41b520 */ goto L_0041b520;
}

void F_0062c0d0(CPU *c) {
  NATIVE_HOOK(0x62c0d0u) REGS; LOADALL;
L_0062c0d0:;
  /* 0062c0d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c0e0(CPU *c) {
  NATIVE_HOOK(0x62c0e0u) REGS; LOADALL;
L_0062c0e0:;
  /* 0062c0e0 cmp dword ptr [0x68a498], 0x10 */ { const u32 m_ = (u32)(0x68a498u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c0e7 jb 0x62c0f7 */ if (CF_) goto L_0062c0f7;
  /* 0062c0e9 mov eax, dword ptr [0x68a484] */ { const u32 m_ = (u32)(0x68a484u); eax = (u32)(M32(m_)); }
  /* 0062c0ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c0ef call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c0f4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c0efu); RETCHK(0x62c0f4u, 0x62c0efu); LOADALL;
  /* 0062c0f4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c0f7:;
  /* 0062c0f7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c0f9 mov dword ptr [0x68a498], 0xf */ { const u32 m_ = (u32)(0x68a498u); M32(m_) = (u32)(0xfu); }
  /* 0062c103 mov dword ptr [0x68a494], eax */ { const u32 m_ = (u32)(0x68a494u); M32(m_) = (u32)(eax); }
  /* 0062c108 mov byte ptr [0x68a484], al */ { const u32 m_ = (u32)(0x68a484u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c10d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c110(CPU *c) {
  NATIVE_HOOK(0x62c110u) REGS; LOADALL;
  goto L_0062c110;
L_00470620:;
  /* 00470620 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00470621 mov esi, eax */ { esi = (u32)(eax); }
  /* 00470623 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00470626 call 0x470370 */ esp -= 4; M32(esp) = 0x47062bu; SAVEALL; F_00470370(c); ABI_CHECK(0x470370u, 0x470626u); RETCHK(0x47062bu, 0x470626u); LOADALL;
  /* 0047062b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0047062c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c110:;
  /* 0062c110 mov eax, 0x9bdce0 */ { eax = (u32)(0x9bdce0u); }
  /* 0062c115 jmp 0x470620 */ goto L_00470620;
}

void F_0062c120(CPU *c) {
  NATIVE_HOOK(0x62c120u) REGS; LOADALL;
L_0062c120:;
  /* 0062c120 cmp dword ptr [0x68a4b4], 0x10 */ { const u32 m_ = (u32)(0x68a4b4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c127 jb 0x62c137 */ if (CF_) goto L_0062c137;
  /* 0062c129 mov eax, dword ptr [0x68a4a0] */ { const u32 m_ = (u32)(0x68a4a0u); eax = (u32)(M32(m_)); }
  /* 0062c12e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c12f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c134u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c12fu); RETCHK(0x62c134u, 0x62c12fu); LOADALL;
  /* 0062c134 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c137:;
  /* 0062c137 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c139 mov dword ptr [0x68a4b4], 0xf */ { const u32 m_ = (u32)(0x68a4b4u); M32(m_) = (u32)(0xfu); }
  /* 0062c143 mov dword ptr [0x68a4b0], eax */ { const u32 m_ = (u32)(0x68a4b0u); M32(m_) = (u32)(eax); }
  /* 0062c148 mov byte ptr [0x68a4a0], al */ { const u32 m_ = (u32)(0x68a4a0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c14d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c150(CPU *c) {
  NATIVE_HOOK(0x62c150u) REGS; LOADALL;
L_0062c150:;
  /* 0062c150 mov ecx, 0x9bda50 */ { ecx = (u32)(0x9bda50u); }
  /* 0062c155 jmp 0x534e60 */ SAVEALL; F_00534e60(c); return;
}

void F_0062c160(CPU *c) {
  NATIVE_HOOK(0x62c160u) REGS; LOADALL;
  goto L_0062c160;
L_0044b8c0:;
  /* 0044b8c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0044b8c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0044b8c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0044b8c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0044b8c5 mov esi, eax */ { esi = (u32)(eax); }
  /* 0044b8c7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0044b8ca mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0044b8cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0044b8cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0044b8ce lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0044b8d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0044b8d2 call 0x44baa0 */ esp -= 4; M32(esp) = 0x44b8d7u; SAVEALL; F_0044baa0(c); ABI_CHECK(0x44baa0u, 0x44b8d2u); RETCHK(0x44b8d7u, 0x44b8d2u); LOADALL;
  /* 0044b8d7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0044b8da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0044b8db call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x44b8e0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x44b8dbu); RETCHK(0x44b8e0u, 0x44b8dbu); LOADALL;
  /* 0044b8e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0044b8e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0044b8e5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0044b8e8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0044b8eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0044b8ec mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0044b8ee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0044b8ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c160:;
  /* 0062c160 mov eax, 0x9bae44 */ { eax = (u32)(0x9bae44u); }
  /* 0062c165 jmp 0x44b8c0 */ goto L_0044b8c0;
}

void F_0062c170(CPU *c) {
  NATIVE_HOOK(0x62c170u) REGS; LOADALL;
L_0062c170:;
  /* 0062c170 mov ecx, 0x9be140 */ { ecx = (u32)(0x9be140u); }
  /* 0062c175 jmp 0x45bd90 */ SAVEALL; F_0045bd90(c); return;
}

void F_0062c180(CPU *c) {
  NATIVE_HOOK(0x62c180u) REGS; LOADALL;
L_0062c180:;
  /* 0062c180 cmp dword ptr [0x68a4d0], 0x10 */ { const u32 m_ = (u32)(0x68a4d0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c187 jb 0x62c197 */ if (CF_) goto L_0062c197;
  /* 0062c189 mov eax, dword ptr [0x68a4bc] */ { const u32 m_ = (u32)(0x68a4bcu); eax = (u32)(M32(m_)); }
  /* 0062c18e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c18f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c194u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c18fu); RETCHK(0x62c194u, 0x62c18fu); LOADALL;
  /* 0062c194 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c197:;
  /* 0062c197 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c199 mov dword ptr [0x68a4d0], 0xf */ { const u32 m_ = (u32)(0x68a4d0u); M32(m_) = (u32)(0xfu); }
  /* 0062c1a3 mov dword ptr [0x68a4cc], eax */ { const u32 m_ = (u32)(0x68a4ccu); M32(m_) = (u32)(eax); }
  /* 0062c1a8 mov byte ptr [0x68a4bc], al */ { const u32 m_ = (u32)(0x68a4bcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c1ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c1b0(CPU *c) {
  NATIVE_HOOK(0x62c1b0u) REGS; LOADALL;
L_0062c1b0:;
  /* 0062c1b0 mov eax, dword ptr [0x7a7254] */ { const u32 m_ = (u32)(0x7a7254u); eax = (u32)(M32(m_)); }
  /* 0062c1b5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062c1b7 je 0x62c1c2 */ if (ZF_) goto L_0062c1c2;
  /* 0062c1b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c1ba call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c1bfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c1bau); RETCHK(0x62c1bfu, 0x62c1bau); LOADALL;
  /* 0062c1bf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c1c2:;
  /* 0062c1c2 mov dword ptr [0x7a7254], 0 */ { const u32 m_ = (u32)(0x7a7254u); M32(m_) = (u32)(0x0u); }
  /* 0062c1cc mov dword ptr [0x7a7258], 0 */ { const u32 m_ = (u32)(0x7a7258u); M32(m_) = (u32)(0x0u); }
  /* 0062c1d6 mov dword ptr [0x7a725c], 0 */ { const u32 m_ = (u32)(0x7a725cu); M32(m_) = (u32)(0x0u); }
  /* 0062c1e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c1f0(CPU *c) {
  NATIVE_HOOK(0x62c1f0u) REGS; LOADALL;
L_0062c1f0:;
  /* 0062c1f0 mov eax, dword ptr [0x7a7264] */ { const u32 m_ = (u32)(0x7a7264u); eax = (u32)(M32(m_)); }
  /* 0062c1f5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062c1f7 je 0x62c202 */ if (ZF_) goto L_0062c202;
  /* 0062c1f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c1fa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c1ffu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c1fau); RETCHK(0x62c1ffu, 0x62c1fau); LOADALL;
  /* 0062c1ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c202:;
  /* 0062c202 mov dword ptr [0x7a7264], 0 */ { const u32 m_ = (u32)(0x7a7264u); M32(m_) = (u32)(0x0u); }
  /* 0062c20c mov dword ptr [0x7a7268], 0 */ { const u32 m_ = (u32)(0x7a7268u); M32(m_) = (u32)(0x0u); }
  /* 0062c216 mov dword ptr [0x7a726c], 0 */ { const u32 m_ = (u32)(0x7a726cu); M32(m_) = (u32)(0x0u); }
  /* 0062c220 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c230(CPU *c) {
  NATIVE_HOOK(0x62c230u) REGS; LOADALL;
L_0062c230:;
  /* 0062c230 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062c231 mov edi, 0x7a7280 */ { edi = (u32)(0x7a7280u); }
  /* 0062c236 call 0x45c410 */ esp -= 4; M32(esp) = 0x62c23bu; SAVEALL; F_0045c410(c); ABI_CHECK(0x45c410u, 0x62c236u); RETCHK(0x62c23bu, 0x62c236u); LOADALL;
  /* 0062c23b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062c23c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c240(CPU *c) {
  NATIVE_HOOK(0x62c240u) REGS; LOADALL;
L_0062c240:;
  /* 0062c240 cmp dword ptr [0x9b9460], 0x10 */ { const u32 m_ = (u32)(0x9b9460u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c247 jb 0x62c257 */ if (CF_) goto L_0062c257;
  /* 0062c249 mov eax, dword ptr [0x9b944c] */ { const u32 m_ = (u32)(0x9b944cu); eax = (u32)(M32(m_)); }
  /* 0062c24e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c24f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c254u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c24fu); RETCHK(0x62c254u, 0x62c24fu); LOADALL;
  /* 0062c254 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c257:;
  /* 0062c257 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c259 mov dword ptr [0x9b9460], 0xf */ { const u32 m_ = (u32)(0x9b9460u); M32(m_) = (u32)(0xfu); }
  /* 0062c263 mov dword ptr [0x9b945c], eax */ { const u32 m_ = (u32)(0x9b945cu); M32(m_) = (u32)(eax); }
  /* 0062c268 mov byte ptr [0x9b944c], al */ { const u32 m_ = (u32)(0x9b944cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c26d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c270(CPU *c) {
  NATIVE_HOOK(0x62c270u) REGS; LOADALL;
L_0062c270:;
  /* 0062c270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062c271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062c273 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062c274 mov eax, dword ptr [0x7a7320] */ { const u32 m_ = (u32)(0x7a7320u); eax = (u32)(M32(m_)); }
  /* 0062c279 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062c27b je 0x62c29d */ if (ZF_) goto L_0062c29d;
  /* 0062c27d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0062c280 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062c281 mov edi, dword ptr [0x7a7324] */ { const u32 m_ = (u32)(0x7a7324u); edi = (u32)(M32(m_)); }
  /* 0062c287 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062c288 call 0x403f60 */ esp -= 4; M32(esp) = 0x62c28du; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x62c288u); RETCHK(0x62c28du, 0x62c288u); LOADALL;
  /* 0062c28d mov edx, dword ptr [0x7a7320] */ { const u32 m_ = (u32)(0x7a7320u); edx = (u32)(M32(m_)); }
  /* 0062c293 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062c294 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c299u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c294u); RETCHK(0x62c299u, 0x62c294u); LOADALL;
  /* 0062c299 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062c29c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0062c29d:;
  /* 0062c29d mov dword ptr [0x7a7320], 0 */ { const u32 m_ = (u32)(0x7a7320u); M32(m_) = (u32)(0x0u); }
  /* 0062c2a7 mov dword ptr [0x7a7324], 0 */ { const u32 m_ = (u32)(0x7a7324u); M32(m_) = (u32)(0x0u); }
  /* 0062c2b1 mov dword ptr [0x7a7328], 0 */ { const u32 m_ = (u32)(0x7a7328u); M32(m_) = (u32)(0x0u); }
  /* 0062c2bb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062c2bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062c2be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c2c0(CPU *c) {
  NATIVE_HOOK(0x62c2c0u) REGS; LOADALL;
L_0062c2c0:;
  /* 0062c2c0 mov eax, dword ptr [0x7a7330] */ { const u32 m_ = (u32)(0x7a7330u); eax = (u32)(M32(m_)); }
  /* 0062c2c5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062c2c7 je 0x62c2d2 */ if (ZF_) goto L_0062c2d2;
  /* 0062c2c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c2ca call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c2cfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c2cau); RETCHK(0x62c2cfu, 0x62c2cau); LOADALL;
  /* 0062c2cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c2d2:;
  /* 0062c2d2 mov dword ptr [0x7a7330], 0 */ { const u32 m_ = (u32)(0x7a7330u); M32(m_) = (u32)(0x0u); }
  /* 0062c2dc mov dword ptr [0x7a7334], 0 */ { const u32 m_ = (u32)(0x7a7334u); M32(m_) = (u32)(0x0u); }
  /* 0062c2e6 mov dword ptr [0x7a7338], 0 */ { const u32 m_ = (u32)(0x7a7338u); M32(m_) = (u32)(0x0u); }
  /* 0062c2f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c300(CPU *c) {
  NATIVE_HOOK(0x62c300u) REGS; LOADALL;
L_0062c300:;
  /* 0062c300 mov ecx, 0x7a7370 */ { ecx = (u32)(0x7a7370u); }
  /* 0062c305 jmp 0x470f60 */ SAVEALL; F_00470f60(c); return;
}

void F_0062c310(CPU *c) {
  NATIVE_HOOK(0x62c310u) REGS; LOADALL;
  goto L_0062c310;
L_0047d880:;
  /* 0047d880 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0047d881 mov esi, eax */ { esi = (u32)(eax); }
  /* 0047d883 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0047d886 call 0x471d40 */ esp -= 4; M32(esp) = 0x47d88bu; SAVEALL; F_00471d40(c); ABI_CHECK(0x471d40u, 0x47d886u); RETCHK(0x47d88bu, 0x47d886u); LOADALL;
  /* 0047d88b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0047d88c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c310:;
  /* 0062c310 mov eax, 0x9bd5a0 */ { eax = (u32)(0x9bd5a0u); }
  /* 0062c315 jmp 0x47d880 */ goto L_0047d880;
}

void F_0062c320(CPU *c) {
  NATIVE_HOOK(0x62c320u) REGS; LOADALL;
  goto L_0062c320;
L_0047dfd0:;
  /* 0047dfd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0047dfd1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0047dfd3 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0047dfd6 call 0x47df80 */ esp -= 4; M32(esp) = 0x47dfdbu; SAVEALL; F_0047df80(c); ABI_CHECK(0x47df80u, 0x47dfd6u); RETCHK(0x47dfdbu, 0x47dfd6u); LOADALL;
  /* 0047dfdb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0047dfdc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c320:;
  /* 0062c320 mov eax, 0x9baa00 */ { eax = (u32)(0x9baa00u); }
  /* 0062c325 jmp 0x47dfd0 */ goto L_0047dfd0;
}

void F_0062c330(CPU *c) {
  NATIVE_HOOK(0x62c330u) REGS; LOADALL;
  goto L_0062c330;
L_00480800:;
  /* 00480800 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00480801 mov esi, eax */ { esi = (u32)(eax); }
  /* 00480803 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00480806 call 0x480580 */ esp -= 4; M32(esp) = 0x48080bu; SAVEALL; F_00480580(c); ABI_CHECK(0x480580u, 0x480806u); RETCHK(0x48080bu, 0x480806u); LOADALL;
  /* 0048080b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0048080c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c330:;
  /* 0062c330 mov eax, 0x9b9480 */ { eax = (u32)(0x9b9480u); }
  /* 0062c335 jmp 0x480800 */ goto L_00480800;
}
