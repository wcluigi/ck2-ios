#include "funcs.h"

void F_10206780(CPU *c) {
  NATIVE_HOOK(0x10206780u) REGS; LOADALL;
L_10206780:;
  /* 10206780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10206783 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10206786 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206787 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10206788 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1020678b add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020678e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10206791 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10206794 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206795 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206798 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1020679b mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 1020679e call 0x10205475 */ esp -= 4; M32(esp) = 0x102067a3u; SAVEALL; F_10205475(c); ABI_CHECK(0x10205475u, 0x1020679eu); RETCHK(0x102067a3u, 0x1020679eu); LOADALL;
  /* 102067a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102067a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102067a5 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x102067a7u; SAVEALL; call_ind(c, t_); RETCHK(0x102067a7u, 0x102067a5u); LOADALL; }
  /* 102067a7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102067a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102067a9 mov ebx, ebp */ { ebx = (u32)(ebp); }
  /* 102067ab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102067ac mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 102067af push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102067b0 mov ebp, ebx */ { ebp = (u32)(ebx); }
  /* 102067b2 cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102067b8 jne 0x102067bf */ if (!ZF_) goto L_102067bf;
  /* 102067ba mov ecx, 2 */ { ecx = (u32)(0x2u); }
L_102067bf:;
  /* 102067bf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102067c0 call 0x10205475 */ esp -= 4; M32(esp) = 0x102067c5u; SAVEALL; F_10205475(c); ABI_CHECK(0x10205475u, 0x102067c0u); RETCHK(0x102067c5u, 0x102067c0u); LOADALL;
  /* 102067c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102067c6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102067c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102067c8 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102067c9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102067cc(CPU *c) {
  NATIVE_HOOK(0x102067ccu) REGS; LOADALL;
L_102067cc:;
  /* 102067cc push 0x1020b4b4 */ { u32 v_ = 0x1020b4b4u; esp -= 4; M32(esp) = v_; }
  /* 102067d1 call dword ptr [0x1020b050] */ { const u32 m_ = (u32)(0x1020b050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102067d7u; SAVEALL; call_ind(c, t_); RETCHK(0x102067d7u, 0x102067d1u); LOADALL; }
  /* 102067d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102067d9 je 0x102067f1 */ if (ZF_) goto L_102067f1;
  /* 102067db push 0x1020b4a4 */ { u32 v_ = 0x1020b4a4u; esp -= 4; M32(esp) = v_; }
  /* 102067e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102067e1 call dword ptr [0x1020b04c] */ { const u32 m_ = (u32)(0x1020b04cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102067e7u; SAVEALL; call_ind(c, t_); RETCHK(0x102067e7u, 0x102067e1u); LOADALL; }
  /* 102067e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102067e9 je 0x102067f1 */ if (ZF_) goto L_102067f1;
  /* 102067eb push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102067ef call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x102067f1u; SAVEALL; call_ind(c, t_); RETCHK(0x102067f1u, 0x102067efu); LOADALL; }
L_102067f1:;
  /* 102067f1 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102067f5 call dword ptr [0x1020b004] */ { const u32 m_ = (u32)(0x1020b004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102067fbu; SAVEALL; call_ind(c, t_); RETCHK(0x102067fbu, 0x102067f5u); LOADALL; }
}

void F_102067fc(CPU *c) {
  NATIVE_HOOK(0x102067fcu) REGS; LOADALL;
L_102067fc:;
  /* 102067fc push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 102067fe call 0x10207663 */ esp -= 4; M32(esp) = 0x10206803u; SAVEALL; F_10207663(c); ABI_CHECK(0x10207663u, 0x102067feu); RETCHK(0x10206803u, 0x102067feu); LOADALL;
  /* 10206803 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206804 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206805(CPU *c) {
  NATIVE_HOOK(0x10206805u) REGS; LOADALL;
L_10206805:;
  /* 10206805 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10206807 call 0x102075ae */ esp -= 4; M32(esp) = 0x1020680cu; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10206807u); RETCHK(0x1020680cu, 0x10206807u); LOADALL;
  /* 1020680c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020680d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020680e(CPU *c) {
  NATIVE_HOOK(0x1020680eu) REGS; LOADALL;
L_1020680e:;
  /* 1020680e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020680f mov esi, eax */ { esi = (u32)(eax); }
  /* 10206811 jmp 0x1020681e */ goto L_1020681e;
L_10206813:;
  /* 10206813 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10206815 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206817 je 0x1020681b */ if (ZF_) goto L_1020681b;
  /* 10206819 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1020681bu; SAVEALL; call_ind(c, t_); RETCHK(0x1020681bu, 0x10206819u); LOADALL; }
L_1020681b:;
  /* 1020681b add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_1020681e:;
  /* 1020681e cmp esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206822 jb 0x10206813 */ if (CF_) goto L_10206813;
  /* 10206824 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10206825 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206826(CPU *c) {
  NATIVE_HOOK(0x10206826u) REGS; LOADALL;
L_10206826:;
  /* 10206826 mov eax, dword ptr [0x1020e170] */ { const u32 m_ = (u32)(0x1020e170u); eax = (u32)(M32(m_)); }
  /* 1020682b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020682d je 0x10206836 */ if (ZF_) goto L_10206836;
  /* 1020682f push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206833 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10206835u; SAVEALL; call_ind(c, t_); RETCHK(0x10206835u, 0x10206833u); LOADALL; }
  /* 10206835 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10206836:;
  /* 10206836 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206837 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206838 mov ecx, 0x1020d00c */ { ecx = (u32)(0x1020d00cu); }
  /* 1020683d mov edi, 0x1020d01c */ { edi = (u32)(0x1020d01cu); }
  /* 10206842 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206844 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206846 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10206848 jae 0x10206861 */ if (!CF_) goto L_10206861;
L_1020684a:;
  /* 1020684a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020684c jne 0x1020688d */ if (!ZF_) goto L_1020688d;
  /* 1020684e mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10206850 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206852 je 0x10206856 */ if (ZF_) goto L_10206856;
  /* 10206854 call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10206856u; SAVEALL; call_ind(c, t_); RETCHK(0x10206856u, 0x10206854u); LOADALL; }
L_10206856:;
  /* 10206856 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10206859 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020685b jb 0x1020684a */ if (CF_) goto L_1020684a;
  /* 1020685d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020685f jne 0x1020688d */ if (!ZF_) goto L_1020688d;
L_10206861:;
  /* 10206861 push 0x102070b3 */ { u32 v_ = 0x102070b3u; esp -= 4; M32(esp) = v_; }
  /* 10206866 call 0x102092b3 */ esp -= 4; M32(esp) = 0x1020686bu; SAVEALL; F_102092b3(c); ABI_CHECK(0x102092b3u, 0x10206866u); RETCHK(0x1020686bu, 0x10206866u); LOADALL;
  /* 1020686b mov esi, 0x1020d000 */ { esi = (u32)(0x1020d000u); }
  /* 10206870 mov eax, esi */ { eax = (u32)(esi); }
  /* 10206872 mov edi, 0x1020d008 */ { edi = (u32)(0x1020d008u); }
  /* 10206877 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206879 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020687a jae 0x1020688b */ if (!CF_) goto L_1020688b;
L_1020687c:;
  /* 1020687c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 1020687e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206880 je 0x10206884 */ if (ZF_) goto L_10206884;
  /* 10206882 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10206884u; SAVEALL; call_ind(c, t_); RETCHK(0x10206884u, 0x10206882u); LOADALL; }
L_10206884:;
  /* 10206884 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10206887 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206889 jb 0x1020687c */ if (CF_) goto L_1020687c;
L_1020688b:;
  /* 1020688b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1020688d:;
  /* 1020688d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020688e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020688f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206890(CPU *c) {
  NATIVE_HOOK(0x10206890u) REGS; LOADALL;
L_10206890:;
  /* 10206890 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10206892 push 0x1020b4c0 */ { u32 v_ = 0x1020b4c0u; esp -= 4; M32(esp) = v_; }
  /* 10206897 call 0x10205950 */ esp -= 4; M32(esp) = 0x1020689cu; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10206897u); RETCHK(0x1020689cu, 0x10206897u); LOADALL;
  /* 1020689c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1020689e call 0x10207663 */ esp -= 4; M32(esp) = 0x102068a3u; SAVEALL; F_10207663(c); ABI_CHECK(0x10207663u, 0x1020689eu); RETCHK(0x102068a3u, 0x1020689eu); LOADALL;
  /* 102068a3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102068a4 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 102068a6 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 102068a9 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102068ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102068ac cmp dword ptr [0x1020d990], esi */ { const u32 m_ = (u32)(0x1020d990u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102068b2 jne 0x102068c4 */ if (!ZF_) goto L_102068c4;
  /* 102068b4 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102068b7 call dword ptr [0x1020b058] */ { const u32 m_ = (u32)(0x1020b058u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102068bdu; SAVEALL; call_ind(c, t_); RETCHK(0x102068bdu, 0x102068b7u); LOADALL; }
  /* 102068bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102068be call dword ptr [0x1020b054] */ { const u32 m_ = (u32)(0x1020b054u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102068c4u; SAVEALL; call_ind(c, t_); RETCHK(0x102068c4u, 0x102068beu); LOADALL; }
L_102068c4:;
  /* 102068c4 mov dword ptr [0x1020d98c], esi */ { const u32 m_ = (u32)(0x1020d98cu); M32(m_) = (u32)(esi); }
  /* 102068ca mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102068cd mov byte ptr [0x1020d988], al */ { const u32 m_ = (u32)(0x1020d988u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102068d2 cmp dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102068d5 jne 0x1020690e */ if (!ZF_) goto L_1020690e;
  /* 102068d7 cmp dword ptr [0x1020e168], edi */ { const u32 m_ = (u32)(0x1020e168u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102068dd je 0x102068fe */ if (ZF_) goto L_102068fe;
L_102068df:;
  /* 102068df mov eax, dword ptr [0x1020e164] */ { const u32 m_ = (u32)(0x1020e164u); eax = (u32)(M32(m_)); }
  /* 102068e4 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 102068e7 mov dword ptr [0x1020e164], eax */ { const u32 m_ = (u32)(0x1020e164u); M32(m_) = (u32)(eax); }
  /* 102068ec cmp eax, dword ptr [0x1020e168] */ { const u32 m_ = (u32)(0x1020e168u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102068f2 jb 0x102068fe */ if (CF_) goto L_102068fe;
  /* 102068f4 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 102068f6 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102068f8 je 0x102068df */ if (ZF_) goto L_102068df;
  /* 102068fa call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x102068fcu; SAVEALL; call_ind(c, t_); RETCHK(0x102068fcu, 0x102068fau); LOADALL; }
  /* 102068fc jmp 0x102068df */ goto L_102068df;
L_102068fe:;
  /* 102068fe push 0x1020d024 */ { u32 v_ = 0x1020d024u; esp -= 4; M32(esp) = v_; }
  /* 10206903 mov eax, 0x1020d020 */ { eax = (u32)(0x1020d020u); }
  /* 10206908 call 0x1020680e */ esp -= 4; M32(esp) = 0x1020690du; SAVEALL; F_1020680e(c); ABI_CHECK(0x1020680eu, 0x10206908u); RETCHK(0x1020690du, 0x10206908u); LOADALL;
  /* 1020690d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020690e:;
  /* 1020690e push 0x1020d030 */ { u32 v_ = 0x1020d030u; esp -= 4; M32(esp) = v_; }
  /* 10206913 mov eax, 0x1020d028 */ { eax = (u32)(0x1020d028u); }
  /* 10206918 call 0x1020680e */ esp -= 4; M32(esp) = 0x1020691du; SAVEALL; F_1020680e(c); ABI_CHECK(0x1020680eu, 0x10206918u); RETCHK(0x1020691du, 0x10206918u); LOADALL;
  /* 1020691d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020691e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206922 call 0x1020693f */ esp -= 4; M32(esp) = 0x10206927u; SAVEALL; F_1020693f(c); ABI_CHECK(0x1020693fu, 0x10206922u); RETCHK(0x10206927u, 0x10206922u); LOADALL;
  /* 10206927 cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020692a jne 0x1020694d */ if (!ZF_) goto L_1020694d;
  /* 1020692c mov dword ptr [0x1020d990], esi */ { const u32 m_ = (u32)(0x1020d990u); M32(m_) = (u32)(esi); }
  /* 10206932 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206935 call 0x102067cc */ esp -= 4; M32(esp) = 0x1020693au; SAVEALL; F_102067cc(c); ABI_CHECK(0x102067ccu, 0x10206935u); RETCHK(0x1020693au, 0x10206935u); LOADALL;
  /* 1020693a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1020693c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1020693e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020693f cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206942 je 0x1020694c */ if (ZF_) goto L_1020694c;
  /* 10206944 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10206946 call 0x102075ae */ esp -= 4; M32(esp) = 0x1020694bu; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10206946u); RETCHK(0x1020694bu, 0x10206946u); LOADALL;
  /* 1020694b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020694c:;
  /* 1020694c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020694d:;
  /* 1020694d call 0x1020598b */ esp -= 4; M32(esp) = 0x10206952u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x1020694du); RETCHK(0x10206952u, 0x1020694du); LOADALL;
  /* 10206952 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020693a(CPU *c) {
  NATIVE_HOOK(0x1020693au) REGS; LOADALL;
L_1020693a:;
  /* 1020693a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1020693c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1020693e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020693f cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206942 je 0x1020694c */ if (ZF_) goto L_1020694c;
  /* 10206944 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10206946 call 0x102075ae */ esp -= 4; M32(esp) = 0x1020694bu; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10206946u); RETCHK(0x1020694bu, 0x10206946u); LOADALL;
  /* 1020694b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020694c:;
  /* 1020694c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020693f(CPU *c) {
  NATIVE_HOOK(0x1020693fu) REGS; LOADALL;
L_1020693f:;
  /* 1020693f cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206942 je 0x1020694c */ if (ZF_) goto L_1020694c;
  /* 10206944 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10206946 call 0x102075ae */ esp -= 4; M32(esp) = 0x1020694bu; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10206946u); RETCHK(0x1020694bu, 0x10206946u); LOADALL;
  /* 1020694b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020694c:;
  /* 1020694c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206953(CPU *c) {
  NATIVE_HOOK(0x10206953u) REGS; LOADALL;
L_10206953:;
  /* 10206953 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10206955 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10206957 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020695b call 0x10206890 */ esp -= 4; M32(esp) = 0x10206960u; SAVEALL; F_10206890(c); ABI_CHECK(0x10206890u, 0x1020695bu); RETCHK(0x10206960u, 0x1020695bu); LOADALL;
  /* 10206960 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10206963 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206964(CPU *c) {
  NATIVE_HOOK(0x10206964u) REGS; LOADALL;
L_10206964:;
  /* 10206964 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10206966 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10206968 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1020696a call 0x10206890 */ esp -= 4; M32(esp) = 0x1020696fu; SAVEALL; F_10206890(c); ABI_CHECK(0x10206890u, 0x1020696au); RETCHK(0x1020696fu, 0x1020696au); LOADALL;
  /* 1020696f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10206972 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206973(CPU *c) {
  NATIVE_HOOK(0x10206973u) REGS; LOADALL;
L_10206973:;
  /* 10206973 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10206975 push 0x1020b4d0 */ { u32 v_ = 0x1020b4d0u; esp -= 4; M32(esp) = v_; }
  /* 1020697a call 0x10205950 */ esp -= 4; M32(esp) = 0x1020697fu; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x1020697au); RETCHK(0x1020697fu, 0x1020697au); LOADALL;
  /* 1020697f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10206982 imul esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); s64 p_ = (s64)(s32)esi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10206986 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10206989 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020698b jne 0x1020698e */ if (!ZF_) goto L_1020698e;
  /* 1020698d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1020698e:;
  /* 1020698e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10206990 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 10206993 cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206996 ja 0x102069fd */ if (!(CF_|ZF_)) goto L_102069fd;
  /* 10206998 cmp dword ptr [0x1020e040], 3 */ { const u32 m_ = (u32)(0x1020e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020699f jne 0x102069e8 */ if (!ZF_) goto L_102069e8;
  /* 102069a1 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102069a4 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102069a7 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 102069aa mov ebx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ebx = (u32)(M32(m_)); }
  /* 102069ad cmp ebx, dword ptr [0x1020e02c] */ { const u32 m_ = (u32)(0x1020e02cu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102069b3 ja 0x102069e8 */ if (!(CF_|ZF_)) goto L_102069e8;
  /* 102069b5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 102069b7 call 0x10207663 */ esp -= 4; M32(esp) = 0x102069bcu; SAVEALL; F_10207663(c); ABI_CHECK(0x10207663u, 0x102069b7u); RETCHK(0x102069bcu, 0x102069b7u); LOADALL;
  /* 102069bc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102069bd and dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102069c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102069c1 call 0x10207ebb */ esp -= 4; M32(esp) = 0x102069c6u; SAVEALL; F_10207ebb(c); ABI_CHECK(0x10207ebbu, 0x102069c1u); RETCHK(0x102069c6u, 0x102069c1u); LOADALL;
  /* 102069c6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102069c7 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 102069ca or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102069ce call 0x10206a1d */ esp -= 4; M32(esp) = 0x102069d3u; SAVEALL; F_10206a1d(c); ABI_CHECK(0x10206a1du, 0x102069ceu); RETCHK(0x102069d3u, 0x102069ceu); LOADALL;
  /* 102069d3 mov edi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 102069d6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102069d8 je 0x102069ec */ if (ZF_) goto L_102069ec;
  /* 102069da push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102069dd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102069df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102069e0 call 0x102092d0 */ esp -= 4; M32(esp) = 0x102069e5u; SAVEALL; F_102092d0(c); ABI_CHECK(0x102092d0u, 0x102069e0u); RETCHK(0x102069e5u, 0x102069e0u); LOADALL;
  /* 102069e5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_102069e8:;
  /* 102069e8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102069ea jne 0x10206a26 */ if (!ZF_) goto L_10206a26;
L_102069ec:;
  /* 102069ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102069ed push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 102069ef push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102069f5 call dword ptr [0x1020b030] */ { const u32 m_ = (u32)(0x1020b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102069fbu; SAVEALL; call_ind(c, t_); RETCHK(0x102069fbu, 0x102069f5u); LOADALL; }
  /* 102069fb mov edi, eax */ { edi = (u32)(eax); }
L_102069fd:;
  /* 102069fd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102069ff jne 0x10206a26 */ if (!ZF_) goto L_10206a26;
  /* 10206a01 cmp dword ptr [0x1020dc60], edi */ { const u32 m_ = (u32)(0x1020dc60u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206a07 je 0x10206a26 */ if (ZF_) goto L_10206a26;
  /* 10206a09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206a0a call 0x10208664 */ esp -= 4; M32(esp) = 0x10206a0fu; SAVEALL; F_10208664(c); ABI_CHECK(0x10208664u, 0x10206a0au); RETCHK(0x10206a0fu, 0x10206a0au); LOADALL;
  /* 10206a0f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206a10 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206a12 jne 0x1020698e */ if (!ZF_) goto L_1020698e;
  /* 10206a18 jmp 0x10206a28 */ goto L_10206a28;
L_10206a26:;
  /* 10206a26 mov eax, edi */ { eax = (u32)(edi); }
L_10206a28:;
  /* 10206a28 call 0x1020598b */ esp -= 4; M32(esp) = 0x10206a2du; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10206a28u); RETCHK(0x10206a2du, 0x10206a28u); LOADALL;
  /* 10206a2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206a1a(CPU *c) {
  NATIVE_HOOK(0x10206a1au) REGS; LOADALL;
L_10206a1a:;
  /* 10206a1a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10206a1d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10206a1f call 0x102075ae */ esp -= 4; M32(esp) = 0x10206a24u; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10206a1fu); RETCHK(0x10206a24u, 0x10206a1fu); LOADALL;
  /* 10206a24 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206a25 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206a1d(CPU *c) {
  NATIVE_HOOK(0x10206a1du) REGS; LOADALL;
L_10206a1d:;
  /* 10206a1d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10206a1f call 0x102075ae */ esp -= 4; M32(esp) = 0x10206a24u; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10206a1fu); RETCHK(0x10206a24u, 0x10206a1fu); LOADALL;
  /* 10206a24 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206a25 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206a2e(CPU *c) {
  NATIVE_HOOK(0x10206a2eu) REGS; LOADALL;
L_10206a2e:;
  /* 10206a2e sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10206a31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206a32 mov ebx, 0x480 */ { ebx = (u32)(0x480u); }
  /* 10206a37 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206a38 call 0x10205b4c */ esp -= 4; M32(esp) = 0x10206a3du; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x10206a38u); RETCHK(0x10206a3du, 0x10206a38u); LOADALL;
  /* 10206a3d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206a3f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206a40 jne 0x10206a4a */ if (!ZF_) goto L_10206a4a;
  /* 10206a42 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206a45 jmp 0x10206c27 */ goto L_10206c27;
L_10206a4a:;
  /* 10206a4a mov dword ptr [0x1020e060], eax */ { const u32 m_ = (u32)(0x1020e060u); M32(m_) = (u32)(eax); }
  /* 10206a4f mov dword ptr [0x1020e044], 0x20 */ { const u32 m_ = (u32)(0x1020e044u); M32(m_) = (u32)(0x20u); }
  /* 10206a59 lea ecx, [eax + 0x480] */ ecx = (u32)((u32)(eax + 0x480u));
  /* 10206a5f jmp 0x10206a7f */ goto L_10206a7f;
L_10206a61:;
  /* 10206a61 or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206a64 and dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206a68 mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 10206a6c mov byte ptr [eax + 5], 0xa */ { const u32 m_ = (u32)(eax + 0x5u); M8(m_) = (u8)(0xau); }
  /* 10206a70 mov ecx, dword ptr [0x1020e060] */ { const u32 m_ = (u32)(0x1020e060u); ecx = (u32)(M32(m_)); }
  /* 10206a76 add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10206a79 add ecx, 0x480 */ { u32 a_ = ecx, b_ = 0x480u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_10206a7f:;
  /* 10206a7f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206a81 jb 0x10206a61 */ if (CF_) goto L_10206a61;
  /* 10206a83 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206a84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206a85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206a86 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10206a8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206a8b call dword ptr [0x1020b068] */ { const u32 m_ = (u32)(0x1020b068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10206a91u; SAVEALL; call_ind(c, t_); RETCHK(0x10206a91u, 0x10206a8bu); LOADALL; }
  /* 10206a91 cmp word ptr [esp + 0x46], 0 */ { const u32 m_ = (u32)(esp + 0x46u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10206a97 je 0x10206b86 */ if (ZF_) goto L_10206b86;
  /* 10206a9d mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 10206aa1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206aa3 je 0x10206b86 */ if (ZF_) goto L_10206b86;
  /* 10206aa9 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 10206aab lea ebp, [eax + 4] */ ebp = (u32)((u32)(eax + 0x4u));
  /* 10206aae lea eax, [edi + ebp] */ eax = (u32)((u32)(edi + ebp));
  /* 10206ab1 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10206ab5 mov eax, 0x800 */ { eax = (u32)(0x800u); }
  /* 10206aba cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206abc jl 0x10206ac0 */ if (LT_) goto L_10206ac0;
  /* 10206abe mov edi, eax */ { edi = (u32)(eax); }
L_10206ac0:;
  /* 10206ac0 cmp dword ptr [0x1020e044], edi */ { const u32 m_ = (u32)(0x1020e044u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206ac6 jge 0x10206b16 */ if (!LT_) goto L_10206b16;
  /* 10206ac8 mov esi, 0x1020e064 */ { esi = (u32)(0x1020e064u); }
L_10206acd:;
  /* 10206acd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206ace call 0x10205b4c */ esp -= 4; M32(esp) = 0x10206ad3u; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x10206aceu); RETCHK(0x10206ad3u, 0x10206aceu); LOADALL;
  /* 10206ad3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206ad5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206ad6 je 0x10206b10 */ if (ZF_) goto L_10206b10;
  /* 10206ad8 add dword ptr [0x1020e044], 0x20 */ { const u32 m_ = (u32)(0x1020e044u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206adf mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10206ae1 lea ecx, [eax + 0x480] */ ecx = (u32)((u32)(eax + 0x480u));
  /* 10206ae7 jmp 0x10206aff */ goto L_10206aff;
L_10206ae9:;
  /* 10206ae9 or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206aec and dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206af0 mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 10206af4 mov byte ptr [eax + 5], 0xa */ { const u32 m_ = (u32)(eax + 0x5u); M8(m_) = (u8)(0xau); }
  /* 10206af8 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10206afa add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10206afd add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_10206aff:;
  /* 10206aff cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206b01 jb 0x10206ae9 */ if (CF_) goto L_10206ae9;
  /* 10206b03 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10206b06 cmp dword ptr [0x1020e044], edi */ { const u32 m_ = (u32)(0x1020e044u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206b0c jl 0x10206acd */ if (LT_) goto L_10206acd;
  /* 10206b0e jmp 0x10206b16 */ goto L_10206b16;
L_10206b10:;
  /* 10206b10 mov edi, dword ptr [0x1020e044] */ { const u32 m_ = (u32)(0x1020e044u); edi = (u32)(M32(m_)); }
L_10206b16:;
  /* 10206b16 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10206b18 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206b1a jle 0x10206b86 */ if ((ZF_|LT_)) goto L_10206b86;
L_10206b1c:;
  /* 10206b1c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10206b20 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10206b22 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206b25 je 0x10206b7b */ if (ZF_) goto L_10206b7b;
  /* 10206b27 mov cl, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206b2a test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10206b2d je 0x10206b7b */ if (ZF_) goto L_10206b7b;
  /* 10206b2f test cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10206b32 jne 0x10206b3f */ if (!ZF_) goto L_10206b3f;
  /* 10206b34 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206b35 call dword ptr [0x1020b064] */ { const u32 m_ = (u32)(0x1020b064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10206b3bu; SAVEALL; call_ind(c, t_); RETCHK(0x10206b3bu, 0x10206b35u); LOADALL; }
  /* 10206b3b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206b3d je 0x10206b7b */ if (ZF_) goto L_10206b7b;
L_10206b3f:;
  /* 10206b3f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10206b41 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10206b43 and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206b46 lea eax, [eax + eax*8] */ eax = (u32)((u32)(eax + eax * 8u));
  /* 10206b49 sar ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10206b4c mov ecx, dword ptr [ecx*4 + 0x1020e060] */ { const u32 m_ = (u32)(ecx * 4u + 0x1020e060u); ecx = (u32)(M32(m_)); }
  /* 10206b53 lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 10206b56 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10206b5a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10206b5c mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10206b5e mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206b61 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10206b64 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 10206b67 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 10206b6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206b6d call 0x10209340 */ esp -= 4; M32(esp) = 0x10206b72u; SAVEALL; F_10209340(c); ABI_CHECK(0x10209340u, 0x10206b6du); RETCHK(0x10206b72u, 0x10206b6du); LOADALL;
  /* 10206b72 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206b74 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206b75 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206b76 je 0x10206ba6 */ if (ZF_) goto L_10206ba6;
  /* 10206b78 inc dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206b7b:;
  /* 10206b7b add dword ptr [esp + 0x10], 4 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206b80 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206b81 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206b82 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206b84 jl 0x10206b1c */ if (LT_) goto L_10206b1c;
L_10206b86:;
  /* 10206b86 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_10206b88:;
  /* 10206b88 mov ecx, dword ptr [0x1020e060] */ { const u32 m_ = (u32)(0x1020e060u); ecx = (u32)(M32(m_)); }
  /* 10206b8e lea eax, [ebx + ebx*8] */ eax = (u32)((u32)(ebx + ebx * 8u));
  /* 10206b91 lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 10206b94 cmp dword ptr [esi], -1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206b97 jne 0x10206c08 */ if (!ZF_) goto L_10206c08;
  /* 10206b99 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206b9b mov byte ptr [esi + 4], 0x81 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x81u); }
  /* 10206b9f jne 0x10206bab */ if (!ZF_) goto L_10206bab;
  /* 10206ba1 push -0xa */ { u32 v_ = 0xfffffff6u; esp -= 4; M32(esp) = v_; }
  /* 10206ba3 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10206ba4 jmp 0x10206bb5 */ goto L_10206bb5;
L_10206ba6:;
  /* 10206ba6 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206ba9 jmp 0x10206c24 */ goto L_10206c24;
L_10206bab:;
  /* 10206bab mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10206bad dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10206bae neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10206bb0 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10206bb2 add eax, -0xb */ { u32 a_ = eax, b_ = 0xfffffff5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10206bb5:;
  /* 10206bb5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206bb6 call dword ptr [0x1020b060] */ { const u32 m_ = (u32)(0x1020b060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10206bbcu; SAVEALL; call_ind(c, t_); RETCHK(0x10206bbcu, 0x10206bb6u); LOADALL; }
  /* 10206bbc mov edi, eax */ { edi = (u32)(eax); }
  /* 10206bbe cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206bc1 je 0x10206c02 */ if (ZF_) goto L_10206c02;
  /* 10206bc3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206bc4 call dword ptr [0x1020b064] */ { const u32 m_ = (u32)(0x1020b064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10206bcau; SAVEALL; call_ind(c, t_); RETCHK(0x10206bcau, 0x10206bc4u); LOADALL; }
  /* 10206bca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206bcc je 0x10206c02 */ if (ZF_) goto L_10206c02;
  /* 10206bce and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206bd3 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206bd6 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10206bd8 jne 0x10206be0 */ if (!ZF_) goto L_10206be0;
  /* 10206bda or byte ptr [esi + 4], 0x40 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10206bde jmp 0x10206be9 */ goto L_10206be9;
L_10206be0:;
  /* 10206be0 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206be3 jne 0x10206be9 */ if (!ZF_) goto L_10206be9;
  /* 10206be5 or byte ptr [esi + 4], 8 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_10206be9:;
  /* 10206be9 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 10206bec push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 10206bf1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206bf2 call 0x10209340 */ esp -= 4; M32(esp) = 0x10206bf7u; SAVEALL; F_10209340(c); ABI_CHECK(0x10209340u, 0x10206bf2u); RETCHK(0x10206bf7u, 0x10206bf2u); LOADALL;
  /* 10206bf7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206bf9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206bfa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206bfb je 0x10206ba6 */ if (ZF_) goto L_10206ba6;
  /* 10206bfd inc dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206c00 jmp 0x10206c0c */ goto L_10206c0c;
L_10206c02:;
  /* 10206c02 or byte ptr [esi + 4], 0x40 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10206c06 jmp 0x10206c0c */ goto L_10206c0c;
L_10206c08:;
  /* 10206c08 or byte ptr [esi + 4], 0x80 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_10206c0c:;
  /* 10206c0c inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206c0d cmp ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206c10 jl 0x10206b88 */ if (LT_) goto L_10206b88;
  /* 10206c16 push dword ptr [0x1020e044] */ { const u32 m_ = (u32)(0x1020e044u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206c1c call dword ptr [0x1020b05c] */ { const u32 m_ = (u32)(0x1020b05cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10206c22u; SAVEALL; call_ind(c, t_); RETCHK(0x10206c22u, 0x10206c1cu); LOADALL; }
  /* 10206c22 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10206c24:;
  /* 10206c24 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10206c25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10206c26 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10206c27:;
  /* 10206c27 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10206c28 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10206c2b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206c2c(CPU *c) {
  NATIVE_HOOK(0x10206c2cu) REGS; LOADALL;
L_10206c2c:;
  /* 10206c2c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206c2d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206c2e mov esi, 0x1020e060 */ { esi = (u32)(0x1020e060u); }
L_10206c33:;
  /* 10206c33 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 10206c35 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206c37 je 0x10206c6a */ if (ZF_) goto L_10206c6a;
  /* 10206c39 lea eax, [edi + 0x480] */ eax = (u32)((u32)(edi + 0x480u));
  /* 10206c3f jmp 0x10206c5b */ goto L_10206c5b;
L_10206c41:;
  /* 10206c41 cmp dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206c45 je 0x10206c51 */ if (ZF_) goto L_10206c51;
  /* 10206c47 lea eax, [edi + 0xc] */ eax = (u32)((u32)(edi + 0xcu));
  /* 10206c4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206c4b call dword ptr [0x1020b06c] */ { const u32 m_ = (u32)(0x1020b06cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10206c51u; SAVEALL; call_ind(c, t_); RETCHK(0x10206c51u, 0x10206c4bu); LOADALL; }
L_10206c51:;
  /* 10206c51 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10206c53 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10206c56 add eax, 0x480 */ { u32 a_ = eax, b_ = 0x480u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10206c5b:;
  /* 10206c5b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206c5d jb 0x10206c41 */ if (CF_) goto L_10206c41;
  /* 10206c5f push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206c61 call 0x1020572e */ esp -= 4; M32(esp) = 0x10206c66u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10206c61u); RETCHK(0x10206c66u, 0x10206c61u); LOADALL;
  /* 10206c66 and dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206c69 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10206c6a:;
  /* 10206c6a add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10206c6d cmp esi, 0x1020e160 */ { u32 a_ = esi, b_ = 0x1020e160u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206c73 jl 0x10206c33 */ if (LT_) goto L_10206c33;
  /* 10206c75 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10206c76 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10206c77 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206c78(CPU *c) {
  NATIVE_HOOK(0x10206c78u) REGS; LOADALL;
L_10206c78:;
  /* 10206c78 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206c79 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10206c7b cmp dword ptr [0x1020e16c], ebx */ { const u32 m_ = (u32)(0x1020e16cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206c81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206c82 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206c83 jne 0x10206c8a */ if (!ZF_) goto L_10206c8a;
  /* 10206c85 call 0x1020919d */ esp -= 4; M32(esp) = 0x10206c8au; SAVEALL; F_1020919d(c); ABI_CHECK(0x1020919du, 0x10206c85u); RETCHK(0x10206c8au, 0x10206c85u); LOADALL;
L_10206c8a:;
  /* 10206c8a mov esi, dword ptr [0x1020d928] */ { const u32 m_ = (u32)(0x1020d928u); esi = (u32)(M32(m_)); }
  /* 10206c90 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10206c92 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206c94 jne 0x10206ca8 */ if (!ZF_) goto L_10206ca8;
  /* 10206c96 jmp 0x10206cc8 */ goto L_10206cc8;
L_10206c98:;
  /* 10206c98 cmp al, 0x3d */ { u32 a_ = (eax & 0xffu), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206c9a je 0x10206c9d */ if (ZF_) goto L_10206c9d;
  /* 10206c9c inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206c9d:;
  /* 10206c9d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206c9e call 0x102083b0 */ esp -= 4; M32(esp) = 0x10206ca3u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x10206c9eu); RETCHK(0x10206ca3u, 0x10206c9eu); LOADALL;
  /* 10206ca3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206ca4 lea esi, [esi + eax + 1] */ esi = (u32)((u32)(esi + eax + 0x1u));
L_10206ca8:;
  /* 10206ca8 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206caa cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206cac jne 0x10206c98 */ if (!ZF_) goto L_10206c98;
  /* 10206cae lea eax, [edi*4 + 4] */ eax = (u32)((u32)(edi * 4u + 0x4u));
  /* 10206cb5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206cb6 call 0x10205b4c */ esp -= 4; M32(esp) = 0x10206cbbu; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x10206cb6u); RETCHK(0x10206cbbu, 0x10206cb6u); LOADALL;
  /* 10206cbb mov edi, eax */ { edi = (u32)(eax); }
  /* 10206cbd cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206cbf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206cc0 mov dword ptr [0x1020d970], edi */ { const u32 m_ = (u32)(0x1020d970u); M32(m_) = (u32)(edi); }
  /* 10206cc6 jne 0x10206ccd */ if (!ZF_) goto L_10206ccd;
L_10206cc8:;
  /* 10206cc8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206ccb jmp 0x10206d25 */ goto L_10206d25;
L_10206ccd:;
  /* 10206ccd mov esi, dword ptr [0x1020d928] */ { const u32 m_ = (u32)(0x1020d928u); esi = (u32)(M32(m_)); }
  /* 10206cd3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206cd4 jmp 0x10206d00 */ goto L_10206d00;
L_10206cd6:;
  /* 10206cd6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206cd7 call 0x102083b0 */ esp -= 4; M32(esp) = 0x10206cdcu; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x10206cd7u); RETCHK(0x10206cdcu, 0x10206cd7u); LOADALL;
  /* 10206cdc mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10206cde inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206cdf cmp byte ptr [esi], 0x3d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206ce2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206ce3 je 0x10206cfe */ if (ZF_) goto L_10206cfe;
  /* 10206ce5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206ce6 call 0x10205b4c */ esp -= 4; M32(esp) = 0x10206cebu; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x10206ce6u); RETCHK(0x10206cebu, 0x10206ce6u); LOADALL;
  /* 10206ceb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206ced pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206cee mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10206cf0 je 0x10206d29 */ if (ZF_) goto L_10206d29;
  /* 10206cf2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206cf3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206cf4 call 0x102082b0 */ esp -= 4; M32(esp) = 0x10206cf9u; SAVEALL; F_102082b0(c); ABI_CHECK(0x102082b0u, 0x10206cf4u); RETCHK(0x10206cf9u, 0x10206cf4u); LOADALL;
  /* 10206cf9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206cfa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206cfb add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10206cfe:;
  /* 10206cfe add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10206d00:;
  /* 10206d00 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206d02 jne 0x10206cd6 */ if (!ZF_) goto L_10206cd6;
  /* 10206d04 push dword ptr [0x1020d928] */ { const u32 m_ = (u32)(0x1020d928u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206d0a call 0x1020572e */ esp -= 4; M32(esp) = 0x10206d0fu; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10206d0au); RETCHK(0x10206d0fu, 0x10206d0au); LOADALL;
  /* 10206d0f mov dword ptr [0x1020d928], ebx */ { const u32 m_ = (u32)(0x1020d928u); M32(m_) = (u32)(ebx); }
  /* 10206d15 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 10206d17 mov dword ptr [0x1020e160], 1 */ { const u32 m_ = (u32)(0x1020e160u); M32(m_) = (u32)(0x1u); }
  /* 10206d21 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10206d23:;
  /* 10206d23 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206d24 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10206d25:;
  /* 10206d25 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10206d26 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10206d27 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10206d28 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10206d29:;
  /* 10206d29 push dword ptr [0x1020d970] */ { const u32 m_ = (u32)(0x1020d970u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206d2f call 0x1020572e */ esp -= 4; M32(esp) = 0x10206d34u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10206d2fu); RETCHK(0x10206d34u, 0x10206d2fu); LOADALL;
  /* 10206d34 mov dword ptr [0x1020d970], ebx */ { const u32 m_ = (u32)(0x1020d970u); M32(m_) = (u32)(ebx); }
  /* 10206d3a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206d3d jmp 0x10206d23 */ goto L_10206d23;
}

void F_10206d3f(CPU *c) {
  NATIVE_HOOK(0x10206d3fu) REGS; LOADALL;
L_10206d3f:;
  /* 10206d3f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206d40 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10206d42 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10206d43 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206d44 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10206d47 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10206d49 cmp dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206d4c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206d4d mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 10206d4f mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10206d51 mov dword ptr [ebx], 1 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x1u); }
  /* 10206d57 je 0x10206d62 */ if (ZF_) goto L_10206d62;
  /* 10206d59 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10206d5c add dword ptr [ebp + 8], 4 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206d60 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
L_10206d62:;
  /* 10206d62 cmp byte ptr [eax], 0x22 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206d65 jne 0x10206d75 */ if (!ZF_) goto L_10206d75;
  /* 10206d67 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10206d69 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206d6b sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10206d6e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206d6f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10206d71 mov cl, 0x22 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x22u) & 0xffu); }
  /* 10206d73 jmp 0x10206da2 */ goto L_10206da2;
L_10206d75:;
  /* 10206d75 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206d77 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206d79 je 0x10206d80 */ if (ZF_) goto L_10206d80;
  /* 10206d7b mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206d7d mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10206d7f inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206d80:;
  /* 10206d80 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206d82 movzx ebx, cl */ { ebx = (u32)((ecx & 0xffu)); }
  /* 10206d85 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206d86 test byte ptr [ebx + 0x1020de01], 4 */ { const u32 m_ = (u32)(ebx + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10206d8d je 0x10206d9b */ if (ZF_) goto L_10206d9b;
  /* 10206d8f inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206d91 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206d93 je 0x10206d9a */ if (ZF_) goto L_10206d9a;
  /* 10206d95 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206d97 mov byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10206d99 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206d9a:;
  /* 10206d9a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206d9b:;
  /* 10206d9b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10206d9d mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10206da0 je 0x10206dd4 */ if (ZF_) goto L_10206dd4;
L_10206da2:;
  /* 10206da2 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206da4 jne 0x10206d62 */ if (!ZF_) goto L_10206d62;
  /* 10206da6 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206da9 je 0x10206db0 */ if (ZF_) goto L_10206db0;
  /* 10206dab cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206dae jne 0x10206d62 */ if (!ZF_) goto L_10206d62;
L_10206db0:;
  /* 10206db0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206db2 je 0x10206db8 */ if (ZF_) goto L_10206db8;
  /* 10206db4 mov byte ptr [edi - 1], 0 */ { const u32 m_ = (u32)(edi + 0xffffffffu); M8(m_) = (u8)(0x0u); }
L_10206db8:;
  /* 10206db8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10206dbc:;
  /* 10206dbc cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206dbf je 0x10206e9b */ if (ZF_) goto L_10206e9b;
L_10206dc5:;
  /* 10206dc5 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206dc7 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206dca je 0x10206dd1 */ if (ZF_) goto L_10206dd1;
  /* 10206dcc cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206dcf jne 0x10206dd7 */ if (!ZF_) goto L_10206dd7;
L_10206dd1:;
  /* 10206dd1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206dd2 jmp 0x10206dc5 */ goto L_10206dc5;
L_10206dd4:;
  /* 10206dd4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10206dd5 jmp 0x10206db8 */ goto L_10206db8;
L_10206dd7:;
  /* 10206dd7 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206dda je 0x10206e9b */ if (ZF_) goto L_10206e9b;
  /* 10206de0 cmp dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206de4 je 0x10206def */ if (ZF_) goto L_10206def;
  /* 10206de6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10206de9 add dword ptr [ebp + 8], 4 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10206ded mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
L_10206def:;
  /* 10206def inc dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206df1:;
  /* 10206df1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10206df3 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206df4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10206df6 jmp 0x10206dfa */ goto L_10206dfa;
L_10206df8:;
  /* 10206df8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206df9 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206dfa:;
  /* 10206dfa cmp byte ptr [eax], 0x5c */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206dfd je 0x10206df8 */ if (ZF_) goto L_10206df8;
  /* 10206dff cmp byte ptr [eax], 0x22 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206e02 jne 0x10206e2a */ if (!ZF_) goto L_10206e2a;
  /* 10206e04 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10206e07 jne 0x10206e28 */ if (!ZF_) goto L_10206e28;
  /* 10206e09 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206e0d je 0x10206e1b */ if (ZF_) goto L_10206e1b;
  /* 10206e0f lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10206e12 cmp byte ptr [ecx], 0x22 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206e15 jne 0x10206e1b */ if (!ZF_) goto L_10206e1b;
  /* 10206e17 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10206e19 jmp 0x10206e1d */ goto L_10206e1d;
L_10206e1b:;
  /* 10206e1b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_10206e1d:;
  /* 10206e1d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10206e1f cmp dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206e22 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10206e25 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_10206e28:;
  /* 10206e28 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_10206e2a:;
  /* 10206e2a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206e2c je 0x10206e3b */ if (ZF_) goto L_10206e3b;
L_10206e2e:;
  /* 10206e2e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206e30 je 0x10206e36 */ if (ZF_) goto L_10206e36;
  /* 10206e32 mov byte ptr [edi], 0x5c */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x5cu); }
  /* 10206e35 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206e36:;
  /* 10206e36 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206e38 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10206e39 jne 0x10206e2e */ if (!ZF_) goto L_10206e2e;
L_10206e3b:;
  /* 10206e3b mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206e3d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10206e3f je 0x10206e89 */ if (ZF_) goto L_10206e89;
  /* 10206e41 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206e45 jne 0x10206e51 */ if (!ZF_) goto L_10206e51;
  /* 10206e47 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206e4a je 0x10206e89 */ if (ZF_) goto L_10206e89;
  /* 10206e4c cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206e4f je 0x10206e89 */ if (ZF_) goto L_10206e89;
L_10206e51:;
  /* 10206e51 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206e53 je 0x10206e83 */ if (ZF_) goto L_10206e83;
  /* 10206e55 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206e57 je 0x10206e72 */ if (ZF_) goto L_10206e72;
  /* 10206e59 movzx edx, cl */ { edx = (u32)((ecx & 0xffu)); }
  /* 10206e5c test byte ptr [edx + 0x1020de01], 4 */ { const u32 m_ = (u32)(edx + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10206e63 je 0x10206e6b */ if (ZF_) goto L_10206e6b;
  /* 10206e65 mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10206e67 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206e68 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206e69 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206e6b:;
  /* 10206e6b mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10206e6d mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10206e6f inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206e70 jmp 0x10206e81 */ goto L_10206e81;
L_10206e72:;
  /* 10206e72 movzx ecx, cl */ { ecx = (u32)((ecx & 0xffu)); }
  /* 10206e75 test byte ptr [ecx + 0x1020de01], 4 */ { const u32 m_ = (u32)(ecx + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10206e7c je 0x10206e81 */ if (ZF_) goto L_10206e81;
  /* 10206e7e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206e7f inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206e81:;
  /* 10206e81 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206e83:;
  /* 10206e83 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206e84 jmp 0x10206df1 */ goto L_10206df1;
L_10206e89:;
  /* 10206e89 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206e8b je 0x10206e91 */ if (ZF_) goto L_10206e91;
  /* 10206e8d mov byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x0u); }
  /* 10206e90 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10206e91:;
  /* 10206e91 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206e93 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10206e96 jmp 0x10206dbc */ goto L_10206dbc;
L_10206e9b:;
  /* 10206e9b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10206e9e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206ea0 je 0x10206ea5 */ if (ZF_) goto L_10206ea5;
  /* 10206ea2 and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10206ea5:;
  /* 10206ea5 inc dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206ea7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10206ea8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10206ea9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10206eaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206eab(CPU *c) {
  NATIVE_HOOK(0x10206eabu) REGS; LOADALL;
L_10206eab:;
  /* 10206eab push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206eac mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10206eae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10206eaf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10206eb0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206eb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206eb2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206eb3 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10206eb5 cmp dword ptr [0x1020e16c], edi */ { const u32 m_ = (u32)(0x1020e16cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206ebb jne 0x10206ec2 */ if (!ZF_) goto L_10206ec2;
  /* 10206ebd call 0x1020919d */ esp -= 4; M32(esp) = 0x10206ec2u; SAVEALL; F_1020919d(c); ABI_CHECK(0x1020919du, 0x10206ebdu); RETCHK(0x10206ec2u, 0x10206ebdu); LOADALL;
L_10206ec2:;
  /* 10206ec2 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 10206ec7 mov esi, 0x1020d998 */ { esi = (u32)(0x1020d998u); }
  /* 10206ecc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206ecd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206ece mov byte ptr [0x1020da9c], 0 */ { const u32 m_ = (u32)(0x1020da9cu); M8(m_) = (u8)(0x0u); }
  /* 10206ed5 call dword ptr [0x1020b02c] */ { const u32 m_ = (u32)(0x1020b02cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10206edbu; SAVEALL; call_ind(c, t_); RETCHK(0x10206edbu, 0x10206ed5u); LOADALL; }
  /* 10206edb mov eax, dword ptr [0x1020e174] */ { const u32 m_ = (u32)(0x1020e174u); eax = (u32)(M32(m_)); }
  /* 10206ee0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206ee2 mov dword ptr [0x1020d980], esi */ { const u32 m_ = (u32)(0x1020d980u); M32(m_) = (u32)(esi); }
  /* 10206ee8 je 0x10206ef1 */ if (ZF_) goto L_10206ef1;
  /* 10206eea cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206eed mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10206eef jne 0x10206ef3 */ if (!ZF_) goto L_10206ef3;
L_10206ef1:;
  /* 10206ef1 mov ebx, esi */ { ebx = (u32)(esi); }
L_10206ef3:;
  /* 10206ef3 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10206ef6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206ef7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206ef8 lea esi, [ebp - 8] */ esi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10206efb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10206efd mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10206eff call 0x10206d3f */ esp -= 4; M32(esp) = 0x10206f04u; SAVEALL; F_10206d3f(c); ABI_CHECK(0x10206d3fu, 0x10206effu); RETCHK(0x10206f04u, 0x10206effu); LOADALL;
  /* 10206f04 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10206f07 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 10206f0a shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10206f0d add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10206f0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206f10 call 0x10205b4c */ esp -= 4; M32(esp) = 0x10206f15u; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x10206f10u); RETCHK(0x10206f15u, 0x10206f10u); LOADALL;
  /* 10206f15 mov edi, eax */ { edi = (u32)(eax); }
  /* 10206f17 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10206f1a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206f1c jne 0x10206f23 */ if (!ZF_) goto L_10206f23;
  /* 10206f1e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206f21 jmp 0x10206f48 */ goto L_10206f48;
L_10206f23:;
  /* 10206f23 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10206f26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206f27 lea ecx, [esi + edi] */ ecx = (u32)((u32)(esi + edi));
  /* 10206f2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206f2b lea esi, [ebp - 8] */ esi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10206f2e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10206f30 call 0x10206d3f */ esp -= 4; M32(esp) = 0x10206f35u; SAVEALL; F_10206d3f(c); ABI_CHECK(0x10206d3fu, 0x10206f30u); RETCHK(0x10206f35u, 0x10206f30u); LOADALL;
  /* 10206f35 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10206f38 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10206f39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206f3a mov dword ptr [0x1020d964], eax */ { const u32 m_ = (u32)(0x1020d964u); M32(m_) = (u32)(eax); }
  /* 10206f3f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206f40 mov dword ptr [0x1020d968], edi */ { const u32 m_ = (u32)(0x1020d968u); M32(m_) = (u32)(edi); }
  /* 10206f46 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10206f48:;
  /* 10206f48 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10206f49 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10206f4a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10206f4b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10206f4c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206f4d(CPU *c) {
  NATIVE_HOOK(0x10206f4du) REGS; LOADALL;
L_10206f4d:;
  /* 10206f4d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10206f4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10206f4f mov eax, dword ptr [0x1020daa0] */ { const u32 m_ = (u32)(0x1020daa0u); eax = (u32)(M32(m_)); }
  /* 10206f54 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206f55 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206f56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206f57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10206f58 mov edi, dword ptr [0x1020b080] */ { const u32 m_ = (u32)(0x1020b080u); edi = (u32)(M32(m_)); }
  /* 10206f5e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10206f60 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10206f62 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206f64 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 10206f66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10206f67 jne 0x10206f96 */ if (!ZF_) goto L_10206f96;
  /* 10206f69 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10206f6bu; SAVEALL; call_ind(c, t_); RETCHK(0x10206f6bu, 0x10206f69u); LOADALL; }
  /* 10206f6b mov esi, eax */ { esi = (u32)(eax); }
  /* 10206f6d cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206f6f je 0x10206f7d */ if (ZF_) goto L_10206f7d;
  /* 10206f71 mov dword ptr [0x1020daa0], 1 */ { const u32 m_ = (u32)(0x1020daa0u); M32(m_) = (u32)(0x1u); }
  /* 10206f7b jmp 0x10206f9b */ goto L_10206f9b;
L_10206f7d:;
  /* 10206f7d call dword ptr [0x1020b03c] */ { const u32 m_ = (u32)(0x1020b03cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10206f83u; SAVEALL; call_ind(c, t_); RETCHK(0x10206f83u, 0x10206f7du); LOADALL; }
  /* 10206f83 cmp eax, 0x78 */ { u32 a_ = eax, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206f86 jne 0x10206f91 */ if (!ZF_) goto L_10206f91;
  /* 10206f88 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 10206f8a mov dword ptr [0x1020daa0], eax */ { const u32 m_ = (u32)(0x1020daa0u); M32(m_) = (u32)(eax); }
  /* 10206f8f jmp 0x10206f96 */ goto L_10206f96;
L_10206f91:;
  /* 10206f91 mov eax, dword ptr [0x1020daa0] */ { const u32 m_ = (u32)(0x1020daa0u); eax = (u32)(M32(m_)); }
L_10206f96:;
  /* 10206f96 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206f99 jne 0x10207018 */ if (!ZF_) goto L_10207018;
L_10206f9b:;
  /* 10206f9b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206f9d jne 0x10206fa7 */ if (!ZF_) goto L_10206fa7;
  /* 10206f9f call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10206fa1u; SAVEALL; call_ind(c, t_); RETCHK(0x10206fa1u, 0x10206f9fu); LOADALL; }
  /* 10206fa1 mov esi, eax */ { esi = (u32)(eax); }
  /* 10206fa3 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206fa5 je 0x10207020 */ if (ZF_) goto L_10207020;
L_10206fa7:;
  /* 10206fa7 cmp word ptr [esi], bx */ { const u32 m_ = (u32)(esi); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10206faa mov eax, esi */ { eax = (u32)(esi); }
  /* 10206fac je 0x10206fbc */ if (ZF_) goto L_10206fbc;
L_10206fae:;
  /* 10206fae add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10206fb0 cmp word ptr [eax], bx */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10206fb3 jne 0x10206fae */ if (!ZF_) goto L_10206fae;
  /* 10206fb5 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10206fb7 cmp word ptr [eax], bx */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10206fba jne 0x10206fae */ if (!ZF_) goto L_10206fae;
L_10206fbc:;
  /* 10206fbc mov edi, dword ptr [0x1020b07c] */ { const u32 m_ = (u32)(0x1020b07cu); edi = (u32)(M32(m_)); }
  /* 10206fc2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206fc3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206fc4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206fc5 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10206fc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206fc8 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10206fca inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206fcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206fcc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206fcd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206fce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206fcf mov dword ptr [esp + 0x34], eax */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(eax); }
  /* 10206fd3 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10206fd5u; SAVEALL; call_ind(c, t_); RETCHK(0x10206fd5u, 0x10206fd3u); LOADALL; }
  /* 10206fd5 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10206fd7 cmp ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206fd9 je 0x1020700d */ if (ZF_) goto L_1020700d;
  /* 10206fdb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206fdc call 0x10205b4c */ esp -= 4; M32(esp) = 0x10206fe1u; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x10206fdcu); RETCHK(0x10206fe1u, 0x10206fdcu); LOADALL;
  /* 10206fe1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206fe3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206fe4 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10206fe8 je 0x1020700d */ if (ZF_) goto L_1020700d;
  /* 10206fea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206feb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206fec push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10206fed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206fee push dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206ff2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10206ff3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206ff4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206ff5 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10206ff7u; SAVEALL; call_ind(c, t_); RETCHK(0x10206ff7u, 0x10206ff5u); LOADALL; }
  /* 10206ff7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206ff9 jne 0x10207009 */ if (!ZF_) goto L_10207009;
  /* 10206ffb push dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206fff call 0x1020572e */ esp -= 4; M32(esp) = 0x10207004u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10206fffu); RETCHK(0x10207004u, 0x10206fffu); LOADALL;
  /* 10207004 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10207005 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
L_10207009:;
  /* 10207009 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
L_1020700d:;
  /* 1020700d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020700e call dword ptr [0x1020b078] */ { const u32 m_ = (u32)(0x1020b078u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207014u; SAVEALL; call_ind(c, t_); RETCHK(0x10207014u, 0x1020700eu); LOADALL; }
  /* 10207014 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10207016 jmp 0x10207068 */ goto L_10207068;
L_10207018:;
  /* 10207018 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020701a je 0x10207024 */ if (ZF_) goto L_10207024;
  /* 1020701c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020701e je 0x10207024 */ if (ZF_) goto L_10207024;
L_10207020:;
  /* 10207020 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207022 jmp 0x10207068 */ goto L_10207068;
L_10207024:;
  /* 10207024 call dword ptr [0x1020b074] */ { const u32 m_ = (u32)(0x1020b074u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020702au; SAVEALL; call_ind(c, t_); RETCHK(0x1020702au, 0x10207024u); LOADALL; }
  /* 1020702a mov esi, eax */ { esi = (u32)(eax); }
  /* 1020702c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020702e je 0x10207020 */ if (ZF_) goto L_10207020;
  /* 10207030 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10207032 je 0x1020703e */ if (ZF_) goto L_1020703e;
L_10207034:;
  /* 10207034 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207035 cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10207037 jne 0x10207034 */ if (!ZF_) goto L_10207034;
  /* 10207039 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020703a cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1020703c jne 0x10207034 */ if (!ZF_) goto L_10207034;
L_1020703e:;
  /* 1020703e sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10207040 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207041 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10207043 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207044 call 0x10205b4c */ esp -= 4; M32(esp) = 0x10207049u; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x10207044u); RETCHK(0x10207049u, 0x10207044u); LOADALL;
  /* 10207049 mov edi, eax */ { edi = (u32)(eax); }
  /* 1020704b cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020704d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020704e jne 0x10207054 */ if (!ZF_) goto L_10207054;
  /* 10207050 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10207052 jmp 0x1020705f */ goto L_1020705f;
L_10207054:;
  /* 10207054 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207055 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10207056 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207057 call 0x102093d0 */ esp -= 4; M32(esp) = 0x1020705cu; SAVEALL; F_102093d0(c); ABI_CHECK(0x102093d0u, 0x10207057u); RETCHK(0x1020705cu, 0x10207057u); LOADALL;
  /* 1020705c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1020705f:;
  /* 1020705f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10207060 call dword ptr [0x1020b070] */ { const u32 m_ = (u32)(0x1020b070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207066u; SAVEALL; call_ind(c, t_); RETCHK(0x10207066u, 0x10207060u); LOADALL; }
  /* 10207066 mov eax, edi */ { eax = (u32)(edi); }
L_10207068:;
  /* 10207068 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10207069 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020706a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020706b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020706c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020706d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020706e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020706f(CPU *c) {
  NATIVE_HOOK(0x1020706fu) REGS; LOADALL;
L_1020706f:;
  /* 1020706f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10207071 push 0x1020b4e0 */ { u32 v_ = 0x1020b4e0u; esp -= 4; M32(esp) = v_; }
  /* 10207076 call 0x10205950 */ esp -= 4; M32(esp) = 0x1020707bu; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10207076u); RETCHK(0x1020707bu, 0x10207076u); LOADALL;
  /* 1020707b mov dword ptr [ebp - 0x1c], 0x1020c2d8 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1020c2d8u); }
L_10207082:;
  /* 10207082 cmp dword ptr [ebp - 0x1c], 0x1020c2d8 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1020c2d8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207089 jae 0x102070ad */ if (!CF_) goto L_102070ad;
  /* 1020708b and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020708f mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10207092 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10207094 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10207096 je 0x102070a3 */ if (ZF_) goto L_102070a3;
  /* 10207098 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1020709au; SAVEALL; call_ind(c, t_); RETCHK(0x1020709au, 0x10207098u); LOADALL; }
  /* 1020709a jmp 0x102070a3 */ goto L_102070a3;
L_102070a3:;
  /* 102070a3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070a7 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070ab jmp 0x10207082 */ goto L_10207082;
L_102070ad:;
  /* 102070ad call 0x1020598b */ esp -= 4; M32(esp) = 0x102070b2u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102070adu); RETCHK(0x102070b2u, 0x102070adu); LOADALL;
  /* 102070b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020709c(CPU *c) {
  NATIVE_HOOK(0x1020709cu) REGS; LOADALL;
L_1020709c:;
  /* 1020709c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020709e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020709f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102070a0(CPU *c) {
  NATIVE_HOOK(0x102070a0u) REGS; LOADALL;
  goto L_102070a0;
L_10207082:;
  /* 10207082 cmp dword ptr [ebp - 0x1c], 0x1020c2d8 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1020c2d8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207089 jae 0x102070ad */ if (!CF_) goto L_102070ad;
  /* 1020708b and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020708f mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10207092 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10207094 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10207096 je 0x102070a3 */ if (ZF_) goto L_102070a3;
  /* 10207098 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1020709au; SAVEALL; call_ind(c, t_); RETCHK(0x1020709au, 0x10207098u); LOADALL; }
  /* 1020709a jmp 0x102070a3 */ goto L_102070a3;
L_102070a0:;
  /* 102070a0 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_102070a3:;
  /* 102070a3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070a7 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070ab jmp 0x10207082 */ goto L_10207082;
L_102070ad:;
  /* 102070ad call 0x1020598b */ esp -= 4; M32(esp) = 0x102070b2u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102070adu); RETCHK(0x102070b2u, 0x102070adu); LOADALL;
  /* 102070b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102070b3(CPU *c) {
  NATIVE_HOOK(0x102070b3u) REGS; LOADALL;
L_102070b3:;
  /* 102070b3 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 102070b5 push 0x1020b4f0 */ { u32 v_ = 0x1020b4f0u; esp -= 4; M32(esp) = v_; }
  /* 102070ba call 0x10205950 */ esp -= 4; M32(esp) = 0x102070bfu; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x102070bau); RETCHK(0x102070bfu, 0x102070bau); LOADALL;
  /* 102070bf mov dword ptr [ebp - 0x1c], 0x1020c2e0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1020c2e0u); }
L_102070c6:;
  /* 102070c6 cmp dword ptr [ebp - 0x1c], 0x1020c2e0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1020c2e0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102070cd jae 0x102070f1 */ if (!CF_) goto L_102070f1;
  /* 102070cf and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070d3 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102070d6 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 102070d8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102070da je 0x102070e7 */ if (ZF_) goto L_102070e7;
  /* 102070dc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x102070deu; SAVEALL; call_ind(c, t_); RETCHK(0x102070deu, 0x102070dcu); LOADALL; }
  /* 102070de jmp 0x102070e7 */ goto L_102070e7;
L_102070e7:;
  /* 102070e7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070eb add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070ef jmp 0x102070c6 */ goto L_102070c6;
L_102070f1:;
  /* 102070f1 call 0x1020598b */ esp -= 4; M32(esp) = 0x102070f6u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102070f1u); RETCHK(0x102070f6u, 0x102070f1u); LOADALL;
  /* 102070f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102070e0(CPU *c) {
  NATIVE_HOOK(0x102070e0u) REGS; LOADALL;
L_102070e0:;
  /* 102070e0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102070e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102070e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102070e4(CPU *c) {
  NATIVE_HOOK(0x102070e4u) REGS; LOADALL;
  goto L_102070e4;
L_102070c6:;
  /* 102070c6 cmp dword ptr [ebp - 0x1c], 0x1020c2e0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1020c2e0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102070cd jae 0x102070f1 */ if (!CF_) goto L_102070f1;
  /* 102070cf and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070d3 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102070d6 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 102070d8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102070da je 0x102070e7 */ if (ZF_) goto L_102070e7;
  /* 102070dc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x102070deu; SAVEALL; call_ind(c, t_); RETCHK(0x102070deu, 0x102070dcu); LOADALL; }
  /* 102070de jmp 0x102070e7 */ goto L_102070e7;
L_102070e4:;
  /* 102070e4 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_102070e7:;
  /* 102070e7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070eb add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 102070ef jmp 0x102070c6 */ goto L_102070c6;
L_102070f1:;
  /* 102070f1 call 0x1020598b */ esp -= 4; M32(esp) = 0x102070f6u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102070f1u); RETCHK(0x102070f6u, 0x102070f1u); LOADALL;
  /* 102070f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102070f7(CPU *c) {
  NATIVE_HOOK(0x102070f7u) REGS; LOADALL;
L_102070f7:;
  /* 102070f7 cmp dword ptr [0x1020d950], 2 */ { const u32 m_ = (u32)(0x1020d950u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102070fe jne 0x1020710d */ if (!ZF_) goto L_1020710d;
  /* 10207100 cmp dword ptr [0x1020d95c], 5 */ { const u32 m_ = (u32)(0x1020d95cu); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207107 jb 0x1020710d */ if (CF_) goto L_1020710d;
  /* 10207109 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020710b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020710c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020710d:;
  /* 1020710d push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1020710f pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10207110 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207111(CPU *c) {
  NATIVE_HOOK(0x10207111u) REGS; LOADALL;
L_10207111:;
  /* 10207111 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207113 cmp dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207117 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10207119 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 1020711c push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 10207121 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10207122 call dword ptr [0x1020b088] */ { const u32 m_ = (u32)(0x1020b088u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207128u; SAVEALL; call_ind(c, t_); RETCHK(0x10207128u, 0x10207122u); LOADALL; }
  /* 10207128 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020712a mov dword ptr [0x1020e03c], eax */ { const u32 m_ = (u32)(0x1020e03cu); M32(m_) = (u32)(eax); }
  /* 1020712f je 0x1020715b */ if (ZF_) goto L_1020715b;
  /* 10207131 call 0x102070f7 */ esp -= 4; M32(esp) = 0x10207136u; SAVEALL; F_102070f7(c); ABI_CHECK(0x102070f7u, 0x10207131u); RETCHK(0x10207136u, 0x10207131u); LOADALL;
  /* 10207136 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207139 mov dword ptr [0x1020e040], eax */ { const u32 m_ = (u32)(0x1020e040u); M32(m_) = (u32)(eax); }
  /* 1020713e jne 0x1020715e */ if (!ZF_) goto L_1020715e;
  /* 10207140 push 0x3f8 */ { u32 v_ = 0x3f8u; esp -= 4; M32(esp) = v_; }
  /* 10207145 call 0x10207694 */ esp -= 4; M32(esp) = 0x1020714au; SAVEALL; F_10207694(c); ABI_CHECK(0x10207694u, 0x10207145u); RETCHK(0x1020714au, 0x10207145u); LOADALL;
  /* 1020714a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020714c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020714d jne 0x1020715e */ if (!ZF_) goto L_1020715e;
  /* 1020714f push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207155 call dword ptr [0x1020b084] */ { const u32 m_ = (u32)(0x1020b084u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020715bu; SAVEALL; call_ind(c, t_); RETCHK(0x1020715bu, 0x10207155u); LOADALL; }
L_1020715b:;
  /* 1020715b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020715d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020715e:;
  /* 1020715e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207160 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207161 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207162(CPU *c) {
  NATIVE_HOOK(0x10207162u) REGS; LOADALL;
L_10207162:;
  /* 10207162 cmp dword ptr [0x1020e040], 3 */ { const u32 m_ = (u32)(0x1020e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207169 jne 0x102071d4 */ if (!ZF_) goto L_102071d4;
  /* 1020716b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020716c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1020716e cmp dword ptr [0x1020e024], ebx */ { const u32 m_ = (u32)(0x1020e024u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207174 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207175 mov ebp, dword ptr [0x1020b018] */ { const u32 m_ = (u32)(0x1020b018u); ebp = (u32)(M32(m_)); }
  /* 1020717b jle 0x102071c2 */ if ((ZF_|LT_)) goto L_102071c2;
  /* 1020717d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020717e mov esi, dword ptr [0x1020e028] */ { const u32 m_ = (u32)(0x1020e028u); esi = (u32)(M32(m_)); }
  /* 10207184 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207185 mov edi, dword ptr [0x1020b000] */ { const u32 m_ = (u32)(0x1020b000u); edi = (u32)(M32(m_)); }
  /* 1020718b add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_1020718e:;
  /* 1020718e push 0x4000 */ { u32 v_ = 0x4000u; esp -= 4; M32(esp) = v_; }
  /* 10207193 push 0x100000 */ { u32 v_ = 0x100000u; esp -= 4; M32(esp) = v_; }
  /* 10207198 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020719a call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x1020719cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020719cu, 0x1020719au); LOADALL; }
  /* 1020719c push 0x8000 */ { u32 v_ = 0x8000u; esp -= 4; M32(esp) = v_; }
  /* 102071a1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102071a3 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102071a5 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x102071a7u; SAVEALL; call_ind(c, t_); RETCHK(0x102071a7u, 0x102071a5u); LOADALL; }
  /* 102071a7 push dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102071aa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102071ac push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102071b2 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x102071b4u; SAVEALL; call_ind(c, t_); RETCHK(0x102071b4u, 0x102071b2u); LOADALL; }
  /* 102071b4 add esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102071b7 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102071b8 cmp ebx, dword ptr [0x1020e024] */ { const u32 m_ = (u32)(0x1020e024u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102071be jl 0x1020718e */ if (LT_) goto L_1020718e;
  /* 102071c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102071c1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_102071c2:;
  /* 102071c2 push dword ptr [0x1020e028] */ { const u32 m_ = (u32)(0x1020e028u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102071c8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102071ca push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102071d0 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x102071d2u; SAVEALL; call_ind(c, t_); RETCHK(0x102071d2u, 0x102071d0u); LOADALL; }
  /* 102071d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102071d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_102071d4:;
  /* 102071d4 push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102071da call dword ptr [0x1020b084] */ { const u32 m_ = (u32)(0x1020b084u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102071e0u; SAVEALL; call_ind(c, t_); RETCHK(0x102071e0u, 0x102071dau); LOADALL; }
  /* 102071e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102071e1(CPU *c) {
  NATIVE_HOOK(0x102071e1u) REGS; LOADALL;
L_102071e1:;
  /* 102071e1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102071e2 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102071e4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102071e5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102071e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102071e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102071e8 call 0x10206441 */ esp -= 4; M32(esp) = 0x102071edu; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x102071e8u); RETCHK(0x102071edu, 0x102071e8u); LOADALL;
  /* 102071ed mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 102071f0 mov esi, eax */ { esi = (u32)(eax); }
  /* 102071f2 mov edx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); edx = (u32)(M32(m_)); }
  /* 102071f5 mov eax, dword ptr [0x1020d11c] */ { const u32 m_ = (u32)(0x1020d11cu); eax = (u32)(M32(m_)); }
  /* 102071fa mov ecx, edx */ { ecx = (u32)(edx); }
L_102071fc:;
  /* 102071fc cmp dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102071fe je 0x1020720d */ if (ZF_) goto L_1020720d;
  /* 10207200 lea ebx, [eax + eax*2] */ ebx = (u32)((u32)(eax + eax * 2u));
  /* 10207203 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207206 lea ebx, [edx + ebx*4] */ ebx = (u32)((u32)(edx + ebx * 4u));
  /* 10207209 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020720b jb 0x102071fc */ if (CF_) goto L_102071fc;
L_1020720d:;
  /* 1020720d lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 10207210 lea eax, [edx + eax*4] */ eax = (u32)((u32)(edx + eax * 4u));
  /* 10207213 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207215 jae 0x1020721b */ if (!CF_) goto L_1020721b;
  /* 10207217 cmp dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207219 je 0x1020721d */ if (ZF_) goto L_1020721d;
L_1020721b:;
  /* 1020721b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_1020721d:;
  /* 1020721d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020721f je 0x10207337 */ if (ZF_) goto L_10207337;
  /* 10207225 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10207228 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020722a mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 1020722d je 0x10207337 */ if (ZF_) goto L_10207337;
  /* 10207233 cmp ebx, 5 */ { u32 a_ = ebx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207236 jne 0x10207244 */ if (!ZF_) goto L_10207244;
  /* 10207238 and dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020723c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020723e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020723f jmp 0x10207340 */ goto L_10207340;
L_10207244:;
  /* 10207244 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207247 je 0x10207332 */ if (ZF_) goto L_10207332;
  /* 1020724d mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 10207250 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10207253 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10207256 mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
  /* 10207259 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 1020725c cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020725f jne 0x10207324 */ if (!ZF_) goto L_10207324;
  /* 10207265 mov edx, dword ptr [0x1020d110] */ { const u32 m_ = (u32)(0x1020d110u); edx = (u32)(M32(m_)); }
  /* 1020726b mov eax, dword ptr [0x1020d114] */ { const u32 m_ = (u32)(0x1020d114u); eax = (u32)(M32(m_)); }
  /* 10207270 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10207272 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207274 jge 0x1020729d */ if (!LT_) goto L_1020729d;
  /* 10207276 lea eax, [edx + edx*2] */ eax = (u32)((u32)(edx + edx * 2u));
  /* 10207279 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_1020727c:;
  /* 1020727c mov edi, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); edi = (u32)(M32(m_)); }
  /* 1020727f and dword ptr [eax + edi + 8], 0 */ { const u32 m_ = (u32)(eax + edi + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207284 mov edi, dword ptr [0x1020d110] */ { const u32 m_ = (u32)(0x1020d110u); edi = (u32)(M32(m_)); }
  /* 1020728a mov ebx, dword ptr [0x1020d114] */ { const u32 m_ = (u32)(0x1020d114u); ebx = (u32)(M32(m_)); }
  /* 10207290 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207291 add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10207293 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10207296 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207298 jl 0x1020727c */ if (LT_) goto L_1020727c;
  /* 1020729a mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_1020729d:;
  /* 1020729d mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 1020729f cmp ecx, 0xc000008e */ { u32 a_ = ecx, b_ = 0xc000008eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102072a5 mov edi, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edi = (u32)(M32(m_)); }
  /* 102072a8 jne 0x102072b3 */ if (!ZF_) goto L_102072b3;
  /* 102072aa mov dword ptr [esi + 0x5c], 0x83 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x83u); }
  /* 102072b1 jmp 0x10207317 */ goto L_10207317;
L_102072b3:;
  /* 102072b3 cmp ecx, 0xc0000090 */ { u32 a_ = ecx, b_ = 0xc0000090u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102072b9 jne 0x102072c4 */ if (!ZF_) goto L_102072c4;
  /* 102072bb mov dword ptr [esi + 0x5c], 0x81 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x81u); }
  /* 102072c2 jmp 0x10207317 */ goto L_10207317;
L_102072c4:;
  /* 102072c4 cmp ecx, 0xc0000091 */ { u32 a_ = ecx, b_ = 0xc0000091u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102072ca jne 0x102072d5 */ if (!ZF_) goto L_102072d5;
  /* 102072cc mov dword ptr [esi + 0x5c], 0x84 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x84u); }
  /* 102072d3 jmp 0x10207317 */ goto L_10207317;
L_102072d5:;
  /* 102072d5 cmp ecx, 0xc0000093 */ { u32 a_ = ecx, b_ = 0xc0000093u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102072db jne 0x102072e6 */ if (!ZF_) goto L_102072e6;
  /* 102072dd mov dword ptr [esi + 0x5c], 0x85 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x85u); }
  /* 102072e4 jmp 0x10207317 */ goto L_10207317;
L_102072e6:;
  /* 102072e6 cmp ecx, 0xc000008d */ { u32 a_ = ecx, b_ = 0xc000008du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102072ec jne 0x102072f7 */ if (!ZF_) goto L_102072f7;
  /* 102072ee mov dword ptr [esi + 0x5c], 0x82 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x82u); }
  /* 102072f5 jmp 0x10207317 */ goto L_10207317;
L_102072f7:;
  /* 102072f7 cmp ecx, 0xc000008f */ { u32 a_ = ecx, b_ = 0xc000008fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102072fd jne 0x10207308 */ if (!ZF_) goto L_10207308;
  /* 102072ff mov dword ptr [esi + 0x5c], 0x86 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x86u); }
  /* 10207306 jmp 0x10207317 */ goto L_10207317;
L_10207308:;
  /* 10207308 cmp ecx, 0xc0000092 */ { u32 a_ = ecx, b_ = 0xc0000092u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020730e jne 0x10207317 */ if (!ZF_) goto L_10207317;
  /* 10207310 mov dword ptr [esi + 0x5c], 0x8a */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x8au); }
L_10207317:;
  /* 10207317 push dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020731a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1020731c call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x1020731eu; SAVEALL; call_ind(c, t_); RETCHK(0x1020731eu, 0x1020731cu); LOADALL; }
  /* 1020731e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020731f mov dword ptr [esi + 0x5c], edi */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(edi); }
  /* 10207322 jmp 0x1020732b */ goto L_1020732b;
L_10207324:;
  /* 10207324 and dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207328 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10207329 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x1020732bu; SAVEALL; call_ind(c, t_); RETCHK(0x1020732bu, 0x10207329u); LOADALL; }
L_1020732b:;
  /* 1020732b mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1020732e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020732f mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
L_10207332:;
  /* 10207332 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207335 jmp 0x10207340 */ goto L_10207340;
L_10207337:;
  /* 10207337 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020733a call dword ptr [0x1020b08c] */ { const u32 m_ = (u32)(0x1020b08cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207340u; SAVEALL; call_ind(c, t_); RETCHK(0x10207340u, 0x1020733au); LOADALL; }
L_10207340:;
  /* 10207340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10207341 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10207342 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10207343 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10207344 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207345(CPU *c) {
  NATIVE_HOOK(0x10207345u) REGS; LOADALL;
L_10207345:;
  /* 10207345 mov eax, 0xe06d7363 */ { eax = (u32)(0xe06d7363u); }
  /* 1020734a cmp dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020734e jne 0x1020735d */ if (!ZF_) goto L_1020735d;
  /* 10207350 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207354 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10207355 call 0x102071e1 */ esp -= 4; M32(esp) = 0x1020735au; SAVEALL; F_102071e1(c); ABI_CHECK(0x102071e1u, 0x10207355u); RETCHK(0x1020735au, 0x10207355u); LOADALL;
  /* 1020735a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020735b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020735d:;
  /* 1020735d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020735f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207360(CPU *c) {
  NATIVE_HOOK(0x10207360u) REGS; LOADALL;
L_10207360:;
  /* 10207360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207361 lea ebp, [esp - 0x8c] */ ebp = (u32)((u32)(esp + 0xffffff74u));
  /* 10207368 sub esp, 0x10c */ { u32 a_ = esp, b_ = 0x10cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020736e mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10207373 mov ecx, dword ptr [ebp + 0x94] */ { const u32 m_ = (u32)(ebp + 0x94u); ecx = (u32)(M32(m_)); }
  /* 10207379 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020737a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020737b mov dword ptr [ebp + 0x88], eax */ { const u32 m_ = (u32)(ebp + 0x88u); M32(m_) = (u32)(eax); }
  /* 10207381 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10207383 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207384 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10207386:;
  /* 10207386 cmp ecx, dword ptr [eax*8 + 0x1020d120] */ { const u32 m_ = (u32)(eax * 8u + 0x1020d120u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020738d je 0x10207395 */ if (ZF_) goto L_10207395;
  /* 1020738f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207390 cmp eax, 0x13 */ { u32 a_ = eax, b_ = 0x13u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207393 jb 0x10207386 */ if (CF_) goto L_10207386;
L_10207395:;
  /* 10207395 mov esi, eax */ { esi = (u32)(eax); }
  /* 10207397 shl esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 1020739a cmp ecx, dword ptr [esi + 0x1020d120] */ { const u32 m_ = (u32)(esi + 0x1020d120u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102073a0 jne 0x102074bb */ if (!ZF_) goto L_102074bb;
  /* 102073a6 mov eax, dword ptr [0x1020d930] */ { const u32 m_ = (u32)(0x1020d930u); eax = (u32)(M32(m_)); }
  /* 102073ab cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102073ae je 0x10207493 */ if (ZF_) goto L_10207493;
  /* 102073b4 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102073b6 jne 0x102073c5 */ if (!ZF_) goto L_102073c5;
  /* 102073b8 cmp dword ptr [0x1020d934], 1 */ { const u32 m_ = (u32)(0x1020d934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102073bf je 0x10207493 */ if (ZF_) goto L_10207493;
L_102073c5:;
  /* 102073c5 cmp ecx, 0xfc */ { u32 a_ = ecx, b_ = 0xfcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102073cb je 0x102074bb */ if (ZF_) goto L_102074bb;
  /* 102073d1 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 102073d6 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 102073d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102073da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102073db mov byte ptr [ebp + 0x84], dl */ { const u32 m_ = (u32)(ebp + 0x84u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 102073e1 call dword ptr [0x1020b02c] */ { const u32 m_ = (u32)(0x1020b02cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102073e7u; SAVEALL; call_ind(c, t_); RETCHK(0x102073e7u, 0x102073e1u); LOADALL; }
  /* 102073e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102073e9 jne 0x102073fb */ if (!ZF_) goto L_102073fb;
  /* 102073eb lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 102073ee push 0x1020b210 */ { u32 v_ = 0x1020b210u; esp -= 4; M32(esp) = v_; }
  /* 102073f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102073f4 call 0x102082b0 */ esp -= 4; M32(esp) = 0x102073f9u; SAVEALL; F_102082b0(c); ABI_CHECK(0x102082b0u, 0x102073f4u); RETCHK(0x102073f9u, 0x102073f4u); LOADALL;
  /* 102073f9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102073fa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_102073fb:;
  /* 102073fb lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 102073fe mov eax, edi */ { eax = (u32)(edi); }
  /* 10207400 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10207401 call 0x102083b0 */ esp -= 4; M32(esp) = 0x10207406u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x10207401u); RETCHK(0x10207406u, 0x10207401u); LOADALL;
  /* 10207406 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207407 cmp eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020740a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020740b jbe 0x1020742f */ if ((CF_|ZF_)) goto L_1020742f;
  /* 1020740d mov eax, edi */ { eax = (u32)(edi); }
  /* 1020740f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10207410 call 0x102083b0 */ esp -= 4; M32(esp) = 0x10207415u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x10207410u); RETCHK(0x10207415u, 0x10207410u); LOADALL;
  /* 10207415 mov edi, eax */ { edi = (u32)(eax); }
  /* 10207417 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1020741a sub eax, 0x3b */ { u32 a_ = eax, b_ = 0x3bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020741d push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1020741f add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10207421 push 0x1020b20c */ { u32 v_ = 0x1020b20cu; esp -= 4; M32(esp) = v_; }
  /* 10207426 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207427 call 0x10204e10 */ esp -= 4; M32(esp) = 0x1020742cu; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x10207427u); RETCHK(0x1020742cu, 0x10207427u); LOADALL;
  /* 1020742c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1020742f:;
  /* 1020742f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207430 call 0x102083b0 */ esp -= 4; M32(esp) = 0x10207435u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x10207430u); RETCHK(0x10207435u, 0x10207430u); LOADALL;
  /* 10207435 push dword ptr [esi + 0x1020d124] */ { const u32 m_ = (u32)(esi + 0x1020d124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020743b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1020743d call 0x102083b0 */ esp -= 4; M32(esp) = 0x10207442u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x1020743du); RETCHK(0x10207442u, 0x1020743du); LOADALL;
  /* 10207442 lea eax, [ebx + eax + 0x1c] */ eax = (u32)((u32)(ebx + eax + 0x1cu));
  /* 10207446 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10207447 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020744a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020744b and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020744e call 0x10204f80 */ esp -= 4; M32(esp) = 0x10207453u; SAVEALL; F_10204f80(c); ABI_CHECK(0x10204f80u, 0x1020744eu); RETCHK(0x10207453u, 0x1020744eu); LOADALL;
  /* 10207453 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 10207455 push 0x1020b8a0 */ { u32 v_ = 0x1020b8a0u; esp -= 4; M32(esp) = v_; }
  /* 1020745a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020745b call 0x102082b0 */ esp -= 4; M32(esp) = 0x10207460u; SAVEALL; F_102082b0(c); ABI_CHECK(0x102082b0u, 0x1020745bu); RETCHK(0x10207460u, 0x1020745bu); LOADALL;
  /* 10207460 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207461 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10207462 call 0x102082c0 */ esp -= 4; M32(esp) = 0x10207467u; SAVEALL; F_102082c0(c); ABI_CHECK(0x102082c0u, 0x10207462u); RETCHK(0x10207467u, 0x10207462u); LOADALL;
  /* 10207467 push 0x1020b208 */ { u32 v_ = 0x1020b208u; esp -= 4; M32(esp) = v_; }
  /* 1020746c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020746d call 0x102082c0 */ esp -= 4; M32(esp) = 0x10207472u; SAVEALL; F_102082c0(c); ABI_CHECK(0x102082c0u, 0x1020746du); RETCHK(0x10207472u, 0x1020746du); LOADALL;
  /* 10207472 push dword ptr [esi + 0x1020d124] */ { const u32 m_ = (u32)(esi + 0x1020d124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207478 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10207479 call 0x102082c0 */ esp -= 4; M32(esp) = 0x1020747eu; SAVEALL; F_102082c0(c); ABI_CHECK(0x102082c0u, 0x10207479u); RETCHK(0x1020747eu, 0x10207479u); LOADALL;
  /* 1020747e push 0x12010 */ { u32 v_ = 0x12010u; esp -= 4; M32(esp) = v_; }
  /* 10207483 push 0x1020b1d4 */ { u32 v_ = 0x1020b1d4u; esp -= 4; M32(esp) = v_; }
  /* 10207488 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10207489 call 0x102081b7 */ esp -= 4; M32(esp) = 0x1020748eu; SAVEALL; F_102081b7(c); ABI_CHECK(0x102081b7u, 0x10207489u); RETCHK(0x1020748eu, 0x10207489u); LOADALL;
  /* 1020748e add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10207491 jmp 0x102074bb */ goto L_102074bb;
L_10207493:;
  /* 10207493 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10207494 lea eax, [ebp + 0x94] */ eax = (u32)((u32)(ebp + 0x94u));
  /* 1020749a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020749b lea esi, [esi + 0x1020d124] */ esi = (u32)((u32)(esi + 0x1020d124u));
  /* 102074a1 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102074a3 call 0x102083b0 */ esp -= 4; M32(esp) = 0x102074a8u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x102074a3u); RETCHK(0x102074a8u, 0x102074a3u); LOADALL;
  /* 102074a8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102074a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102074aa push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102074ac push -0xc */ { u32 v_ = 0xfffffff4u; esp -= 4; M32(esp) = v_; }
  /* 102074ae call dword ptr [0x1020b060] */ { const u32 m_ = (u32)(0x1020b060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102074b4u; SAVEALL; call_ind(c, t_); RETCHK(0x102074b4u, 0x102074aeu); LOADALL; }
  /* 102074b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102074b5 call dword ptr [0x1020b090] */ { const u32 m_ = (u32)(0x1020b090u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102074bbu; SAVEALL; call_ind(c, t_); RETCHK(0x102074bbu, 0x102074b5u); LOADALL; }
L_102074bb:;
  /* 102074bb lea esp, [ebp - 0x8c] */ esp = (u32)((u32)(ebp + 0xffffff74u));
  /* 102074c1 mov ecx, dword ptr [ebp + 0x88] */ { const u32 m_ = (u32)(ebp + 0x88u); ecx = (u32)(M32(m_)); }
  /* 102074c7 call 0x10204f65 */ esp -= 4; M32(esp) = 0x102074ccu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x102074c7u); RETCHK(0x102074ccu, 0x102074c7u); LOADALL;
  /* 102074cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102074cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102074ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102074cf add ebp, 0x8c */ { u32 a_ = ebp, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 102074d5 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102074d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102074d7(CPU *c) {
  NATIVE_HOOK(0x102074d7u) REGS; LOADALL;
L_102074d7:;
  /* 102074d7 mov eax, dword ptr [0x1020d930] */ { const u32 m_ = (u32)(0x1020d930u); eax = (u32)(M32(m_)); }
  /* 102074dc cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102074df je 0x102074ee */ if (ZF_) goto L_102074ee;
  /* 102074e1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102074e3 jne 0x1020750f */ if (!ZF_) goto L_1020750f;
  /* 102074e5 cmp dword ptr [0x1020d934], 1 */ { const u32 m_ = (u32)(0x1020d934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102074ec jne 0x1020750f */ if (!ZF_) goto L_1020750f;
L_102074ee:;
  /* 102074ee push 0xfc */ { u32 v_ = 0xfcu; esp -= 4; M32(esp) = v_; }
  /* 102074f3 call 0x10207360 */ esp -= 4; M32(esp) = 0x102074f8u; SAVEALL; F_10207360(c); ABI_CHECK(0x10207360u, 0x102074f3u); RETCHK(0x102074f8u, 0x102074f3u); LOADALL;
  /* 102074f8 mov eax, dword ptr [0x1020daa4] */ { const u32 m_ = (u32)(0x1020daa4u); eax = (u32)(M32(m_)); }
  /* 102074fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102074ff pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10207500 je 0x10207504 */ if (ZF_) goto L_10207504;
  /* 10207502 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10207504u; SAVEALL; call_ind(c, t_); RETCHK(0x10207504u, 0x10207502u); LOADALL; }
L_10207504:;
  /* 10207504 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10207509 call 0x10207360 */ esp -= 4; M32(esp) = 0x1020750eu; SAVEALL; F_10207360(c); ABI_CHECK(0x10207360u, 0x10207509u); RETCHK(0x1020750eu, 0x10207509u); LOADALL;
  /* 1020750e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020750f:;
  /* 1020750f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207510(CPU *c) {
  NATIVE_HOOK(0x10207510u) REGS; LOADALL;
L_10207510:;
  /* 10207510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10207511 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207512 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10207514 mov edi, 0x1020daa8 */ { edi = (u32)(0x1020daa8u); }
L_10207519:;
  /* 10207519 cmp dword ptr [esi*8 + 0x1020d1bc], 1 */ { const u32 m_ = (u32)(esi * 8u + 0x1020d1bcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207521 jne 0x10207541 */ if (!ZF_) goto L_10207541;
  /* 10207523 lea eax, [esi*8 + 0x1020d1b8] */ eax = (u32)((u32)(esi * 8u + 0x1020d1b8u));
  /* 1020752a mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 1020752c push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 10207531 push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207533 add edi, 0x18 */ { u32 a_ = edi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10207536 call 0x10209340 */ esp -= 4; M32(esp) = 0x1020753bu; SAVEALL; F_10209340(c); ABI_CHECK(0x10209340u, 0x10207536u); RETCHK(0x1020753bu, 0x10207536u); LOADALL;
  /* 1020753b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020753d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020753e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020753f je 0x1020754d */ if (ZF_) goto L_1020754d;
L_10207541:;
  /* 10207541 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207542 cmp esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207545 jl 0x10207519 */ if (LT_) goto L_10207519;
  /* 10207547 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207549 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1020754a:;
  /* 1020754a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020754b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020754c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020754d:;
  /* 1020754d and dword ptr [esi*8 + 0x1020d1b8], 0 */ { const u32 m_ = (u32)(esi * 8u + 0x1020d1b8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207555 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207557 jmp 0x1020754a */ goto L_1020754a;
}

void F_102075ae(CPU *c) {
  NATIVE_HOOK(0x102075aeu) REGS; LOADALL;
L_102075ae:;
  /* 102075ae push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102075af mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102075b1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102075b4 push dword ptr [eax*8 + 0x1020d1b8] */ { const u32 m_ = (u32)(eax * 8u + 0x1020d1b8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102075bb call dword ptr [0x1020b094] */ { const u32 m_ = (u32)(0x1020b094u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102075c1u; SAVEALL; call_ind(c, t_); RETCHK(0x102075c1u, 0x102075bbu); LOADALL; }
  /* 102075c1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102075c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102075c3(CPU *c) {
  NATIVE_HOOK(0x102075c3u) REGS; LOADALL;
L_102075c3:;
  /* 102075c3 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 102075c5 push 0x1020b8c0 */ { u32 v_ = 0x1020b8c0u; esp -= 4; M32(esp) = v_; }
  /* 102075ca call 0x10205950 */ esp -= 4; M32(esp) = 0x102075cfu; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x102075cau); RETCHK(0x102075cfu, 0x102075cau); LOADALL;
  /* 102075cf mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 102075d2 lea esi, [esi*8 + 0x1020d1b8] */ esi = (u32)((u32)(esi * 8u + 0x1020d1b8u));
  /* 102075d9 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 102075db cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102075dd jne 0x10207651 */ if (!ZF_) goto L_10207651;
  /* 102075df push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 102075e1 call 0x10205b4c */ esp -= 4; M32(esp) = 0x102075e6u; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x102075e1u); RETCHK(0x102075e6u, 0x102075e1u); LOADALL;
  /* 102075e6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102075e7 mov edi, eax */ { edi = (u32)(eax); }
  /* 102075e9 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102075eb jne 0x102075fa */ if (!ZF_) goto L_102075fa;
  /* 102075ed call 0x1020970d */ esp -= 4; M32(esp) = 0x102075f2u; SAVEALL; F_1020970d(c); ABI_CHECK(0x1020970du, 0x102075edu); RETCHK(0x102075f2u, 0x102075edu); LOADALL;
  /* 102075f2 mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 102075f8 jmp 0x10207639 */ goto L_10207639;
L_102075fa:;
  /* 102075fa push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 102075fc call 0x10207663 */ esp -= 4; M32(esp) = 0x10207601u; SAVEALL; F_10207663(c); ABI_CHECK(0x10207663u, 0x102075fcu); RETCHK(0x10207601u, 0x102075fcu); LOADALL;
  /* 10207601 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10207602 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 10207605 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207607 jne 0x10207641 */ if (!ZF_) goto L_10207641;
  /* 10207609 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 1020760e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020760f call 0x10209340 */ esp -= 4; M32(esp) = 0x10207614u; SAVEALL; F_10209340(c); ABI_CHECK(0x10209340u, 0x1020760fu); RETCHK(0x10207614u, 0x1020760fu); LOADALL;
  /* 10207614 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10207615 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10207616 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10207618 jne 0x1020763d */ if (!ZF_) goto L_1020763d;
  /* 1020761a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020761b call 0x1020572e */ esp -= 4; M32(esp) = 0x10207620u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x1020761bu); RETCHK(0x10207620u, 0x1020761bu); LOADALL;
  /* 10207620 call 0x1020970d */ esp -= 4; M32(esp) = 0x10207625u; SAVEALL; F_1020970d(c); ABI_CHECK(0x1020970du, 0x10207620u); RETCHK(0x10207625u, 0x10207620u); LOADALL;
  /* 10207625 mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 1020762b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 1020762d lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10207630 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10207631 call 0x102053ea */ esp -= 4; M32(esp) = 0x10207636u; SAVEALL; F_102053ea(c); ABI_CHECK(0x102053eau, 0x10207631u); RETCHK(0x10207636u, 0x10207631u); LOADALL;
  /* 10207636 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10207639:;
  /* 10207639 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020763b jmp 0x10207654 */ goto L_10207654;
L_1020763d:;
  /* 1020763d mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 1020763f jmp 0x10207648 */ goto L_10207648;
L_10207641:;
  /* 10207641 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207642 call 0x1020572e */ esp -= 4; M32(esp) = 0x10207647u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10207642u); RETCHK(0x10207647u, 0x10207642u); LOADALL;
  /* 10207647 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10207648:;
  /* 10207648 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020764c call 0x1020765a */ esp -= 4; M32(esp) = 0x10207651u; SAVEALL; F_1020765a(c); ABI_CHECK(0x1020765au, 0x1020764cu); RETCHK(0x10207651u, 0x1020764cu); LOADALL;
L_10207651:;
  /* 10207651 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207653 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10207654:;
  /* 10207654 call 0x1020598b */ esp -= 4; M32(esp) = 0x10207659u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10207654u); RETCHK(0x10207659u, 0x10207654u); LOADALL;
  /* 10207659 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020765a(CPU *c) {
  NATIVE_HOOK(0x1020765au) REGS; LOADALL;
L_1020765a:;
  /* 1020765a push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 1020765c call 0x102075ae */ esp -= 4; M32(esp) = 0x10207661u; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x1020765cu); RETCHK(0x10207661u, 0x1020765cu); LOADALL;
  /* 10207661 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10207662 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207663(CPU *c) {
  NATIVE_HOOK(0x10207663u) REGS; LOADALL;
L_10207663:;
  /* 10207663 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207664 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10207666 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10207669 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020766a lea esi, [eax*8 + 0x1020d1b8] */ esi = (u32)((u32)(eax * 8u + 0x1020d1b8u));
  /* 10207671 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207674 jne 0x10207689 */ if (!ZF_) goto L_10207689;
  /* 10207676 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10207677 call 0x102075c3 */ esp -= 4; M32(esp) = 0x1020767cu; SAVEALL; F_102075c3(c); ABI_CHECK(0x102075c3u, 0x10207677u); RETCHK(0x1020767cu, 0x10207677u); LOADALL;
  /* 1020767c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020767e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020767f jne 0x10207689 */ if (!ZF_) goto L_10207689;
  /* 10207681 push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 10207683 call 0x102056fb */ esp -= 4; M32(esp) = 0x10207688u; SAVEALL; F_102056fb(c); ABI_CHECK(0x102056fbu, 0x10207683u); RETCHK(0x10207688u, 0x10207683u); LOADALL;
  /* 10207688 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10207689:;
  /* 10207689 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020768b call dword ptr [0x1020b098] */ { const u32 m_ = (u32)(0x1020b098u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207691u; SAVEALL; call_ind(c, t_); RETCHK(0x10207691u, 0x1020768bu); LOADALL; }
  /* 10207691 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10207692 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10207693 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207694(CPU *c) {
  NATIVE_HOOK(0x10207694u) REGS; LOADALL;
L_10207694:;
  /* 10207694 push 0x140 */ { u32 v_ = 0x140u; esp -= 4; M32(esp) = v_; }
  /* 10207699 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1020769b push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102076a1 call dword ptr [0x1020b030] */ { const u32 m_ = (u32)(0x1020b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102076a7u; SAVEALL; call_ind(c, t_); RETCHK(0x102076a7u, 0x102076a1u); LOADALL; }
  /* 102076a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102076a9 mov dword ptr [0x1020e028], eax */ { const u32 m_ = (u32)(0x1020e028u); M32(m_) = (u32)(eax); }
  /* 102076ae jne 0x102076b1 */ if (!ZF_) goto L_102076b1;
  /* 102076b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102076b1:;
  /* 102076b1 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102076b5 and dword ptr [0x1020e020], 0 */ { const u32 m_ = (u32)(0x1020e020u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102076bc and dword ptr [0x1020e024], 0 */ { const u32 m_ = (u32)(0x1020e024u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102076c3 mov dword ptr [0x1020e030], eax */ { const u32 m_ = (u32)(0x1020e030u); M32(m_) = (u32)(eax); }
  /* 102076c8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102076ca mov dword ptr [0x1020e02c], ecx */ { const u32 m_ = (u32)(0x1020e02cu); M32(m_) = (u32)(ecx); }
  /* 102076d0 mov dword ptr [0x1020e034], 0x10 */ { const u32 m_ = (u32)(0x1020e034u); M32(m_) = (u32)(0x10u); }
  /* 102076da inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102076db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102076dc(CPU *c) {
  NATIVE_HOOK(0x102076dcu) REGS; LOADALL;
L_102076dc:;
  /* 102076dc mov eax, dword ptr [0x1020e024] */ { const u32 m_ = (u32)(0x1020e024u); eax = (u32)(M32(m_)); }
  /* 102076e1 lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 102076e4 mov eax, dword ptr [0x1020e028] */ { const u32 m_ = (u32)(0x1020e028u); eax = (u32)(M32(m_)); }
  /* 102076e9 lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 102076ec jmp 0x10207700 */ goto L_10207700;
L_102076ee:;
  /* 102076ee mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 102076f2 sub edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 102076f5 cmp edx, 0x100000 */ { u32 a_ = edx, b_ = 0x100000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102076fb jb 0x10207706 */ if (CF_) goto L_10207706;
  /* 102076fd add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10207700:;
  /* 10207700 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207702 jb 0x102076ee */ if (CF_) goto L_102076ee;
  /* 10207704 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10207706:;
  /* 10207706 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207707(CPU *c) {
  NATIVE_HOOK(0x10207707u) REGS; LOADALL;
L_10207707:;
  /* 10207707 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207708 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1020770a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020770d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207710 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10207713 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10207714 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10207717 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207718 mov edi, esi */ { edi = (u32)(esi); }
  /* 1020771a sub edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020771d add esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10207720 shr edi, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10207723 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10207725 imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 1020772b lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 10207732 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 10207735 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10207737 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207738 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1020773b mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 1020773e jne 0x10207a1b */ if (!ZF_) goto L_10207a1b;
  /* 10207744 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10207745 lea ebx, [ecx + esi] */ ebx = (u32)((u32)(ecx + esi));
  /* 10207748 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 1020774a mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 1020774d mov edx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 10207750 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 10207753 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 10207756 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10207759 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 1020775c jne 0x102077d2 */ if (!ZF_) goto L_102077d2;
  /* 1020775e sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10207761 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207762 cmp edx, 0x3f */ { u32 a_ = edx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207765 jbe 0x1020776a */ if ((CF_|ZF_)) goto L_1020776a;
  /* 10207767 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10207769 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_1020776a:;
  /* 1020776a mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1020776d cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207770 jne 0x102077b4 */ if (!ZF_) goto L_102077b4;
  /* 10207772 cmp edx, 0x20 */ { u32 a_ = edx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207775 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 1020777a jae 0x10207795 */ if (!CF_) goto L_10207795;
  /* 1020777c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 1020777e shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10207780 lea ecx, [edx + eax + 4] */ ecx = (u32)((u32)(edx + eax + 0x4u));
  /* 10207784 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10207786 and dword ptr [eax + edi*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edi * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020778a dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 1020778c jne 0x102077b1 */ if (!ZF_) goto L_102077b1;
  /* 1020778e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207791 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207793 jmp 0x102077b1 */ goto L_102077b1;
L_10207795:;
  /* 10207795 lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 10207798 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 1020779a lea ecx, [edx + eax + 4] */ ecx = (u32)((u32)(edx + eax + 0x4u));
  /* 1020779e not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 102077a0 and dword ptr [eax + edi*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edi * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102077a7 dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 102077a9 jne 0x102077b1 */ if (!ZF_) goto L_102077b1;
  /* 102077ab mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 102077ae and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_102077b1:;
  /* 102077b1 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
L_102077b4:;
  /* 102077b4 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 102077b7 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 102077ba mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 102077bd add ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102077c0 mov dword ptr [edx + 4], ebx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 102077c3 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 102077c6 mov ebx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 102077c9 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 102077cc mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
  /* 102077cf mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_102077d2:;
  /* 102077d2 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 102077d4 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 102077d7 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102077d8 cmp edx, 0x3f */ { u32 a_ = edx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102077db jbe 0x102077e0 */ if ((CF_|ZF_)) goto L_102077e0;
  /* 102077dd push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 102077df pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_102077e0:;
  /* 102077e0 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 102077e3 and ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 102077e6 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 102077e9 jne 0x1020787e */ if (!ZF_) goto L_1020787e;
  /* 102077ef sub esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102077f2 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 102077f5 sar ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 102077f8 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 102077fa mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 102077fd dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102077fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102077ff cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207801 jbe 0x10207805 */ if ((CF_|ZF_)) goto L_10207805;
  /* 10207803 mov ebx, esi */ { ebx = (u32)(esi); }
L_10207805:;
  /* 10207805 add ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207808 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 1020780a sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 1020780d dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1020780e cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207810 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10207813 jbe 0x10207817 */ if ((CF_|ZF_)) goto L_10207817;
  /* 10207815 mov edx, esi */ { edx = (u32)(esi); }
L_10207817:;
  /* 10207817 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207819 je 0x10207879 */ if (ZF_) goto L_10207879;
  /* 1020781b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1020781e mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10207821 cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207824 jne 0x10207861 */ if (!ZF_) goto L_10207861;
  /* 10207826 cmp ebx, 0x20 */ { u32 a_ = ebx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207829 mov esi, 0x80000000 */ { esi = (u32)(0x80000000u); }
  /* 1020782e jae 0x10207847 */ if (!CF_) goto L_10207847;
  /* 10207830 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10207832 shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10207834 not esi */ { esi = (u32)(~esi & 0xffffffffu); }
  /* 10207836 and dword ptr [eax + edi*4 + 0x44], esi */ { const u32 m_ = (u32)(eax + edi * 4u + 0x44u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020783a dec byte ptr [ebx + eax + 4] */ { const u32 m_ = (u32)(ebx + eax + 0x4u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 1020783e jne 0x10207861 */ if (!ZF_) goto L_10207861;
  /* 10207840 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207843 and dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207845 jmp 0x10207861 */ goto L_10207861;
L_10207847:;
  /* 10207847 lea ecx, [ebx - 0x20] */ ecx = (u32)((u32)(ebx + 0xffffffe0u));
  /* 1020784a shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 1020784c not esi */ { esi = (u32)(~esi & 0xffffffffu); }
  /* 1020784e and dword ptr [eax + edi*4 + 0xc4], esi */ { const u32 m_ = (u32)(eax + edi * 4u + 0xc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207855 dec byte ptr [ebx + eax + 4] */ { const u32 m_ = (u32)(ebx + eax + 0x4u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10207859 jne 0x10207861 */ if (!ZF_) goto L_10207861;
  /* 1020785b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1020785e and dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207861:;
  /* 10207861 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10207864 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10207867 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1020786a mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 1020786d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10207870 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10207873 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207876 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
L_10207879:;
  /* 10207879 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1020787c jmp 0x10207881 */ goto L_10207881;
L_1020787e:;
  /* 1020787e mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10207881:;
  /* 10207881 cmp dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207885 jne 0x1020788f */ if (!ZF_) goto L_1020788f;
  /* 10207887 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207889 je 0x1020790f */ if (ZF_) goto L_1020790f;
L_1020788f:;
  /* 1020788f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10207892 lea ecx, [ecx + edx*8] */ ecx = (u32)((u32)(ecx + edx * 8u));
  /* 10207895 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10207898 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1020789b mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 1020789e mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 102078a1 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102078a4 mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 102078a7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102078aa cmp ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102078ad jne 0x1020790f */ if (!ZF_) goto L_1020790f;
  /* 102078af mov cl, byte ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102078b3 mov byte ptr [ebp + 0xf], cl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 102078b6 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 102078b8 cmp edx, 0x20 */ { u32 a_ = edx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102078bb mov byte ptr [edx + eax + 4], cl */ { const u32 m_ = (u32)(edx + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 102078bf jae 0x102078e6 */ if (!CF_) goto L_102078e6;
  /* 102078c1 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 102078c5 jne 0x102078d5 */ if (!ZF_) goto L_102078d5;
  /* 102078c7 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 102078c9 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 102078ce shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 102078d0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 102078d3 or dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_102078d5:;
  /* 102078d5 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 102078da mov ecx, edx */ { ecx = (u32)(edx); }
  /* 102078dc shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 102078de lea eax, [eax + edi*4 + 0x44] */ eax = (u32)((u32)(eax + edi * 4u + 0x44u));
  /* 102078e2 or dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102078e4 jmp 0x1020790f */ goto L_1020790f;
L_102078e6:;
  /* 102078e6 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 102078ea jne 0x102078fc */ if (!ZF_) goto L_102078fc;
  /* 102078ec lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 102078ef mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 102078f4 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 102078f6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 102078f9 or dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_102078fc:;
  /* 102078fc lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 102078ff mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10207904 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10207906 lea eax, [eax + edi*4 + 0xc4] */ eax = (u32)((u32)(eax + edi * 4u + 0xc4u));
  /* 1020790d or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1020790f:;
  /* 1020790f mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10207912 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10207914 mov dword ptr [eax + esi - 4], eax */ { const u32 m_ = (u32)(eax + esi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10207918 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1020791b dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1020791d jne 0x10207a1a */ if (!ZF_) goto L_10207a1a;
  /* 10207923 mov eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); eax = (u32)(M32(m_)); }
  /* 10207928 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020792a je 0x10207a0c */ if (ZF_) goto L_10207a0c;
  /* 10207930 mov ecx, dword ptr [0x1020e038] */ { const u32 m_ = (u32)(0x1020e038u); ecx = (u32)(M32(m_)); }
  /* 10207936 mov esi, dword ptr [0x1020b000] */ { const u32 m_ = (u32)(0x1020b000u); esi = (u32)(M32(m_)); }
  /* 1020793c push 0x4000 */ { u32 v_ = 0x4000u; esp -= 4; M32(esp) = v_; }
  /* 10207941 shl ecx, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10207944 add ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207947 mov ebx, 0x8000 */ { ebx = (u32)(0x8000u); }
  /* 1020794c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020794d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020794e call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10207950u; SAVEALL; call_ind(c, t_); RETCHK(0x10207950u, 0x1020794eu); LOADALL; }
  /* 10207950 mov ecx, dword ptr [0x1020e038] */ { const u32 m_ = (u32)(0x1020e038u); ecx = (u32)(M32(m_)); }
  /* 10207956 mov eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); eax = (u32)(M32(m_)); }
  /* 1020795b mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10207960 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10207962 or dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207965 mov eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); eax = (u32)(M32(m_)); }
  /* 1020796a mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 1020796d mov ecx, dword ptr [0x1020e038] */ { const u32 m_ = (u32)(0x1020e038u); ecx = (u32)(M32(m_)); }
  /* 10207973 and dword ptr [eax + ecx*4 + 0xc4], 0 */ { const u32 m_ = (u32)(eax + ecx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020797b mov eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); eax = (u32)(M32(m_)); }
  /* 10207980 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 10207983 dec byte ptr [eax + 0x43] */ { const u32 m_ = (u32)(eax + 0x43u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10207986 mov eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); eax = (u32)(M32(m_)); }
  /* 1020798b mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1020798e cmp byte ptr [ecx + 0x43], 0 */ { const u32 m_ = (u32)(ecx + 0x43u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10207992 jne 0x1020799d */ if (!ZF_) goto L_1020799d;
  /* 10207994 and dword ptr [eax + 4], 0xfffffffe */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207998 mov eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); eax = (u32)(M32(m_)); }
L_1020799d:;
  /* 1020799d cmp dword ptr [eax + 8], -1 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102079a1 jne 0x10207a0c */ if (!ZF_) goto L_10207a0c;
  /* 102079a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102079a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102079a6 push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102079a9 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x102079abu; SAVEALL; call_ind(c, t_); RETCHK(0x102079abu, 0x102079a9u); LOADALL; }
  /* 102079ab mov eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); eax = (u32)(M32(m_)); }
  /* 102079b0 push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102079b3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102079b5 push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102079bb call dword ptr [0x1020b018] */ { const u32 m_ = (u32)(0x1020b018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102079c1u; SAVEALL; call_ind(c, t_); RETCHK(0x102079c1u, 0x102079bbu); LOADALL; }
  /* 102079c1 mov eax, dword ptr [0x1020e024] */ { const u32 m_ = (u32)(0x1020e024u); eax = (u32)(M32(m_)); }
  /* 102079c6 mov edx, dword ptr [0x1020e028] */ { const u32 m_ = (u32)(0x1020e028u); edx = (u32)(M32(m_)); }
  /* 102079cc lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 102079cf shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 102079d2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 102079d4 mov eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); eax = (u32)(M32(m_)); }
  /* 102079d9 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102079db lea ecx, [ecx + edx - 0x14] */ ecx = (u32)((u32)(ecx + edx + 0xffffffecu));
  /* 102079df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102079e0 lea ecx, [eax + 0x14] */ ecx = (u32)((u32)(eax + 0x14u));
  /* 102079e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102079e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102079e5 call 0x102087d0 */ esp -= 4; M32(esp) = 0x102079eau; SAVEALL; F_102087d0(c); ABI_CHECK(0x102087d0u, 0x102079e5u); RETCHK(0x102079eau, 0x102079e5u); LOADALL;
  /* 102079ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102079ed add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102079f0 dec dword ptr [0x1020e024] */ { const u32 m_ = (u32)(0x1020e024u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102079f6 cmp eax, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102079fc jbe 0x10207a02 */ if ((CF_|ZF_)) goto L_10207a02;
  /* 102079fe sub dword ptr [ebp + 8], 0x14 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_10207a02:;
  /* 10207a02 mov eax, dword ptr [0x1020e028] */ { const u32 m_ = (u32)(0x1020e028u); eax = (u32)(M32(m_)); }
  /* 10207a07 mov dword ptr [0x1020e030], eax */ { const u32 m_ = (u32)(0x1020e030u); M32(m_) = (u32)(eax); }
L_10207a0c:;
  /* 10207a0c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10207a0f mov dword ptr [0x1020e020], eax */ { const u32 m_ = (u32)(0x1020e020u); M32(m_) = (u32)(eax); }
  /* 10207a14 mov dword ptr [0x1020e038], edi */ { const u32 m_ = (u32)(0x1020e038u); M32(m_) = (u32)(edi); }
L_10207a1a:;
  /* 10207a1a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10207a1b:;
  /* 10207a1b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10207a1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10207a1d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10207a1e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207a1f(CPU *c) {
  NATIVE_HOOK(0x10207a1fu) REGS; LOADALL;
L_10207a1f:;
  /* 10207a1f mov eax, dword ptr [0x1020e024] */ { const u32 m_ = (u32)(0x1020e024u); eax = (u32)(M32(m_)); }
  /* 10207a24 mov ecx, dword ptr [0x1020e034] */ { const u32 m_ = (u32)(0x1020e034u); ecx = (u32)(M32(m_)); }
  /* 10207a2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207a2b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10207a2d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207a2f jne 0x10207a65 */ if (!ZF_) goto L_10207a65;
  /* 10207a31 lea eax, [ecx + ecx*4 + 0x50] */ eax = (u32)((u32)(ecx + ecx * 4u + 0x50u));
  /* 10207a35 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10207a38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10207a39 push dword ptr [0x1020e028] */ { const u32 m_ = (u32)(0x1020e028u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207a3f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207a40 push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207a46 call dword ptr [0x1020b0a0] */ { const u32 m_ = (u32)(0x1020b0a0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207a4cu; SAVEALL; call_ind(c, t_); RETCHK(0x10207a4cu, 0x10207a46u); LOADALL; }
  /* 10207a4c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207a4e jne 0x10207a54 */ if (!ZF_) goto L_10207a54;
  /* 10207a50 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207a52 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10207a53 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10207a54:;
  /* 10207a54 add dword ptr [0x1020e034], 0x10 */ { const u32 m_ = (u32)(0x1020e034u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207a5b mov dword ptr [0x1020e028], eax */ { const u32 m_ = (u32)(0x1020e028u); M32(m_) = (u32)(eax); }
  /* 10207a60 mov eax, dword ptr [0x1020e024] */ { const u32 m_ = (u32)(0x1020e024u); eax = (u32)(M32(m_)); }
L_10207a65:;
  /* 10207a65 mov ecx, dword ptr [0x1020e028] */ { const u32 m_ = (u32)(0x1020e028u); ecx = (u32)(M32(m_)); }
  /* 10207a6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10207a6c push 0x41c4 */ { u32 v_ = 0x41c4u; esp -= 4; M32(esp) = v_; }
  /* 10207a71 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10207a73 push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207a79 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10207a7c lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 10207a7f call dword ptr [0x1020b030] */ { const u32 m_ = (u32)(0x1020b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207a85u; SAVEALL; call_ind(c, t_); RETCHK(0x10207a85u, 0x10207a7fu); LOADALL; }
  /* 10207a85 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207a87 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 10207a8a jne 0x10207a90 */ if (!ZF_) goto L_10207a90;
L_10207a8c:;
  /* 10207a8c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207a8e jmp 0x10207ad3 */ goto L_10207ad3;
L_10207a90:;
  /* 10207a90 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10207a92 push 0x2000 */ { u32 v_ = 0x2000u; esp -= 4; M32(esp) = v_; }
  /* 10207a97 push 0x100000 */ { u32 v_ = 0x100000u; esp -= 4; M32(esp) = v_; }
  /* 10207a9c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207a9d call dword ptr [0x1020b09c] */ { const u32 m_ = (u32)(0x1020b09cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207aa3u; SAVEALL; call_ind(c, t_); RETCHK(0x10207aa3u, 0x10207a9du); LOADALL; }
  /* 10207aa3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207aa5 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10207aa8 jne 0x10207abc */ if (!ZF_) goto L_10207abc;
  /* 10207aaa push dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207aad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207aae push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10207ab4 call dword ptr [0x1020b018] */ { const u32 m_ = (u32)(0x1020b018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207abau; SAVEALL; call_ind(c, t_); RETCHK(0x10207abau, 0x10207ab4u); LOADALL; }
  /* 10207aba jmp 0x10207a8c */ goto L_10207a8c;
L_10207abc:;
  /* 10207abc or dword ptr [esi + 8], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207ac0 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10207ac2 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 10207ac5 inc dword ptr [0x1020e024] */ { const u32 m_ = (u32)(0x1020e024u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207acb mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 10207ace or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207ad1 mov eax, esi */ { eax = (u32)(esi); }
L_10207ad3:;
  /* 10207ad3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10207ad4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10207ad5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207ad6(CPU *c) {
  NATIVE_HOOK(0x10207ad6u) REGS; LOADALL;
L_10207ad6:;
  /* 10207ad6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207ad7 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10207ad9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10207ada push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10207adb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207ade mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10207ae1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10207ae2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10207ae3 mov esi, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); esi = (u32)(M32(m_)); }
  /* 10207ae6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207ae7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10207ae9 jmp 0x10207aee */ goto L_10207aee;
L_10207aeb:;
  /* 10207aeb shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10207aed inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10207aee:;
  /* 10207aee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10207af0 jge 0x10207aeb */ if (!LT_) goto L_10207aeb;
  /* 10207af2 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10207af4 imul eax, eax, 0x204 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10207afa lea eax, [eax + esi + 0x144] */ eax = (u32)((u32)(eax + esi + 0x144u));
  /* 10207b01 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10207b03 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10207b06 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_10207b07:;
  /* 10207b07 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 10207b0a mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 10207b0d add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10207b10 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207b11 jne 0x10207b07 */ if (!ZF_) goto L_10207b07;
  /* 10207b13 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10207b15 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 10207b17 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 10207b1c shl edi, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10207b1f add edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10207b22 push 0x8000 */ { u32 v_ = 0x8000u; esp -= 4; M32(esp) = v_; }
  /* 10207b27 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207b28 call dword ptr [0x1020b09c] */ { const u32 m_ = (u32)(0x1020b09cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10207b2eu; SAVEALL; call_ind(c, t_); RETCHK(0x10207b2eu, 0x10207b28u); LOADALL; }
  /* 10207b2e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10207b30 jne 0x10207b3a */ if (!ZF_) goto L_10207b3a;
  /* 10207b32 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207b35 jmp 0x10207bd7 */ goto L_10207bd7;
L_10207b3a:;
  /* 10207b3a lea edx, [edi + 0x7000] */ edx = (u32)((u32)(edi + 0x7000u));
  /* 10207b40 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207b42 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 10207b45 ja 0x10207b8a */ if (!(CF_|ZF_)) goto L_10207b8a;
  /* 10207b47 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10207b49 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207b4b shr ecx, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10207b4e lea eax, [edi + 0x10] */ eax = (u32)((u32)(edi + 0x10u));
  /* 10207b51 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10207b52:;
  /* 10207b52 or dword ptr [eax - 8], 0xffffffff */ { const u32 m_ = (u32)(eax + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207b56 or dword ptr [eax + 0xfec], 0xffffffff */ { const u32 m_ = (u32)(eax + 0xfecu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207b5d lea edx, [eax + 0xffc] */ edx = (u32)((u32)(eax + 0xffcu));
  /* 10207b63 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 10207b65 lea edx, [eax - 0x1004] */ edx = (u32)((u32)(eax + 0xffffeffcu));
  /* 10207b6b mov dword ptr [eax - 4], 0xff0 */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(0xff0u); }
  /* 10207b72 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 10207b75 mov dword ptr [eax + 0xfe8], 0xff0 */ { const u32 m_ = (u32)(eax + 0xfe8u); M32(m_) = (u32)(0xff0u); }
  /* 10207b7f add eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10207b84 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207b85 jne 0x10207b52 */ if (!ZF_) goto L_10207b52;
  /* 10207b87 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_10207b8a:;
  /* 10207b8a mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 10207b8d add eax, 0x1f8 */ { u32 a_ = eax, b_ = 0x1f8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10207b92 lea ecx, [edi + 0xc] */ ecx = (u32)((u32)(edi + 0xcu));
  /* 10207b95 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10207b98 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10207b9b lea ecx, [edx + 0xc] */ ecx = (u32)((u32)(edx + 0xcu));
  /* 10207b9e mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10207ba1 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10207ba4 and dword ptr [esi + ebx*4 + 0x44], 0 */ { const u32 m_ = (u32)(esi + ebx * 4u + 0x44u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207ba9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10207bab inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207bac mov dword ptr [esi + ebx*4 + 0xc4], edi */ { const u32 m_ = (u32)(esi + ebx * 4u + 0xc4u); M32(m_) = (u32)(edi); }
  /* 10207bb3 mov al, byte ptr [esi + 0x43] */ { const u32 m_ = (u32)(esi + 0x43u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10207bb6 mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10207bb8 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10207bba test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10207bbc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10207bbf mov byte ptr [esi + 0x43], cl */ { const u32 m_ = (u32)(esi + 0x43u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10207bc2 jne 0x10207bc7 */ if (!ZF_) goto L_10207bc7;
  /* 10207bc4 or dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207bc7:;
  /* 10207bc7 mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10207bcc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10207bce shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10207bd0 not edx */ { edx = (u32)(~edx & 0xffffffffu); }
  /* 10207bd2 and dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207bd5 mov eax, ebx */ { eax = (u32)(ebx); }
L_10207bd7:;
  /* 10207bd7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10207bd8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10207bd9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10207bda leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10207bdb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207bdc(CPU *c) {
  NATIVE_HOOK(0x10207bdcu) REGS; LOADALL;
L_10207bdc:;
  /* 10207bdc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207bdd mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10207bdf sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10207be2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207be5 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10207be8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10207be9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10207bea mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10207bed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207bee mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10207bf1 mov edx, edi */ { edx = (u32)(edi); }
  /* 10207bf3 sub edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10207bf6 add esi, 0x17 */ { u32 a_ = esi, b_ = 0x17u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10207bf9 shr edx, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10207bfc mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10207bfe imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10207c04 lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 10207c0b mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 10207c0e mov ecx, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10207c11 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10207c14 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207c15 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207c17 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10207c1b mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 10207c1d mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10207c20 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 10207c23 jle 0x10207d7e */ if ((ZF_|LT_)) goto L_10207d7e;
  /* 10207c29 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10207c2c jne 0x10207d77 */ if (!ZF_) goto L_10207d77;
  /* 10207c32 add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10207c34 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207c36 jg 0x10207d77 */ if (!(ZF_|LT_)) goto L_10207d77;
  /* 10207c3c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10207c3f sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10207c42 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207c43 cmp ecx, 0x3f */ { u32 a_ = ecx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207c46 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 10207c49 jbe 0x10207c51 */ if ((CF_|ZF_)) goto L_10207c51;
  /* 10207c4b push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10207c4d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10207c4e mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
L_10207c51:;
  /* 10207c51 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10207c54 cmp ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207c57 jne 0x10207c9c */ if (!ZF_) goto L_10207c9c;
  /* 10207c59 cmp ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207c5c mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10207c61 jae 0x10207c7d */ if (!CF_) goto L_10207c7d;
  /* 10207c63 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10207c65 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 10207c68 lea ecx, [ecx + eax + 4] */ ecx = (u32)((u32)(ecx + eax + 0x4u));
  /* 10207c6c not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10207c6e and dword ptr [eax + edx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207c72 dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10207c74 jne 0x10207c9c */ if (!ZF_) goto L_10207c9c;
  /* 10207c76 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207c79 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207c7b jmp 0x10207c9c */ goto L_10207c9c;
L_10207c7d:;
  /* 10207c7d add ecx, -0x20 */ { u32 a_ = ecx, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207c80 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10207c82 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 10207c85 lea ecx, [ecx + eax + 4] */ ecx = (u32)((u32)(ecx + eax + 0x4u));
  /* 10207c89 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10207c8b and dword ptr [eax + edx*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207c92 dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10207c94 jne 0x10207c9c */ if (!ZF_) goto L_10207c9c;
  /* 10207c96 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207c99 and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207c9c:;
  /* 10207c9c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207c9f mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10207ca2 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10207ca5 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10207ca8 mov edi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edi = (u32)(M32(m_)); }
  /* 10207cab mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 10207cae mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10207cb1 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207cb3 add dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207cb6 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207cba jle 0x10207d65 */ if ((ZF_|LT_)) goto L_10207d65;
  /* 10207cc0 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 10207cc3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10207cc6 sar edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10207cc9 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207cca cmp edi, 0x3f */ { u32 a_ = edi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207ccd lea ecx, [ecx + esi - 4] */ ecx = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10207cd1 jbe 0x10207cd6 */ if ((CF_|ZF_)) goto L_10207cd6;
  /* 10207cd3 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10207cd5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10207cd6:;
  /* 10207cd6 mov ebx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ebx = (u32)(M32(m_)); }
  /* 10207cd9 lea ebx, [ebx + edi*8] */ ebx = (u32)((u32)(ebx + edi * 8u));
  /* 10207cdc mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 10207cdf mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10207ce2 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10207ce5 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10207ce8 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10207ceb mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10207cee mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10207cf1 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10207cf4 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10207cf7 cmp ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207cfa jne 0x10207d53 */ if (!ZF_) goto L_10207d53;
  /* 10207cfc mov cl, byte ptr [edi + eax + 4] */ { const u32 m_ = (u32)(edi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10207d00 mov byte ptr [ebp + 0x13], cl */ { const u32 m_ = (u32)(ebp + 0x13u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10207d03 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10207d05 cmp edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207d08 mov byte ptr [edi + eax + 4], cl */ { const u32 m_ = (u32)(edi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10207d0c jae 0x10207d2a */ if (!CF_) goto L_10207d2a;
  /* 10207d0e cmp byte ptr [ebp + 0x13], 0 */ { const u32 m_ = (u32)(ebp + 0x13u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10207d12 jne 0x10207d22 */ if (!ZF_) goto L_10207d22;
  /* 10207d14 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10207d16 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10207d1b shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10207d1d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207d20 or dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207d22:;
  /* 10207d22 lea eax, [eax + edx*4 + 0x44] */ eax = (u32)((u32)(eax + edx * 4u + 0x44u));
  /* 10207d26 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10207d28 jmp 0x10207d4a */ goto L_10207d4a;
L_10207d2a:;
  /* 10207d2a cmp byte ptr [ebp + 0x13], 0 */ { const u32 m_ = (u32)(ebp + 0x13u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10207d2e jne 0x10207d40 */ if (!ZF_) goto L_10207d40;
  /* 10207d30 lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
  /* 10207d33 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10207d38 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10207d3a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207d3d or dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207d40:;
  /* 10207d40 lea eax, [eax + edx*4 + 0xc4] */ eax = (u32)((u32)(eax + edx * 4u + 0xc4u));
  /* 10207d47 lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
L_10207d4a:;
  /* 10207d4a mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10207d4f shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10207d51 or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207d53:;
  /* 10207d53 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10207d56 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10207d59 lea eax, [edx + esi - 4] */ eax = (u32)((u32)(edx + esi + 0xfffffffcu));
  /* 10207d5d mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10207d5f mov dword ptr [ecx + eax - 4], ecx */ { const u32 m_ = (u32)(ecx + eax + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10207d63 jmp 0x10207d68 */ goto L_10207d68;
L_10207d65:;
  /* 10207d65 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
L_10207d68:;
  /* 10207d68 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 10207d6b mov dword ptr [edx - 4], eax */ { const u32 m_ = (u32)(edx + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10207d6e mov dword ptr [edx + esi - 8], eax */ { const u32 m_ = (u32)(edx + esi + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10207d72 jmp 0x10207eb3 */ goto L_10207eb3;
L_10207d77:;
  /* 10207d77 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207d79 jmp 0x10207eb6 */ goto L_10207eb6;
L_10207d7e:;
  /* 10207d7e jge 0x10207eb3 */ if (!LT_) goto L_10207eb3;
  /* 10207d84 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10207d87 sub dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207d8a lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 10207d8d mov dword ptr [ebx - 4], ecx */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10207d90 lea ebx, [ebx + esi - 4] */ ebx = (u32)((u32)(ebx + esi + 0xfffffffcu));
  /* 10207d94 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10207d97 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10207d9a dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207d9b cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207d9e mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10207da1 mov dword ptr [ebx - 4], ecx */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10207da4 jbe 0x10207da9 */ if ((CF_|ZF_)) goto L_10207da9;
  /* 10207da6 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10207da8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10207da9:;
  /* 10207da9 test byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10207dad jne 0x10207e33 */ if (!ZF_) goto L_10207e33;
  /* 10207db3 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10207db6 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10207db9 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207dba cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207dbd jbe 0x10207dc2 */ if ((CF_|ZF_)) goto L_10207dc2;
  /* 10207dbf push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10207dc1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10207dc2:;
  /* 10207dc2 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10207dc5 cmp ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207dc8 jne 0x10207e0c */ if (!ZF_) goto L_10207e0c;
  /* 10207dca cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207dcd mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10207dd2 jae 0x10207ded */ if (!CF_) goto L_10207ded;
  /* 10207dd4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10207dd6 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10207dd8 lea esi, [esi + eax + 4] */ esi = (u32)((u32)(esi + eax + 0x4u));
  /* 10207ddc not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10207dde and dword ptr [eax + edx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207de2 dec byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10207de4 jne 0x10207e09 */ if (!ZF_) goto L_10207e09;
  /* 10207de6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207de9 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207deb jmp 0x10207e09 */ goto L_10207e09;
L_10207ded:;
  /* 10207ded lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10207df0 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10207df2 lea ecx, [esi + eax + 4] */ ecx = (u32)((u32)(esi + eax + 0x4u));
  /* 10207df6 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10207df8 and dword ptr [eax + edx*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207dff dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10207e01 jne 0x10207e09 */ if (!ZF_) goto L_10207e09;
  /* 10207e03 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207e06 and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207e09:;
  /* 10207e09 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
L_10207e0c:;
  /* 10207e0c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207e0f mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10207e12 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 10207e15 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 10207e18 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10207e1b mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10207e1e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10207e21 add esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10207e24 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 10207e27 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10207e2a dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207e2b cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207e2e jbe 0x10207e33 */ if ((CF_|ZF_)) goto L_10207e33;
  /* 10207e30 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10207e32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10207e33:;
  /* 10207e33 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10207e36 lea ecx, [ecx + esi*8] */ ecx = (u32)((u32)(ecx + esi * 8u));
  /* 10207e39 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10207e3c mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10207e3f mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10207e42 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10207e45 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10207e48 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10207e4b mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10207e4e cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207e51 jne 0x10207eaa */ if (!ZF_) goto L_10207eaa;
  /* 10207e53 mov cl, byte ptr [esi + eax + 4] */ { const u32 m_ = (u32)(esi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10207e57 mov byte ptr [ebp + 0xf], cl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10207e5a inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10207e5c cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207e5f mov byte ptr [esi + eax + 4], cl */ { const u32 m_ = (u32)(esi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10207e63 jae 0x10207e81 */ if (!CF_) goto L_10207e81;
  /* 10207e65 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10207e69 jne 0x10207e79 */ if (!ZF_) goto L_10207e79;
  /* 10207e6b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10207e6d mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10207e72 shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10207e74 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207e77 or dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207e79:;
  /* 10207e79 lea eax, [eax + edx*4 + 0x44] */ eax = (u32)((u32)(eax + edx * 4u + 0x44u));
  /* 10207e7d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10207e7f jmp 0x10207ea1 */ goto L_10207ea1;
L_10207e81:;
  /* 10207e81 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10207e85 jne 0x10207e97 */ if (!ZF_) goto L_10207e97;
  /* 10207e87 lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10207e8a mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10207e8f shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10207e91 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207e94 or dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207e97:;
  /* 10207e97 lea eax, [eax + edx*4 + 0xc4] */ eax = (u32)((u32)(eax + edx * 4u + 0xc4u));
  /* 10207e9e lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
L_10207ea1:;
  /* 10207ea1 mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10207ea6 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10207ea8 or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10207eaa:;
  /* 10207eaa mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10207ead mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10207eaf mov dword ptr [eax + ebx - 4], eax */ { const u32 m_ = (u32)(eax + ebx + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_10207eb3:;
  /* 10207eb3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207eb5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10207eb6:;
  /* 10207eb6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10207eb7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10207eb8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10207eb9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10207eba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10207ebb(CPU *c) {
  NATIVE_HOOK(0x10207ebbu) REGS; LOADALL;
L_10207ebb:;
  /* 10207ebb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10207ebc mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10207ebe sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10207ec1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10207ec4 mov eax, dword ptr [0x1020e024] */ { const u32 m_ = (u32)(0x1020e024u); eax = (u32)(M32(m_)); }
  /* 10207ec9 mov edx, dword ptr [0x1020e028] */ { const u32 m_ = (u32)(0x1020e028u); edx = (u32)(M32(m_)); }
  /* 10207ecf add ecx, 0x17 */ { u32 a_ = ecx, b_ = 0x17u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207ed2 and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207ed5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10207ed6 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 10207ed9 sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10207edc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10207edd lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10207ee0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10207ee1 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10207ee2 cmp ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207ee5 lea edi, [edx + eax*4] */ edi = (u32)((u32)(edx + eax * 4u));
  /* 10207ee8 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10207eeb jge 0x10207ef8 */ if (!LT_) goto L_10207ef8;
  /* 10207eed or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10207ef0 shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10207ef2 or dword ptr [ebp - 8], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207ef6 jmp 0x10207f05 */ goto L_10207f05;
L_10207ef8:;
  /* 10207ef8 add ecx, -0x20 */ { u32 a_ = ecx, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207efb or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10207efe xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10207f00 shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10207f02 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10207f05:;
  /* 10207f05 mov eax, dword ptr [0x1020e030] */ { const u32 m_ = (u32)(0x1020e030u); eax = (u32)(M32(m_)); }
  /* 10207f0a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10207f0c mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 10207f0f cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207f11 jmp 0x10207f27 */ goto L_10207f27;
L_10207f13:;
  /* 10207f13 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10207f16 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10207f18 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207f1b and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10207f1d or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207f1f jne 0x10207f2c */ if (!ZF_) goto L_10207f2c;
  /* 10207f21 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10207f24 cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_10207f27:;
  /* 10207f27 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10207f2a jb 0x10207f13 */ if (CF_) goto L_10207f13;
L_10207f2c:;
  /* 10207f2c cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207f2f jne 0x10207f55 */ if (!ZF_) goto L_10207f55;
  /* 10207f31 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 10207f33 jmp 0x10207f46 */ goto L_10207f46;
L_10207f35:;
  /* 10207f35 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10207f38 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10207f3a and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207f3d and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10207f3f or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207f41 jne 0x10207f4d */ if (!ZF_) goto L_10207f4d;
  /* 10207f43 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_10207f46:;
  /* 10207f46 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207f48 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10207f4b jb 0x10207f35 */ if (CF_) goto L_10207f35;
L_10207f4d:;
  /* 10207f4d cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207f4f je 0x10207fe9 */ if (ZF_) goto L_10207fe9;
L_10207f55:;
  /* 10207f55 mov dword ptr [0x1020e030], ebx */ { const u32 m_ = (u32)(0x1020e030u); M32(m_) = (u32)(ebx); }
  /* 10207f5b mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10207f5e mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10207f60 cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207f63 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 10207f66 je 0x10207f7c */ if (ZF_) goto L_10207f7c;
  /* 10207f68 mov ecx, dword ptr [eax + edx*4 + 0xc4] */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 10207f6f mov edi, dword ptr [eax + edx*4 + 0x44] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); edi = (u32)(M32(m_)); }
  /* 10207f73 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207f76 and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10207f78 or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207f7a jne 0x10207fb2 */ if (!ZF_) goto L_10207fb2;
L_10207f7c:;
  /* 10207f7c mov edx, dword ptr [eax + 0xc4] */ { const u32 m_ = (u32)(eax + 0xc4u); edx = (u32)(M32(m_)); }
  /* 10207f82 and edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10207f85 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10207f89 lea ecx, [eax + 0x44] */ ecx = (u32)((u32)(eax + 0x44u));
  /* 10207f8c mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10207f8e and esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10207f91 or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10207f93 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 10207f96 jne 0x10207faf */ if (!ZF_) goto L_10207faf;
L_10207f98:;
  /* 10207f98 mov edx, dword ptr [ecx + 0x84] */ { const u32 m_ = (u32)(ecx + 0x84u); edx = (u32)(M32(m_)); }
  /* 10207f9e and edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10207fa1 inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10207fa4 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10207fa7 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 10207fa9 and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10207fab or edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10207fad je 0x10207f98 */ if (ZF_) goto L_10207f98;
L_10207faf:;
  /* 10207faf mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_10207fb2:;
  /* 10207fb2 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10207fb4 imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10207fba lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 10207fc1 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 10207fc4 mov ecx, dword ptr [eax + edx*4 + 0x44] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); ecx = (u32)(M32(m_)); }
  /* 10207fc8 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10207fca and ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207fcc jne 0x1020803b */ if (!ZF_) goto L_1020803b;
  /* 10207fce mov ecx, dword ptr [eax + edx*4 + 0xc4] */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 10207fd5 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10207fd8 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10207fda pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10207fdb jmp 0x1020803b */ goto L_1020803b;
L_10207fdd:;
  /* 10207fdd cmp dword ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207fe1 jne 0x10207fee */ if (!ZF_) goto L_10207fee;
  /* 10207fe3 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10207fe6 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
L_10207fe9:;
  /* 10207fe9 cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207fec jb 0x10207fdd */ if (CF_) goto L_10207fdd;
L_10207fee:;
  /* 10207fee cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207ff1 jne 0x10208019 */ if (!ZF_) goto L_10208019;
  /* 10207ff3 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 10207ff5 jmp 0x10208000 */ goto L_10208000;
L_10207ff7:;
  /* 10207ff7 cmp dword ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10207ffb jne 0x10208007 */ if (!ZF_) goto L_10208007;
  /* 10207ffd add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_10208000:;
  /* 10208000 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208002 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10208005 jb 0x10207ff7 */ if (CF_) goto L_10207ff7;
L_10208007:;
  /* 10208007 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208009 jne 0x10208019 */ if (!ZF_) goto L_10208019;
  /* 1020800b call 0x10207a1f */ esp -= 4; M32(esp) = 0x10208010u; SAVEALL; F_10207a1f(c); ABI_CHECK(0x10207a1fu, 0x1020800bu); RETCHK(0x10208010u, 0x1020800bu); LOADALL;
  /* 10208010 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10208012 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208014 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10208017 je 0x10208031 */ if (ZF_) goto L_10208031;
L_10208019:;
  /* 10208019 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020801a call 0x10207ad6 */ esp -= 4; M32(esp) = 0x1020801fu; SAVEALL; F_10207ad6(c); ABI_CHECK(0x10207ad6u, 0x1020801au); RETCHK(0x1020801fu, 0x1020801au); LOADALL;
  /* 1020801f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208020 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10208023 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10208025 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10208028 cmp dword ptr [eax], -1 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020802b jne 0x10207f55 */ if (!ZF_) goto L_10207f55;
L_10208031:;
  /* 10208031 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10208033 jmp 0x102081b2 */ goto L_102081b2;
L_10208038:;
  /* 10208038 shl ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1020803a inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1020803b:;
  /* 1020803b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020803d jge 0x10208038 */ if (!LT_) goto L_10208038;
  /* 1020803f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10208042 mov edx, dword ptr [ecx + edi*8 + 4] */ { const u32 m_ = (u32)(ecx + edi * 8u + 0x4u); edx = (u32)(M32(m_)); }
  /* 10208046 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 10208048 sub ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1020804b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020804d sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10208050 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10208051 cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208054 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 10208057 jle 0x1020805c */ if ((ZF_|LT_)) goto L_1020805c;
  /* 10208059 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 1020805b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_1020805c:;
  /* 1020805c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020805e je 0x10208165 */ if (ZF_) goto L_10208165;
  /* 10208064 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10208067 cmp ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020806a jne 0x102080c8 */ if (!ZF_) goto L_102080c8;
  /* 1020806c cmp edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020806f mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10208074 jge 0x1020809c */ if (!LT_) goto L_1020809c;
  /* 10208076 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10208078 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 1020807a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 1020807d lea edi, [eax + edi + 4] */ edi = (u32)((u32)(eax + edi + 0x4u));
  /* 10208081 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10208083 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 10208086 and ebx, dword ptr [eax + ecx*4 + 0x44] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1020808a mov dword ptr [eax + ecx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); M32(m_) = (u32)(ebx); }
  /* 1020808e dec byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10208090 jne 0x102080c5 */ if (!ZF_) goto L_102080c5;
  /* 10208092 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 10208095 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10208098 and dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020809a jmp 0x102080c8 */ goto L_102080c8;
L_1020809c:;
  /* 1020809c lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
  /* 1020809f shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 102080a1 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 102080a4 lea ecx, [eax + ecx*4 + 0xc4] */ ecx = (u32)((u32)(eax + ecx * 4u + 0xc4u));
  /* 102080ab lea edi, [eax + edi + 4] */ edi = (u32)((u32)(eax + edi + 0x4u));
  /* 102080af not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 102080b1 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102080b3 dec byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 102080b5 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 102080b8 jne 0x102080c5 */ if (!ZF_) goto L_102080c5;
  /* 102080ba mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 102080bd mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 102080c0 and dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102080c3 jmp 0x102080c8 */ goto L_102080c8;
L_102080c5:;
  /* 102080c5 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_102080c8:;
  /* 102080c8 cmp dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102080cc mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 102080cf mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 102080d2 mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 102080d5 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102080d8 mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 102080db mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 102080de je 0x10208171 */ if (ZF_) goto L_10208171;
  /* 102080e4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 102080e7 lea ecx, [ecx + esi*8] */ ecx = (u32)((u32)(ecx + esi * 8u));
  /* 102080ea mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 102080ed mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 102080f0 mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 102080f3 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 102080f6 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102080f9 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 102080fc mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102080ff cmp ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208102 jne 0x10208162 */ if (!ZF_) goto L_10208162;
  /* 10208104 mov cl, byte ptr [esi + eax + 4] */ { const u32 m_ = (u32)(esi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208108 mov byte ptr [ebp + 0xb], cl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1020810b inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 1020810d cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208110 mov byte ptr [esi + eax + 4], cl */ { const u32 m_ = (u32)(esi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10208114 jge 0x10208139 */ if (!LT_) goto L_10208139;
  /* 10208116 cmp byte ptr [ebp + 0xb], 0 */ { const u32 m_ = (u32)(ebp + 0xbu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1020811a jne 0x10208127 */ if (!ZF_) goto L_10208127;
  /* 1020811c mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10208121 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10208123 shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10208125 or dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10208127:;
  /* 10208127 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10208129 mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 1020812e shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10208130 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10208133 or dword ptr [eax + ecx*4 + 0x44], edi */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10208137 jmp 0x10208162 */ goto L_10208162;
L_10208139:;
  /* 10208139 cmp byte ptr [ebp + 0xb], 0 */ { const u32 m_ = (u32)(ebp + 0xbu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1020813d jne 0x1020814c */ if (!ZF_) goto L_1020814c;
  /* 1020813f lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10208142 mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10208147 shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10208149 or dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1020814c:;
  /* 1020814c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 1020814f lea edi, [eax + ecx*4 + 0xc4] */ edi = (u32)((u32)(eax + ecx * 4u + 0xc4u));
  /* 10208156 lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10208159 mov esi, 0x80000000 */ { esi = (u32)(0x80000000u); }
  /* 1020815e shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10208160 or dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10208162:;
  /* 10208162 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
L_10208165:;
  /* 10208165 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208167 je 0x10208174 */ if (ZF_) goto L_10208174;
  /* 10208169 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 1020816b mov dword ptr [ecx + edx - 4], ecx */ { const u32 m_ = (u32)(ecx + edx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 1020816f jmp 0x10208174 */ goto L_10208174;
L_10208171:;
  /* 10208171 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
L_10208174:;
  /* 10208174 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 10208177 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10208179 lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 1020817c mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 1020817e mov dword ptr [edx + esi - 4], ecx */ { const u32 m_ = (u32)(edx + esi + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10208182 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 10208185 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10208187 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208189 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 1020818c mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 1020818e jne 0x102081aa */ if (!ZF_) goto L_102081aa;
  /* 10208190 cmp ebx, dword ptr [0x1020e020] */ { const u32 m_ = (u32)(0x1020e020u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208196 jne 0x102081aa */ if (!ZF_) goto L_102081aa;
  /* 10208198 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 1020819b cmp ecx, dword ptr [0x1020e038] */ { const u32 m_ = (u32)(0x1020e038u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102081a1 jne 0x102081aa */ if (!ZF_) goto L_102081aa;
  /* 102081a3 and dword ptr [0x1020e020], 0 */ { const u32 m_ = (u32)(0x1020e020u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_102081aa:;
  /* 102081aa mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 102081ad mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 102081af lea eax, [edx + 4] */ eax = (u32)((u32)(edx + 0x4u));
L_102081b2:;
  /* 102081b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102081b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102081b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102081b5 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102081b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102081b7(CPU *c) {
  NATIVE_HOOK(0x102081b7u) REGS; LOADALL;
L_102081b7:;
  /* 102081b7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102081b8 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102081ba sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102081bd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102081be xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 102081c0 cmp dword ptr [0x1020dbf8], ebx */ { const u32 m_ = (u32)(0x1020dbf8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102081c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102081c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102081c8 jne 0x10208237 */ if (!ZF_) goto L_10208237;
  /* 102081ca push 0x1020b930 */ { u32 v_ = 0x1020b930u; esp -= 4; M32(esp) = v_; }
  /* 102081cf call dword ptr [0x1020b0a8] */ { const u32 m_ = (u32)(0x1020b0a8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102081d5u; SAVEALL; call_ind(c, t_); RETCHK(0x102081d5u, 0x102081cfu); LOADALL; }
  /* 102081d5 mov edi, eax */ { edi = (u32)(eax); }
  /* 102081d7 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102081d9 je 0x10208272 */ if (ZF_) goto L_10208272;
  /* 102081df mov esi, dword ptr [0x1020b04c] */ { const u32 m_ = (u32)(0x1020b04cu); esi = (u32)(M32(m_)); }
  /* 102081e5 push 0x1020b924 */ { u32 v_ = 0x1020b924u; esp -= 4; M32(esp) = v_; }
  /* 102081ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102081eb call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x102081edu; SAVEALL; call_ind(c, t_); RETCHK(0x102081edu, 0x102081ebu); LOADALL; }
  /* 102081ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102081ef mov dword ptr [0x1020dbf8], eax */ { const u32 m_ = (u32)(0x1020dbf8u); M32(m_) = (u32)(eax); }
  /* 102081f4 je 0x10208272 */ if (ZF_) goto L_10208272;
  /* 102081f6 push 0x1020b914 */ { u32 v_ = 0x1020b914u; esp -= 4; M32(esp) = v_; }
  /* 102081fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102081fc call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x102081feu; SAVEALL; call_ind(c, t_); RETCHK(0x102081feu, 0x102081fcu); LOADALL; }
  /* 102081fe push 0x1020b900 */ { u32 v_ = 0x1020b900u; esp -= 4; M32(esp) = v_; }
  /* 10208203 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10208204 mov dword ptr [0x1020dbfc], eax */ { const u32 m_ = (u32)(0x1020dbfcu); M32(m_) = (u32)(eax); }
  /* 10208209 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1020820bu; SAVEALL; call_ind(c, t_); RETCHK(0x1020820bu, 0x10208209u); LOADALL; }
  /* 1020820b cmp dword ptr [0x1020d950], 2 */ { const u32 m_ = (u32)(0x1020d950u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208212 mov dword ptr [0x1020dc00], eax */ { const u32 m_ = (u32)(0x1020dc00u); M32(m_) = (u32)(eax); }
  /* 10208217 jne 0x10208237 */ if (!ZF_) goto L_10208237;
  /* 10208219 push 0x1020b8e4 */ { u32 v_ = 0x1020b8e4u; esp -= 4; M32(esp) = v_; }
  /* 1020821e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020821f call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10208221u; SAVEALL; call_ind(c, t_); RETCHK(0x10208221u, 0x1020821fu); LOADALL; }
  /* 10208221 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208223 mov dword ptr [0x1020dc08], eax */ { const u32 m_ = (u32)(0x1020dc08u); M32(m_) = (u32)(eax); }
  /* 10208228 je 0x10208237 */ if (ZF_) goto L_10208237;
  /* 1020822a push 0x1020b8cc */ { u32 v_ = 0x1020b8ccu; esp -= 4; M32(esp) = v_; }
  /* 1020822f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10208230 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10208232u; SAVEALL; call_ind(c, t_); RETCHK(0x10208232u, 0x10208230u); LOADALL; }
  /* 10208232 mov dword ptr [0x1020dc04], eax */ { const u32 m_ = (u32)(0x1020dc04u); M32(m_) = (u32)(eax); }
L_10208237:;
  /* 10208237 mov eax, dword ptr [0x1020dc04] */ { const u32 m_ = (u32)(0x1020dc04u); eax = (u32)(M32(m_)); }
  /* 1020823c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020823e je 0x1020827c */ if (ZF_) goto L_1020827c;
  /* 10208240 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10208242u; SAVEALL; call_ind(c, t_); RETCHK(0x10208242u, 0x10208240u); LOADALL; }
  /* 10208242 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208244 je 0x10208263 */ if (ZF_) goto L_10208263;
  /* 10208246 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10208249 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020824a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 1020824c lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 1020824f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10208250 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10208252 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208253 call dword ptr [0x1020dc08] */ { const u32 m_ = (u32)(0x1020dc08u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10208259u; SAVEALL; call_ind(c, t_); RETCHK(0x10208259u, 0x10208253u); LOADALL; }
  /* 10208259 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020825b je 0x10208263 */ if (ZF_) goto L_10208263;
  /* 1020825d test byte ptr [ebp - 8], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208261 jne 0x1020827c */ if (!ZF_) goto L_1020827c;
L_10208263:;
  /* 10208263 cmp dword ptr [0x1020d95c], 4 */ { const u32 m_ = (u32)(0x1020d95cu); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020826a jb 0x10208276 */ if (CF_) goto L_10208276;
  /* 1020826c or byte ptr [ebp + 0x12], 0x20 */ { const u32 m_ = (u32)(ebp + 0x12u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208270 jmp 0x1020829b */ goto L_1020829b;
L_10208272:;
  /* 10208272 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10208274 jmp 0x102082ab */ goto L_102082ab;
L_10208276:;
  /* 10208276 or byte ptr [ebp + 0x12], 4 */ { const u32 m_ = (u32)(ebp + 0x12u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1020827a jmp 0x1020829b */ goto L_1020829b;
L_1020827c:;
  /* 1020827c mov eax, dword ptr [0x1020dbfc] */ { const u32 m_ = (u32)(0x1020dbfcu); eax = (u32)(M32(m_)); }
  /* 10208281 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208283 je 0x1020829b */ if (ZF_) goto L_1020829b;
  /* 10208285 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10208287u; SAVEALL; call_ind(c, t_); RETCHK(0x10208287u, 0x10208285u); LOADALL; }
  /* 10208287 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10208289 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020828b je 0x1020829b */ if (ZF_) goto L_1020829b;
  /* 1020828d mov eax, dword ptr [0x1020dc00] */ { const u32 m_ = (u32)(0x1020dc00u); eax = (u32)(M32(m_)); }
  /* 10208292 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208294 je 0x1020829b */ if (ZF_) goto L_1020829b;
  /* 10208296 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10208297 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10208299u; SAVEALL; call_ind(c, t_); RETCHK(0x10208299u, 0x10208297u); LOADALL; }
  /* 10208299 mov ebx, eax */ { ebx = (u32)(eax); }
L_1020829b:;
  /* 1020829b push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020829e push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102082a1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102082a4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102082a5 call dword ptr [0x1020dbf8] */ { const u32 m_ = (u32)(0x1020dbf8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102082abu; SAVEALL; call_ind(c, t_); RETCHK(0x102082abu, 0x102082a5u); LOADALL; }
L_102082ab:;
  /* 102082ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102082ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102082ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102082ae leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102082af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102082b0(CPU *c) {
  NATIVE_HOOK(0x102082b0u) REGS; LOADALL;
L_102082b0:;
  /* 102082b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102082b1 mov edi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edi = (u32)(M32(m_)); }
  /* 102082b5 jmp 0x10208325 */ goto L_10208325;
L_10208325:;
  /* 10208325 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10208329 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020832f je 0x1020834e */ if (ZF_) goto L_1020834e;
L_10208331:;
  /* 10208331 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208333 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208336 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208338 je 0x102083a0 */ if (ZF_) goto L_102083a0;
  /* 1020833a mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1020833c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020833f test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208345 jne 0x10208331 */ if (!ZF_) goto L_10208331;
  /* 10208347 jmp 0x1020834e */ goto L_1020834e;
L_10208349:;
  /* 10208349 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 1020834b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_1020834e:;
  /* 1020834e mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10208353 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10208355 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10208357 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020835a xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020835c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 1020835e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208361 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208366 je 0x10208349 */ if (ZF_) goto L_10208349;
  /* 10208368 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1020836a je 0x102083a0 */ if (ZF_) goto L_102083a0;
  /* 1020836c test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1020836e je 0x10208397 */ if (ZF_) goto L_10208397;
  /* 10208370 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208376 je 0x1020838a */ if (ZF_) goto L_1020838a;
  /* 10208378 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020837e je 0x10208382 */ if (ZF_) goto L_10208382;
  /* 10208380 jmp 0x10208349 */ goto L_10208349;
L_10208382:;
  /* 10208382 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10208384 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208388 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208389 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020838a:;
  /* 1020838a mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1020838d mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208391 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10208395 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208396 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208397:;
  /* 10208397 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1020839a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020839e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020839f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102083a0:;
  /* 102083a0 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 102083a2 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102083a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102083a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102082c0(CPU *c) {
  NATIVE_HOOK(0x102082c0u) REGS; LOADALL;
L_102082c0:;
  /* 102082c0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102082c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102082c5 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102082cb je 0x102082e0 */ if (ZF_) goto L_102082e0;
L_102082cd:;
  /* 102082cd mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102082cf add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102082d2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 102082d4 je 0x10208313 */ if (ZF_) goto L_10208313;
  /* 102082d6 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102082dc jne 0x102082cd */ if (!ZF_) goto L_102082cd;
  /* 102082de mov edi, edi */ { edi = (u32)(edi); }
L_102082e0:;
  /* 102082e0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102082e2 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 102082e7 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 102082e9 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102082ec xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102082ee add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102082f1 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102082f6 je 0x102082e0 */ if (ZF_) goto L_102082e0;
  /* 102082f8 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 102082fb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 102082fd je 0x10208322 */ if (ZF_) goto L_10208322;
  /* 102082ff test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208301 je 0x1020831d */ if (ZF_) goto L_1020831d;
  /* 10208303 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208308 je 0x10208318 */ if (ZF_) goto L_10208318;
  /* 1020830a test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020830f je 0x10208313 */ if (ZF_) goto L_10208313;
  /* 10208311 jmp 0x102082e0 */ goto L_102082e0;
L_10208313:;
  /* 10208313 lea edi, [ecx - 1] */ edi = (u32)((u32)(ecx + 0xffffffffu));
  /* 10208316 jmp 0x10208325 */ goto L_10208325;
L_10208318:;
  /* 10208318 lea edi, [ecx - 2] */ edi = (u32)((u32)(ecx + 0xfffffffeu));
  /* 1020831b jmp 0x10208325 */ goto L_10208325;
L_1020831d:;
  /* 1020831d lea edi, [ecx - 3] */ edi = (u32)((u32)(ecx + 0xfffffffdu));
  /* 10208320 jmp 0x10208325 */ goto L_10208325;
L_10208322:;
  /* 10208322 lea edi, [ecx - 4] */ edi = (u32)((u32)(ecx + 0xfffffffcu));
L_10208325:;
  /* 10208325 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10208329 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020832f je 0x1020834e */ if (ZF_) goto L_1020834e;
L_10208331:;
  /* 10208331 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208333 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208336 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208338 je 0x102083a0 */ if (ZF_) goto L_102083a0;
  /* 1020833a mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1020833c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020833f test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208345 jne 0x10208331 */ if (!ZF_) goto L_10208331;
  /* 10208347 jmp 0x1020834e */ goto L_1020834e;
L_10208349:;
  /* 10208349 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 1020834b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_1020834e:;
  /* 1020834e mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10208353 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10208355 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10208357 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020835a xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020835c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 1020835e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208361 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208366 je 0x10208349 */ if (ZF_) goto L_10208349;
  /* 10208368 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1020836a je 0x102083a0 */ if (ZF_) goto L_102083a0;
  /* 1020836c test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1020836e je 0x10208397 */ if (ZF_) goto L_10208397;
  /* 10208370 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208376 je 0x1020838a */ if (ZF_) goto L_1020838a;
  /* 10208378 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020837e je 0x10208382 */ if (ZF_) goto L_10208382;
  /* 10208380 jmp 0x10208349 */ goto L_10208349;
L_10208382:;
  /* 10208382 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10208384 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208388 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208389 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020838a:;
  /* 1020838a mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1020838d mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208391 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10208395 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208396 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208397:;
  /* 10208397 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1020839a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020839e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020839f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102083a0:;
  /* 102083a0 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 102083a2 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102083a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102083a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102083b0(CPU *c) {
  NATIVE_HOOK(0x102083b0u) REGS; LOADALL;
L_102083b0:;
  /* 102083b0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102083b4 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102083ba je 0x102083e0 */ if (ZF_) goto L_102083e0;
L_102083bc:;
  /* 102083bc mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102083be add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102083c1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 102083c3 je 0x10208413 */ if (ZF_) goto L_10208413;
  /* 102083c5 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102083cb jne 0x102083bc */ if (!ZF_) goto L_102083bc;
  /* 102083cd add eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 102083d2 lea esp, [esp] */ esp = (u32)((u32)(esp));
  /* 102083d9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_102083e0:;
  /* 102083e0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102083e2 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 102083e7 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 102083e9 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102083ec xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102083ee add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102083f1 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102083f6 je 0x102083e0 */ if (ZF_) goto L_102083e0;
  /* 102083f8 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 102083fb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 102083fd je 0x10208431 */ if (ZF_) goto L_10208431;
  /* 102083ff test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208401 je 0x10208427 */ if (ZF_) goto L_10208427;
  /* 10208403 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208408 je 0x1020841d */ if (ZF_) goto L_1020841d;
  /* 1020840a test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020840f je 0x10208413 */ if (ZF_) goto L_10208413;
  /* 10208411 jmp 0x102083e0 */ goto L_102083e0;
L_10208413:;
  /* 10208413 lea eax, [ecx - 1] */ eax = (u32)((u32)(ecx + 0xffffffffu));
  /* 10208416 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1020841a sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020841c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020841d:;
  /* 1020841d lea eax, [ecx - 2] */ eax = (u32)((u32)(ecx + 0xfffffffeu));
  /* 10208420 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10208424 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208426 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208427:;
  /* 10208427 lea eax, [ecx - 3] */ eax = (u32)((u32)(ecx + 0xfffffffdu));
  /* 1020842a mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1020842e sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208430 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208431:;
  /* 10208431 lea eax, [ecx - 4] */ eax = (u32)((u32)(ecx + 0xfffffffcu));
  /* 10208434 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10208438 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020843a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020843b(CPU *c) {
  NATIVE_HOOK(0x1020843bu) REGS; LOADALL;
L_1020843b:;
  /* 1020843b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1020843c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1020843e sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10208441 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10208442 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208443 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10208446 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10208449 test bl, 3 */ { u32 a_ = (ebx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1020844c jne 0x10208469 */ if (!ZF_) goto L_10208469;
  /* 1020844e mov eax, dword ptr fs:[0x18] */ { const u32 m_ = (u32)(0x18u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10208454 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10208457 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020845a mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1020845d cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020845f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10208462 jb 0x10208470 */ if (CF_) goto L_10208470;
  /* 10208464 cmp ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208467 jae 0x10208470 */ if (!CF_) goto L_10208470;
L_10208469:;
  /* 10208469 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020846b jmp 0x10208660 */ goto L_10208660;
L_10208470:;
  /* 10208470 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10208471 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 10208474 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208477 jne 0x10208481 */ if (!ZF_) goto L_10208481;
L_10208479:;
  /* 10208479 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020847b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020847c jmp 0x1020865f */ goto L_1020865f;
L_10208481:;
  /* 10208481 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10208483 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10208486 mov eax, ebx */ { eax = (u32)(ebx); }
L_10208488:;
  /* 10208488 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1020848a cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020848d je 0x10208497 */ if (ZF_) goto L_10208497;
  /* 1020848f cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208491 jae 0x102085dc */ if (!CF_) goto L_102085dc;
L_10208497:;
  /* 10208497 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020849b je 0x102084a0 */ if (ZF_) goto L_102084a0;
  /* 1020849d inc dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_102084a0:;
  /* 102084a0 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102084a1 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 102084a4 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102084a6 jbe 0x10208488 */ if ((CF_|ZF_)) goto L_10208488;
  /* 102084a8 cmp dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102084ac je 0x102084c2 */ if (ZF_) goto L_102084c2;
  /* 102084ae mov eax, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102084b1 cmp eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102084b4 jb 0x102085dc */ if (CF_) goto L_102085dc;
  /* 102084ba cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102084bc jae 0x102085dc */ if (!CF_) goto L_102085dc;
L_102084c2:;
  /* 102084c2 mov eax, dword ptr [0x1020dc10] */ { const u32 m_ = (u32)(0x1020dc10u); eax = (u32)(M32(m_)); }
  /* 102084c7 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 102084c9 and edi, 0xfffff000 */ { u32 a_ = edi, b_ = 0xfffff000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 102084cf xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102084d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102084d3 jle 0x102084e7 */ if ((ZF_|LT_)) goto L_102084e7;
L_102084d5:;
  /* 102084d5 cmp dword ptr [esi*4 + 0x1020dc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1020dc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102084dc je 0x102085e0 */ if (ZF_) goto L_102085e0;
  /* 102084e2 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102084e3 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102084e5 jl 0x102084d5 */ if (LT_) goto L_102084d5;
L_102084e7:;
  /* 102084e7 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 102084e9 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 102084ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102084ed push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102084ee call dword ptr [0x1020b0b0] */ { const u32 m_ = (u32)(0x1020b0b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102084f4u; SAVEALL; call_ind(c, t_); RETCHK(0x102084f4u, 0x102084eeu); LOADALL; }
  /* 102084f4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102084f6 je 0x1020865c */ if (ZF_) goto L_1020865c;
  /* 102084fc cmp dword ptr [ebp - 8], 0x1000000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x1000000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208503 jne 0x1020865c */ if (!ZF_) goto L_1020865c;
  /* 10208509 test byte ptr [ebp - 0xc], 0xcc */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M8(m_), b_ = 0xccu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1020850d je 0x10208565 */ if (ZF_) goto L_10208565;
  /* 1020850f mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 10208512 cmp word ptr [ecx], 0x5a4d */ { const u32 m_ = (u32)(ecx); u32 a_ = M16(m_), b_ = 0x5a4du; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10208517 jne 0x1020865c */ if (!ZF_) goto L_1020865c;
  /* 1020851d mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10208520 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208522 cmp dword ptr [eax], 0x4550 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x4550u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208528 jne 0x1020865c */ if (!ZF_) goto L_1020865c;
  /* 1020852e cmp word ptr [eax + 0x18], 0x10b */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M16(m_), b_ = 0x10bu; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10208534 jne 0x1020865c */ if (!ZF_) goto L_1020865c;
  /* 1020853a sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 1020853c cmp word ptr [eax + 6], 0 */ { const u32 m_ = (u32)(eax + 0x6u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10208541 movzx ecx, word ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M16(m_)); }
  /* 10208545 lea ecx, [ecx + eax + 0x18] */ ecx = (u32)((u32)(ecx + eax + 0x18u));
  /* 10208549 jbe 0x1020865c */ if ((CF_|ZF_)) goto L_1020865c;
  /* 1020854f mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10208552 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208554 jb 0x10208565 */ if (CF_) goto L_10208565;
  /* 10208556 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10208559 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1020855b cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020855d jae 0x10208565 */ if (!CF_) goto L_10208565;
  /* 1020855f test byte ptr [ecx + 0x27], 0x80 */ { const u32 m_ = (u32)(ecx + 0x27u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208563 jne 0x102085dc */ if (!ZF_) goto L_102085dc;
L_10208565:;
  /* 10208565 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10208567 push 0x1020dc58 */ { u32 v_ = 0x1020dc58u; esp -= 4; M32(esp) = v_; }
  /* 1020856c call dword ptr [0x1020b0ac] */ { const u32 m_ = (u32)(0x1020b0acu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10208572u; SAVEALL; call_ind(c, t_); RETCHK(0x10208572u, 0x1020856cu); LOADALL; }
  /* 10208572 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208574 jne 0x10208479 */ if (!ZF_) goto L_10208479;
  /* 1020857a mov ecx, dword ptr [0x1020dc10] */ { const u32 m_ = (u32)(0x1020dc10u); ecx = (u32)(M32(m_)); }
  /* 10208580 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208582 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10208584 jle 0x10208599 */ if ((ZF_|LT_)) goto L_10208599;
  /* 10208586 lea eax, [ecx*4 + 0x1020dc14] */ eax = (u32)((u32)(ecx * 4u + 0x1020dc14u));
L_1020858d:;
  /* 1020858d cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020858f je 0x10208599 */ if (ZF_) goto L_10208599;
  /* 10208591 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10208592 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208595 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208597 jg 0x1020858d */ if (!(ZF_|LT_)) goto L_1020858d;
L_10208599:;
  /* 10208599 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020859b jne 0x102085ca */ if (!ZF_) goto L_102085ca;
  /* 1020859d push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 1020859f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102085a0 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102085a2 jg 0x102085a6 */ if (!(ZF_|LT_)) goto L_102085a6;
  /* 102085a4 mov ebx, ecx */ { ebx = (u32)(ecx); }
L_102085a6:;
  /* 102085a6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102085a8 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102085aa jl 0x102085be */ if (LT_) goto L_102085be;
L_102085ac:;
  /* 102085ac lea eax, [edx*4 + 0x1020dc18] */ eax = (u32)((u32)(edx * 4u + 0x1020dc18u));
  /* 102085b3 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 102085b5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102085b6 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102085b8 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 102085ba mov edi, esi */ { edi = (u32)(esi); }
  /* 102085bc jle 0x102085ac */ if ((ZF_|LT_)) goto L_102085ac;
L_102085be:;
  /* 102085be cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102085c1 jge 0x102085ca */ if (!LT_) goto L_102085ca;
  /* 102085c3 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102085c4 mov dword ptr [0x1020dc10], ecx */ { const u32 m_ = (u32)(0x1020dc10u); M32(m_) = (u32)(ecx); }
L_102085ca:;
  /* 102085ca push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102085cc push 0x1020dc58 */ { u32 v_ = 0x1020dc58u; esp -= 4; M32(esp) = v_; }
  /* 102085d1 call dword ptr [0x1020b0ac] */ { const u32 m_ = (u32)(0x1020b0acu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102085d7u; SAVEALL; call_ind(c, t_); RETCHK(0x102085d7u, 0x102085d1u); LOADALL; }
  /* 102085d7 jmp 0x10208479 */ goto L_10208479;
L_102085dc:;
  /* 102085dc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102085de jmp 0x1020865f */ goto L_1020865f;
L_102085e0:;
  /* 102085e0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102085e2 jle 0x10208479 */ if ((ZF_|LT_)) goto L_10208479;
  /* 102085e8 mov ebx, dword ptr [0x1020b0ac] */ { const u32 m_ = (u32)(0x1020b0acu); ebx = (u32)(M32(m_)); }
  /* 102085ee push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 102085f0 push 0x1020dc58 */ { u32 v_ = 0x1020dc58u; esp -= 4; M32(esp) = v_; }
  /* 102085f5 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x102085f7u; SAVEALL; call_ind(c, t_); RETCHK(0x102085f7u, 0x102085f5u); LOADALL; }
  /* 102085f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102085f9 jne 0x10208479 */ if (!ZF_) goto L_10208479;
  /* 102085ff cmp dword ptr [esi*4 + 0x1020dc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1020dc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208606 je 0x10208636 */ if (ZF_) goto L_10208636;
  /* 10208608 mov eax, dword ptr [0x1020dc10] */ { const u32 m_ = (u32)(0x1020dc10u); eax = (u32)(M32(m_)); }
  /* 1020860d lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 10208610 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208612 jl 0x10208624 */ if (LT_) goto L_10208624;
L_10208614:;
  /* 10208614 cmp dword ptr [esi*4 + 0x1020dc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1020dc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020861b je 0x10208620 */ if (ZF_) goto L_10208620;
  /* 1020861d dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1020861e jns 0x10208614 */ if (!SF_) goto L_10208614;
L_10208620:;
  /* 10208620 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208622 jge 0x10208634 */ if (!LT_) goto L_10208634;
L_10208624:;
  /* 10208624 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208627 jge 0x1020862f */ if (!LT_) goto L_1020862f;
  /* 10208629 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020862a mov dword ptr [0x1020dc10], eax */ { const u32 m_ = (u32)(0x1020dc10u); M32(m_) = (u32)(eax); }
L_1020862f:;
  /* 1020862f lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 10208632 jmp 0x10208636 */ goto L_10208636;
L_10208634:;
  /* 10208634 je 0x1020864e */ if (ZF_) goto L_1020864e;
L_10208636:;
  /* 10208636 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10208638 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020863a jl 0x1020864e */ if (LT_) goto L_1020864e;
L_1020863c:;
  /* 1020863c lea eax, [ecx*4 + 0x1020dc18] */ eax = (u32)((u32)(ecx * 4u + 0x1020dc18u));
  /* 10208643 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10208645 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208646 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208648 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 1020864a mov edi, edx */ { edi = (u32)(edx); }
  /* 1020864c jle 0x1020863c */ if ((ZF_|LT_)) goto L_1020863c;
L_1020864e:;
  /* 1020864e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10208650 push 0x1020dc58 */ { u32 v_ = 0x1020dc58u; esp -= 4; M32(esp) = v_; }
  /* 10208655 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x10208657u; SAVEALL; call_ind(c, t_); RETCHK(0x10208657u, 0x10208655u); LOADALL; }
  /* 10208657 jmp 0x10208479 */ goto L_10208479;
L_1020865c:;
  /* 1020865c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1020865f:;
  /* 1020865f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10208660:;
  /* 10208660 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208661 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10208662 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208663 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208664(CPU *c) {
  NATIVE_HOOK(0x10208664u) REGS; LOADALL;
L_10208664:;
  /* 10208664 mov eax, dword ptr [0x1020dc5c] */ { const u32 m_ = (u32)(0x1020dc5cu); eax = (u32)(M32(m_)); }
  /* 10208669 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020866b je 0x1020867c */ if (ZF_) goto L_1020867c;
  /* 1020866d push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208671 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10208673u; SAVEALL; call_ind(c, t_); RETCHK(0x10208673u, 0x10208671u); LOADALL; }
  /* 10208673 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208675 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208676 je 0x1020867c */ if (ZF_) goto L_1020867c;
  /* 10208678 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020867a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020867b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020867c:;
  /* 1020867c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020867e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020867f(CPU *c) {
  NATIVE_HOOK(0x1020867fu) REGS; LOADALL;
L_1020867f:;
  /* 1020867f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208680 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10208684 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10208686 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020868c jne 0x102086aa */ if (!ZF_) goto L_102086aa;
  /* 1020868e cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208692 jne 0x102086aa */ if (!ZF_) goto L_102086aa;
  /* 10208694 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 10208697 cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020869c je 0x102086a5 */ if (ZF_) goto L_102086a5;
  /* 1020869e cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102086a3 jne 0x102086aa */ if (!ZF_) goto L_102086aa;
L_102086a5:;
  /* 102086a5 call 0x10206717 */ esp -= 4; M32(esp) = 0x102086aau; SAVEALL; F_10206717(c); ABI_CHECK(0x10206717u, 0x102086a5u); RETCHK(0x102086aau, 0x102086a5u); LOADALL;
L_102086aa:;
  /* 102086aa mov eax, dword ptr [0x1020dc64] */ { const u32 m_ = (u32)(0x1020dc64u); eax = (u32)(M32(m_)); }
  /* 102086af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102086b1 je 0x102086c7 */ if (ZF_) goto L_102086c7;
  /* 102086b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102086b4 call 0x102087b0 */ esp -= 4; M32(esp) = 0x102086b9u; SAVEALL; F_102087b0(c); ABI_CHECK(0x102087b0u, 0x102086b4u); RETCHK(0x102086b9u, 0x102086b4u); LOADALL;
  /* 102086b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102086bb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102086bc je 0x102086c7 */ if (ZF_) goto L_102086c7;
  /* 102086be push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102086bf call dword ptr [0x1020dc64] */ { const u32 m_ = (u32)(0x1020dc64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102086c5u; SAVEALL; call_ind(c, t_); RETCHK(0x102086c5u, 0x102086bfu); LOADALL; }
  /* 102086c5 jmp 0x102086c9 */ goto L_102086c9;
L_102086c7:;
  /* 102086c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_102086c9:;
  /* 102086c9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102086ca ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102086cd(CPU *c) {
  NATIVE_HOOK(0x102086cdu) REGS; LOADALL;
L_102086cd:;
  /* 102086cd push 0x1020867f */ { u32 v_ = 0x1020867fu; esp -= 4; M32(esp) = v_; }
  /* 102086d2 call dword ptr [0x1020b0b4] */ { const u32 m_ = (u32)(0x1020b0b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102086d8u; SAVEALL; call_ind(c, t_); RETCHK(0x102086d8u, 0x102086d2u); LOADALL; }
  /* 102086d8 mov dword ptr [0x1020dc64], eax */ { const u32 m_ = (u32)(0x1020dc64u); M32(m_) = (u32)(eax); }
  /* 102086dd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102086df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102086e0(CPU *c) {
  NATIVE_HOOK(0x102086e0u) REGS; LOADALL;
L_102086e0:;
  /* 102086e0 push dword ptr [0x1020dc64] */ { const u32 m_ = (u32)(0x1020dc64u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102086e6 call dword ptr [0x1020b0b4] */ { const u32 m_ = (u32)(0x1020b0b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102086ecu; SAVEALL; call_ind(c, t_); RETCHK(0x102086ecu, 0x102086e6u); LOADALL; }
  /* 102086ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102086f0(CPU *c) {
  NATIVE_HOOK(0x102086f0u) REGS; LOADALL;
L_102086f0:;
  /* 102086f0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 102086f4 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 102086f8 test edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102086fe jne 0x1020873c */ if (!ZF_) goto L_1020873c;
L_10208700:;
  /* 10208700 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 10208702 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10208704 jne 0x10208734 */ if (!ZF_) goto L_10208734;
  /* 10208706 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10208708 je 0x10208730 */ if (ZF_) goto L_10208730;
  /* 1020870a cmp ah, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1020870d jne 0x10208734 */ if (!ZF_) goto L_10208734;
  /* 1020870f or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10208711 je 0x10208730 */ if (ZF_) goto L_10208730;
  /* 10208713 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10208716 cmp al, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10208719 jne 0x10208734 */ if (!ZF_) goto L_10208734;
  /* 1020871b or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1020871d je 0x10208730 */ if (ZF_) goto L_10208730;
  /* 1020871f cmp ah, byte ptr [ecx + 3] */ { const u32 m_ = (u32)(ecx + 0x3u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10208722 jne 0x10208734 */ if (!ZF_) goto L_10208734;
  /* 10208724 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208727 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1020872a or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 1020872c jne 0x10208700 */ if (!ZF_) goto L_10208700;
  /* 1020872e mov edi, edi */ { edi = (u32)(edi); }
L_10208730:;
  /* 10208730 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10208732 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208734:;
  /* 10208734 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10208736 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10208738 add eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020873b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020873c:;
  /* 1020873c test edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10208742 je 0x1020875c */ if (ZF_) goto L_1020875c;
  /* 10208744 mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208746 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10208749 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1020874b jne 0x10208734 */ if (!ZF_) goto L_10208734;
  /* 1020874d add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208750 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10208752 je 0x10208730 */ if (ZF_) goto L_10208730;
  /* 10208754 test edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020875a je 0x10208700 */ if (ZF_) goto L_10208700;
L_1020875c:;
  /* 1020875c mov ax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1020875f add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10208762 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10208764 jne 0x10208734 */ if (!ZF_) goto L_10208734;
  /* 10208766 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10208768 je 0x10208730 */ if (ZF_) goto L_10208730;
  /* 1020876a cmp ah, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1020876d jne 0x10208734 */ if (!ZF_) goto L_10208734;
  /* 1020876f or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10208771 je 0x10208730 */ if (ZF_) goto L_10208730;
  /* 10208773 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208776 jmp 0x10208700 */ goto L_10208700;
}

void F_10208778(CPU *c) {
  NATIVE_HOOK(0x10208778u) REGS; LOADALL;
L_10208778:;
  /* 10208778 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208779 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020877d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1020877f push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208783 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208784 call dword ptr [0x1020b0b8] */ { const u32 m_ = (u32)(0x1020b0b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020878au; SAVEALL; call_ind(c, t_); RETCHK(0x1020878au, 0x10208784u); LOADALL; }
  /* 1020878a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020878c je 0x10208790 */ if (ZF_) goto L_10208790;
  /* 1020878e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10208790:;
  /* 10208790 mov eax, esi */ { eax = (u32)(esi); }
  /* 10208792 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208793 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208794(CPU *c) {
  NATIVE_HOOK(0x10208794u) REGS; LOADALL;
L_10208794:;
  /* 10208794 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208795 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208799 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1020879b push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020879f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102087a0 call dword ptr [0x1020b0a4] */ { const u32 m_ = (u32)(0x1020b0a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102087a6u; SAVEALL; call_ind(c, t_); RETCHK(0x102087a6u, 0x102087a0u); LOADALL; }
  /* 102087a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102087a8 je 0x102087ac */ if (ZF_) goto L_102087ac;
  /* 102087aa xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_102087ac:;
  /* 102087ac mov eax, esi */ { eax = (u32)(esi); }
  /* 102087ae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102087af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102087b0(CPU *c) {
  NATIVE_HOOK(0x102087b0u) REGS; LOADALL;
L_102087b0:;
  /* 102087b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102087b1 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102087b5 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102087b7 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102087b8 call dword ptr [0x1020b0bc] */ { const u32 m_ = (u32)(0x1020b0bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102087beu; SAVEALL; call_ind(c, t_); RETCHK(0x102087beu, 0x102087b8u); LOADALL; }
  /* 102087be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102087c0 je 0x102087c4 */ if (ZF_) goto L_102087c4;
  /* 102087c2 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_102087c4:;
  /* 102087c4 mov eax, esi */ { eax = (u32)(esi); }
  /* 102087c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102087c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102087d0(CPU *c) {
  NATIVE_HOOK(0x102087d0u) REGS; LOADALL;
L_102087d0:;
  /* 102087d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102087d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102087d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102087d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102087d5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 102087d8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 102087db mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 102087de mov eax, ecx */ { eax = (u32)(ecx); }
  /* 102087e0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 102087e2 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 102087e4 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102087e6 jbe 0x102087f0 */ if ((CF_|ZF_)) goto L_102087f0;
  /* 102087e8 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102087ea jb 0x1020896c */ if (CF_) goto L_1020896c;
L_102087f0:;
  /* 102087f0 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102087f6 jne 0x1020880c */ if (!ZF_) goto L_1020880c;
  /* 102087f8 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 102087fb and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102087fe cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208801 jb 0x1020882c */ if (CF_) goto L_1020882c;
  /* 10208803 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10208805 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020880c:;
  /* 1020880c mov eax, edi */ { eax = (u32)(edi); }
  /* 1020880e mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10208813 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208816 jb 0x10208824 */ if (CF_) goto L_10208824;
  /* 10208818 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020881b add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1020881d jmp dword ptr [eax*4 + 0x10208830] */ { const u32 m_ = (u32)(eax * 4u + 0x10208830u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10208824:;
  /* 10208824 jmp dword ptr [ecx*4 + 0x1020892c] */ { const u32 m_ = (u32)(ecx * 4u + 0x1020892cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1020882c:;
  /* 1020882c jmp dword ptr [ecx*4 + 0x102088b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x102088b0u); u32 t_ = M32(m_); switch (t_) { case 0x102088d0u: goto L_102088d0; case 0x102088d8u: goto L_102088d8; case 0x102088e0u: goto L_102088e0; case 0x102088e8u: goto L_102088e8; case 0x102088f0u: goto L_102088f0; case 0x102088f8u: goto L_102088f8; case 0x10208900u: goto L_10208900; case 0x10208913u: goto L_10208913; default: SAVEALL; call_ind(c, t_); return; } }
L_102088d0:;
  /* 102088d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102088d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102088d8:;
  /* 102088d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102088dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_102088e0:;
  /* 102088e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102088e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_102088e8:;
  /* 102088e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102088ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_102088f0:;
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_102088f8:;
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10208900:;
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10208913:;
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020896c:;
  /* 1020896c lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10208970 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10208974 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020897a jne 0x102089a0 */ if (!ZF_) goto L_102089a0;
  /* 1020897c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1020897f and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10208982 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208985 jb 0x10208994 */ if (CF_) goto L_10208994;
  /* 10208987 std */ c->df = 1;
  /* 10208988 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1020898a cld */ c->df = 0;
  /* 1020898b jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208994:;
  /* 10208994 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10208996 jmp dword ptr [ecx*4 + 0x10208a68] */ { const u32 m_ = (u32)(ecx * 4u + 0x10208a68u); u32 t_ = M32(m_); switch (t_) { case 0x10208aafu: goto L_10208aaf; default: SAVEALL; call_ind(c, t_); return; } }
L_102089a0:;
  /* 102089a0 mov eax, edi */ { eax = (u32)(edi); }
  /* 102089a2 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 102089a7 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102089aa jb 0x102089b8 */ if (CF_) goto L_102089b8;
  /* 102089ac and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102089af sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102089b1 jmp dword ptr [eax*4 + 0x102089bc] */ { const u32 m_ = (u32)(eax * 4u + 0x102089bcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_102089b8:;
  /* 102089b8 jmp dword ptr [ecx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(ecx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208aaf:;
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208830(CPU *c) {
  NATIVE_HOOK(0x10208830u) REGS; LOADALL;
L_10208830:;
  /* 10208830 mov byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 10208832 adc byte ptr [eax + 0x10208840], dl */ { const u32 m_ = (u32)(eax + 0x10208840u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10208838 insb byte ptr es:[edi], dx */ TRAP(0x10208838u, "insb");
}

void F_10208840(CPU *c) {
  NATIVE_HOOK(0x10208840u) REGS; LOADALL;
  goto L_10208840;
L_1020882c:;
  /* 1020882c jmp dword ptr [ecx*4 + 0x102088b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x102088b0u); u32 t_ = M32(m_); switch (t_) { case 0x102088d0u: goto L_102088d0; case 0x102088d8u: goto L_102088d8; case 0x102088e0u: goto L_102088e0; case 0x102088e8u: goto L_102088e8; case 0x102088f0u: goto L_102088f0; case 0x102088f8u: goto L_102088f8; case 0x10208900u: goto L_10208900; case 0x10208913u: goto L_10208913; default: SAVEALL; call_ind(c, t_); return; } }
L_10208840:;
  /* 10208840 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10208842 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208844 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208846 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208849 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020884c mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020884f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10208852 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208855 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208858 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020885b cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020885e jb 0x1020882c */ if (CF_) goto L_1020882c;
  /* 10208860 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10208862 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_102088d0:;
  /* 102088d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102088d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102088d8:;
  /* 102088d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102088dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_102088e0:;
  /* 102088e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102088e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_102088e8:;
  /* 102088e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102088ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_102088f0:;
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_102088f8:;
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10208900:;
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10208913:;
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020886c(CPU *c) {
  NATIVE_HOOK(0x1020886cu) REGS; LOADALL;
  goto L_1020886c;
L_1020882c:;
  /* 1020882c jmp dword ptr [ecx*4 + 0x102088b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x102088b0u); u32 t_ = M32(m_); switch (t_) { case 0x102088d0u: goto L_102088d0; case 0x102088d8u: goto L_102088d8; case 0x102088e0u: goto L_102088e0; case 0x102088e8u: goto L_102088e8; case 0x102088f0u: goto L_102088f0; case 0x102088f8u: goto L_102088f8; case 0x10208900u: goto L_10208900; case 0x10208913u: goto L_10208913; default: SAVEALL; call_ind(c, t_); return; } }
L_1020886c:;
  /* 1020886c and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1020886e mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208870 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208872 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208875 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10208878 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020887b add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1020887e add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208881 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208884 jb 0x1020882c */ if (CF_) goto L_1020882c;
  /* 10208886 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10208888 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_102088d0:;
  /* 102088d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102088d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102088d8:;
  /* 102088d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102088dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_102088e0:;
  /* 102088e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102088e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_102088e8:;
  /* 102088e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102088ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_102088f0:;
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_102088f8:;
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10208900:;
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10208913:;
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208890(CPU *c) {
  NATIVE_HOOK(0x10208890u) REGS; LOADALL;
  goto L_10208890;
L_1020882c:;
  /* 1020882c jmp dword ptr [ecx*4 + 0x102088b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x102088b0u); u32 t_ = M32(m_); switch (t_) { case 0x102088d0u: goto L_102088d0; case 0x102088d8u: goto L_102088d8; case 0x102088e0u: goto L_102088e0; case 0x102088e8u: goto L_102088e8; case 0x102088f0u: goto L_102088f0; case 0x102088f8u: goto L_102088f8; case 0x10208900u: goto L_10208900; case 0x10208913u: goto L_10208913; default: SAVEALL; call_ind(c, t_); return; } }
L_10208890:;
  /* 10208890 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10208892 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208894 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208896 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208899 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1020889c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020889f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102088a2 jb 0x1020882c */ if (CF_) goto L_1020882c;
  /* 102088a4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 102088a6 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_102088d0:;
  /* 102088d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102088d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102088d8:;
  /* 102088d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102088dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_102088e0:;
  /* 102088e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102088e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_102088e8:;
  /* 102088e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102088ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_102088f0:;
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_102088f8:;
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10208900:;
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10208913:;
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102088b0(CPU *c) {
  NATIVE_HOOK(0x102088b0u) REGS; LOADALL;
L_102088b0:;
  /* 102088b0 adc ecx, dword ptr [ecx - 0x76ffefe0] */ { const u32 m_ = (u32)(ecx + 0x89001020u); u32 a_ = ecx, b_ = M32(m_); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 102088b6 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 102088b8 clc */ SETC(OP_RAW, 0, 0, 0, 4);
  /* 102088b9 mov byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 102088bb adc al, dh */ { u32 a_ = (eax & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 102088bd mov byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 102088bf adc al, ch */ { u32 a_ = (eax & 0xffu), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 102088c1 mov byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 102088c3 adc al, ah */ { u32 a_ = (eax & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 102088c5 mov byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 102088c7 adc al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 102088c9 mov byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 102088cb adc al, dl */ { u32 a_ = (eax & 0xffu), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 102088cd mov byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 102088cf adc byte ptr [ebx - 0x761b71bc], cl */ { const u32 m_ = (u32)(ebx + 0x89e48e44u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 102088d5 inc esp */ { u32 a_ = esp; u32 r_ = (a_ + 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  TRAP(0x102088d6u, "undecodable");
}

void F_102088d0(CPU *c) {
  NATIVE_HOOK(0x102088d0u) REGS; LOADALL;
L_102088d0:;
  /* 102088d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102088d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 102088d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102088dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 102088e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102088e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 102088e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102088ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102088d8(CPU *c) {
  NATIVE_HOOK(0x102088d8u) REGS; LOADALL;
L_102088d8:;
  /* 102088d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102088dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 102088e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102088e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 102088e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102088ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102088e0(CPU *c) {
  NATIVE_HOOK(0x102088e0u) REGS; LOADALL;
L_102088e0:;
  /* 102088e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102088e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 102088e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102088ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102088e8(CPU *c) {
  NATIVE_HOOK(0x102088e8u) REGS; LOADALL;
L_102088e8:;
  /* 102088e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102088ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102088f0(CPU *c) {
  NATIVE_HOOK(0x102088f0u) REGS; LOADALL;
L_102088f0:;
  /* 102088f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102088f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102088f8(CPU *c) {
  NATIVE_HOOK(0x102088f8u) REGS; LOADALL;
L_102088f8:;
  /* 102088f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102088fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208900(CPU *c) {
  NATIVE_HOOK(0x10208900u) REGS; LOADALL;
L_10208900:;
  /* 10208900 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10208904 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208908 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020890f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208911 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208913(CPU *c) {
  NATIVE_HOOK(0x10208913u) REGS; LOADALL;
L_10208913:;
  /* 10208913 jmp dword ptr [edx*4 + 0x1020891c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020891cu); u32 t_ = M32(m_); switch (t_) { case 0x1020892cu: goto L_1020892c; case 0x10208934u: goto L_10208934; case 0x10208940u: goto L_10208940; case 0x10208954u: goto L_10208954; default: SAVEALL; call_ind(c, t_); return; } }
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020891c(CPU *c) {
  NATIVE_HOOK(0x1020891cu) REGS; LOADALL;
L_1020891c:;
  /* 1020891c sub al, 0x89 */ { u32 a_ = (eax & 0xffu), b_ = 0x89u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1020891e and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208920 xor al, 0x89 */ { u32 a_ = (eax & 0xffu), b_ = 0x89u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10208922 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208924 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208925 mov dword ptr [eax], esp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esp); }
  /* 10208927 adc byte ptr [ecx + ecx*4 + 0x20], dl */ { const u32 m_ = (u32)(ecx + ecx * 4u + 0x20u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1020892b adc byte ptr [ebx + 0x5f5e0845], cl */ { const u32 m_ = (u32)(ebx + 0x5f5e0845u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020892c(CPU *c) {
  NATIVE_HOOK(0x1020892cu) REGS; LOADALL;
L_1020892c:;
  /* 1020892c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020892f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208931 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208932 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208934(CPU *c) {
  NATIVE_HOOK(0x10208934u) REGS; LOADALL;
L_10208934:;
  /* 10208934 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208936 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208938 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020893c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020893d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020893e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208940(CPU *c) {
  NATIVE_HOOK(0x10208940u) REGS; LOADALL;
L_10208940:;
  /* 10208940 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208942 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208944 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208947 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020894a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020894d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020894e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020894f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208954(CPU *c) {
  NATIVE_HOOK(0x10208954u) REGS; LOADALL;
L_10208954:;
  /* 10208954 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208956 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208958 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020895b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020895e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208961 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208964 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208968 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208969 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020896a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102089bc(CPU *c) {
  NATIVE_HOOK(0x102089bcu) REGS; LOADALL;
L_102089bc:;
  /* 102089bc mov ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 102089be adc byte ptr [eax + 0x102089cc], dl */ { const u32 m_ = (u32)(eax + 0x102089ccu); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  TRAP(0x102089c4u, "undecodable");
}

void F_102089cc(CPU *c) {
  NATIVE_HOOK(0x102089ccu) REGS; LOADALL;
  goto L_102089cc;
L_10208994:;
  /* 10208994 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10208996 jmp dword ptr [ecx*4 + 0x10208a68] */ { const u32 m_ = (u32)(ecx * 4u + 0x10208a68u); u32 t_ = M32(m_); switch (t_) { case 0x10208aafu: goto L_10208aaf; default: SAVEALL; call_ind(c, t_); return; } }
L_102089cc:;
  /* 102089cc mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102089cf and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102089d1 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102089d4 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102089d7 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 102089da sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102089dd cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102089e0 jb 0x10208994 */ if (CF_) goto L_10208994;
  /* 102089e2 std */ c->df = 1;
  /* 102089e3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 102089e5 cld */ c->df = 0;
  /* 102089e6 jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208aaf:;
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102089f0(CPU *c) {
  NATIVE_HOOK(0x102089f0u) REGS; LOADALL;
  goto L_102089f0;
L_10208994:;
  /* 10208994 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10208996 jmp dword ptr [ecx*4 + 0x10208a68] */ { const u32 m_ = (u32)(ecx * 4u + 0x10208a68u); u32 t_ = M32(m_); switch (t_) { case 0x10208aafu: goto L_10208aaf; default: SAVEALL; call_ind(c, t_); return; } }
L_102089f0:;
  /* 102089f0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102089f3 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102089f5 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102089f8 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102089fb shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 102089fe mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208a01 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208a04 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208a07 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208a0a jb 0x10208994 */ if (CF_) goto L_10208994;
  /* 10208a0c std */ c->df = 1;
  /* 10208a0d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10208a0f cld */ c->df = 0;
  /* 10208a10 jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208aaf:;
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208a18(CPU *c) {
  NATIVE_HOOK(0x10208a18u) REGS; LOADALL;
  goto L_10208a18;
L_10208994:;
  /* 10208994 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10208996 jmp dword ptr [ecx*4 + 0x10208a68] */ { const u32 m_ = (u32)(ecx * 4u + 0x10208a68u); u32 t_ = M32(m_); switch (t_) { case 0x10208aafu: goto L_10208aaf; default: SAVEALL; call_ind(c, t_); return; } }
L_10208a18:;
  /* 10208a18 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208a1b and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10208a1d mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208a20 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208a23 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208a26 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208a29 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10208a2c mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208a2f sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208a32 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208a35 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208a38 jb 0x10208994 */ if (CF_) goto L_10208994;
  /* 10208a3e std */ c->df = 1;
  /* 10208a3f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10208a41 cld */ c->df = 0;
  /* 10208a42 jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208aaf:;
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208a68(CPU *c) {
  NATIVE_HOOK(0x10208a68u) REGS; LOADALL;
L_10208a68:;
  /* 10208a68 scasd eax, dword ptr es:[edi] */ { u32 st_ = c->df ? (u32)-4 : 4u; u32 a_ = eax, b_ = M32(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffffffffu, 4); }
  /* 10208a69 mov ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 10208a6b adc byte ptr [ebx - 0x76e371bc], cl */ { const u32 m_ = (u32)(ebx + 0x891c8e44u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10208a71 inc esp */ { u32 a_ = esp; u32 r_ = (a_ + 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  TRAP(0x10208a72u, "undecodable");
}

void F_10208a6c(CPU *c) {
  NATIVE_HOOK(0x10208a6cu) REGS; LOADALL;
L_10208a6c:;
  /* 10208a6c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10208a70 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10208a74 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10208a78 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 10208a7c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10208a80 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10208a84 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10208a88 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 10208a8c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10208a90 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10208a94 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208a98 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10208a9c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10208aa0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10208aa4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10208aab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208aad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208a74(CPU *c) {
  NATIVE_HOOK(0x10208a74u) REGS; LOADALL;
L_10208a74:;
  /* 10208a74 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10208a78 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 10208a7c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10208a80 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10208a84 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10208a88 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 10208a8c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10208a90 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10208a94 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208a98 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10208a9c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10208aa0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10208aa4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10208aab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208aad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208a7c(CPU *c) {
  NATIVE_HOOK(0x10208a7cu) REGS; LOADALL;
L_10208a7c:;
  /* 10208a7c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10208a80 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10208a84 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10208a88 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 10208a8c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10208a90 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10208a94 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208a98 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10208a9c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10208aa0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10208aa4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10208aab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208aad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208a84(CPU *c) {
  NATIVE_HOOK(0x10208a84u) REGS; LOADALL;
L_10208a84:;
  /* 10208a84 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10208a88 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 10208a8c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10208a90 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10208a94 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208a98 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10208a9c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10208aa0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10208aa4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10208aab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208aad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208a8c(CPU *c) {
  NATIVE_HOOK(0x10208a8cu) REGS; LOADALL;
L_10208a8c:;
  /* 10208a8c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10208a90 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10208a94 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208a98 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10208a9c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10208aa0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10208aa4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10208aab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208aad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208a94(CPU *c) {
  NATIVE_HOOK(0x10208a94u) REGS; LOADALL;
L_10208a94:;
  /* 10208a94 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208a98 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 10208a9c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10208aa0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10208aa4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10208aab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208aad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208a9c(CPU *c) {
  NATIVE_HOOK(0x10208a9cu) REGS; LOADALL;
L_10208a9c:;
  /* 10208a9c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10208aa0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 10208aa4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 10208aab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10208aad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208aaf(CPU *c) {
  NATIVE_HOOK(0x10208aafu) REGS; LOADALL;
L_10208aaf:;
  /* 10208aaf jmp dword ptr [edx*4 + 0x10208ab8] */ { const u32 m_ = (u32)(edx * 4u + 0x10208ab8u); u32 t_ = M32(m_); switch (t_) { case 0x10208ac8u: goto L_10208ac8; case 0x10208ad0u: goto L_10208ad0; case 0x10208ae0u: goto L_10208ae0; case 0x10208af4u: goto L_10208af4; default: SAVEALL; call_ind(c, t_); return; } }
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208ab8(CPU *c) {
  NATIVE_HOOK(0x10208ab8u) REGS; LOADALL;
L_10208ab8:;
  /* 10208ab8 enter 0x208a, 0x10 */ TRAP(0x10208ab8u, "unimpl enter 0x208a, 0x10");
  /* 10208abc ror byte ptr [edx - 0x751fefe0], 1 */ { const u32 m_ = (u32)(edx + 0x8ae01020u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M8(m_); u32 k_ = n_ % 8u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (8u - k_))) & 0xffu) : a_; u32 cf_ = (r_ >> 7) & 1u; u32 of_ = ((r_ >> 7) ^ (r_ >> 6)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); M8(m_) = (u8)(r_); } }
  /* 10208ac2 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208ac4 hlt */ TRAP(0x10208ac4u, "hlt");
}

void F_10208ac8(CPU *c) {
  NATIVE_HOOK(0x10208ac8u) REGS; LOADALL;
L_10208ac8:;
  /* 10208ac8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208acd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208ad0(CPU *c) {
  NATIVE_HOOK(0x10208ad0u) REGS; LOADALL;
L_10208ad0:;
  /* 10208ad0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ad3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ad6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208ad9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208adb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208ae0(CPU *c) {
  NATIVE_HOOK(0x10208ae0u) REGS; LOADALL;
L_10208ae0:;
  /* 10208ae0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208ae6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208ae9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208aec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208af0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208af1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208af2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208af4(CPU *c) {
  NATIVE_HOOK(0x10208af4u) REGS; LOADALL;
L_10208af4:;
  /* 10208af4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208af7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208afa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208afd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b00 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208b03 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208b06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208b0d(CPU *c) {
  NATIVE_HOOK(0x10208b0du) REGS; LOADALL;
L_10208b0d:;
  /* 10208b0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208b0e mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10208b12 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10208b15 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10208b16 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10208b18 cmp eax, dword ptr [0x1020dc84] */ { const u32 m_ = (u32)(0x1020dc84u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b1e je 0x10208b83 */ if (ZF_) goto L_10208b83;
  /* 10208b20 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b22 je 0x10208b83 */ if (ZF_) goto L_10208b83;
  /* 10208b24 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10208b27 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b29 jne 0x10208b83 */ if (!ZF_) goto L_10208b83;
  /* 10208b2b mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 10208b2e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b30 je 0x10208b4e */ if (ZF_) goto L_10208b4e;
  /* 10208b32 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b34 jne 0x10208b4e */ if (!ZF_) goto L_10208b4e;
  /* 10208b36 cmp eax, dword ptr [0x1020dde0] */ { const u32 m_ = (u32)(0x1020dde0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b3c je 0x10208b4e */ if (ZF_) goto L_10208b4e;
  /* 10208b3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208b3f call 0x1020572e */ esp -= 4; M32(esp) = 0x10208b44u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10208b3fu); RETCHK(0x10208b44u, 0x10208b3fu); LOADALL;
  /* 10208b44 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208b47 call 0x10209905 */ esp -= 4; M32(esp) = 0x10208b4cu; SAVEALL; F_10209905(c); ABI_CHECK(0x10209905u, 0x10208b47u); RETCHK(0x10208b4cu, 0x10208b47u); LOADALL;
  /* 10208b4c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208b4d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10208b4e:;
  /* 10208b4e mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 10208b51 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b53 je 0x10208b71 */ if (ZF_) goto L_10208b71;
  /* 10208b55 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b57 jne 0x10208b71 */ if (!ZF_) goto L_10208b71;
  /* 10208b59 cmp eax, dword ptr [0x1020dde4] */ { const u32 m_ = (u32)(0x1020dde4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b5f je 0x10208b71 */ if (ZF_) goto L_10208b71;
  /* 10208b61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208b62 call 0x1020572e */ esp -= 4; M32(esp) = 0x10208b67u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10208b62u); RETCHK(0x10208b67u, 0x10208b62u); LOADALL;
  /* 10208b67 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208b6a call 0x102098a6 */ esp -= 4; M32(esp) = 0x10208b6fu; SAVEALL; F_102098a6(c); ABI_CHECK(0x102098a6u, 0x10208b6au); RETCHK(0x10208b6fu, 0x10208b6au); LOADALL;
  /* 10208b6f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208b70 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10208b71:;
  /* 10208b71 push dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208b74 call 0x1020572e */ esp -= 4; M32(esp) = 0x10208b79u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10208b74u); RETCHK(0x10208b79u, 0x10208b74u); LOADALL;
  /* 10208b79 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208b7c call 0x1020572e */ esp -= 4; M32(esp) = 0x10208b81u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10208b7cu); RETCHK(0x10208b81u, 0x10208b7cu); LOADALL;
  /* 10208b81 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208b82 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10208b83:;
  /* 10208b83 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 10208b86 cmp eax, dword ptr [0x1020dddc] */ { const u32 m_ = (u32)(0x1020dddcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b8c je 0x10208bac */ if (ZF_) goto L_10208bac;
  /* 10208b8e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b90 je 0x10208bac */ if (ZF_) goto L_10208bac;
  /* 10208b92 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208b94 jne 0x10208bac */ if (!ZF_) goto L_10208bac;
  /* 10208b96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208b97 call 0x1020572e */ esp -= 4; M32(esp) = 0x10208b9cu; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10208b97u); RETCHK(0x10208b9cu, 0x10208b97u); LOADALL;
  /* 10208b9c mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 10208b9f sub eax, 0xfe */ { u32 a_ = eax, b_ = 0xfeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208ba4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208ba5 call 0x1020572e */ esp -= 4; M32(esp) = 0x10208baau; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10208ba5u); RETCHK(0x10208baau, 0x10208ba5u); LOADALL;
  /* 10208baa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208bab pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10208bac:;
  /* 10208bac mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 10208baf cmp eax, dword ptr [0x1020dc80] */ { const u32 m_ = (u32)(0x1020dc80u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208bb5 je 0x10208bd3 */ if (ZF_) goto L_10208bd3;
  /* 10208bb7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208bb9 je 0x10208bd3 */ if (ZF_) goto L_10208bd3;
  /* 10208bbb cmp dword ptr [eax + 0xb4], edi */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208bc1 jne 0x10208bd3 */ if (!ZF_) goto L_10208bd3;
  /* 10208bc3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208bc4 call 0x10209716 */ esp -= 4; M32(esp) = 0x10208bc9u; SAVEALL; F_10209716(c); ABI_CHECK(0x10209716u, 0x10208bc4u); RETCHK(0x10208bc9u, 0x10208bc4u); LOADALL;
  /* 10208bc9 push dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208bcc call 0x1020572e */ esp -= 4; M32(esp) = 0x10208bd1u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10208bccu); RETCHK(0x10208bd1u, 0x10208bccu); LOADALL;
  /* 10208bd1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208bd2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10208bd3:;
  /* 10208bd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208bd4 call 0x1020572e */ esp -= 4; M32(esp) = 0x10208bd9u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10208bd4u); RETCHK(0x10208bd9u, 0x10208bd4u); LOADALL;
  /* 10208bd9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208bda pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208bdb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208bdc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208bdd(CPU *c) {
  NATIVE_HOOK(0x10208bddu) REGS; LOADALL;
L_10208bdd:;
  /* 10208bdd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208bde call 0x10206441 */ esp -= 4; M32(esp) = 0x10208be3u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10208bdeu); RETCHK(0x10208be3u, 0x10208bdeu); LOADALL;
  /* 10208be3 mov esi, eax */ { esi = (u32)(eax); }
  /* 10208be5 mov ecx, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 10208be8 cmp ecx, dword ptr [0x1020d33c] */ { const u32 m_ = (u32)(0x1020d33cu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208bee je 0x10208c99 */ if (ZF_) goto L_10208c99;
  /* 10208bf4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10208bf6 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208bf8 je 0x10208c29 */ if (ZF_) goto L_10208c29;
  /* 10208bfa mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10208bfd dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10208bff cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c01 je 0x10208c05 */ if (ZF_) goto L_10208c05;
  /* 10208c03 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10208c05:;
  /* 10208c05 mov eax, dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); eax = (u32)(M32(m_)); }
  /* 10208c08 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c0a je 0x10208c0e */ if (ZF_) goto L_10208c0e;
  /* 10208c0c dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10208c0e:;
  /* 10208c0e mov eax, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); eax = (u32)(M32(m_)); }
  /* 10208c11 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c13 je 0x10208c17 */ if (ZF_) goto L_10208c17;
  /* 10208c15 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10208c17:;
  /* 10208c17 mov eax, dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); eax = (u32)(M32(m_)); }
  /* 10208c1a cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c1c je 0x10208c20 */ if (ZF_) goto L_10208c20;
  /* 10208c1e dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10208c20:;
  /* 10208c20 mov eax, dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 10208c23 dec dword ptr [eax + 0xb4] */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10208c29:;
  /* 10208c29 mov eax, dword ptr [0x1020d33c] */ { const u32 m_ = (u32)(0x1020d33cu); eax = (u32)(M32(m_)); }
  /* 10208c2e mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 10208c31 mov eax, dword ptr [0x1020d33c] */ { const u32 m_ = (u32)(0x1020d33cu); eax = (u32)(M32(m_)); }
  /* 10208c36 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208c38 mov eax, dword ptr [0x1020d33c] */ { const u32 m_ = (u32)(0x1020d33cu); eax = (u32)(M32(m_)); }
  /* 10208c3d cmp dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c40 je 0x10208c4c */ if (ZF_) goto L_10208c4c;
  /* 10208c42 mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10208c45 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208c47 mov eax, dword ptr [0x1020d33c] */ { const u32 m_ = (u32)(0x1020d33cu); eax = (u32)(M32(m_)); }
L_10208c4c:;
  /* 10208c4c cmp dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c4f je 0x10208c5b */ if (ZF_) goto L_10208c5b;
  /* 10208c51 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 10208c54 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208c56 mov eax, dword ptr [0x1020d33c] */ { const u32 m_ = (u32)(0x1020d33cu); eax = (u32)(M32(m_)); }
L_10208c5b:;
  /* 10208c5b cmp dword ptr [eax + 0x30], edx */ { const u32 m_ = (u32)(eax + 0x30u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c5e je 0x10208c6a */ if (ZF_) goto L_10208c6a;
  /* 10208c60 mov eax, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); eax = (u32)(M32(m_)); }
  /* 10208c63 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208c65 mov eax, dword ptr [0x1020d33c] */ { const u32 m_ = (u32)(0x1020d33cu); eax = (u32)(M32(m_)); }
L_10208c6a:;
  /* 10208c6a cmp dword ptr [eax + 0x40], edx */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c6d je 0x10208c79 */ if (ZF_) goto L_10208c79;
  /* 10208c6f mov eax, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); eax = (u32)(M32(m_)); }
  /* 10208c72 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208c74 mov eax, dword ptr [0x1020d33c] */ { const u32 m_ = (u32)(0x1020d33cu); eax = (u32)(M32(m_)); }
L_10208c79:;
  /* 10208c79 mov eax, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); eax = (u32)(M32(m_)); }
  /* 10208c7c inc dword ptr [eax + 0xb4] */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208c82 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c84 je 0x10208c99 */ if (ZF_) goto L_10208c99;
  /* 10208c86 cmp dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c88 jne 0x10208c99 */ if (!ZF_) goto L_10208c99;
  /* 10208c8a cmp ecx, 0x1020d2e8 */ { u32 a_ = ecx, b_ = 0x1020d2e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208c90 je 0x10208c99 */ if (ZF_) goto L_10208c99;
  /* 10208c92 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10208c93 call 0x10208b0d */ esp -= 4; M32(esp) = 0x10208c98u; SAVEALL; F_10208b0d(c); ABI_CHECK(0x10208b0du, 0x10208c93u); RETCHK(0x10208c98u, 0x10208c93u); LOADALL;
  /* 10208c98 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10208c99:;
  /* 10208c99 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 10208c9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208c9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208c9e(CPU *c) {
  NATIVE_HOOK(0x10208c9eu) REGS; LOADALL;
L_10208c9e:;
  /* 10208c9e push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10208ca0 push 0x1020bac0 */ { u32 v_ = 0x1020bac0u; esp -= 4; M32(esp) = v_; }
  /* 10208ca5 call 0x10205950 */ esp -= 4; M32(esp) = 0x10208caau; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10208ca5u); RETCHK(0x10208caau, 0x10208ca5u); LOADALL;
  /* 10208caa push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10208cac call 0x10207663 */ esp -= 4; M32(esp) = 0x10208cb1u; SAVEALL; F_10207663(c); ABI_CHECK(0x10207663u, 0x10208cacu); RETCHK(0x10208cb1u, 0x10208cacu); LOADALL;
  /* 10208cb1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208cb2 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10208cb6 call 0x10208bdd */ esp -= 4; M32(esp) = 0x10208cbbu; SAVEALL; F_10208bdd(c); ABI_CHECK(0x10208bddu, 0x10208cb6u); RETCHK(0x10208cbbu, 0x10208cb6u); LOADALL;
  /* 10208cbb mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10208cbe or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10208cc2 call 0x10208cd0 */ esp -= 4; M32(esp) = 0x10208cc7u; SAVEALL; F_10208cd0(c); ABI_CHECK(0x10208cd0u, 0x10208cc2u); RETCHK(0x10208cc7u, 0x10208cc2u); LOADALL;
  /* 10208cc7 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10208cca call 0x1020598b */ esp -= 4; M32(esp) = 0x10208ccfu; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10208ccau); RETCHK(0x10208ccfu, 0x10208ccau); LOADALL;
  /* 10208ccf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208cd0(CPU *c) {
  NATIVE_HOOK(0x10208cd0u) REGS; LOADALL;
L_10208cd0:;
  /* 10208cd0 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10208cd2 call 0x102075ae */ esp -= 4; M32(esp) = 0x10208cd7u; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10208cd2u); RETCHK(0x10208cd7u, 0x10208cd2u); LOADALL;
  /* 10208cd7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208cd8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208cd9(CPU *c) {
  NATIVE_HOOK(0x10208cd9u) REGS; LOADALL;
L_10208cd9:;
  /* 10208cd9 sub eax, 0x3a4 */ { u32 a_ = eax, b_ = 0x3a4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208cde je 0x10208d02 */ if (ZF_) goto L_10208d02;
  /* 10208ce0 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208ce3 je 0x10208cfc */ if (ZF_) goto L_10208cfc;
  /* 10208ce5 sub eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208ce8 je 0x10208cf6 */ if (ZF_) goto L_10208cf6;
  /* 10208cea dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10208ceb je 0x10208cf0 */ if (ZF_) goto L_10208cf0;
  /* 10208ced xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10208cef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208cf0:;
  /* 10208cf0 mov eax, 0x404 */ { eax = (u32)(0x404u); }
  /* 10208cf5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208cf6:;
  /* 10208cf6 mov eax, 0x412 */ { eax = (u32)(0x412u); }
  /* 10208cfb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208cfc:;
  /* 10208cfc mov eax, 0x804 */ { eax = (u32)(0x804u); }
  /* 10208d01 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10208d02:;
  /* 10208d02 mov eax, 0x411 */ { eax = (u32)(0x411u); }
  /* 10208d07 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208d08(CPU *c) {
  NATIVE_HOOK(0x10208d08u) REGS; LOADALL;
L_10208d08:;
  /* 10208d08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10208d09 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10208d0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10208d0d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208d0e mov edi, 0x1020de00 */ { edi = (u32)(0x1020de00u); }
  /* 10208d13 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10208d15 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10208d16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10208d18 mov dword ptr [0x1020df04], eax */ { const u32 m_ = (u32)(0x1020df04u); M32(m_) = (u32)(eax); }
  /* 10208d1d mov dword ptr [0x1020ddf0], eax */ { const u32 m_ = (u32)(0x1020ddf0u); M32(m_) = (u32)(eax); }
  /* 10208d22 mov dword ptr [0x1020dde8], eax */ { const u32 m_ = (u32)(0x1020dde8u); M32(m_) = (u32)(eax); }
  /* 10208d27 mov edi, 0x1020df10 */ { edi = (u32)(0x1020df10u); }
  /* 10208d2c stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10208d2d stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10208d2e stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10208d2f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208d30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208d31(CPU *c) {
  NATIVE_HOOK(0x10208d31u) REGS; LOADALL;
L_10208d31:;
  /* 10208d31 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10208d32 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10208d34 sub esp, 0x518 */ { u32 a_ = esp, b_ = 0x518u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10208d3a mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10208d3f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208d42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208d43 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10208d46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208d47 push dword ptr [0x1020df04] */ { const u32 m_ = (u32)(0x1020df04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208d4d call dword ptr [0x1020b0c8] */ { const u32 m_ = (u32)(0x1020b0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10208d53u; SAVEALL; call_ind(c, t_); RETCHK(0x10208d53u, 0x10208d4du); LOADALL; }
  /* 10208d53 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208d56 mov esi, 0x100 */ { esi = (u32)(0x100u); }
  /* 10208d5b jne 0x10208e6e */ if (!ZF_) goto L_10208e6e;
  /* 10208d61 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10208d63:;
  /* 10208d63 mov byte ptr [ebp + eax - 0x118], al */ { const u32 m_ = (u32)(ebp + eax + 0xfffffee8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10208d6a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208d6b cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208d6d jb 0x10208d63 */ if (CF_) goto L_10208d63;
  /* 10208d6f mov al, byte ptr [ebp - 0x12] */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208d72 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208d74 mov byte ptr [ebp - 0x118], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M8(m_) = (u8)(0x20u); }
  /* 10208d7b je 0x10208db3 */ if (ZF_) goto L_10208db3;
  /* 10208d7d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10208d7e lea edx, [ebp - 0x11] */ edx = (u32)((u32)(ebp + 0xffffffefu));
  /* 10208d81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_10208d82:;
  /* 10208d82 movzx ecx, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M8(m_)); }
  /* 10208d85 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 10208d88 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208d8a ja 0x10208da9 */ if (!(CF_|ZF_)) goto L_10208da9;
  /* 10208d8c sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10208d8e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208d8f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10208d91 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10208d94 lea edi, [ebp + eax - 0x118] */ edi = (u32)((u32)(ebp + eax + 0xfffffee8u));
  /* 10208d9b mov eax, 0x20202020 */ { eax = (u32)(0x20202020u); }
  /* 10208da0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10208da2 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10208da4 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10208da7 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
L_10208da9:;
  /* 10208da9 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208daa mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208dac inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208dad test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208daf jne 0x10208d82 */ if (!ZF_) goto L_10208d82;
  /* 10208db1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10208db2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10208db3:;
  /* 10208db3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10208db5 push dword ptr [0x1020dde8] */ { const u32 m_ = (u32)(0x1020dde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208dbb lea eax, [ebp - 0x518] */ eax = (u32)((u32)(ebp + 0xfffffae8u));
  /* 10208dc1 push dword ptr [0x1020df04] */ { const u32 m_ = (u32)(0x1020df04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208dc7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208dc8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208dc9 lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10208dcf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208dd0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10208dd2 call 0x10209ae8 */ esp -= 4; M32(esp) = 0x10208dd7u; SAVEALL; F_10209ae8(c); ABI_CHECK(0x10209ae8u, 0x10208dd2u); RETCHK(0x10208dd7u, 0x10208dd2u); LOADALL;
  /* 10208dd7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10208dd9 push dword ptr [0x1020df04] */ { const u32 m_ = (u32)(0x1020df04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208ddf lea eax, [ebp - 0x218] */ eax = (u32)((u32)(ebp + 0xfffffde8u));
  /* 10208de5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208de6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208de7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208de8 lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10208dee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208def push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208df0 push dword ptr [0x1020dde8] */ { const u32 m_ = (u32)(0x1020dde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208df6 call 0x10209d30 */ esp -= 4; M32(esp) = 0x10208dfbu; SAVEALL; F_10209d30(c); ABI_CHECK(0x10209d30u, 0x10208df6u); RETCHK(0x10208dfbu, 0x10208df6u); LOADALL;
  /* 10208dfb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10208dfd push dword ptr [0x1020df04] */ { const u32 m_ = (u32)(0x1020df04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208e03 lea eax, [ebp - 0x318] */ eax = (u32)((u32)(ebp + 0xfffffce8u));
  /* 10208e09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208e0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208e0b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208e0c lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10208e12 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208e13 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 10208e18 push dword ptr [0x1020dde8] */ { const u32 m_ = (u32)(0x1020dde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10208e1e call 0x10209d30 */ esp -= 4; M32(esp) = 0x10208e23u; SAVEALL; F_10209d30(c); ABI_CHECK(0x10209d30u, 0x10208e1eu); RETCHK(0x10208e23u, 0x10208e1eu); LOADALL;
  /* 10208e23 add esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10208e26 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10208e28:;
  /* 10208e28 mov cx, word ptr [ebp + eax*2 - 0x518] */ { const u32 m_ = (u32)(ebp + eax * 2u + 0xfffffae8u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10208e30 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208e33 je 0x10208e4b */ if (ZF_) goto L_10208e4b;
  /* 10208e35 or byte ptr [eax + 0x1020de01], 0x10 */ { const u32 m_ = (u32)(eax + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208e3c mov cl, byte ptr [ebp + eax - 0x218] */ { const u32 m_ = (u32)(ebp + eax + 0xfffffde8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10208e43:;
  /* 10208e43 mov byte ptr [eax + 0x1020df20], cl */ { const u32 m_ = (u32)(eax + 0x1020df20u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10208e49 jmp 0x10208e67 */ goto L_10208e67;
L_10208e4b:;
  /* 10208e4b test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208e4e je 0x10208e60 */ if (ZF_) goto L_10208e60;
  /* 10208e50 or byte ptr [eax + 0x1020de01], 0x20 */ { const u32 m_ = (u32)(eax + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208e57 mov cl, byte ptr [ebp + eax - 0x318] */ { const u32 m_ = (u32)(ebp + eax + 0xfffffce8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208e5e jmp 0x10208e43 */ goto L_10208e43;
L_10208e60:;
  /* 10208e60 mov byte ptr [eax + 0x1020df20], 0 */ { const u32 m_ = (u32)(eax + 0x1020df20u); M8(m_) = (u8)(0x0u); }
L_10208e67:;
  /* 10208e67 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208e68 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208e6a jb 0x10208e28 */ if (CF_) goto L_10208e28;
  /* 10208e6c jmp 0x10208eb2 */ goto L_10208eb2;
L_10208e6e:;
  /* 10208e6e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10208e70:;
  /* 10208e70 cmp eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208e73 jb 0x10208e8e */ if (CF_) goto L_10208e8e;
  /* 10208e75 cmp eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208e78 ja 0x10208e8e */ if (!(CF_|ZF_)) goto L_10208e8e;
  /* 10208e7a or byte ptr [eax + 0x1020de01], 0x10 */ { const u32 m_ = (u32)(eax + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208e81 mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10208e83 add cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_10208e86:;
  /* 10208e86 mov byte ptr [eax + 0x1020df20], cl */ { const u32 m_ = (u32)(eax + 0x1020df20u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10208e8c jmp 0x10208ead */ goto L_10208ead;
L_10208e8e:;
  /* 10208e8e cmp eax, 0x61 */ { u32 a_ = eax, b_ = 0x61u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208e91 jb 0x10208ea6 */ if (CF_) goto L_10208ea6;
  /* 10208e93 cmp eax, 0x7a */ { u32 a_ = eax, b_ = 0x7au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208e96 ja 0x10208ea6 */ if (!(CF_|ZF_)) goto L_10208ea6;
  /* 10208e98 or byte ptr [eax + 0x1020de01], 0x20 */ { const u32 m_ = (u32)(eax + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208e9f mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10208ea1 sub cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10208ea4 jmp 0x10208e86 */ goto L_10208e86;
L_10208ea6:;
  /* 10208ea6 mov byte ptr [eax + 0x1020df20], 0 */ { const u32 m_ = (u32)(eax + 0x1020df20u); M8(m_) = (u8)(0x0u); }
L_10208ead:;
  /* 10208ead inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208eae cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208eb0 jb 0x10208e70 */ if (CF_) goto L_10208e70;
L_10208eb2:;
  /* 10208eb2 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10208eb5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10208eb6 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10208ebbu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10208eb6u); RETCHK(0x10208ebbu, 0x10208eb6u); LOADALL;
  /* 10208ebb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10208ebc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10208ebd(CPU *c) {
  NATIVE_HOOK(0x10208ebdu) REGS; LOADALL;
L_10208ebd:;
  /* 10208ebd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10208ebe mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10208ec0 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10208ec3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10208ec8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10208ec9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208eca mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10208ecd xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10208ecf cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208ed1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10208ed4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10208ed5 je 0x1020902f */ if (ZF_) goto L_1020902f;
  /* 10208edb xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10208edd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10208edf:;
  /* 10208edf cmp dword ptr [eax + 0x1020d480], esi */ { const u32 m_ = (u32)(eax + 0x1020d480u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208ee5 je 0x10208f4c */ if (ZF_) goto L_10208f4c;
  /* 10208ee7 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10208eea inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208eeb cmp eax, 0xf0 */ { u32 a_ = eax, b_ = 0xf0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208ef0 jb 0x10208edf */ if (CF_) goto L_10208edf;
  /* 10208ef2 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10208ef5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10208ef6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10208ef7 call dword ptr [0x1020b0c8] */ { const u32 m_ = (u32)(0x1020b0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10208efdu; SAVEALL; call_ind(c, t_); RETCHK(0x10208efdu, 0x10208ef7u); LOADALL; }
  /* 10208efd cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208f00 jne 0x10209027 */ if (!ZF_) goto L_10209027;
  /* 10208f06 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10208f08 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10208f0a cmp dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208f0e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208f0f mov edi, 0x1020de00 */ { edi = (u32)(0x1020de00u); }
  /* 10208f14 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10208f16 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10208f17 mov dword ptr [0x1020df04], esi */ { const u32 m_ = (u32)(0x1020df04u); M32(m_) = (u32)(esi); }
  /* 10208f1d mov dword ptr [0x1020dde8], ebx */ { const u32 m_ = (u32)(0x1020dde8u); M32(m_) = (u32)(ebx); }
  /* 10208f23 jbe 0x10209015 */ if ((CF_|ZF_)) goto L_10209015;
  /* 10208f29 cmp byte ptr [ebp - 0x12], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10208f2d je 0x10208fed */ if (ZF_) goto L_10208fed;
  /* 10208f33 lea ecx, [ebp - 0x11] */ ecx = (u32)((u32)(ebp + 0xffffffefu));
L_10208f36:;
  /* 10208f36 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208f38 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208f3a je 0x10208fed */ if (ZF_) goto L_10208fed;
  /* 10208f40 movzx eax, byte ptr [ecx - 1] */ { const u32 m_ = (u32)(ecx + 0xffffffffu); eax = (u32)(M8(m_)); }
  /* 10208f44 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10208f47 jmp 0x10208fdd */ goto L_10208fdd;
L_10208f4c:;
  /* 10208f4c push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10208f4e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10208f50 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10208f51 mov edi, 0x1020de00 */ { edi = (u32)(0x1020de00u); }
  /* 10208f56 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10208f58 lea ecx, [edx + edx*2] */ ecx = (u32)((u32)(edx + edx * 2u));
  /* 10208f5b shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10208f5e mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 10208f61 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10208f62 lea ebx, [ecx + 0x1020d490] */ ebx = (u32)((u32)(ecx + 0x1020d490u));
L_10208f68:;
  /* 10208f68 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208f6a mov esi, ebx */ { esi = (u32)(ebx); }
  /* 10208f6c jmp 0x10208f97 */ goto L_10208f97;
L_10208f6e:;
  /* 10208f6e mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10208f71 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208f73 je 0x10208f9b */ if (ZF_) goto L_10208f9b;
  /* 10208f75 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 10208f78 movzx edi, dl */ { edi = (u32)((edx & 0xffu)); }
  /* 10208f7b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208f7d ja 0x10208f93 */ if (!(CF_|ZF_)) goto L_10208f93;
  /* 10208f7f mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 10208f82 mov dl, byte ptr [edx + 0x1020d478] */ { const u32 m_ = (u32)(edx + 0x1020d478u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10208f88:;
  /* 10208f88 or byte ptr [eax + 0x1020de01], dl */ { const u32 m_ = (u32)(eax + 0x1020de01u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208f8e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208f8f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208f91 jbe 0x10208f88 */ if ((CF_|ZF_)) goto L_10208f88;
L_10208f93:;
  /* 10208f93 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208f94 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208f95 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10208f97:;
  /* 10208f97 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10208f99 jne 0x10208f6e */ if (!ZF_) goto L_10208f6e;
L_10208f9b:;
  /* 10208f9b inc dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208f9e add ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10208fa1 cmp dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208fa5 jb 0x10208f68 */ if (CF_) goto L_10208f68;
  /* 10208fa7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10208faa mov dword ptr [0x1020df04], eax */ { const u32 m_ = (u32)(0x1020df04u); M32(m_) = (u32)(eax); }
  /* 10208faf mov dword ptr [0x1020ddf0], 1 */ { const u32 m_ = (u32)(0x1020ddf0u); M32(m_) = (u32)(0x1u); }
  /* 10208fb9 call 0x10208cd9 */ esp -= 4; M32(esp) = 0x10208fbeu; SAVEALL; F_10208cd9(c); ABI_CHECK(0x10208cd9u, 0x10208fb9u); RETCHK(0x10208fbeu, 0x10208fb9u); LOADALL;
  /* 10208fbe lea ecx, [ecx + 0x1020d484] */ ecx = (u32)((u32)(ecx + 0x1020d484u));
  /* 10208fc4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10208fc6 mov edi, 0x1020df10 */ { edi = (u32)(0x1020df10u); }
  /* 10208fcb movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10208fcc movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10208fcd mov dword ptr [0x1020dde8], eax */ { const u32 m_ = (u32)(0x1020dde8u); M32(m_) = (u32)(eax); }
  /* 10208fd2 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10208fd3 jmp 0x10209034 */ goto L_10209034;
L_10208fd5:;
  /* 10208fd5 or byte ptr [eax + 0x1020de01], 4 */ { const u32 m_ = (u32)(eax + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208fdc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10208fdd:;
  /* 10208fdd cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208fdf jbe 0x10208fd5 */ if ((CF_|ZF_)) goto L_10208fd5;
  /* 10208fe1 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208fe2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208fe3 cmp byte ptr [ecx - 1], 0 */ { const u32 m_ = (u32)(ecx + 0xffffffffu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10208fe7 jne 0x10208f36 */ if (!ZF_) goto L_10208f36;
L_10208fed:;
  /* 10208fed xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10208fef inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208ff0 mov eax, ecx */ { eax = (u32)(ecx); }
L_10208ff2:;
  /* 10208ff2 or byte ptr [eax + 0x1020de01], 8 */ { const u32 m_ = (u32)(eax + 0x1020de01u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10208ff9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10208ffa cmp eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10208fff jb 0x10208ff2 */ if (CF_) goto L_10208ff2;
  /* 10209001 mov eax, esi */ { eax = (u32)(esi); }
  /* 10209003 call 0x10208cd9 */ esp -= 4; M32(esp) = 0x10209008u; SAVEALL; F_10208cd9(c); ABI_CHECK(0x10208cd9u, 0x10209003u); RETCHK(0x10209008u, 0x10209003u); LOADALL;
  /* 10209008 mov dword ptr [0x1020dde8], eax */ { const u32 m_ = (u32)(0x1020dde8u); M32(m_) = (u32)(eax); }
  /* 1020900d mov dword ptr [0x1020ddf0], ecx */ { const u32 m_ = (u32)(0x1020ddf0u); M32(m_) = (u32)(ecx); }
  /* 10209013 jmp 0x1020901b */ goto L_1020901b;
L_10209015:;
  /* 10209015 mov dword ptr [0x1020ddf0], ebx */ { const u32 m_ = (u32)(0x1020ddf0u); M32(m_) = (u32)(ebx); }
L_1020901b:;
  /* 1020901b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020901d mov edi, 0x1020df10 */ { edi = (u32)(0x1020df10u); }
  /* 10209022 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10209023 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10209024 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10209025 jmp 0x10209034 */ goto L_10209034;
L_10209027:;
  /* 10209027 cmp dword ptr [0x1020dc74], ebx */ { const u32 m_ = (u32)(0x1020dc74u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020902d je 0x1020903d */ if (ZF_) goto L_1020903d;
L_1020902f:;
  /* 1020902f call 0x10208d08 */ esp -= 4; M32(esp) = 0x10209034u; SAVEALL; F_10208d08(c); ABI_CHECK(0x10208d08u, 0x1020902fu); RETCHK(0x10209034u, 0x1020902fu); LOADALL;
L_10209034:;
  /* 10209034 call 0x10208d31 */ esp -= 4; M32(esp) = 0x10209039u; SAVEALL; F_10208d31(c); ABI_CHECK(0x10208d31u, 0x10209034u); RETCHK(0x10209039u, 0x10209034u); LOADALL;
  /* 10209039 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020903b jmp 0x10209040 */ goto L_10209040;
L_1020903d:;
  /* 1020903d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10209040:;
  /* 10209040 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10209043 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209044 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209045 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10209046 call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020904bu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10209046u); RETCHK(0x1020904bu, 0x10209046u); LOADALL;
  /* 1020904b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020904c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020904d(CPU *c) {
  NATIVE_HOOK(0x1020904du) REGS; LOADALL;
L_1020904d:;
  /* 1020904d push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 1020904f push 0x1020bad0 */ { u32 v_ = 0x1020bad0u; esp -= 4; M32(esp) = v_; }
  /* 10209054 call 0x10205950 */ esp -= 4; M32(esp) = 0x10209059u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10209054u); RETCHK(0x10209059u, 0x10209054u); LOADALL;
  /* 10209059 or dword ptr [ebp - 0x20], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020905d push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 1020905f call 0x10207663 */ esp -= 4; M32(esp) = 0x10209064u; SAVEALL; F_10207663(c); ABI_CHECK(0x10207663u, 0x1020905fu); RETCHK(0x10209064u, 0x1020905fu); LOADALL;
  /* 10209064 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10209065 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10209067 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 1020906a mov dword ptr [0x1020dc74], edi */ { const u32 m_ = (u32)(0x1020dc74u); M32(m_) = (u32)(edi); }
  /* 10209070 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209073 cmp eax, -2 */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10209076 jne 0x1020908a */ if (!ZF_) goto L_1020908a;
  /* 10209078 mov dword ptr [0x1020dc74], 1 */ { const u32 m_ = (u32)(0x1020dc74u); M32(m_) = (u32)(0x1u); }
  /* 10209082 call dword ptr [0x1020b0c4] */ { const u32 m_ = (u32)(0x1020b0c4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10209088u; SAVEALL; call_ind(c, t_); RETCHK(0x10209088u, 0x10209082u); LOADALL; }
  /* 10209088 jmp 0x102090b5 */ goto L_102090b5;
L_1020908a:;
  /* 1020908a cmp eax, -3 */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020908d jne 0x102090a1 */ if (!ZF_) goto L_102090a1;
  /* 1020908f mov dword ptr [0x1020dc74], 1 */ { const u32 m_ = (u32)(0x1020dc74u); M32(m_) = (u32)(0x1u); }
  /* 10209099 call dword ptr [0x1020b0c0] */ { const u32 m_ = (u32)(0x1020b0c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020909fu; SAVEALL; call_ind(c, t_); RETCHK(0x1020909fu, 0x10209099u); LOADALL; }
  /* 1020909f jmp 0x102090b5 */ goto L_102090b5;
L_102090a1:;
  /* 102090a1 cmp eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102090a4 jne 0x102090b5 */ if (!ZF_) goto L_102090b5;
  /* 102090a6 mov dword ptr [0x1020dc74], 1 */ { const u32 m_ = (u32)(0x1020dc74u); M32(m_) = (u32)(0x1u); }
  /* 102090b0 mov eax, dword ptr [0x1020dcc4] */ { const u32 m_ = (u32)(0x1020dcc4u); eax = (u32)(M32(m_)); }
L_102090b5:;
  /* 102090b5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 102090b8 cmp eax, dword ptr [0x1020df04] */ { const u32 m_ = (u32)(0x1020df04u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102090be je 0x1020917f */ if (ZF_) goto L_1020917f;
  /* 102090c4 mov esi, dword ptr [0x1020ddec] */ { const u32 m_ = (u32)(0x1020ddecu); esi = (u32)(M32(m_)); }
  /* 102090ca mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 102090cd cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102090cf je 0x102090d5 */ if (ZF_) goto L_102090d5;
  /* 102090d1 cmp dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102090d3 je 0x102090e5 */ if (ZF_) goto L_102090e5;
L_102090d5:;
  /* 102090d5 push 0x220 */ { u32 v_ = 0x220u; esp -= 4; M32(esp) = v_; }
  /* 102090da call 0x10205b4c */ esp -= 4; M32(esp) = 0x102090dfu; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x102090dau); RETCHK(0x102090dfu, 0x102090dau); LOADALL;
  /* 102090df pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102090e0 mov esi, eax */ { esi = (u32)(eax); }
  /* 102090e2 mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
L_102090e5:;
  /* 102090e5 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102090e7 je 0x10209168 */ if (ZF_) goto L_10209168;
  /* 102090e9 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102090ec call 0x10208ebd */ esp -= 4; M32(esp) = 0x102090f1u; SAVEALL; F_10208ebd(c); ABI_CHECK(0x10208ebdu, 0x102090ecu); RETCHK(0x102090f1u, 0x102090ecu); LOADALL;
  /* 102090f1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102090f2 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 102090f5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102090f7 jne 0x10209168 */ if (!ZF_) goto L_10209168;
  /* 102090f9 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 102090fb mov eax, dword ptr [0x1020df04] */ { const u32 m_ = (u32)(0x1020df04u); eax = (u32)(M32(m_)); }
  /* 10209100 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10209103 mov eax, dword ptr [0x1020ddf0] */ { const u32 m_ = (u32)(0x1020ddf0u); eax = (u32)(M32(m_)); }
  /* 10209108 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020910b mov eax, dword ptr [0x1020dde8] */ { const u32 m_ = (u32)(0x1020dde8u); eax = (u32)(M32(m_)); }
  /* 10209110 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10209113 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10209115:;
  /* 10209115 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10209118 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020911b jge 0x1020912d */ if (!LT_) goto L_1020912d;
  /* 1020911d mov cx, word ptr [eax*2 + 0x1020df10] */ { const u32 m_ = (u32)(eax * 2u + 0x1020df10u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10209125 mov word ptr [esi + eax*2 + 0x10], cx */ { const u32 m_ = (u32)(esi + eax * 2u + 0x10u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 1020912a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020912b jmp 0x10209115 */ goto L_10209115;
L_1020912d:;
  /* 1020912d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1020912f:;
  /* 1020912f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10209132 cmp eax, 0x101 */ { u32 a_ = eax, b_ = 0x101u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10209137 jge 0x10209146 */ if (!LT_) goto L_10209146;
  /* 10209139 mov cl, byte ptr [eax + 0x1020de00] */ { const u32 m_ = (u32)(eax + 0x1020de00u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020913f mov byte ptr [eax + esi + 0x1c], cl */ { const u32 m_ = (u32)(eax + esi + 0x1cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10209143 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10209144 jmp 0x1020912f */ goto L_1020912f;
L_10209146:;
  /* 10209146 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10209148:;
  /* 10209148 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1020914b cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10209150 jge 0x10209162 */ if (!LT_) goto L_10209162;
  /* 10209152 mov cl, byte ptr [eax + 0x1020df20] */ { const u32 m_ = (u32)(eax + 0x1020df20u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209158 mov byte ptr [eax + esi + 0x11d], cl */ { const u32 m_ = (u32)(eax + esi + 0x11du); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1020915f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10209160 jmp 0x10209148 */ goto L_10209148;
L_10209162:;
  /* 10209162 mov dword ptr [0x1020ddec], esi */ { const u32 m_ = (u32)(0x1020ddecu); M32(m_) = (u32)(esi); }
L_10209168:;
  /* 10209168 cmp dword ptr [ebp - 0x20], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020916c jne 0x10209182 */ if (!ZF_) goto L_10209182;
  /* 1020916e cmp esi, dword ptr [0x1020ddec] */ { const u32 m_ = (u32)(0x1020ddecu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10209174 je 0x10209182 */ if (ZF_) goto L_10209182;
  /* 10209176 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10209177 call 0x1020572e */ esp -= 4; M32(esp) = 0x1020917cu; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x10209177u); RETCHK(0x1020917cu, 0x10209177u); LOADALL;
  /* 1020917c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020917d jmp 0x10209182 */ goto L_10209182;
L_1020917f:;
  /* 1020917f mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
L_10209182:;
  /* 10209182 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10209186 call 0x10209194 */ esp -= 4; M32(esp) = 0x1020918bu; SAVEALL; F_10209194(c); ABI_CHECK(0x10209194u, 0x10209186u); RETCHK(0x1020918bu, 0x10209186u); LOADALL;
  /* 1020918b mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 1020918e call 0x1020598b */ esp -= 4; M32(esp) = 0x10209193u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x1020918eu); RETCHK(0x10209193u, 0x1020918eu); LOADALL;
  /* 10209193 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209194(CPU *c) {
  NATIVE_HOOK(0x10209194u) REGS; LOADALL;
L_10209194:;
  /* 10209194 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10209196 call 0x102075ae */ esp -= 4; M32(esp) = 0x1020919bu; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10209196u); RETCHK(0x1020919bu, 0x10209196u); LOADALL;
  /* 1020919b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020919c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020919d(CPU *c) {
  NATIVE_HOOK(0x1020919du) REGS; LOADALL;
L_1020919d:;
  /* 1020919d cmp dword ptr [0x1020e16c], 0 */ { const u32 m_ = (u32)(0x1020e16cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102091a4 jne 0x102091b8 */ if (!ZF_) goto L_102091b8;
  /* 102091a6 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 102091a8 call 0x1020904d */ esp -= 4; M32(esp) = 0x102091adu; SAVEALL; F_1020904d(c); ABI_CHECK(0x1020904du, 0x102091a8u); RETCHK(0x102091adu, 0x102091a8u); LOADALL;
  /* 102091ad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102091ae mov dword ptr [0x1020e16c], 1 */ { const u32 m_ = (u32)(0x1020e16cu); M32(m_) = (u32)(0x1u); }
L_102091b8:;
  /* 102091b8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102091ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102091d3(CPU *c) {
  NATIVE_HOOK(0x102091d3u) REGS; LOADALL;
L_102091d3:;
  /* 102091d3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102091d4 push dword ptr [0x1020e168] */ { const u32 m_ = (u32)(0x1020e168u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102091da call 0x1020a440 */ esp -= 4; M32(esp) = 0x102091dfu; SAVEALL; F_1020a440(c); ABI_CHECK(0x1020a440u, 0x102091dau); RETCHK(0x102091dfu, 0x102091dau); LOADALL;
  /* 102091df pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102091e0 mov ecx, dword ptr [0x1020e164] */ { const u32 m_ = (u32)(0x1020e164u); ecx = (u32)(M32(m_)); }
  /* 102091e6 mov esi, eax */ { esi = (u32)(eax); }
  /* 102091e8 mov eax, dword ptr [0x1020e168] */ { const u32 m_ = (u32)(0x1020e168u); eax = (u32)(M32(m_)); }
  /* 102091ed mov edx, ecx */ { edx = (u32)(ecx); }
  /* 102091ef sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 102091f1 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 102091f4 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102091f6 jae 0x10209246 */ if (!CF_) goto L_10209246;
  /* 102091f8 mov ecx, 0x800 */ { ecx = (u32)(0x800u); }
  /* 102091fd cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102091ff jae 0x10209203 */ if (!CF_) goto L_10209203;
  /* 10209201 mov ecx, esi */ { ecx = (u32)(esi); }
L_10209203:;
  /* 10209203 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10209205 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10209206 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10209207 call 0x1020a293 */ esp -= 4; M32(esp) = 0x1020920cu; SAVEALL; F_1020a293(c); ABI_CHECK(0x1020a293u, 0x10209207u); RETCHK(0x1020920cu, 0x10209207u); LOADALL;
  /* 1020920c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020920e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020920f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10209210 jne 0x10209229 */ if (!ZF_) goto L_10209229;
  /* 10209212 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209215 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10209216 push dword ptr [0x1020e168] */ { const u32 m_ = (u32)(0x1020e168u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020921c call 0x1020a293 */ esp -= 4; M32(esp) = 0x10209221u; SAVEALL; F_1020a293(c); ABI_CHECK(0x1020a293u, 0x1020921cu); RETCHK(0x10209221u, 0x1020921cu); LOADALL;
  /* 10209221 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10209223 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10209224 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10209225 jne 0x10209229 */ if (!ZF_) goto L_10209229;
  /* 10209227 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209228 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209229:;
  /* 10209229 mov ecx, dword ptr [0x1020e164] */ { const u32 m_ = (u32)(0x1020e164u); ecx = (u32)(M32(m_)); }
  /* 1020922f sub ecx, dword ptr [0x1020e168] */ { const u32 m_ = (u32)(0x1020e168u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10209235 mov dword ptr [0x1020e168], eax */ { const u32 m_ = (u32)(0x1020e168u); M32(m_) = (u32)(eax); }
  /* 1020923a sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1020923d lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 10209240 mov dword ptr [0x1020e164], ecx */ { const u32 m_ = (u32)(0x1020e164u); M32(m_) = (u32)(ecx); }
L_10209246:;
  /* 10209246 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 10209248 add dword ptr [0x1020e164], 4 */ { const u32 m_ = (u32)(0x1020e164u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020924f mov eax, edi */ { eax = (u32)(edi); }
  /* 10209251 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209252 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209253(CPU *c) {
  NATIVE_HOOK(0x10209253u) REGS; LOADALL;
L_10209253:;
  /* 10209253 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10209258 call 0x10205b4c */ esp -= 4; M32(esp) = 0x1020925du; SAVEALL; F_10205b4c(c); ABI_CHECK(0x10205b4cu, 0x10209258u); RETCHK(0x1020925du, 0x10209258u); LOADALL;
  /* 1020925d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020925f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10209260 mov dword ptr [0x1020e168], eax */ { const u32 m_ = (u32)(0x1020e168u); M32(m_) = (u32)(eax); }
  /* 10209265 jne 0x1020926b */ if (!ZF_) goto L_1020926b;
  /* 10209267 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 10209269 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 1020926a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020926b:;
  /* 1020926b and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020926e mov eax, dword ptr [0x1020e168] */ { const u32 m_ = (u32)(0x1020e168u); eax = (u32)(M32(m_)); }
  /* 10209273 mov dword ptr [0x1020e164], eax */ { const u32 m_ = (u32)(0x1020e164u); M32(m_) = (u32)(eax); }
  /* 10209278 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020927a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020927b(CPU *c) {
  NATIVE_HOOK(0x1020927bu) REGS; LOADALL;
L_1020927b:;
  /* 1020927b push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 1020927d push 0x1020bae0 */ { u32 v_ = 0x1020bae0u; esp -= 4; M32(esp) = v_; }
  /* 10209282 call 0x10205950 */ esp -= 4; M32(esp) = 0x10209287u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10209282u); RETCHK(0x10209287u, 0x10209282u); LOADALL;
  /* 10209287 call 0x102067fc */ esp -= 4; M32(esp) = 0x1020928cu; SAVEALL; F_102067fc(c); ABI_CHECK(0x102067fcu, 0x10209287u); RETCHK(0x1020928cu, 0x10209287u); LOADALL;
  /* 1020928c and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10209290 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10209293 call 0x102091d3 */ esp -= 4; M32(esp) = 0x10209298u; SAVEALL; F_102091d3(c); ABI_CHECK(0x102091d3u, 0x10209293u); RETCHK(0x10209298u, 0x10209293u); LOADALL;
  /* 10209298 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1020929b or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020929f call 0x102092ad */ esp -= 4; M32(esp) = 0x102092a4u; SAVEALL; F_102092ad(c); ABI_CHECK(0x102092adu, 0x1020929fu); RETCHK(0x102092a4u, 0x1020929fu); LOADALL;
  /* 102092a4 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102092a7 call 0x1020598b */ esp -= 4; M32(esp) = 0x102092acu; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102092a7u); RETCHK(0x102092acu, 0x102092a7u); LOADALL;
  /* 102092ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102092ad(CPU *c) {
  NATIVE_HOOK(0x102092adu) REGS; LOADALL;
L_102092ad:;
  /* 102092ad call 0x10206805 */ esp -= 4; M32(esp) = 0x102092b2u; SAVEALL; F_10206805(c); ABI_CHECK(0x10206805u, 0x102092adu); RETCHK(0x102092b2u, 0x102092adu); LOADALL;
  /* 102092b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102092b3(CPU *c) {
  NATIVE_HOOK(0x102092b3u) REGS; LOADALL;
L_102092b3:;
  /* 102092b3 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102092b7 call 0x1020927b */ esp -= 4; M32(esp) = 0x102092bcu; SAVEALL; F_1020927b(c); ABI_CHECK(0x1020927bu, 0x102092b7u); RETCHK(0x102092bcu, 0x102092b7u); LOADALL;
  /* 102092bc neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102092be sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102092c0 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102092c2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102092c3 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102092c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102092d0(CPU *c) {
  NATIVE_HOOK(0x102092d0u) REGS; LOADALL;
L_102092d0:;
  /* 102092d0 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 102092d4 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102092d8 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102092da je 0x1020932b */ if (ZF_) goto L_1020932b;
  /* 102092dc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102092de mov al, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102092e2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102092e3 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 102092e5 cmp edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102092e8 jb 0x1020931b */ if (CF_) goto L_1020931b;
  /* 102092ea neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102092ec and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 102092ef je 0x102092fd */ if (ZF_) goto L_102092fd;
  /* 102092f1 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_102092f3:;
  /* 102092f3 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102092f5 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102092f8 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102092fb jne 0x102092f3 */ if (!ZF_) goto L_102092f3;
L_102092fd:;
  /* 102092fd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 102092ff shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10209302 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10209304 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10209306 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10209309 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020930b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 1020930d and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10209310 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10209313 je 0x1020931b */ if (ZF_) goto L_1020931b;
  /* 10209315 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10209317 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10209319 je 0x10209325 */ if (ZF_) goto L_10209325;
L_1020931b:;
  /* 1020931b mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020931d add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209320 sub edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10209323 jne 0x1020931b */ if (!ZF_) goto L_1020931b;
L_10209325:;
  /* 10209325 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209329 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020932a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020932b:;
  /* 1020932b mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 1020932f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209330(CPU *c) {
  NATIVE_HOOK(0x10209330u) REGS; LOADALL;
L_10209330:;
  /* 10209330 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10209334 call dword ptr [0x1020b0cc] */ { const u32 m_ = (u32)(0x1020b0ccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020933au; SAVEALL; call_ind(c, t_); RETCHK(0x1020933au, 0x10209334u); LOADALL; }
  /* 1020933a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020933c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020933d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10209340(CPU *c) {
  NATIVE_HOOK(0x10209340u) REGS; LOADALL;
L_10209340:;
  /* 10209340 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10209342 push 0x1020bb18 */ { u32 v_ = 0x1020bb18u; esp -= 4; M32(esp) = v_; }
  /* 10209347 call 0x10205950 */ esp -= 4; M32(esp) = 0x1020934cu; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10209347u); RETCHK(0x1020934cu, 0x10209347u); LOADALL;
  /* 1020934c mov eax, dword ptr [0x1020dc78] */ { const u32 m_ = (u32)(0x1020dc78u); eax = (u32)(M32(m_)); }
  /* 10209351 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10209353 jne 0x1020938c */ if (!ZF_) goto L_1020938c;
  /* 10209355 cmp dword ptr [0x1020d950], 1 */ { const u32 m_ = (u32)(0x1020d950u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020935c je 0x10209382 */ if (ZF_) goto L_10209382;
  /* 1020935e push 0x1020b474 */ { u32 v_ = 0x1020b474u; esp -= 4; M32(esp) = v_; }
  /* 10209363 call dword ptr [0x1020b050] */ { const u32 m_ = (u32)(0x1020b050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10209369u; SAVEALL; call_ind(c, t_); RETCHK(0x10209369u, 0x10209363u); LOADALL; }
  /* 10209369 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020936b je 0x10209382 */ if (ZF_) goto L_10209382;
  /* 1020936d push 0x1020baec */ { u32 v_ = 0x1020baecu; esp -= 4; M32(esp) = v_; }
  /* 10209372 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10209373 call dword ptr [0x1020b04c] */ { const u32 m_ = (u32)(0x1020b04cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10209379u; SAVEALL; call_ind(c, t_); RETCHK(0x10209379u, 0x10209373u); LOADALL; }
  /* 10209379 mov dword ptr [0x1020dc78], eax */ { const u32 m_ = (u32)(0x1020dc78u); M32(m_) = (u32)(eax); }
  /* 1020937e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10209380 jne 0x1020938c */ if (!ZF_) goto L_1020938c;
L_10209382:;
  /* 10209382 mov eax, 0x10209330 */ { eax = (u32)(0x10209330u); }
  /* 10209387 mov dword ptr [0x1020dc78], eax */ { const u32 m_ = (u32)(0x1020dc78u); M32(m_) = (u32)(eax); }
L_1020938c:;
  /* 1020938c and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10209390 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10209393 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10209396 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10209398u; SAVEALL; call_ind(c, t_); RETCHK(0x10209398u, 0x10209396u); LOADALL; }
  /* 10209398 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1020939b jmp 0x102093c1 */ goto L_102093c1;
L_102093c1:;
  /* 102093c1 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102093c5 call 0x1020598b */ esp -= 4; M32(esp) = 0x102093cau; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102093c5u); RETCHK(0x102093cau, 0x102093c5u); LOADALL;
  /* 102093ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020939d(CPU *c) {
  NATIVE_HOOK(0x1020939du) REGS; LOADALL;
L_1020939d:;
  /* 1020939d mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102093a0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 102093a2 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 102093a4 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 102093a7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102093a9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102093aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102093ab(CPU *c) {
  NATIVE_HOOK(0x102093abu) REGS; LOADALL;
L_102093ab:;
  /* 102093ab mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 102093ae cmp dword ptr [ebp - 0x1c], 0xc0000017 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0xc0000017u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102093b5 jne 0x102093bf */ if (!ZF_) goto L_102093bf;
  /* 102093b7 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 102093b9 call dword ptr [0x1020b038] */ { const u32 m_ = (u32)(0x1020b038u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102093bfu; SAVEALL; call_ind(c, t_); RETCHK(0x102093bfu, 0x102093b9u); LOADALL; }
L_102093bf:;
  /* 102093bf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102093c1 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102093c5 call 0x1020598b */ esp -= 4; M32(esp) = 0x102093cau; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102093c5u); RETCHK(0x102093cau, 0x102093c5u); LOADALL;
  /* 102093ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102093d0(CPU *c) {
  NATIVE_HOOK(0x102093d0u) REGS; LOADALL;
L_102093d0:;
  /* 102093d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102093d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102093d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102093d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102093d5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 102093d8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 102093db mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 102093de mov eax, ecx */ { eax = (u32)(ecx); }
  /* 102093e0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 102093e2 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 102093e4 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102093e6 jbe 0x102093f0 */ if ((CF_|ZF_)) goto L_102093f0;
  /* 102093e8 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102093ea jb 0x1020956c */ if (CF_) goto L_1020956c;
L_102093f0:;
  /* 102093f0 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102093f6 jne 0x1020940c */ if (!ZF_) goto L_1020940c;
  /* 102093f8 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 102093fb and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102093fe cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10209401 jb 0x1020942c */ if (CF_) goto L_1020942c;
  /* 10209403 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10209405 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020940c:;
  /* 1020940c mov eax, edi */ { eax = (u32)(edi); }
  /* 1020940e mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10209413 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10209416 jb 0x10209424 */ if (CF_) goto L_10209424;
  /* 10209418 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020941b add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1020941d jmp dword ptr [eax*4 + 0x10209430] */ { const u32 m_ = (u32)(eax * 4u + 0x10209430u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10209424:;
  /* 10209424 jmp dword ptr [ecx*4 + 0x1020952c] */ { const u32 m_ = (u32)(ecx * 4u + 0x1020952cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1020942c:;
  /* 1020942c jmp dword ptr [ecx*4 + 0x102094b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x102094b0u); u32 t_ = M32(m_); switch (t_) { case 0x102094d0u: goto L_102094d0; case 0x102094d8u: goto L_102094d8; case 0x102094e0u: goto L_102094e0; case 0x102094e8u: goto L_102094e8; case 0x102094f0u: goto L_102094f0; case 0x102094f8u: goto L_102094f8; case 0x10209500u: goto L_10209500; case 0x10209513u: goto L_10209513; default: SAVEALL; call_ind(c, t_); return; } }
L_102094d0:;
  /* 102094d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102094d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102094d8:;
  /* 102094d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102094dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_102094e0:;
  /* 102094e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102094e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_102094e8:;
  /* 102094e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102094ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_102094f0:;
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_102094f8:;
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10209500:;
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10209513:;
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020956c:;
  /* 1020956c lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10209570 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10209574 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020957a jne 0x102095a0 */ if (!ZF_) goto L_102095a0;
  /* 1020957c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1020957f and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10209582 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10209585 jb 0x10209594 */ if (CF_) goto L_10209594;
  /* 10209587 std */ c->df = 1;
  /* 10209588 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1020958a cld */ c->df = 0;
  /* 1020958b jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10209594:;
  /* 10209594 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10209596 jmp dword ptr [ecx*4 + 0x10209668] */ { const u32 m_ = (u32)(ecx * 4u + 0x10209668u); u32 t_ = M32(m_); switch (t_) { case 0x102096afu: goto L_102096af; default: SAVEALL; call_ind(c, t_); return; } }
L_102095a0:;
  /* 102095a0 mov eax, edi */ { eax = (u32)(edi); }
  /* 102095a2 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 102095a7 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102095aa jb 0x102095b8 */ if (CF_) goto L_102095b8;
  /* 102095ac and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102095af sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102095b1 jmp dword ptr [eax*4 + 0x102095bc] */ { const u32 m_ = (u32)(eax * 4u + 0x102095bcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_102095b8:;
  /* 102095b8 jmp dword ptr [ecx*4 + 0x102096b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096af:;
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209430(CPU *c) {
  NATIVE_HOOK(0x10209430u) REGS; LOADALL;
L_10209430:;
  /* 10209430 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 10209431 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10209433 nop */ ;
  /* 10209434 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10209435 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 10209436 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10209438 insb byte ptr es:[edi], dx */ TRAP(0x10209438u, "insb");
}

void F_10209440(CPU *c) {
  NATIVE_HOOK(0x10209440u) REGS; LOADALL;
  goto L_10209440;
L_1020942c:;
  /* 1020942c jmp dword ptr [ecx*4 + 0x102094b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x102094b0u); u32 t_ = M32(m_); switch (t_) { case 0x102094d0u: goto L_102094d0; case 0x102094d8u: goto L_102094d8; case 0x102094e0u: goto L_102094e0; case 0x102094e8u: goto L_102094e8; case 0x102094f0u: goto L_102094f0; case 0x102094f8u: goto L_102094f8; case 0x10209500u: goto L_10209500; case 0x10209513u: goto L_10209513; default: SAVEALL; call_ind(c, t_); return; } }
L_10209440:;
  /* 10209440 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10209442 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209444 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209446 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209449 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020944c mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020944f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10209452 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209455 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209458 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020945b cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020945e jb 0x1020942c */ if (CF_) goto L_1020942c;
  /* 10209460 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10209462 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_102094d0:;
  /* 102094d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102094d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102094d8:;
  /* 102094d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102094dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_102094e0:;
  /* 102094e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102094e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_102094e8:;
  /* 102094e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102094ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_102094f0:;
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_102094f8:;
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10209500:;
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10209513:;
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020946c(CPU *c) {
  NATIVE_HOOK(0x1020946cu) REGS; LOADALL;
  goto L_1020946c;
L_1020942c:;
  /* 1020942c jmp dword ptr [ecx*4 + 0x102094b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x102094b0u); u32 t_ = M32(m_); switch (t_) { case 0x102094d0u: goto L_102094d0; case 0x102094d8u: goto L_102094d8; case 0x102094e0u: goto L_102094e0; case 0x102094e8u: goto L_102094e8; case 0x102094f0u: goto L_102094f0; case 0x102094f8u: goto L_102094f8; case 0x10209500u: goto L_10209500; case 0x10209513u: goto L_10209513; default: SAVEALL; call_ind(c, t_); return; } }
L_1020946c:;
  /* 1020946c and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1020946e mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209470 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209472 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209475 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10209478 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020947b add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1020947e add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209481 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10209484 jb 0x1020942c */ if (CF_) goto L_1020942c;
  /* 10209486 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10209488 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_102094d0:;
  /* 102094d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102094d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102094d8:;
  /* 102094d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102094dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_102094e0:;
  /* 102094e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102094e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_102094e8:;
  /* 102094e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102094ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_102094f0:;
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_102094f8:;
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10209500:;
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10209513:;
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209490(CPU *c) {
  NATIVE_HOOK(0x10209490u) REGS; LOADALL;
  goto L_10209490;
L_1020942c:;
  /* 1020942c jmp dword ptr [ecx*4 + 0x102094b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x102094b0u); u32 t_ = M32(m_); switch (t_) { case 0x102094d0u: goto L_102094d0; case 0x102094d8u: goto L_102094d8; case 0x102094e0u: goto L_102094e0; case 0x102094e8u: goto L_102094e8; case 0x102094f0u: goto L_102094f0; case 0x102094f8u: goto L_102094f8; case 0x10209500u: goto L_10209500; case 0x10209513u: goto L_10209513; default: SAVEALL; call_ind(c, t_); return; } }
L_10209490:;
  /* 10209490 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10209492 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209494 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209496 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209499 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1020949c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020949f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102094a2 jb 0x1020942c */ if (CF_) goto L_1020942c;
  /* 102094a4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 102094a6 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_102094d0:;
  /* 102094d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102094d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102094d8:;
  /* 102094d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102094dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_102094e0:;
  /* 102094e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102094e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_102094e8:;
  /* 102094e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102094ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_102094f0:;
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_102094f8:;
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10209500:;
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10209513:;
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102094b0(CPU *c) {
  NATIVE_HOOK(0x102094b0u) REGS; LOADALL;
L_102094b0:;
  /* 102094b0 adc edx, dword ptr [ebp - 0x6affefe0] */ { const u32 m_ = (u32)(ebp + 0x95001020u); u32 a_ = edx, b_ = M32(m_); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 102094b6 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 102094b8 clc */ SETC(OP_RAW, 0, 0, 0, 4);
  /* 102094b9 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 102094ba and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  TRAP(0x102094bcu, "undecodable");
}

void F_102094d0(CPU *c) {
  NATIVE_HOOK(0x102094d0u) REGS; LOADALL;
L_102094d0:;
  /* 102094d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102094d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 102094d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102094dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 102094e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102094e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 102094e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102094ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102094d8(CPU *c) {
  NATIVE_HOOK(0x102094d8u) REGS; LOADALL;
L_102094d8:;
  /* 102094d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 102094dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 102094e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102094e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 102094e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102094ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102094e0(CPU *c) {
  NATIVE_HOOK(0x102094e0u) REGS; LOADALL;
L_102094e0:;
  /* 102094e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102094e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 102094e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102094ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102094e8(CPU *c) {
  NATIVE_HOOK(0x102094e8u) REGS; LOADALL;
L_102094e8:;
  /* 102094e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 102094ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102094f0(CPU *c) {
  NATIVE_HOOK(0x102094f0u) REGS; LOADALL;
L_102094f0:;
  /* 102094f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102094f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102094f8(CPU *c) {
  NATIVE_HOOK(0x102094f8u) REGS; LOADALL;
L_102094f8:;
  /* 102094f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 102094fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209500(CPU *c) {
  NATIVE_HOOK(0x10209500u) REGS; LOADALL;
L_10209500:;
  /* 10209500 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10209504 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10209508 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1020950f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209511 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209513(CPU *c) {
  NATIVE_HOOK(0x10209513u) REGS; LOADALL;
L_10209513:;
  /* 10209513 jmp dword ptr [edx*4 + 0x1020951c] */ { const u32 m_ = (u32)(edx * 4u + 0x1020951cu); u32 t_ = M32(m_); switch (t_) { case 0x1020952cu: goto L_1020952c; case 0x10209534u: goto L_10209534; case 0x10209540u: goto L_10209540; case 0x10209554u: goto L_10209554; default: SAVEALL; call_ind(c, t_); return; } }
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020951c(CPU *c) {
  NATIVE_HOOK(0x1020951cu) REGS; LOADALL;
L_1020951c:;
  /* 1020951c sub al, 0x95 */ { u32 a_ = (eax & 0xffu), b_ = 0x95u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1020951e and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10209520 xor al, 0x95 */ { u32 a_ = (eax & 0xffu), b_ = 0x95u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10209522 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10209524 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10209525 xchg ebp, eax */ { u32 t_ = ebp; ebp = (u32)(eax); eax = (u32)(t_); }
  /* 10209526 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10209528 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 10209529 xchg ebp, eax */ { u32 t_ = ebp; ebp = (u32)(eax); eax = (u32)(t_); }
  /* 1020952a and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020952c(CPU *c) {
  NATIVE_HOOK(0x1020952cu) REGS; LOADALL;
L_1020952c:;
  /* 1020952c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020952f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209531 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209534(CPU *c) {
  NATIVE_HOOK(0x10209534u) REGS; LOADALL;
L_10209534:;
  /* 10209534 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209536 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209538 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020953b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020953c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020953d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020953e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209540(CPU *c) {
  NATIVE_HOOK(0x10209540u) REGS; LOADALL;
L_10209540:;
  /* 10209540 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209542 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209544 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209547 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020954a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020954d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020954e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020954f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10209550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209554(CPU *c) {
  NATIVE_HOOK(0x10209554u) REGS; LOADALL;
L_10209554:;
  /* 10209554 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209556 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209558 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020955b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020955e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209561 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209564 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209567 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10209568 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10209569 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102095bc(CPU *c) {
  NATIVE_HOOK(0x102095bcu) REGS; LOADALL;
L_102095bc:;
  /* 102095bc xchg esi, eax */ { u32 t_ = esi; esi = (u32)(eax); eax = (u32)(t_); }
  /* 102095bd and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 102095bf nop */ ;
  /* 102095c0 int3 */ TRAP(0x102095c0u, "int3");
}

void F_102095cc(CPU *c) {
  NATIVE_HOOK(0x102095ccu) REGS; LOADALL;
  goto L_102095cc;
L_10209594:;
  /* 10209594 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10209596 jmp dword ptr [ecx*4 + 0x10209668] */ { const u32 m_ = (u32)(ecx * 4u + 0x10209668u); u32 t_ = M32(m_); switch (t_) { case 0x102096afu: goto L_102096af; default: SAVEALL; call_ind(c, t_); return; } }
L_102095cc:;
  /* 102095cc mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102095cf and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102095d1 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102095d4 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102095d7 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 102095da sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102095dd cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102095e0 jb 0x10209594 */ if (CF_) goto L_10209594;
  /* 102095e2 std */ c->df = 1;
  /* 102095e3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 102095e5 cld */ c->df = 0;
  /* 102095e6 jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096af:;
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102095f0(CPU *c) {
  NATIVE_HOOK(0x102095f0u) REGS; LOADALL;
  goto L_102095f0;
L_10209594:;
  /* 10209594 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10209596 jmp dword ptr [ecx*4 + 0x10209668] */ { const u32 m_ = (u32)(ecx * 4u + 0x10209668u); u32 t_ = M32(m_); switch (t_) { case 0x102096afu: goto L_102096af; default: SAVEALL; call_ind(c, t_); return; } }
L_102095f0:;
  /* 102095f0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102095f3 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102095f5 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102095f8 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102095fb shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 102095fe mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209601 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209604 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209607 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020960a jb 0x10209594 */ if (CF_) goto L_10209594;
  /* 1020960c std */ c->df = 1;
  /* 1020960d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1020960f cld */ c->df = 0;
  /* 10209610 jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096af:;
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209618(CPU *c) {
  NATIVE_HOOK(0x10209618u) REGS; LOADALL;
  goto L_10209618;
L_10209594:;
  /* 10209594 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10209596 jmp dword ptr [ecx*4 + 0x10209668] */ { const u32 m_ = (u32)(ecx * 4u + 0x10209668u); u32 t_ = M32(m_); switch (t_) { case 0x102096afu: goto L_102096af; default: SAVEALL; call_ind(c, t_); return; } }
L_10209618:;
  /* 10209618 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020961b and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1020961d mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209620 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209623 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209626 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209629 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1020962c mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020962f sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10209632 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10209635 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10209638 jb 0x10209594 */ if (CF_) goto L_10209594;
  /* 1020963e std */ c->df = 1;
  /* 1020963f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10209641 cld */ c->df = 0;
  /* 10209642 jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096af:;
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209668(CPU *c) {
  NATIVE_HOOK(0x10209668u) REGS; LOADALL;
L_10209668:;
  /* 10209668 scasd eax, dword ptr es:[edi] */ { u32 st_ = c->df ? (u32)-4 : 4u; u32 a_ = eax, b_ = M32(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffffffffu, 4); }
  /* 10209669 xchg esi, eax */ { u32 t_ = esi; esi = (u32)(eax); eax = (u32)(t_); }
  /* 1020966a and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1020966c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10209670 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10209674 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10209678 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1020967c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10209680 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10209684 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10209688 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1020968c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10209690 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10209694 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209698 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020969c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102096a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 102096a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 102096ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102096ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020966c(CPU *c) {
  NATIVE_HOOK(0x1020966cu) REGS; LOADALL;
L_1020966c:;
  /* 1020966c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10209670 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10209674 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10209678 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1020967c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10209680 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10209684 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10209688 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1020968c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10209690 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10209694 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209698 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020969c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102096a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 102096a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 102096ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102096ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209674(CPU *c) {
  NATIVE_HOOK(0x10209674u) REGS; LOADALL;
L_10209674:;
  /* 10209674 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10209678 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1020967c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10209680 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10209684 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10209688 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1020968c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10209690 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10209694 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209698 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020969c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102096a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 102096a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 102096ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102096ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020967c(CPU *c) {
  NATIVE_HOOK(0x1020967cu) REGS; LOADALL;
L_1020967c:;
  /* 1020967c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10209680 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10209684 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10209688 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1020968c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10209690 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10209694 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209698 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020969c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102096a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 102096a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 102096ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102096ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209684(CPU *c) {
  NATIVE_HOOK(0x10209684u) REGS; LOADALL;
L_10209684:;
  /* 10209684 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10209688 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1020968c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10209690 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10209694 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209698 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020969c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102096a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 102096a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 102096ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102096ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020968c(CPU *c) {
  NATIVE_HOOK(0x1020968cu) REGS; LOADALL;
L_1020968c:;
  /* 1020968c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10209690 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10209694 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209698 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020969c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102096a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 102096a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 102096ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102096ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10209694(CPU *c) {
  NATIVE_HOOK(0x10209694u) REGS; LOADALL;
L_10209694:;
  /* 10209694 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209698 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020969c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102096a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 102096a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 102096ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102096ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020969c(CPU *c) {
  NATIVE_HOOK(0x1020969cu) REGS; LOADALL;
L_1020969c:;
  /* 1020969c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102096a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 102096a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 102096ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 102096ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102096af(CPU *c) {
  NATIVE_HOOK(0x102096afu) REGS; LOADALL;
L_102096af:;
  /* 102096af jmp dword ptr [edx*4 + 0x102096b8] */ { const u32 m_ = (u32)(edx * 4u + 0x102096b8u); u32 t_ = M32(m_); switch (t_) { case 0x102096c8u: goto L_102096c8; case 0x102096d0u: goto L_102096d0; case 0x102096e0u: goto L_102096e0; case 0x102096f4u: goto L_102096f4; default: SAVEALL; call_ind(c, t_); return; } }
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096d0:;
  /* 102096d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096e0:;
  /* 102096e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102096f4:;
  /* 102096f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102096fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102096fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209700 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10209703 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10209706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10209709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020970a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020970b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020970c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102096b8(CPU *c) {
  NATIVE_HOOK(0x102096b8u) REGS; LOADALL;
L_102096b8:;
  /* 102096b8 enter 0x2096, 0x10 */ TRAP(0x102096b8u, "unimpl enter 0x2096, 0x10");
  /* 102096bc rcl byte ptr [esi - 0x691fefe0] */ { const u32 m_ = (u32)(esi + 0x96e01020u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M8(m_); u32 r_ = a_, cf_ = CF_; u32 of0_ = ((a_ >> 7) ^ cf_) & 1u; for (u32 j_ = n_ % 9u; j_; j_--) { u32 hi_ = (r_ >> 7) & 1u; r_ = ((r_ << 1) | cf_) & 0xffu; cf_ = hi_; } u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | ((((r_ >> 7) ^ cf_) & 1u) << 11); SETRAW(e_); M8(m_) = (u8)(r_); } }
  /* 102096c2 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 102096c4 hlt */ TRAP(0x102096c4u, "hlt");
}

void F_102096c8(CPU *c) {
  NATIVE_HOOK(0x102096c8u) REGS; LOADALL;
L_102096c8:;
  /* 102096c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102096cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102096cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102096cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102096ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
