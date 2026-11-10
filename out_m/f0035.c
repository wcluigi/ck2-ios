#include "funcs.h"

void F_00544540(CPU *c) {
  NATIVE_HOOK(0x544540u) REGS; LOADALL;
  goto L_00544540;
L_005444b0:;
  /* 005444b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005444b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005444b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005444b4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005444b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005444b6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005444b7 mov edi, eax */ { edi = (u32)(eax); }
  /* 005444b9 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005444bc mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 005444bf push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 005444c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005444c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005444c3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005444c6 call 0x5b11b0 */ esp -= 4; M32(esp) = 0x5444cbu; SAVEALL; F_005b11b0(c); ABI_CHECK(0x5b11b0u, 0x5444c6u); RETCHK(0x5444cbu, 0x5444c6u); LOADALL;
  /* 005444cb mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005444cd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005444d0 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005444d2 je 0x544522 */ if (ZF_) goto L_00544522;
  /* 005444d4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005444d5 call 0x5b1270 */ esp -= 4; M32(esp) = 0x5444dau; SAVEALL; F_005b1270(c); ABI_CHECK(0x5b1270u, 0x5444d5u); RETCHK(0x5444dau, 0x5444d5u); LOADALL;
  /* 005444da add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005444dd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005444df je 0x544519 */ if (ZF_) goto L_00544519;
  /* 005444e1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005444e3 call 0x5466a0 */ esp -= 4; M32(esp) = 0x5444e8u; SAVEALL; F_005466a0(c); ABI_CHECK(0x5466a0u, 0x5444e3u); RETCHK(0x5444e8u, 0x5444e3u); LOADALL;
  /* 005444e8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005444ea je 0x544519 */ if (ZF_) goto L_00544519;
  /* 005444ec mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005444ef mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 005444f2 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005444f4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005444f6 jle 0x544519 */ if ((ZF_|LT_)) goto L_00544519;
L_005444f8:;
  /* 005444f8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005444fa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005444fc mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005444fe jle 0x54450e */ if ((ZF_|LT_)) goto L_0054450e;
L_00544500:;
  /* 00544500 cmp byte ptr [ecx + 3], 0xff */ { const u32 m_ = (u32)(ecx + 0x3u); u32 a_ = M8(m_), b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00544504 jb 0x54452b */ if (CF_) goto L_0054452b;
  /* 00544506 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00544509 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054450a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054450c jl 0x544500 */ if (LT_) goto L_00544500;
L_0054450e:;
  /* 0054450e add edx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00544511 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00544514 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00544515 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544517 jl 0x5444f8 */ if (LT_) goto L_005444f8;
L_00544519:;
  /* 00544519 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054451a call 0x5b1210 */ esp -= 4; M32(esp) = 0x54451fu; SAVEALL; F_005b1210(c); ABI_CHECK(0x5b1210u, 0x54451au); RETCHK(0x54451fu, 0x54451au); LOADALL;
  /* 0054451f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00544522:;
  /* 00544522 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00544523 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544524 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544526 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00544527 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00544529 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054452a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054452b:;
  /* 0054452b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054452c call 0x5b1210 */ esp -= 4; M32(esp) = 0x544531u; SAVEALL; F_005b1210(c); ABI_CHECK(0x5b1210u, 0x54452cu); RETCHK(0x544531u, 0x54452cu); LOADALL;
  /* 00544531 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544534 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00544535 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544536 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054453b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054453c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054453e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054453f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00544540:;
  /* 00544540 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00544542 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00544544 mov dh, byte ptr [eax + 0x23] */ { const u32 m_ = (u32)(eax + 0x23u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00544547 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00544549 and ecx, 0xf00 */ { u32 a_ = ecx, b_ = 0xf00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054454f cmp ecx, 0x500 */ { u32 a_ = ecx, b_ = 0x500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544555 je 0x54456a */ if (ZF_) goto L_0054456a;
  /* 00544557 cmp ecx, 0x300 */ { u32 a_ = ecx, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054455d je 0x54456a */ if (ZF_) goto L_0054456a;
  /* 0054455f cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544565 je 0x54456a */ if (ZF_) goto L_0054456a;
  /* 00544567 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544569 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054456a:;
  /* 0054456a test dh, 0x60 */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = 0x60u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054456d jne 0x544574 */ if (!ZF_) goto L_00544574;
  /* 0054456f jmp 0x5444b0 */ goto L_005444b0;
L_00544574:;
  /* 00544574 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544575 mov esi, eax */ { esi = (u32)(eax); }
  /* 00544577 call 0x544430 */ esp -= 4; M32(esp) = 0x54457cu; SAVEALL; F_00544430(c); ABI_CHECK(0x544430u, 0x544577u); RETCHK(0x54457cu, 0x544577u); LOADALL;
  /* 0054457c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054457d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544580(CPU *c) {
  NATIVE_HOOK(0x544580u) REGS; LOADALL;
L_00544580:;
  /* 00544580 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544581 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544583 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544584 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00544587 mov al, byte ptr [esi + 7] */ { const u32 m_ = (u32)(esi + 0x7u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054458a cmp al, 0xff */ { u32 a_ = (eax & 0xffu), b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054458c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054458d lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 00544590 jb 0x5445a1 */ if (CF_) goto L_005445a1;
  /* 00544592 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00544594 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544596 je 0x5445e4 */ if (ZF_) goto L_005445e4;
  /* 00544598 call 0x544540 */ esp -= 4; M32(esp) = 0x54459du; SAVEALL; F_00544540(c); ABI_CHECK(0x544540u, 0x544598u); RETCHK(0x54459du, 0x544598u); LOADALL;
  /* 0054459d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054459f je 0x5445e4 */ if (ZF_) goto L_005445e4;
L_005445a1:;
  /* 005445a1 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005445a6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005445a8 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005445aa call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5445b0u; SAVEALL; call_ind(c, t_); RETCHK(0x5445b0u, 0x5445aau); LOADALL; }
  /* 005445b0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005445b3 mov esi, eax */ { esi = (u32)(eax); }
  /* 005445b5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005445b8 mov eax, edi */ { eax = (u32)(edi); }
  /* 005445ba mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 005445bc call 0x5443d0 */ esp -= 4; M32(esp) = 0x5445c1u; SAVEALL; F_005443d0(c); ABI_CHECK(0x5443d0u, 0x5445bcu); RETCHK(0x5445c1u, 0x5445bcu); LOADALL;
  /* 005445c1 mov edx, dword ptr [0x7a6de4] */ { const u32 m_ = (u32)(0x7a6de4u); edx = (u32)(M32(m_)); }
  /* 005445c7 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005445ca mov eax, dword ptr [0x7a6de8] */ { const u32 m_ = (u32)(0x7a6de8u); eax = (u32)(M32(m_)); }
  /* 005445cf inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005445d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005445d1 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005445d4 mov dword ptr [0x7a6de4], esi */ { const u32 m_ = (u32)(0x7a6de4u); M32(m_) = (u32)(esi); }
  /* 005445da mov dword ptr [0x7a6de8], eax */ { const u32 m_ = (u32)(0x7a6de8u); M32(m_) = (u32)(eax); }
  /* 005445df xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005445e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005445e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005445e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005445e4:;
  /* 005445e4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005445e5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005445e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005445e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005445e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005445f0(CPU *c) {
  NATIVE_HOOK(0x5445f0u) REGS; LOADALL;
L_005445f0:;
  /* 005445f0 test byte ptr [eax + 8], 8 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005445f4 je 0x544610 */ if (ZF_) goto L_00544610;
  /* 005445f6 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005445f9 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 005445fc dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005445fd js 0x544610 */ if (SF_) goto L_00544610;
  /* 005445ff lea ecx, [ecx + eax*4 + 3] */ ecx = (u32)((u32)(ecx + eax * 4u + 0x3u));
L_00544603:;
  /* 00544603 cmp byte ptr [ecx], 0xff */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00544606 jb 0x544613 */ if (CF_) goto L_00544613;
  /* 00544608 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544609 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054460c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054460e jge 0x544603 */ if (!LT_) goto L_00544603;
L_00544610:;
  /* 00544610 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544612 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00544613:;
  /* 00544613 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00544618 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544620(CPU *c) {
  NATIVE_HOOK(0x544620u) REGS; LOADALL;
L_00544620:;
  /* 00544620 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544621 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544623 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00544626 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00544629 call 0x5443d0 */ esp -= 4; M32(esp) = 0x54462eu; SAVEALL; F_005443d0(c); ABI_CHECK(0x5443d0u, 0x544629u); RETCHK(0x54462eu, 0x544629u); LOADALL;
  /* 0054462e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00544631 mov byte ptr [ecx], al */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00544633 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544635 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544636 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544640(CPU *c) {
  NATIVE_HOOK(0x544640u) REGS; LOADALL;
L_00544640:;
  /* 00544640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544643 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544644 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00544647 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 0054464a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054464c je 0x5446b0 */ if (ZF_) goto L_005446b0;
  /* 0054464e mov eax, edx */ { eax = (u32)(edx); }
  /* 00544650 call 0x5445f0 */ esp -= 4; M32(esp) = 0x544655u; SAVEALL; F_005445f0(c); ABI_CHECK(0x5445f0u, 0x544650u); RETCHK(0x544655u, 0x544650u); LOADALL;
  /* 00544655 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544657 je 0x5446a1 */ if (ZF_) goto L_005446a1;
  /* 00544659 lea eax, [ebp + 0xb] */ eax = (u32)((u32)(ebp + 0xbu));
  /* 0054465c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054465d push 0x544620 */ { u32 v_ = 0x544620u; esp -= 4; M32(esp) = v_; }
  /* 00544662 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544663 call 0x57bed0 */ esp -= 4; M32(esp) = 0x544668u; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x544663u); RETCHK(0x544668u, 0x544663u); LOADALL;
  /* 00544668 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054466e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00544670 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00544672 call dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x544678u; SAVEALL; call_ind(c, t_); RETCHK(0x544678u, 0x544672u); LOADALL; }
  /* 00544678 mov ecx, dword ptr [0x7a6de4] */ { const u32 m_ = (u32)(0x7a6de4u); ecx = (u32)(M32(m_)); }
  /* 0054467e mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00544680 mov dl, byte ptr [ebp + 0xb] */ { const u32 m_ = (u32)(ebp + 0xbu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00544683 mov byte ptr [eax + 4], dl */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00544686 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00544689 mov dword ptr [0x7a6de4], eax */ { const u32 m_ = (u32)(0x7a6de4u); M32(m_) = (u32)(eax); }
  /* 0054468e mov eax, dword ptr [0x7a6de8] */ { const u32 m_ = (u32)(0x7a6de8u); eax = (u32)(M32(m_)); }
  /* 00544693 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544696 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00544697 mov dword ptr [0x7a6de8], eax */ { const u32 m_ = (u32)(0x7a6de8u); M32(m_) = (u32)(eax); }
  /* 0054469c mov eax, esi */ { eax = (u32)(esi); }
  /* 0054469e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054469f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005446a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005446a1:;
  /* 005446a1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005446a2 push 0x544580 */ { u32 v_ = 0x544580u; esp -= 4; M32(esp) = v_; }
  /* 005446a7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005446a8 call 0x57bed0 */ esp -= 4; M32(esp) = 0x5446adu; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x5446a8u); RETCHK(0x5446adu, 0x5446a8u); LOADALL;
  /* 005446ad add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005446b0:;
  /* 005446b0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005446b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005446b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005446b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005446c0(CPU *c) {
  NATIVE_HOOK(0x5446c0u) REGS; LOADALL;
L_005446c0:;
  /* 005446c0 mov eax, dword ptr [0x7a6de4] */ { const u32 m_ = (u32)(0x7a6de4u); eax = (u32)(M32(m_)); }
  /* 005446c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005446c6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005446c8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005446ca je 0x5446e9 */ if (ZF_) goto L_005446e9;
  /* 005446cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005446cd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_005446d0:;
  /* 005446d0 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 005446d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005446d4 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005446d9 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5446dfu; SAVEALL; call_ind(c, t_); RETCHK(0x5446dfu, 0x5446d9u); LOADALL; }
  /* 005446df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005446e2 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005446e4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005446e6 jne 0x5446d0 */ if (!ZF_) goto L_005446d0;
  /* 005446e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005446e9:;
  /* 005446e9 mov dword ptr [0x7a6de4], edi */ { const u32 m_ = (u32)(0x7a6de4u); M32(m_) = (u32)(edi); }
  /* 005446ef mov dword ptr [0x7a6de8], edi */ { const u32 m_ = (u32)(0x7a6de8u); M32(m_) = (u32)(edi); }
  /* 005446f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005446f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544700(CPU *c) {
  NATIVE_HOOK(0x544700u) REGS; LOADALL;
L_00544700:;
  /* 00544700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544703 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544706 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544707 mov esi, eax */ { esi = (u32)(eax); }
  /* 00544709 test byte ptr [esi + 0x4c], 2 */ { const u32 m_ = (u32)(esi + 0x4cu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054470d je 0x544718 */ if (ZF_) goto L_00544718;
  /* 0054470f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544710 call 0x5776c0 */ esp -= 4; M32(esp) = 0x544715u; SAVEALL; F_005776c0(c); ABI_CHECK(0x5776c0u, 0x544710u); RETCHK(0x544715u, 0x544710u); LOADALL;
  /* 00544715 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00544718:;
  /* 00544718 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054471b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054471c call 0x5abd50 */ esp -= 4; M32(esp) = 0x544721u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x54471cu); RETCHK(0x544721u, 0x54471cu); LOADALL;
  /* 00544721 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544722 add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00544725 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00544728 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544729 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054472a call 0x5aaba0 */ esp -= 4; M32(esp) = 0x54472fu; SAVEALL; F_005aaba0(c); ABI_CHECK(0x5aaba0u, 0x54472au); RETCHK(0x54472fu, 0x54472au); LOADALL;
  /* 0054472f mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00544735 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00544737 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054473a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054473b call 0x5abd50 */ esp -= 4; M32(esp) = 0x544740u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x54473bu); RETCHK(0x544740u, 0x54473bu); LOADALL;
  /* 00544740 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00544743 fsub dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00544746 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544749 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0054474c add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054474f fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00544752 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544753 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00544756 fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00544759 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0054475b fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0054475d fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0054475f fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00544761 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00544763 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00544765 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00544767 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00544769 fstp st(3) */ ST(3) = ST(0); FPOP();
  /* 0054476b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054476d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054476f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00544771 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544772 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544780(CPU *c) {
  NATIVE_HOOK(0x544780u) REGS; LOADALL;
L_00544780:;
  /* 00544780 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00544781 mov edi, dword ptr [0x7a6de0] */ { const u32 m_ = (u32)(0x7a6de0u); edi = (u32)(M32(m_)); }
  /* 00544787 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544789 je 0x5447c9 */ if (ZF_) goto L_005447c9;
  /* 0054478b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0054478d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00544790:;
  /* 00544790 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00544793 fcomp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00544796 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00544798 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054479b je 0x5447c6 */ if (ZF_) goto L_005447c6;
  /* 0054479d mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005447a0 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005447a2 je 0x5447d7 */ if (ZF_) goto L_005447d7;
  /* 005447a4 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005447a7 fcomp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005447aa fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005447ac test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005447af jp 0x5447be */ if (PF_) goto L_005447be;
  /* 005447b1 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005447b4 fcomp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005447b7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005447b9 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005447bc je 0x5447d1 */ if (ZF_) goto L_005447d1;
L_005447be:;
  /* 005447be mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005447c0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005447c2 jne 0x544790 */ if (!ZF_) goto L_00544790;
  /* 005447c4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005447c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005447c6:;
  /* 005447c6 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
L_005447c9:;
  /* 005447c9 mov dword ptr [0x7a6de0], esi */ { const u32 m_ = (u32)(0x7a6de0u); M32(m_) = (u32)(esi); }
  /* 005447cf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005447d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005447d1:;
  /* 005447d1 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005447d4 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
L_005447d7:;
  /* 005447d7 mov dword ptr [ecx + 0xc], esi */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(esi); }
  /* 005447da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005447db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005447e0(CPU *c) {
  NATIVE_HOOK(0x5447e0u) REGS; LOADALL;
L_005447e0:;
  /* 005447e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005447e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005447e3 mov eax, dword ptr [0x7a6de4] */ { const u32 m_ = (u32)(0x7a6de4u); eax = (u32)(M32(m_)); }
  /* 005447e8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005447ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005447eb mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005447ee je 0x5447fb */ if (ZF_) goto L_005447fb;
L_005447f0:;
  /* 005447f0 cmp edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005447f2 je 0x54480e */ if (ZF_) goto L_0054480e;
  /* 005447f4 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 005447f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005447f9 jne 0x5447f0 */ if (!ZF_) goto L_005447f0;
L_005447fb:;
  /* 005447fb test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005447fd je 0x544809 */ if (ZF_) goto L_00544809;
  /* 005447ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00544800 call dword ptr [0x7979d0] */ { const u32 m_ = (u32)(0x7979d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x544806u; SAVEALL; call_ind(c, t_); RETCHK(0x544806u, 0x544800u); LOADALL; }
  /* 00544806 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00544809:;
  /* 00544809 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054480b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054480c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054480d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054480e:;
  /* 0054480e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054480f mov bl, byte ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00544812 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00544817 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544818 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054481a push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054481c call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x544822u; SAVEALL; call_ind(c, t_); RETCHK(0x544822u, 0x54481cu); LOADALL; }
  /* 00544822 mov esi, eax */ { esi = (u32)(eax); }
  /* 00544824 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544827 mov eax, edi */ { eax = (u32)(edi); }
  /* 00544829 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0054482b call 0x544700 */ esp -= 4; M32(esp) = 0x544830u; SAVEALL; F_00544700(c); ABI_CHECK(0x544700u, 0x54482bu); RETCHK(0x544830u, 0x54482bu); LOADALL;
  /* 00544830 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00544833 mov byte ptr [esi + 8], bl */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00544836 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0054483d call 0x544780 */ esp -= 4; M32(esp) = 0x544842u; SAVEALL; F_00544780(c); ABI_CHECK(0x544780u, 0x54483du); RETCHK(0x544842u, 0x54483du); LOADALL;
  /* 00544842 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544843 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00544844 mov eax, edi */ { eax = (u32)(edi); }
  /* 00544846 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00544847 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544848 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544847(CPU *c) {
  NATIVE_HOOK(0x544847u) REGS; LOADALL;
L_00544847:;
  /* 00544847 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544848 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544850(CPU *c) {
  NATIVE_HOOK(0x544850u) REGS; LOADALL;
L_00544850:;
  /* 00544850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544853 mov eax, dword ptr [0x7979d0] */ { const u32 m_ = (u32)(0x7979d0u); eax = (u32)(M32(m_)); }
  /* 00544858 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054485a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054485d jne 0x544868 */ if (!ZF_) goto L_00544868;
  /* 0054485f mov ecx, dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); ecx = (u32)(M32(m_)); }
  /* 00544862 mov dword ptr [0x7979d0], ecx */ { const u32 m_ = (u32)(0x7979d0u); M32(m_) = (u32)(ecx); }
L_00544868:;
  /* 00544868 mov edx, 0x5447e0 */ { edx = (u32)(0x5447e0u); }
  /* 0054486d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054486f mov dword ptr [eax + 0x48], 0x5447e0 */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(0x5447e0u); }
  /* 00544876 jne 0x54487f */ if (!ZF_) goto L_0054487f;
  /* 00544878 mov dword ptr [eax + 0x48], 0x577690 */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(0x577690u); }
L_0054487f:;
  /* 0054487f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544880 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544890(CPU *c) {
  NATIVE_HOOK(0x544890u) REGS; LOADALL;
L_00544890:;
  /* 00544890 mov eax, dword ptr [0x7a6de0] */ { const u32 m_ = (u32)(0x7a6de0u); eax = (u32)(M32(m_)); }
  /* 00544895 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544897 je 0x5448d0 */ if (ZF_) goto L_005448d0;
  /* 00544899 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005448a0:;
  /* 005448a0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005448a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005448a3 call dword ptr [0x7979d0] */ { const u32 m_ = (u32)(0x7979d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5448a9u; SAVEALL; call_ind(c, t_); RETCHK(0x5448a9u, 0x5448a3u); LOADALL; }
  /* 005448a9 mov eax, dword ptr [0x7a6de0] */ { const u32 m_ = (u32)(0x7a6de0u); eax = (u32)(M32(m_)); }
  /* 005448ae mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005448b1 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005448b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005448b8 mov dword ptr [0x7a6de0], ecx */ { const u32 m_ = (u32)(0x7a6de0u); M32(m_) = (u32)(ecx); }
  /* 005448be call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5448c4u; SAVEALL; call_ind(c, t_); RETCHK(0x5448c4u, 0x5448beu); LOADALL; }
  /* 005448c4 mov eax, dword ptr [0x7a6de0] */ { const u32 m_ = (u32)(0x7a6de0u); eax = (u32)(M32(m_)); }
  /* 005448c9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005448cc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005448ce jne 0x5448a0 */ if (!ZF_) goto L_005448a0;
L_005448d0:;
  /* 005448d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005448e0(CPU *c) {
  NATIVE_HOOK(0x5448e0u) REGS; LOADALL;
L_005448e0:;
  /* 005448e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005448e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005448e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005448e4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005448e7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005448e9 push 0x544640 */ { u32 v_ = 0x544640u; esp -= 4; M32(esp) = v_; }
  /* 005448ee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005448ef call 0x577da0 */ esp -= 4; M32(esp) = 0x5448f4u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x5448efu); RETCHK(0x5448f4u, 0x5448efu); LOADALL;
  /* 005448f4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005448f7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005448f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005448fa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005448fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544900(CPU *c) {
  NATIVE_HOOK(0x544900u) REGS; LOADALL;
L_00544900:;
  /* 00544900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544903 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544904 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00544907 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00544909 push 0x544850 */ { u32 v_ = 0x544850u; esp -= 4; M32(esp) = v_; }
  /* 0054490e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054490f call 0x577da0 */ esp -= 4; M32(esp) = 0x544914u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54490fu); RETCHK(0x544914u, 0x54490fu); LOADALL;
  /* 00544914 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544917 mov eax, esi */ { eax = (u32)(esi); }
  /* 00544919 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054491a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054491b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544920(CPU *c) {
  NATIVE_HOOK(0x544920u) REGS; LOADALL;
L_00544920:;
  /* 00544920 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00544922 push 0x5448e0 */ { u32 v_ = 0x5448e0u; esp -= 4; M32(esp) = v_; }
  /* 00544927 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544928 call 0x57edc0 */ esp -= 4; M32(esp) = 0x54492du; SAVEALL; F_0057edc0(c); ABI_CHECK(0x57edc0u, 0x544928u); RETCHK(0x54492du, 0x544928u); LOADALL;
  /* 0054492d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054492f push 0x544900 */ { u32 v_ = 0x544900u; esp -= 4; M32(esp) = v_; }
  /* 00544934 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544935 call 0x57edc0 */ esp -= 4; M32(esp) = 0x54493au; SAVEALL; F_0057edc0(c); ABI_CHECK(0x57edc0u, 0x544935u); RETCHK(0x54493au, 0x544935u); LOADALL;
  /* 0054493a add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054493d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544940(CPU *c) {
  NATIVE_HOOK(0x544940u) REGS; LOADALL;
L_00544940:;
  /* 00544940 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00544942 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00544945 mov dword ptr [eax + 8], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054494c mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054494f mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00544952 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00544955 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00544958 mov dword ptr [eax], 0x654f68 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x654f68u); }
  /* 0054495e mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00544961 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00544964 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00544967 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0054496a mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054496d mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 00544970 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544945(CPU *c) {
  NATIVE_HOOK(0x544945u) REGS; LOADALL;
L_00544945:;
  /* 00544945 mov dword ptr [eax + 8], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054494c mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054494f mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00544952 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00544955 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00544958 mov dword ptr [eax], 0x654f68 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x654f68u); }
  /* 0054495e mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00544961 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00544964 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00544967 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0054496a mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054496d mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 00544970 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544980(CPU *c) {
  NATIVE_HOOK(0x544980u) REGS; LOADALL;
L_00544980:;
  /* 00544980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544983 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544984 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00544986 call 0x5449b0 */ esp -= 4; M32(esp) = 0x54498bu; SAVEALL; F_005449b0(c); ABI_CHECK(0x5449b0u, 0x544986u); RETCHK(0x54498bu, 0x544986u); LOADALL;
  /* 0054498b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054498f je 0x54499a */ if (ZF_) goto L_0054499a;
  /* 00544991 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544992 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x544997u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x544992u); RETCHK(0x544997u, 0x544992u); LOADALL;
  /* 00544997 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054499a:;
  /* 0054499a mov eax, esi */ { eax = (u32)(esi); }
  /* 0054499c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054499d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054499e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005449b0(CPU *c) {
  NATIVE_HOOK(0x5449b0u) REGS; LOADALL;
L_005449b0:;
  /* 005449b0 mov dword ptr [ecx], 0x654f8c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x654f8cu); }
  /* 005449b6 mov dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005449bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005449c0(CPU *c) {
  NATIVE_HOOK(0x5449c0u) REGS; LOADALL;
L_005449c0:;
  /* 005449c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005449c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005449c3 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005449c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005449c7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005449c9 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005449cb mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005449ce mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005449d1 je 0x5449df */ if (ZF_) goto L_005449df;
  /* 005449d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005449d4 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5449d9u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5449d4u); RETCHK(0x5449d9u, 0x5449d4u); LOADALL;
  /* 005449d9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005449dc mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
L_005449df:;
  /* 005449df mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005449e2 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005449e4 je 0x5449f2 */ if (ZF_) goto L_005449f2;
  /* 005449e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005449e7 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5449ecu; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5449e7u); RETCHK(0x5449ecu, 0x5449e7u); LOADALL;
  /* 005449ec add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005449ef mov dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edi); }
L_005449f2:;
  /* 005449f2 mov dword ptr [esi + 0x28], edi */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edi); }
  /* 005449f5 mov dword ptr [esi + 0x30], edi */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edi); }
  /* 005449f8 mov dword ptr [esi + 0x2c], edi */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(edi); }
  /* 005449fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005449fc mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00544a01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544a02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544a10(CPU *c) {
  NATIVE_HOOK(0x544a10u) REGS; LOADALL;
L_00544a10:;
  /* 00544a10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544a11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544a13 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544a15 je 0x544a1e */ if (ZF_) goto L_00544a1e;
  /* 00544a17 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544a1a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544a1c jne 0x544a24 */ if (!ZF_) goto L_00544a24;
L_00544a1e:;
  /* 00544a1e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544a20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544a21 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00544a24:;
  /* 00544a24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544a25 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00544a28 call 0x548660 */ esp -= 4; M32(esp) = 0x544a2du; SAVEALL; F_00548660(c); ABI_CHECK(0x548660u, 0x544a28u); RETCHK(0x544a2du, 0x544a28u); LOADALL;
  /* 00544a2d mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00544a30 mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00544a33 call 0x5486a0 */ esp -= 4; M32(esp) = 0x544a38u; SAVEALL; F_005486a0(c); ABI_CHECK(0x5486a0u, 0x544a33u); RETCHK(0x544a38u, 0x544a33u); LOADALL;
  /* 00544a38 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00544a3b fcomp dword ptr [0x656f50] */ { const u32 m_ = (u32)(0x656f50u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00544a41 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00544a43 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00544a45 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00544a48 jp 0x544a4f */ if (PF_) goto L_00544a4f;
  /* 00544a4a mov dword ptr [edi + 0x2c], esi */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(esi); }
  /* 00544a4d jmp 0x544a55 */ goto L_00544a55;
L_00544a4f:;
  /* 00544a4f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00544a52 mov dword ptr [edi + 0x2c], eax */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(eax); }
L_00544a55:;
  /* 00544a55 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00544a58 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00544a5b mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00544a5e cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544a60 mov dword ptr [edi + 0x10], esi */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(esi); }
  /* 00544a63 mov dword ptr [edi + 0x18], esi */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(esi); }
  /* 00544a66 je 0x544ac8 */ if (ZF_) goto L_00544ac8;
  /* 00544a68 mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00544a6b cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544a6d je 0x544ac8 */ if (ZF_) goto L_00544ac8;
  /* 00544a6f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00544a71 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544a73 je 0x544ac8 */ if (ZF_) goto L_00544ac8;
  /* 00544a75 fld dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 00544a78 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00544a7e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00544a80 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00544a83 jne 0x544ac8 */ if (!ZF_) goto L_00544ac8;
  /* 00544a85 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00544a88 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00544a8b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544a8c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00544a8d mov dword ptr [edi + 0x28], 1 */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(0x1u); }
  /* 00544a94 mov dword ptr [edi + 0x30], eax */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(eax); }
  /* 00544a97 call 0x5e8530 */ esp -= 4; M32(esp) = 0x544a9cu; SAVEALL; F_005e8530(c); ABI_CHECK(0x5e8530u, 0x544a97u); RETCHK(0x544a9cu, 0x544a97u); LOADALL;
  /* 00544a9c mov edx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00544a9f mov eax, dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00544aa2 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00544aa5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544aa6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00544aa7 call 0x5e85f0 */ esp -= 4; M32(esp) = 0x544aacu; SAVEALL; F_005e85f0(c); ABI_CHECK(0x5e85f0u, 0x544aa7u); RETCHK(0x544aacu, 0x544aa7u); LOADALL;
  /* 00544aac mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 00544aaf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00544ab0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544ab1 call 0x5e8530 */ esp -= 4; M32(esp) = 0x544ab6u; SAVEALL; F_005e8530(c); ABI_CHECK(0x5e8530u, 0x544ab1u); RETCHK(0x544ab6u, 0x544ab1u); LOADALL;
  /* 00544ab6 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544ab9 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00544abc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00544abd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00544abe call 0x5e8530 */ esp -= 4; M32(esp) = 0x544ac3u; SAVEALL; F_005e8530(c); ABI_CHECK(0x5e8530u, 0x544abeu); RETCHK(0x544ac3u, 0x544abeu); LOADALL;
  /* 00544ac3 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544ac6 jmp 0x544b16 */ goto L_00544b16;
L_00544ac8:;
  /* 00544ac8 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00544acb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00544acc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544acd call 0x5e8530 */ esp -= 4; M32(esp) = 0x544ad2u; SAVEALL; F_005e8530(c); ABI_CHECK(0x5e8530u, 0x544acdu); RETCHK(0x544ad2u, 0x544acdu); LOADALL;
  /* 00544ad2 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00544ad5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544ad8 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544ada mov dword ptr [edi + 0x28], esi */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(esi); }
  /* 00544add jne 0x544af8 */ if (!ZF_) goto L_00544af8;
  /* 00544adf mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544ae2 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00544ae5 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00544ae8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00544aeb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544aec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544aed call 0x5e84c0 */ esp -= 4; M32(esp) = 0x544af2u; SAVEALL; F_005e84c0(c); ABI_CHECK(0x5e84c0u, 0x544aedu); RETCHK(0x544af2u, 0x544aedu); LOADALL;
  /* 00544af2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544af5 mov dword ptr [edi + 0x20], eax */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(eax); }
L_00544af8:;
  /* 00544af8 cmp dword ptr [edi + 0x24], esi */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544afb jne 0x544b16 */ if (!ZF_) goto L_00544b16;
  /* 00544afd mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544b00 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00544b03 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00544b06 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00544b09 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544b0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544b0b call 0x5e84c0 */ esp -= 4; M32(esp) = 0x544b10u; SAVEALL; F_005e84c0(c); ABI_CHECK(0x5e84c0u, 0x544b0bu); RETCHK(0x544b10u, 0x544b0bu); LOADALL;
  /* 00544b10 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544b13 mov dword ptr [edi + 0x24], eax */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(eax); }
L_00544b16:;
  /* 00544b16 mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00544b19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00544b1a call 0x5eebd0 */ esp -= 4; M32(esp) = 0x544b1fu; SAVEALL; F_005eebd0(c); ABI_CHECK(0x5eebd0u, 0x544b1au); RETCHK(0x544b1fu, 0x544b1au); LOADALL;
  /* 00544b1f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544b22 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00544b27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544b28 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544b29 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00544b30(CPU *c) {
  NATIVE_HOOK(0x544b30u) REGS; LOADALL;
L_00544b30:;
  /* 00544b30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544b31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544b33 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544b36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544b37 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00544b39 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544b3c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544b3e mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 00544b45 je 0x544c6e */ if (ZF_) goto L_00544c6e;
  /* 00544b4b mov edx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); edx = (u32)(M32(m_)); }
  /* 00544b4e test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544b50 je 0x544c6e */ if (ZF_) goto L_00544c6e;
  /* 00544b56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00544b57 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 00544b59 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544b5b je 0x544c6d */ if (ZF_) goto L_00544c6d;
  /* 00544b61 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00544b64 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544b66 jl 0x544b78 */ if (LT_) goto L_00544b78;
  /* 00544b68 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544b6a cmp dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544b6d setge al */ { eax = (eax & 0xffffff00u) | ((u32)((!LT_) ? 1u : 0u) & 0xffu); }
  /* 00544b70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544b72 jne 0x544c61 */ if (!ZF_) goto L_00544c61;
L_00544b78:;
  /* 00544b78 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00544b7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544b7d jne 0x544c61 */ if (!ZF_) goto L_00544c61;
  /* 00544b83 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00544b86 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00544b89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544b8b fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00544b8e fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00544b91 je 0x544be9 */ if (ZF_) goto L_00544be9;
  /* 00544b93 fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 00544b96 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 00544b99 fdiv dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00544b9c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00544b9d mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00544ba0 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00544ba6 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00544ba9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544baa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00544bab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544bac call 0x5e89c0 */ esp -= 4; M32(esp) = 0x544bb1u; SAVEALL; F_005e89c0(c); ABI_CHECK(0x5e89c0u, 0x544bacu); RETCHK(0x544bb1u, 0x544bacu); LOADALL;
  /* 00544bb1 fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 00544bb4 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00544bb7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544bba fst dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); }
  /* 00544bbd fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00544bc3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00544bc5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00544bc8 jp 0x544c61 */ if (PF_) goto L_00544c61;
  /* 00544bce mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544bd1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544bd2 mov dword ptr [esi + 0x28], 0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 00544bd9 call 0x5eebd0 */ esp -= 4; M32(esp) = 0x544bdeu; SAVEALL; F_005eebd0(c); ABI_CHECK(0x5eebd0u, 0x544bd9u); RETCHK(0x544bdeu, 0x544bd9u); LOADALL;
  /* 00544bde add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544be1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00544be2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544be3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00544be5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544be6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00544be9:;
  /* 00544be9 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00544bec mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00544bef mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00544bf2 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00544bf5 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 00544bf8 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00544bfe fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00544c00 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00544c03 jne 0x544c0d */ if (!ZF_) goto L_00544c0d;
  /* 00544c05 fld dword ptr [0x656f50] */ { const u32 m_ = (u32)(0x656f50u); FPUSH((double)MF32(m_)); }
  /* 00544c0b jmp 0x544c13 */ goto L_00544c13;
L_00544c0d:;
  /* 00544c0d fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
L_00544c13:;
  /* 00544c13 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00544c16 fadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00544c19 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00544c1c fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 00544c1e fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 00544c20 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00544c22 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00544c24 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00544c27 jp 0x544c4e */ if (PF_) goto L_00544c4e;
  /* 00544c29 inc dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00544c2c jns 0x544c35 */ if (!SF_) goto L_00544c35;
  /* 00544c2e mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
L_00544c35:;
  /* 00544c35 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544c37 mov dword ptr [esi + 0x18], 1 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x1u); }
  /* 00544c3e jl 0x544c4e */ if (LT_) goto L_00544c4e;
  /* 00544c40 cmp dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544c43 jl 0x544c4e */ if (LT_) goto L_00544c4e;
  /* 00544c45 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00544c48 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00544c4b fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_00544c4e:;
  /* 00544c4e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00544c51 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544c54 mov edx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); edx = (u32)(M32(m_)); }
  /* 00544c57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00544c58 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544c59 call 0x5e8790 */ esp -= 4; M32(esp) = 0x544c5eu; SAVEALL; F_005e8790(c); ABI_CHECK(0x5e8790u, 0x544c59u); RETCHK(0x544c5eu, 0x544c59u); LOADALL;
  /* 00544c5e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00544c61:;
  /* 00544c61 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544c64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544c65 call 0x5eebd0 */ esp -= 4; M32(esp) = 0x544c6au; SAVEALL; F_005eebd0(c); ABI_CHECK(0x5eebd0u, 0x544c65u); RETCHK(0x544c6au, 0x544c65u); LOADALL;
  /* 00544c6a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00544c6d:;
  /* 00544c6d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00544c6e:;
  /* 00544c6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544c6f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00544c71 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544c72 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00544c80(CPU *c) {
  NATIVE_HOOK(0x544c80u) REGS; LOADALL;
L_00544c80:;
  /* 00544c80 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00544c83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544c84 call 0x577d50 */ esp -= 4; M32(esp) = 0x544c89u; SAVEALL; F_00577d50(c); ABI_CHECK(0x577d50u, 0x544c84u); RETCHK(0x544c89u, 0x544c84u); LOADALL;
  /* 00544c89 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00544c8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544c90(CPU *c) {
  NATIVE_HOOK(0x544c90u) REGS; LOADALL;
L_00544c90:;
  /* 00544c90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544c91 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00544c94 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544c96 je 0x544c9d */ if (ZF_) goto L_00544c9d;
  /* 00544c98 call 0x548630 */ esp -= 4; M32(esp) = 0x544c9du; SAVEALL; F_00548630(c); ABI_CHECK(0x548630u, 0x544c98u); RETCHK(0x544c9du, 0x544c98u); LOADALL;
L_00544c9d:;
  /* 00544c9d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544c9f mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00544ca2 je 0x544cd8 */ if (ZF_) goto L_00544cd8;
  /* 00544ca4 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00544ca6 call 0x548660 */ esp -= 4; M32(esp) = 0x544cabu; SAVEALL; F_00548660(c); ABI_CHECK(0x548660u, 0x544ca6u); RETCHK(0x544cabu, 0x544ca6u); LOADALL;
  /* 00544cab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544cad mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00544cb0 je 0x544cdf */ if (ZF_) goto L_00544cdf;
  /* 00544cb2 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00544cb5 call 0x5486a0 */ esp -= 4; M32(esp) = 0x544cbau; SAVEALL; F_005486a0(c); ABI_CHECK(0x5486a0u, 0x544cb5u); RETCHK(0x544cbau, 0x544cb5u); LOADALL;
  /* 00544cba mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544cbd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544cbe call 0x5eeae0 */ esp -= 4; M32(esp) = 0x544cc3u; SAVEALL; F_005eeae0(c); ABI_CHECK(0x5eeae0u, 0x544cbeu); RETCHK(0x544cc3u, 0x544cbeu); LOADALL;
  /* 00544cc3 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544cc6 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00544cc9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544ccc call 0x5486c0 */ esp -= 4; M32(esp) = 0x544cd1u; SAVEALL; F_005486c0(c); ABI_CHECK(0x5486c0u, 0x544cccu); RETCHK(0x544cd1u, 0x544cccu); LOADALL;
  /* 00544cd1 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00544cd6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544cd7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00544cd8:;
  /* 00544cd8 mov dword ptr [edi + 0x1c], 0 */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(0x0u); }
L_00544cdf:;
  /* 00544cdf mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00544ce4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544ce5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544cf0(CPU *c) {
  NATIVE_HOOK(0x544cf0u) REGS; LOADALL;
L_00544cf0:;
  /* 00544cf0 mov eax, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544cf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544cf5 je 0x544d08 */ if (ZF_) goto L_00544d08;
  /* 00544cf7 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00544cfa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544cfc je 0x544d08 */ if (ZF_) goto L_00544d08;
  /* 00544cfe mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00544d00 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544d02 je 0x544d08 */ if (ZF_) goto L_00544d08;
  /* 00544d04 fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00544d07 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00544d08:;
  /* 00544d08 fld dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); FPUSH((double)MF32(m_)); }
  /* 00544d0e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544d10(CPU *c) {
  NATIVE_HOOK(0x544d10u) REGS; LOADALL;
L_00544d10:;
  /* 00544d10 mov eax, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544d13 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00544d16 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00544d19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544d20(CPU *c) {
  NATIVE_HOOK(0x544d20u) REGS; LOADALL;
L_00544d20:;
  /* 00544d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544d23 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00544d26 mov ecx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00544d29 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00544d2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544d2d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00544d2e call 0x5e8970 */ esp -= 4; M32(esp) = 0x544d33u; SAVEALL; F_005e8970(c); ABI_CHECK(0x5e8970u, 0x544d2eu); RETCHK(0x544d33u, 0x544d2eu); LOADALL;
  /* 00544d33 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544d36 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00544d38 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00544d3a neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00544d3c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544d3d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00544d40(CPU *c) {
  NATIVE_HOOK(0x544d40u) REGS; LOADALL;
L_00544d40:;
  /* 00544d40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544d41 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00544d43 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544d46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544d48 je 0x544d6c */ if (ZF_) goto L_00544d6c;
  /* 00544d4a mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00544d4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544d4f je 0x544d6c */ if (ZF_) goto L_00544d6c;
  /* 00544d51 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00544d53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544d54 call 0x5e8970 */ esp -= 4; M32(esp) = 0x544d59u; SAVEALL; F_005e8970(c); ABI_CHECK(0x5e8970u, 0x544d54u); RETCHK(0x544d59u, 0x544d54u); LOADALL;
  /* 00544d59 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00544d5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00544d5d call 0x5eebd0 */ esp -= 4; M32(esp) = 0x544d62u; SAVEALL; F_005eebd0(c); ABI_CHECK(0x5eebd0u, 0x544d5du); RETCHK(0x544d62u, 0x544d5du); LOADALL;
  /* 00544d62 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544d65 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00544d6a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544d6b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00544d6c:;
  /* 00544d6c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544d6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544d6f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544d70(CPU *c) {
  NATIVE_HOOK(0x544d70u) REGS; LOADALL;
L_00544d70:;
  /* 00544d70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544d71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544d73 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00544d77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544d78 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00544d7a mov dword ptr [esi], 0x654f8c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x654f8cu); }
  /* 00544d80 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00544d87 je 0x544d92 */ if (ZF_) goto L_00544d92;
  /* 00544d89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544d8a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x544d8fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x544d8au); RETCHK(0x544d8fu, 0x544d8au); LOADALL;
  /* 00544d8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00544d92:;
  /* 00544d92 mov eax, esi */ { eax = (u32)(esi); }
  /* 00544d94 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544d95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544d96 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00544da0(CPU *c) {
  NATIVE_HOOK(0x544da0u) REGS; LOADALL;
L_00544da0:;
  /* 00544da0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544da1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544da3 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544da6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544da7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00544daa push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00544dac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00544dae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544daf call 0x5ab2d0 */ esp -= 4; M32(esp) = 0x544db4u; SAVEALL; F_005ab2d0(c); ABI_CHECK(0x5ab2d0u, 0x544dafu); RETCHK(0x544db4u, 0x544dafu); LOADALL;
  /* 00544db4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544db7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544db9 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00544dbc je 0x544eab */ if (ZF_) goto L_00544eab;
  /* 00544dc2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00544dc5 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00544dc8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00544dc9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00544dca mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 00544dcd cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544dcf lea eax, [edx + 0x28] */ eax = (u32)((u32)(edx + 0x28u));
  /* 00544dd2 mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 00544dd5 jl 0x544dda */ if (LT_) goto L_00544dda;
  /* 00544dd7 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
L_00544dda:;
  /* 00544dda mov ebx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00544ddd mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00544de0 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544de2 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00544de5 jl 0x544dea */ if (LT_) goto L_00544dea;
  /* 00544de7 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
L_00544dea:;
  /* 00544dea mov ebx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ebx = (u32)(M32(m_)); }
  /* 00544ded lea edx, [ecx + ecx*2 + 3] */ edx = (u32)((u32)(ecx + ecx * 2u + 0x3u));
  /* 00544df1 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00544df4 and edx, 0xfffffffc */ { u32 a_ = edx, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00544df7 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544df8 imul edi, edx */ { s64 p_ = (s64)(s32)edi * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00544dfb add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00544dfd mov dword ptr [ebp - 0x20], 0xff000000 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xff000000u); }
  /* 00544e04 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 00544e07 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 00544e0a mov dword ptr [ebp - 0x14], 0xff000000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xff000000u); }
  /* 00544e11 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00544e14 movq mm7, qword ptr [ebp - 0x20] */ TRAP(0x544e14u, "unimpl movq mm7, qword ptr [ebp - 0x20]");
  /* 00544e18 movq mm6, qword ptr [ebp - 0x18] */ TRAP(0x544e18u, "unimpl movq mm6, qword ptr [ebp - 0x18]");
  /* 00544e1c mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00544e1f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544e21 jle 0x544e9e */ if ((ZF_|LT_)) goto L_00544e9e;
  /* 00544e23 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
L_00544e26:;
  /* 00544e26 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00544e29 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00544e2c mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00544e2f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00544e32 je 0x544e6b */ if (ZF_) goto L_00544e6b;
L_00544e34:;
  /* 00544e34 movq mm0, qword ptr [esi] */ TRAP(0x544e34u, "unimpl movq mm0, qword ptr [esi]");
  /* 00544e37 movq mm2, qword ptr [esi + 6] */ TRAP(0x544e37u, "unimpl movq mm2, qword ptr [esi + 6]");
  /* 00544e3b add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00544e3e movq mm1, mm0 */ TRAP(0x544e3eu, "unimpl movq mm1, mm0");
  /* 00544e41 movq mm3, mm2 */ TRAP(0x544e41u, "unimpl movq mm3, mm2");
  /* 00544e44 psllq mm1, 8 */ TRAP(0x544e44u, "unimpl psllq mm1, 8");
  /* 00544e48 psllq mm3, 8 */ TRAP(0x544e48u, "unimpl psllq mm3, 8");
  /* 00544e4c por mm0, mm7 */ TRAP(0x544e4cu, "unimpl por mm0, mm7");
  /* 00544e4f por mm2, mm7 */ TRAP(0x544e4fu, "unimpl por mm2, mm7");
  /* 00544e52 por mm1, mm6 */ TRAP(0x544e52u, "unimpl por mm1, mm6");
  /* 00544e55 por mm3, mm6 */ TRAP(0x544e55u, "unimpl por mm3, mm6");
  /* 00544e58 pand mm0, mm1 */ TRAP(0x544e58u, "unimpl pand mm0, mm1");
  /* 00544e5b pand mm2, mm3 */ TRAP(0x544e5bu, "unimpl pand mm2, mm3");
  /* 00544e5e movq qword ptr [edi], mm0 */ TRAP(0x544e5eu, "unimpl movq qword ptr [edi], mm0");
  /* 00544e61 movq qword ptr [edi + 8], mm2 */ TRAP(0x544e61u, "unimpl movq qword ptr [edi + 8], mm2");
  /* 00544e65 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00544e68 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544e69 jne 0x544e34 */ if (!ZF_) goto L_00544e34;
L_00544e6b:;
  /* 00544e6b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00544e6e and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00544e71 je 0x544e85 */ if (ZF_) goto L_00544e85;
L_00544e73:;
  /* 00544e73 movd mm0, dword ptr [esi] */ TRAP(0x544e73u, "unimpl movd mm0, dword ptr [esi]");
  /* 00544e76 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00544e79 por mm0, mm7 */ TRAP(0x544e79u, "unimpl por mm0, mm7");
  /* 00544e7c movd dword ptr [edi], mm0 */ TRAP(0x544e7cu, "unimpl movd dword ptr [edi], mm0");
  /* 00544e7f add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00544e82 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544e83 jne 0x544e73 */ if (!ZF_) goto L_00544e73;
L_00544e85:;
  /* 00544e85 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00544e88 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00544e8b add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00544e8d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00544e8f dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544e90 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00544e93 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00544e96 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00544e99 jne 0x544e26 */ if (!ZF_) goto L_00544e26;
  /* 00544e9b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_00544e9e:;
  /* 00544e9e emms */ ;
  /* 00544ea0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544ea1 call 0x5aaf30 */ esp -= 4; M32(esp) = 0x544ea6u; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x544ea1u); RETCHK(0x544ea6u, 0x544ea1u); LOADALL;
  /* 00544ea6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544ea9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00544eaa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00544eab:;
  /* 00544eab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544eac mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00544eae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544eaf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544eb0(CPU *c) {
  NATIVE_HOOK(0x544eb0u) REGS; LOADALL;
L_00544eb0:;
  /* 00544eb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544eb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544eb3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544eb6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544eb7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00544eba push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00544ebc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00544ebe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544ebf call 0x5ab2d0 */ esp -= 4; M32(esp) = 0x544ec4u; SAVEALL; F_005ab2d0(c); ABI_CHECK(0x5ab2d0u, 0x544ebfu); RETCHK(0x544ec4u, 0x544ebfu); LOADALL;
  /* 00544ec4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544ec7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544ec9 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00544ecc je 0x544f78 */ if (ZF_) goto L_00544f78;
  /* 00544ed2 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00544ed5 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00544ed8 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00544edb cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544edd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00544ede push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00544edf lea edi, [ecx + 0x28] */ edi = (u32)((u32)(ecx + 0x28u));
  /* 00544ee2 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00544ee5 jl 0x544eea */ if (LT_) goto L_00544eea;
  /* 00544ee7 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_00544eea:;
  /* 00544eea mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 00544eed mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00544ef0 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544ef2 jl 0x544ef6 */ if (LT_) goto L_00544ef6;
  /* 00544ef4 mov edx, ecx */ { edx = (u32)(ecx); }
L_00544ef6:;
  /* 00544ef6 mov ebx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ebx = (u32)(M32(m_)); }
  /* 00544ef9 lea eax, [eax + eax*2 + 3] */ eax = (u32)((u32)(eax + eax * 2u + 0x3u));
  /* 00544efd and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544f00 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544f01 imul ecx, eax */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00544f04 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00544f06 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544f08 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00544f0b mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00544f0e mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 00544f11 jle 0x544f6d */ if ((ZF_|LT_)) goto L_00544f6d;
  /* 00544f13 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
L_00544f16:;
  /* 00544f16 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 00544f19 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00544f1c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
L_00544f1f:;
  /* 00544f1f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00544f21 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00544f23 mov edx, eax */ { edx = (u32)(eax); }
  /* 00544f25 and eax, 0xf8 */ { u32 a_ = eax, b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544f2a and ebx, 0xfc00 */ { u32 a_ = ebx, b_ = 0xfc00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00544f30 and edx, 0xf80000 */ { u32 a_ = edx, b_ = 0xf80000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00544f36 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00544f39 shr ebx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00544f3c shr edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00544f3f or eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544f41 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00544f43 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00544f46 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544f47 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00544f49 jne 0x544f1f */ if (!ZF_) goto L_00544f1f;
  /* 00544f4b mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00544f4e mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00544f51 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00544f54 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00544f57 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00544f59 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00544f5c sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00544f5e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544f5f mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00544f62 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 00544f65 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00544f68 jne 0x544f16 */ if (!ZF_) goto L_00544f16;
  /* 00544f6a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_00544f6d:;
  /* 00544f6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544f6e call 0x5aaf30 */ esp -= 4; M32(esp) = 0x544f73u; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x544f6eu); RETCHK(0x544f73u, 0x544f6eu); LOADALL;
  /* 00544f73 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544f76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00544f77 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00544f78:;
  /* 00544f78 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544f79 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00544f7b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544f7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00544f80(CPU *c) {
  NATIVE_HOOK(0x544f80u) REGS; LOADALL;
L_00544f80:;
  /* 00544f80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00544f81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00544f83 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544f86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544f87 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00544f8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00544f8b mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 00544f8e cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00544f91 jle 0x545013 */ if ((ZF_|LT_)) goto L_00545013;
  /* 00544f97 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00544f99 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00544f9b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00544f9c call 0x5ab2d0 */ esp -= 4; M32(esp) = 0x544fa1u; SAVEALL; F_005ab2d0(c); ABI_CHECK(0x5ab2d0u, 0x544f9cu); RETCHK(0x544fa1u, 0x544f9cu); LOADALL;
  /* 00544fa1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00544fa4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544fa6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00544fa9 jne 0x544fb1 */ if (!ZF_) goto L_00544fb1;
  /* 00544fab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00544fac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00544fad mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00544faf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00544fb0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00544fb1:;
  /* 00544fb1 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 00544fb4 lea eax, [edi + edi - 4] */ eax = (u32)((u32)(edi + edi + 0xfffffffcu));
  /* 00544fb8 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00544fbb mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00544fbe mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00544fc1 sar edi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00544fc4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00544fc6 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00544fc9 jle 0x54500a */ if ((ZF_|LT_)) goto L_0054500a;
  /* 00544fcb mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00544fce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00544fcf nop */ ;
L_00544fd0:;
  /* 00544fd0 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00544fd3 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00544fd6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00544fd9 add edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_00544fdc:;
  /* 00544fdc mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00544fde mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 00544fe0 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00544fe3 sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00544fe6 ror eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = (r_ >> 31) & 1u; u32 of_ = ((r_ >> 31) ^ (r_ >> 30)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); eax = (u32)(r_); } }
  /* 00544fe9 ror ebx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ebx; u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = (r_ >> 31) & 1u; u32 of_ = ((r_ >> 31) ^ (r_ >> 30)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); ebx = (u32)(r_); } }
  /* 00544fec mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00544fef mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00544ff2 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544ff3 jne 0x544fdc */ if (!ZF_) goto L_00544fdc;
  /* 00544ff5 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00544ff8 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00544ffb add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00544ffd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00544ffe mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00545001 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00545004 jne 0x544fd0 */ if (!ZF_) goto L_00544fd0;
  /* 00545006 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00545009 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054500a:;
  /* 0054500a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054500b call 0x5aaf30 */ esp -= 4; M32(esp) = 0x545010u; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x54500bu); RETCHK(0x545010u, 0x54500bu); LOADALL;
  /* 00545010 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00545013:;
  /* 00545013 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545014 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00545019 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054501a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054501c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054501d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545020(CPU *c) {
  NATIVE_HOOK(0x545020u) REGS; LOADALL;
L_00545020:;
  /* 00545020 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545023 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545026 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545027 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054502a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054502b mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 0054502e cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545031 jle 0x5450ab */ if ((ZF_|LT_)) goto L_005450ab;
  /* 00545033 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00545035 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00545037 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545038 call 0x5ab2d0 */ esp -= 4; M32(esp) = 0x54503du; SAVEALL; F_005ab2d0(c); ABI_CHECK(0x5ab2d0u, 0x545038u); RETCHK(0x54503du, 0x545038u); LOADALL;
  /* 0054503d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545040 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545042 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00545045 jne 0x54504d */ if (!ZF_) goto L_0054504d;
  /* 00545047 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545048 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545049 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054504b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054504c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054504d:;
  /* 0054504d mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 00545050 lea eax, [edi*4 - 4] */ eax = (u32)((u32)(edi * 4u + 0xfffffffcu));
  /* 00545057 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0054505a mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054505d sar edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0054505f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545061 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00545064 jle 0x5450a2 */ if ((ZF_|LT_)) goto L_005450a2;
  /* 00545066 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00545069 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054506a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00545070:;
  /* 00545070 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00545073 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00545076 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00545079 add edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_0054507c:;
  /* 0054507c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054507e mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 00545080 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 00545082 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 00545084 sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00545087 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054508a dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054508b jne 0x54507c */ if (!ZF_) goto L_0054507c;
  /* 0054508d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00545090 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545093 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00545095 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00545096 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00545099 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0054509c jne 0x545070 */ if (!ZF_) goto L_00545070;
  /* 0054509e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005450a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005450a2:;
  /* 005450a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005450a3 call 0x5aaf30 */ esp -= 4; M32(esp) = 0x5450a8u; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x5450a3u); RETCHK(0x5450a8u, 0x5450a3u); LOADALL;
  /* 005450a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005450ab:;
  /* 005450ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005450ac mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005450b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005450b2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005450b4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005450b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005450c0(CPU *c) {
  NATIVE_HOOK(0x5450c0u) REGS; LOADALL;
L_005450c0:;
  /* 005450c0 mov eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (u32)(M32(m_)); }
  /* 005450c3 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005450c6 je 0x5450e9 */ if (ZF_) goto L_005450e9;
  /* 005450c8 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005450cb je 0x5450df */ if (ZF_) goto L_005450df;
  /* 005450cd cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005450d0 je 0x5450d5 */ if (ZF_) goto L_005450d5;
  /* 005450d2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005450d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005450d5:;
  /* 005450d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005450d6 call 0x545020 */ esp -= 4; M32(esp) = 0x5450dbu; SAVEALL; F_00545020(c); ABI_CHECK(0x545020u, 0x5450d6u); RETCHK(0x5450dbu, 0x5450d6u); LOADALL;
  /* 005450db add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005450de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005450df:;
  /* 005450df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005450e0 call 0x544f80 */ esp -= 4; M32(esp) = 0x5450e5u; SAVEALL; F_00544f80(c); ABI_CHECK(0x544f80u, 0x5450e0u); RETCHK(0x5450e5u, 0x5450e0u); LOADALL;
  /* 005450e5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005450e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005450e9:;
  /* 005450e9 jmp 0x559270 */ SAVEALL; F_00559270(c); return;
}

void F_005450f0(CPU *c) {
  NATIVE_HOOK(0x5450f0u) REGS; LOADALL;
L_005450f0:;
  /* 005450f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005450f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005450f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005450f4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005450f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005450f8 call 0x5eeb90 */ esp -= 4; M32(esp) = 0x5450fdu; SAVEALL; F_005eeb90(c); ABI_CHECK(0x5eeb90u, 0x5450f8u); RETCHK(0x5450fdu, 0x5450f8u); LOADALL;
  /* 005450fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545100 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545102 jne 0x54511b */ if (!ZF_) goto L_0054511b;
  /* 00545104 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00545107 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545108 push 0x5450f0 */ { u32 v_ = 0x5450f0u; esp -= 4; M32(esp) = v_; }
  /* 0054510d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054510e call 0x5ac180 */ esp -= 4; M32(esp) = 0x545113u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x54510eu); RETCHK(0x545113u, 0x54510eu); LOADALL;
  /* 00545113 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545116 mov eax, esi */ { eax = (u32)(esi); }
  /* 00545118 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545119 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054511a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054511b:;
  /* 0054511b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054511e mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00545120 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545122 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545123 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545124 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545130(CPU *c) {
  NATIVE_HOOK(0x545130u) REGS; LOADALL;
L_00545130:;
  /* 00545130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545133 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545134 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00545137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545138 push 0x5450f0 */ { u32 v_ = 0x5450f0u; esp -= 4; M32(esp) = v_; }
  /* 0054513d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054513e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00545145 call 0x5ac180 */ esp -= 4; M32(esp) = 0x54514au; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x545145u); RETCHK(0x54514au, 0x545145u); LOADALL;
  /* 0054514a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054514d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545150 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545152 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545153 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545160(CPU *c) {
  NATIVE_HOOK(0x545160u) REGS; LOADALL;
L_00545160:;
  /* 00545160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545163 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00545166 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545167 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054516a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054516b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054516c call 0x5ea7b0 */ esp -= 4; M32(esp) = 0x545171u; SAVEALL; F_005ea7b0(c); ABI_CHECK(0x5ea7b0u, 0x54516cu); RETCHK(0x545171u, 0x54516cu); LOADALL;
  /* 00545171 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545174 mov eax, esi */ { eax = (u32)(esi); }
  /* 00545176 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545177 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545178 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545180(CPU *c) {
  NATIVE_HOOK(0x545180u) REGS; LOADALL;
L_00545180:;
  /* 00545180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545183 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00545186 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00545189 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054518b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054518d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054518e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545190(CPU *c) {
  NATIVE_HOOK(0x545190u) REGS; LOADALL;
L_00545190:;
  /* 00545190 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545191 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545192 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545193 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00545195 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00545197 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00545199 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x54519eu; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x545199u); RETCHK(0x54519eu, 0x545199u); LOADALL;
  /* 0054519e mov esi, eax */ { esi = (u32)(eax); }
  /* 005451a0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005451a3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005451a5 je 0x5451ce */ if (ZF_) goto L_005451ce;
  /* 005451a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005451a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005451a9 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 005451ab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005451ac call 0x5b3890 */ esp -= 4; M32(esp) = 0x5451b1u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5451acu); RETCHK(0x5451b1u, 0x5451acu); LOADALL;
  /* 005451b1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005451b4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005451b6 je 0x5451c3 */ if (ZF_) goto L_005451c3;
  /* 005451b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005451b9 call 0x57d620 */ esp -= 4; M32(esp) = 0x5451beu; SAVEALL; F_0057d620(c); ABI_CHECK(0x57d620u, 0x5451b9u); RETCHK(0x5451beu, 0x5451b9u); LOADALL;
  /* 005451be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005451c1 mov edi, eax */ { edi = (u32)(eax); }
L_005451c3:;
  /* 005451c3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005451c5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005451c6 call 0x5b3410 */ esp -= 4; M32(esp) = 0x5451cbu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x5451c6u); RETCHK(0x5451cbu, 0x5451c6u); LOADALL;
  /* 005451cb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005451ce:;
  /* 005451ce mov eax, edi */ { eax = (u32)(edi); }
  /* 005451d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005451d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005451d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005451e0(CPU *c) {
  NATIVE_HOOK(0x5451e0u) REGS; LOADALL;
L_005451e0:;
  /* 005451e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005451e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005451e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005451e3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005451e5 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005451e7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005451e9 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x5451eeu; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x5451e9u); RETCHK(0x5451eeu, 0x5451e9u); LOADALL;
  /* 005451ee mov esi, eax */ { esi = (u32)(eax); }
  /* 005451f0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005451f3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005451f5 je 0x54521e */ if (ZF_) goto L_0054521e;
  /* 005451f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005451f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005451f9 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005451fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005451fc call 0x5b3890 */ esp -= 4; M32(esp) = 0x545201u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5451fcu); RETCHK(0x545201u, 0x5451fcu); LOADALL;
  /* 00545201 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545204 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545206 je 0x545213 */ if (ZF_) goto L_00545213;
  /* 00545208 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545209 call 0x579380 */ esp -= 4; M32(esp) = 0x54520eu; SAVEALL; F_00579380(c); ABI_CHECK(0x579380u, 0x545209u); RETCHK(0x54520eu, 0x545209u); LOADALL;
  /* 0054520e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545211 mov edi, eax */ { edi = (u32)(eax); }
L_00545213:;
  /* 00545213 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00545215 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545216 call 0x5b3410 */ esp -= 4; M32(esp) = 0x54521bu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x545216u); RETCHK(0x54521bu, 0x545216u); LOADALL;
  /* 0054521b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054521e:;
  /* 0054521e mov eax, edi */ { eax = (u32)(edi); }
  /* 00545220 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545221 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545222 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545230(CPU *c) {
  NATIVE_HOOK(0x545230u) REGS; LOADALL;
L_00545230:;
  /* 00545230 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545231 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545232 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545233 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00545235 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00545237 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00545239 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x54523eu; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x545239u); RETCHK(0x54523eu, 0x545239u); LOADALL;
  /* 0054523e mov esi, eax */ { esi = (u32)(eax); }
  /* 00545240 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545243 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545245 je 0x54526e */ if (ZF_) goto L_0054526e;
  /* 00545247 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545248 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545249 push 0x1b */ { u32 v_ = 0x1bu; esp -= 4; M32(esp) = v_; }
  /* 0054524b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054524c call 0x5b3890 */ esp -= 4; M32(esp) = 0x545251u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x54524cu); RETCHK(0x545251u, 0x54524cu); LOADALL;
  /* 00545251 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545254 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545256 je 0x545263 */ if (ZF_) goto L_00545263;
  /* 00545258 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545259 call 0x5e81c0 */ esp -= 4; M32(esp) = 0x54525eu; SAVEALL; F_005e81c0(c); ABI_CHECK(0x5e81c0u, 0x545259u); RETCHK(0x54525eu, 0x545259u); LOADALL;
  /* 0054525e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545261 mov edi, eax */ { edi = (u32)(eax); }
L_00545263:;
  /* 00545263 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00545265 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545266 call 0x5b3410 */ esp -= 4; M32(esp) = 0x54526bu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x545266u); RETCHK(0x54526bu, 0x545266u); LOADALL;
  /* 0054526b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054526e:;
  /* 0054526e mov eax, edi */ { eax = (u32)(edi); }
  /* 00545270 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545271 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545272 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545280(CPU *c) {
  NATIVE_HOOK(0x545280u) REGS; LOADALL;
L_00545280:;
  /* 00545280 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545281 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545283 sub esp, 0x78 */ { u32 a_ = esp, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545286 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00545289 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054528a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054528b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00545292 mov dword ptr [ebp - 0xc], 0x7f7fffff */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 00545299 call 0x5e5880 */ esp -= 4; M32(esp) = 0x54529eu; SAVEALL; F_005e5880(c); ABI_CHECK(0x5e5880u, 0x545299u); RETCHK(0x54529eu, 0x545299u); LOADALL;
  /* 0054529e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005452a0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005452a3 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005452a5 jle 0x54530a */ if ((ZF_|LT_)) goto L_0054530a;
  /* 005452a7 jmp 0x5452b0 */ goto L_005452b0;
L_005452a9:;
  /* 005452a9 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005452ac lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005452b0:;
  /* 005452b0 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005452b3 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 005452b6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005452b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005452b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005452b9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005452ba mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 005452bd call 0x5e58d0 */ esp -= 4; M32(esp) = 0x5452c2u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x5452bdu); RETCHK(0x5452c2u, 0x5452bdu); LOADALL;
  /* 005452c2 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 005452c4 fsub dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005452c7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005452ca fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005452cd fsub dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005452d0 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005452d3 fsub dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005452d6 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005452d8 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005452da fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 005452dc fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 005452de faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005452e0 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005452e2 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005452e4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005452e6 fstp st(3) */ ST(3) = ST(0); FPOP();
  /* 005452e8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005452ea fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005452ec fcom dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005452ef fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005452f1 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005452f4 jp 0x545301 */ if (PF_) goto L_00545301;
  /* 005452f6 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005452f9 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005452fc mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005452ff jmp 0x545303 */ goto L_00545303;
L_00545301:;
  /* 00545301 fstp st(0) */ ST(0) = ST(0); FPOP();
L_00545303:;
  /* 00545303 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545306 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545308 jg 0x5452a9 */ if (!(ZF_|LT_)) goto L_005452a9;
L_0054530a:;
  /* 0054530a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054530d lea eax, [ebx + ecx - 1] */ eax = (u32)((u32)(ebx + ecx + 0xffffffffu));
  /* 00545311 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00545312 idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x545312u); eax = q_; edx = r_; }
  /* 00545314 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00545317 lea eax, [ebp - 0x78] */ eax = (u32)((u32)(ebp + 0xffffff88u));
  /* 0054531a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054531b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054531c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054531d mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00545320 call 0x5e58d0 */ esp -= 4; M32(esp) = 0x545325u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x545320u); RETCHK(0x545325u, 0x545320u); LOADALL;
  /* 00545325 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00545328 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054532b lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0054532e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054532f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545330 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545331 call 0x5e58d0 */ esp -= 4; M32(esp) = 0x545336u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x545331u); RETCHK(0x545336u, 0x545331u); LOADALL;
  /* 00545336 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00545339 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054533c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0054533f mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00545341 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00545344 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00545347 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054534a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054534d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054534e cdq */ edx = (u32)((s32)eax >> 31);
  /* 0054534f idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x54534fu); eax = q_; edx = r_; }
  /* 00545351 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00545354 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545355 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545356 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00545359 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054535a call 0x5e58d0 */ esp -= 4; M32(esp) = 0x54535fu; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x54535au); RETCHK(0x54535fu, 0x54535au); LOADALL;
  /* 0054535f fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00545361 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545364 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545367 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054536a fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0054536d fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545370 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545373 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00545376 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545379 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054537c fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0054537e fsub dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545381 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545384 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00545387 fsub dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054538a fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054538d fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00545390 fsub dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545393 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545396 fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 00545399 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054539c fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054539f fld dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); FPUSH((double)MF32(m_)); }
  /* 005453a2 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005453a5 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005453a8 fld dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); FPUSH((double)MF32(m_)); }
  /* 005453ab fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005453ae fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005453b1 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005453b4 fmul dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453b7 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005453ba fmul dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453bd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005453bf fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 005453c2 fmul dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005453c6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005453c8 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005453cb fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005453ce fmul dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453d1 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005453d4 fmul dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453d7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005453d9 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 005453dc fmul dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453df faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005453e1 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005453e4 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005453e7 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453ea fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005453ed fmul dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453f0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005453f2 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 005453f5 fmul dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005453f8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005453fa fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 005453fd fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545403 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545405 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545408 jne 0x54541b */ if (!ZF_) goto L_0054541b;
  /* 0054540a fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545410 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545412 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545415 jp 0x54541d */ if (PF_) goto L_0054541d;
  /* 00545417 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00545419 jmp 0x54541f */ goto L_0054541f;
L_0054541b:;
  /* 0054541b fstp st(0) */ ST(0) = ST(0); FPOP();
L_0054541d:;
  /* 0054541d xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0054541f:;
  /* 0054541f fld dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); FPUSH((double)MF32(m_)); }
  /* 00545422 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545425 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545428 fld dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); FPUSH((double)MF32(m_)); }
  /* 0054542b fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054542e fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545431 fld dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); FPUSH((double)MF32(m_)); }
  /* 00545434 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545437 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054543a fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 0054543d fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545440 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00545443 fmul dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545446 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545448 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0054544b fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054544e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545450 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00545453 fmul dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545456 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00545459 fmul dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054545c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054545e fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00545461 fmul dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545464 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545466 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00545469 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054546c fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0054546f fmul dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545472 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545474 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00545477 fmul dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054547a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054547c fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0054547e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545484 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545486 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545489 jne 0x54549c */ if (!ZF_) goto L_0054549c;
  /* 0054548b fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545491 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545493 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545496 jp 0x54549e */ if (PF_) goto L_0054549e;
  /* 00545498 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054549a jmp 0x5454a0 */ goto L_005454a0;
L_0054549c:;
  /* 0054549c fstp st(0) */ ST(0) = ST(0); FPOP();
L_0054549e:;
  /* 0054549e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_005454a0:;
  /* 005454a0 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005454a2 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 005454a5 fdiv dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005454a8 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005454ab fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005454ad fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005454b0 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005454b3 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005454b5 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005454b8 fmul dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005454bb fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005454be fdivrp st(1) */ { double s0_ = ST(0); ST(1) = FR(s0_ / ST(1)); FPOP(); }
  /* 005454c0 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 005454c3 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005454c5 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005454c8 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 005454cb fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005454cd fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005454d0 fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005454d3 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005454d6 je 0x5455e8 */ if (ZF_) goto L_005455e8;
  /* 005454dc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005454de je 0x5455b5 */ if (ZF_) goto L_005455b5;
  /* 005454e4 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005454e7 lea eax, [ebp - 0x54] */ eax = (u32)((u32)(ebp + 0xffffffacu));
  /* 005454ea fsub dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005454ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005454ee fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005454f1 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005454f4 fsub dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005454f7 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005454fa fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 005454fd fsub dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545500 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545503 call 0x5aa970 */ esp -= 4; M32(esp) = 0x545508u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x545503u); RETCHK(0x545508u, 0x545503u); LOADALL;
  /* 00545508 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054550b fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0054550e lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00545511 fsub dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545514 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545515 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545518 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 0054551b fsub dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054551e fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545521 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00545524 fsub dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545527 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054552a call 0x5aa970 */ esp -= 4; M32(esp) = 0x54552fu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x54552au); RETCHK(0x54552fu, 0x54552au); LOADALL;
  /* 0054552f fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545532 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545535 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545537 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054553a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054553d jp 0x545585 */ if (PF_) goto L_00545585;
  /* 0054553f fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 00545542 lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00545545 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545548 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545549 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054554a fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054554c fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0054554f fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545552 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545555 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 00545558 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054555b fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054555e call 0x5aa860 */ esp -= 4; M32(esp) = 0x545563u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54555eu); RETCHK(0x545563u, 0x54555eu); LOADALL;
  /* 00545563 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545565 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00545567 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 0054556a fchs */ ST(0) = -ST(0);
  /* 0054556c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054556f fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545571 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00545574 fchs */ ST(0) = -ST(0);
  /* 00545576 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545579 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054557c fchs */ ST(0) = -ST(0);
  /* 0054557e fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545581 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545583 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545584 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545585:;
  /* 00545585 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 00545588 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054558b fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054558d fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 00545590 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545593 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545596 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 00545599 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054559c fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054559f lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 005455a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005455a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005455a4 call 0x5aa860 */ esp -= 4; M32(esp) = 0x5455a9u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x5455a4u); RETCHK(0x5455a9u, 0x5455a4u); LOADALL;
  /* 005455a9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005455ab mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005455ae add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005455b1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005455b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005455b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005455b5:;
  /* 005455b5 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 005455b8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005455bb fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005455be lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 005455c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005455c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005455c3 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005455c5 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 005455c8 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005455cb fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005455ce fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 005455d1 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005455d4 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005455d7 call 0x5aa860 */ esp -= 4; M32(esp) = 0x5455dcu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x5455d7u); RETCHK(0x5455dcu, 0x5455d7u); LOADALL;
  /* 005455dc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005455de mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005455e1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005455e4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005455e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005455e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005455e8:;
  /* 005455e8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005455ea je 0x545635 */ if (ZF_) goto L_00545635;
  /* 005455ec fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 005455ef mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005455f2 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005455f5 lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005455f8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005455f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005455fa fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005455fc fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 005455ff fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545602 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545605 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 00545608 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054560b fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054560e call 0x5aa860 */ esp -= 4; M32(esp) = 0x545613u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54560eu); RETCHK(0x545613u, 0x54560eu); LOADALL;
  /* 00545613 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545615 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00545617 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 0054561a fchs */ ST(0) = -ST(0);
  /* 0054561c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054561f fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545621 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00545624 fchs */ ST(0) = -ST(0);
  /* 00545626 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545629 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054562c fchs */ ST(0) = -ST(0);
  /* 0054562e fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545631 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545633 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545634 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545635:;
  /* 00545635 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00545638 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545639 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0054563c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054563d call 0x5aa860 */ esp -= 4; M32(esp) = 0x545642u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54563du); RETCHK(0x545642u, 0x54563du); LOADALL;
  /* 00545642 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545644 lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00545647 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545648 lea eax, [ebp - 0x54] */ eax = (u32)((u32)(ebp + 0xffffffacu));
  /* 0054564b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054564c call 0x5aa860 */ esp -= 4; M32(esp) = 0x545651u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54564cu); RETCHK(0x545651u, 0x54564cu); LOADALL;
  /* 00545651 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545653 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 00545656 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545657 fsub dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054565a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054565b fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054565d fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 00545660 fsub dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545663 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545666 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00545669 fsub dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054566c fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054566f call 0x5aa860 */ esp -= 4; M32(esp) = 0x545674u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54566fu); RETCHK(0x545674u, 0x54566fu); LOADALL;
  /* 00545674 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545676 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00545679 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054567c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054567e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054567f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545680(CPU *c) {
  NATIVE_HOOK(0x545680u) REGS; LOADALL;
L_00545680:;
  /* 00545680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545683 sub esp, 0x7c */ { u32 a_ = esp, b_ = 0x7cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545686 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00545687 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545688 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054568a mov esi, eax */ { esi = (u32)(eax); }
  /* 0054568c cmp dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054568f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545690 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00545693 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00545696 mov dword ptr [ebp - 0xc], 0x7f7fffff */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 0054569d jle 0x545714 */ if ((ZF_|LT_)) goto L_00545714;
  /* 0054569f nop */ ;
L_005456a0:;
  /* 005456a0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005456a3 mov eax, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); eax = (u32)(M32(m_)); }
  /* 005456a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005456a7 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005456aa call 0x5e5880 */ esp -= 4; M32(esp) = 0x5456afu; SAVEALL; F_005e5880(c); ABI_CHECK(0x5e5880u, 0x5456aau); RETCHK(0x5456afu, 0x5456aau); LOADALL;
  /* 005456af mov edi, eax */ { edi = (u32)(eax); }
  /* 005456b1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005456b4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005456b6 jle 0x54570c */ if ((ZF_|LT_)) goto L_0054570c;
L_005456b8:;
  /* 005456b8 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 005456bb lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 005456be push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005456bf dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005456c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005456c1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005456c2 call 0x5e58d0 */ esp -= 4; M32(esp) = 0x5456c7u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x5456c2u); RETCHK(0x5456c7u, 0x5456c2u); LOADALL;
  /* 005456c7 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 005456c9 fsub dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005456cc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005456cf fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005456d2 fsub dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005456d5 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005456d8 fsub dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005456db fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005456dd fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005456df fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 005456e1 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 005456e3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005456e5 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005456e7 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005456e9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005456eb fstp st(3) */ ST(3) = ST(0); FPOP();
  /* 005456ed fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005456ef fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005456f1 fcom dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005456f4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005456f6 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005456f9 jp 0x545706 */ if (PF_) goto L_00545706;
  /* 005456fb fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005456fe mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00545701 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00545704 jmp 0x545708 */ goto L_00545708;
L_00545706:;
  /* 00545706 fstp st(0) */ ST(0) = ST(0); FPOP();
L_00545708:;
  /* 00545708 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054570a jg 0x5456b8 */ if (!(ZF_|LT_)) goto L_005456b8;
L_0054570c:;
  /* 0054570c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054570f inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00545710 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545712 jl 0x5456a0 */ if (LT_) goto L_005456a0;
L_00545714:;
  /* 00545714 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00545717 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0054571a mov edi, dword ptr [eax + ecx*4] */ { const u32 m_ = (u32)(eax + ecx * 4u); edi = (u32)(M32(m_)); }
  /* 0054571d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054571e call 0x5e5880 */ esp -= 4; M32(esp) = 0x545723u; SAVEALL; F_005e5880(c); ABI_CHECK(0x5e5880u, 0x54571eu); RETCHK(0x545723u, 0x54571eu); LOADALL;
  /* 00545723 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00545726 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00545728 lea eax, [ebx + edx - 1] */ eax = (u32)((u32)(ebx + edx + 0xffffffffu));
  /* 0054572c cdq */ edx = (u32)((s32)eax >> 31);
  /* 0054572d idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x54572du); eax = q_; edx = r_; }
  /* 0054572f lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 00545732 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545733 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545734 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545735 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 00545738 call 0x5e58d0 */ esp -= 4; M32(esp) = 0x54573du; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x545738u); RETCHK(0x54573du, 0x545738u); LOADALL;
  /* 0054573d mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00545740 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00545743 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545744 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545745 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545746 call 0x5e58d0 */ esp -= 4; M32(esp) = 0x54574bu; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x545746u); RETCHK(0x54574bu, 0x545746u); LOADALL;
  /* 0054574b mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 0054574e mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00545751 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00545754 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00545756 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00545759 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054575c mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054575f mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00545762 lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00545765 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545766 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00545767 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00545768 idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x545768u); eax = q_; edx = r_; }
  /* 0054576a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054576b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054576c call 0x5e58d0 */ esp -= 4; M32(esp) = 0x545771u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x54576cu); RETCHK(0x545771u, 0x54576cu); LOADALL;
  /* 00545771 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00545773 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545776 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545779 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054577c fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0054577f fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545782 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545785 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00545788 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054578b fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054578e fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00545790 fsub dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545793 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545796 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00545799 fsub dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054579c fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054579f fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005457a2 fsub dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005457a5 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005457a8 fld dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); FPUSH((double)MF32(m_)); }
  /* 005457ab fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005457ae fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005457b1 fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 005457b4 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005457b7 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005457ba fld dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); FPUSH((double)MF32(m_)); }
  /* 005457bd fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005457c0 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005457c3 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005457c6 fmul dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005457c9 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 005457cc fmul dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005457cf faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005457d1 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005457d4 fmul dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005457d7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005457d9 fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005457dc fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005457df fmul dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005457e2 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 005457e5 fmul dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005457e8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005457ea fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005457ed fmul dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005457f0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005457f2 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005457f5 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005457f8 fmul dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005457fb fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 005457fe fmul dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545801 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545803 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 00545806 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545809 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054580b fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0054580e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545814 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545816 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545819 jne 0x54582c */ if (!ZF_) goto L_0054582c;
  /* 0054581b fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545821 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545823 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545826 jp 0x54582e */ if (PF_) goto L_0054582e;
  /* 00545828 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054582a jmp 0x545830 */ goto L_00545830;
L_0054582c:;
  /* 0054582c fstp st(0) */ ST(0) = ST(0); FPOP();
L_0054582e:;
  /* 0054582e xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_00545830:;
  /* 00545830 fld dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); FPUSH((double)MF32(m_)); }
  /* 00545833 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545836 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545839 fld dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); FPUSH((double)MF32(m_)); }
  /* 0054583c fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054583f fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545842 fld dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); FPUSH((double)MF32(m_)); }
  /* 00545845 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545848 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054584b fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0054584e fmul dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545851 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 00545854 fmul dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545857 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545859 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 0054585c fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054585f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545861 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00545864 fmul dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545867 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0054586a fmul dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054586d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054586f fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00545872 fmul dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545875 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545877 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0054587a fmul dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054587d fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 00545880 fmul dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545883 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545885 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00545888 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054588b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054588d fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0054588f fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545895 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545897 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054589a jne 0x5458ad */ if (!ZF_) goto L_005458ad;
  /* 0054589c fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005458a2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005458a4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005458a7 jp 0x5458af */ if (PF_) goto L_005458af;
  /* 005458a9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005458ab jmp 0x5458b1 */ goto L_005458b1;
L_005458ad:;
  /* 005458ad fstp st(0) */ ST(0) = ST(0); FPOP();
L_005458af:;
  /* 005458af xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_005458b1:;
  /* 005458b1 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005458b3 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 005458b6 fdiv dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005458b9 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 005458bc fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005458be fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005458c1 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005458c4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005458c6 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005458c9 fmul dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005458cc fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005458cf fdivrp st(1) */ { double s0_ = ST(0); ST(1) = FR(s0_ / ST(1)); FPOP(); }
  /* 005458d1 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 005458d4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005458d6 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005458d9 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 005458dc fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005458de fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005458e1 fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005458e4 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005458e7 je 0x545a29 */ if (ZF_) goto L_00545a29;
  /* 005458ed test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005458ef je 0x5459e8 */ if (ZF_) goto L_005459e8;
  /* 005458f5 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 005458f8 lea eax, [ebp - 0x58] */ eax = (u32)((u32)(ebp + 0xffffffa8u));
  /* 005458fb fsub dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005458fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005458ff fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545902 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 00545905 fsub dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545908 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054590b fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0054590e fsub dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545911 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545914 call 0x5aa970 */ esp -= 4; M32(esp) = 0x545919u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x545914u); RETCHK(0x545919u, 0x545914u); LOADALL;
  /* 00545919 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054591c fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0054591f lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00545922 fsub dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545925 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545926 fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545929 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0054592c fsub dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054592f fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545932 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00545935 fsub dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545938 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054593b call 0x5aa970 */ esp -= 4; M32(esp) = 0x545940u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x54593bu); RETCHK(0x545940u, 0x54593bu); LOADALL;
  /* 00545940 fcomp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545943 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545946 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545948 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054594b mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054594e jp 0x5459aa */ if (PF_) goto L_005459aa;
  /* 00545950 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00545953 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00545956 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545959 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0054595c mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0054595f fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545961 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 00545964 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545967 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054596a fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0054596d fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545970 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545973 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00545976 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545977 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545978 call 0x5aa860 */ esp -= 4; M32(esp) = 0x54597du; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x545978u); RETCHK(0x54597du, 0x545978u); LOADALL;
  /* 0054597d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054597f fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00545981 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545984 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00545987 fchs */ ST(0) = -ST(0);
  /* 00545989 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054598b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054598e fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00545991 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545992 fchs */ ST(0) = -ST(0);
  /* 00545994 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00545997 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054599a or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054599c fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054599f fchs */ ST(0) = -ST(0);
  /* 005459a1 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005459a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005459a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005459a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005459a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005459a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005459aa:;
  /* 005459aa fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 005459ad mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005459b0 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005459b3 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 005459b6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005459b7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005459b8 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005459ba fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 005459bd fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005459c0 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005459c3 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 005459c6 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005459c9 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005459cc call 0x5aa860 */ esp -= 4; M32(esp) = 0x5459d1u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x5459ccu); RETCHK(0x5459d1u, 0x5459ccu); LOADALL;
  /* 005459d1 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005459d3 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005459d6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005459d9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005459dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005459dd shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005459e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005459e1 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005459e3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005459e4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005459e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005459e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005459e8:;
  /* 005459e8 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 005459eb mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005459ee fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005459f1 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005459f4 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005459f6 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 005459f9 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005459fc fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005459ff fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 00545a02 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545a05 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545a08 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 00545a0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545a0c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545a0d call 0x5aa860 */ esp -= 4; M32(esp) = 0x545a12u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x545a0du); RETCHK(0x545a12u, 0x545a0du); LOADALL;
  /* 00545a12 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545a14 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545a17 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00545a1a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545a1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545a1e shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00545a21 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545a22 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545a24 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00545a25 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545a27 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545a28 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545a29:;
  /* 00545a29 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545a2b je 0x545a8a */ if (ZF_) goto L_00545a8a;
  /* 00545a2d fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00545a30 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00545a33 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545a36 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00545a39 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 00545a3c mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00545a3f fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545a41 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 00545a44 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545a47 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545a4a fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 00545a4d fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545a50 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545a53 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00545a56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545a57 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545a58 call 0x5aa860 */ esp -= 4; M32(esp) = 0x545a5du; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x545a58u); RETCHK(0x545a5du, 0x545a58u); LOADALL;
  /* 00545a5d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545a5f fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00545a61 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545a64 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00545a67 fchs */ ST(0) = -ST(0);
  /* 00545a69 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545a6b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545a6e fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00545a71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545a72 fchs */ ST(0) = -ST(0);
  /* 00545a74 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00545a77 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545a7a or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545a7c fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00545a7f fchs */ ST(0) = -ST(0);
  /* 00545a81 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545a84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545a85 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00545a86 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545a88 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545a89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545a8a:;
  /* 00545a8a lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00545a8d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545a8e lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00545a91 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545a92 call 0x5aa860 */ esp -= 4; M32(esp) = 0x545a97u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x545a92u); RETCHK(0x545a97u, 0x545a92u); LOADALL;
  /* 00545a97 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545a99 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 00545a9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545a9d lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00545aa0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545aa1 call 0x5aa860 */ esp -= 4; M32(esp) = 0x545aa6u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x545aa1u); RETCHK(0x545aa6u, 0x545aa1u); LOADALL;
  /* 00545aa6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545aa8 fld dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); FPUSH((double)MF32(m_)); }
  /* 00545aab mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00545aae fsub dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545ab1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545ab2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545ab3 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545ab5 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 00545ab8 fsub dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545abb fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545abe fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 00545ac1 fsub dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545ac4 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545ac7 call 0x5aa860 */ esp -= 4; M32(esp) = 0x545accu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x545ac7u); RETCHK(0x545accu, 0x545ac7u); LOADALL;
  /* 00545acc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545ace mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545ad1 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00545ad4 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545ad7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545ad8 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00545adb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545adc or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545ade pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00545adf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545ae1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545ae2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545af0(CPU *c) {
  NATIVE_HOOK(0x545af0u) REGS; LOADALL;
L_00545af0:;
  /* 00545af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545af3 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545af6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00545af7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545af8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545af9 mov edi, eax */ { edi = (u32)(eax); }
  /* 00545afb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00545afe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545aff call 0x5e5880 */ esp -= 4; M32(esp) = 0x545b04u; SAVEALL; F_005e5880(c); ABI_CHECK(0x5e5880u, 0x545affu); RETCHK(0x545b04u, 0x545affu); LOADALL;
  /* 00545b04 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00545b06 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00545b09 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00545b0c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00545b0e mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00545b11 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545b14 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 00545b17 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 00545b1a mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00545b1d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00545b20:;
  /* 00545b20 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00545b23 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00545b26 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00545b29 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00545b2c mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00545b2f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545b31 mov edi, esi */ { edi = (u32)(esi); }
  /* 00545b33 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 00545b36 mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 00545b39 je 0x545b3e */ if (ZF_) goto L_00545b3e;
  /* 00545b3b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00545b3c jmp 0x545b42 */ goto L_00545b42;
L_00545b3e:;
  /* 00545b3e lea esi, [esi + ebx - 1] */ esi = (u32)((u32)(esi + ebx + 0xffffffffu));
L_00545b42:;
  /* 00545b42 mov eax, esi */ { eax = (u32)(esi); }
  /* 00545b44 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00545b45 idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x545b45u); eax = q_; edx = r_; }
  /* 00545b47 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00545b4a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545b4b mov esi, edx */ { esi = (u32)(edx); }
  /* 00545b4d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00545b50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545b51 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545b52 call 0x5e58d0 */ esp -= 4; M32(esp) = 0x545b57u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x545b52u); RETCHK(0x545b57u, 0x545b52u); LOADALL;
  /* 00545b57 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00545b5a fsub dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545b5d lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00545b60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545b61 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545b64 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00545b67 fsub dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545b6a fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545b6d fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00545b70 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545b73 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545b76 call 0x5aa970 */ esp -= 4; M32(esp) = 0x545b7bu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x545b76u); RETCHK(0x545b7bu, 0x545b76u); LOADALL;
  /* 00545b7b fsubr dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00545b7e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545b81 fst dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); }
  /* 00545b84 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545b8a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545b8c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545b8f je 0x545b20 */ if (ZF_) goto L_00545b20;
  /* 00545b91 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00545b94 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00545b97 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545b98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545b99 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545b9a call 0x5e58d0 */ esp -= 4; M32(esp) = 0x545b9fu; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x545b9au); RETCHK(0x545b9fu, 0x545b9au); LOADALL;
  /* 00545b9f fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00545ba2 fsub dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545ba5 mov ebx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 00545ba8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545bab fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545bae fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00545bb1 fsub dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545bb4 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545bb7 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00545bba fsub dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545bbd fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545bc0 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00545bc3 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545bc6 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00545bc9 fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545bcc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545bce fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00545bd1 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545bd4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545bd6 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545bdc fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545bde test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545be1 jne 0x545bf2 */ if (!ZF_) goto L_00545bf2;
  /* 00545be3 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00545be6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545be7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00545be8 call 0x5aa860 */ esp -= 4; M32(esp) = 0x545bedu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x545be8u); RETCHK(0x545bedu, 0x545be8u); LOADALL;
  /* 00545bed fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545bef add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00545bf2:;
  /* 00545bf2 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00545bf5 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00545bf8 fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545bfa fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545bfd fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545c00 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00545c03 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00545c06 fmul dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545c09 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545c0c fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545c0f mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00545c12 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00545c15 fmul dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545c18 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00545c1a mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 00545c1d fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545c20 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545c23 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00545c26 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00545c29 mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00545c2c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545c2e mov eax, edi */ { eax = (u32)(edi); }
  /* 00545c30 jne 0x545c34 */ if (!ZF_) goto L_00545c34;
  /* 00545c32 mov eax, esi */ { eax = (u32)(esi); }
L_00545c34:;
  /* 00545c34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545c35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545c36 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00545c37 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545c39 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545c3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545c40(CPU *c) {
  NATIVE_HOOK(0x545c40u) REGS; LOADALL;
L_00545c40:;
  /* 00545c40 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545c42 jge 0x545c4d */ if (!LT_) goto L_00545c4d;
  /* 00545c44 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545c46 jg 0x545c4b */ if (!(ZF_|LT_)) goto L_00545c4b;
  /* 00545c48 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00545c4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545c4b:;
  /* 00545c4b add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00545c4d:;
  /* 00545c4d cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545c4f jl 0x545c5b */ if (LT_) goto L_00545c5b;
  /* 00545c51 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545c53 jg 0x545c5b */ if (!(ZF_|LT_)) goto L_00545c5b;
  /* 00545c55 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00545c5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545c5b:;
  /* 00545c5b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545c5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545c60(CPU *c) {
  NATIVE_HOOK(0x545c60u) REGS; LOADALL;
L_00545c60:;
  /* 00545c60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545c61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545c63 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545c66 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00545c69 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545c6b cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545c6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545c6e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545c6f mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 00545c72 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 00545c75 mov dword ptr [ebp - 4], 0x7f7fffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7f7fffffu); }
  /* 00545c7c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00545c7f jle 0x545d2a */ if ((ZF_|LT_)) goto L_00545d2a;
L_00545c85:;
  /* 00545c85 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545c88 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00545c8b mov edi, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 00545c8e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545c90 je 0x545d1a */ if (ZF_) goto L_00545d1a;
  /* 00545c96 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545c97 call 0x5e5880 */ esp -= 4; M32(esp) = 0x545c9cu; SAVEALL; F_005e5880(c); ABI_CHECK(0x5e5880u, 0x545c97u); RETCHK(0x545c9cu, 0x545c97u); LOADALL;
  /* 00545c9c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545c9f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00545ca1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545ca3 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00545ca6 jle 0x545d08 */ if ((ZF_|LT_)) goto L_00545d08;
L_00545ca8:;
  /* 00545ca8 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00545cab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545cac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545cad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545cae call 0x5e58d0 */ esp -= 4; M32(esp) = 0x545cb3u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x545caeu); RETCHK(0x545cb3u, 0x545caeu); LOADALL;
  /* 00545cb3 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00545cb6 fsub dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545cb8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545cbb fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545cbe fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00545cc1 fsub dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545cc4 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545cc7 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00545cca fsub dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545ccd fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545cd0 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00545cd3 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545cd6 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00545cd9 fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545cdc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545cde fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00545ce1 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545ce4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545ce6 fcom dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00545ce9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545ceb test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545cee jp 0x545cfe */ if (PF_) goto L_00545cfe;
  /* 00545cf0 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545cf3 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545cf6 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00545cf9 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 00545cfc jmp 0x545d00 */ goto L_00545d00;
L_00545cfe:;
  /* 00545cfe fstp st(0) */ ST(0) = ST(0); FPOP();
L_00545d00:;
  /* 00545d00 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00545d03 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00545d04 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545d06 jl 0x545ca8 */ if (LT_) goto L_00545ca8;
L_00545d08:;
  /* 00545d08 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00545d0b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00545d0e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00545d0f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545d11 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00545d14 jl 0x545c85 */ if (LT_) goto L_00545c85;
L_00545d1a:;
  /* 00545d1a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00545d1d fcomp dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545d23 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545d25 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545d28 jne 0x545d36 */ if (!ZF_) goto L_00545d36;
L_00545d2a:;
  /* 00545d2a fld dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); FPUSH((double)MF32(m_)); }
  /* 00545d30 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545d31 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545d32 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545d34 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545d35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545d36:;
  /* 00545d36 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00545d39 mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 00545d3c mov esi, dword ptr [ecx + edx*4] */ { const u32 m_ = (u32)(ecx + edx * 4u); esi = (u32)(M32(m_)); }
  /* 00545d3f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545d40 call 0x5e5880 */ esp -= 4; M32(esp) = 0x545d45u; SAVEALL; F_005e5880(c); ABI_CHECK(0x5e5880u, 0x545d40u); RETCHK(0x545d45u, 0x545d40u); LOADALL;
  /* 00545d45 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00545d48 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00545d4b lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00545d4e fld dword ptr [0x656dc8] */ { const u32 m_ = (u32)(0x656dc8u); FPUSH((double)MF32(m_)); }
  /* 00545d54 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545d55 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00545d58 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 00545d5a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545d5b fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545d5e fild dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)(s32)M32(m_)); }
  /* 00545d61 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 00545d63 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545d66 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00545d69 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545d6a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545d6c push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00545d6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545d6f call 0x5e6000 */ esp -= 4; M32(esp) = 0x545d74u; SAVEALL; F_005e6000(c); ABI_CHECK(0x5e6000u, 0x545d6fu); RETCHK(0x545d74u, 0x545d6fu); LOADALL;
  /* 00545d74 mov edi, 0xffffffe7 */ { edi = (u32)(0xffffffe7u); }
  /* 00545d79 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545d7c mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 00545d7f nop */ ;
L_00545d80:;
  /* 00545d80 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00545d83 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545d86 fadd dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545d89 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00545d8f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00545d91 call 0x61b154 */ esp -= 4; M32(esp) = 0x545d96u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x545d91u); RETCHK(0x545d96u, 0x545d91u); LOADALL;
  /* 00545d96 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00545d99 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00545d9c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00545d9e lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00545da1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545da2 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 00545da4 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545da7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00545daa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545dab fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00545dad push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00545daf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545db0 call 0x5e6000 */ esp -= 4; M32(esp) = 0x545db5u; SAVEALL; F_005e6000(c); ABI_CHECK(0x5e6000u, 0x545db0u); RETCHK(0x545db5u, 0x545db0u); LOADALL;
  /* 00545db5 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00545db8 fsub dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545dba add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545dbd fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545dc0 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00545dc3 fsub dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545dc6 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545dc9 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00545dcc fsub dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00545dcf fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545dd2 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00545dd5 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545dd8 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00545ddb fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545dde faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545de0 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00545de3 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00545de6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00545de8 fcom dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00545deb fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545ded test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545df0 jp 0x545dfd */ if (PF_) goto L_00545dfd;
  /* 00545df2 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00545df5 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00545df8 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 00545dfb jmp 0x545dff */ goto L_00545dff;
L_00545dfd:;
  /* 00545dfd fstp st(0) */ ST(0) = ST(0); FPOP();
L_00545dff:;
  /* 00545dff inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00545e00 cmp edi, 0x19 */ { u32 a_ = edi, b_ = 0x19u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00545e03 mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 00545e06 jl 0x545d80 */ if (LT_) goto L_00545d80;
  /* 00545e0c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00545e0f lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00545e12 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545e13 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00545e16 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545e17 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00545e18 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00545e1a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545e1b call 0x5e6000 */ esp -= 4; M32(esp) = 0x545e20u; SAVEALL; F_005e6000(c); ABI_CHECK(0x5e6000u, 0x545e1bu); RETCHK(0x545e20u, 0x545e1bu); LOADALL;
  /* 00545e20 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00545e23 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545e26 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545e28 je 0x545e34 */ if (ZF_) goto L_00545e34;
  /* 00545e2a mov ecx, 8 */ { ecx = (u32)(0x8u); }
  /* 00545e2f lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00545e32 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_00545e34:;
  /* 00545e34 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00545e37 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545e38 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545e39 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545e3b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545e3c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545e40(CPU *c) {
  NATIVE_HOOK(0x545e40u) REGS; LOADALL;
L_00545e40:;
  /* 00545e40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545e41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545e43 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 00545e49 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00545e4c fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 00545e4e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545e50 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545e53 jp 0x545e59 */ if (PF_) goto L_00545e59;
  /* 00545e55 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545e57 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545e58 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545e59:;
  /* 00545e59 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00545e5c fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00545e62 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00545e64 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00545e67 jne 0x545e70 */ if (!ZF_) goto L_00545e70;
  /* 00545e69 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00545e6e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545e6f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545e70:;
  /* 00545e70 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545e73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545e74 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545e80(CPU *c) {
  NATIVE_HOOK(0x545e80u) REGS; LOADALL;
L_00545e80:;
  /* 00545e80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545e81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545e83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545e84 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00545e87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545e88 call 0x5e94e0 */ esp -= 4; M32(esp) = 0x545e8du; SAVEALL; F_005e94e0(c); ABI_CHECK(0x5e94e0u, 0x545e88u); RETCHK(0x545e8du, 0x545e88u); LOADALL;
  /* 00545e8d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545e90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545e92 je 0x545ea2 */ if (ZF_) goto L_00545ea2;
  /* 00545e94 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00545e97 mov dword ptr [eax], 1 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1u); }
  /* 00545e9d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545e9f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545ea0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545ea1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545ea2:;
  /* 00545ea2 mov eax, esi */ { eax = (u32)(esi); }
  /* 00545ea4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545ea5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545ea6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545eb0(CPU *c) {
  NATIVE_HOOK(0x545eb0u) REGS; LOADALL;
L_00545eb0:;
  /* 00545eb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545eb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545eb3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545eb4 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00545eb7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00545eb8 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00545ebb mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00545ebe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545ebf push 0x545e80 */ { u32 v_ = 0x545e80u; esp -= 4; M32(esp) = v_; }
  /* 00545ec4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545ec5 call 0x57bed0 */ esp -= 4; M32(esp) = 0x545ecau; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x545ec5u); RETCHK(0x545ecau, 0x545ec5u); LOADALL;
  /* 00545eca mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00545ecc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545ecf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545ed1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545ed3 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00545ed6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00545ed7 and eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545ed9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00545eda pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545edb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545edc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545ee0(CPU *c) {
  NATIVE_HOOK(0x545ee0u) REGS; LOADALL;
L_00545ee0:;
  /* 00545ee0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545ee1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545ee3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545ee4 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00545ee7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545ee8 push 0x545eb0 */ { u32 v_ = 0x545eb0u; esp -= 4; M32(esp) = v_; }
  /* 00545eed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545eee mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00545ef5 call 0x577da0 */ esp -= 4; M32(esp) = 0x545efau; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x545ef5u); RETCHK(0x545efau, 0x545ef5u); LOADALL;
  /* 00545efa mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00545efd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545f00 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545f02 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545f03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545f10(CPU *c) {
  NATIVE_HOOK(0x545f10u) REGS; LOADALL;
L_00545f10:;
  /* 00545f10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545f11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545f13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545f14 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00545f17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545f18 call 0x5d9760 */ esp -= 4; M32(esp) = 0x545f1du; SAVEALL; F_005d9760(c); ABI_CHECK(0x5d9760u, 0x545f18u); RETCHK(0x545f1du, 0x545f18u); LOADALL;
  /* 00545f1d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545f20 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545f22 jne 0x545f36 */ if (!ZF_) goto L_00545f36;
  /* 00545f24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545f25 call 0x5d3b00 */ esp -= 4; M32(esp) = 0x545f2au; SAVEALL; F_005d3b00(c); ABI_CHECK(0x5d3b00u, 0x545f25u); RETCHK(0x545f2au, 0x545f25u); LOADALL;
  /* 00545f2a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545f2d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545f2f jne 0x545f36 */ if (!ZF_) goto L_00545f36;
  /* 00545f31 mov eax, esi */ { eax = (u32)(esi); }
  /* 00545f33 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545f34 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545f35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00545f36:;
  /* 00545f36 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00545f39 mov dword ptr [eax], 1 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1u); }
  /* 00545f3f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00545f41 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545f42 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545f43 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545f50(CPU *c) {
  NATIVE_HOOK(0x545f50u) REGS; LOADALL;
L_00545f50:;
  /* 00545f50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545f51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545f53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545f54 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00545f57 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545f58 push 0x545f10 */ { u32 v_ = 0x545f10u; esp -= 4; M32(esp) = v_; }
  /* 00545f5d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545f5e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00545f65 call 0x577da0 */ esp -= 4; M32(esp) = 0x545f6au; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x545f65u); RETCHK(0x545f6au, 0x545f65u); LOADALL;
  /* 00545f6a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00545f6d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545f70 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00545f72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545f73 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545f80(CPU *c) {
  NATIVE_HOOK(0x545f80u) REGS; LOADALL;
L_00545f80:;
  /* 00545f80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545f81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545f83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545f84 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00545f87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545f88 call 0x5e94e0 */ esp -= 4; M32(esp) = 0x545f8du; SAVEALL; F_005e94e0(c); ABI_CHECK(0x5e94e0u, 0x545f88u); RETCHK(0x545f8du, 0x545f88u); LOADALL;
  /* 00545f8d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545f90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00545f92 je 0x545fa9 */ if (ZF_) goto L_00545fa9;
  /* 00545f94 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00545f97 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00545f99 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545f9a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545f9b call 0x5e94a0 */ esp -= 4; M32(esp) = 0x545fa0u; SAVEALL; F_005e94a0(c); ABI_CHECK(0x5e94a0u, 0x545f9bu); RETCHK(0x545fa0u, 0x545f9bu); LOADALL;
  /* 00545fa0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545fa1 call 0x5e91c0 */ esp -= 4; M32(esp) = 0x545fa6u; SAVEALL; F_005e91c0(c); ABI_CHECK(0x5e91c0u, 0x545fa1u); RETCHK(0x545fa6u, 0x545fa1u); LOADALL;
  /* 00545fa6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00545fa9:;
  /* 00545fa9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00545fab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545fac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545fad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545fb0(CPU *c) {
  NATIVE_HOOK(0x545fb0u) REGS; LOADALL;
L_00545fb0:;
  /* 00545fb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545fb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545fb3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00545fb6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00545fb7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00545fba mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00545fbd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00545fbe push 0x545f80 */ { u32 v_ = 0x545f80u; esp -= 4; M32(esp) = v_; }
  /* 00545fc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00545fc4 call 0x57bed0 */ esp -= 4; M32(esp) = 0x545fc9u; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x545fc4u); RETCHK(0x545fc9u, 0x545fc4u); LOADALL;
  /* 00545fc9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00545fcc mov eax, esi */ { eax = (u32)(esi); }
  /* 00545fce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00545fcf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545fd0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545fe0(CPU *c) {
  NATIVE_HOOK(0x545fe0u) REGS; LOADALL;
L_00545fe0:;
  /* 00545fe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545fe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545fe3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00545fe6 and byte ptr [eax + 2], 0xfb */ { const u32 m_ = (u32)(eax + 0x2u); u32 a_ = M8(m_), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 00545fea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545feb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00545ff0(CPU *c) {
  NATIVE_HOOK(0x545ff0u) REGS; LOADALL;
L_00545ff0:;
  /* 00545ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00545ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00545ff3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00545ff6 or byte ptr [eax + 2], 4 */ { const u32 m_ = (u32)(eax + 0x2u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 00545ffa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00545ffb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546000(CPU *c) {
  NATIVE_HOOK(0x546000u) REGS; LOADALL;
L_00546000:;
  /* 00546000 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546002 push 0x545fe0 */ { u32 v_ = 0x545fe0u; esp -= 4; M32(esp) = v_; }
  /* 00546007 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546008 call 0x577da0 */ esp -= 4; M32(esp) = 0x54600du; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x546008u); RETCHK(0x54600du, 0x546008u); LOADALL;
  /* 0054600d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546010 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546020(CPU *c) {
  NATIVE_HOOK(0x546020u) REGS; LOADALL;
L_00546020:;
  /* 00546020 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546022 push 0x545ff0 */ { u32 v_ = 0x545ff0u; esp -= 4; M32(esp) = v_; }
  /* 00546027 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546028 call 0x577da0 */ esp -= 4; M32(esp) = 0x54602du; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x546028u); RETCHK(0x54602du, 0x546028u); LOADALL;
  /* 0054602d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546030 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546040(CPU *c) {
  NATIVE_HOOK(0x546040u) REGS; LOADALL;
L_00546040:;
  /* 00546040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546043 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00546046 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00546048 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054604b mov byte ptr [eax + 7], cl */ { const u32 m_ = (u32)(eax + 0x7u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054604e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054604f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546050(CPU *c) {
  NATIVE_HOOK(0x546050u) REGS; LOADALL;
L_00546050:;
  /* 00546050 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546051 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546053 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546054 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00546057 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054605a or dword ptr [eax + 8], 0x40 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0054605e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00546061 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546062 push 0x546040 */ { u32 v_ = 0x546040u; esp -= 4; M32(esp) = v_; }
  /* 00546067 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546068 call 0x57bed0 */ esp -= 4; M32(esp) = 0x54606du; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x546068u); RETCHK(0x54606du, 0x546068u); LOADALL;
  /* 0054606d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546070 mov eax, esi */ { eax = (u32)(esi); }
  /* 00546072 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546073 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546074 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546080(CPU *c) {
  NATIVE_HOOK(0x546080u) REGS; LOADALL;
L_00546080:;
  /* 00546080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546083 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00546086 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546087 push 0x546050 */ { u32 v_ = 0x546050u; esp -= 4; M32(esp) = v_; }
  /* 0054608c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054608d call 0x577da0 */ esp -= 4; M32(esp) = 0x546092u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54608du); RETCHK(0x546092u, 0x54608du); LOADALL;
  /* 00546092 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546095 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546096 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005460a0(CPU *c) {
  NATIVE_HOOK(0x5460a0u) REGS; LOADALL;
L_005460a0:;
  /* 005460a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005460a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005460a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005460a4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005460a7 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005460aa or dword ptr [eax + 8], 0x40 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005460ae mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005460b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005460b2 push 0x54b000 */ { u32 v_ = 0x54b000u; esp -= 4; M32(esp) = v_; }
  /* 005460b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005460b8 call 0x57bed0 */ esp -= 4; M32(esp) = 0x5460bdu; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x5460b8u); RETCHK(0x5460bdu, 0x5460b8u); LOADALL;
  /* 005460bd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005460c0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005460c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005460c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005460c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005460d0(CPU *c) {
  NATIVE_HOOK(0x5460d0u) REGS; LOADALL;
L_005460d0:;
  /* 005460d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005460d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005460d3 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 005460d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005460d7 push 0x5460a0 */ { u32 v_ = 0x5460a0u; esp -= 4; M32(esp) = v_; }
  /* 005460dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005460dd call 0x577da0 */ esp -= 4; M32(esp) = 0x5460e2u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x5460ddu); RETCHK(0x5460e2u, 0x5460ddu); LOADALL;
  /* 005460e2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005460e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005460e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005460f0(CPU *c) {
  NATIVE_HOOK(0x5460f0u) REGS; LOADALL;
L_005460f0:;
  /* 005460f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005460f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005460f3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005460f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005460f7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005460fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005460fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005460fc call 0x57b470 */ esp -= 4; M32(esp) = 0x546101u; SAVEALL; F_0057b470(c); ABI_CHECK(0x57b470u, 0x5460fcu); RETCHK(0x546101u, 0x5460fcu); LOADALL;
  /* 00546101 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546104 mov eax, esi */ { eax = (u32)(esi); }
  /* 00546106 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546107 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546108 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546110(CPU *c) {
  NATIVE_HOOK(0x546110u) REGS; LOADALL;
L_00546110:;
  /* 00546110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546113 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00546116 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546117 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054611a mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054611d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054611e push 0x5460f0 */ { u32 v_ = 0x5460f0u; esp -= 4; M32(esp) = v_; }
  /* 00546123 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546124 call 0x57bed0 */ esp -= 4; M32(esp) = 0x546129u; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x546124u); RETCHK(0x546129u, 0x546124u); LOADALL;
  /* 00546129 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054612c mov eax, esi */ { eax = (u32)(esi); }
  /* 0054612e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054612f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546130 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546140(CPU *c) {
  NATIVE_HOOK(0x546140u) REGS; LOADALL;
L_00546140:;
  /* 00546140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546143 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00546146 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546148 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054614a or edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054614c setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0054614f bsr ecx, edx */ { u32 v_ = edx; SETF(OP_LOGIC, 0, 0, v_, 4); if (v_) { ecx = (u32)((31 - __builtin_clz(v_))); } }
  /* 00546152 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00546154 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546156 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00546159 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054615b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054615c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546160(CPU *c) {
  NATIVE_HOOK(0x546160u) REGS; LOADALL;
L_00546160:;
  /* 00546160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546163 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546164 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546166 mov al, byte ptr [ecx + 0x23] */ { const u32 m_ = (u32)(ecx + 0x23u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00546169 and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054616c shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054616f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546171 je 0x5465ed */ if (ZF_) goto L_005465ed;
  /* 00546177 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0054617a add edx, -4 */ { u32 a_ = edx, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054617d cmp edx, 0x1c */ { u32 a_ = edx, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546180 ja 0x5465ed */ if (!(CF_|ZF_)) goto L_005465ed;
  /* 00546186 movzx edx, byte ptr [edx + 0x546604] */ { const u32 m_ = (u32)(edx + 0x546604u); edx = (u32)(M8(m_)); }
  /* 0054618d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054618e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054618f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546190 jmp dword ptr [edx*4 + 0x5465f4] */ { const u32 m_ = (u32)(edx * 4u + 0x5465f4u); u32 t_ = M32(m_); switch (t_) { case 0x546197u: goto L_00546197; case 0x546253u: goto L_00546253; case 0x546483u: goto L_00546483; case 0x5465eau: goto L_005465ea; default: SAVEALL; call_ind(c, t_); return; } }
L_00546197:;
  /* 00546197 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054619a mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054619d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054619f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005461a1 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005461a4 je 0x5461f4 */ if (ZF_) goto L_005461f4;
  /* 005461a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005461a8 jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
  /* 005461ae mov edi, edi */ { edi = (u32)(edi); }
L_005461b0:;
  /* 005461b0 mov eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M32(m_)); }
  /* 005461b3 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005461b6 imul eax, esi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005461b9 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005461bb mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005461be mov edx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edx = (u32)(M32(m_)); }
  /* 005461c1 imul edx, esi */ { s64 p_ = (s64)(s32)edx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005461c4 add edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005461c7 mov esi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005461ca lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005461d0:;
  /* 005461d0 movzx edi, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M8(m_)); }
  /* 005461d3 mov edi, dword ptr [ebx + edi*4] */ { const u32 m_ = (u32)(ebx + edi * 4u); edi = (u32)(M32(m_)); }
  /* 005461d6 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 005461d8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005461d9 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005461dc dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005461dd jne 0x5461d0 */ if (!ZF_) goto L_005461d0;
  /* 005461df mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 005461e2 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 005461e5 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005461e6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005461e8 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005461eb jl 0x5461b0 */ if (LT_) goto L_005461b0;
  /* 005461ed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005461ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005461ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005461f0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005461f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005461f3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005461f4:;
  /* 005461f4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005461f6 jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
  /* 005461fc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00546200:;
  /* 00546200 mov eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M32(m_)); }
  /* 00546203 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00546206 imul eax, esi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546209 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054620b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054620e mov edx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edx = (u32)(M32(m_)); }
  /* 00546211 imul edx, esi */ { s64 p_ = (s64)(s32)edx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546214 mov esi, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); esi = (u32)(M32(m_)); }
  /* 00546217 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 0054621a add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054621c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00546220:;
  /* 00546220 movzx esi, byte ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M8(m_)); }
  /* 00546223 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00546225 or ebx, 0xffffff00 */ { u32 a_ = ebx, b_ = 0xffffff00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054622b shl ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0054622e or ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00546230 shl ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00546233 or ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00546235 mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 00546237 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00546238 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054623b dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054623c jne 0x546220 */ if (!ZF_) goto L_00546220;
  /* 0054623e mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00546241 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00546244 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00546245 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546247 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0054624a jl 0x546200 */ if (LT_) goto L_00546200;
  /* 0054624c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054624d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054624e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054624f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546251 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546252 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546253:;
  /* 00546253 cmp eax, 0x300 */ { u32 a_ = eax, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546258 jg 0x5463fd */ if (!(ZF_|LT_)) goto L_005463fd;
  /* 0054625e je 0x546371 */ if (ZF_) goto L_00546371;
  /* 00546264 cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546269 je 0x5462ef */ if (ZF_) goto L_005462ef;
  /* 0054626f cmp eax, 0x200 */ { u32 a_ = eax, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546274 jne 0x5465ea */ if (!ZF_) goto L_005465ea;
  /* 0054627a mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054627d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054627f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546281 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00546284 jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
  /* 0054628a jmp 0x546290 */ goto L_00546290;
L_0054628c:;
  /* 0054628c mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0054628f nop */ ;
L_00546290:;
  /* 00546290 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 00546293 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00546296 imul esi, edx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546299 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054629b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054629e mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005462a1 imul eax, edx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005462a4 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005462a7 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 005462aa add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005462ac lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005462b0:;
  /* 005462b0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005462b2 mov dx, word ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005462b5 mov bl, dh */ { ebx = (ebx & 0xffffff00u) | ((u32)(((edx >> 8) & 0xffu)) & 0xffu); }
  /* 005462b7 and bl, 0xf8 */ { u32 a_ = (ebx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005462ba mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005462bc mov byte ptr [eax + 3], 0xff */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)(0xffu); }
  /* 005462c0 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005462c3 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005462c6 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005462c8 shr ebx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005462cb and bl, 0xfc */ { u32 a_ = (ebx & 0xffu), b_ = 0xfcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005462ce shl dl, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (edx & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005462d1 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005462d2 mov byte ptr [eax - 3], bl */ { const u32 m_ = (u32)(eax + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005462d5 mov byte ptr [eax - 2], dl */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005462d8 jne 0x5462b0 */ if (!ZF_) goto L_005462b0;
  /* 005462da mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005462dd mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005462e0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005462e1 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005462e3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005462e6 jl 0x54628c */ if (LT_) goto L_0054628c;
  /* 005462e8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005462e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005462ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005462eb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005462ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005462ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005462ef:;
  /* 005462ef mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005462f2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005462f4 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005462f6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005462f9 jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
L_005462ff:;
  /* 005462ff mov edi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edi = (u32)(M32(m_)); }
  /* 00546302 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00546305 imul edi, eax */ { s64 p_ = (s64)(s32)edi * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546308 add edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054630b mov esi, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); esi = (u32)(M32(m_)); }
  /* 0054630e imul esi, eax */ { s64 p_ = (s64)(s32)esi * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546311 mov eax, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); eax = (u32)(M32(m_)); }
  /* 00546314 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00546317 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00546319 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00546320:;
  /* 00546320 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546322 mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00546325 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00546327 shr ebx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0054632a and bl, 0xf8 */ { u32 a_ = (ebx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054632d mov byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054632f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00546331 shr ebx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00546334 and bl, 0xf8 */ { u32 a_ = (ebx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00546337 mov byte ptr [esi + 1], bl */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054633a mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0054633c and eax, 0x8000 */ { u32 a_ = eax, b_ = 0x8000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546341 shl bl, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (ebx & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00546344 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00546346 sbb al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00546348 mov byte ptr [esi + 2], bl */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054634b add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054634e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00546351 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546356 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00546357 mov byte ptr [esi - 1], al */ { const u32 m_ = (u32)(esi + 0xffffffffu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054635a jne 0x546320 */ if (!ZF_) goto L_00546320;
  /* 0054635c mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054635f mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 00546362 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00546363 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546365 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00546368 jl 0x5462ff */ if (LT_) goto L_005462ff;
  /* 0054636a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054636b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054636c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054636d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054636f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546370 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546371:;
  /* 00546371 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00546374 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00546376 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546378 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0054637b jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
  /* 00546381 jmp 0x546386 */ goto L_00546386;
L_00546383:;
  /* 00546383 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
L_00546386:;
  /* 00546386 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00546389 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 0054638c mov eax, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054638f imul esi, edi */ { s64 p_ = (s64)(s32)esi * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546392 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00546395 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546398 mov edi, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); edi = (u32)(M32(m_)); }
  /* 0054639b add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054639d add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054639f mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
L_005463a2:;
  /* 005463a2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005463a4 mov dx, word ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005463a7 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005463a9 shr ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005463ac and bl, 0xf0 */ { u32 a_ = (ebx & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005463af mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005463b1 mov bl, dl */ { ebx = (ebx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 005463b3 and bl, 0xf0 */ { u32 a_ = (ebx & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005463b6 mov byte ptr [eax + 1], bl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005463b9 mov bl, dl */ { ebx = (ebx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 005463bb shl bl, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (ebx & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005463be mov byte ptr [eax + 2], bl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005463c1 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005463c3 and ebx, 0xf000 */ { u32 a_ = ebx, b_ = 0xf000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005463c9 cmp ebx, 0xf000 */ { u32 a_ = ebx, b_ = 0xf000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005463cf jne 0x5463d7 */ if (!ZF_) goto L_005463d7;
  /* 005463d1 mov byte ptr [eax + 3], 0xff */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)(0xffu); }
  /* 005463d5 jmp 0x5463df */ goto L_005463df;
L_005463d7:;
  /* 005463d7 mov dl, dh */ { edx = (edx & 0xffffff00u) | ((u32)(((edx >> 8) & 0xffu)) & 0xffu); }
  /* 005463d9 and dl, 0xf0 */ { u32 a_ = (edx & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005463dc mov byte ptr [eax + 3], dl */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)((edx & 0xffu)); }
L_005463df:;
  /* 005463df add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005463e2 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005463e5 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005463e6 jne 0x5463a2 */ if (!ZF_) goto L_005463a2;
  /* 005463e8 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005463eb mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005463ee inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005463ef cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005463f1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005463f4 jl 0x546383 */ if (LT_) goto L_00546383;
  /* 005463f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005463f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005463f8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005463f9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005463fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005463fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005463fd:;
  /* 005463fd cmp eax, 0xa00 */ { u32 a_ = eax, b_ = 0xa00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546402 jne 0x5465ea */ if (!ZF_) goto L_005465ea;
  /* 00546408 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054640b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054640d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054640f mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00546412 jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
  /* 00546418 jmp 0x546420 */ goto L_00546420;
L_0054641a:;
  /* 0054641a mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0054641d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00546420:;
  /* 00546420 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 00546423 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00546426 imul esi, edx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546429 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054642b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054642e mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00546431 imul eax, edx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546434 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00546437 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 0054643a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054643c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00546440:;
  /* 00546440 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00546442 mov dx, word ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00546445 mov byte ptr [eax + 3], 0xff */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)(0xffu); }
  /* 00546449 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054644c add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054644f mov ebx, edx */ { ebx = (u32)(edx); }
  /* 00546451 shr ebx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00546454 and bl, 0xf8 */ { u32 a_ = (ebx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00546457 mov byte ptr [eax - 4], bl */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054645a mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0054645c shr ebx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0054645f and bl, 0xf8 */ { u32 a_ = (ebx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00546462 shl dl, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (edx & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00546465 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00546466 mov byte ptr [eax - 3], bl */ { const u32 m_ = (u32)(eax + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00546469 mov byte ptr [eax - 2], dl */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054646c jne 0x546440 */ if (!ZF_) goto L_00546440;
  /* 0054646e mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00546471 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 00546474 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00546475 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546477 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054647a jl 0x54641a */ if (LT_) goto L_0054641a;
  /* 0054647c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054647d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054647e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054647f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546481 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546482 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546483:;
  /* 00546483 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00546485 add eax, dword ptr [0x9bf8f8] */ { const u32 m_ = (u32)(0x9bf8f8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054648b mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054648e cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546491 jne 0x546506 */ if (!ZF_) goto L_00546506;
  /* 00546493 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00546496 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00546498 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054649a mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0054649d jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
  /* 005464a3 jmp 0x5464b0 */ goto L_005464b0;
L_005464a5:;
  /* 005464a5 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005464a8 jmp 0x5464b0 */ goto L_005464b0;
L_005464b0:;
  /* 005464b0 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 005464b3 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005464b6 imul esi, edx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005464b9 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005464bb mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005464be mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005464c1 imul eax, edx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005464c4 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005464c7 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 005464ca add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005464cc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005464d0:;
  /* 005464d0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005464d2 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005464d4 shr ebx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005464d7 mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005464d9 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005464db shr ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005464de mov byte ptr [eax + 1], bl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005464e1 mov byte ptr [eax + 2], dl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005464e4 mov byte ptr [eax + 3], 0xff */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)(0xffu); }
  /* 005464e8 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005464eb add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005464ee dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005464ef jne 0x5464d0 */ if (!ZF_) goto L_005464d0;
  /* 005464f1 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005464f4 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005464f7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005464f8 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005464fa mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005464fd jl 0x5464a5 */ if (LT_) goto L_005464a5;
  /* 005464ff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00546500 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546501 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00546502 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546504 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546505 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546506:;
  /* 00546506 cmp eax, 0x15 */ { u32 a_ = eax, b_ = 0x15u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546509 jne 0x546578 */ if (!ZF_) goto L_00546578;
  /* 0054650b mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054650e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00546510 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546512 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00546515 jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
  /* 0054651b jmp 0x546520 */ goto L_00546520;
L_0054651d:;
  /* 0054651d mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_00546520:;
  /* 00546520 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 00546523 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00546526 imul esi, edx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546529 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054652b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054652e mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00546531 imul eax, edx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546534 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00546537 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 0054653a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054653c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00546540:;
  /* 00546540 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00546542 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 00546544 shr ebx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00546547 mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00546549 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0054654b mov byte ptr [eax + 2], dl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054654e shr ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00546551 shr edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00546554 mov byte ptr [eax + 1], bl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00546557 mov byte ptr [eax + 3], dl */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054655a add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054655d add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00546560 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00546561 jne 0x546540 */ if (!ZF_) goto L_00546540;
  /* 00546563 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00546566 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 00546569 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054656a cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054656c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054656f jl 0x54651d */ if (LT_) goto L_0054651d;
  /* 00546571 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00546572 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546573 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00546574 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546576 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546577 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546578:;
  /* 00546578 cmp eax, 0x23 */ { u32 a_ = eax, b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054657b jne 0x5465ea */ if (!ZF_) goto L_005465ea;
  /* 0054657d mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 00546580 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546582 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546584 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00546587 jle 0x5465ea */ if ((ZF_|LT_)) goto L_005465ea;
  /* 00546589 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00546590:;
  /* 00546590 mov edi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edi = (u32)(M32(m_)); }
  /* 00546593 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00546596 imul edi, eax */ { s64 p_ = (s64)(s32)edi * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00546599 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054659b mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054659e mov esi, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); esi = (u32)(M32(m_)); }
  /* 005465a1 imul esi, eax */ { s64 p_ = (s64)(s32)esi * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005465a4 mov eax, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); eax = (u32)(M32(m_)); }
  /* 005465a7 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005465aa add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005465ac lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005465b0:;
  /* 005465b0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005465b2 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005465b4 shr ebx, 0x16 */ { u32 n_ = (22u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005465b7 mov byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005465b9 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005465bb shr ebx, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005465be mov byte ptr [esi + 1], bl */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005465c1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005465c3 shr ebx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 005465c6 mov byte ptr [esi + 2], bl */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005465c9 shr eax, 0x1e */ { u32 n_ = (30u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005465cc mov bl, 0x55 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x55u) & 0xffu); }
  /* 005465ce imul bl */ { s32 p_ = (s32)(s8)eax * (s8)(ebx & 0xffu); eax = (eax & 0xffff0000u) | ((u32)(p_) & 0xffffu); u32 of_ = p_ != (s32)(s8)p_; SETF(OP_RES, of_, 0, (u32)p_ & 0xffu, 1); SETC(OP_RAW, of_, 0, 0, 1); }
  /* 005465d0 mov byte ptr [esi + 3], al */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005465d3 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005465d6 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005465d9 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005465da jne 0x5465b0 */ if (!ZF_) goto L_005465b0;
  /* 005465dc mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005465df mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005465e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005465e3 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005465e5 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005465e8 jl 0x546590 */ if (LT_) goto L_00546590;
L_005465ea:;
  /* 005465ea pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005465eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005465ec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005465ed:;
  /* 005465ed mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005465ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005465f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546630(CPU *c) {
  NATIVE_HOOK(0x546630u) REGS; LOADALL;
L_00546630:;
  /* 00546630 cmp dword ptr [ebx + 0xc], 0x20 */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546634 jne 0x546648 */ if (!ZF_) goto L_00546648;
  /* 00546636 mov eax, dword ptr [0x9bf8f8] */ { const u32 m_ = (u32)(0x9bf8f8u); eax = (u32)(M32(m_)); }
  /* 0054663b test byte ptr [eax + edi + 0xa], 0xf0 */ { const u32 m_ = (u32)(eax + edi + 0xau); u32 a_ = M8(m_), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00546640 jne 0x546648 */ if (!ZF_) goto L_00546648;
  /* 00546642 test byte ptr [edi + 0x23], 0x60 */ { const u32 m_ = (u32)(edi + 0x23u); u32 a_ = M8(m_), b_ = 0x60u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00546646 je 0x54664b */ if (ZF_) goto L_0054664b;
L_00546648:;
  /* 00546648 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054664a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054664b:;
  /* 0054664b test byte ptr [edi + 0x22], 2 */ { const u32 m_ = (u32)(edi + 0x22u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054664f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546650 jne 0x54666f */ if (!ZF_) goto L_0054666f;
  /* 00546652 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00546654 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546656 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546657 call 0x5ab2d0 */ esp -= 4; M32(esp) = 0x54665cu; SAVEALL; F_005ab2d0(c); ABI_CHECK(0x5ab2d0u, 0x546657u); RETCHK(0x54665cu, 0x546657u); LOADALL;
  /* 0054665c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054665f mov esi, eax */ { esi = (u32)(eax); }
  /* 00546661 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00546663 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 00546665 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00546667 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546669 jne 0x546674 */ if (!ZF_) goto L_00546674;
  /* 0054666b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054666d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054666e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054666f:;
  /* 0054666f mov esi, 1 */ { esi = (u32)(0x1u); }
L_00546674:;
  /* 00546674 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546675 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00546677 call 0x546160 */ esp -= 4; M32(esp) = 0x54667cu; SAVEALL; F_00546160(c); ABI_CHECK(0x546160u, 0x546677u); RETCHK(0x54667cu, 0x546677u); LOADALL;
  /* 0054667c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054667f cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546682 jne 0x54668d */ if (!ZF_) goto L_0054668d;
  /* 00546684 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546685 call 0x5aaf30 */ esp -= 4; M32(esp) = 0x54668au; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x546685u); RETCHK(0x54668au, 0x546685u); LOADALL;
  /* 0054668a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054668d:;
  /* 0054668d mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00546692 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546693 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005466a0(CPU *c) {
  NATIVE_HOOK(0x5466a0u) REGS; LOADALL;
L_005466a0:;
  /* 005466a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005466a1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005466a3 call 0x546630 */ esp -= 4; M32(esp) = 0x5466a8u; SAVEALL; F_00546630(c); ABI_CHECK(0x546630u, 0x5466a3u); RETCHK(0x5466a8u, 0x5466a3u); LOADALL;
  /* 005466a8 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005466aa sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005466ac and eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005466ae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005466af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005466b0(CPU *c) {
  NATIVE_HOOK(0x5466b0u) REGS; LOADALL;
L_005466b0:;
  /* 005466b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005466b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005466b3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005466b6 fld dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); FPUSH((double)MF32(m_)); }
  /* 005466b9 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005466bb fchs */ ST(0) = -ST(0);
  /* 005466bd lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005466c0 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005466c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005466c4 fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005466c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005466c8 fchs */ ST(0) = -ST(0);
  /* 005466ca fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005466cd fld dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 005466d0 fchs */ ST(0) = -ST(0);
  /* 005466d2 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005466d5 call 0x5ac1f0 */ esp -= 4; M32(esp) = 0x5466dau; SAVEALL; F_005ac1f0(c); ABI_CHECK(0x5ac1f0u, 0x5466d5u); RETCHK(0x5466dau, 0x5466d5u); LOADALL;
  /* 005466da mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005466dd mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005466e0 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005466e2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005466e3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005466e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005466e5 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x5466eau; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x5466e5u); RETCHK(0x5466eau, 0x5466e5u); LOADALL;
  /* 005466ea fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 005466ed fchs */ ST(0) = -ST(0);
  /* 005466ef push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005466f1 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005466f4 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005466f7 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005466fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005466fb fchs */ ST(0) = -ST(0);
  /* 005466fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005466fe fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546701 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00546704 fchs */ ST(0) = -ST(0);
  /* 00546706 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546709 call 0x5ac1f0 */ esp -= 4; M32(esp) = 0x54670eu; SAVEALL; F_005ac1f0(c); ABI_CHECK(0x5ac1f0u, 0x546709u); RETCHK(0x54670eu, 0x546709u); LOADALL;
  /* 0054670e add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546711 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546713 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546714 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546720(CPU *c) {
  NATIVE_HOOK(0x546720u) REGS; LOADALL;
L_00546720:;
  /* 00546720 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546721 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546723 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00546729 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054672b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054672c lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0054672f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546730 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546731 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 00546738 mov dword ptr [ebp - 8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054673f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00546746 call 0x5aefe0 */ esp -= 4; M32(esp) = 0x54674bu; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x546746u); RETCHK(0x54674bu, 0x546746u); LOADALL;
  /* 0054674b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054674e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546750 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546751 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546760(CPU *c) {
  NATIVE_HOOK(0x546760u) REGS; LOADALL;
L_00546760:;
  /* 00546760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546763 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546766 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00546769 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054676b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054676c lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0054676f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546770 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546771 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 00546778 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0054677f mov dword ptr [ebp - 4], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3f800000u); }
  /* 00546786 call 0x5aefe0 */ esp -= 4; M32(esp) = 0x54678bu; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x546786u); RETCHK(0x54678bu, 0x546786u); LOADALL;
  /* 0054678b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054678e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546790 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546791 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005467a0(CPU *c) {
  NATIVE_HOOK(0x5467a0u) REGS; LOADALL;
L_005467a0:;
  /* 005467a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005467a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005467a3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005467a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005467a9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005467ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005467ac lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005467af push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005467b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005467b1 mov dword ptr [ebp - 0xc], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x3f800000u); }
  /* 005467b8 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 005467bf mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005467c6 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x5467cbu; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x5467c6u); RETCHK(0x5467cbu, 0x5467c6u); LOADALL;
  /* 005467cb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005467ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005467d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005467d1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005467e0(CPU *c) {
  NATIVE_HOOK(0x5467e0u) REGS; LOADALL;
L_005467e0:;
  /* 005467e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005467e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005467e3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005467e6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005467e9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005467eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005467ec lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005467ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005467f0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005467f1 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 005467f8 mov dword ptr [ebp - 8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f800000u); }
  /* 005467ff mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00546806 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x54680bu; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x546806u); RETCHK(0x54680bu, 0x546806u); LOADALL;
  /* 0054680b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054680e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546810 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546811 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546820(CPU *c) {
  NATIVE_HOOK(0x546820u) REGS; LOADALL;
L_00546820:;
  /* 00546820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546823 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546826 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00546829 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054682b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054682c lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0054682f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546830 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546831 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 00546838 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0054683f mov dword ptr [ebp - 4], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3f800000u); }
  /* 00546846 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x54684bu; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x546846u); RETCHK(0x54684bu, 0x546846u); LOADALL;
  /* 0054684b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054684e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546850 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546851 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546860(CPU *c) {
  NATIVE_HOOK(0x546860u) REGS; LOADALL;
L_00546860:;
  /* 00546860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546863 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546866 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546869 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0054686b fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054686e fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00546870 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00546872 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 00546874 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00546876 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546878 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0054687a fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0054687c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054687e fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00546884 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546886 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00546888 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054688a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054688d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054688f jne 0x5469e3 */ if (!ZF_) goto L_005469e3;
  /* 00546895 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546896 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546897 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546898 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546899 lea ebx, [esi + 0x10] */ ebx = (u32)((u32)(esi + 0x10u));
  /* 0054689c lea edi, [esi + 0x20] */ edi = (u32)((u32)(esi + 0x20u));
  /* 0054689f call 0x5aa860 */ esp -= 4; M32(esp) = 0x5468a4u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54689fu); RETCHK(0x5468a4u, 0x54689fu); LOADALL;
  /* 005468a4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005468a6 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005468a9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005468ac fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468af fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005468b2 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468b5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005468b7 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005468ba fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005468bd fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468bf fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005468c2 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468c4 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005468c6 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005468c9 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 005468cb fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468ce fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005468d1 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468d3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005468d5 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005468d8 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005468db fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468de fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 005468e1 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468e4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005468e6 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 005468e9 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005468ec faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005468ee fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005468f4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005468f6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005468f9 jne 0x54693c */ if (!ZF_) goto L_0054693c;
  /* 005468fb lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005468fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005468ff push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546900 call 0x5aa860 */ esp -= 4; M32(esp) = 0x546905u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546900u); RETCHK(0x546905u, 0x546900u); LOADALL;
  /* 00546905 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546907 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054690a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054690b fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054690e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054690f fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546912 fmul dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546915 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546917 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546919 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054691c fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054691e fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546921 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546923 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546925 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546928 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0054692b fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054692d fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 0054692f fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546932 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546934 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546937 jmp 0x5469ca */ goto L_005469ca;
L_0054693c:;
  /* 0054693c fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054693f fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546942 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546945 fmul dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546948 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0054694a fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054694d fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546950 fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546952 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546955 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546957 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546959 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054695c fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0054695f fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546961 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 00546963 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546966 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546968 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054696b fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0054696e fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546971 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00546974 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546977 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546979 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0054697c fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054697f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546981 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00546987 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00546989 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054698c jne 0x5469d4 */ if (!ZF_) goto L_005469d4;
  /* 0054698e lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00546991 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546992 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546993 call 0x5aa860 */ esp -= 4; M32(esp) = 0x546998u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546993u); RETCHK(0x546998u, 0x546993u); LOADALL;
  /* 00546998 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054699a fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054699d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054699e fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005469a1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005469a2 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005469a5 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005469a8 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005469aa fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005469ac fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005469af fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005469b1 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005469b4 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005469b6 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005469b8 fstp dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005469bb fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 005469bd fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005469c0 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005469c3 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005469c5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 005469c7 fstp dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_005469ca:;
  /* 005469ca call 0x5aa860 */ esp -= 4; M32(esp) = 0x5469cfu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x5469cau); RETCHK(0x5469cfu, 0x5469cau); LOADALL;
  /* 005469cf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005469d1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005469d4:;
  /* 005469d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005469d5 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x5469dau; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x5469d5u); RETCHK(0x5469dau, 0x5469d5u); LOADALL;
  /* 005469da add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005469dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005469de pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005469df mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005469e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005469e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005469e3:;
  /* 005469e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005469e5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005469e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005469e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005469f0(CPU *c) {
  NATIVE_HOOK(0x5469f0u) REGS; LOADALL;
L_005469f0:;
  /* 005469f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005469f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005469f3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005469f6 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005469f9 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005469fb fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005469fe fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00546a00 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00546a02 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 00546a04 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00546a06 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546a08 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00546a0a fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00546a0c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546a0e fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00546a14 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546a16 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00546a18 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546a1a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00546a1d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546a1f jne 0x546b73 */ if (!ZF_) goto L_00546b73;
  /* 00546a25 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546a26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546a27 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546a28 lea esi, [edi + 0x10] */ esi = (u32)((u32)(edi + 0x10u));
  /* 00546a2b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546a2c lea ebx, [edi + 0x20] */ ebx = (u32)((u32)(edi + 0x20u));
  /* 00546a2f call 0x5aa860 */ esp -= 4; M32(esp) = 0x546a34u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546a2fu); RETCHK(0x546a34u, 0x546a2fu); LOADALL;
  /* 00546a34 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546a36 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546a39 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546a3c fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a3f fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546a42 fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a45 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546a47 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546a4a fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00546a4c fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a4f fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546a52 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a54 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546a56 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546a59 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546a5c fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a5e fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546a61 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a63 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546a65 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546a68 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00546a6b fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a6e fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00546a71 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a74 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546a76 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00546a79 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a7c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546a7e fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00546a84 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00546a86 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00546a89 jne 0x546acc */ if (!ZF_) goto L_00546acc;
  /* 00546a8b lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00546a8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546a8f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546a90 call 0x5aa860 */ esp -= 4; M32(esp) = 0x546a95u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546a90u); RETCHK(0x546a95u, 0x546a90u); LOADALL;
  /* 00546a95 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546a97 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546a9a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546a9b fmul dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546a9e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546a9f fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546aa2 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546aa5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546aa7 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546aa9 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 00546aab fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546aae fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546ab1 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546ab3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546ab5 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546ab8 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546abb fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546abd fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546ac0 fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546ac2 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546ac4 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546ac7 jmp 0x546b5a */ goto L_00546b5a;
L_00546acc:;
  /* 00546acc fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546acf fmul dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546ad2 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546ad5 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546ad8 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546ada fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546add fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 00546adf fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546ae2 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546ae5 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546ae7 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546ae9 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546aec fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546aef fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546af1 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546af4 fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546af6 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546af8 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546afb fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00546afe fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b01 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00546b04 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b07 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546b09 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00546b0c fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b0f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546b11 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00546b17 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00546b19 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00546b1c jne 0x546b64 */ if (!ZF_) goto L_00546b64;
  /* 00546b1e lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00546b21 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546b22 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546b23 call 0x5aa860 */ esp -= 4; M32(esp) = 0x546b28u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546b23u); RETCHK(0x546b28u, 0x546b23u); LOADALL;
  /* 00546b28 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546b2a fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546b2d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546b2e fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546b32 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546b35 fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b38 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546b3a fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546b3c fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00546b3e fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b41 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546b44 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b46 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546b48 fstp dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546b4b fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546b4e fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b50 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546b53 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546b55 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546b57 fstp dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_00546b5a:;
  /* 00546b5a call 0x5aa860 */ esp -= 4; M32(esp) = 0x546b5fu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546b5au); RETCHK(0x546b5fu, 0x546b5au); LOADALL;
  /* 00546b5f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546b61 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546b64:;
  /* 00546b64 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546b65 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x546b6au; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x546b65u); RETCHK(0x546b6au, 0x546b65u); LOADALL;
  /* 00546b6a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546b6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546b6e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00546b6f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546b71 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546b72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546b73:;
  /* 00546b73 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546b75 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546b77 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546b78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546b80(CPU *c) {
  NATIVE_HOOK(0x546b80u) REGS; LOADALL;
L_00546b80:;
  /* 00546b80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546b81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546b83 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546b86 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546b89 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00546b8b fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546b8e fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00546b90 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00546b92 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 00546b94 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00546b96 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546b98 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00546b9a fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00546b9c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546b9e fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00546ba4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546ba6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00546ba8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546baa test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00546bad fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546baf jne 0x546d03 */ if (!ZF_) goto L_00546d03;
  /* 00546bb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546bb6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546bb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546bb8 lea esi, [ebx + 0x20] */ esi = (u32)((u32)(ebx + 0x20u));
  /* 00546bbb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546bbc lea edi, [ebx + 0x10] */ edi = (u32)((u32)(ebx + 0x10u));
  /* 00546bbf call 0x5aa860 */ esp -= 4; M32(esp) = 0x546bc4u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546bbfu); RETCHK(0x546bc4u, 0x546bbfu); LOADALL;
  /* 00546bc4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546bc6 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546bc9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546bcc fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546bcf fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546bd2 fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546bd5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546bd7 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546bda fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00546bdc fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546bdf fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546be2 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546be4 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546be6 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546be9 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546bec fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546bee fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546bf1 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546bf3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546bf5 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546bf8 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00546bfb fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546bfe fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00546c01 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c04 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546c06 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00546c09 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c0c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546c0e fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00546c14 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00546c16 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00546c19 jne 0x546c5c */ if (!ZF_) goto L_00546c5c;
  /* 00546c1b lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00546c1e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546c1f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546c20 call 0x5aa860 */ esp -= 4; M32(esp) = 0x546c25u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546c20u); RETCHK(0x546c25u, 0x546c20u); LOADALL;
  /* 00546c25 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546c27 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546c2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546c2b fmul dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c2e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546c2f fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546c32 fmul dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c35 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546c37 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546c39 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546c3c fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c3e fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546c41 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c43 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546c45 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546c48 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00546c4a fmul dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c4d fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546c50 fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c52 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546c54 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546c57 jmp 0x546cea */ goto L_00546cea;
L_00546c5c:;
  /* 00546c5c fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546c5f fmul dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c62 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546c65 fmul dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c68 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546c6a fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546c6d fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546c70 fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c72 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546c75 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c77 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546c79 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546c7c fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00546c7e fmul dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c81 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546c84 fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c86 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546c88 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546c8b fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00546c8e fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c91 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00546c94 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c97 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546c99 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00546c9c fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546c9f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00546ca1 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00546ca7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00546ca9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00546cac jne 0x546cf4 */ if (!ZF_) goto L_00546cf4;
  /* 00546cae lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00546cb1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546cb2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546cb3 call 0x5aa860 */ esp -= 4; M32(esp) = 0x546cb8u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546cb3u); RETCHK(0x546cb8u, 0x546cb3u); LOADALL;
  /* 00546cb8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546cba fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546cbd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546cbe fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546cc1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546cc2 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546cc5 fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546cc8 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546cca fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546ccc fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00546cce fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546cd1 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00546cd4 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546cd6 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546cd8 fstp dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00546cdb fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546cde fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546ce0 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00546ce3 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00546ce5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00546ce7 fstp dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_00546cea:;
  /* 00546cea call 0x5aa860 */ esp -= 4; M32(esp) = 0x546cefu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x546ceau); RETCHK(0x546cefu, 0x546ceau); LOADALL;
  /* 00546cef fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00546cf1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546cf4:;
  /* 00546cf4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546cf5 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x546cfau; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x546cf5u); RETCHK(0x546cfau, 0x546cf5u); LOADALL;
  /* 00546cfa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546cfd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00546cfe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546cff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546d01 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546d02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546d03:;
  /* 00546d03 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546d05 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546d07 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546d08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546d10(CPU *c) {
  NATIVE_HOOK(0x546d10u) REGS; LOADALL;
L_00546d10:;
  /* 00546d10 mov dword ptr [0x7a6dec], 0 */ { const u32 m_ = (u32)(0x7a6decu); M32(m_) = (u32)(0x0u); }
  /* 00546d1a mov dword ptr [0x7a6df4], eax */ { const u32 m_ = (u32)(0x7a6df4u); M32(m_) = (u32)(eax); }
  /* 00546d1f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546d20(CPU *c) {
  NATIVE_HOOK(0x546d20u) REGS; LOADALL;
L_00546d20:;
  /* 00546d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546d23 sub esp, 0x258 */ { u32 a_ = esp, b_ = 0x258u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546d29 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00546d2e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546d2f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00546d32 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546d34 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546d35 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546d36 mov ecx, 0x11 */ { ecx = (u32)(0x11u); }
  /* 00546d3b lea edi, [ebp - 0x258] */ edi = (u32)((u32)(ebp + 0xfffffda8u));
  /* 00546d41 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00546d43 mov dword ptr [ebp - 0x214], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(eax); }
  /* 00546d49 push 0x654fdc */ { u32 v_ = 0x654fdcu; esp -= 4; M32(esp) = v_; }
  /* 00546d4e mov dword ptr [ebp - 0x210], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf0u); M32(m_) = (u32)(eax); }
  /* 00546d54 lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00546d5a mov dword ptr [ebp - 0x20c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); M32(m_) = (u32)(eax); }
  /* 00546d60 push 0x1ff */ { u32 v_ = 0x1ffu; esp -= 4; M32(esp) = v_; }
  /* 00546d65 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546d66 mov dword ptr [ebp - 0x258], 0x44 */ { const u32 m_ = (u32)(ebp + 0xfffffda8u); M32(m_) = (u32)(0x44u); }
  /* 00546d70 mov dword ptr [ebp - 0x208], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(eax); }
  /* 00546d76 call 0x5fe928 */ esp -= 4; M32(esp) = 0x546d7bu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x546d76u); RETCHK(0x546d7bu, 0x546d76u); LOADALL;
  /* 00546d7b lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00546d81 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 00546d83 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546d84 mov byte ptr [ebp - 5], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)(0x0u); }
  /* 00546d88 call 0x5fe9e0 */ esp -= 4; M32(esp) = 0x546d8du; SAVEALL; F_005fe9e0(c); ABI_CHECK(0x5fe9e0u, 0x546d88u); RETCHK(0x546d8du, 0x546d88u); LOADALL;
  /* 00546d8d add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546d90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546d92 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00546d93 je 0x546d99 */ if (ZF_) goto L_00546d99;
  /* 00546d95 mov byte ptr [eax + 1], 0 */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)(0x0u); }
L_00546d99:;
  /* 00546d99 lea eax, [ebp - 0x214] */ eax = (u32)((u32)(ebp + 0xfffffdecu));
  /* 00546d9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546da0 lea ecx, [ebp - 0x258] */ ecx = (u32)((u32)(ebp + 0xfffffda8u));
  /* 00546da6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546da7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546da9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546dab push 0x8000000 */ { u32 v_ = 0x8000000u; esp -= 4; M32(esp) = v_; }
  /* 00546db0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546db2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546db4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546db6 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00546dbc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546dbd push 0x654fd0 */ { u32 v_ = 0x654fd0u; esp -= 4; M32(esp) = v_; }
  /* 00546dc2 call dword ptr [0x62e0e8] */ { const u32 m_ = (u32)(0x62e0e8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x546dc8u; SAVEALL; call_ind(c, t_); RETCHK(0x546dc8u, 0x546dc2u); LOADALL; }
  /* 00546dc8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546dca jne 0x546df1 */ if (!ZF_) goto L_00546df1;
  /* 00546dcc mov eax, dword ptr [0x7a6df4] */ { const u32 m_ = (u32)(0x7a6df4u); eax = (u32)(M32(m_)); }
  /* 00546dd1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546dd3 je 0x546de0 */ if (ZF_) goto L_00546de0;
  /* 00546dd5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546dd7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546dd9 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00546ddb call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x546dddu; SAVEALL; call_ind(c, t_); RETCHK(0x546dddu, 0x546ddbu); LOADALL; }
  /* 00546ddd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546de0:;
  /* 00546de0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00546de5 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00546de8 call 0x61af31 */ esp -= 4; M32(esp) = 0x546dedu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x546de8u); RETCHK(0x546dedu, 0x546de8u); LOADALL;
  /* 00546ded mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546def pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546df0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546df1:;
  /* 00546df1 mov eax, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); eax = (u32)(M32(m_)); }
  /* 00546df7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546df8 push 0x1388 */ { u32 v_ = 0x1388u; esp -= 4; M32(esp) = v_; }
  /* 00546dfd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546dfe call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x546e04u; SAVEALL; call_ind(c, t_); RETCHK(0x546e04u, 0x546dfeu); LOADALL; }
  /* 00546e04 mov ecx, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); ecx = (u32)(M32(m_)); }
  /* 00546e0a mov esi, dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); esi = (u32)(M32(m_)); }
  /* 00546e10 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546e11 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x546e13u; SAVEALL; call_ind(c, t_); RETCHK(0x546e13u, 0x546e11u); LOADALL; }
  /* 00546e13 mov edx, dword ptr [ebp - 0x210] */ { const u32 m_ = (u32)(ebp + 0xfffffdf0u); edx = (u32)(M32(m_)); }
  /* 00546e19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546e1a call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x546e1cu; SAVEALL; call_ind(c, t_); RETCHK(0x546e1cu, 0x546e1au); LOADALL; }
  /* 00546e1c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00546e1f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546e21 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546e22 call 0x61af31 */ esp -= 4; M32(esp) = 0x546e27u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x546e22u); RETCHK(0x546e27u, 0x546e22u); LOADALL;
  /* 00546e27 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546e29 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546e2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546e30(CPU *c) {
  NATIVE_HOOK(0x546e30u) REGS; LOADALL;
L_00546e30:;
  /* 00546e30 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546e32 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00546e40(CPU *c) {
  NATIVE_HOOK(0x546e40u) REGS; LOADALL;
L_00546e40:;
  /* 00546e40 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546e42 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00546e50(CPU *c) {
  NATIVE_HOOK(0x546e50u) REGS; LOADALL;
L_00546e50:;
  /* 00546e50 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546e52 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00546e60(CPU *c) {
  NATIVE_HOOK(0x546e60u) REGS; LOADALL;
L_00546e60:;
  /* 00546e60 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546e62 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00546e70(CPU *c) {
  NATIVE_HOOK(0x546e70u) REGS; LOADALL;
L_00546e70:;
  /* 00546e70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546e71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546e73 cmp dword ptr [ebp + 0x14], 5 */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00546e77 jne 0x546e8c */ if (!ZF_) goto L_00546e8c;
  /* 00546e79 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00546e7c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00546e7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546e80 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546e81 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00546e83 call dword ptr [0x7a6df4] */ { const u32 m_ = (u32)(0x7a6df4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x546e89u; SAVEALL; call_ind(c, t_); RETCHK(0x546e89u, 0x546e83u); LOADALL; }
  /* 00546e89 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546e8c:;
  /* 00546e8c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546e8e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546e8f ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00546ea0(CPU *c) {
  NATIVE_HOOK(0x546ea0u) REGS; LOADALL;
L_00546ea0:;
  /* 00546ea0 push 0x7979d8 */ { u32 v_ = 0x7979d8u; esp -= 4; M32(esp) = v_; }
  /* 00546ea5 call dword ptr [0x62e5cc] */ { const u32 m_ = (u32)(0x62e5ccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x546eabu; SAVEALL; call_ind(c, t_); RETCHK(0x546eabu, 0x546ea5u); LOADALL; }
  /* 00546eab push 0x68a5d0 */ { u32 v_ = 0x68a5d0u; esp -= 4; M32(esp) = v_; }
  /* 00546eb0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546eb2 push 0x797ad8 */ { u32 v_ = 0x797ad8u; esp -= 4; M32(esp) = v_; }
  /* 00546eb7 push 0x7979d8 */ { u32 v_ = 0x7979d8u; esp -= 4; M32(esp) = v_; }
  /* 00546ebc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546ebe call 0x602582 */ esp -= 4; M32(esp) = 0x546ec3u; SAVEALL; F_00602582(c); ABI_CHECK(0x602582u, 0x546ebeu); RETCHK(0x546ec3u, 0x546ebeu); LOADALL;
  /* 00546ec3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546ec5 mov eax, dword ptr [0x7a6df4] */ { const u32 m_ = (u32)(0x7a6df4u); eax = (u32)(M32(m_)); }
  /* 00546eca jne 0x546f18 */ if (!ZF_) goto L_00546f18;
  /* 00546ecc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546ece je 0x546edb */ if (ZF_) goto L_00546edb;
  /* 00546ed0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546ed2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546ed4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00546ed6 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x546ed8u; SAVEALL; call_ind(c, t_); RETCHK(0x546ed8u, 0x546ed6u); LOADALL; }
  /* 00546ed8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546edb:;
  /* 00546edb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00546edc mov edx, 0x797ad8 */ { edx = (u32)(0x797ad8u); }
  /* 00546ee1 call 0x546d20 */ esp -= 4; M32(esp) = 0x546ee6u; SAVEALL; F_00546d20(c); ABI_CHECK(0x546d20u, 0x546ee1u); RETCHK(0x546ee6u, 0x546ee1u); LOADALL;
  /* 00546ee6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546ee8 mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 00546eed mov edi, 0x7979d8 */ { edi = (u32)(0x7979d8u); }
  /* 00546ef2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00546ef4 mov eax, dword ptr [0x7a6df4] */ { const u32 m_ = (u32)(0x7a6df4u); eax = (u32)(M32(m_)); }
  /* 00546ef9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546efb mov dword ptr [0x7a6dec], 2 */ { const u32 m_ = (u32)(0x7a6decu); M32(m_) = (u32)(0x2u); }
  /* 00546f05 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00546f06 je 0x546f13 */ if (ZF_) goto L_00546f13;
  /* 00546f08 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546f0a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546f0c push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00546f0e call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x546f10u; SAVEALL; call_ind(c, t_); RETCHK(0x546f10u, 0x546f0eu); LOADALL; }
  /* 00546f10 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546f13:;
  /* 00546f13 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546f15 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00546f18:;
  /* 00546f18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546f1a je 0x546f27 */ if (ZF_) goto L_00546f27;
  /* 00546f1c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546f1e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546f20 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00546f22 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x546f24u; SAVEALL; call_ind(c, t_); RETCHK(0x546f24u, 0x546f22u); LOADALL; }
  /* 00546f24 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546f27:;
  /* 00546f27 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00546f2a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00546f30(CPU *c) {
  NATIVE_HOOK(0x546f30u) REGS; LOADALL;
L_00546f30:;
  /* 00546f30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546f31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546f33 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546f34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546f35 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 00546f3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00546f3b push 0x7979d8 */ { u32 v_ = 0x7979d8u; esp -= 4; M32(esp) = v_; }
  /* 00546f40 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x546f45u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x546f40u); RETCHK(0x546f45u, 0x546f40u); LOADALL;
  /* 00546f45 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00546f48 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 00546f4d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00546f4e push 0x797ad8 */ { u32 v_ = 0x797ad8u; esp -= 4; M32(esp) = v_; }
  /* 00546f53 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x546f58u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x546f53u); RETCHK(0x546f58u, 0x546f53u); LOADALL;
  /* 00546f58 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00546f5b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00546f5c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546f5e push 0x7979d8 */ { u32 v_ = 0x7979d8u; esp -= 4; M32(esp) = v_; }
  /* 00546f63 push 0x546ea0 */ { u32 v_ = 0x546ea0u; esp -= 4; M32(esp) = v_; }
  /* 00546f68 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546f6a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546f6c mov byte ptr [0x797ad7], 0 */ { const u32 m_ = (u32)(0x797ad7u); M8(m_) = (u8)(0x0u); }
  /* 00546f73 mov byte ptr [0x797bd7], 0 */ { const u32 m_ = (u32)(0x797bd7u); M8(m_) = (u8)(0x0u); }
  /* 00546f7a mov dword ptr [0x7a6dec], 1 */ { const u32 m_ = (u32)(0x7a6decu); M32(m_) = (u32)(0x1u); }
  /* 00546f84 call 0x5feb6c */ esp -= 4; M32(esp) = 0x546f89u; SAVEALL; F_005feb6c(c); ABI_CHECK(0x5feb6cu, 0x546f84u); RETCHK(0x546f89u, 0x546f84u); LOADALL;
  /* 00546f89 mov esi, eax */ { esi = (u32)(eax); }
  /* 00546f8b add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00546f8e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546f90 je 0x546fc2 */ if (ZF_) goto L_00546fc2;
  /* 00546f92 push -0xf */ { u32 v_ = 0xfffffff1u; esp -= 4; M32(esp) = v_; }
  /* 00546f94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546f95 call dword ptr [0x62e0f0] */ { const u32 m_ = (u32)(0x62e0f0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x546f9bu; SAVEALL; call_ind(c, t_); RETCHK(0x546f9bu, 0x546f95u); LOADALL; }
  /* 00546f9b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546f9c call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x546fa2u; SAVEALL; call_ind(c, t_); RETCHK(0x546fa2u, 0x546f9cu); LOADALL; }
  /* 00546fa2 mov eax, dword ptr [0x7a6df4] */ { const u32 m_ = (u32)(0x7a6df4u); eax = (u32)(M32(m_)); }
  /* 00546fa7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546fa9 je 0x546fb6 */ if (ZF_) goto L_00546fb6;
  /* 00546fab push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546fad push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546faf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546fb1 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x546fb3u; SAVEALL; call_ind(c, t_); RETCHK(0x546fb3u, 0x546fb1u); LOADALL; }
  /* 00546fb3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546fb6:;
  /* 00546fb6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00546fb9 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00546fbb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00546fbd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546fbe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546fc0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546fc1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00546fc2:;
  /* 00546fc2 mov eax, dword ptr [0x7a6df4] */ { const u32 m_ = (u32)(0x7a6df4u); eax = (u32)(M32(m_)); }
  /* 00546fc7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00546fc9 mov dword ptr [0x7a6dec], 0 */ { const u32 m_ = (u32)(0x7a6decu); M32(m_) = (u32)(0x0u); }
  /* 00546fd3 je 0x546fe0 */ if (ZF_) goto L_00546fe0;
  /* 00546fd5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546fd7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00546fd9 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00546fdb call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x546fddu; SAVEALL; call_ind(c, t_); RETCHK(0x546fddu, 0x546fdbu); LOADALL; }
  /* 00546fdd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00546fe0:;
  /* 00546fe0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00546fe2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00546fe3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00546fe5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00546fe6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00546ff0(CPU *c) {
  NATIVE_HOOK(0x546ff0u) REGS; LOADALL;
L_00546ff0:;
  /* 00546ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00546ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00546ff3 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00546ff6 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00546ff8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00546ffb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00546ffc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00546ffd mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00547000 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00547002 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00547004 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00547005 mov edi, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); edi = (u32)(M32(m_)); }
  /* 00547008 ja 0x54700c */ if (!(CF_|ZF_)) goto L_0054700c;
  /* 0054700a mov eax, ecx */ { eax = (u32)(ecx); }
L_0054700c:;
  /* 0054700c add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054700e mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00547011 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00547013 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00547015 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00547018 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0054701a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054701c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054701f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00547021 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00547024 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00547025 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00547027 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00547028 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054702b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054702c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054702d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547030(CPU *c) {
  NATIVE_HOOK(0x547030u) REGS; LOADALL;
L_00547030:;
  /* 00547030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547033 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00547036 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00547038 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054703b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054703c mov ebx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0054703f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547040 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00547041 mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00547044 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00547046 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00547048 ja 0x54704c */ if (!(CF_|ZF_)) goto L_0054704c;
  /* 0054704a mov eax, ecx */ { eax = (u32)(ecx); }
L_0054704c:;
  /* 0054704c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0054704f add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00547051 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00547053 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00547055 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00547058 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0054705a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054705c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054705f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00547061 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00547064 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00547065 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00547067 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00547068 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054706b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054706c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054706d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547070(CPU *c) {
  NATIVE_HOOK(0x547070u) REGS; LOADALL;
L_00547070:;
  /* 00547070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547073 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00547076 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00547079 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054707a mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054707c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054707e cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00547080 setge dl */ { edx = (edx & 0xffffff00u) | ((u32)((!LT_) ? 1u : 0u) & 0xffu); }
  /* 00547083 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00547084 mov eax, edx */ { eax = (u32)(edx); }
  /* 00547086 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547087 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547090(CPU *c) {
  NATIVE_HOOK(0x547090u) REGS; LOADALL;
L_00547090:;
  /* 00547090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547093 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547096 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00547099 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054709a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054709d je 0x5470c8 */ if (ZF_) goto L_005470c8;
  /* 0054709f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005470a0 je 0x5470bb */ if (ZF_) goto L_005470bb;
  /* 005470a2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005470a3 je 0x5470af */ if (ZF_) goto L_005470af;
  /* 005470a5 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005470a8 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005470ab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005470ad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005470ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005470af:;
  /* 005470af mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005470b1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005470b4 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005470b6 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005470b9 jmp 0x5470ce */ goto L_005470ce;
L_005470bb:;
  /* 005470bb mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005470be mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005470c1 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005470c3 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005470c6 jmp 0x5470ce */ goto L_005470ce;
L_005470c8:;
  /* 005470c8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005470cb mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_005470ce:;
  /* 005470ce mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005470d1 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005470d3 jge 0x5470e9 */ if (!LT_) goto L_005470e9;
  /* 005470d5 mov dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005470dc mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 005470e3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005470e5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005470e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005470e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005470e9:;
  /* 005470e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005470ea mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 005470ec cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005470ee jle 0x5470f3 */ if ((ZF_|LT_)) goto L_005470f3;
  /* 005470f0 mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
L_005470f3:;
  /* 005470f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005470f4 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 005470fb xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005470fd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005470ff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547100 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547110(CPU *c) {
  NATIVE_HOOK(0x547110u) REGS; LOADALL;
L_00547110:;
  /* 00547110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547113 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00547116 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00547119 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054711a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547120(CPU *c) {
  NATIVE_HOOK(0x547120u) REGS; LOADALL;
L_00547120:;
  /* 00547120 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547121 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547123 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00547126 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00547129 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054712a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547130(CPU *c) {
  NATIVE_HOOK(0x547130u) REGS; LOADALL;
L_00547130:;
  /* 00547130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547133 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00547136 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00547139 cmp eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054713c jae 0x54714b */ if (!CF_) goto L_0054714b;
  /* 0054713e mov edx, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); edx = (u32)(M32(m_)); }
  /* 00547141 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 00547144 shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00547147 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00547149 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054714a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054714b:;
  /* 0054714b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054714d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054714e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547150(CPU *c) {
  NATIVE_HOOK(0x547150u) REGS; LOADALL;
L_00547150:;
  /* 00547150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547153 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547154 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00547157 mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 0054715a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054715c je 0x547174 */ if (ZF_) goto L_00547174;
  /* 0054715e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054715f mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547164 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54716au; SAVEALL; call_ind(c, t_); RETCHK(0x54716au, 0x547164u); LOADALL; }
  /* 0054716a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054716d mov dword ptr [esi + 0x60], 0 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x0u); }
L_00547174:;
  /* 00547174 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 00547177 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547179 je 0x547192 */ if (ZF_) goto L_00547192;
  /* 0054717b mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00547181 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547182 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547188u; SAVEALL; call_ind(c, t_); RETCHK(0x547188u, 0x547182u); LOADALL; }
  /* 00547188 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054718b mov dword ptr [esi + 0x64], 0 */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(0x0u); }
L_00547192:;
  /* 00547192 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00547193 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547194 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005471a0(CPU *c) {
  NATIVE_HOOK(0x5471a0u) REGS; LOADALL;
L_005471a0:;
  /* 005471a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005471a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005471a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005471a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005471a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005471a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005471a9 call 0x5759b0 */ esp -= 4; M32(esp) = 0x5471aeu; SAVEALL; F_005759b0(c); ABI_CHECK(0x5759b0u, 0x5471a9u); RETCHK(0x5471aeu, 0x5471a9u); LOADALL;
  /* 005471ae mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005471b0 test byte ptr [0x9b9210], 1 */ { const u32 m_ = (u32)(0x9b9210u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005471b7 jne 0x5471df */ if (!ZF_) goto L_005471df;
  /* 005471b9 mov edx, dword ptr [0x9b9210] */ { const u32 m_ = (u32)(0x9b9210u); edx = (u32)(M32(m_)); }
  /* 005471bf or edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005471c2 mov eax, 0x9b920c */ { eax = (u32)(0x9b920cu); }
  /* 005471c7 mov dword ptr [0x9b9210], edx */ { const u32 m_ = (u32)(0x9b9210u); M32(m_) = (u32)(edx); }
  /* 005471cd call 0x559a50 */ esp -= 4; M32(esp) = 0x5471d2u; SAVEALL; F_00559a50(c); ABI_CHECK(0x559a50u, 0x5471cdu); RETCHK(0x5471d2u, 0x5471cdu); LOADALL;
  /* 005471d2 push 0x62c8a0 */ { u32 v_ = 0x62c8a0u; esp -= 4; M32(esp) = v_; }
  /* 005471d7 call 0x5fe916 */ esp -= 4; M32(esp) = 0x5471dcu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x5471d7u); RETCHK(0x5471dcu, 0x5471d7u); LOADALL;
  /* 005471dc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005471df:;
  /* 005471df test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005471e1 je 0x5472c0 */ if (ZF_) goto L_005472c0;
  /* 005471e7 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005471ea mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005471f0 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 005471f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005471f3 call dword ptr [ecx + 0xe0] */ { const u32 m_ = (u32)(ecx + 0xe0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5471f9u; SAVEALL; call_ind(c, t_); RETCHK(0x5471f9u, 0x5471f3u); LOADALL; }
  /* 005471f9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005471fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005471fe je 0x5472c0 */ if (ZF_) goto L_005472c0;
  /* 00547204 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00547207 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0054720a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054720b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054720c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054720d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054720e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054720f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00547212 call dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547215u; SAVEALL; call_ind(c, t_); RETCHK(0x547215u, 0x547212u); LOADALL; }
  /* 00547215 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547218 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054721b jne 0x5472c0 */ if (!ZF_) goto L_005472c0;
  /* 00547221 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00547224 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00547226 cmp eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00547229 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054722c jbe 0x547262 */ if ((CF_|ZF_)) goto L_00547262;
  /* 0054722e mov eax, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); eax = (u32)(M32(m_)); }
  /* 00547231 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00547237 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547238 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54723eu; SAVEALL; call_ind(c, t_); RETCHK(0x54723eu, 0x547238u); LOADALL; }
  /* 0054723e mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00547241 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547246 push 0x40000 */ { u32 v_ = 0x40000u; esp -= 4; M32(esp) = v_; }
  /* 0054724b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054724c call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547252u; SAVEALL; call_ind(c, t_); RETCHK(0x547252u, 0x54724cu); LOADALL; }
  /* 00547252 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547255 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547257 mov dword ptr [edi + 0x64], eax */ { const u32 m_ = (u32)(edi + 0x64u); M32(m_) = (u32)(eax); }
  /* 0054725a je 0x547262 */ if (ZF_) goto L_00547262;
  /* 0054725c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054725f mov dword ptr [edi + 0x68], ecx */ { const u32 m_ = (u32)(edi + 0x68u); M32(m_) = (u32)(ecx); }
L_00547262:;
  /* 00547262 mov eax, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); eax = (u32)(M32(m_)); }
  /* 00547265 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547267 je 0x5472b9 */ if (ZF_) goto L_005472b9;
  /* 00547269 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0054726c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054726d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054726e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054726f call dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547272u; SAVEALL; call_ind(c, t_); RETCHK(0x547272u, 0x54726fu); LOADALL; }
  /* 00547272 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547273 call dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547276u; SAVEALL; call_ind(c, t_); RETCHK(0x547276u, 0x547273u); LOADALL; }
  /* 00547276 mov eax, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); eax = (u32)(M32(m_)); }
  /* 00547279 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054727c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054727d mov ecx, 0x9b920c */ { ecx = (u32)(0x9b920cu); }
  /* 00547282 call 0x559e30 */ esp -= 4; M32(esp) = 0x547287u; SAVEALL; F_00559e30(c); ABI_CHECK(0x559e30u, 0x547282u); RETCHK(0x547287u, 0x547282u); LOADALL;
  /* 00547287 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547289 jne 0x547299 */ if (!ZF_) goto L_00547299;
  /* 0054728b mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0054728e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054728f mov ecx, 0x9b920c */ { ecx = (u32)(0x9b920cu); }
  /* 00547294 call 0x559d10 */ esp -= 4; M32(esp) = 0x547299u; SAVEALL; F_00559d10(c); ABI_CHECK(0x559d10u, 0x547294u); RETCHK(0x547299u, 0x547294u); LOADALL;
L_00547299:;
  /* 00547299 mov dword ptr [esi + 0x20], 5 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x5u); }
  /* 005472a0 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005472a7 mov edx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); edx = (u32)(M32(m_)); }
  /* 005472aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005472ab mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 005472ae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005472af mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005472b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005472b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005472b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005472b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005472b9:;
  /* 005472b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005472ba call dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5472bdu; SAVEALL; call_ind(c, t_); RETCHK(0x5472bdu, 0x5472bau); LOADALL; }
  /* 005472bd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005472c0:;
  /* 005472c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005472c1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005472c2 mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 005472c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005472c8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005472ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005472cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005472d0(CPU *c) {
  NATIVE_HOOK(0x5472d0u) REGS; LOADALL;
L_005472d0:;
  /* 005472d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005472d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005472d3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005472d6 mov dword ptr [eax + 0x20], 1 */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(0x1u); }
  /* 005472dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005472de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005472e0(CPU *c) {
  NATIVE_HOOK(0x5472e0u) REGS; LOADALL;
L_005472e0:;
  /* 005472e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005472e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005472e3 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005472e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005472e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005472ea push 0x40000 */ { u32 v_ = 0x40000u; esp -= 4; M32(esp) = v_; }
  /* 005472ef push 0x6c */ { u32 v_ = 0x6cu; esp -= 4; M32(esp) = v_; }
  /* 005472f1 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5472f7u; SAVEALL; call_ind(c, t_); RETCHK(0x5472f7u, 0x5472f1u); LOADALL; }
  /* 005472f7 mov esi, eax */ { esi = (u32)(eax); }
  /* 005472f9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005472fc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005472fe je 0x54742d */ if (ZF_) goto L_0054742d;
  /* 00547304 push 0x40000 */ { u32 v_ = 0x40000u; esp -= 4; M32(esp) = v_; }
  /* 00547309 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054730b mov ecx, 0x1b */ { ecx = (u32)(0x1bu); }
  /* 00547310 mov edi, esi */ { edi = (u32)(esi); }
  /* 00547312 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00547314 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054731a push 0x60 */ { u32 v_ = 0x60u; esp -= 4; M32(esp) = v_; }
  /* 0054731c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054731d mov dword ptr [esi + 0x14], 0x547130 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x547130u); }
  /* 00547324 mov dword ptr [esi + 0x18], 0x547150 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x547150u); }
  /* 0054732b mov dword ptr [esi + 0x1c], 0x547120 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x547120u); }
  /* 00547332 mov dword ptr [esi + 0x2c], 0x5472d0 */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(0x5472d0u); }
  /* 00547339 mov dword ptr [esi + 0x28], 0x5471a0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x5471a0u); }
  /* 00547340 mov dword ptr [esi + 0x4c], 0x559270 */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(0x559270u); }
  /* 00547347 mov dword ptr [esi + 0x30], 0x546ff0 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x546ff0u); }
  /* 0054734e mov dword ptr [esi + 0x34], 0x547030 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x547030u); }
  /* 00547355 mov dword ptr [esi + 0x44], 0x547070 */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(0x547070u); }
  /* 0054735c mov dword ptr [esi + 0x38], 0x547090 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x547090u); }
  /* 00547363 mov dword ptr [esi + 0x3c], 0x558f00 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x558f00u); }
  /* 0054736a mov dword ptr [esi + 0x40], 0x559270 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x559270u); }
  /* 00547371 mov dword ptr [esi + 0x48], 0x547110 */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0x547110u); }
  /* 00547378 call dword ptr [ecx + 0x114] */ { const u32 m_ = (u32)(ecx + 0x114u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54737eu; SAVEALL; call_ind(c, t_); RETCHK(0x54737eu, 0x547378u); LOADALL; }
  /* 0054737e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00547381 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00547387 push 0x40000 */ { u32 v_ = 0x40000u; esp -= 4; M32(esp) = v_; }
  /* 0054738c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054738d mov dword ptr [esi + 0x60], eax */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(eax); }
  /* 00547390 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547396u; SAVEALL; call_ind(c, t_); RETCHK(0x547396u, 0x547390u); LOADALL; }
  /* 00547396 mov ecx, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); ecx = (u32)(M32(m_)); }
  /* 00547399 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054739c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054739e mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 005473a1 je 0x5473f0 */ if (ZF_) goto L_005473f0;
  /* 005473a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005473a5 je 0x5473f0 */ if (ZF_) goto L_005473f0;
  /* 005473a7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005473a9 mov dword ptr [esi + 0x68], edi */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(edi); }
  /* 005473ac jle 0x5473c3 */ if ((ZF_|LT_)) goto L_005473c3;
  /* 005473ae lea eax, [ebx + ebx*2] */ eax = (u32)((u32)(ebx + ebx * 2u));
  /* 005473b1 shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005473b4 mov ecx, ebx */ { ecx = (u32)(ebx); }
L_005473b6:;
  /* 005473b6 mov edx, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); edx = (u32)(M32(m_)); }
  /* 005473b9 sub eax, 0x60 */ { u32 a_ = eax, b_ = 0x60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005473bc dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005473bd mov dword ptr [eax + edx + 0x38], esi */ { const u32 m_ = (u32)(eax + edx + 0x38u); M32(m_) = (u32)(esi); }
  /* 005473c1 jne 0x5473b6 */ if (!ZF_) goto L_005473b6;
L_005473c3:;
  /* 005473c3 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005473c6 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005473c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005473ca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005473cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005473cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005473cd call 0x576030 */ esp -= 4; M32(esp) = 0x5473d2u; SAVEALL; F_00576030(c); ABI_CHECK(0x576030u, 0x5473cdu); RETCHK(0x5473d2u, 0x5473cdu); LOADALL;
  /* 005473d2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005473d5 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005473d8 jne 0x5473f0 */ if (!ZF_) goto L_005473f0;
  /* 005473da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005473db call 0x575bf0 */ esp -= 4; M32(esp) = 0x5473e0u; SAVEALL; F_00575bf0(c); ABI_CHECK(0x575bf0u, 0x5473dbu); RETCHK(0x5473e0u, 0x5473dbu); LOADALL;
  /* 005473e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005473e3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005473e5 je 0x5473f0 */ if (ZF_) goto L_005473f0;
  /* 005473e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005473e8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005473ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005473ee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005473ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005473f0:;
  /* 005473f0 mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 005473f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005473f5 je 0x547407 */ if (ZF_) goto L_00547407;
  /* 005473f7 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005473fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005473fe call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547404u; SAVEALL; call_ind(c, t_); RETCHK(0x547404u, 0x5473feu); LOADALL; }
  /* 00547404 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00547407:;
  /* 00547407 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 0054740a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054740c je 0x54741d */ if (ZF_) goto L_0054741d;
  /* 0054740e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054740f mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547414 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54741au; SAVEALL; call_ind(c, t_); RETCHK(0x54741au, 0x547414u); LOADALL; }
  /* 0054741a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054741d:;
  /* 0054741d mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00547423 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547424 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54742au; SAVEALL; call_ind(c, t_); RETCHK(0x54742au, 0x547424u); LOADALL; }
  /* 0054742a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054742d:;
  /* 0054742d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054742e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00547430 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00547431 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547432 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547440(CPU *c) {
  NATIVE_HOOK(0x547440u) REGS; LOADALL;
L_00547440:;
  /* 00547440 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547441 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547443 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547446 mov eax, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); eax = (u32)(M32(m_)); }
  /* 00547449 fild dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0054744c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054744e fild dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 00547451 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547456 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0054745c mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 0054745f fdiv dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00547465 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00547468 mov dword ptr [ebp - 0x6c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ecx); }
  /* 0054746b or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054746e mov dword ptr [ebp - 0x50], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edx); }
  /* 00547471 mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 00547474 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 00547477 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00547479 mov dword ptr [ebp - 0x74], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(0x0u); }
  /* 00547480 mov dword ptr [ebp - 0x70], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x0u); }
  /* 00547487 mov dword ptr [ebp - 0x64], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ecx); }
  /* 0054748a mov dword ptr [ebp - 0x58], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0x0u); }
  /* 00547491 mov dword ptr [ebp - 0x48], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ecx); }
  /* 00547494 mov dword ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x0u); }
  /* 0054749b mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 0054749e mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 005474a1 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 005474a4 fst dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); MF32(m_) = (float)ST(0); }
  /* 005474a7 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005474a9 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005474ac fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005474af mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 005474b2 fst dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); }
  /* 005474b5 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 005474b7 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005474ba fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005474bd fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005474bf fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005474c2 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005474c5 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5474c8u; SAVEALL; call_ind(c, t_); RETCHK(0x5474c8u, 0x5474c5u); LOADALL; }
  /* 005474c8 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005474cd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005474cf push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005474d1 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5474d4u; SAVEALL; call_ind(c, t_); RETCHK(0x5474d4u, 0x5474d1u); LOADALL; }
  /* 005474d4 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005474da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005474dc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005474de call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5474e1u; SAVEALL; call_ind(c, t_); RETCHK(0x5474e1u, 0x5474deu); LOADALL; }
  /* 005474e1 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005474e7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005474e9 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005474eb call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5474eeu; SAVEALL; call_ind(c, t_); RETCHK(0x5474eeu, 0x5474ebu); LOADALL; }
  /* 005474ee mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005474f3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005474f5 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 005474f7 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5474fau; SAVEALL; call_ind(c, t_); RETCHK(0x5474fau, 0x5474f7u); LOADALL; }
  /* 005474fa mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00547500 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00547502 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00547504 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547507u; SAVEALL; call_ind(c, t_); RETCHK(0x547507u, 0x547504u); LOADALL; }
  /* 00547507 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0054750c push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054750e lea edx, [ebp - 0x74] */ edx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 00547511 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00547512 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00547514 call dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547517u; SAVEALL; call_ind(c, t_); RETCHK(0x547517u, 0x547514u); LOADALL; }
  /* 00547517 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054751d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054751f push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00547521 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547524u; SAVEALL; call_ind(c, t_); RETCHK(0x547524u, 0x547521u); LOADALL; }
  /* 00547524 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054752a add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054752d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054752f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00547531 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547534u; SAVEALL; call_ind(c, t_); RETCHK(0x547534u, 0x547531u); LOADALL; }
  /* 00547534 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547539 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054753b push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0054753d call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547540u; SAVEALL; call_ind(c, t_); RETCHK(0x547540u, 0x54753du); LOADALL; }
  /* 00547540 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00547546 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00547548 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0054754a call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54754du; SAVEALL; call_ind(c, t_); RETCHK(0x54754du, 0x54754au); LOADALL; }
  /* 0054754d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547550 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547552 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547553 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547560(CPU *c) {
  NATIVE_HOOK(0x547560u) REGS; LOADALL;
L_00547560:;
  /* 00547560 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547562 je 0x5475aa */ if (ZF_) goto L_005475aa;
  /* 00547564 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00547565 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00547568 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054756a je 0x54757d */ if (ZF_) goto L_0054757d;
  /* 0054756c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054756e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054756f call 0x5b49f0 */ esp -= 4; M32(esp) = 0x547574u; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x54756fu); RETCHK(0x547574u, 0x54756fu); LOADALL;
  /* 00547574 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00547575 call 0x5abaa0 */ esp -= 4; M32(esp) = 0x54757au; SAVEALL; F_005abaa0(c); ABI_CHECK(0x5abaa0u, 0x547575u); RETCHK(0x54757au, 0x547575u); LOADALL;
  /* 0054757a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054757d:;
  /* 0054757d mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 00547580 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547582 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00547583 je 0x547595 */ if (ZF_) goto L_00547595;
  /* 00547585 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547586 mov dword ptr [esi + 0x64], 0 */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(0x0u); }
  /* 0054758d call 0x5ab020 */ esp -= 4; M32(esp) = 0x547592u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x54758du); RETCHK(0x547592u, 0x54758du); LOADALL;
  /* 00547592 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00547595:;
  /* 00547595 mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 00547598 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054759a je 0x5475a3 */ if (ZF_) goto L_005475a3;
  /* 0054759c mov dword ptr [esi + 0x60], 0 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x0u); }
L_005475a3:;
  /* 005475a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005475a4 call 0x5afe70 */ esp -= 4; M32(esp) = 0x5475a9u; SAVEALL; F_005afe70(c); ABI_CHECK(0x5afe70u, 0x5475a4u); RETCHK(0x5475a9u, 0x5475a4u); LOADALL;
  /* 005475a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_005475aa:;
  /* 005475aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005475b0(CPU *c) {
  NATIVE_HOOK(0x5475b0u) REGS; LOADALL;
L_005475b0:;
  /* 005475b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005475b1 call 0x5afeb0 */ esp -= 4; M32(esp) = 0x5475b6u; SAVEALL; F_005afeb0(c); ABI_CHECK(0x5afeb0u, 0x5475b1u); RETCHK(0x5475b6u, 0x5475b1u); LOADALL;
  /* 005475b6 mov esi, eax */ { esi = (u32)(eax); }
  /* 005475b8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005475ba je 0x5475f6 */ if (ZF_) goto L_005475f6;
  /* 005475bc call 0x5ab9b0 */ esp -= 4; M32(esp) = 0x5475c1u; SAVEALL; F_005ab9b0(c); ABI_CHECK(0x5ab9b0u, 0x5475bcu); RETCHK(0x5475c1u, 0x5475bcu); LOADALL;
  /* 005475c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005475c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005475c3 call 0x5b49f0 */ esp -= 4; M32(esp) = 0x5475c8u; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x5475c3u); RETCHK(0x5475c8u, 0x5475c3u); LOADALL;
  /* 005475c8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005475cb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005475ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005475d0 je 0x5475f6 */ if (ZF_) goto L_005475f6;
  /* 005475d2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005475d4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005475d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005475d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005475d8 call 0x5ab230 */ esp -= 4; M32(esp) = 0x5475ddu; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x5475d8u); RETCHK(0x5475ddu, 0x5475d8u); LOADALL;
  /* 005475dd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005475e0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005475e2 je 0x5475f6 */ if (ZF_) goto L_005475f6;
  /* 005475e4 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005475e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005475e7 mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 005475ea call 0x5afd90 */ esp -= 4; M32(esp) = 0x5475efu; SAVEALL; F_005afd90(c); ABI_CHECK(0x5afd90u, 0x5475eau); RETCHK(0x5475efu, 0x5475eau); LOADALL;
  /* 005475ef add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005475f2 mov eax, esi */ { eax = (u32)(esi); }
  /* 005475f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005475f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005475f6:;
  /* 005475f6 call 0x547560 */ esp -= 4; M32(esp) = 0x5475fbu; SAVEALL; F_00547560(c); ABI_CHECK(0x547560u, 0x5475f6u); RETCHK(0x5475fbu, 0x5475f6u); LOADALL;
  /* 005475fb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005475fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005475fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547600(CPU *c) {
  NATIVE_HOOK(0x547600u) REGS; LOADALL;
L_00547600:;
  /* 00547600 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547601 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547603 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547606 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547609 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054760a fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0054760c fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054760f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547610 call 0x5afc90 */ esp -= 4; M32(esp) = 0x547615u; SAVEALL; F_005afc90(c); ABI_CHECK(0x5afc90u, 0x547610u); RETCHK(0x547615u, 0x547610u); LOADALL;
  /* 00547615 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547618 fmul dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054761e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547621 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547624 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547625 call 0x5afbc0 */ esp -= 4; M32(esp) = 0x54762au; SAVEALL; F_005afbc0(c); ABI_CHECK(0x5afbc0u, 0x547625u); RETCHK(0x54762au, 0x547625u); LOADALL;
  /* 0054762a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054762d lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00547630 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00547631 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00547633 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547634 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00547637 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0054763a call 0x5afe00 */ esp -= 4; M32(esp) = 0x54763fu; SAVEALL; F_005afe00(c); ABI_CHECK(0x5afe00u, 0x54763au); RETCHK(0x54763fu, 0x54763au); LOADALL;
  /* 0054763f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547642 mov eax, esi */ { eax = (u32)(esi); }
  /* 00547644 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547646 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547647 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547650(CPU *c) {
  NATIVE_HOOK(0x547650u) REGS; LOADALL;
L_00547650:;
  /* 00547650 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00547653 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547654 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00547657 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00547658 lea edi, [eax + 0x10] */ edi = (u32)((u32)(eax + 0x10u));
  /* 0054765b add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054765e mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00547663 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547664 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00547666 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x54766bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x547666u); RETCHK(0x54766bu, 0x547666u); LOADALL;
  /* 0054766b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054766e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054766f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00547671 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00547672 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547680(CPU *c) {
  NATIVE_HOOK(0x547680u) REGS; LOADALL;
L_00547680:;
  /* 00547680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547683 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547686 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00547689 fld dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); FPUSH((double)MF32(m_)); }
  /* 0054768c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054768e fchs */ ST(0) = -ST(0);
  /* 00547690 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547693 fld dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00547696 fchs */ ST(0) = -ST(0);
  /* 00547698 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054769b fld dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0054769e fchs */ ST(0) = -ST(0);
  /* 005476a0 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 005476a3 fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005476a5 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005476a8 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005476ab fadd dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005476ae fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005476b1 fadd dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005476b4 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005476b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005476b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005476b9 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005476bc fld dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); FPUSH((double)MF32(m_)); }
  /* 005476c2 fmul dword ptr [0x656db8] */ { const u32 m_ = (u32)(0x656db8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005476c8 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005476ca fmul dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005476cd fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005476d0 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005476d3 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005476d5 fmul dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005476d8 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005476db fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005476de fmul dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005476e1 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005476e4 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005476e7 call 0x5ac1f0 */ esp -= 4; M32(esp) = 0x5476ecu; SAVEALL; F_005ac1f0(c); ABI_CHECK(0x5ac1f0u, 0x5476e7u); RETCHK(0x5476ecu, 0x5476e7u); LOADALL;
  /* 005476ec add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005476ef mov eax, esi */ { eax = (u32)(esi); }
  /* 005476f1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005476f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005476f4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547700(CPU *c) {
  NATIVE_HOOK(0x547700u) REGS; LOADALL;
L_00547700:;
  /* 00547700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547703 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547704 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 00547706 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00547709 mov byte ptr [ebp - 3], al */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054770c mov byte ptr [ebp - 2], al */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054770f push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00547711 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00547714 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547715 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547716 mov byte ptr [ebp - 1], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 0054771a call 0x5afd30 */ esp -= 4; M32(esp) = 0x54771fu; SAVEALL; F_005afd30(c); ABI_CHECK(0x5afd30u, 0x54771au); RETCHK(0x54771fu, 0x54771au); LOADALL;
  /* 0054771f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547720 call 0x5afb80 */ esp -= 4; M32(esp) = 0x547725u; SAVEALL; F_005afb80(c); ABI_CHECK(0x5afb80u, 0x547720u); RETCHK(0x547725u, 0x547720u); LOADALL;
  /* 00547725 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547728 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054772a je 0x54774f */ if (ZF_) goto L_0054774f;
  /* 0054772c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054772f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547730 call 0x577d50 */ esp -= 4; M32(esp) = 0x547735u; SAVEALL; F_00577d50(c); ABI_CHECK(0x577d50u, 0x547730u); RETCHK(0x547735u, 0x547730u); LOADALL;
  /* 00547735 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00547738 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054773b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054773d je 0x547746 */ if (ZF_) goto L_00547746;
  /* 0054773f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00547741 call 0x547440 */ esp -= 4; M32(esp) = 0x547746u; SAVEALL; F_00547440(c); ABI_CHECK(0x547440u, 0x547741u); RETCHK(0x547746u, 0x547741u); LOADALL;
L_00547746:;
  /* 00547746 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547747 call 0x5afb70 */ esp -= 4; M32(esp) = 0x54774cu; SAVEALL; F_005afb70(c); ABI_CHECK(0x5afb70u, 0x547747u); RETCHK(0x54774cu, 0x547747u); LOADALL;
  /* 0054774c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054774f:;
  /* 0054774f mov eax, esi */ { eax = (u32)(esi); }
  /* 00547751 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547753 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547754 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547760(CPU *c) {
  NATIVE_HOOK(0x547760u) REGS; LOADALL;
L_00547760:;
  /* 00547760 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00547762 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00547764 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547765 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547766 call 0x5ab230 */ esp -= 4; M32(esp) = 0x54776bu; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x547766u); RETCHK(0x54776bu, 0x547766u); LOADALL;
  /* 0054776b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054776e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547770(CPU *c) {
  NATIVE_HOOK(0x547770u) REGS; LOADALL;
L_00547770:;
  /* 00547770 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547771 call 0x5ab020 */ esp -= 4; M32(esp) = 0x547776u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x547771u); RETCHK(0x547776u, 0x547771u); LOADALL;
  /* 00547776 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00547777 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547780(CPU *c) {
  NATIVE_HOOK(0x547780u) REGS; LOADALL;
L_00547780:;
  /* 00547780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547783 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547786 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00547787 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0054778a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054778b mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0054778e fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547791 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547794 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00547796 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547798 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054779a fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054779d fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005477a0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005477a2 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005477a8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005477aa test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005477ad je 0x54793a */ if (ZF_) goto L_0054793a;
  /* 005477b3 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005477b6 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005477b8 mov dword ptr [ebp - 0x48], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ecx); }
  /* 005477bb mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005477be mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005477c1 mov dword ptr [ebp - 0x44], edx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edx); }
  /* 005477c4 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 005477c7 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 005477ca mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005477cc mov dword ptr [ebp - 0x3c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edx); }
  /* 005477cf mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005477d2 mov edx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); edx = (u32)(M32(m_)); }
  /* 005477d5 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 005477d8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005477db mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 005477de mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005477e0 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 005477e3 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005477e6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005477e9 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005477ec mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 005477ef mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005477f2 fadd dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005477f8 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 005477fb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005477fd fstp dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547800 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
L_00547803:;
  /* 00547803 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 00547805 fcomp dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547808 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054780a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054780d jne 0x547823 */ if (!ZF_) goto L_00547823;
  /* 0054780f fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547812 fcomp dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547818 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054781a test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054781d jnp 0x54793a */ if (!PF_) goto L_0054793a;
L_00547823:;
  /* 00547823 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00547824 add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00547827 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054782a jl 0x547803 */ if (LT_) goto L_00547803;
  /* 0054782c lea ecx, [edi + 0xc] */ ecx = (u32)((u32)(edi + 0xcu));
  /* 0054782f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547830 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00547832 lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00547835 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00547836 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00547839 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054783a call 0x5aabd0 */ esp -= 4; M32(esp) = 0x54783fu; SAVEALL; F_005aabd0(c); ABI_CHECK(0x5aabd0u, 0x54783au); RETCHK(0x54783fu, 0x54783au); LOADALL;
  /* 0054783f fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00547842 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547848 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054784b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054784d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547850 jp 0x547876 */ if (PF_) goto L_00547876;
  /* 00547852 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00547855 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054785b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054785d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547860 jp 0x547876 */ if (PF_) goto L_00547876;
  /* 00547862 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00547865 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054786b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054786d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547870 jnp 0x54793a */ if (!PF_) goto L_0054793a;
L_00547876:;
  /* 00547876 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00547879 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054787f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547881 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547884 jp 0x5478aa */ if (PF_) goto L_005478aa;
  /* 00547886 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00547889 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054788f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547891 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547894 jp 0x5478aa */ if (PF_) goto L_005478aa;
  /* 00547896 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00547899 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054789f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005478a1 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005478a4 jnp 0x54793a */ if (!PF_) goto L_0054793a;
L_005478aa:;
  /* 005478aa fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 005478ad fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005478b3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005478b5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005478b8 jne 0x5478da */ if (!ZF_) goto L_005478da;
  /* 005478ba fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 005478bd fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005478c3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005478c5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005478c8 jne 0x5478da */ if (!ZF_) goto L_005478da;
  /* 005478ca fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 005478cd fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005478d3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005478d5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005478d8 je 0x54793a */ if (ZF_) goto L_0054793a;
L_005478da:;
  /* 005478da fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 005478dd fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005478e3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005478e5 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005478e8 jp 0x54790a */ if (PF_) goto L_0054790a;
  /* 005478ea fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 005478ed fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005478f3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005478f5 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005478f8 jp 0x54790a */ if (PF_) goto L_0054790a;
  /* 005478fa fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005478fd fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547903 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547905 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547908 jnp 0x54793a */ if (!PF_) goto L_0054793a;
L_0054790a:;
  /* 0054790a fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 0054790d fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547913 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547915 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547918 jne 0x547942 */ if (!ZF_) goto L_00547942;
  /* 0054791a fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0054791d fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547923 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547925 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547928 jne 0x547942 */ if (!ZF_) goto L_00547942;
  /* 0054792a fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0054792d fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547933 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547935 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547938 jne 0x547942 */ if (!ZF_) goto L_00547942;
L_0054793a:;
  /* 0054793a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054793b mov eax, esi */ { eax = (u32)(esi); }
  /* 0054793d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054793e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547940 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547941 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00547942:;
  /* 00547942 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00547943 mov ebx, dword ptr [0x7a6dfc] */ { const u32 m_ = (u32)(0x7a6dfcu); ebx = (u32)(M32(m_)); }
  /* 00547949 cmp ebx, 0x5d9 */ { u32 a_ = ebx, b_ = 0x5d9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054794f jbe 0x54797b */ if ((CF_|ZF_)) goto L_0054797b;
  /* 00547951 push 0x19 */ { u32 v_ = 0x19u; esp -= 4; M32(esp) = v_; }
  /* 00547953 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00547955 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00547956 push 0x797bd8 */ { u32 v_ = 0x797bd8u; esp -= 4; M32(esp) = v_; }
  /* 0054795b call 0x5b4a60 */ esp -= 4; M32(esp) = 0x547960u; SAVEALL; F_005b4a60(c); ABI_CHECK(0x5b4a60u, 0x54795bu); RETCHK(0x547960u, 0x54795bu); LOADALL;
  /* 00547960 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547963 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547965 je 0x547976 */ if (ZF_) goto L_00547976;
  /* 00547967 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00547969 call 0x5b4cc0 */ esp -= 4; M32(esp) = 0x54796eu; SAVEALL; F_005b4cc0(c); ABI_CHECK(0x5b4cc0u, 0x547969u); RETCHK(0x54796eu, 0x547969u); LOADALL;
  /* 0054796e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547971 call 0x5b4b30 */ esp -= 4; M32(esp) = 0x547976u; SAVEALL; F_005b4b30(c); ABI_CHECK(0x5b4b30u, 0x547971u); RETCHK(0x547976u, 0x547971u); LOADALL;
L_00547976:;
  /* 00547976 inc dword ptr [edi + 0x54] */ { const u32 m_ = (u32)(edi + 0x54u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00547979 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0054797b:;
  /* 0054797b fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0054797e mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00547981 fadd dword ptr [0x656dac] */ { const u32 m_ = (u32)(0x656dacu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00547987 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 0054798a mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0054798d lea esi, [ebx + ebx*8] */ esi = (u32)((u32)(ebx + ebx * 8u));
  /* 00547990 lea esi, [esi*4 + 0x797bd8] */ esi = (u32)((u32)(esi * 4u + 0x797bd8u));
  /* 00547997 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054799a mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0054799c fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 0054799f mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 005479a2 fadd dword ptr [0x656dac] */ { const u32 m_ = (u32)(0x656dacu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005479a8 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005479ab mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 005479ae mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 005479b1 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005479b4 fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005479b7 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005479ba mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 005479bd mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 005479c0 fadd dword ptr [0x656dac] */ { const u32 m_ = (u32)(0x656dacu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005479c6 mov dword ptr [esi + 0x48], edx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(edx); }
  /* 005479c9 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 005479cc mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 005479cf fstp dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005479d2 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 005479d5 mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005479d8 mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 005479db mov dword ptr [esi + 0x40], edx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(edx); }
  /* 005479de mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 005479e1 mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 005479e4 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005479e7 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005479ea mov dword ptr [esi + 0x44], edx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(edx); }
  /* 005479ed mov dword ptr [esi + 0x68], eax */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(eax); }
  /* 005479f0 mov eax, dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); eax = (u32)(M32(m_)); }
  /* 005479f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005479f5 je 0x547ae3 */ if (ZF_) goto L_00547ae3;
  /* 005479fb fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 005479fe fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547a01 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00547a07 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00547a0d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547a0f test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547a12 jp 0x547a18 */ if (PF_) goto L_00547a18;
  /* 00547a14 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00547a16 jmp 0x547a29 */ goto L_00547a29;
L_00547a18:;
  /* 00547a18 movzx ecx, byte ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ecx = (u32)(M8(m_)); }
  /* 00547a1c mov dword ptr [ebp + 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00547a1f fild dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 00547a22 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00547a24 call 0x61b154 */ esp -= 4; M32(esp) = 0x547a29u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x547a24u); RETCHK(0x547a29u, 0x547a24u); LOADALL;
L_00547a29:;
  /* 00547a29 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 00547a2c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547a2e fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00547a31 mov edx, eax */ { edx = (u32)(eax); }
  /* 00547a33 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547a36 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00547a39 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00547a3b shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00547a3e fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00547a44 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00547a46 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00547a49 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00547a4b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00547a51 mov dword ptr [esi + 0x18], edx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edx); }
  /* 00547a54 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547a56 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547a59 jp 0x547a5f */ if (PF_) goto L_00547a5f;
  /* 00547a5b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00547a5d jmp 0x547a70 */ goto L_00547a70;
L_00547a5f:;
  /* 00547a5f movzx eax, byte ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); eax = (u32)(M8(m_)); }
  /* 00547a63 mov dword ptr [ebp + 0x18], eax */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(eax); }
  /* 00547a66 fild dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 00547a69 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00547a6b call 0x61b154 */ esp -= 4; M32(esp) = 0x547a70u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x547a6bu); RETCHK(0x547a70u, 0x547a6bu); LOADALL;
L_00547a70:;
  /* 00547a70 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 00547a73 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547a75 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00547a78 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00547a7a fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547a7d shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00547a80 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00547a82 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00547a85 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00547a8b or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00547a8d shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00547a90 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00547a92 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00547a98 mov dword ptr [esi + 0x3c], ecx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 00547a9b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547a9d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547aa0 jp 0x547aa6 */ if (PF_) goto L_00547aa6;
  /* 00547aa2 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00547aa4 jmp 0x547ab7 */ goto L_00547ab7;
L_00547aa6:;
  /* 00547aa6 movzx edx, byte ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); edx = (u32)(M8(m_)); }
  /* 00547aaa mov dword ptr [ebp + 0x18], edx */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(edx); }
  /* 00547aad fild dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 00547ab0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00547ab2 call 0x61b154 */ esp -= 4; M32(esp) = 0x547ab7u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x547ab2u); RETCHK(0x547ab7u, 0x547ab2u); LOADALL;
L_00547ab7:;
  /* 00547ab7 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 00547aba fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547abc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00547abe shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00547ac1 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00547ac3 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00547ac6 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00547ac8 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00547acb or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00547acd mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00547ad0 add ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00547ad3 mov dword ptr [0x7a6dfc], ebx */ { const u32 m_ = (u32)(0x7a6dfcu); M32(m_) = (u32)(ebx); }
  /* 00547ad9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00547ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00547adb mov dword ptr [esi + 0x60], ecx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ecx); }
  /* 00547ade pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00547adf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547ae1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547ae2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00547ae3:;
  /* 00547ae3 movzx ecx, byte ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ecx = (u32)(M8(m_)); }
  /* 00547ae7 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00547ae9 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00547aec or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00547aee shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00547af1 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00547af3 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00547af6 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00547af8 add ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00547afb mov dword ptr [0x7a6dfc], ebx */ { const u32 m_ = (u32)(0x7a6dfcu); M32(m_) = (u32)(ebx); }
  /* 00547b01 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00547b02 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 00547b05 mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 00547b08 mov dword ptr [esi + 0x60], eax */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(eax); }
  /* 00547b0b mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00547b0e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00547b0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00547b10 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547b12 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547b13 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547b20(CPU *c) {
  NATIVE_HOOK(0x547b20u) REGS; LOADALL;
L_00547b20:;
  /* 00547b20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547b21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547b23 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547b26 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547b2b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00547b2d push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00547b2f call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547b32u; SAVEALL; call_ind(c, t_); RETCHK(0x547b32u, 0x547b2fu); LOADALL; }
  /* 00547b32 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00547b35 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00547b3b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547b3c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00547b3e call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547b41u; SAVEALL; call_ind(c, t_); RETCHK(0x547b41u, 0x547b3eu); LOADALL; }
  /* 00547b41 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547b46 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00547b48 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00547b4a call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547b4du; SAVEALL; call_ind(c, t_); RETCHK(0x547b4du, 0x547b4au); LOADALL; }
  /* 00547b4d mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00547b53 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00547b55 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00547b57 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547b5au; SAVEALL; call_ind(c, t_); RETCHK(0x547b5au, 0x547b57u); LOADALL; }
  /* 00547b5a mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00547b60 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00547b62 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00547b64 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547b67u; SAVEALL; call_ind(c, t_); RETCHK(0x547b67u, 0x547b64u); LOADALL; }
  /* 00547b67 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547b6c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00547b6e push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00547b70 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547b73u; SAVEALL; call_ind(c, t_); RETCHK(0x547b73u, 0x547b70u); LOADALL; }
  /* 00547b73 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00547b76 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547b7c add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547b7f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547b81 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547b84 jp 0x547b9d */ if (PF_) goto L_00547b9d;
  /* 00547b86 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00547b89 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00547b8f push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00547b91 fchs */ ST(0) = -ST(0);
  /* 00547b93 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00547b95 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547b98 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547b9bu; SAVEALL; call_ind(c, t_); RETCHK(0x547b9bu, 0x547b98u); LOADALL; }
  /* 00547b9b jmp 0x547baa */ goto L_00547baa;
L_00547b9d:;
  /* 00547b9d mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00547ba3 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00547ba5 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00547ba7 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547baau; SAVEALL; call_ind(c, t_); RETCHK(0x547baau, 0x547ba7u); LOADALL; }
L_00547baa:;
  /* 00547baa mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00547bad add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00547bb0 lea ecx, [eax + 0x20] */ ecx = (u32)((u32)(eax + 0x20u));
  /* 00547bb3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00547bb5 mov dword ptr [ebp - 0x74], edx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(edx); }
  /* 00547bb8 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00547bbb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547bbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547bbf mov dword ptr [ebp - 0x70], edx */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(edx); }
  /* 00547bc2 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00547bc5 mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 00547bc8 lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 00547bcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547bcc mov dword ptr [ebp - 0x6c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ecx); }
  /* 00547bcf mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00547bd2 call 0x5af080 */ esp -= 4; M32(esp) = 0x547bd7u; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x547bd2u); RETCHK(0x547bd7u, 0x547bd2u); LOADALL;
  /* 00547bd7 fld dword ptr [0x656db8] */ { const u32 m_ = (u32)(0x656db8u); FPUSH((double)MF32(m_)); }
  /* 00547bdd fdiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00547be0 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00547be2 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00547be5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547be6 lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00547be9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00547bea fst dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); }
  /* 00547bed fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547bf0 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00547bf3 fadd dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00547bf6 fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00547bfc fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547bff call 0x5af2d0 */ esp -= 4; M32(esp) = 0x547c04u; SAVEALL; F_005af2d0(c); ABI_CHECK(0x5af2d0u, 0x547bffu); RETCHK(0x547c04u, 0x547bffu); LOADALL;
  /* 00547c04 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00547c06 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00547c09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547c0a lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00547c0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547c0e mov dword ptr [ebp - 0x18], 0x3f000000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f000000u); }
  /* 00547c15 mov dword ptr [ebp - 0x1c], 0x3f000000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x3f000000u); }
  /* 00547c1c mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 00547c23 call 0x5af460 */ esp -= 4; M32(esp) = 0x547c28u; SAVEALL; F_005af460(c); ABI_CHECK(0x5af460u, 0x547c23u); RETCHK(0x547c28u, 0x547c23u); LOADALL;
  /* 00547c28 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00547c2b mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00547c2e fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547c34 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 00547c37 call 0x61b154 */ esp -= 4; M32(esp) = 0x547c3cu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x547c37u); RETCHK(0x547c3cu, 0x547c37u); LOADALL;
  /* 00547c3c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00547c3f mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00547c42 mov byte ptr [ebp - 0x28], al */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00547c45 lea eax, [ebp - 0x74] */ eax = (u32)((u32)(ebp + 0xffffff8cu));
  /* 00547c48 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547c49 push 0x547780 */ { u32 v_ = 0x547780u; esp -= 4; M32(esp) = v_; }
  /* 00547c4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547c4f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00547c50 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 00547c57 mov dword ptr [0x7a6dfc], 0 */ { const u32 m_ = (u32)(0x7a6dfcu); M32(m_) = (u32)(0x0u); }
  /* 00547c61 call 0x5de420 */ esp -= 4; M32(esp) = 0x547c66u; SAVEALL; F_005de420(c); ABI_CHECK(0x5de420u, 0x547c61u); RETCHK(0x547c66u, 0x547c61u); LOADALL;
  /* 00547c66 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 00547c69 mov ecx, dword ptr [0x7a6dfc] */ { const u32 m_ = (u32)(0x7a6dfcu); ecx = (u32)(M32(m_)); }
  /* 00547c6f imul edx, edx, 0x5dc */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x5dcu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00547c75 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00547c77 mov eax, 0xaaaaaaab */ { eax = (u32)(0xaaaaaaabu); }
  /* 00547c7c mul edx */ { u64 p_ = (u64)eax * edx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00547c7e shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00547c80 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547c83 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547c85 mov dword ptr [0x7a6df8], edx */ { const u32 m_ = (u32)(0x7a6df8u); M32(m_) = (u32)(edx); }
  /* 00547c8b jbe 0x547cbc */ if ((CF_|ZF_)) goto L_00547cbc;
  /* 00547c8d push 0x19 */ { u32 v_ = 0x19u; esp -= 4; M32(esp) = v_; }
  /* 00547c8f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00547c91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547c92 push 0x797bd8 */ { u32 v_ = 0x797bd8u; esp -= 4; M32(esp) = v_; }
  /* 00547c97 call 0x5b4a60 */ esp -= 4; M32(esp) = 0x547c9cu; SAVEALL; F_005b4a60(c); ABI_CHECK(0x5b4a60u, 0x547c97u); RETCHK(0x547c9cu, 0x547c97u); LOADALL;
  /* 00547c9c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547c9f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547ca1 je 0x547cb2 */ if (ZF_) goto L_00547cb2;
  /* 00547ca3 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00547ca5 call 0x5b4cc0 */ esp -= 4; M32(esp) = 0x547caau; SAVEALL; F_005b4cc0(c); ABI_CHECK(0x5b4cc0u, 0x547ca5u); RETCHK(0x547caau, 0x547ca5u); LOADALL;
  /* 00547caa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547cad call 0x5b4b30 */ esp -= 4; M32(esp) = 0x547cb2u; SAVEALL; F_005b4b30(c); ABI_CHECK(0x5b4b30u, 0x547cadu); RETCHK(0x547cb2u, 0x547cadu); LOADALL;
L_00547cb2:;
  /* 00547cb2 mov dword ptr [0x7a6dfc], 0 */ { const u32 m_ = (u32)(0x7a6dfcu); M32(m_) = (u32)(0x0u); }
L_00547cbc:;
  /* 00547cbc mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00547cc1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00547cc3 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00547cc5 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547cc8u; SAVEALL; call_ind(c, t_); RETCHK(0x547cc8u, 0x547cc5u); LOADALL; }
  /* 00547cc8 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00547cce push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00547cd0 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00547cd2 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547cd5u; SAVEALL; call_ind(c, t_); RETCHK(0x547cd5u, 0x547cd2u); LOADALL; }
  /* 00547cd5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00547cdb push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00547cdd push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00547cdf call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x547ce2u; SAVEALL; call_ind(c, t_); RETCHK(0x547ce2u, 0x547cdfu); LOADALL; }
  /* 00547ce2 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547ce5 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00547cea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547cec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547ced ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547cf0(CPU *c) {
  NATIVE_HOOK(0x547cf0u) REGS; LOADALL;
L_00547cf0:;
  /* 00547cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547cf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547cf3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547cf6 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00547cf8 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547cfa fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547cfd fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d00 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547d03 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d06 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 00547d08 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d0a fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547d0d fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547d10 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d13 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547d16 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547d19 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d1c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00547d1e fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00547d20 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00547d23 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00547d25 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547d27 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547d2a fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00547d2d fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547d2f fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00547d31 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00547d33 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547d35 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547d38 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547d3a fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00547d3d fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547d3f fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00547d42 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547d44 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547d46 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547d49 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547d4b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547d4d fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00547d50 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547d53 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00547d56 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547d59 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00547d5b fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00547d5e fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547d61 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00547d63 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547d69 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547d6b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547d6e jp 0x547e72 */ if (PF_) goto L_00547e72;
  /* 00547d74 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 00547d76 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d78 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547d7b fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d7e fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547d81 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d84 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00547d86 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d88 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547d8b fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547d8e fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d91 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547d94 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547d97 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547d9a fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00547d9c fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00547d9e fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00547da1 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00547da3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547da5 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547da8 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00547dab fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547dad fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00547daf fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00547db1 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547db3 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547db6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547db8 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00547dbb fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547dbd fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00547dc0 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547dc2 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547dc4 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547dc7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547dc9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547dcb fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00547dce fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547dd1 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00547dd4 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547dd7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00547dd9 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00547ddc fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547ddf faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00547de1 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547de7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547de9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547dec jp 0x547e72 */ if (PF_) goto L_00547e72;
  /* 00547df2 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00547df4 fsub dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547df6 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547df9 fsub dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547dfc fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547dff fsub dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547e02 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00547e04 fsub dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547e06 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547e09 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547e0c fsub dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547e0f fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547e12 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547e15 fsub dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547e18 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00547e1a fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00547e1c fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00547e1f fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00547e21 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547e23 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547e26 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00547e29 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547e2b fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00547e2d fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00547e2f fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547e31 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547e34 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547e36 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00547e39 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547e3b fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00547e3e fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547e40 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00547e42 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00547e45 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547e47 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547e49 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00547e4c fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547e4f fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00547e52 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547e55 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00547e57 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00547e5a fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00547e5d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00547e5f fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547e65 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547e67 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547e6a jp 0x547e72 */ if (PF_) goto L_00547e72;
  /* 00547e6c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00547e6e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547e70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547e71 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00547e72:;
  /* 00547e72 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00547e75 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00547e78 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547e79 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00547e7a call 0x5aa860 */ esp -= 4; M32(esp) = 0x547e7fu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x547e7au); RETCHK(0x547e7fu, 0x547e7au); LOADALL;
  /* 00547e7f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547e81 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547e84 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00547e86 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547e88 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547e89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547e90(CPU *c) {
  NATIVE_HOOK(0x547e90u) REGS; LOADALL;
L_00547e90:;
  /* 00547e90 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00547e93 fadd dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00547e96 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00547e98 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547e9a fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547e9d fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547ea0 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547ea3 fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547ea6 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00547ea8 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547eaa fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 00547eac fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00547eae faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00547eb0 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00547eb2 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00547eb4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00547eb6 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 00547eb8 fmul st(5) */ ST(0) = FR(ST(0) * ST(5));
  /* 00547eba fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 00547ebc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547ebe fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547ec0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547ec2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547ec4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547ec7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547ec9 jne 0x547ed1 */ if (!ZF_) goto L_00547ed1;
  /* 00547ecb mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00547ed0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00547ed1:;
  /* 00547ed1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00547ed3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547ee0(CPU *c) {
  NATIVE_HOOK(0x547ee0u) REGS; LOADALL;
L_00547ee0:;
  /* 00547ee0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547ee1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547ee3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547ee6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00547ee8 je 0x547efa */ if (ZF_) goto L_00547efa;
  /* 00547eea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547eeb lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00547eee push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00547eef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00547ef0 call 0x5aaba0 */ esp -= 4; M32(esp) = 0x547ef5u; SAVEALL; F_005aaba0(c); ABI_CHECK(0x5aaba0u, 0x547ef0u); RETCHK(0x547ef5u, 0x547ef0u); LOADALL;
  /* 00547ef5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547ef8 jmp 0x547f0d */ goto L_00547f0d;
L_00547efa:;
  /* 00547efa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00547efc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00547efe mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00547f01 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00547f04 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00547f07 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00547f0a mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
L_00547f0d:;
  /* 00547f0d fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 00547f13 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00547f16 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547f19 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 00547f1c fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547f22 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547f24 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547f27 jnp 0x547f3e */ if (!PF_) goto L_00547f3e;
  /* 00547f29 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00547f2c fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547f2e fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 00547f31 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00547f37 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547f39 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547f3c jne 0x547f46 */ if (!ZF_) goto L_00547f46;
L_00547f3e:;
  /* 00547f3e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547f40 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00547f43 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
L_00547f46:;
  /* 00547f46 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00547f49 fsub dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547f4c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00547f52 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547f54 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547f57 jnp 0x547f6e */ if (!PF_) goto L_00547f6e;
  /* 00547f59 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547f5b fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00547f5e fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547f61 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00547f67 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547f69 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547f6c jne 0x547f74 */ if (!ZF_) goto L_00547f74;
L_00547f6e:;
  /* 00547f6e fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00547f70 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00547f72 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
L_00547f74:;
  /* 00547f74 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547f76 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00547f79 fsub dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547f7c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00547f82 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547f84 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547f87 jnp 0x547f9e */ if (!PF_) goto L_00547f9e;
  /* 00547f89 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547f8b fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00547f8e fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547f91 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00547f97 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547f99 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547f9c jne 0x547fa4 */ if (!ZF_) goto L_00547fa4;
L_00547f9e:;
  /* 00547f9e fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00547fa0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00547fa2 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
L_00547fa4:;
  /* 00547fa4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547fa6 fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00547fa9 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00547fab fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00547fad fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00547faf fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 00547fb1 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 00547fb3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00547fb5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00547fb7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00547fba jp 0x547fc5 */ if (PF_) goto L_00547fc5;
  /* 00547fbc mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00547fc1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547fc3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547fc4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00547fc5:;
  /* 00547fc5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00547fc7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00547fc9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00547fca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00547fd0(CPU *c) {
  NATIVE_HOOK(0x547fd0u) REGS; LOADALL;
L_00547fd0:;
  /* 00547fd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00547fd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00547fd3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00547fd6 fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00547fd9 fadd dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00547fdc fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 00547fde fsub dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547fe0 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547fe3 fsub dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547fe6 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00547fe9 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00547fec fsub dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00547fef mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00547ff2 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00547ff5 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00547ff7 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00547ff9 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00547ffb fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 00547ffd fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00547fff faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00548001 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00548004 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00548007 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00548009 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054800c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054800e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00548010 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 00548016 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00548019 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0054801b fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0054801d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054801f test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00548022 jnp 0x5480b5 */ if (!PF_) goto L_005480b5;
  /* 00548028 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054802b fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0054802d fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054802f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00548031 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00548033 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00548036 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00548038 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0054803b fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054803e fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 00548040 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00548042 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 00548044 fmul st(5) */ ST(0) = FR(ST(0) * ST(5));
  /* 00548046 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00548048 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0054804a fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0054804c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054804e fld st(5) */ { double v_ = ST(5); FPUSH(v_); }
  /* 00548050 fmul st(6) */ ST(0) = FR(ST(0) * ST(6));
  /* 00548052 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00548054 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00548057 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 00548059 fstp st(4) */ ST(4) = ST(0); FPOP();
  /* 0054805b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054805d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054805f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00548061 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00548067 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00548069 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054806c jne 0x5480ad */ if (!ZF_) goto L_005480ad;
  /* 0054806e fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
  /* 00548070 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00548076 fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00548079 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0054807c fchs */ ST(0) = -ST(0);
  /* 0054807e fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 00548080 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00548082 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00548088 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054808a test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054808d je 0x5480ab */ if (ZF_) goto L_005480ab;
  /* 0054808f fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00548091 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00548094 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00548096 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054809c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054809e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005480a0 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005480a3 jnp 0x5480af */ if (!PF_) goto L_005480af;
  /* 005480a5 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005480a7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005480a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005480aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005480ab:;
  /* 005480ab fstp st(0) */ ST(0) = ST(0); FPOP();
L_005480ad:;
  /* 005480ad fstp st(0) */ ST(0) = ST(0); FPOP();
L_005480af:;
  /* 005480af xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005480b1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005480b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005480b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005480b5:;
  /* 005480b5 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005480b7 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 005480b9 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 005480bb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005480bd fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005480bf fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005480c1 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005480c3 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 005480c5 fmul st(5) */ ST(0) = FR(ST(0) * ST(5));
  /* 005480c7 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 005480c9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005480cb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005480cd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005480cf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005480d1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005480d4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005480d6 jne 0x5480e1 */ if (!ZF_) goto L_005480e1;
  /* 005480d8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005480dd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005480df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005480e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005480e1:;
  /* 005480e1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005480e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005480e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005480e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005480f0(CPU *c) {
  NATIVE_HOOK(0x5480f0u) REGS; LOADALL;
L_005480f0:;
  /* 005480f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005480f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005480f3 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005480f6 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 005480f8 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005480fa fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005480fd fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00548100 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00548103 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548106 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00548109 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054810c fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054810f fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00548112 fmul dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00548115 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00548118 fmul dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054811b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0054811d fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00548120 fmul dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00548123 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00548125 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548128 fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0054812b fchs */ ST(0) = -ST(0);
  /* 0054812d fcomp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00548130 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00548132 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00548135 je 0x5481ec */ if (ZF_) goto L_005481ec;
  /* 0054813b fld dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0054813e fadd dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00548141 fcomp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00548144 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00548146 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00548149 jnp 0x5481ec */ if (!PF_) goto L_005481ec;
  /* 0054814f fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00548152 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00548155 fmul dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00548158 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548159 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0054815c fmul dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054815f fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00548162 fmul dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00548165 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548168 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0054816b fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0054816d fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548170 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00548173 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 00548175 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548178 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054817a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054817c fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0054817f fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00548182 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548185 call 0x5aa970 */ esp -= 4; M32(esp) = 0x54818au; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x548185u); RETCHK(0x54818au, 0x548185u); LOADALL;
  /* 0054818a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0054818d fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00548193 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548196 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00548198 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054819b jp 0x5481af */ if (PF_) goto L_005481af;
  /* 0054819d fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005481a0 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005481a3 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 005481a6 fadd dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005481a9 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 005481ab fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
  /* 005481ad jmp 0x5481d8 */ goto L_005481d8;
L_005481af:;
  /* 005481af fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 005481b2 fcomp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005481b5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005481b7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005481ba jp 0x5481c4 */ if (PF_) goto L_005481c4;
  /* 005481bc fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005481bf fadd dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005481c2 jmp 0x5481db */ goto L_005481db;
L_005481c4:;
  /* 005481c4 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 005481c7 fsub dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005481ca fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005481cd fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 005481cf fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005481d1 fadd dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005481d4 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 005481d6 fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
L_005481d8:;
  /* 005481d8 fadd dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_005481db:;
  /* 005481db fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005481dd fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 005481df fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005481e1 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005481e4 jp 0x5481ec */ if (PF_) goto L_005481ec;
  /* 005481e6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005481e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005481ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005481eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005481ec:;
  /* 005481ec xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005481ee mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005481f0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005481f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548200(CPU *c) {
  NATIVE_HOOK(0x548200u) REGS; LOADALL;
L_00548200:;
  /* 00548200 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548201 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548203 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548204 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 00548207 mov byte ptr [esi + 0x40], dl */ { const u32 m_ = (u32)(esi + 0x40u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054820a movzx edx, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M8(m_)); }
  /* 0054820e shr eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00548211 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548213 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00548216 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 00548219 mov dword ptr [esi + 0x38], edx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(edx); }
  /* 0054821c fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0054821f mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 00548222 jge 0x54822a */ if (!LT_) goto L_0054822a;
  /* 00548224 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_0054822a:;
  /* 0054822a fst dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); }
  /* 0054822d mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054822f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00548230 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00548233 mov dword ptr [esi + 0x24], 0 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 0054823a mov dword ptr [esi + 0x28], 0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 00548241 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 00548243 fdiv dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00548246 fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548249 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054824b je 0x5482b6 */ if (ZF_) goto L_005482b6;
  /* 0054824d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054824e je 0x548272 */ if (ZF_) goto L_00548272;
  /* 00548250 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00548251 je 0x548260 */ if (ZF_) goto L_00548260;
  /* 00548253 mov dword ptr [esi + 0x2c], 0 */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 0054825a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054825c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054825d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00548260:;
  /* 00548260 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00548263 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00548266 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 00548269 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0054826c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054826e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054826f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00548272:;
  /* 00548272 mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 00548275 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548276 mov edi, dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); edi = (u32)(M32(m_)); }
  /* 00548279 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054827c mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054827f mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00548282 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00548284 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548285 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548286 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00548287 call 0x5ab230 */ esp -= 4; M32(esp) = 0x54828cu; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x548287u); RETCHK(0x54828cu, 0x548287u); LOADALL;
  /* 0054828c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054828f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548291 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 00548294 je 0x5482b5 */ if (ZF_) goto L_005482b5;
  /* 00548296 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548297 call 0x5ab060 */ esp -= 4; M32(esp) = 0x54829cu; SAVEALL; F_005ab060(c); ABI_CHECK(0x5ab060u, 0x548297u); RETCHK(0x54829cu, 0x548297u); LOADALL;
  /* 0054829c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054829f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005482a1 je 0x5482b5 */ if (ZF_) goto L_005482b5;
  /* 005482a3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005482a5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005482a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005482a8 call 0x5aaf50 */ esp -= 4; M32(esp) = 0x5482adu; SAVEALL; F_005aaf50(c); ABI_CHECK(0x5aaf50u, 0x5482a8u); RETCHK(0x5482adu, 0x5482a8u); LOADALL;
  /* 005482ad add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005482b0 call 0x5ab110 */ esp -= 4; M32(esp) = 0x5482b5u; SAVEALL; F_005ab110(c); ABI_CHECK(0x5ab110u, 0x5482b0u); RETCHK(0x5482b5u, 0x5482b0u); LOADALL;
L_005482b5:;
  /* 005482b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005482b6:;
  /* 005482b6 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005482b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005482bb je 0x5482c0 */ if (ZF_) goto L_005482c0;
  /* 005482bd mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
L_005482c0:;
  /* 005482c0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005482c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005482c3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005482d0(CPU *c) {
  NATIVE_HOOK(0x5482d0u) REGS; LOADALL;
L_005482d0:;
  /* 005482d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005482d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005482d3 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005482d6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005482d7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005482d9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005482db je 0x548382 */ if (ZF_) goto L_00548382;
  /* 005482e1 cmp dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005482e4 je 0x548382 */ if (ZF_) goto L_00548382;
  /* 005482ea fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 005482ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005482ee fadd dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005482f4 call 0x61b154 */ esp -= 4; M32(esp) = 0x5482f9u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5482f4u); RETCHK(0x5482f9u, 0x5482f4u); LOADALL;
  /* 005482f9 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005482fc fmul dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005482ff mov edi, eax */ { edi = (u32)(eax); }
  /* 00548301 fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00548304 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0054830a fst dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); }
  /* 0054830d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054830f test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00548312 jp 0x54831b */ if (PF_) goto L_0054831b;
  /* 00548314 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00548316 mov dword ptr [esi + 0x34], ebx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 00548319 jmp 0x54832f */ goto L_0054832f;
L_0054831b:;
  /* 0054831b fcomp dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00548321 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00548323 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00548326 jne 0x54832f */ if (!ZF_) goto L_0054832f;
  /* 00548328 mov dword ptr [esi + 0x34], 0x437f0000 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x437f0000u); }
L_0054832f:;
  /* 0054832f fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 00548332 fadd dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00548338 call 0x61b154 */ esp -= 4; M32(esp) = 0x54833du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x548338u); RETCHK(0x54833du, 0x548338u); LOADALL;
  /* 0054833d mov ecx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 00548340 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548342 jle 0x54834a */ if ((ZF_|LT_)) goto L_0054834a;
  /* 00548344 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548346 jle 0x548350 */ if ((ZF_|LT_)) goto L_00548350;
  /* 00548348 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_0054834a:;
  /* 0054834a jge 0x548373 */ if (!LT_) goto L_00548373;
  /* 0054834c cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054834e jl 0x548373 */ if (LT_) goto L_00548373;
L_00548350:;
  /* 00548350 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00548353 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548355 je 0x548363 */ if (ZF_) goto L_00548363;
  /* 00548357 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548358 call 0x5ab020 */ esp -= 4; M32(esp) = 0x54835du; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x548358u); RETCHK(0x54835du, 0x548358u); LOADALL;
  /* 0054835d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548360 mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
L_00548363:;
  /* 00548363 cmp byte ptr [esi + 0x40], bl */ { const u32 m_ = (u32)(esi + 0x40u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00548366 je 0x54836d */ if (ZF_) goto L_0054836d;
  /* 00548368 mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 0054836b jmp 0x548370 */ goto L_00548370;
L_0054836d:;
  /* 0054836d mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
L_00548370:;
  /* 00548370 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
L_00548373:;
  /* 00548373 mov byte ptr [esi + 0x33], bl */ { const u32 m_ = (u32)(esi + 0x33u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00548376 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 00548379 shl eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054837c or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054837e mov dword ptr [esi + 0x30], ecx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 00548381 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00548382:;
  /* 00548382 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00548383 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548384 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00548390(CPU *c) {
  NATIVE_HOOK(0x548390u) REGS; LOADALL;
L_00548390:;
  /* 00548390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548393 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548396 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00548399 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054839b je 0x54851b */ if (ZF_) goto L_0054851b;
  /* 005483a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005483a2 mov edi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edi = (u32)(M32(m_)); }
  /* 005483a5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005483a7 je 0x54851a */ if (ZF_) goto L_0054851a;
  /* 005483ad fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 005483b3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005483b5 fdiv dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005483bb mov eax, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); eax = (u32)(M32(m_)); }
  /* 005483be mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005483c4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005483c5 fild dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 005483c8 fild dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 005483cb fld dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005483ce fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 005483d1 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005483d4 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005483d6 mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 005483d9 fstp dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005483dc mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 005483df mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 005483e2 mov dword ptr [ebp - 0x50], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ebx); }
  /* 005483e5 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 005483e8 fstp dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005483eb mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 005483ee mov bl, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005483f1 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 005483f3 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005483f5 fstp dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005483f8 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005483fa mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 005483fd fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548400 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00548403 mov dword ptr [ebp - 0x74], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(0x0u); }
  /* 0054840a fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054840d mov dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(0x0u); }
  /* 00548414 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00548416 mov dword ptr [ebp - 0x5c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054841d fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548420 mov dword ptr [ebp - 0x44], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x3f800000u); }
  /* 00548427 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00548429 mov dword ptr [ebp - 0x40], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x3f800000u); }
  /* 00548430 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548433 mov dword ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x0u); }
  /* 0054843a mov dword ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x0u); }
  /* 00548441 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548444 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 0054844b mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00548452 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00548455 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0054845c mov dword ptr [ebp - 0xc], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x3f800000u); }
  /* 00548463 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0054846a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054846c jne 0x54847d */ if (!ZF_) goto L_0054847d;
  /* 0054846e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054846f call 0x5afb80 */ esp -= 4; M32(esp) = 0x548474u; SAVEALL; F_005afb80(c); ABI_CHECK(0x5afb80u, 0x54846fu); RETCHK(0x548474u, 0x54846fu); LOADALL;
  /* 00548474 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054847a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054847d:;
  /* 0054847d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054847f je 0x548509 */ if (ZF_) goto L_00548509;
  /* 00548485 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00548488 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054848b je 0x54849d */ if (ZF_) goto L_0054849d;
  /* 0054848d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054848e je 0x548494 */ if (ZF_) goto L_00548494;
  /* 00548490 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00548492 jmp 0x5484a1 */ goto L_005484a1;
L_00548494:;
  /* 00548494 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 00548497 mov ecx, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); ecx = (u32)(M32(m_)); }
  /* 0054849a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054849b jmp 0x5484a1 */ goto L_005484a1;
L_0054849d:;
  /* 0054849d mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005484a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_005484a1:;
  /* 005484a1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005484a3 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5484a6u; SAVEALL; call_ind(c, t_); RETCHK(0x5484a6u, 0x5484a3u); LOADALL; }
  /* 005484a6 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005484ac add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005484af push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005484b1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005484b3 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5484b6u; SAVEALL; call_ind(c, t_); RETCHK(0x5484b6u, 0x5484b3u); LOADALL; }
  /* 005484b6 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005484bc push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 005484be push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005484c0 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5484c3u; SAVEALL; call_ind(c, t_); RETCHK(0x5484c3u, 0x5484c0u); LOADALL; }
  /* 005484c3 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005484c8 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005484ca push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 005484cc call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5484cfu; SAVEALL; call_ind(c, t_); RETCHK(0x5484cfu, 0x5484ccu); LOADALL; }
  /* 005484cf mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005484d5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005484d7 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005484d9 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5484dcu; SAVEALL; call_ind(c, t_); RETCHK(0x5484dcu, 0x5484d9u); LOADALL; }
  /* 005484dc mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005484e2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005484e4 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005484e6 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5484e9u; SAVEALL; call_ind(c, t_); RETCHK(0x5484e9u, 0x5484e6u); LOADALL; }
  /* 005484e9 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005484ee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005484f0 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005484f2 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5484f5u; SAVEALL; call_ind(c, t_); RETCHK(0x5484f5u, 0x5484f2u); LOADALL; }
  /* 005484f5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005484fb push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005484fd lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 00548500 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548501 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00548503 call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x548506u; SAVEALL; call_ind(c, t_); RETCHK(0x548506u, 0x548503u); LOADALL; }
  /* 00548506 add esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00548509:;
  /* 00548509 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054850b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054850c jne 0x54851a */ if (!ZF_) goto L_0054851a;
  /* 0054850e mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00548511 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548512 call 0x5afb70 */ esp -= 4; M32(esp) = 0x548517u; SAVEALL; F_005afb70(c); ABI_CHECK(0x5afb70u, 0x548512u); RETCHK(0x548517u, 0x548512u); LOADALL;
  /* 00548517 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054851a:;
  /* 0054851a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0054851b:;
  /* 0054851b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054851d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054851e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00548530(CPU *c) {
  NATIVE_HOOK(0x548530u) REGS; LOADALL;
L_00548530:;
  /* 00548530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548533 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548534 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548535 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00548538 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548539 call 0x5eeb90 */ esp -= 4; M32(esp) = 0x54853eu; SAVEALL; F_005eeb90(c); ABI_CHECK(0x5eeb90u, 0x548539u); RETCHK(0x54853eu, 0x548539u); LOADALL;
  /* 0054853e mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00548541 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548544 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548546 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00548548 jne 0x548565 */ if (!ZF_) goto L_00548565;
  /* 0054854a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054854b push 0x548530 */ { u32 v_ = 0x548530u; esp -= 4; M32(esp) = v_; }
  /* 00548550 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548551 call 0x5ac180 */ esp -= 4; M32(esp) = 0x548556u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x548551u); RETCHK(0x548556u, 0x548551u); LOADALL;
  /* 00548556 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00548558 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054855b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054855d jne 0x548565 */ if (!ZF_) goto L_00548565;
  /* 0054855f mov eax, edi */ { eax = (u32)(edi); }
  /* 00548561 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548562 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548563 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548564 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00548565:;
  /* 00548565 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548566 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00548568 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548569 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054856a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548570(CPU *c) {
  NATIVE_HOOK(0x548570u) REGS; LOADALL;
L_00548570:;
  /* 00548570 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548571 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548573 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548574 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00548577 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054857a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054857b call 0x5ea7d0 */ esp -= 4; M32(esp) = 0x548580u; SAVEALL; F_005ea7d0(c); ABI_CHECK(0x5ea7d0u, 0x54857bu); RETCHK(0x548580u, 0x54857bu); LOADALL;
  /* 00548580 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548583 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548585 je 0x548594 */ if (ZF_) goto L_00548594;
  /* 00548587 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054858a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054858b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054858c call 0x5ea7b0 */ esp -= 4; M32(esp) = 0x548591u; SAVEALL; F_005ea7b0(c); ABI_CHECK(0x5ea7b0u, 0x54858cu); RETCHK(0x548591u, 0x54858cu); LOADALL;
  /* 00548591 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00548594:;
  /* 00548594 mov eax, esi */ { eax = (u32)(esi); }
  /* 00548596 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548597 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548598 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005485a0(CPU *c) {
  NATIVE_HOOK(0x5485a0u) REGS; LOADALL;
L_005485a0:;
  /* 005485a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005485a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005485a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005485a4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005485a7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005485a9 jne 0x5485b0 */ if (!ZF_) goto L_005485b0;
  /* 005485ab xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005485ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005485ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005485af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005485b0:;
  /* 005485b0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005485b3 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005485b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005485b7 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 005485b9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005485ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005485bb call 0x5ea7d0 */ esp -= 4; M32(esp) = 0x5485c0u; SAVEALL; F_005ea7d0(c); ABI_CHECK(0x5ea7d0u, 0x5485bbu); RETCHK(0x5485c0u, 0x5485bbu); LOADALL;
  /* 005485c0 mov edi, eax */ { edi = (u32)(eax); }
  /* 005485c2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005485c5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005485c7 jne 0x5485e1 */ if (!ZF_) goto L_005485e1;
  /* 005485c9 test esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005485cf jne 0x548623 */ if (!ZF_) goto L_00548623;
  /* 005485d1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005485d4 or esi, 0x3000 */ { u32 a_ = esi, b_ = 0x3000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005485da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005485db mov dword ptr [ebx], esi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(esi); }
  /* 005485dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005485de pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005485df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005485e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005485e1:;
  /* 005485e1 test esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005485e7 jne 0x548623 */ if (!ZF_) goto L_00548623;
  /* 005485e9 or esi, 0x7000 */ { u32 a_ = esi, b_ = 0x7000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005485ef mov dword ptr [ebx], esi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(esi); }
  /* 005485f1 mov ebx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005485f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005485f5 call 0x5ea830 */ esp -= 4; M32(esp) = 0x5485fau; SAVEALL; F_005ea830(c); ABI_CHECK(0x5ea830u, 0x5485f5u); RETCHK(0x5485fau, 0x5485f5u); LOADALL;
  /* 005485fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005485fb mov esi, eax */ { esi = (u32)(eax); }
  /* 005485fd call 0x5f07e0 */ esp -= 4; M32(esp) = 0x548602u; SAVEALL; F_005f07e0(c); ABI_CHECK(0x5f07e0u, 0x5485fdu); RETCHK(0x548602u, 0x5485fdu); LOADALL;
  /* 00548602 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548605 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548607 jbe 0x548623 */ if ((CF_|ZF_)) goto L_00548623;
  /* 00548609 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054860b jmp 0x548610 */ goto L_00548610;
L_00548610:;
  /* 00548610 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548611 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00548612 call 0x5af080 */ esp -= 4; M32(esp) = 0x548617u; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x548612u); RETCHK(0x548617u, 0x548612u); LOADALL;
  /* 00548617 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054861a add ebx, 0x40 */ { u32 a_ = ebx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0054861d add esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00548620 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00548621 jne 0x548610 */ if (!ZF_) goto L_00548610;
L_00548623:;
  /* 00548623 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00548626 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548627 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548628 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00548629 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054862a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548630(CPU *c) {
  NATIVE_HOOK(0x548630u) REGS; LOADALL;
L_00548630:;
  /* 00548630 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548632 je 0x54865a */ if (ZF_) goto L_0054865a;
  /* 00548634 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548635 call 0x57b140 */ esp -= 4; M32(esp) = 0x54863au; SAVEALL; F_0057b140(c); ABI_CHECK(0x57b140u, 0x548635u); RETCHK(0x54863au, 0x548635u); LOADALL;
  /* 0054863a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054863d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054863f je 0x548650 */ if (ZF_) goto L_00548650;
  /* 00548641 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548642 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548643 call 0x57aef0 */ esp -= 4; M32(esp) = 0x548648u; SAVEALL; F_0057aef0(c); ABI_CHECK(0x57aef0u, 0x548643u); RETCHK(0x548648u, 0x548643u); LOADALL;
  /* 00548648 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054864b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054864d jne 0x548650 */ if (!ZF_) goto L_00548650;
  /* 0054864f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00548650:;
  /* 00548650 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548651 call 0x5784d0 */ esp -= 4; M32(esp) = 0x548656u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x548651u); RETCHK(0x548656u, 0x548651u); LOADALL;
  /* 00548656 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548659 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054865a:;
  /* 0054865a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054865f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548660(CPU *c) {
  NATIVE_HOOK(0x548660u) REGS; LOADALL;
L_00548660:;
  /* 00548660 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548661 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548663 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548664 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00548667 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548668 call 0x5eeb90 */ esp -= 4; M32(esp) = 0x54866du; SAVEALL; F_005eeb90(c); ABI_CHECK(0x5eeb90u, 0x548668u); RETCHK(0x54866du, 0x548668u); LOADALL;
  /* 0054866d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548670 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548672 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00548675 jne 0x54868f */ if (!ZF_) goto L_0054868f;
  /* 00548677 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054867a lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054867d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054867e push 0x548530 */ { u32 v_ = 0x548530u; esp -= 4; M32(esp) = v_; }
  /* 00548683 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00548684 call 0x5ac180 */ esp -= 4; M32(esp) = 0x548689u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x548684u); RETCHK(0x548689u, 0x548684u); LOADALL;
  /* 00548689 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054868c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054868f:;
  /* 0054868f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548691 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548692 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005486a0(CPU *c) {
  NATIVE_HOOK(0x5486a0u) REGS; LOADALL;
L_005486a0:;
  /* 005486a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005486a1 push 0x548570 */ { u32 v_ = 0x548570u; esp -= 4; M32(esp) = v_; }
  /* 005486a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005486a7 call 0x577da0 */ esp -= 4; M32(esp) = 0x5486acu; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x5486a7u); RETCHK(0x5486acu, 0x5486a7u); LOADALL;
  /* 005486ac add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005486af mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005486b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005486c0(CPU *c) {
  NATIVE_HOOK(0x5486c0u) REGS; LOADALL;
L_005486c0:;
  /* 005486c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005486c1 push 0x5485a0 */ { u32 v_ = 0x5485a0u; esp -= 4; M32(esp) = v_; }
  /* 005486c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005486c7 call 0x577da0 */ esp -= 4; M32(esp) = 0x5486ccu; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x5486c7u); RETCHK(0x5486ccu, 0x5486c7u); LOADALL;
  /* 005486cc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005486cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005486d0(CPU *c) {
  NATIVE_HOOK(0x5486d0u) REGS; LOADALL;
L_005486d0:;
  /* 005486d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005486d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005486d3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005486d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005486d7 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005486da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005486db push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005486dd push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005486df mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 005486e6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005486ed call 0x5b34e0 */ esp -= 4; M32(esp) = 0x5486f2u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x5486edu); RETCHK(0x5486f2u, 0x5486edu); LOADALL;
  /* 005486f2 mov esi, eax */ { esi = (u32)(eax); }
  /* 005486f4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005486f7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005486f9 jne 0x548700 */ if (!ZF_) goto L_00548700;
  /* 005486fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005486fc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005486fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005486ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00548700:;
  /* 00548700 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00548703 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548704 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548705 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548706 call 0x578980 */ esp -= 4; M32(esp) = 0x54870bu; SAVEALL; F_00578980(c); ABI_CHECK(0x578980u, 0x548706u); RETCHK(0x54870bu, 0x548706u); LOADALL;
  /* 0054870b lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0054870e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054870f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548710 mov edi, eax */ { edi = (u32)(eax); }
  /* 00548712 call 0x5b3410 */ esp -= 4; M32(esp) = 0x548717u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x548712u); RETCHK(0x548717u, 0x548712u); LOADALL;
  /* 00548717 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054871a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054871c jne 0x548739 */ if (!ZF_) goto L_00548739;
  /* 0054871e mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00548721 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00548727 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548728 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54872eu; SAVEALL; call_ind(c, t_); RETCHK(0x54872eu, 0x548728u); LOADALL; }
  /* 0054872e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548731 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548732 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00548734 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548735 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548737 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548738 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00548739:;
  /* 00548739 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0054873c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054873d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054873f push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00548741 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00548743 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x548748u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x548743u); RETCHK(0x548748u, 0x548743u); LOADALL;
  /* 00548748 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054874a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054874d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054874f je 0x54877a */ if (ZF_) goto L_0054877a;
  /* 00548751 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548752 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548753 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00548755 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548756 call 0x5b3890 */ esp -= 4; M32(esp) = 0x54875bu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x548756u); RETCHK(0x54875bu, 0x548756u); LOADALL;
  /* 0054875b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054875e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548760 je 0x54876d */ if (ZF_) goto L_0054876d;
  /* 00548762 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548763 call 0x579380 */ esp -= 4; M32(esp) = 0x548768u; SAVEALL; F_00579380(c); ABI_CHECK(0x579380u, 0x548763u); RETCHK(0x548768u, 0x548763u); LOADALL;
  /* 00548768 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054876b mov edi, eax */ { edi = (u32)(eax); }
L_0054876d:;
  /* 0054876d lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00548770 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548771 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548772 call 0x5b3410 */ esp -= 4; M32(esp) = 0x548777u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x548772u); RETCHK(0x548777u, 0x548772u); LOADALL;
  /* 00548777 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054877a:;
  /* 0054877a mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0054877d mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00548783 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548784 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54878au; SAVEALL; call_ind(c, t_); RETCHK(0x54878au, 0x548784u); LOADALL; }
  /* 0054878a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054878d mov eax, edi */ { eax = (u32)(edi); }
  /* 0054878f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548790 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548791 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548793 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548794 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005487a0(CPU *c) {
  NATIVE_HOOK(0x5487a0u) REGS; LOADALL;
L_005487a0:;
  /* 005487a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005487a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005487a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005487a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005487a7 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005487aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005487ab push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005487ad push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005487af mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 005487b6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005487bd call 0x5b34e0 */ esp -= 4; M32(esp) = 0x5487c2u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x5487bdu); RETCHK(0x5487c2u, 0x5487bdu); LOADALL;
  /* 005487c2 mov esi, eax */ { esi = (u32)(eax); }
  /* 005487c4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005487c7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005487c9 jne 0x5487d0 */ if (!ZF_) goto L_005487d0;
  /* 005487cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005487cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005487ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005487cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005487d0:;
  /* 005487d0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005487d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005487d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005487d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005487d6 call 0x5787c0 */ esp -= 4; M32(esp) = 0x5487dbu; SAVEALL; F_005787c0(c); ABI_CHECK(0x5787c0u, 0x5487d6u); RETCHK(0x5487dbu, 0x5487d6u); LOADALL;
  /* 005487db lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005487de push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005487df push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005487e0 mov edi, eax */ { edi = (u32)(eax); }
  /* 005487e2 call 0x5b3410 */ esp -= 4; M32(esp) = 0x5487e7u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x5487e2u); RETCHK(0x5487e7u, 0x5487e2u); LOADALL;
  /* 005487e7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005487ea test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005487ec jne 0x548809 */ if (!ZF_) goto L_00548809;
  /* 005487ee mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005487f1 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005487f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005487f8 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5487feu; SAVEALL; call_ind(c, t_); RETCHK(0x5487feu, 0x5487f8u); LOADALL; }
  /* 005487fe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548801 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548802 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00548804 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548805 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548807 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548808 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00548809:;
  /* 00548809 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0054880c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054880d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054880f push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00548811 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00548813 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x548818u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x548813u); RETCHK(0x548818u, 0x548813u); LOADALL;
  /* 00548818 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054881a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054881d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054881f je 0x54884a */ if (ZF_) goto L_0054884a;
  /* 00548821 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548822 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548823 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 00548825 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548826 call 0x5b3890 */ esp -= 4; M32(esp) = 0x54882bu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x548826u); RETCHK(0x54882bu, 0x548826u); LOADALL;
  /* 0054882b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054882e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548830 je 0x54883d */ if (ZF_) goto L_0054883d;
  /* 00548832 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548833 call 0x578f90 */ esp -= 4; M32(esp) = 0x548838u; SAVEALL; F_00578f90(c); ABI_CHECK(0x578f90u, 0x548833u); RETCHK(0x548838u, 0x548833u); LOADALL;
  /* 00548838 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054883b mov edi, eax */ { edi = (u32)(eax); }
L_0054883d:;
  /* 0054883d lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00548840 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548841 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548842 call 0x5b3410 */ esp -= 4; M32(esp) = 0x548847u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x548842u); RETCHK(0x548847u, 0x548842u); LOADALL;
  /* 00548847 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054884a:;
  /* 0054884a mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0054884d mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00548853 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548854 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54885au; SAVEALL; call_ind(c, t_); RETCHK(0x54885au, 0x548854u); LOADALL; }
  /* 0054885a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054885d mov eax, edi */ { eax = (u32)(edi); }
  /* 0054885f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548860 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548861 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548863 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548864 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548870(CPU *c) {
  NATIVE_HOOK(0x548870u) REGS; LOADALL;
L_00548870:;
  /* 00548870 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548871 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548873 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548874 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00548877 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548878 call 0x5d3ae0 */ esp -= 4; M32(esp) = 0x54887du; SAVEALL; F_005d3ae0(c); ABI_CHECK(0x5d3ae0u, 0x548878u); RETCHK(0x54887du, 0x548878u); LOADALL;
  /* 0054887d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548880 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548882 je 0x54890d */ if (ZF_) goto L_0054890d;
  /* 00548888 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548889 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054888a call 0x5d3b00 */ esp -= 4; M32(esp) = 0x54888fu; SAVEALL; F_005d3b00(c); ABI_CHECK(0x5d3b00u, 0x54888au); RETCHK(0x54888fu, 0x54888au); LOADALL;
  /* 0054888f mov esi, eax */ { esi = (u32)(eax); }
  /* 00548891 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548892 call 0x5d4510 */ esp -= 4; M32(esp) = 0x548897u; SAVEALL; F_005d4510(c); ABI_CHECK(0x5d4510u, 0x548892u); RETCHK(0x548897u, 0x548892u); LOADALL;
  /* 00548897 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054889a mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054889d push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054889f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005488a0 call 0x5d3f90 */ esp -= 4; M32(esp) = 0x5488a5u; SAVEALL; F_005d3f90(c); ABI_CHECK(0x5d3f90u, 0x5488a0u); RETCHK(0x5488a5u, 0x5488a0u); LOADALL;
  /* 005488a5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005488a8 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005488aa je 0x548907 */ if (ZF_) goto L_00548907;
  /* 005488ac mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005488af test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005488b1 je 0x548907 */ if (ZF_) goto L_00548907;
  /* 005488b3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005488b5 mov ecx, dword ptr [0x692730] */ { const u32 m_ = (u32)(0x692730u); ecx = (u32)(M32(m_)); }
  /* 005488bb mov edx, dword ptr [edx + ecx] */ { const u32 m_ = (u32)(edx + ecx); edx = (u32)(M32(m_)); }
  /* 005488be mov dword ptr [edx + 0xac], 1 */ { const u32 m_ = (u32)(edx + 0xacu); M32(m_) = (u32)(0x1u); }
  /* 005488c8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005488cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005488cc mov ebx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ebx = (u32)(M32(m_)); }
  /* 005488cf mov ebx, dword ptr [ebx + ecx] */ { const u32 m_ = (u32)(ebx + ecx); ebx = (u32)(M32(m_)); }
  /* 005488d2 mov esi, edx */ { esi = (u32)(edx); }
  /* 005488d4 sar esi, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005488d7 mov dword ptr [ebx + 0xa4], esi */ { const u32 m_ = (u32)(ebx + 0xa4u); M32(m_) = (u32)(esi); }
  /* 005488dd mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 005488e0 mov esi, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); esi = (u32)(M32(m_)); }
  /* 005488e3 and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005488e9 mov dword ptr [esi + 0xa8], edx */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(edx); }
  /* 005488ef mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 005488f2 mov ecx, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); ecx = (u32)(M32(m_)); }
  /* 005488f5 mov eax, dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); eax = (u32)(M32(m_)); }
  /* 005488f8 or eax, 0x10000000 */ { u32 a_ = eax, b_ = 0x10000000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005488fd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005488fe mov dword ptr [ecx + 0x40], eax */ { const u32 m_ = (u32)(ecx + 0x40u); M32(m_) = (u32)(eax); }
  /* 00548901 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548902 mov eax, edi */ { eax = (u32)(edi); }
  /* 00548904 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548905 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548906 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00548907:;
  /* 00548907 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548908 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054890a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054890b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054890c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054890d:;
  /* 0054890d mov eax, edi */ { eax = (u32)(edi); }
  /* 0054890f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548910 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548911 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548920(CPU *c) {
  NATIVE_HOOK(0x548920u) REGS; LOADALL;
L_00548920:;
  /* 00548920 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548921 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548923 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00548929 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054892b push 0x61b363 */ { u32 v_ = 0x61b363u; esp -= 4; M32(esp) = v_; }
  /* 00548930 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548931 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00548938 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00548939 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054893c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054893d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054893e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00548940 call 0x4eabd0 */ esp -= 4; M32(esp) = 0x548945u; SAVEALL; F_004eabd0(c); ABI_CHECK(0x4eabd0u, 0x548940u); RETCHK(0x548945u, 0x548940u); LOADALL;
  /* 00548945 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00548947 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0054894a mov dword ptr [ebx], 0x654fe8 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x654fe8u); }
  /* 00548950 call 0x54c480 */ esp -= 4; M32(esp) = 0x548955u; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x548950u); RETCHK(0x548955u, 0x548950u); LOADALL;
  /* 00548955 mov dword ptr [ebx + 0x70], eax */ { const u32 m_ = (u32)(ebx + 0x70u); M32(m_) = (u32)(eax); }
  /* 00548958 mov dword ptr [ebx + 0x74], edi */ { const u32 m_ = (u32)(ebx + 0x74u); M32(m_) = (u32)(edi); }
  /* 0054895b mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054895f lea esi, [ebx + 0x78] */ esi = (u32)((u32)(ebx + 0x78u));
  /* 00548962 call 0x54c480 */ esp -= 4; M32(esp) = 0x548967u; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x548962u); RETCHK(0x548967u, 0x548962u); LOADALL;
  /* 00548967 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054896a mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0054896d call 0x529410 */ esp -= 4; M32(esp) = 0x548972u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x54896du); RETCHK(0x548972u, 0x54896du); LOADALL;
  /* 00548972 lea esi, [ebx + 0x6c] */ esi = (u32)((u32)(ebx + 0x6cu));
  /* 00548975 call 0x529410 */ esp -= 4; M32(esp) = 0x54897au; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x548975u); RETCHK(0x54897au, 0x548975u); LOADALL;
  /* 0054897a mov dword ptr [ebx + 0x84], edi */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(edi); }
  /* 00548980 mov dword ptr [ebx + 0x88], edi */ { const u32 m_ = (u32)(ebx + 0x88u); M32(m_) = (u32)(edi); }
  /* 00548986 mov dword ptr [ebx + 0x68], edi */ { const u32 m_ = (u32)(ebx + 0x68u); M32(m_) = (u32)(edi); }
  /* 00548989 mov dword ptr [ebx + 0x4c], edi */ { const u32 m_ = (u32)(ebx + 0x4cu); M32(m_) = (u32)(edi); }
  /* 0054898c mov dword ptr [ebx + 0x50], edi */ { const u32 m_ = (u32)(ebx + 0x50u); M32(m_) = (u32)(edi); }
  /* 0054898f mov dword ptr [ebx + 0x54], edi */ { const u32 m_ = (u32)(ebx + 0x54u); M32(m_) = (u32)(edi); }
  /* 00548992 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00548995 mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 00548998 mov dword ptr [ebx + 0x8c], eax */ { const u32 m_ = (u32)(ebx + 0x8cu); M32(m_) = (u32)(eax); }
  /* 0054899e mov dword ptr [ebx + 0x90], eax */ { const u32 m_ = (u32)(ebx + 0x90u); M32(m_) = (u32)(eax); }
  /* 005489a4 mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 005489a9 mov dword ptr [ebx + 0x58], ecx */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(ecx); }
  /* 005489ac mov dword ptr [ebx + 0x64], ecx */ { const u32 m_ = (u32)(ebx + 0x64u); M32(m_) = (u32)(ecx); }
  /* 005489af mov dword ptr [ebx + 0x60], 0x461c4000 */ { const u32 m_ = (u32)(ebx + 0x60u); M32(m_) = (u32)(0x461c4000u); }
  /* 005489b6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005489b8 lea edi, [ebx + 0x98] */ edi = (u32)((u32)(ebx + 0x98u));
  /* 005489be mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 005489c3 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005489c5 lea edi, [ebx + 0xe8] */ edi = (u32)((u32)(ebx + 0xe8u));
  /* 005489cb mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 005489d0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005489d2 lea edi, [ebx + 0x138] */ edi = (u32)((u32)(ebx + 0x138u));
  /* 005489d8 mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 005489dd rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005489df lea edi, [ebx + 0x188] */ edi = (u32)((u32)(ebx + 0x188u));
  /* 005489e5 mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 005489ea rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005489ec mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005489ef pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005489f0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005489f1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005489f3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005489fa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005489fb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005489fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005489fe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00548a10(CPU *c) {
  NATIVE_HOOK(0x548a10u) REGS; LOADALL;
L_00548a10:;
  /* 00548a10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548a11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548a13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548a14 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00548a16 call 0x548a40 */ esp -= 4; M32(esp) = 0x548a1bu; SAVEALL; F_00548a40(c); ABI_CHECK(0x548a40u, 0x548a16u); RETCHK(0x548a1bu, 0x548a16u); LOADALL;
  /* 00548a1b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00548a1f je 0x548a2a */ if (ZF_) goto L_00548a2a;
  /* 00548a21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548a22 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x548a27u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x548a22u); RETCHK(0x548a27u, 0x548a22u); LOADALL;
  /* 00548a27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00548a2a:;
  /* 00548a2a mov eax, esi */ { eax = (u32)(esi); }
  /* 00548a2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548a2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548a2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00548a40(CPU *c) {
  NATIVE_HOOK(0x548a40u) REGS; LOADALL;
L_00548a40:;
  /* 00548a40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548a41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548a42 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00548a44 lea esi, [edi + 0x78] */ esi = (u32)((u32)(edi + 0x78u));
  /* 00548a47 mov dword ptr [edi], 0x654fe8 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x654fe8u); }
  /* 00548a4d call 0x529410 */ esp -= 4; M32(esp) = 0x548a52u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x548a4du); RETCHK(0x548a52u, 0x548a4du); LOADALL;
  /* 00548a52 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00548a55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548a56 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x548a5bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x548a56u); RETCHK(0x548a5bu, 0x548a56u); LOADALL;
  /* 00548a5b mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00548a62 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548a65 lea esi, [edi + 0x6c] */ esi = (u32)((u32)(edi + 0x6cu));
  /* 00548a68 call 0x529410 */ esp -= 4; M32(esp) = 0x548a6du; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x548a68u); RETCHK(0x548a6du, 0x548a68u); LOADALL;
  /* 00548a6d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00548a70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548a71 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x548a76u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x548a71u); RETCHK(0x548a76u, 0x548a71u); LOADALL;
  /* 00548a76 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548a79 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00548a7b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548a7c mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00548a83 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548a84 jmp 0x4eac50 */ SAVEALL; F_004eac50(c); return;
}

void F_00548a90(CPU *c) {
  NATIVE_HOOK(0x548a90u) REGS; LOADALL;
L_00548a90:;
  /* 00548a90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548a91 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 00548a93 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548a94 call 0x5fe9c2 */ esp -= 4; M32(esp) = 0x548a99u; SAVEALL; F_005fe9c2(c); ABI_CHECK(0x5fe9c2u, 0x548a94u); RETCHK(0x548a99u, 0x548a94u); LOADALL;
  /* 00548a99 mov esi, eax */ { esi = (u32)(eax); }
  /* 00548a9b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548a9e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548aa0 je 0x548ac0 */ if (ZF_) goto L_00548ac0;
L_00548aa2:;
  /* 00548aa2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548aa3 mov byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x0u); }
  /* 00548aa6 call 0x5fea8e */ esp -= 4; M32(esp) = 0x548aabu; SAVEALL; F_005fea8e(c); ABI_CHECK(0x5fea8eu, 0x548aa6u); RETCHK(0x548aabu, 0x548aa6u); LOADALL;
  /* 00548aab mov byte ptr [esi], 0x5c */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x5cu); }
  /* 00548aae push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 00548ab0 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00548ab1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548ab2 call 0x5fe9c2 */ esp -= 4; M32(esp) = 0x548ab7u; SAVEALL; F_005fe9c2(c); ABI_CHECK(0x5fe9c2u, 0x548ab2u); RETCHK(0x548ab7u, 0x548ab2u); LOADALL;
  /* 00548ab7 mov esi, eax */ { esi = (u32)(eax); }
  /* 00548ab9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548abc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548abe jne 0x548aa2 */ if (!ZF_) goto L_00548aa2;
L_00548ac0:;
  /* 00548ac0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00548ac2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548ac3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548ad0(CPU *c) {
  NATIVE_HOOK(0x548ad0u) REGS; LOADALL;
L_00548ad0:;
  /* 00548ad0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548ad1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548ad3 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548ad9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00548ade push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00548adf mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00548ae2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548ae3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548ae4 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 00548ae6 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00548ae9 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00548aec mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00548aef push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 00548af1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548af2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548af3 call 0x5b11b0 */ esp -= 4; M32(esp) = 0x548af8u; SAVEALL; F_005b11b0(c); ABI_CHECK(0x5b11b0u, 0x548af3u); RETCHK(0x548af8u, 0x548af3u); LOADALL;
  /* 00548af8 mov esi, eax */ { esi = (u32)(eax); }
  /* 00548afa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548afd test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548aff je 0x548b77 */ if (ZF_) goto L_00548b77;
  /* 00548b01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548b02 call 0x5b1270 */ esp -= 4; M32(esp) = 0x548b07u; SAVEALL; F_005b1270(c); ABI_CHECK(0x5b1270u, 0x548b02u); RETCHK(0x548b07u, 0x548b02u); LOADALL;
  /* 00548b07 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548b0a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548b0c je 0x548b6e */ if (ZF_) goto L_00548b6e;
  /* 00548b0e mov eax, esi */ { eax = (u32)(esi); }
  /* 00548b10 call 0x5466a0 */ esp -= 4; M32(esp) = 0x548b15u; SAVEALL; F_005466a0(c); ABI_CHECK(0x5466a0u, 0x548b10u); RETCHK(0x548b15u, 0x548b10u); LOADALL;
  /* 00548b15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548b17 je 0x548b6e */ if (ZF_) goto L_00548b6e;
  /* 00548b19 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00548b1c mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00548b22 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00548b23 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 00548b29 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548b2a call dword ptr [ecx + 0xcc] */ { const u32 m_ = (u32)(ecx + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x548b30u; SAVEALL; call_ind(c, t_); RETCHK(0x548b30u, 0x548b2au); LOADALL; }
  /* 00548b30 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00548b36 lea edx, [ebx + 0x10] */ edx = (u32)((u32)(ebx + 0x10u));
  /* 00548b39 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00548b3a lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 00548b40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548b41 call dword ptr [ecx + 0xd4] */ { const u32 m_ = (u32)(ecx + 0xd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x548b47u; SAVEALL; call_ind(c, t_); RETCHK(0x548b47u, 0x548b41u); LOADALL; }
  /* 00548b47 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00548b4c lea edx, [ebp - 0x108] */ edx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 00548b52 push 0x64e74c */ { u32 v_ = 0x64e74cu; esp -= 4; M32(esp) = v_; }
  /* 00548b57 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00548b58 call dword ptr [eax + 0xd4] */ { const u32 m_ = (u32)(eax + 0xd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x548b5eu; SAVEALL; call_ind(c, t_); RETCHK(0x548b5eu, 0x548b58u); LOADALL; }
  /* 00548b5e lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 00548b64 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548b65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548b66 call 0x602950 */ esp -= 4; M32(esp) = 0x548b6bu; SAVEALL; F_00602950(c); ABI_CHECK(0x602950u, 0x548b66u); RETCHK(0x548b6bu, 0x548b66u); LOADALL;
  /* 00548b6b add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00548b6e:;
  /* 00548b6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548b6f call 0x5b1210 */ esp -= 4; M32(esp) = 0x548b74u; SAVEALL; F_005b1210(c); ABI_CHECK(0x5b1210u, 0x548b6fu); RETCHK(0x548b74u, 0x548b6fu); LOADALL;
  /* 00548b74 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00548b77:;
  /* 00548b77 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00548b7a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548b7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548b7c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00548b7e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00548b7f call 0x61af31 */ esp -= 4; M32(esp) = 0x548b84u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x548b7fu); RETCHK(0x548b84u, 0x548b7fu); LOADALL;
  /* 00548b84 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548b86 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548b87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548b90(CPU *c) {
  NATIVE_HOOK(0x548b90u) REGS; LOADALL;
L_00548b90:;
  /* 00548b90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548b91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548b93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548b94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548b95 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00548b98 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00548b9a cmp dword ptr [eax + 0xc], 0x100 */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548ba1 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00548ba8 jl 0x548bb7 */ if (LT_) goto L_00548bb7;
  /* 00548baa lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00548bad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548bae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548baf call 0x4eaa80 */ esp -= 4; M32(esp) = 0x548bb4u; SAVEALL; F_004eaa80(c); ABI_CHECK(0x4eaa80u, 0x548bafu); RETCHK(0x548bb4u, 0x548bafu); LOADALL;
  /* 00548bb4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00548bb7:;
  /* 00548bb7 mov eax, esi */ { eax = (u32)(esi); }
  /* 00548bb9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548bba mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548bbc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548bbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00548bc0(CPU *c) {
  NATIVE_HOOK(0x548bc0u) REGS; LOADALL;
L_00548bc0:;
  /* 00548bc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00548bc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00548bc3 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548bc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00548bc7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548bc8 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00548bca call 0x550820 */ esp -= 4; M32(esp) = 0x548bcfu; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x548bcau); RETCHK(0x548bcfu, 0x548bcau); LOADALL;
  /* 00548bcf lea esi, [ebx + 0x78] */ esi = (u32)((u32)(ebx + 0x78u));
  /* 00548bd2 mov dword ptr [ebx + 0x94], 0 */ { const u32 m_ = (u32)(ebx + 0x94u); M32(m_) = (u32)(0x0u); }
  /* 00548bdc call 0x529410 */ esp -= 4; M32(esp) = 0x548be1u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x548bdcu); RETCHK(0x548be1u, 0x548bdcu); LOADALL;
  /* 00548be1 lea esi, [ebx + 0x6c] */ esi = (u32)((u32)(ebx + 0x6cu));
  /* 00548be4 call 0x529410 */ esp -= 4; M32(esp) = 0x548be9u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x548be4u); RETCHK(0x548be9u, 0x548be4u); LOADALL;
  /* 00548be9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00548bec mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00548bee call 0x4eace0 */ esp -= 4; M32(esp) = 0x548bf3u; SAVEALL; F_004eace0(c); ABI_CHECK(0x4eace0u, 0x548beeu); RETCHK(0x548bf3u, 0x548beeu); LOADALL;
  /* 00548bf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548bf5 jne 0x548bff */ if (!ZF_) goto L_00548bff;
  /* 00548bf7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548bf8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00548bf9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548bfb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548bfc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00548bff:;
  /* 00548bff mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 00548c02 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 00548c05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548c06 mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 00548c0b add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00548c0d mov dword ptr [ebx + 0xc], esi */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(esi); }
  /* 00548c10 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00548c12 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00548c14 mov dword ptr [ebx + 0x18], edx */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(edx); }
  /* 00548c17 call 0x4eaef0 */ esp -= 4; M32(esp) = 0x548c1cu; SAVEALL; F_004eaef0(c); ABI_CHECK(0x4eaef0u, 0x548c17u); RETCHK(0x548c1cu, 0x548c17u); LOADALL;
  /* 00548c1c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548c1e jne 0x548c30 */ if (!ZF_) goto L_00548c30;
  /* 00548c20 call 0x4eafb0 */ esp -= 4; M32(esp) = 0x548c25u; SAVEALL; F_004eafb0(c); ABI_CHECK(0x4eafb0u, 0x548c20u); RETCHK(0x548c25u, 0x548c20u); LOADALL;
L_00548c25:;
  /* 00548c25 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00548c26 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00548c27 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00548c29 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00548c2a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00548c2c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00548c2d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00548c30:;
  /* 00548c30 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00548c33 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548c35 jle 0x548c54 */ if ((ZF_|LT_)) goto L_00548c54;
  /* 00548c37 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00548c39 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00548c3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548c3c mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00548c41 call dword ptr [eax + 0x114] */ { const u32 m_ = (u32)(eax + 0x114u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x548c47u; SAVEALL; call_ind(c, t_); RETCHK(0x548c47u, 0x548c41u); LOADALL; }
  /* 00548c47 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548c4a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548c4c mov dword ptr [ebx + 0x84], eax */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(eax); }
  /* 00548c52 je 0x548c25 */ if (ZF_) goto L_00548c25;
L_00548c54:;
  /* 00548c54 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00548c57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548c58 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00548c5a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548c5b call 0x5b34e0 */ esp -= 4; M32(esp) = 0x548c60u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x548c5bu); RETCHK(0x548c60u, 0x548c5bu); LOADALL;
  /* 00548c60 mov edi, eax */ { edi = (u32)(eax); }
  /* 00548c62 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548c65 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548c67 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00548c6a je 0x548c25 */ if (ZF_) goto L_00548c25;
  /* 00548c6c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00548c6e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00548c71 mov dword ptr [ebp - 0x18], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xffffffffu); }
  /* 00548c78 mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 00548c7b mov dword ptr [ebx + 0x88], esi */ { const u32 m_ = (u32)(ebx + 0x88u); M32(m_) = (u32)(esi); }
  /* 00548c81 call 0x5ac5c0 */ esp -= 4; M32(esp) = 0x548c86u; SAVEALL; F_005ac5c0(c); ABI_CHECK(0x5ac5c0u, 0x548c81u); RETCHK(0x548c86u, 0x548c81u); LOADALL;
  /* 00548c86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548c87 mov dword ptr [ebx + 0x48], eax */ { const u32 m_ = (u32)(ebx + 0x48u); M32(m_) = (u32)(eax); }
  /* 00548c8a call 0x5aca00 */ esp -= 4; M32(esp) = 0x548c8fu; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x548c8au); RETCHK(0x548c8fu, 0x548c8au); LOADALL;
  /* 00548c8f lea eax, [ebx + 0x98] */ eax = (u32)((u32)(ebx + 0x98u));
  /* 00548c95 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548c96 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x548c9bu; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x548c96u); RETCHK(0x548c9bu, 0x548c96u); LOADALL;
  /* 00548c9b lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00548c9e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00548c9f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548ca0 call 0x5b3a90 */ esp -= 4; M32(esp) = 0x548ca5u; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x548ca0u); RETCHK(0x548ca5u, 0x548ca0u); LOADALL;
  /* 00548ca5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548ca8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548caa je 0x548eac */ if (ZF_) goto L_00548eac;
  /* 00548cb0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00548cb2 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 00548cb5 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00548cb8 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00548cbb mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 00548cbe mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_00548cc1:;
  /* 00548cc1 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00548cc4 add eax, -0xb */ { u32 a_ = eax, b_ = 0xfffffff5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00548cc7 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548cca ja 0x54915f */ if (!(CF_|ZF_)) goto L_0054915f;
  /* 00548cd0 movzx eax, byte ptr [eax + 0x5492c0] */ { const u32 m_ = (u32)(eax + 0x5492c0u); eax = (u32)(M8(m_)); }
  /* 00548cd7 jmp dword ptr [eax*4 + 0x549298] */ { const u32 m_ = (u32)(eax * 4u + 0x549298u); u32 t_ = M32(m_); switch (t_) { case 0x548cdeu: goto L_00548cde; case 0x548dd3u: goto L_00548dd3; case 0x548e8au: goto L_00548e8a; case 0x549018u: goto L_00549018; case 0x549045u: goto L_00549045; case 0x549072u: goto L_00549072; case 0x54907au: goto L_0054907a; case 0x5490acu: goto L_005490ac; case 0x549121u: goto L_00549121; case 0x54915fu: goto L_0054915f; default: SAVEALL; call_ind(c, t_); return; } }
L_00548cde:;
  /* 00548cde mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00548ce1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548ce2 call 0x5b9630 */ esp -= 4; M32(esp) = 0x548ce7u; SAVEALL; F_005b9630(c); ABI_CHECK(0x5b9630u, 0x548ce2u); RETCHK(0x548ce7u, 0x548ce2u); LOADALL;
  /* 00548ce7 mov edi, eax */ { edi = (u32)(eax); }
  /* 00548ce9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548cea call 0x61af82 */ esp -= 4; M32(esp) = 0x548cefu; SAVEALL; F_0061af82(c); ABI_CHECK(0x61af82u, 0x548ceau); RETCHK(0x548cefu, 0x548ceau); LOADALL;
  /* 00548cef push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00548cf1 push 0x655060 */ { u32 v_ = 0x655060u; esp -= 4; M32(esp) = v_; }
  /* 00548cf6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548cf7 call 0x5feb06 */ esp -= 4; M32(esp) = 0x548cfcu; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x548cf7u); RETCHK(0x548cfcu, 0x548cf7u); LOADALL;
  /* 00548cfc add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548cff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548d01 jne 0x548d19 */ if (!ZF_) goto L_00548d19;
  /* 00548d03 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548d04 mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 00548d09 call 0x5b9600 */ esp -= 4; M32(esp) = 0x548d0eu; SAVEALL; F_005b9600(c); ABI_CHECK(0x5b9600u, 0x548d09u); RETCHK(0x548d0eu, 0x548d09u); LOADALL;
  /* 00548d0e mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00548d11 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548d14 jmp 0x54916c */ goto L_0054916c;
L_00548d19:;
  /* 00548d19 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00548d1b push 0x65505c */ { u32 v_ = 0x65505cu; esp -= 4; M32(esp) = v_; }
  /* 00548d20 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548d21 call 0x5feb06 */ esp -= 4; M32(esp) = 0x548d26u; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x548d21u); RETCHK(0x548d26u, 0x548d21u); LOADALL;
  /* 00548d26 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548d29 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548d2b jne 0x548d43 */ if (!ZF_) goto L_00548d43;
  /* 00548d2d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548d2e mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 00548d33 call 0x5b9600 */ esp -= 4; M32(esp) = 0x548d38u; SAVEALL; F_005b9600(c); ABI_CHECK(0x5b9600u, 0x548d33u); RETCHK(0x548d38u, 0x548d33u); LOADALL;
  /* 00548d38 mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00548d3b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548d3e jmp 0x54916c */ goto L_0054916c;
L_00548d43:;
  /* 00548d43 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00548d45 push 0x655058 */ { u32 v_ = 0x655058u; esp -= 4; M32(esp) = v_; }
  /* 00548d4a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548d4b call 0x5feb06 */ esp -= 4; M32(esp) = 0x548d50u; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x548d4bu); RETCHK(0x548d50u, 0x548d4bu); LOADALL;
  /* 00548d50 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548d53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548d55 jne 0x548d6d */ if (!ZF_) goto L_00548d6d;
  /* 00548d57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548d58 mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 00548d5d call 0x5b9600 */ esp -= 4; M32(esp) = 0x548d62u; SAVEALL; F_005b9600(c); ABI_CHECK(0x5b9600u, 0x548d5du); RETCHK(0x548d62u, 0x548d5du); LOADALL;
  /* 00548d62 mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00548d65 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548d68 jmp 0x54916c */ goto L_0054916c;
L_00548d6d:;
  /* 00548d6d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00548d6f push 0x655050 */ { u32 v_ = 0x655050u; esp -= 4; M32(esp) = v_; }
  /* 00548d74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548d75 call 0x5feb06 */ esp -= 4; M32(esp) = 0x548d7au; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x548d75u); RETCHK(0x548d7au, 0x548d75u); LOADALL;
  /* 00548d7a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548d7d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548d7f jne 0x548da6 */ if (!ZF_) goto L_00548da6;
  /* 00548d81 lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 00548d84 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00548d85 mov esi, 4 */ { esi = (u32)(0x4u); }
  /* 00548d8a call 0x5fe92e */ esp -= 4; M32(esp) = 0x548d8fu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x548d8au); RETCHK(0x548d8fu, 0x548d8au); LOADALL;
  /* 00548d8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548d92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548d93 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00548d96 call 0x5b9600 */ esp -= 4; M32(esp) = 0x548d9bu; SAVEALL; F_005b9600(c); ABI_CHECK(0x5b9600u, 0x548d96u); RETCHK(0x548d9bu, 0x548d96u); LOADALL;
  /* 00548d9b mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00548d9e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548da1 jmp 0x54916c */ goto L_0054916c;
L_00548da6:;
  /* 00548da6 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00548da8 push 0x655048 */ { u32 v_ = 0x655048u; esp -= 4; M32(esp) = v_; }
  /* 00548dad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548dae call 0x5feb06 */ esp -= 4; M32(esp) = 0x548db3u; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x548daeu); RETCHK(0x548db3u, 0x548daeu); LOADALL;
  /* 00548db3 mov esi, eax */ { esi = (u32)(eax); }
  /* 00548db5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548db8 neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00548dba sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 00548dbc and esi, 0xfffffff9 */ { u32 a_ = esi, b_ = 0xfffffff9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00548dbf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548dc0 add esi, 7 */ { u32 a_ = esi, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00548dc3 call 0x5b9600 */ esp -= 4; M32(esp) = 0x548dc8u; SAVEALL; F_005b9600(c); ABI_CHECK(0x5b9600u, 0x548dc3u); RETCHK(0x548dc8u, 0x548dc3u); LOADALL;
  /* 00548dc8 mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00548dcb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548dce jmp 0x54916c */ goto L_0054916c;
L_00548dd3:;
  /* 00548dd3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548dd4 call 0x579380 */ esp -= 4; M32(esp) = 0x548dd9u; SAVEALL; F_00579380(c); ABI_CHECK(0x579380u, 0x548dd4u); RETCHK(0x548dd9u, 0x548dd4u); LOADALL;
  /* 00548dd9 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00548ddc mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00548ddf mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 00548de2 mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00548de5 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00548de7 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00548de9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548dec test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548dee je 0x548e9e */ if (ZF_) goto L_00548e9e;
  /* 00548df4 cmp esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548df7 mov dword ptr [eax + 0xc], esi */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(esi); }
  /* 00548dfa je 0x548e0c */ if (ZF_) goto L_00548e0c;
  /* 00548dfc cmp esi, 7 */ { u32 a_ = esi, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548dff jne 0x548e73 */ if (!ZF_) goto L_00548e73;
  /* 00548e01 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00548e04 mov dword ptr [ebx + 0x8c], ecx */ { const u32 m_ = (u32)(ebx + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 00548e0a jmp 0x548e73 */ goto L_00548e73;
L_00548e0c:;
  /* 00548e0c mov edx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); edx = (u32)(M32(m_)); }
  /* 00548e12 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548e14 je 0x548e73 */ if (ZF_) goto L_00548e73;
  /* 00548e16 mov eax, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (u32)(M32(m_)); }
  /* 00548e1c mov esi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esi = (u32)(M32(m_)); }
  /* 00548e1f xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00548e21 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548e23 jle 0x548e37 */ if ((ZF_|LT_)) goto L_00548e37;
  /* 00548e25 mov ecx, edx */ { ecx = (u32)(edx); }
L_00548e27:;
  /* 00548e27 cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548e29 jle 0x548e37 */ if ((ZF_|LT_)) goto L_00548e37;
  /* 00548e2b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00548e2c add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00548e2f cmp edi, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548e35 jl 0x548e27 */ if (LT_) goto L_00548e27;
L_00548e37:;
  /* 00548e37 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00548e39 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00548e3c lea ecx, [edx + edi*8] */ ecx = (u32)((u32)(edx + edi * 8u));
  /* 00548e3f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548e40 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548e41 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00548e44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00548e45 call 0x5fe998 */ esp -= 4; M32(esp) = 0x548e4au; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x548e45u); RETCHK(0x548e4au, 0x548e45u); LOADALL;
  /* 00548e4a mov edx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); edx = (u32)(M32(m_)); }
  /* 00548e50 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00548e53 mov dword ptr [edx + edi*8], esi */ { const u32 m_ = (u32)(edx + edi * 8u); M32(m_) = (u32)(esi); }
  /* 00548e56 mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 00548e5c mov dword ptr [eax + edi*8 + 4], ecx */ { const u32 m_ = (u32)(eax + edi * 8u + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00548e60 mov eax, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (u32)(M32(m_)); }
  /* 00548e66 mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00548e69 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548e6c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00548e6d mov dword ptr [ebx + 0x88], eax */ { const u32 m_ = (u32)(ebx + 0x88u); M32(m_) = (u32)(eax); }
L_00548e73:;
  /* 00548e73 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00548e76 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00548e79 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00548e7a add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00548e7d mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 00548e80 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00548e83 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00548e85 jmp 0x54916c */ goto L_0054916c;
L_00548e8a:;
  /* 00548e8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548e8b call 0x57d620 */ esp -= 4; M32(esp) = 0x548e90u; SAVEALL; F_0057d620(c); ABI_CHECK(0x57d620u, 0x548e8bu); RETCHK(0x548e90u, 0x548e8bu); LOADALL;
  /* 00548e90 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548e93 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548e95 mov dword ptr [ebx + 0x24], eax */ { const u32 m_ = (u32)(ebx + 0x24u); M32(m_) = (u32)(eax); }
  /* 00548e98 jne 0x54916c */ if (!ZF_) goto L_0054916c;
L_00548e9e:;
  /* 00548e9e mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00548ea0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00548ea2 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00548ea9 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x548eacu; SAVEALL; call_ind(c, t_); RETCHK(0x548eacu, 0x548ea9u); LOADALL; }
L_00548eac:;
  /* 00548eac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00548eae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00548eaf call 0x5b3410 */ esp -= 4; M32(esp) = 0x548eb4u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x548eafu); RETCHK(0x548eb4u, 0x548eafu); LOADALL;
  /* 00548eb4 mov al, byte ptr [ebx + 0xe8] */ { const u32 m_ = (u32)(ebx + 0xe8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00548eba lea esi, [ebx + 0xe8] */ esi = (u32)((u32)(ebx + 0xe8u));
  /* 00548ec0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548ec3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00548ec5 je 0x548f9e */ if (ZF_) goto L_00548f9e;
  /* 00548ecb mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00548ece test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548ed0 je 0x548f9e */ if (ZF_) goto L_00548f9e;
  /* 00548ed6 push 0x655028 */ { u32 v_ = 0x655028u; esp -= 4; M32(esp) = v_; }
  /* 00548edb call 0x5b17e0 */ esp -= 4; M32(esp) = 0x548ee0u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x548edbu); RETCHK(0x548ee0u, 0x548edbu); LOADALL;
  /* 00548ee0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00548ee3 mov eax, esi */ { eax = (u32)(esi); }
  /* 00548ee5 call 0x5451e0 */ esp -= 4; M32(esp) = 0x548eeau; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x548ee5u); RETCHK(0x548eeau, 0x548ee5u); LOADALL;
  /* 00548eea test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548eec mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 00548eef je 0x548f2f */ if (ZF_) goto L_00548f2f;
  /* 00548ef1 mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00548ef4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00548ef6 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00548ef9 mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 00548efc mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00548eff mov dword ptr [eax + ecx + 0xc], 7 */ { const u32 m_ = (u32)(eax + ecx + 0xcu); M32(m_) = (u32)(0x7u); }
  /* 00548f07 mov dword ptr [ebx + 0x90], esi */ { const u32 m_ = (u32)(ebx + 0x90u); M32(m_) = (u32)(esi); }
  /* 00548f0d mov eax, 0x655000 */ { eax = (u32)(0x655000u); }
  /* 00548f12 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00548f13 call 0x545230 */ esp -= 4; M32(esp) = 0x548f18u; SAVEALL; F_00545230(c); ABI_CHECK(0x545230u, 0x548f13u); RETCHK(0x548f18u, 0x548f13u); LOADALL;
  /* 00548f18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548f1a je 0x548f2f */ if (ZF_) goto L_00548f2f;
  /* 00548f1c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00548f1e cmp dword ptr [ecx], 1 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548f21 jne 0x548f2f */ if (!ZF_) goto L_00548f2f;
  /* 00548f23 mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00548f26 mov edx, esi */ { edx = (u32)(esi); }
  /* 00548f28 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00548f2b mov dword ptr [edx + ecx - 8], eax */ { const u32 m_ = (u32)(edx + ecx + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_00548f2f:;
  /* 00548f2f mov edi, esi */ { edi = (u32)(esi); }
  /* 00548f31 lea eax, [ebx + 0x138] */ eax = (u32)((u32)(ebx + 0x138u));
  /* 00548f37 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00548f3a call 0x5451e0 */ esp -= 4; M32(esp) = 0x548f3fu; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x548f3au); RETCHK(0x548f3fu, 0x548f3au); LOADALL;
  /* 00548f3f mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00548f42 mov dword ptr [edi + edx], eax */ { const u32 m_ = (u32)(edi + edx); M32(m_) = (u32)(eax); }
  /* 00548f45 mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00548f48 mov ecx, dword ptr [eax + edi] */ { const u32 m_ = (u32)(eax + edi); ecx = (u32)(M32(m_)); }
  /* 00548f4b add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00548f4d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548f4f je 0x548f9e */ if (ZF_) goto L_00548f9e;
  /* 00548f51 mov dword ptr [eax + 0xc], 4 */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(0x4u); }
  /* 00548f58 lea eax, [ebx + 0x188] */ eax = (u32)((u32)(ebx + 0x188u));
  /* 00548f5e call 0x545230 */ esp -= 4; M32(esp) = 0x548f63u; SAVEALL; F_00545230(c); ABI_CHECK(0x545230u, 0x548f5eu); RETCHK(0x548f63u, 0x548f5eu); LOADALL;
  /* 00548f63 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548f65 je 0x548f75 */ if (ZF_) goto L_00548f75;
  /* 00548f67 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00548f69 cmp dword ptr [ecx], 1 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548f6c jne 0x548f75 */ if (!ZF_) goto L_00548f75;
  /* 00548f6e mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00548f71 mov dword ptr [edx + edi + 8], eax */ { const u32 m_ = (u32)(edx + edi + 0x8u); M32(m_) = (u32)(eax); }
L_00548f75:;
  /* 00548f75 mov eax, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (u32)(M32(m_)); }
  /* 00548f7b mov ecx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); ecx = (u32)(M32(m_)); }
  /* 00548f81 mov dword ptr [ecx + eax*8], 6 */ { const u32 m_ = (u32)(ecx + eax * 8u); M32(m_) = (u32)(0x6u); }
  /* 00548f88 mov edx, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); edx = (u32)(M32(m_)); }
  /* 00548f8e mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 00548f94 mov dword ptr [eax + edx*8 + 4], esi */ { const u32 m_ = (u32)(eax + edx * 8u + 0x4u); M32(m_) = (u32)(esi); }
  /* 00548f98 inc dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00548f9e:;
  /* 00548f9e mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 00548fa1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548fa3 je 0x549245 */ if (ZF_) goto L_00549245;
  /* 00548fa9 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00548fac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548fae jle 0x5491d8 */ if ((ZF_|LT_)) goto L_005491d8;
  /* 00548fb4 mov esi, eax */ { esi = (u32)(eax); }
  /* 00548fb6 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00548fb9 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 00548fbc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00548fc0:;
  /* 00548fc0 mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00548fc3 sub esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00548fc6 mov edx, dword ptr [ecx + esi] */ { const u32 m_ = (u32)(ecx + esi); edx = (u32)(M32(m_)); }
  /* 00548fc9 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00548fcb lea eax, [ecx + esi] */ eax = (u32)((u32)(ecx + esi));
  /* 00548fce mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 00548fd1 je 0x5491cf */ if (ZF_) goto L_005491cf;
  /* 00548fd7 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00548fda and ecx, 0xffff */ { u32 a_ = ecx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00548fe0 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00548fe3 jne 0x549186 */ if (!ZF_) goto L_00549186;
  /* 00548fe9 mov edx, dword ptr [ebx + 0x7c] */ { const u32 m_ = (u32)(ebx + 0x7cu); edx = (u32)(M32(m_)); }
  /* 00548fec mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00548fee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548fef mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00548ff2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00548ff3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00548ff4 call 0x508af0 */ esp -= 4; M32(esp) = 0x548ff9u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x548ff4u); RETCHK(0x548ff9u, 0x548ff4u); LOADALL;
  /* 00548ff9 lea edx, [ebx + 0x78] */ edx = (u32)((u32)(ebx + 0x78u));
L_00548ffc:;
  /* 00548ffc mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00549001 mov edi, eax */ { edi = (u32)(eax); }
  /* 00549003 call 0x518d90 */ esp -= 4; M32(esp) = 0x549008u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x549003u); RETCHK(0x549008u, 0x549003u); LOADALL;
  /* 00549008 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0054900b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054900e mov esi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); esi = (u32)(M32(m_)); }
  /* 00549011 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 00549013 jmp 0x5491cf */ goto L_005491cf;
L_00549018:;
  /* 00549018 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549019 call 0x5e57a0 */ esp -= 4; M32(esp) = 0x54901eu; SAVEALL; F_005e57a0(c); ABI_CHECK(0x5e57a0u, 0x549019u); RETCHK(0x54901eu, 0x549019u); LOADALL;
  /* 0054901e mov edx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); edx = (u32)(M32(m_)); }
  /* 00549021 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 00549024 mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 00549027 mov eax, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054902a mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0054902d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549030 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549032 je 0x548e9e */ if (ZF_) goto L_00548e9e;
  /* 00549038 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054903a add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054903d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00549040 jmp 0x54916c */ goto L_0054916c;
L_00549045:;
  /* 00549045 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549046 call 0x57d1c0 */ esp -= 4; M32(esp) = 0x54904bu; SAVEALL; F_0057d1c0(c); ABI_CHECK(0x57d1c0u, 0x549046u); RETCHK(0x54904bu, 0x549046u); LOADALL;
  /* 0054904b mov edx, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); edx = (u32)(M32(m_)); }
  /* 0054904e mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 00549051 mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 00549054 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 00549057 mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0054905a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054905d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054905f je 0x548e9e */ if (ZF_) goto L_00548e9e;
  /* 00549065 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00549067 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054906a mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0054906d jmp 0x54916c */ goto L_0054916c;
L_00549072:;
  /* 00549072 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549073 call 0x5b47c0 */ esp -= 4; M32(esp) = 0x549078u; SAVEALL; F_005b47c0(c); ABI_CHECK(0x5b47c0u, 0x549073u); RETCHK(0x549078u, 0x549073u); LOADALL;
  /* 00549078 jmp 0x5490b2 */ goto L_005490b2;
L_0054907a:;
  /* 0054907a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054907b call 0x5e81c0 */ esp -= 4; M32(esp) = 0x549080u; SAVEALL; F_005e81c0(c); ABI_CHECK(0x5e81c0u, 0x54907bu); RETCHK(0x549080u, 0x54907bu); LOADALL;
  /* 00549080 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00549083 mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00549086 mov dword ptr [edx + ecx - 8], eax */ { const u32 m_ = (u32)(edx + ecx + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0054908a mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0054908d mov eax, dword ptr [eax + ecx - 8] */ { const u32 m_ = (u32)(eax + ecx + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00549091 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549094 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549096 je 0x548e9e */ if (ZF_) goto L_00548e9e;
  /* 0054909c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054909e cmp dword ptr [ecx], 1 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005490a1 jne 0x548e9e */ if (!ZF_) goto L_00548e9e;
  /* 005490a7 jmp 0x54916c */ goto L_0054916c;
L_005490ac:;
  /* 005490ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005490ad call 0x5f0900 */ esp -= 4; M32(esp) = 0x5490b2u; SAVEALL; F_005f0900(c); ABI_CHECK(0x5f0900u, 0x5490adu); RETCHK(0x5490b2u, 0x5490adu); LOADALL;
L_005490b2:;
  /* 005490b2 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005490b5 mov edx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); edx = (u32)(M32(m_)); }
  /* 005490b8 mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 005490bb mov eax, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (u32)(M32(m_)); }
  /* 005490be mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 005490c1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005490c4 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005490c6 je 0x548e9e */ if (ZF_) goto L_00548e9e;
  /* 005490cc mov al, byte ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005490d2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005490d4 je 0x54910c */ if (ZF_) goto L_0054910c;
  /* 005490d6 lea edi, [ebx + 0x98] */ edi = (u32)((u32)(ebx + 0x98u));
  /* 005490dc call 0x548a90 */ esp -= 4; M32(esp) = 0x5490e1u; SAVEALL; F_00548a90(c); ABI_CHECK(0x548a90u, 0x5490dcu); RETCHK(0x5490e1u, 0x5490dcu); LOADALL;
  /* 005490e1 mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005490e4 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 005490e7 lea eax, [ebx + 0x98] */ eax = (u32)((u32)(ebx + 0x98u));
  /* 005490ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005490ee mov eax, dword ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); eax = (u32)(M32(m_)); }
  /* 005490f1 push 0x548ad0 */ { u32 v_ = 0x548ad0u; esp -= 4; M32(esp) = v_; }
  /* 005490f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005490f7 call 0x5ac6f0 */ esp -= 4; M32(esp) = 0x5490fcu; SAVEALL; F_005ac6f0(c); ABI_CHECK(0x5ac6f0u, 0x5490f7u); RETCHK(0x5490fcu, 0x5490f7u); LOADALL;
  /* 005490fc mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 005490ff add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549102 mov dword ptr [ebx + 0x94], 1 */ { const u32 m_ = (u32)(ebx + 0x94u); M32(m_) = (u32)(0x1u); }
L_0054910c:;
  /* 0054910c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054910e call 0x5aca00 */ esp -= 4; M32(esp) = 0x549113u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x54910eu); RETCHK(0x549113u, 0x54910eu); LOADALL;
  /* 00549113 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00549116 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549119 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054911c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0054911f jmp 0x54916c */ goto L_0054916c;
L_00549121:;
  /* 00549121 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549122 push 0x67d2d4 */ { u32 v_ = 0x67d2d4u; esp -= 4; M32(esp) = v_; }
  /* 00549127 call 0x5f0390 */ esp -= 4; M32(esp) = 0x54912cu; SAVEALL; F_005f0390(c); ABI_CHECK(0x5f0390u, 0x549127u); RETCHK(0x54912cu, 0x549127u); LOADALL;
  /* 0054912c mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0054912f mov edx, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); edx = (u32)(M32(m_)); }
  /* 00549132 mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 00549135 mov eax, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); eax = (u32)(M32(m_)); }
  /* 00549138 mov eax, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); eax = (u32)(M32(m_)); }
  /* 0054913b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054913e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549140 je 0x548e9e */ if (ZF_) goto L_00548e9e;
  /* 00549146 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549147 push 0x67d2d4 */ { u32 v_ = 0x67d2d4u; esp -= 4; M32(esp) = v_; }
  /* 0054914c call 0x5f0240 */ esp -= 4; M32(esp) = 0x549151u; SAVEALL; F_005f0240(c); ABI_CHECK(0x5f0240u, 0x54914cu); RETCHK(0x549151u, 0x54914cu); LOADALL;
  /* 00549151 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00549154 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549157 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054915a mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0054915d jmp 0x54916c */ goto L_0054916c;
L_0054915f:;
  /* 0054915f mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 00549162 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549163 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549164 call 0x5b3300 */ esp -= 4; M32(esp) = 0x549169u; SAVEALL; F_005b3300(c); ABI_CHECK(0x5b3300u, 0x549164u); RETCHK(0x549169u, 0x549164u); LOADALL;
  /* 00549169 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054916c:;
  /* 0054916c lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0054916f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549170 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549171 call 0x5b3a90 */ esp -= 4; M32(esp) = 0x549176u; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x549171u); RETCHK(0x549176u, 0x549171u); LOADALL;
  /* 00549176 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549179 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054917b jne 0x548cc1 */ if (!ZF_) goto L_00548cc1;
  /* 00549181 jmp 0x548eac */ goto L_00548eac;
L_00549186:;
  /* 00549186 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549189 jne 0x5491a3 */ if (!ZF_) goto L_005491a3;
  /* 0054918b mov edx, dword ptr [ebx + 0x70] */ { const u32 m_ = (u32)(ebx + 0x70u); edx = (u32)(M32(m_)); }
  /* 0054918e mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00549190 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549191 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00549194 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549195 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549196 call 0x508af0 */ esp -= 4; M32(esp) = 0x54919bu; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x549196u); RETCHK(0x54919bu, 0x549196u); LOADALL;
  /* 0054919b lea edx, [ebx + 0x6c] */ edx = (u32)((u32)(ebx + 0x6cu));
  /* 0054919e jmp 0x548ffc */ goto L_00548ffc;
L_005491a3:;
  /* 005491a3 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005491a6 je 0x5491bc */ if (ZF_) goto L_005491bc;
  /* 005491a8 cmp ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005491ab je 0x5491bc */ if (ZF_) goto L_005491bc;
  /* 005491ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005491ae mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 005491b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005491b2 call 0x57ad90 */ esp -= 4; M32(esp) = 0x5491b7u; SAVEALL; F_0057ad90(c); ABI_CHECK(0x57ad90u, 0x5491b2u); RETCHK(0x5491b7u, 0x5491b2u); LOADALL;
  /* 005491b7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005491ba jmp 0x5491cf */ goto L_005491cf;
L_005491bc:;
  /* 005491bc push 0x605 */ { u32 v_ = 0x605u; esp -= 4; M32(esp) = v_; }
  /* 005491c1 push 0x548870 */ { u32 v_ = 0x548870u; esp -= 4; M32(esp) = v_; }
  /* 005491c6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005491c7 call 0x577da0 */ esp -= 4; M32(esp) = 0x5491ccu; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x5491c7u); RETCHK(0x5491ccu, 0x5491c7u); LOADALL;
  /* 005491cc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005491cf:;
  /* 005491cf dec dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005491d2 jne 0x548fc0 */ if (!ZF_) goto L_00548fc0;
L_005491d8:;
  /* 005491d8 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005491da call 0x4eb320 */ esp -= 4; M32(esp) = 0x5491dfu; SAVEALL; F_004eb320(c); ABI_CHECK(0x4eb320u, 0x5491dau); RETCHK(0x5491dfu, 0x5491dau); LOADALL;
  /* 005491df push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005491e1 mov dword ptr [ebx + 0x44], 1 */ { const u32 m_ = (u32)(ebx + 0x44u); M32(m_) = (u32)(0x1u); }
  /* 005491e8 call 0x57d360 */ esp -= 4; M32(esp) = 0x5491edu; SAVEALL; F_0057d360(c); ABI_CHECK(0x57d360u, 0x5491e8u); RETCHK(0x5491edu, 0x5491e8u); LOADALL;
  /* 005491ed add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005491f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005491f2 mov dword ptr [ebx + 0x68], eax */ { const u32 m_ = (u32)(ebx + 0x68u); M32(m_) = (u32)(eax); }
  /* 005491f5 je 0x54922d */ if (ZF_) goto L_0054922d;
  /* 005491f7 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 005491fa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005491fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005491fc mov dword ptr [ebp - 0x28], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00549203 mov dword ptr [ebp - 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054920a mov dword ptr [ebp - 0x30], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x3f800000u); }
  /* 00549211 mov dword ptr [ebp - 0x34], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x3f800000u); }
  /* 00549218 call 0x57cde0 */ esp -= 4; M32(esp) = 0x54921du; SAVEALL; F_0057cde0(c); ABI_CHECK(0x57cde0u, 0x549218u); RETCHK(0x54921du, 0x549218u); LOADALL;
  /* 0054921d mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 00549220 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 00549223 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549224 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549225 call 0x57b150 */ esp -= 4; M32(esp) = 0x54922au; SAVEALL; F_0057b150(c); ABI_CHECK(0x57b150u, 0x549225u); RETCHK(0x54922au, 0x549225u); LOADALL;
  /* 0054922a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054922d:;
  /* 0054922d mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 00549230 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549232 je 0x54923b */ if (ZF_) goto L_0054923b;
  /* 00549234 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00549236 call 0x5498a0 */ esp -= 4; M32(esp) = 0x54923bu; SAVEALL; F_005498a0(c); ABI_CHECK(0x5498a0u, 0x549236u); RETCHK(0x54923bu, 0x549236u); LOADALL;
L_0054923b:;
  /* 0054923b mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0054923e mov dword ptr [ecx + 0xc], 1 */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(0x1u); }
L_00549245:;
  /* 00549245 mov eax, dword ptr [ebx + 0x94] */ { const u32 m_ = (u32)(ebx + 0x94u); eax = (u32)(M32(m_)); }
  /* 0054924b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054924d je 0x54925b */ if (ZF_) goto L_0054925b;
  /* 0054924f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00549252 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549253 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549254 call 0x549610 */ esp -= 4; M32(esp) = 0x549259u; SAVEALL; F_00549610(c); ABI_CHECK(0x549610u, 0x549254u); RETCHK(0x549259u, 0x549254u); LOADALL;
  /* 00549259 jmp 0x549279 */ goto L_00549279;
L_0054925b:;
  /* 0054925b mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0054925e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549260 jne 0x549279 */ if (!ZF_) goto L_00549279;
  /* 00549262 mov ebx, dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); ebx = (u32)(M32(m_)); }
  /* 00549265 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549267 je 0x549279 */ if (ZF_) goto L_00549279;
  /* 00549269 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054926b push 0x548b90 */ { u32 v_ = 0x548b90u; esp -= 4; M32(esp) = v_; }
  /* 00549270 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549271 call 0x5ac6f0 */ esp -= 4; M32(esp) = 0x549276u; SAVEALL; F_005ac6f0(c); ABI_CHECK(0x5ac6f0u, 0x549271u); RETCHK(0x549276u, 0x549271u); LOADALL;
  /* 00549276 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00549279:;
  /* 00549279 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054927b call 0x5aca00 */ esp -= 4; M32(esp) = 0x549280u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x54927bu); RETCHK(0x549280u, 0x54927bu); LOADALL;
  /* 00549280 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00549283 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549286 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549287 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549289 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054928b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054928c sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0054928f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00549290 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549292 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549293 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005492f0(CPU *c) {
  NATIVE_HOOK(0x5492f0u) REGS; LOADALL;
L_005492f0:;
  /* 005492f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005492f1 mov esi, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); esi = (u32)(M32(m_)); }
  /* 005492f4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005492f6 je 0x5492fd */ if (ZF_) goto L_005492fd;
  /* 005492f8 call 0x544920 */ esp -= 4; M32(esp) = 0x5492fdu; SAVEALL; F_00544920(c); ABI_CHECK(0x544920u, 0x5492f8u); RETCHK(0x5492fdu, 0x5492f8u); LOADALL;
L_005492fd:;
  /* 005492fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005492fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549300(CPU *c) {
  NATIVE_HOOK(0x549300u) REGS; LOADALL;
L_00549300:;
  /* 00549300 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549301 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549302 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00549304 call 0x5446c0 */ esp -= 4; M32(esp) = 0x549309u; SAVEALL; F_005446c0(c); ABI_CHECK(0x5446c0u, 0x549304u); RETCHK(0x549309u, 0x549304u); LOADALL;
  /* 00549309 lea esi, [edi + 0x6c] */ esi = (u32)((u32)(edi + 0x6cu));
  /* 0054930c call 0x529410 */ esp -= 4; M32(esp) = 0x549311u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x54930cu); RETCHK(0x549311u, 0x54930cu); LOADALL;
  /* 00549311 lea esi, [edi + 0x78] */ esi = (u32)((u32)(edi + 0x78u));
  /* 00549314 call 0x529410 */ esp -= 4; M32(esp) = 0x549319u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x549314u); RETCHK(0x549319u, 0x549314u); LOADALL;
  /* 00549319 mov eax, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); eax = (u32)(M32(m_)); }
  /* 0054931f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00549321 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549323 je 0x54933a */ if (ZF_) goto L_0054933a;
  /* 00549325 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549326 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0054932b call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549331u; SAVEALL; call_ind(c, t_); RETCHK(0x549331u, 0x54932bu); LOADALL; }
  /* 00549331 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549334 mov dword ptr [edi + 0x84], esi */ { const u32 m_ = (u32)(edi + 0x84u); M32(m_) = (u32)(esi); }
L_0054933a:;
  /* 0054933a mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 0054933d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054933f je 0x54935a */ if (ZF_) goto L_0054935a;
  /* 00549341 mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00549344 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549345 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549346 call 0x57b1a0 */ esp -= 4; M32(esp) = 0x54934bu; SAVEALL; F_0057b1a0(c); ABI_CHECK(0x57b1a0u, 0x549346u); RETCHK(0x54934bu, 0x549346u); LOADALL;
  /* 0054934b mov edx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); edx = (u32)(M32(m_)); }
  /* 0054934e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054934f call 0x57d320 */ esp -= 4; M32(esp) = 0x549354u; SAVEALL; F_0057d320(c); ABI_CHECK(0x57d320u, 0x54934fu); RETCHK(0x549354u, 0x54934fu); LOADALL;
  /* 00549354 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549357 mov dword ptr [edi + 0x68], esi */ { const u32 m_ = (u32)(edi + 0x68u); M32(m_) = (u32)(esi); }
L_0054935a:;
  /* 0054935a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0054935c call 0x4eb510 */ esp -= 4; M32(esp) = 0x549361u; SAVEALL; F_004eb510(c); ABI_CHECK(0x4eb510u, 0x54935cu); RETCHK(0x549361u, 0x54935cu); LOADALL;
  /* 00549361 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00549364 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549366 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 00549368 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054936b mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054936e mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00549371 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00549374 mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
  /* 00549377 mov dword ptr [edi + 0x18], eax */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0054937a mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0054937d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054937e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054937f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549380(CPU *c) {
  NATIVE_HOOK(0x549380u) REGS; LOADALL;
L_00549380:;
  /* 00549380 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 00549386 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549388 je 0x5493b9 */ if (ZF_) goto L_005493b9;
  /* 0054938a mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0054938f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549390 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549392 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 00549394 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549397u; SAVEALL; call_ind(c, t_); RETCHK(0x549397u, 0x549394u); LOADALL; }
  /* 00549397 mov eax, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0054939a mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054939c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054939f cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005493a1 je 0x5493b8 */ if (ZF_) goto L_005493b8;
L_005493a3:;
  /* 005493a3 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005493a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005493a7 call 0x577d50 */ esp -= 4; M32(esp) = 0x5493acu; SAVEALL; F_00577d50(c); ABI_CHECK(0x577d50u, 0x5493a7u); RETCHK(0x5493acu, 0x5493a7u); LOADALL;
  /* 005493ac mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005493ae mov eax, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 005493b1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005493b4 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005493b6 jne 0x5493a3 */ if (!ZF_) goto L_005493a3;
L_005493b8:;
  /* 005493b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005493b9:;
  /* 005493b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005493c0(CPU *c) {
  NATIVE_HOOK(0x5493c0u) REGS; LOADALL;
L_005493c0:;
  /* 005493c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005493c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005493c3 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 005493c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005493c8 je 0x54948b */ if (ZF_) goto L_0054948b;
  /* 005493ce mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005493d1 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005493d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005493d8 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005493da call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5493ddu; SAVEALL; call_ind(c, t_); RETCHK(0x5493ddu, 0x5493dau); LOADALL; }
  /* 005493dd mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005493e0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005493e3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005493e5 je 0x549416 */ if (ZF_) goto L_00549416;
  /* 005493e7 mov edx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); edx = (u32)(M32(m_)); }
  /* 005493ea mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005493ef push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005493f0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005493f2 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5493f5u; SAVEALL; call_ind(c, t_); RETCHK(0x5493f5u, 0x5493f2u); LOADALL; }
  /* 005493f5 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005493f8 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005493fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005493ff push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 00549401 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549404u; SAVEALL; call_ind(c, t_); RETCHK(0x549404u, 0x549401u); LOADALL; }
  /* 00549404 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054940a lea eax, [esi + 0x54] */ eax = (u32)((u32)(esi + 0x54u));
  /* 0054940d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054940e push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 00549410 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549413u; SAVEALL; call_ind(c, t_); RETCHK(0x549413u, 0x549410u); LOADALL; }
  /* 00549413 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00549416:;
  /* 00549416 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054941c push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00549421 push 0x1e */ { u32 v_ = 0x1eu; esp -= 4; M32(esp) = v_; }
  /* 00549423 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549426u; SAVEALL; call_ind(c, t_); RETCHK(0x549426u, 0x549423u); LOADALL; }
  /* 00549426 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0054942b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054942d push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0054942f call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549432u; SAVEALL; call_ind(c, t_); RETCHK(0x549432u, 0x54942fu); LOADALL; }
  /* 00549432 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00549438 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054943a push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054943c call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54943fu; SAVEALL; call_ind(c, t_); RETCHK(0x54943fu, 0x54943cu); LOADALL; }
  /* 0054943f mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00549445 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00549447 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00549449 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54944cu; SAVEALL; call_ind(c, t_); RETCHK(0x54944cu, 0x549449u); LOADALL; }
  /* 0054944c mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0054944f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549450 call 0x57e840 */ esp -= 4; M32(esp) = 0x549455u; SAVEALL; F_0057e840(c); ABI_CHECK(0x57e840u, 0x549450u); RETCHK(0x549455u, 0x549450u); LOADALL;
  /* 00549455 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054945b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054945d push 0x1e */ { u32 v_ = 0x1eu; esp -= 4; M32(esp) = v_; }
  /* 0054945f call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549462u; SAVEALL; call_ind(c, t_); RETCHK(0x549462u, 0x54945fu); LOADALL; }
  /* 00549462 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00549468 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054946a push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 0054946c call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54946fu; SAVEALL; call_ind(c, t_); RETCHK(0x54946fu, 0x54946cu); LOADALL; }
  /* 0054946f mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00549474 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00549476 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00549478 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54947bu; SAVEALL; call_ind(c, t_); RETCHK(0x54947bu, 0x549478u); LOADALL; }
  /* 0054947b mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00549481 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00549483 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00549485 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549488u; SAVEALL; call_ind(c, t_); RETCHK(0x549488u, 0x549485u); LOADALL; }
  /* 00549488 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054948b:;
  /* 0054948b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054948c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549490(CPU *c) {
  NATIVE_HOOK(0x549490u) REGS; LOADALL;
L_00549490:;
  /* 00549490 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00549495 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549497 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00549499 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54949cu; SAVEALL; call_ind(c, t_); RETCHK(0x54949cu, 0x549499u); LOADALL; }
  /* 0054949c mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005494a2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005494a4 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005494a6 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5494a9u; SAVEALL; call_ind(c, t_); RETCHK(0x5494a9u, 0x5494a6u); LOADALL; }
  /* 005494a9 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005494af push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005494b1 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005494b3 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5494b6u; SAVEALL; call_ind(c, t_); RETCHK(0x5494b6u, 0x5494b3u); LOADALL; }
  /* 005494b6 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005494bb push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 005494bd push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005494bf call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5494c2u; SAVEALL; call_ind(c, t_); RETCHK(0x5494c2u, 0x5494bfu); LOADALL; }
  /* 005494c2 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005494c8 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005494ca push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 005494cc call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5494cfu; SAVEALL; call_ind(c, t_); RETCHK(0x5494cfu, 0x5494ccu); LOADALL; }
  /* 005494cf add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005494d2 call 0x544890 */ esp -= 4; M32(esp) = 0x5494d7u; SAVEALL; F_00544890(c); ABI_CHECK(0x544890u, 0x5494d2u); RETCHK(0x5494d7u, 0x5494d2u); LOADALL;
  /* 005494d7 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005494da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005494dc je 0x54951b */ if (ZF_) goto L_0054951b;
  /* 005494de mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005494e1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005494e3 jle 0x54951b */ if ((ZF_|LT_)) goto L_0054951b;
  /* 005494e5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005494e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005494e7 mov esi, eax */ { esi = (u32)(eax); }
  /* 005494e9 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005494ec mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005494ee mov edi, edi */ { edi = (u32)(edi); }
L_005494f0:;
  /* 005494f0 mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 005494f3 sub esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005494f6 mov ecx, dword ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); ecx = (u32)(M32(m_)); }
  /* 005494f9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005494fb lea eax, [edx + esi] */ eax = (u32)((u32)(edx + esi));
  /* 005494fe je 0x549516 */ if (ZF_) goto L_00549516;
  /* 00549500 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00549503 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549508 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054950b jne 0x549516 */ if (!ZF_) goto L_00549516;
  /* 0054950d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054950e call 0x577d50 */ esp -= 4; M32(esp) = 0x549513u; SAVEALL; F_00577d50(c); ABI_CHECK(0x577d50u, 0x54950eu); RETCHK(0x549513u, 0x54950eu); LOADALL;
  /* 00549513 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00549516:;
  /* 00549516 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00549517 jne 0x5494f0 */ if (!ZF_) goto L_005494f0;
  /* 00549519 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054951a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054951b:;
  /* 0054951b mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00549521 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00549523 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 00549525 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549528u; SAVEALL; call_ind(c, t_); RETCHK(0x549528u, 0x549525u); LOADALL; }
  /* 00549528 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054952e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00549530 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00549532 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549535u; SAVEALL; call_ind(c, t_); RETCHK(0x549535u, 0x549532u); LOADALL; }
  /* 00549535 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549538 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549540(CPU *c) {
  NATIVE_HOOK(0x549540u) REGS; LOADALL;
L_00549540:;
  /* 00549540 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549542 je 0x54954c */ if (ZF_) goto L_0054954c;
  /* 00549544 mov eax, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); eax = (u32)(M32(m_)); }
  /* 0054954a jmp 0x549552 */ goto L_00549552;
L_0054954c:;
  /* 0054954c mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
L_00549552:;
  /* 00549552 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549554 jge 0x549559 */ if (!LT_) goto L_00549559;
  /* 00549556 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549558 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00549559:;
  /* 00549559 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054955c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054955d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054955f mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00549562 mov eax, dword ptr [ebx + eax] */ { const u32 m_ = (u32)(ebx + eax); eax = (u32)(M32(m_)); }
  /* 00549565 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549567 jne 0x54956d */ if (!ZF_) goto L_0054956d;
L_00549569:;
  /* 00549569 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054956b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054956c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054956d:;
  /* 0054956d mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00549570 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549571 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549572 call 0x57ad90 */ esp -= 4; M32(esp) = 0x549577u; SAVEALL; F_0057ad90(c); ABI_CHECK(0x57ad90u, 0x549572u); RETCHK(0x549577u, 0x549572u); LOADALL;
  /* 00549577 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054957a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054957c je 0x549569 */ if (ZF_) goto L_00549569;
  /* 0054957e mov edx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00549581 mov eax, dword ptr [edx + ebx + 8] */ { const u32 m_ = (u32)(edx + ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00549585 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549586 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00549588 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054958a je 0x5495ae */ if (ZF_) goto L_005495ae;
  /* 0054958c mov eax, edx */ { eax = (u32)(edx); }
  /* 0054958e mov ecx, dword ptr [eax + ebx + 8] */ { const u32 m_ = (u32)(eax + ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00549592 mov edi, dword ptr [eax + ebx + 4] */ { const u32 m_ = (u32)(eax + ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00549596 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00549599 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054959b mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054959e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054959f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005495a0 call 0x5e8970 */ esp -= 4; M32(esp) = 0x5495a5u; SAVEALL; F_005e8970(c); ABI_CHECK(0x5e8970u, 0x5495a0u); RETCHK(0x5495a5u, 0x5495a0u); LOADALL;
  /* 005495a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005495a6 call 0x5eebd0 */ esp -= 4; M32(esp) = 0x5495abu; SAVEALL; F_005eebd0(c); ABI_CHECK(0x5eebd0u, 0x5495a6u); RETCHK(0x5495abu, 0x5495a6u); LOADALL;
  /* 005495ab add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005495ae:;
  /* 005495ae mov eax, edi */ { eax = (u32)(edi); }
  /* 005495b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005495b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005495b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005495c0(CPU *c) {
  NATIVE_HOOK(0x5495c0u) REGS; LOADALL;
L_005495c0:;
  /* 005495c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005495c1 push 0x4f */ { u32 v_ = 0x4fu; esp -= 4; M32(esp) = v_; }
  /* 005495c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005495c4 lea edi, [esi + 0x98] */ edi = (u32)((u32)(esi + 0x98u));
  /* 005495ca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005495cb call 0x5fe7ca */ esp -= 4; M32(esp) = 0x5495d0u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x5495cbu); RETCHK(0x5495d0u, 0x5495cbu); LOADALL;
  /* 005495d0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005495d2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005495d5 mov byte ptr [esi + 0xe6], 0 */ { const u32 m_ = (u32)(esi + 0xe6u); M8(m_) = (u8)(0x0u); }
  /* 005495dc lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 005495df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005495e0:;
  /* 005495e0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005495e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005495e3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005495e5 jne 0x5495e0 */ if (!ZF_) goto L_005495e0;
  /* 005495e7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005495e9 mov dl, byte ptr [eax + esi + 0x97] */ { const u32 m_ = (u32)(eax + esi + 0x97u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005495f0 mov cl, 0x5c */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x5cu) & 0xffu); }
  /* 005495f2 cmp dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005495f4 je 0x549605 */ if (ZF_) goto L_00549605;
  /* 005495f6 mov byte ptr [eax + esi + 0x98], cl */ { const u32 m_ = (u32)(eax + esi + 0x98u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005495fd mov byte ptr [eax + esi + 0x99], 0 */ { const u32 m_ = (u32)(eax + esi + 0x99u); M8(m_) = (u8)(0x0u); }
L_00549605:;
  /* 00549605 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549610(CPU *c) {
  NATIVE_HOOK(0x549610u) REGS; LOADALL;
L_00549610:;
  /* 00549610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549611 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549613 sub esp, 0x228 */ { u32 a_ = esp, b_ = 0x228u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549619 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054961e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054961f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549620 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00549623 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 00549625 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549626 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00549629 mov dword ptr [ebp - 0x210], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffdf0u); M32(m_) = (u32)(0x1u); }
  /* 00549633 mov dword ptr [ebp - 0x214], 0x19000 */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(0x19000u); }
  /* 0054963d call 0x5fe9e0 */ esp -= 4; M32(esp) = 0x549642u; SAVEALL; F_005fe9e0(c); ABI_CHECK(0x5fe9e0u, 0x54963du); RETCHK(0x549642u, 0x54963du); LOADALL;
  /* 00549642 mov esi, eax */ { esi = (u32)(eax); }
  /* 00549644 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549647 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549649 je 0x54964e */ if (ZF_) goto L_0054964e;
  /* 0054964b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054964c jmp 0x549650 */ goto L_00549650;
L_0054964e:;
  /* 0054964e mov esi, edi */ { esi = (u32)(edi); }
L_00549650:;
  /* 00549650 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00549653 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 00549658 add eax, 0x98 */ { u32 a_ = eax, b_ = 0x98u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054965d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054965e lea ecx, [ebp - 0x20c] */ ecx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00549664 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549665 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x54966au; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x549665u); RETCHK(0x54966au, 0x549665u); LOADALL;
  /* 0054966a push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054966f lea edx, [ebp - 0x20c] */ edx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00549675 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549676 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549677 call 0x5fe9b6 */ esp -= 4; M32(esp) = 0x54967cu; SAVEALL; F_005fe9b6(c); ABI_CHECK(0x5fe9b6u, 0x549677u); RETCHK(0x54967cu, 0x549677u); LOADALL;
  /* 0054967c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054967d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054967f push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00549681 mov byte ptr [ebp - 5], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)(0x0u); }
  /* 00549685 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x54968au; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x549685u); RETCHK(0x54968au, 0x549685u); LOADALL;
  /* 0054968a mov edi, eax */ { edi = (u32)(eax); }
  /* 0054968c add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054968f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549691 jne 0x5496a3 */ if (!ZF_) goto L_005496a3;
  /* 00549693 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549694 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549695 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00549698 call 0x61af31 */ esp -= 4; M32(esp) = 0x54969du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x549698u); RETCHK(0x54969du, 0x549698u); LOADALL;
  /* 0054969d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054969f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005496a0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005496a3:;
  /* 005496a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005496a4 lea eax, [ebp - 0x20c] */ eax = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 005496aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005496ab push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005496ad push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005496af call 0x5b34e0 */ esp -= 4; M32(esp) = 0x5496b4u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x5496afu); RETCHK(0x5496b4u, 0x5496afu); LOADALL;
  /* 005496b4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005496b6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005496b9 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005496bb jne 0x5496da */ if (!ZF_) goto L_005496da;
  /* 005496bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005496be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005496bf call 0x5b3410 */ esp -= 4; M32(esp) = 0x5496c4u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x5496bfu); RETCHK(0x5496c4u, 0x5496bfu); LOADALL;
  /* 005496c4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005496c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005496c8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005496c9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005496cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005496cc mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005496cf call 0x61af31 */ esp -= 4; M32(esp) = 0x5496d4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5496cfu); RETCHK(0x5496d4u, 0x5496cfu); LOADALL;
  /* 005496d4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005496d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005496d7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005496da:;
  /* 005496da push 0x19000 */ { u32 v_ = 0x19000u; esp -= 4; M32(esp) = v_; }
  /* 005496df call 0x5fe9ce */ esp -= 4; M32(esp) = 0x5496e4u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x5496dfu); RETCHK(0x5496e4u, 0x5496dfu); LOADALL;
  /* 005496e4 lea ecx, [ebp - 0x228] */ ecx = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 005496ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005496eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005496ec mov esi, eax */ { esi = (u32)(eax); }
  /* 005496ee call 0x5b3a90 */ esp -= 4; M32(esp) = 0x5496f3u; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x5496eeu); RETCHK(0x5496f3u, 0x5496eeu); LOADALL;
  /* 005496f3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005496f6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005496f8 je 0x54979f */ if (ZF_) goto L_0054979f;
  /* 005496fe mov edi, edi */ { edi = (u32)(edi); }
L_00549700:;
  /* 00549700 mov eax, dword ptr [ebp - 0x228] */ { const u32 m_ = (u32)(ebp + 0xfffffdd8u); eax = (u32)(M32(m_)); }
  /* 00549706 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549709 je 0x5497fa */ if (ZF_) goto L_005497fa;
  /* 0054970f cmp eax, 0x23 */ { u32 a_ = eax, b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549712 je 0x5497fa */ if (ZF_) goto L_005497fa;
  /* 00549718 mov edx, dword ptr [ebp - 0x224] */ { const u32 m_ = (u32)(ebp + 0xfffffddcu); edx = (u32)(M32(m_)); }
  /* 0054971e push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00549720 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 00549725 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549726 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549727 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549728 call 0x5b3830 */ esp -= 4; M32(esp) = 0x54972du; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x549728u); RETCHK(0x54972du, 0x549728u); LOADALL;
  /* 0054972d add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549730 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549732 je 0x549795 */ if (ZF_) goto L_00549795;
  /* 00549734 mov eax, dword ptr [ebp - 0x224] */ { const u32 m_ = (u32)(ebp + 0xfffffddcu); eax = (u32)(M32(m_)); }
  /* 0054973a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054973c je 0x54980a */ if (ZF_) goto L_0054980a;
  /* 00549742 cmp eax, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549748 jbe 0x54976d */ if ((CF_|ZF_)) goto L_0054976d;
  /* 0054974a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054974b call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x549750u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54974bu); RETCHK(0x549750u, 0x54974bu); LOADALL;
  /* 00549750 mov eax, dword ptr [ebp - 0x224] */ { const u32 m_ = (u32)(ebp + 0xfffffddcu); eax = (u32)(M32(m_)); }
  /* 00549756 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549757 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x54975cu; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x549757u); RETCHK(0x54975cu, 0x549757u); LOADALL;
  /* 0054975c mov esi, eax */ { esi = (u32)(eax); }
  /* 0054975e mov eax, dword ptr [ebp - 0x224] */ { const u32 m_ = (u32)(ebp + 0xfffffddcu); eax = (u32)(M32(m_)); }
  /* 00549764 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549767 mov dword ptr [ebp - 0x214], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(eax); }
L_0054976d:;
  /* 0054976d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054976f je 0x549795 */ if (ZF_) goto L_00549795;
  /* 00549771 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549772 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549773 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549774 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x549779u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x549774u); RETCHK(0x549779u, 0x549774u); LOADALL;
  /* 00549779 mov ecx, dword ptr [ebp - 0x224] */ { const u32 m_ = (u32)(ebp + 0xfffffddcu); ecx = (u32)(M32(m_)); }
  /* 0054977f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549782 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549784 jne 0x549795 */ if (!ZF_) goto L_00549795;
  /* 00549786 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549787 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549788 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549789 call 0x5b3130 */ esp -= 4; M32(esp) = 0x54978eu; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x549789u); RETCHK(0x54978eu, 0x549789u); LOADALL;
  /* 0054978e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549791 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549793 jne 0x54980a */ if (!ZF_) goto L_0054980a;
L_00549795:;
  /* 00549795 mov dword ptr [ebp - 0x210], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffdf0u); M32(m_) = (u32)(0x0u); }
L_0054979f:;
  /* 0054979f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005497a0 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5497a5u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5497a0u); RETCHK(0x5497a5u, 0x5497a0u); LOADALL;
  /* 005497a5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005497a7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005497a8 call 0x5b3410 */ esp -= 4; M32(esp) = 0x5497adu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x5497a8u); RETCHK(0x5497adu, 0x5497a8u); LOADALL;
  /* 005497ad push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005497af push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005497b0 call 0x5b3410 */ esp -= 4; M32(esp) = 0x5497b5u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x5497b0u); RETCHK(0x5497b5u, 0x5497b0u); LOADALL;
  /* 005497b5 mov esi, dword ptr [ebp - 0x210] */ { const u32 m_ = (u32)(ebp + 0xfffffdf0u); esi = (u32)(M32(m_)); }
  /* 005497bb add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005497be test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005497c0 je 0x5497e7 */ if (ZF_) goto L_005497e7;
  /* 005497c2 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005497c5 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 005497c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005497c8 call dword ptr [0x62e184] */ { const u32 m_ = (u32)(0x62e184u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5497ceu; SAVEALL; call_ind(c, t_); RETCHK(0x5497ceu, 0x5497c8u); LOADALL; }
  /* 005497ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005497cf call dword ptr [0x62e17c] */ { const u32 m_ = (u32)(0x62e17cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5497d5u; SAVEALL; call_ind(c, t_); RETCHK(0x5497d5u, 0x5497cfu); LOADALL; }
  /* 005497d5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005497d7 je 0x5497e7 */ if (ZF_) goto L_005497e7;
  /* 005497d9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005497da lea eax, [ebp - 0x20c] */ eax = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 005497e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005497e1 call dword ptr [0x62e0f4] */ { const u32 m_ = (u32)(0x62e0f4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5497e7u; SAVEALL; call_ind(c, t_); RETCHK(0x5497e7u, 0x5497e1u); LOADALL; }
L_005497e7:;
  /* 005497e7 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005497ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005497eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005497ec mov eax, esi */ { eax = (u32)(esi); }
  /* 005497ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005497ef call 0x61af31 */ esp -= 4; M32(esp) = 0x5497f4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5497efu); RETCHK(0x5497f4u, 0x5497efu); LOADALL;
  /* 005497f4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005497f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005497f7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005497fa:;
  /* 005497fa mov ecx, dword ptr [ebp - 0x224] */ { const u32 m_ = (u32)(ebp + 0xfffffddcu); ecx = (u32)(M32(m_)); }
  /* 00549800 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549801 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549802 call 0x5b3300 */ esp -= 4; M32(esp) = 0x549807u; SAVEALL; F_005b3300(c); ABI_CHECK(0x5b3300u, 0x549802u); RETCHK(0x549807u, 0x549802u); LOADALL;
  /* 00549807 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054980a:;
  /* 0054980a lea edx, [ebp - 0x228] */ edx = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 00549810 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549811 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549812 call 0x5b3a90 */ esp -= 4; M32(esp) = 0x549817u; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x549812u); RETCHK(0x549817u, 0x549812u); LOADALL;
  /* 00549817 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054981a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054981c jne 0x549700 */ if (!ZF_) goto L_00549700;
  /* 00549822 jmp 0x54979f */ goto L_0054979f;
}

void F_00549830(CPU *c) {
  NATIVE_HOOK(0x549830u) REGS; LOADALL;
L_00549830:;
  /* 00549830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549831 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549833 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549834 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00549837 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00549839 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054983b je 0x54984a */ if (ZF_) goto L_0054984a;
  /* 0054983d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00549840 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549841 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549842 call 0x4eaa80 */ esp -= 4; M32(esp) = 0x549847u; SAVEALL; F_004eaa80(c); ABI_CHECK(0x4eaa80u, 0x549842u); RETCHK(0x549847u, 0x549842u); LOADALL;
  /* 00549847 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054984a:;
  /* 0054984a mov eax, esi */ { eax = (u32)(esi); }
  /* 0054984c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054984d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054984e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549850(CPU *c) {
  NATIVE_HOOK(0x549850u) REGS; LOADALL;
L_00549850:;
  /* 00549850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549853 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00549856 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549857 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054985a mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054985d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054985e push 0x549830 */ { u32 v_ = 0x549830u; esp -= 4; M32(esp) = v_; }
  /* 00549863 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549864 call 0x57bed0 */ esp -= 4; M32(esp) = 0x549869u; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x549864u); RETCHK(0x549869u, 0x549864u); LOADALL;
  /* 00549869 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054986c mov eax, esi */ { eax = (u32)(esi); }
  /* 0054986e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054986f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549870 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549880(CPU *c) {
  NATIVE_HOOK(0x549880u) REGS; LOADALL;
L_00549880:;
  /* 00549880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549883 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00549886 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549887 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054988a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054988b push 0x549850 */ { u32 v_ = 0x549850u; esp -= 4; M32(esp) = v_; }
  /* 00549890 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549891 call 0x577da0 */ esp -= 4; M32(esp) = 0x549896u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x549891u); RETCHK(0x549896u, 0x549891u); LOADALL;
  /* 00549896 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549899 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054989b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054989c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054989d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005498a0(CPU *c) {
  NATIVE_HOOK(0x5498a0u) REGS; LOADALL;
L_005498a0:;
  /* 005498a0 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005498a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005498a4 lea edi, [esi + 0x3c] */ edi = (u32)((u32)(esi + 0x3cu));
  /* 005498a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005498a8 push 0x549830 */ { u32 v_ = 0x549830u; esp -= 4; M32(esp) = v_; }
  /* 005498ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005498ae call 0x57ee00 */ esp -= 4; M32(esp) = 0x5498b3u; SAVEALL; F_0057ee00(c); ABI_CHECK(0x57ee00u, 0x5498aeu); RETCHK(0x5498b3u, 0x5498aeu); LOADALL;
  /* 005498b3 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005498b6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005498b7 push 0x549880 */ { u32 v_ = 0x549880u; esp -= 4; M32(esp) = v_; }
  /* 005498bc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005498bd call 0x57edc0 */ esp -= 4; M32(esp) = 0x5498c2u; SAVEALL; F_0057edc0(c); ABI_CHECK(0x57edc0u, 0x5498bdu); RETCHK(0x5498c2u, 0x5498bdu); LOADALL;
  /* 005498c2 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005498c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005498c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005498d0(CPU *c) {
  NATIVE_HOOK(0x5498d0u) REGS; LOADALL;
L_005498d0:;
  /* 005498d0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005498d2 mov dword ptr [eax], 0x655064 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x655064u); }
  /* 005498d8 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005498db mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005498de mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005498e1 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005498e4 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005498e7 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005498ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005498f0(CPU *c) {
  NATIVE_HOOK(0x5498f0u) REGS; LOADALL;
L_005498f0:;
  /* 005498f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005498f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005498f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005498f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005498f6 call 0x549920 */ esp -= 4; M32(esp) = 0x5498fbu; SAVEALL; F_00549920(c); ABI_CHECK(0x549920u, 0x5498f6u); RETCHK(0x5498fbu, 0x5498f6u); LOADALL;
  /* 005498fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005498ff je 0x54990a */ if (ZF_) goto L_0054990a;
  /* 00549901 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549902 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x549907u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x549902u); RETCHK(0x549907u, 0x549902u); LOADALL;
  /* 00549907 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054990a:;
  /* 0054990a mov eax, esi */ { eax = (u32)(esi); }
  /* 0054990c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054990d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054990e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00549920(CPU *c) {
  NATIVE_HOOK(0x549920u) REGS; LOADALL;
L_00549920:;
  /* 00549920 mov dword ptr [ecx], 0x655064 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x655064u); }
  /* 00549926 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549930(CPU *c) {
  NATIVE_HOOK(0x549930u) REGS; LOADALL;
L_00549930:;
  /* 00549930 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549931 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549933 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549936 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549938 je 0x549a72 */ if (ZF_) goto L_00549a72;
  /* 0054993e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00549941 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549943 je 0x549a72 */ if (ZF_) goto L_00549a72;
  /* 00549949 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054994a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054994d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054994f mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00549952 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00549955 call 0x57d360 */ esp -= 4; M32(esp) = 0x54995au; SAVEALL; F_0057d360(c); ABI_CHECK(0x57d360u, 0x549955u); RETCHK(0x54995au, 0x549955u); LOADALL;
  /* 0054995a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054995d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054995f mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00549962 jne 0x54996b */ if (!ZF_) goto L_0054996b;
  /* 00549964 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549965 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549967 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549968 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054996b:;
  /* 0054996b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054996c lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0054996f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549970 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549971 mov dword ptr [ebp - 0x10], 0x3f66e6e7 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3f66e6e7u); }
  /* 00549978 mov dword ptr [ebp - 0xc], 0x3f6feff0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x3f6feff0u); }
  /* 0054997f mov dword ptr [ebp - 8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00549986 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0054998d call 0x57cde0 */ esp -= 4; M32(esp) = 0x549992u; SAVEALL; F_0057cde0(c); ABI_CHECK(0x57cde0u, 0x54998du); RETCHK(0x549992u, 0x54998du); LOADALL;
  /* 00549992 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549995 call 0x5ab9b0 */ esp -= 4; M32(esp) = 0x54999au; SAVEALL; F_005ab9b0(c); ABI_CHECK(0x5ab9b0u, 0x549995u); RETCHK(0x54999au, 0x549995u); LOADALL;
  /* 0054999a mov edi, eax */ { edi = (u32)(eax); }
  /* 0054999c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054999e je 0x549a68 */ if (ZF_) goto L_00549a68;
  /* 005499a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005499a6 push 0x42b40000 */ { u32 v_ = 0x42b40000u; esp -= 4; M32(esp) = v_; }
  /* 005499ab push 0x68a6cc */ { u32 v_ = 0x68a6ccu; esp -= 4; M32(esp) = v_; }
  /* 005499b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005499b1 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x5499b6u; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x5499b1u); RETCHK(0x5499b6u, 0x5499b1u); LOADALL;
  /* 005499b6 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005499b8 push 0x41a00000 */ { u32 v_ = 0x41a00000u; esp -= 4; M32(esp) = v_; }
  /* 005499bd push 0x68a6c0 */ { u32 v_ = 0x68a6c0u; esp -= 4; M32(esp) = v_; }
  /* 005499c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005499c3 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x5499c8u; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x5499c3u); RETCHK(0x5499c8u, 0x5499c3u); LOADALL;
  /* 005499c8 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005499cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005499cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005499cd call 0x5b49f0 */ esp -= 4; M32(esp) = 0x5499d2u; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x5499cdu); RETCHK(0x5499d2u, 0x5499cdu); LOADALL;
  /* 005499d2 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005499d5 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005499d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005499d9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005499da call 0x57b150 */ esp -= 4; M32(esp) = 0x5499dfu; SAVEALL; F_0057b150(c); ABI_CHECK(0x57b150u, 0x5499dau); RETCHK(0x5499dfu, 0x5499dau); LOADALL;
  /* 005499df mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005499e2 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005499e5 mov edi, 0x80 */ { edi = (u32)(0x80u); }
  /* 005499ea mov byte ptr [edx + 2], 1 */ { const u32 m_ = (u32)(edx + 0x2u); M8(m_) = (u8)(0x1u); }
  /* 005499ee call 0x5475b0 */ esp -= 4; M32(esp) = 0x5499f3u; SAVEALL; F_005475b0(c); ABI_CHECK(0x5475b0u, 0x5499eeu); RETCHK(0x5499f3u, 0x5499eeu); LOADALL;
  /* 005499f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005499f5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005499f8 je 0x549a68 */ if (ZF_) goto L_00549a68;
  /* 005499fa mov eax, edi */ { eax = (u32)(edi); }
  /* 005499fc call 0x547760 */ esp -= 4; M32(esp) = 0x549a01u; SAVEALL; F_00547760(c); ABI_CHECK(0x547760u, 0x5499fcu); RETCHK(0x549a01u, 0x5499fcu); LOADALL;
  /* 00549a01 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549a03 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00549a06 je 0x549a68 */ if (ZF_) goto L_00549a68;
  /* 00549a08 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00549a0b mov dword ptr [ecx + 0x60], eax */ { const u32 m_ = (u32)(ecx + 0x60u); M32(m_) = (u32)(eax); }
  /* 00549a0e mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00549a11 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00549a14 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549a15 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549a16 call 0x5ac470 */ esp -= 4; M32(esp) = 0x549a1bu; SAVEALL; F_005ac470(c); ABI_CHECK(0x5ac470u, 0x549a16u); RETCHK(0x549a1bu, 0x549a16u); LOADALL;
  /* 00549a1b mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00549a1e mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00549a21 call 0x547650 */ esp -= 4; M32(esp) = 0x549a26u; SAVEALL; F_00547650(c); ABI_CHECK(0x547650u, 0x549a21u); RETCHK(0x549a26u, 0x549a21u); LOADALL;
  /* 00549a26 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00549a29 push 0x41200000 */ { u32 v_ = 0x41200000u; esp -= 4; M32(esp) = v_; }
  /* 00549a2e call 0x547600 */ esp -= 4; M32(esp) = 0x549a33u; SAVEALL; F_00547600(c); ABI_CHECK(0x547600u, 0x549a2eu); RETCHK(0x549a33u, 0x549a2eu); LOADALL;
  /* 00549a33 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00549a36 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00549a39 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00549a3c mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00549a3f add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00549a42 call 0x547680 */ esp -= 4; M32(esp) = 0x549a47u; SAVEALL; F_00547680(c); ABI_CHECK(0x547680u, 0x549a42u); RETCHK(0x549a47u, 0x549a42u); LOADALL;
  /* 00549a47 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00549a4a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00549a4d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549a4e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549a4f call 0x57ad10 */ esp -= 4; M32(esp) = 0x549a54u; SAVEALL; F_0057ad10(c); ABI_CHECK(0x57ad10u, 0x549a4fu); RETCHK(0x549a54u, 0x549a4fu); LOADALL;
  /* 00549a54 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549a57 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00549a5c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00549a5d mov dword ptr [edi + 0x18], eax */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(eax); }
  /* 00549a60 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549a61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549a62 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549a64 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549a65 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00549a68:;
  /* 00549a68 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549a69 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549a6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549a6c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549a6e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549a6f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00549a72:;
  /* 00549a72 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549a74 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549a76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549a77 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}
