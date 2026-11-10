#include "funcs.h"

void F_0052bff0(CPU *c) {
  NATIVE_HOOK(0x52bff0u) REGS; LOADALL;
L_0052bff0:;
  /* 0052bff0 push 0xb0 */ { u32 v_ = 0xb0u; esp -= 4; M32(esp) = v_; }
  /* 0052bff5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x52bffau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52bff5u); RETCHK(0x52bffau, 0x52bff5u); LOADALL;
  /* 0052bffa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bffd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052bfff je 0x52c007 */ if (ZF_) goto L_0052c007;
  /* 0052c001 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
L_0052c007:;
  /* 0052c007 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 0052c00a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c00c je 0x52c014 */ if (ZF_) goto L_0052c014;
  /* 0052c00e mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_0052c014:;
  /* 0052c014 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 0052c017 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c019 je 0x52c021 */ if (ZF_) goto L_0052c021;
  /* 0052c01b mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_0052c021:;
  /* 0052c021 mov byte ptr [eax + 0xac], 1 */ { const u32 m_ = (u32)(eax + 0xacu); M8(m_) = (u8)(0x1u); }
  /* 0052c028 mov byte ptr [eax + 0xad], 0 */ { const u32 m_ = (u32)(eax + 0xadu); M8(m_) = (u8)(0x0u); }
  /* 0052c02f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c030(CPU *c) {
  NATIVE_HOOK(0x52c030u) REGS; LOADALL;
L_0052c030:;
  /* 0052c030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c033 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052c035 push 0x61dab1 */ { u32 v_ = 0x61dab1u; esp -= 4; M32(esp) = v_; }
  /* 0052c03a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052c040 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c041 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052c048 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c04b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c04c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c04d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052c04e mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0052c051 push 0xb0 */ { u32 v_ = 0xb0u; esp -= 4; M32(esp) = v_; }
  /* 0052c056 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052c058 call 0x5fe934 */ esp -= 4; M32(esp) = 0x52c05du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52c058u); RETCHK(0x52c05du, 0x52c058u); LOADALL;
  /* 0052c05d mov esi, eax */ { esi = (u32)(eax); }
  /* 0052c05f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052c066 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c069 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0052c06c mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0052c06f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c071 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0052c075 je 0x52c0a9 */ if (ZF_) goto L_0052c0a9;
  /* 0052c077 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052c07a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c07d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052c080 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052c083 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0052c085 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052c088 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0052c08a lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 0052c08d add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052c090 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052c091 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052c094 call 0x52b110 */ esp -= 4; M32(esp) = 0x52c099u; SAVEALL; F_0052b110(c); ABI_CHECK(0x52b110u, 0x52c094u); RETCHK(0x52c099u, 0x52c094u); LOADALL;
  /* 0052c099 mov dl, byte ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c09c mov byte ptr [esi + 0xac], dl */ { const u32 m_ = (u32)(esi + 0xacu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0052c0a2 mov byte ptr [esi + 0xad], 0 */ { const u32 m_ = (u32)(esi + 0xadu); M8(m_) = (u8)(0x0u); }
L_0052c0a9:;
  /* 0052c0a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052c0ac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052c0ad mov eax, esi */ { eax = (u32)(esi); }
  /* 0052c0af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052c0b0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052c0b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c0b8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052c0ba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c0bb ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0052c0be(CPU *c) {
  NATIVE_HOOK(0x52c0beu) REGS; LOADALL;
L_0052c0be:;
  /* 0052c0be mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0052c0c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c0c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52c0c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52c0c2u); RETCHK(0x52c0c7u, 0x52c0c2u); LOADALL;
  /* 0052c0c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c0ca push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052c0cc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052c0ce call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0052c0d3 int3 */ TRAP(0x52c0d3u, "int3");
}

void F_0052c0e0(CPU *c) {
  NATIVE_HOOK(0x52c0e0u) REGS; LOADALL;
L_0052c0e0:;
  /* 0052c0e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c0e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c0e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052c0e5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0052c0ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052c0f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c0f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052c0f8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c0fb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c0fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c0fd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052c0fe mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0052c101 mov al, byte ptr [edi + 0x49] */ { const u32 m_ = (u32)(edi + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c104 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c106 je 0x52c14b */ if (ZF_) goto L_0052c14b;
  /* 0052c108 push 0x1b */ { u32 v_ = 0x1bu; esp -= 4; M32(esp) = v_; }
  /* 0052c10a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052c10c push 0x6426f8 */ { u32 v_ = 0x6426f8u; esp -= 4; M32(esp) = v_; }
  /* 0052c111 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052c114 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0052c11b mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0052c11e mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0052c122 call 0x404420 */ esp -= 4; M32(esp) = 0x52c127u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x52c122u); RETCHK(0x52c127u, 0x52c122u); LOADALL;
  /* 0052c127 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052c12a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c12b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052c12e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0052c131 call 0x4040e0 */ esp -= 4; M32(esp) = 0x52c136u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x52c131u); RETCHK(0x52c136u, 0x52c131u); LOADALL;
  /* 0052c136 push 0x657b2c */ { u32 v_ = 0x657b2cu; esp -= 4; M32(esp) = v_; }
  /* 0052c13b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052c13e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052c13f mov dword ptr [ebp - 0x50], 0x63cf8c */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf8cu); }
  /* 0052c146 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_0052c14b:;
  /* 0052c14b lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0052c14e call 0x52bb70 */ esp -= 4; M32(esp) = 0x52c153u; SAVEALL; F_0052bb70(c); ABI_CHECK(0x52bb70u, 0x52c14eu); RETCHK(0x52c153u, 0x52c14eu); LOADALL;
  /* 0052c153 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0052c155 mov al, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c158 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c15a je 0x52c161 */ if (ZF_) goto L_0052c161;
  /* 0052c15c mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052c15f jmp 0x52c179 */ goto L_0052c179;
L_0052c161:;
  /* 0052c161 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c164 mov al, byte ptr [edx + 0x49] */ { const u32 m_ = (u32)(edx + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c167 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c169 je 0x52c16f */ if (ZF_) goto L_0052c16f;
  /* 0052c16b mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0052c16d jmp 0x52c179 */ goto L_0052c179;
L_0052c16f:;
  /* 0052c16f mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052c172 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c174 mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052c177 jne 0x52c1f1 */ if (!ZF_) goto L_0052c1f1;
L_0052c179:;
  /* 0052c179 mov al, byte ptr [ebx + 0x49] */ { const u32 m_ = (u32)(ebx + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c17c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c17e mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052c181 jne 0x52c186 */ if (!ZF_) goto L_0052c186;
  /* 0052c183 mov dword ptr [ebx + 4], esi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(esi); }
L_0052c186:;
  /* 0052c186 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c189 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c18c cmp dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c18f jne 0x52c196 */ if (!ZF_) goto L_0052c196;
  /* 0052c191 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0052c194 jmp 0x52c1a1 */ goto L_0052c1a1;
L_0052c196:;
  /* 0052c196 cmp dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c198 jne 0x52c19e */ if (!ZF_) goto L_0052c19e;
  /* 0052c19a mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 0052c19c jmp 0x52c1a1 */ goto L_0052c1a1;
L_0052c19e:;
  /* 0052c19e mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
L_0052c1a1:;
  /* 0052c1a1 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c1a4 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c1a6 jne 0x52c1c2 */ if (!ZF_) goto L_0052c1c2;
  /* 0052c1a8 mov al, byte ptr [ebx + 0x49] */ { const u32 m_ = (u32)(ebx + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c1ab test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c1ad je 0x52c1b3 */ if (ZF_) goto L_0052c1b3;
  /* 0052c1af mov eax, esi */ { eax = (u32)(esi); }
  /* 0052c1b1 jmp 0x52c1bd */ goto L_0052c1bd;
L_0052c1b3:;
  /* 0052c1b3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052c1b5 call 0x52c450 */ esp -= 4; M32(esp) = 0x52c1bau; SAVEALL; F_0052c450(c); ABI_CHECK(0x52c450u, 0x52c1b5u); RETCHK(0x52c1bau, 0x52c1b5u); LOADALL;
  /* 0052c1ba mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052c1bd:;
  /* 0052c1bd mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052c1c0 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_0052c1c2:;
  /* 0052c1c2 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c1c5 cmp dword ptr [eax + 8], edi */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c1c8 jne 0x52c24f */ if (!ZF_) goto L_0052c24f;
  /* 0052c1ce mov al, byte ptr [ebx + 0x49] */ { const u32 m_ = (u32)(ebx + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c1d1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c1d3 je 0x52c1df */ if (ZF_) goto L_0052c1df;
  /* 0052c1d5 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052c1d8 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052c1da mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052c1dd jmp 0x52c24f */ goto L_0052c24f;
L_0052c1df:;
  /* 0052c1df mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052c1e1 call 0x52c5d0 */ esp -= 4; M32(esp) = 0x52c1e6u; SAVEALL; F_0052c5d0(c); ABI_CHECK(0x52c5d0u, 0x52c1e1u); RETCHK(0x52c1e6u, 0x52c1e1u); LOADALL;
  /* 0052c1e6 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c1e9 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052c1ec mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052c1ef jmp 0x52c24f */ goto L_0052c24f;
L_0052c1f1:;
  /* 0052c1f1 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c1f4 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0052c1f6 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052c1f8 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c1fb jne 0x52c201 */ if (!ZF_) goto L_0052c201;
  /* 0052c1fd mov esi, eax */ { esi = (u32)(eax); }
  /* 0052c1ff jmp 0x52c21c */ goto L_0052c21c;
L_0052c201:;
  /* 0052c201 mov cl, byte ptr [ebx + 0x49] */ { const u32 m_ = (u32)(ebx + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c204 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c206 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052c209 jne 0x52c20e */ if (!ZF_) goto L_0052c20e;
  /* 0052c20b mov dword ptr [ebx + 4], esi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(esi); }
L_0052c20e:;
  /* 0052c20e mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 0052c210 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c213 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052c216 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c219 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
L_0052c21c:;
  /* 0052c21c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c21f mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052c222 cmp dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c225 jne 0x52c22c */ if (!ZF_) goto L_0052c22c;
  /* 0052c227 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c22a jmp 0x52c23a */ goto L_0052c23a;
L_0052c22c:;
  /* 0052c22c mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052c22f cmp dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c231 jne 0x52c237 */ if (!ZF_) goto L_0052c237;
  /* 0052c233 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0052c235 jmp 0x52c23a */ goto L_0052c23a;
L_0052c237:;
  /* 0052c237 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_0052c23a:;
  /* 0052c23a mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052c23d mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052c240 mov dl, byte ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c243 mov cl, byte ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c246 mov byte ptr [eax + 0x48], dl */ { const u32 m_ = (u32)(eax + 0x48u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0052c249 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c24c mov byte ptr [edi + 0x48], cl */ { const u32 m_ = (u32)(edi + 0x48u); M8(m_) = (u8)((ecx & 0xffu)); }
L_0052c24f:;
  /* 0052c24f cmp byte ptr [edi + 0x48], 1 */ { const u32 m_ = (u32)(edi + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052c253 jne 0x52c375 */ if (!ZF_) goto L_0052c375;
  /* 0052c259 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c25c cmp ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c25f je 0x52c371 */ if (ZF_) goto L_0052c371;
L_0052c265:;
  /* 0052c265 cmp byte ptr [ebx + 0x48], 1 */ { const u32 m_ = (u32)(ebx + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052c269 jne 0x52c371 */ if (!ZF_) goto L_0052c371;
  /* 0052c26f mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052c271 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c273 jne 0x52c2ee */ if (!ZF_) goto L_0052c2ee;
  /* 0052c275 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c278 mov al, byte ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c27b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c27d jne 0x52c295 */ if (!ZF_) goto L_0052c295;
  /* 0052c27f mov byte ptr [ecx + 0x48], 1 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c283 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c284 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052c286 mov byte ptr [esi + 0x48], 0 */ { const u32 m_ = (u32)(esi + 0x48u); M8(m_) = (u8)(0x0u); }
  /* 0052c28a call 0x52c3f0 */ esp -= 4; M32(esp) = 0x52c28fu; SAVEALL; F_0052c3f0(c); ABI_CHECK(0x52c3f0u, 0x52c28au); RETCHK(0x52c28fu, 0x52c28au); LOADALL;
  /* 0052c28f mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c292 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052c295:;
  /* 0052c295 mov al, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c298 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c29a jne 0x52c326 */ if (!ZF_) goto L_0052c326;
  /* 0052c2a0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052c2a2 cmp byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052c2a6 jne 0x52c2b1 */ if (!ZF_) goto L_0052c2b1;
  /* 0052c2a8 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c2ab cmp byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052c2af je 0x52c322 */ if (ZF_) goto L_0052c322;
L_0052c2b1:;
  /* 0052c2b1 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c2b4 cmp byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052c2b8 jne 0x52c2d0 */ if (!ZF_) goto L_0052c2d0;
  /* 0052c2ba mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052c2bc mov byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c2c0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c2c1 mov byte ptr [ecx + 0x48], 0 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x0u); }
  /* 0052c2c5 call 0x52c470 */ esp -= 4; M32(esp) = 0x52c2cau; SAVEALL; F_0052c470(c); ABI_CHECK(0x52c470u, 0x52c2c5u); RETCHK(0x52c2cau, 0x52c2c5u); LOADALL;
  /* 0052c2ca mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c2cd mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052c2d0:;
  /* 0052c2d0 mov al, byte ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c2d3 mov byte ptr [ecx + 0x48], al */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052c2d6 mov byte ptr [esi + 0x48], 1 */ { const u32 m_ = (u32)(esi + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c2da mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c2dd mov byte ptr [ecx + 0x48], 1 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c2e1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c2e2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052c2e4 call 0x52c3f0 */ esp -= 4; M32(esp) = 0x52c2e9u; SAVEALL; F_0052c3f0(c); ABI_CHECK(0x52c3f0u, 0x52c2e4u); RETCHK(0x52c2e9u, 0x52c2e4u); LOADALL;
  /* 0052c2e9 jmp 0x52c371 */ goto L_0052c371;
L_0052c2ee:;
  /* 0052c2ee mov al, byte ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c2f1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c2f3 jne 0x52c30a */ if (!ZF_) goto L_0052c30a;
  /* 0052c2f5 mov byte ptr [ecx + 0x48], 1 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c2f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c2fa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052c2fc mov byte ptr [esi + 0x48], 0 */ { const u32 m_ = (u32)(esi + 0x48u); M8(m_) = (u8)(0x0u); }
  /* 0052c300 call 0x52c470 */ esp -= 4; M32(esp) = 0x52c305u; SAVEALL; F_0052c470(c); ABI_CHECK(0x52c470u, 0x52c300u); RETCHK(0x52c305u, 0x52c300u); LOADALL;
  /* 0052c305 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052c307 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052c30a:;
  /* 0052c30a mov al, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c30d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c30f jne 0x52c326 */ if (!ZF_) goto L_0052c326;
  /* 0052c311 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c314 cmp byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052c318 jne 0x52c33b */ if (!ZF_) goto L_0052c33b;
  /* 0052c31a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052c31c cmp byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052c320 jne 0x52c33b */ if (!ZF_) goto L_0052c33b;
L_0052c322:;
  /* 0052c322 mov byte ptr [ecx + 0x48], 0 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x0u); }
L_0052c326:;
  /* 0052c326 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052c329 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c32c mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0052c32e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c330 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052c333 jne 0x52c265 */ if (!ZF_) goto L_0052c265;
  /* 0052c339 jmp 0x52c371 */ goto L_0052c371;
L_0052c33b:;
  /* 0052c33b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052c33d cmp byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052c341 jne 0x52c359 */ if (!ZF_) goto L_0052c359;
  /* 0052c343 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c346 mov byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c34a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c34b mov byte ptr [ecx + 0x48], 0 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x0u); }
  /* 0052c34f call 0x52c3f0 */ esp -= 4; M32(esp) = 0x52c354u; SAVEALL; F_0052c3f0(c); ABI_CHECK(0x52c3f0u, 0x52c34fu); RETCHK(0x52c354u, 0x52c34fu); LOADALL;
  /* 0052c354 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052c356 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052c359:;
  /* 0052c359 mov al, byte ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c35c mov byte ptr [ecx + 0x48], al */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052c35f mov byte ptr [esi + 0x48], 1 */ { const u32 m_ = (u32)(esi + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c363 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0052c365 mov byte ptr [ecx + 0x48], 1 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c369 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c36a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052c36c call 0x52c470 */ esp -= 4; M32(esp) = 0x52c371u; SAVEALL; F_0052c470(c); ABI_CHECK(0x52c470u, 0x52c36cu); RETCHK(0x52c371u, 0x52c36cu); LOADALL;
L_0052c371:;
  /* 0052c371 mov byte ptr [ebx + 0x48], 1 */ { const u32 m_ = (u32)(ebx + 0x48u); M8(m_) = (u8)(0x1u); }
L_0052c375:;
  /* 0052c375 cmp dword ptr [edi + 0x40], 0x10 */ { const u32 m_ = (u32)(edi + 0x40u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c379 jb 0x52c387 */ if (CF_) goto L_0052c387;
  /* 0052c37b mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0052c37e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c37f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52c384u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52c37fu); RETCHK(0x52c384u, 0x52c37fu); LOADALL;
  /* 0052c384 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052c387:;
  /* 0052c387 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052c389 mov ebx, 0xf */ { ebx = (u32)(0xfu); }
  /* 0052c38e mov dword ptr [edi + 0x40], ebx */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(ebx); }
  /* 0052c391 mov dword ptr [edi + 0x3c], esi */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(esi); }
  /* 0052c394 mov byte ptr [edi + 0x2c], 0 */ { const u32 m_ = (u32)(edi + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 0052c398 cmp dword ptr [edi + 0x24], 0x10 */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c39c jb 0x52c3aa */ if (CF_) goto L_0052c3aa;
  /* 0052c39e mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052c3a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c3a2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52c3a7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52c3a2u); RETCHK(0x52c3a7u, 0x52c3a2u); LOADALL;
  /* 0052c3a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052c3aa:;
  /* 0052c3aa mov dword ptr [edi + 0x24], ebx */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 0052c3ad mov dword ptr [edi + 0x20], esi */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(esi); }
  /* 0052c3b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052c3b1 mov byte ptr [edi + 0x10], 0 */ { const u32 m_ = (u32)(edi + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 0052c3b5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52c3bau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52c3b5u); RETCHK(0x52c3bau, 0x52c3b5u); LOADALL;
  /* 0052c3ba mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c3bd mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c3c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c3c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052c3c4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c3c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052c3c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c3c8 jbe 0x52c3ce */ if ((CF_|ZF_)) goto L_0052c3ce;
  /* 0052c3ca dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052c3cb mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_0052c3ce:;
  /* 0052c3ce mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052c3d1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052c3d4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052c3d6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052c3d9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052c3e0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052c3e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c3e3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052c3f0(CPU *c) {
  NATIVE_HOOK(0x52c3f0u) REGS; LOADALL;
L_0052c3f0:;
  /* 0052c3f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c3f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c3f3 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c3f6 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052c3f8 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052c3fb mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052c3fd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c3fe mov bl, byte ptr [edx + 0x49] */ { const u32 m_ = (u32)(edx + 0x49u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c401 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c403 jne 0x52c408 */ if (!ZF_) goto L_0052c408;
  /* 0052c405 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_0052c408:;
  /* 0052c408 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052c40b mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052c40e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c411 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052c414 cmp ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c417 jne 0x52c426 */ if (!ZF_) goto L_0052c426;
  /* 0052c419 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c41c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052c41e mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c421 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c422 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c423 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052c426:;
  /* 0052c426 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052c429 cmp ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c42b jne 0x52c439 */ if (!ZF_) goto L_0052c439;
  /* 0052c42d mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052c42f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052c431 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c434 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c435 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c436 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052c439:;
  /* 0052c439 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052c43c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052c43e mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c441 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c442 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c443 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052c450(CPU *c) {
  NATIVE_HOOK(0x52c450u) REGS; LOADALL;
L_0052c450:;
  /* 0052c450 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052c452 mov dl, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c455 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c457 jne 0x52c46b */ if (!ZF_) goto L_0052c46b;
  /* 0052c459 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052c460:;
  /* 0052c460 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052c462 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052c464 mov dl, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c467 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c469 je 0x52c460 */ if (ZF_) goto L_0052c460;
L_0052c46b:;
  /* 0052c46b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c470(CPU *c) {
  NATIVE_HOOK(0x52c470u) REGS; LOADALL;
L_0052c470:;
  /* 0052c470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c473 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052c475 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c478 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0052c47a mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c47d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c47e mov bl, byte ptr [edx + 0x49] */ { const u32 m_ = (u32)(edx + 0x49u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c481 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c483 jne 0x52c488 */ if (!ZF_) goto L_0052c488;
  /* 0052c485 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_0052c488:;
  /* 0052c488 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052c48b mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052c48e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c491 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052c494 cmp ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c497 jne 0x52c4a7 */ if (!ZF_) goto L_0052c4a7;
  /* 0052c499 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c49c mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052c49f mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c4a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c4a3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c4a4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052c4a7:;
  /* 0052c4a7 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052c4aa cmp ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c4ad jne 0x52c4bd */ if (!ZF_) goto L_0052c4bd;
  /* 0052c4af mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052c4b2 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052c4b5 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c4b8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c4b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c4ba ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052c4bd:;
  /* 0052c4bd mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052c4bf mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052c4c2 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c4c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c4c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c4c7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052c4d0(CPU *c) {
  NATIVE_HOOK(0x52c4d0u) REGS; LOADALL;
L_0052c4d0:;
  /* 0052c4d0 push 0x4c */ { u32 v_ = 0x4cu; esp -= 4; M32(esp) = v_; }
  /* 0052c4d2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x52c4d7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52c4d2u); RETCHK(0x52c4d7u, 0x52c4d2u); LOADALL;
  /* 0052c4d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c4da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c4dc je 0x52c4e4 */ if (ZF_) goto L_0052c4e4;
  /* 0052c4de mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
L_0052c4e4:;
  /* 0052c4e4 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 0052c4e7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c4e9 je 0x52c4f1 */ if (ZF_) goto L_0052c4f1;
  /* 0052c4eb mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_0052c4f1:;
  /* 0052c4f1 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 0052c4f4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c4f6 je 0x52c4fe */ if (ZF_) goto L_0052c4fe;
  /* 0052c4f8 mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_0052c4fe:;
  /* 0052c4fe mov byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052c502 mov byte ptr [eax + 0x49], 0 */ { const u32 m_ = (u32)(eax + 0x49u); M8(m_) = (u8)(0x0u); }
  /* 0052c506 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c510(CPU *c) {
  NATIVE_HOOK(0x52c510u) REGS; LOADALL;
L_0052c510:;
  /* 0052c510 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c511 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c513 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052c515 push 0x61da91 */ { u32 v_ = 0x61da91u; esp -= 4; M32(esp) = v_; }
  /* 0052c51a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052c520 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c521 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052c528 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c52b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c52c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c52d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052c52e mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0052c531 push 0x4c */ { u32 v_ = 0x4cu; esp -= 4; M32(esp) = v_; }
  /* 0052c533 call 0x5fe934 */ esp -= 4; M32(esp) = 0x52c538u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52c533u); RETCHK(0x52c538u, 0x52c533u); LOADALL;
  /* 0052c538 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052c53a mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052c541 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c544 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0052c547 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0052c54a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c54c mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0052c550 je 0x52c579 */ if (ZF_) goto L_0052c579;
  /* 0052c552 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c555 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052c558 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052c55b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0052c55d lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 0052c560 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052c563 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0052c566 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c567 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052c56a call 0x52c6d0 */ esp -= 4; M32(esp) = 0x52c56fu; SAVEALL; F_0052c6d0(c); ABI_CHECK(0x52c6d0u, 0x52c56au); RETCHK(0x52c56fu, 0x52c56au); LOADALL;
  /* 0052c56f mov cl, byte ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c572 mov byte ptr [esi + 0x48], cl */ { const u32 m_ = (u32)(esi + 0x48u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052c575 mov byte ptr [esi + 0x49], 0 */ { const u32 m_ = (u32)(esi + 0x49u); M8(m_) = (u8)(0x0u); }
L_0052c579:;
  /* 0052c579 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052c57c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052c57d mov eax, esi */ { eax = (u32)(esi); }
  /* 0052c57f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052c580 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052c587 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c588 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052c58a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c58b ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0052c58e(CPU *c) {
  NATIVE_HOOK(0x52c58eu) REGS; LOADALL;
L_0052c58e:;
  /* 0052c58e mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0052c591 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c592 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52c597u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52c592u); RETCHK(0x52c597u, 0x52c592u); LOADALL;
  /* 0052c597 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c59a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052c59c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052c59e call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0052c5a3 int3 */ TRAP(0x52c5a3u, "int3");
}

void F_0052c5b0(CPU *c) {
  NATIVE_HOOK(0x52c5b0u) REGS; LOADALL;
L_0052c5b0:;
  /* 0052c5b0 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c5b3 mov dl, byte ptr [ecx + 0xad] */ { const u32 m_ = (u32)(ecx + 0xadu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c5b9 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c5bb jne 0x52c5cf */ if (!ZF_) goto L_0052c5cf;
  /* 0052c5bd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0052c5c0:;
  /* 0052c5c0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052c5c2 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c5c5 mov dl, byte ptr [ecx + 0xad] */ { const u32 m_ = (u32)(ecx + 0xadu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c5cb test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c5cd je 0x52c5c0 */ if (ZF_) goto L_0052c5c0;
L_0052c5cf:;
  /* 0052c5cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c5d0(CPU *c) {
  NATIVE_HOOK(0x52c5d0u) REGS; LOADALL;
L_0052c5d0:;
  /* 0052c5d0 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c5d3 mov dl, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c5d6 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c5d8 jne 0x52c5ec */ if (!ZF_) goto L_0052c5ec;
  /* 0052c5da lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0052c5e0:;
  /* 0052c5e0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052c5e2 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c5e5 mov dl, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c5e8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c5ea je 0x52c5e0 */ if (ZF_) goto L_0052c5e0;
L_0052c5ec:;
  /* 0052c5ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c5f0(CPU *c) {
  NATIVE_HOOK(0x52c5f0u) REGS; LOADALL;
L_0052c5f0:;
  /* 0052c5f0 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0052c5f2 mov cl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c5f8 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c5fa je 0x52c602 */ if (ZF_) goto L_0052c602;
  /* 0052c5fc mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c5ff mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052c601 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052c602:;
  /* 0052c602 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052c604 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c605 mov bl, byte ptr [ecx + 0xad] */ { const u32 m_ = (u32)(ecx + 0xadu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c60b test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c60d jne 0x52c633 */ if (!ZF_) goto L_0052c633;
  /* 0052c60f mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c612 mov bl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c618 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c61a jne 0x52c62f */ if (!ZF_) goto L_0052c62f;
  /* 0052c61c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052c620:;
  /* 0052c620 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052c622 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c625 mov bl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c62b test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c62d je 0x52c620 */ if (ZF_) goto L_0052c620;
L_0052c62f:;
  /* 0052c62f mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0052c631 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c632 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052c633:;
  /* 0052c633 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c636 mov cl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c63c test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c63e jne 0x52c661 */ if (!ZF_) goto L_0052c661;
L_0052c640:;
  /* 0052c640 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0052c642 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c644 jne 0x52c655 */ if (!ZF_) goto L_0052c655;
  /* 0052c646 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052c648 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c64b mov cl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c651 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c653 je 0x52c640 */ if (ZF_) goto L_0052c640;
L_0052c655:;
  /* 0052c655 mov cl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c65b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c65d jne 0x52c661 */ if (!ZF_) goto L_0052c661;
  /* 0052c65f mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
L_0052c661:;
  /* 0052c661 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c662 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c670(CPU *c) {
  NATIVE_HOOK(0x52c670u) REGS; LOADALL;
L_0052c670:;
  /* 0052c670 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0052c672 mov cl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c675 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c677 je 0x52c67f */ if (ZF_) goto L_0052c67f;
  /* 0052c679 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c67c mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052c67e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052c67f:;
  /* 0052c67f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052c681 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c682 mov bl, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c685 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c687 jne 0x52c6a3 */ if (!ZF_) goto L_0052c6a3;
  /* 0052c689 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c68c mov bl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c68f test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c691 jne 0x52c69f */ if (!ZF_) goto L_0052c69f;
L_0052c693:;
  /* 0052c693 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052c695 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c698 mov bl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c69b test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c69d je 0x52c693 */ if (ZF_) goto L_0052c693;
L_0052c69f:;
  /* 0052c69f mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0052c6a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c6a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052c6a3:;
  /* 0052c6a3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c6a6 mov cl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c6a9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c6ab jne 0x52c6cb */ if (!ZF_) goto L_0052c6cb;
  /* 0052c6ad lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0052c6b0:;
  /* 0052c6b0 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0052c6b2 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c6b4 jne 0x52c6c2 */ if (!ZF_) goto L_0052c6c2;
  /* 0052c6b6 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052c6b8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c6bb mov cl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c6be test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c6c0 je 0x52c6b0 */ if (ZF_) goto L_0052c6b0;
L_0052c6c2:;
  /* 0052c6c2 mov cl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052c6c5 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c6c7 jne 0x52c6cb */ if (!ZF_) goto L_0052c6cb;
  /* 0052c6c9 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
L_0052c6cb:;
  /* 0052c6cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c6cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c6d0(CPU *c) {
  NATIVE_HOOK(0x52c6d0u) REGS; LOADALL;
L_0052c6d0:;
  /* 0052c6d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c6d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c6d3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052c6d9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052c6db push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 0052c6e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c6e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052c6e8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c6e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c6ea mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052c6ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052c6ee push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052c6f0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052c6f2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0052c6f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052c6f5 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052c6fc mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 0052c6ff push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c700 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052c702 mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0052c706 call 0x404140 */ esp -= 4; M32(esp) = 0x52c70bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52c706u); RETCHK(0x52c70bu, 0x52c706u); LOADALL;
  /* 0052c70b mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0052c70e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052c710 lea edi, [esi + 0x1c] */ edi = (u32)((u32)(esi + 0x1cu));
  /* 0052c713 add ebx, 0x1c */ { u32 a_ = ebx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052c716 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052c718 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052c71f mov dword ptr [edi + 0x14], 0 */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0052c726 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c727 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052c729 mov byte ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0052c72d call 0x404140 */ esp -= 4; M32(esp) = 0x52c732u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52c72du); RETCHK(0x52c732u, 0x52c72du); LOADALL;
  /* 0052c732 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0052c735 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052c738 mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0052c73b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052c73c mov eax, esi */ { eax = (u32)(esi); }
  /* 0052c73e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052c73f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052c746 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c747 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052c749 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c74a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052c750(CPU *c) {
  NATIVE_HOOK(0x52c750u) REGS; LOADALL;
L_0052c750:;
  /* 0052c750 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c752 je 0x52c76a */ if (ZF_) goto L_0052c76a;
  /* 0052c754 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c755 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0052c756:;
  /* 0052c756 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052c758 add eax, 0x54 */ { u32 a_ = eax, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052c75b cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c75d mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 0052c762 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0052c764 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052c766 jne 0x52c756 */ if (!ZF_) goto L_0052c756;
  /* 0052c768 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052c769 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052c76a:;
  /* 0052c76a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c770(CPU *c) {
  NATIVE_HOOK(0x52c770u) REGS; LOADALL;
L_0052c770:;
  /* 0052c770 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c772 je 0x52c78d */ if (ZF_) goto L_0052c78d;
  /* 0052c774 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c775 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0052c776:;
  /* 0052c776 sub edx, 0x54 */ { u32 a_ = edx, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052c779 sub eax, 0x54 */ { u32 a_ = eax, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052c77c cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c77e mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 0052c783 mov esi, edx */ { esi = (u32)(edx); }
  /* 0052c785 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052c787 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052c789 jne 0x52c776 */ if (!ZF_) goto L_0052c776;
  /* 0052c78b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052c78c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052c78d:;
  /* 0052c78d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c790(CPU *c) {
  NATIVE_HOOK(0x52c790u) REGS; LOADALL;
L_0052c790:;
  /* 0052c790 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c791 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052c793 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052c796 call 0x529870 */ esp -= 4; M32(esp) = 0x52c79bu; SAVEALL; F_00529870(c); ABI_CHECK(0x529870u, 0x52c796u); RETCHK(0x52c79bu, 0x52c796u); LOADALL;
  /* 0052c79b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052c79c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c7a0(CPU *c) {
  NATIVE_HOOK(0x52c7a0u) REGS; LOADALL;
L_0052c7a0:;
  /* 0052c7a0 cmp dword ptr [esi + 0x40], 0x10 */ { const u32 m_ = (u32)(esi + 0x40u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c7a4 jb 0x52c7b2 */ if (CF_) goto L_0052c7b2;
  /* 0052c7a6 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0052c7a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c7aa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52c7afu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52c7aau); RETCHK(0x52c7afu, 0x52c7aau); LOADALL;
  /* 0052c7af add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052c7b2:;
  /* 0052c7b2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052c7b3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052c7b5 mov dword ptr [esi + 0x40], 0xf */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0xfu); }
  /* 0052c7bc mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 0052c7bf mov byte ptr [esi + 0x2c], bl */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052c7c2 cmp dword ptr [esi + 0x24], 0x10 */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c7c6 jb 0x52c7d4 */ if (CF_) goto L_0052c7d4;
  /* 0052c7c8 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052c7cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052c7cc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52c7d1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52c7ccu); RETCHK(0x52c7d1u, 0x52c7ccu); LOADALL;
  /* 0052c7d1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052c7d4:;
  /* 0052c7d4 mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0052c7d7 mov dword ptr [esi + 0x24], 0xf */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0xfu); }
  /* 0052c7de mov byte ptr [esi + 0x10], bl */ { const u32 m_ = (u32)(esi + 0x10u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052c7e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052c7e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c7f0(CPU *c) {
  NATIVE_HOOK(0x52c7f0u) REGS; LOADALL;
L_0052c7f0:;
  /* 0052c7f0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c7f2 jbe 0x52c80f */ if ((CF_|ZF_)) goto L_0052c80f;
  /* 0052c7f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c7f5 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0052c7f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0052c7f8:;
  /* 0052c7f8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c7fa je 0x52c807 */ if (ZF_) goto L_0052c807;
  /* 0052c7fc mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 0052c801 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0052c803 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052c805 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0052c807:;
  /* 0052c807 add eax, 0x54 */ { u32 a_ = eax, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052c80a dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052c80b jne 0x52c7f8 */ if (!ZF_) goto L_0052c7f8;
  /* 0052c80d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052c80e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052c80f:;
  /* 0052c80f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c810(CPU *c) {
  NATIVE_HOOK(0x52c810u) REGS; LOADALL;
L_0052c810:;
  /* 0052c810 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c812 je 0x52c831 */ if (ZF_) goto L_0052c831;
  /* 0052c814 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c815 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0052c816:;
  /* 0052c816 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c818 je 0x52c825 */ if (ZF_) goto L_0052c825;
  /* 0052c81a mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 0052c81f mov esi, edx */ { esi = (u32)(edx); }
  /* 0052c821 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052c823 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0052c825:;
  /* 0052c825 add edx, 0x54 */ { u32 a_ = edx, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052c828 add eax, 0x54 */ { u32 a_ = eax, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052c82b cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052c82d jne 0x52c816 */ if (!ZF_) goto L_0052c816;
  /* 0052c82f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052c830 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052c831:;
  /* 0052c831 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c840(CPU *c) {
  NATIVE_HOOK(0x52c840u) REGS; LOADALL;
L_0052c840:;
  /* 0052c840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c843 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052c846 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052c849 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c84a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052c84b call 0x5fc7c0 */ esp -= 4; M32(esp) = 0x52c850u; SAVEALL; F_005fc7c0(c); ABI_CHECK(0x5fc7c0u, 0x52c84bu); RETCHK(0x52c850u, 0x52c84bu); LOADALL;
  /* 0052c850 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c853 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c856 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c857 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c860(CPU *c) {
  NATIVE_HOOK(0x52c860u) REGS; LOADALL;
L_0052c860:;
  /* 0052c860 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052c862 mov edx, 0x3f800000 */ { edx = (u32)(0x3f800000u); }
  /* 0052c867 mov dword ptr [eax], 0x653084 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x653084u); }
  /* 0052c86d mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0052c870 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0052c873 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 0052c876 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052c879 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052c87c mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0052c87f mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0052c882 mov dword ptr [eax + 0x30], edx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(edx); }
  /* 0052c885 mov dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(edx); }
  /* 0052c888 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0052c88b mov dword ptr [eax + 0x3c], 0x44160000 */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(0x44160000u); }
  /* 0052c892 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c8a0(CPU *c) {
  NATIVE_HOOK(0x52c8a0u) REGS; LOADALL;
L_0052c8a0:;
  /* 0052c8a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c8a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c8a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c8a4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052c8a6 call 0x52c8d0 */ esp -= 4; M32(esp) = 0x52c8abu; SAVEALL; F_0052c8d0(c); ABI_CHECK(0x52c8d0u, 0x52c8a6u); RETCHK(0x52c8abu, 0x52c8a6u); LOADALL;
  /* 0052c8ab test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052c8af je 0x52c8ba */ if (ZF_) goto L_0052c8ba;
  /* 0052c8b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c8b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52c8b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52c8b2u); RETCHK(0x52c8b7u, 0x52c8b2u); LOADALL;
  /* 0052c8b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052c8ba:;
  /* 0052c8ba mov eax, esi */ { eax = (u32)(esi); }
  /* 0052c8bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052c8bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c8be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052c8d0(CPU *c) {
  NATIVE_HOOK(0x52c8d0u) REGS; LOADALL;
L_0052c8d0:;
  /* 0052c8d0 mov dword ptr [ecx], 0x653084 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x653084u); }
  /* 0052c8d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c8e0(CPU *c) {
  NATIVE_HOOK(0x52c8e0u) REGS; LOADALL;
L_0052c8e0:;
  /* 0052c8e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c8e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052c8e3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052c8e5 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52c8e8u; SAVEALL; call_ind(c, t_); RETCHK(0x52c8e8u, 0x52c8e5u); LOADALL; }
  /* 0052c8e8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052c8ea mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 0052c8ef mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0052c8f2 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0052c8f5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052c8f8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052c8fb mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 0052c8fe mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0052c901 mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0052c904 mov dword ptr [esi + 0x30], ecx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0052c907 mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0052c90a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052c90f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052c910 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052c920(CPU *c) {
  NATIVE_HOOK(0x52c920u) REGS; LOADALL;
L_0052c920:;
  /* 0052c920 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052c921 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052c923 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c926 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052c927 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052c929 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c92c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c92e je 0x52c9f8 */ if (ZF_) goto L_0052c9f8;
  /* 0052c934 mov ecx, dword ptr [0x68a6b8] */ { const u32 m_ = (u32)(0x68a6b8u); ecx = (u32)(M32(m_)); }
  /* 0052c93a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c93c je 0x52c948 */ if (ZF_) goto L_0052c948;
  /* 0052c93e mov dword ptr [0x68a6b8], 0 */ { const u32 m_ = (u32)(0x68a6b8u); M32(m_) = (u32)(0x0u); }
L_0052c948:;
  /* 0052c948 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052c94b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052c94c fmul dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052c94f fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052c952 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c953 call 0x5fcf70 */ esp -= 4; M32(esp) = 0x52c958u; SAVEALL; F_005fcf70(c); ABI_CHECK(0x5fcf70u, 0x52c953u); RETCHK(0x52c958u, 0x52c953u); LOADALL;
  /* 0052c958 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052c95b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c95c call 0x5fcf10 */ esp -= 4; M32(esp) = 0x52c961u; SAVEALL; F_005fcf10(c); ABI_CHECK(0x5fcf10u, 0x52c95cu); RETCHK(0x52c961u, 0x52c95cu); LOADALL;
  /* 0052c961 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052c964 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052c965 call 0x5fbc60 */ esp -= 4; M32(esp) = 0x52c96au; SAVEALL; F_005fbc60(c); ABI_CHECK(0x5fbc60u, 0x52c965u); RETCHK(0x52c96au, 0x52c965u); LOADALL;
  /* 0052c96a mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052c96d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c970 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052c972 je 0x52c9f8 */ if (ZF_) goto L_0052c9f8;
  /* 0052c978 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052c97b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c97c lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052c97f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c980 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052c983 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052c984 call 0x56b7b0 */ esp -= 4; M32(esp) = 0x52c989u; SAVEALL; F_0056b7b0(c); ABI_CHECK(0x56b7b0u, 0x52c984u); RETCHK(0x52c989u, 0x52c984u); LOADALL;
  /* 0052c989 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 0052c98f fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052c995 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c998 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c999 fmul dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052c99c fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052c99f call 0x56ea10 */ esp -= 4; M32(esp) = 0x52c9a4u; SAVEALL; F_0056ea10(c); ABI_CHECK(0x56ea10u, 0x52c99fu); RETCHK(0x52c9a4u, 0x52c99fu); LOADALL;
  /* 0052c9a4 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0052c9a7 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052c9aa fmul dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052c9ad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c9b0 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052c9b4 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0052c9b7 fmul dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052c9ba fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052c9bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052c9be call 0x56ea60 */ esp -= 4; M32(esp) = 0x52c9c3u; SAVEALL; F_0056ea60(c); ABI_CHECK(0x56ea60u, 0x52c9beu); RETCHK(0x52c9c3u, 0x52c9beu); LOADALL;
  /* 0052c9c3 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052c9c6 fsub dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052c9c9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c9cc mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052c9cf fdiv dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052c9d2 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052c9d6 fld dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0052c9d9 fdiv dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052c9dc fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052c9df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052c9e0 call 0x56eab0 */ esp -= 4; M32(esp) = 0x52c9e5u; SAVEALL; F_0056eab0(c); ABI_CHECK(0x56eab0u, 0x52c9e0u); RETCHK(0x52c9e5u, 0x52c9e0u); LOADALL;
  /* 0052c9e5 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052c9e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052c9e9 call 0x56ea00 */ esp -= 4; M32(esp) = 0x52c9eeu; SAVEALL; F_0056ea00(c); ABI_CHECK(0x56ea00u, 0x52c9e9u); RETCHK(0x52c9eeu, 0x52c9e9u); LOADALL;
  /* 0052c9ee add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052c9f1 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
L_0052c9f8:;
  /* 0052c9f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052c9f9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052c9fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052c9fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052ca00(CPU *c) {
  NATIVE_HOOK(0x52ca00u) REGS; LOADALL;
L_0052ca00:;
  /* 0052ca00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ca01 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052ca03 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052ca06 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ca08 je 0x52ca21 */ if (ZF_) goto L_0052ca21;
  /* 0052ca0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ca0b call 0x5fc8a0 */ esp -= 4; M32(esp) = 0x52ca10u; SAVEALL; F_005fc8a0(c); ABI_CHECK(0x5fc8a0u, 0x52ca0bu); RETCHK(0x52ca10u, 0x52ca0bu); LOADALL;
  /* 0052ca10 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ca13 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0052ca1a mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
L_0052ca21:;
  /* 0052ca21 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ca22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ca30(CPU *c) {
  NATIVE_HOOK(0x52ca30u) REGS; LOADALL;
L_0052ca30:;
  /* 0052ca30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ca31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ca33 sub esp, 0x10c */ { u32 a_ = esp, b_ = 0x10cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ca39 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052ca3e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ca3f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ca40 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052ca43 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052ca45 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052ca47 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052ca49 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ca4cu; SAVEALL; call_ind(c, t_); RETCHK(0x52ca4cu, 0x52ca49u); LOADALL; }
  /* 0052ca4c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ca4d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052ca4f push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052ca51 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x52ca56u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x52ca51u); RETCHK(0x52ca56u, 0x52ca51u); LOADALL;
  /* 0052ca56 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052ca5c lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0052ca62 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ca63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ca64 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052ca66 call dword ptr [edx + 0xcc] */ { const u32 m_ = (u32)(edx + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ca6cu; SAVEALL; call_ind(c, t_); RETCHK(0x52ca6cu, 0x52ca66u); LOADALL; }
  /* 0052ca6c mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052ca72 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0052ca78 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ca79 call dword ptr [ecx + 0xf4] */ { const u32 m_ = (u32)(ecx + 0xf4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ca7fu; SAVEALL; call_ind(c, t_); RETCHK(0x52ca7fu, 0x52ca79u); LOADALL; }
  /* 0052ca7f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052ca81 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ca84 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052ca85 js 0x52cabd */ if (SF_) goto L_0052cabd;
  /* 0052ca87 mov al, 0x2e */ { eax = (eax & 0xffffff00u) | ((u32)(0x2eu) & 0xffu); }
  /* 0052ca89 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052ca90:;
  /* 0052ca90 cmp byte ptr [ebp + ecx - 0x104], al */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffefcu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052ca97 je 0x52ca9e */ if (ZF_) goto L_0052ca9e;
  /* 0052ca99 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052ca9a jns 0x52ca90 */ if (!SF_) goto L_0052ca90;
  /* 0052ca9c jmp 0x52cabd */ goto L_0052cabd;
L_0052ca9e:;
  /* 0052ca9e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052caa0 jl 0x52cabd */ if (LT_) goto L_0052cabd;
  /* 0052caa2 call 0x559180 */ esp -= 4; M32(esp) = 0x52caa7u; SAVEALL; F_00559180(c); ABI_CHECK(0x559180u, 0x52caa2u); RETCHK(0x52caa7u, 0x52caa2u); LOADALL;
L_0052caa7:;
  /* 0052caa7 cmp byte ptr [ebp + ecx - 0x104], al */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffefcu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052caae je 0x52cab5 */ if (ZF_) goto L_0052cab5;
  /* 0052cab0 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052cab1 jns 0x52caa7 */ if (!SF_) goto L_0052caa7;
  /* 0052cab3 jmp 0x52cabd */ goto L_0052cabd;
L_0052cab5:;
  /* 0052cab5 mov byte ptr [ebp + ecx - 0x103], 0 */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffefdu); M8(m_) = (u8)(0x0u); }
L_0052cabd:;
  /* 0052cabd lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0052cac3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052cac4 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x52cac9u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x52cac4u); RETCHK(0x52cac9u, 0x52cac4u); LOADALL;
  /* 0052cac9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052cacc test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cace je 0x52cb05 */ if (ZF_) goto L_0052cb05;
  /* 0052cad0 lea eax, [ebp - 0x10c] */ eax = (u32)((u32)(ebp + 0xfffffef4u));
  /* 0052cad6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052cad7 lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052cadd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052cade push 0x1b1 */ { u32 v_ = 0x1b1u; esp -= 4; M32(esp) = v_; }
  /* 0052cae3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052cae4 call 0x5b3890 */ esp -= 4; M32(esp) = 0x52cae9u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x52cae4u); RETCHK(0x52cae9u, 0x52cae4u); LOADALL;
  /* 0052cae9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052caec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052caee jne 0x52cb15 */ if (!ZF_) goto L_0052cb15;
  /* 0052caf0 mov eax, 0x653098 */ { eax = (u32)(0x653098u); }
  /* 0052caf5 call 0x559120 */ esp -= 4; M32(esp) = 0x52cafau; SAVEALL; F_00559120(c); ABI_CHECK(0x559120u, 0x52caf5u); RETCHK(0x52cafau, 0x52caf5u); LOADALL;
  /* 0052cafa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052cafc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052cafd call 0x5b3410 */ esp -= 4; M32(esp) = 0x52cb02u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x52cafdu); RETCHK(0x52cb02u, 0x52cafdu); LOADALL;
  /* 0052cb02 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052cb05:;
  /* 0052cb05 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052cb06 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052cb08 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052cb09 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052cb0c call 0x61af31 */ esp -= 4; M32(esp) = 0x52cb11u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52cb0cu); RETCHK(0x52cb11u, 0x52cb0cu); LOADALL;
  /* 0052cb11 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052cb13 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cb14 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052cb15:;
  /* 0052cb15 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052cb16 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052cb18 call 0x5fc9c0 */ esp -= 4; M32(esp) = 0x52cb1du; SAVEALL; F_005fc9c0(c); ABI_CHECK(0x5fc9c0u, 0x52cb18u); RETCHK(0x52cb1du, 0x52cb18u); LOADALL;
  /* 0052cb1d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0052cb1f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052cb22 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052cb24 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052cb26 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cb29u; SAVEALL; call_ind(c, t_); RETCHK(0x52cb29u, 0x52cb26u); LOADALL; }
  /* 0052cb29 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cb2b je 0x52cb05 */ if (ZF_) goto L_0052cb05;
  /* 0052cb2d mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0052cb30 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 0052cb35 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052cb36 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052cb38 call 0x52cc40 */ esp -= 4; M32(esp) = 0x52cb3du; SAVEALL; F_0052cc40(c); ABI_CHECK(0x52cc40u, 0x52cb38u); RETCHK(0x52cb3du, 0x52cb38u); LOADALL;
  /* 0052cb3d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052cb40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052cb41 call 0x5fcf60 */ esp -= 4; M32(esp) = 0x52cb46u; SAVEALL; F_005fcf60(c); ABI_CHECK(0x5fcf60u, 0x52cb41u); RETCHK(0x52cb46u, 0x52cb41u); LOADALL;
  /* 0052cb46 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052cb49 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052cb4a mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052cb4d call 0x5fd390 */ esp -= 4; M32(esp) = 0x52cb52u; SAVEALL; F_005fd390(c); ABI_CHECK(0x5fd390u, 0x52cb4du); RETCHK(0x52cb52u, 0x52cb4du); LOADALL;
  /* 0052cb52 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052cb55 mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0052cb58 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052cb5b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052cb5d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052cb5e mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0052cb61 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 0052cb64 mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 0052cb67 call 0x5b3410 */ esp -= 4; M32(esp) = 0x52cb6cu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x52cb67u); RETCHK(0x52cb6cu, 0x52cb67u); LOADALL;
  /* 0052cb6c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052cb6f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052cb72 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052cb73 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0052cb75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052cb76 call 0x61af31 */ esp -= 4; M32(esp) = 0x52cb7bu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52cb76u); RETCHK(0x52cb7bu, 0x52cb76u); LOADALL;
  /* 0052cb7b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052cb7d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cb7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052cb80(CPU *c) {
  NATIVE_HOOK(0x52cb80u) REGS; LOADALL;
L_0052cb80:;
  /* 0052cb80 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0052cb83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cb85 je 0x52cc30 */ if (ZF_) goto L_0052cc30;
  /* 0052cb8b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052cb8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cb90 je 0x52cc30 */ if (ZF_) goto L_0052cc30;
  /* 0052cb96 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052cb9b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052cb9d push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0052cb9f call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cba2u; SAVEALL; call_ind(c, t_); RETCHK(0x52cba2u, 0x52cb9fu); LOADALL; }
  /* 0052cba2 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052cba8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052cbaa push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0052cbac call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cbafu; SAVEALL; call_ind(c, t_); RETCHK(0x52cbafu, 0x52cbacu); LOADALL; }
  /* 0052cbaf mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052cbb5 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052cbb7 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0052cbb9 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cbbcu; SAVEALL; call_ind(c, t_); RETCHK(0x52cbbcu, 0x52cbb9u); LOADALL; }
  /* 0052cbbc mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052cbc1 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052cbc3 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0052cbc5 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cbc8u; SAVEALL; call_ind(c, t_); RETCHK(0x52cbc8u, 0x52cbc5u); LOADALL; }
  /* 0052cbc8 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052cbce push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052cbd0 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0052cbd2 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cbd5u; SAVEALL; call_ind(c, t_); RETCHK(0x52cbd5u, 0x52cbd2u); LOADALL; }
  /* 0052cbd5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052cbdb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052cbdd push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0052cbdf call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cbe2u; SAVEALL; call_ind(c, t_); RETCHK(0x52cbe2u, 0x52cbdfu); LOADALL; }
  /* 0052cbe2 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052cbe7 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0052cbe9 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0052cbeb call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cbeeu; SAVEALL; call_ind(c, t_); RETCHK(0x52cbeeu, 0x52cbebu); LOADALL; }
  /* 0052cbee mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052cbf4 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0052cbf6 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0052cbf8 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cbfbu; SAVEALL; call_ind(c, t_); RETCHK(0x52cbfbu, 0x52cbf8u); LOADALL; }
  /* 0052cbfb mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052cbfe add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052cc01 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052cc02 call 0x5fd370 */ esp -= 4; M32(esp) = 0x52cc07u; SAVEALL; F_005fd370(c); ABI_CHECK(0x5fd370u, 0x52cc02u); RETCHK(0x52cc07u, 0x52cc02u); LOADALL;
  /* 0052cc07 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052cc0c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052cc0e push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0052cc10 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cc13u; SAVEALL; call_ind(c, t_); RETCHK(0x52cc13u, 0x52cc10u); LOADALL; }
  /* 0052cc13 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052cc19 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052cc1b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0052cc1d call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cc20u; SAVEALL; call_ind(c, t_); RETCHK(0x52cc20u, 0x52cc1du); LOADALL; }
  /* 0052cc20 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052cc26 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052cc28 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0052cc2a call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cc2du; SAVEALL; call_ind(c, t_); RETCHK(0x52cc2du, 0x52cc2au); LOADALL; }
  /* 0052cc2d add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052cc30:;
  /* 0052cc30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052cc40(CPU *c) {
  NATIVE_HOOK(0x52cc40u) REGS; LOADALL;
L_0052cc40:;
  /* 0052cc40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052cc41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052cc43 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052cc46 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0052cc49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052cc4a push 0x52c840 */ { u32 v_ = 0x52c840u; esp -= 4; M32(esp) = v_; }
  /* 0052cc4f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052cc50 call 0x5fcea0 */ esp -= 4; M32(esp) = 0x52cc55u; SAVEALL; F_005fcea0(c); ABI_CHECK(0x5fcea0u, 0x52cc50u); RETCHK(0x52cc55u, 0x52cc50u); LOADALL;
  /* 0052cc55 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052cc58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cc59 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052cc60(CPU *c) {
  NATIVE_HOOK(0x52cc60u) REGS; LOADALL;
L_0052cc60:;
  /* 0052cc60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052cc61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052cc63 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 0052cc69 mov dword ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 0052cc70 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052cc76 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052cc79 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052cc7c fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 0052cc82 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052cc88 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052cc8b fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052cc8e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cc8f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052cca0(CPU *c) {
  NATIVE_HOOK(0x52cca0u) REGS; LOADALL;
L_0052cca0:;
  /* 0052cca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052cca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052cca3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052cca6 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 0052ccac fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052ccb2 fdiv dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052ccb5 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052ccb8 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052ccbb mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0052ccbe fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 0052ccc4 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052ccca fdiv dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052cccd fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052ccd0 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052ccd3 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052ccd6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ccd7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ccd8 call 0x52ccf0 */ esp -= 4; M32(esp) = 0x52ccddu; SAVEALL; F_0052ccf0(c); ABI_CHECK(0x52ccf0u, 0x52ccd8u); RETCHK(0x52ccddu, 0x52ccd8u); LOADALL;
  /* 0052ccdd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ccdf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cce0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052ccf0(CPU *c) {
  NATIVE_HOOK(0x52ccf0u) REGS; LOADALL;
L_0052ccf0:;
  /* 0052ccf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ccf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ccf3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ccf6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ccf9 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0052ccfc mov dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(edx); }
  /* 0052ccff mov dword ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 0052cd06 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cd07 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052cd10(CPU *c) {
  NATIVE_HOOK(0x52cd10u) REGS; LOADALL;
L_0052cd10:;
  /* 0052cd10 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052cd12 mov dword ptr [eax], 0x653094 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x653094u); }
  /* 0052cd18 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052cd1b mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052cd1e mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052cd21 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052cd30(CPU *c) {
  NATIVE_HOOK(0x52cd30u) REGS; LOADALL;
L_0052cd30:;
  /* 0052cd30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052cd31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052cd33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052cd34 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052cd36 call 0x52cd60 */ esp -= 4; M32(esp) = 0x52cd3bu; SAVEALL; F_0052cd60(c); ABI_CHECK(0x52cd60u, 0x52cd36u); RETCHK(0x52cd3bu, 0x52cd36u); LOADALL;
  /* 0052cd3b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052cd3f je 0x52cd4a */ if (ZF_) goto L_0052cd4a;
  /* 0052cd41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052cd42 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52cd47u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52cd42u); RETCHK(0x52cd47u, 0x52cd42u); LOADALL;
  /* 0052cd47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052cd4a:;
  /* 0052cd4a mov eax, esi */ { eax = (u32)(esi); }
  /* 0052cd4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052cd4d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cd4e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052cd60(CPU *c) {
  NATIVE_HOOK(0x52cd60u) REGS; LOADALL;
L_0052cd60:;
  /* 0052cd60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052cd61 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052cd63 mov dword ptr [esi], 0x653094 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653094u); }
  /* 0052cd69 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052cd6c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cd6e je 0x52cd79 */ if (ZF_) goto L_0052cd79;
  /* 0052cd70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052cd71 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52cd76u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52cd71u); RETCHK(0x52cd76u, 0x52cd71u); LOADALL;
  /* 0052cd76 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052cd79:;
  /* 0052cd79 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0052cd80 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0052cd87 mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 0052cd8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052cd8f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052cd90(CPU *c) {
  NATIVE_HOOK(0x52cd90u) REGS; LOADALL;
L_0052cd90:;
  /* 0052cd90 jmp 0x52cda0 */ SAVEALL; F_0052cda0(c); return;
}

void F_0052cda0(CPU *c) {
  NATIVE_HOOK(0x52cda0u) REGS; LOADALL;
L_0052cda0:;
  /* 0052cda0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052cda1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052cda2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052cda4 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0052cda6:;
  /* 0052cda6 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052cda9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cdab je 0x52cdf9 */ if (ZF_) goto L_0052cdf9;
  /* 0052cdad mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052cdb0 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052cdb2 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0052cdb7 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052cdb9 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052cdbc mov eax, edx */ { eax = (u32)(edx); }
  /* 0052cdbe shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052cdc1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052cdc3 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052cdc5 jae 0x52cdf9 */ if (!CF_) goto L_0052cdf9;
  /* 0052cdc7 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052cdca add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052cdcc mov eax, dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); eax = (u32)(M32(m_)); }
  /* 0052cdd2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052cdd4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052cdd6 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cdd9u; SAVEALL; call_ind(c, t_); RETCHK(0x52cdd9u, 0x52cdd6u); LOADALL; }
  /* 0052cdd9 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052cddc add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052cdde mov eax, dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); eax = (u32)(M32(m_)); }
  /* 0052cde4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cde6 je 0x52cdf0 */ if (ZF_) goto L_0052cdf0;
  /* 0052cde8 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052cdea push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052cdec mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052cdee call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cdf0u; SAVEALL; call_ind(c, t_); RETCHK(0x52cdf0u, 0x52cdeeu); LOADALL; }
L_0052cdf0:;
  /* 0052cdf0 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052cdf1 add edi, 0x108 */ { u32 a_ = edi, b_ = 0x108u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052cdf7 jmp 0x52cda6 */ goto L_0052cda6;
L_0052cdf9:;
  /* 0052cdf9 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052cdfc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cdfe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052cdff pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ce00 je 0x52ce0b */ if (ZF_) goto L_0052ce0b;
  /* 0052ce02 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ce03 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52ce08u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52ce03u); RETCHK(0x52ce08u, 0x52ce03u); LOADALL;
  /* 0052ce08 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052ce0b:;
  /* 0052ce0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052ce0d mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052ce10 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052ce13 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052ce16 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ce20(CPU *c) {
  NATIVE_HOOK(0x52ce20u) REGS; LOADALL;
L_0052ce20:;
  /* 0052ce20 mov dword ptr [ecx], 0x6530bc */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6530bcu); }
  /* 0052ce26 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ce30(CPU *c) {
  NATIVE_HOOK(0x52ce30u) REGS; LOADALL;
L_0052ce30:;
  /* 0052ce30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ce31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ce33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ce34 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052ce36 call 0x52ce20 */ esp -= 4; M32(esp) = 0x52ce3bu; SAVEALL; F_0052ce20(c); ABI_CHECK(0x52ce20u, 0x52ce36u); RETCHK(0x52ce3bu, 0x52ce36u); LOADALL;
  /* 0052ce3b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052ce3f je 0x52ce4a */ if (ZF_) goto L_0052ce4a;
  /* 0052ce41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ce42 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52ce47u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52ce42u); RETCHK(0x52ce47u, 0x52ce42u); LOADALL;
  /* 0052ce47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052ce4a:;
  /* 0052ce4a mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ce4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ce4d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ce4e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052ce60(CPU *c) {
  NATIVE_HOOK(0x52ce60u) REGS; LOADALL;
L_0052ce60:;
  /* 0052ce60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ce61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ce63 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ce66 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ce69 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052ce6b mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052ce6e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ce6f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052ce80(CPU *c) {
  NATIVE_HOOK(0x52ce80u) REGS; LOADALL;
L_0052ce80:;
  /* 0052ce80 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0052ce82 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0052ce84 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052ce87 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052ce8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ce90(CPU *c) {
  NATIVE_HOOK(0x52ce90u) REGS; LOADALL;
L_0052ce90:;
  /* 0052ce90 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052ce92 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0052ce94 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052ce97 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052ce9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052cea0(CPU *c) {
  NATIVE_HOOK(0x52cea0u) REGS; LOADALL;
L_0052cea0:;
  /* 0052cea0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0052cea2 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0052cea4 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052cea7 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052ceaa mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052cead mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052ceb0 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052ceb3 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052ceb6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052cec0(CPU *c) {
  NATIVE_HOOK(0x52cec0u) REGS; LOADALL;
L_0052cec0:;
  /* 0052cec0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052cec1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052cec3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052cec6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052cec9 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052cecb mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052cece mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052ced1 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052ced4 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052ced7 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052ceda pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cedb ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0052cee0(CPU *c) {
  NATIVE_HOOK(0x52cee0u) REGS; LOADALL;
L_0052cee0:;
  /* 0052cee0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052cee1 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 0052cee3 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 0052cee5 mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052cee8 mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 0052ceeb mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052ceee mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 0052cef1 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052cef4 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052cef7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052cef8 jmp 0x52cea0 */ SAVEALL; F_0052cea0(c); return;
}

void F_0052cf00(CPU *c) {
  NATIVE_HOOK(0x52cf00u) REGS; LOADALL;
L_0052cf00:;
  /* 0052cf00 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0052cf02 fcomp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0052cf04 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052cf06 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052cf09 jnp 0x52cf37 */ if (!PF_) goto L_0052cf37;
  /* 0052cf0b fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0052cf0d fcomp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0052cf10 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052cf12 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052cf15 je 0x52cf37 */ if (ZF_) goto L_0052cf37;
  /* 0052cf17 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052cf1a fcomp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0052cf1d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052cf1f test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052cf22 jnp 0x52cf37 */ if (!PF_) goto L_0052cf37;
  /* 0052cf24 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052cf27 fcomp dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0052cf2a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052cf2c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052cf2f je 0x52cf37 */ if (ZF_) goto L_0052cf37;
  /* 0052cf31 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052cf36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052cf37:;
  /* 0052cf37 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052cf39 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052cf40(CPU *c) {
  NATIVE_HOOK(0x52cf40u) REGS; LOADALL;
L_0052cf40:;
  /* 0052cf40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052cf41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052cf43 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052cf46 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cf48 je 0x52cf81 */ if (ZF_) goto L_0052cf81;
  /* 0052cf4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052cf4b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052cf4d call 0x507890 */ esp -= 4; M32(esp) = 0x52cf52u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x52cf4du); RETCHK(0x52cf52u, 0x52cf4du); LOADALL;
  /* 0052cf52 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052cf54 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cf56 je 0x52cf80 */ if (ZF_) goto L_0052cf80;
L_0052cf58:;
  /* 0052cf58 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052cf5a lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052cf5d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052cf5e call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52cf61u; SAVEALL; call_ind(c, t_); RETCHK(0x52cf61u, 0x52cf5eu); LOADALL; }
  /* 0052cf61 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0052cf64 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052cf66 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052cf68 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052cf6a fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052cf6c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0052cf6f fadd dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052cf72 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052cf75 call 0x507890 */ esp -= 4; M32(esp) = 0x52cf7au; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x52cf75u); RETCHK(0x52cf7au, 0x52cf75u); LOADALL;
  /* 0052cf7a mov esi, eax */ { esi = (u32)(eax); }
  /* 0052cf7c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052cf7e jne 0x52cf58 */ if (!ZF_) goto L_0052cf58;
L_0052cf80:;
  /* 0052cf80 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052cf81:;
  /* 0052cf81 jmp 0x62d878 */ goto L_0062d878;
L_0062d878:;
  /* 0062d878 cmp dword ptr [0x6880fc], 0x44160000 */ { const u32 m_ = (u32)(0x6880fcu); u32 a_ = M32(m_), b_ = 0x44160000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d882 jne 0x62d8ad */ if (!ZF_) goto L_0062d8ad;
  /* 0062d884 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0062d886 fld dword ptr [0x62d810] */ { const u32 m_ = (u32)(0x62d810u); FPUSH((double)MF32(m_)); }
  /* 0062d88c fcompi st(1) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(1)); SETRAW(e_); FPOP(); }
  /* 0062d88e jbe 0x62d8a5 */ if ((CF_|ZF_)) goto L_0062d8a5;
  /* 0062d890 fld dword ptr [0x62d818] */ { const u32 m_ = (u32)(0x62d818u); FPUSH((double)MF32(m_)); }
  /* 0062d896 fcompi st(1) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(1)); SETRAW(e_); FPOP(); }
  /* 0062d898 ja 0x62d8a5 */ if (!(CF_|ZF_)) goto L_0062d8a5;
  /* 0062d89a call 0x62d820 */ esp -= 4; M32(esp) = 0x62d89fu; SAVEALL; F_0062d820(c); ABI_CHECK(0x62d820u, 0x62d89au); RETCHK(0x62d89fu, 0x62d89au); LOADALL;
  /* 0062d89f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0062d8a1 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d8a3 jmp 0x62d8ad */ goto L_0062d8ad;
L_0062d8a5:;
  /* 0062d8a5 fadd dword ptr [0x62d81c] */ { const u32 m_ = (u32)(0x62d81cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0062d8ab fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
L_0062d8ad:;
  /* 0062d8ad mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062d8af pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062d8b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052cf90(CPU *c) {
  NATIVE_HOOK(0x52cf90u) REGS; LOADALL;
L_0052cf90:;
  /* 0052cf90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052cf91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052cf93 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052cf96 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052cf99 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052cf9b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052cf9c mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0052cf9f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052cfa2 lea edi, [ebp - 8] */ edi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052cfa5 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0052cfa8 call 0x52cf40 */ esp -= 4; M32(esp) = 0x52cfadu; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x52cfa8u); RETCHK(0x52cfadu, 0x52cfa8u); LOADALL;
  /* 0052cfad fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052cfb0 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052cfb2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052cfb3 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0052cfb9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052cfbb test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052cfbe je 0x52cfc7 */ if (ZF_) goto L_0052cfc7;
  /* 0052cfc0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052cfc2 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0052cfc4 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0052cfc7:;
  /* 0052cfc7 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052cfca fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052cfcd fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0052cfd0 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052cfd3 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0052cfd9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052cfdb test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052cfde je 0x52cfe8 */ if (ZF_) goto L_0052cfe8;
  /* 0052cfe0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052cfe2 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052cfe5 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0052cfe8:;
  /* 0052cfe8 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052cfeb mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0052cfee mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052cff1 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0052cff3 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052cff6 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052cff9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052cffb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052cffc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d000(CPU *c) {
  NATIVE_HOOK(0x52d000u) REGS; LOADALL;
L_0052d000:;
  /* 0052d000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d003 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d006 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d007 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052d009 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052d00b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052d00d lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052d010 call 0x52ce60 */ esp -= 4; M32(esp) = 0x52d015u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x52d010u); RETCHK(0x52d015u, 0x52d010u); LOADALL;
  /* 0052d015 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d017 je 0x52d04a */ if (ZF_) goto L_0052d04a;
  /* 0052d019 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052d020:;
  /* 0052d020 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052d022 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052d025 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d026 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052d028 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52d02bu; SAVEALL; call_ind(c, t_); RETCHK(0x52d02bu, 0x52d028u); LOADALL; }
  /* 0052d02b fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0052d02e fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d031 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052d033 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d036 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0052d039 fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d03c fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d03f call 0x507890 */ esp -= 4; M32(esp) = 0x52d044u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x52d03fu); RETCHK(0x52d044u, 0x52d03fu); LOADALL;
  /* 0052d044 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052d046 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d048 jne 0x52d020 */ if (!ZF_) goto L_0052d020;
L_0052d04a:;
  /* 0052d04a fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0052d04c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d04d fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052d050 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d052 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052d055 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052d058 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d05b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d05d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d05e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d060(CPU *c) {
  NATIVE_HOOK(0x52d060u) REGS; LOADALL;
L_0052d060:;
  /* 0052d060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d063 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d066 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052d068 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052d06b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052d06c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0052d06f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d072 lea edi, [ebp - 8] */ edi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052d075 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0052d078 call 0x52d000 */ esp -= 4; M32(esp) = 0x52d07du; SAVEALL; F_0052d000(c); ABI_CHECK(0x52d000u, 0x52d078u); RETCHK(0x52d07du, 0x52d078u); LOADALL;
  /* 0052d07d fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d080 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052d082 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052d083 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0052d089 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052d08b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d08e je 0x52d097 */ if (ZF_) goto L_0052d097;
  /* 0052d090 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052d092 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0052d094 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0052d097:;
  /* 0052d097 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d09a fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d09d fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0052d0a0 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052d0a3 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0052d0a9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052d0ab test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d0ae je 0x52d0b8 */ if (ZF_) goto L_0052d0b8;
  /* 0052d0b0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052d0b2 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052d0b5 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0052d0b8:;
  /* 0052d0b8 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d0bb mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0052d0be mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052d0c1 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0052d0c3 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d0c6 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052d0c9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d0cb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d0cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d0d0(CPU *c) {
  NATIVE_HOOK(0x52d0d0u) REGS; LOADALL;
L_0052d0d0:;
  /* 0052d0d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d0d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d0d3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d0d6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052d0d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d0d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052d0d9 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052d0db xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052d0dd xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052d0df test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d0e1 je 0x52d10f */ if (ZF_) goto L_0052d10f;
L_0052d0e3:;
  /* 0052d0e3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052d0e5 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052d0e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d0e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052d0eb call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52d0eeu; SAVEALL; call_ind(c, t_); RETCHK(0x52d0eeu, 0x52d0ebu); LOADALL; }
  /* 0052d0ee fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0052d0f1 call 0x61b154 */ esp -= 4; M32(esp) = 0x52d0f6u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52d0f1u); RETCHK(0x52d0f6u, 0x52d0f1u); LOADALL;
  /* 0052d0f6 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0052d0f9 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052d0fb call 0x61b154 */ esp -= 4; M32(esp) = 0x52d100u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52d0fbu); RETCHK(0x52d100u, 0x52d0fbu); LOADALL;
  /* 0052d100 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052d102 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052d104 call 0x507890 */ esp -= 4; M32(esp) = 0x52d109u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x52d104u); RETCHK(0x52d109u, 0x52d104u); LOADALL;
  /* 0052d109 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052d10b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d10d jne 0x52d0e3 */ if (!ZF_) goto L_0052d0e3;
L_0052d10f:;
  /* 0052d10f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d112 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052d114 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052d117 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052d119 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052d11a sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052d11c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d11d mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0052d11f mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052d122 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052d123 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d125 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d126 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d130(CPU *c) {
  NATIVE_HOOK(0x52d130u) REGS; LOADALL;
L_0052d130:;
  /* 0052d130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d133 sub esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d136 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d138 je 0x52d1d5 */ if (ZF_) goto L_0052d1d5;
  /* 0052d13e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d140 je 0x52d1d5 */ if (ZF_) goto L_0052d1d5;
  /* 0052d146 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d148 je 0x52d1d5 */ if (ZF_) goto L_0052d1d5;
  /* 0052d14e mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052d150 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052d153 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0052d155 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052d158 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052d15b fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052d15e mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0052d161 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052d163 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d166 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0052d169 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052d16c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d16d lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0052d170 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052d171 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d174 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0052d17b mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 0052d182 mov dword ptr [ebp - 0x1c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d189 mov dword ptr [ebp - 4], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d190 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 0052d197 call 0x5af460 */ esp -= 4; M32(esp) = 0x52d19cu; SAVEALL; F_005af460(c); ABI_CHECK(0x5af460u, 0x52d197u); RETCHK(0x52d19cu, 0x52d197u); LOADALL;
  /* 0052d19c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d19f push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052d1a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d1a2 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0052d1a5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d1a6 lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0052d1a9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052d1aa call 0x5aefe0 */ esp -= 4; M32(esp) = 0x52d1afu; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x52d1aau); RETCHK(0x52d1afu, 0x52d1aau); LOADALL;
  /* 0052d1af lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0052d1b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d1b3 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052d1b6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d1b7 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0052d1b9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052d1ba call 0x5aac00 */ esp -= 4; M32(esp) = 0x52d1bfu; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x52d1bau); RETCHK(0x52d1bfu, 0x52d1bau); LOADALL;
  /* 0052d1bf fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0052d1c2 fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d1c5 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d1c8 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0052d1cb fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d1ce fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052d1d0 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d1d2 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
L_0052d1d5:;
  /* 0052d1d5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d1d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d1d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d1e0(CPU *c) {
  NATIVE_HOOK(0x52d1e0u) REGS; LOADALL;
L_0052d1e0:;
  /* 0052d1e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d1e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d1e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d1e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052d1e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052d1e6 mov edi, edx */ { edi = (u32)(edx); }
  /* 0052d1e8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d1ea mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0052d1ec je 0x52d222 */ if (ZF_) goto L_0052d222;
  /* 0052d1ee test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d1f0 je 0x52d222 */ if (ZF_) goto L_0052d222;
  /* 0052d1f2 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d1f5 jl 0x52d222 */ if (LT_) goto L_0052d222;
  /* 0052d1f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d1f9 jle 0x52d222 */ if ((ZF_|LT_)) goto L_0052d222;
  /* 0052d1fb sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052d1fd mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052d200 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_0052d201:;
  /* 0052d201 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052d204 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d205 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d208 lea esi, [ebx + edi] */ esi = (u32)((u32)(ebx + edi));
  /* 0052d20b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052d20d call 0x52d130 */ esp -= 4; M32(esp) = 0x52d212u; SAVEALL; F_0052d130(c); ABI_CHECK(0x52d130u, 0x52d20du); RETCHK(0x52d212u, 0x52d20du); LOADALL;
  /* 0052d212 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052d215 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d218 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052d21b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052d21c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052d21f jne 0x52d201 */ if (!ZF_) goto L_0052d201;
  /* 0052d221 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052d222:;
  /* 0052d222 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052d223 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052d224 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d226 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d227 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d230(CPU *c) {
  NATIVE_HOOK(0x52d230u) REGS; LOADALL;
L_0052d230:;
  /* 0052d230 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d232 jne 0x52d237 */ if (!ZF_) goto L_0052d237;
  /* 0052d234 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052d236 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052d237:;
  /* 0052d237 mov cl, byte ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d23a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052d23c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d23e jl 0x52d24c */ if (LT_) goto L_0052d24c;
L_0052d240:;
  /* 0052d240 cmp cl, 0xa0 */ { u32 a_ = (ecx & 0xffu), b_ = 0xa0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052d243 jb 0x52d24c */ if (CF_) goto L_0052d24c;
  /* 0052d245 mov cl, byte ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d248 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052d249 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052d24a jns 0x52d240 */ if (!SF_) goto L_0052d240;
L_0052d24c:;
  /* 0052d24c and edx, 0x80000001 */ { u32 a_ = edx, b_ = 0x80000001u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052d252 jns 0x52d259 */ if (!SF_) goto L_0052d259;
  /* 0052d254 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052d255 or edx, 0xfffffffe */ { u32 a_ = edx, b_ = 0xfffffffeu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052d258 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0052d259:;
  /* 0052d259 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0052d25c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d260(CPU *c) {
  NATIVE_HOOK(0x52d260u) REGS; LOADALL;
L_0052d260:;
  /* 0052d260 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d261 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052d263 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d265 je 0x52d2b4 */ if (ZF_) goto L_0052d2b4;
  /* 0052d267 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d269 jle 0x52d2b4 */ if ((ZF_|LT_)) goto L_0052d2b4;
  /* 0052d26b cmp edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d26e jge 0x52d274 */ if (!LT_) goto L_0052d274;
  /* 0052d270 mov byte ptr [esi + 1], 0 */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)(0x0u); }
L_0052d274:;
  /* 0052d274 mov al, byte ptr [esi + edi - 1] */ { const u32 m_ = (u32)(esi + edi + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d278 cmp al, 0xa0 */ { u32 a_ = (eax & 0xffu), b_ = 0xa0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052d27a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052d27b lea ebx, [esi + edi - 1] */ ebx = (u32)((u32)(esi + edi + 0xffffffffu));
  /* 0052d27f jb 0x52d294 */ if (CF_) goto L_0052d294;
  /* 0052d281 lea eax, [edi - 1] */ eax = (u32)((u32)(edi + 0xffffffffu));
  /* 0052d284 call 0x52d230 */ esp -= 4; M32(esp) = 0x52d289u; SAVEALL; F_0052d230(c); ABI_CHECK(0x52d230u, 0x52d284u); RETCHK(0x52d289u, 0x52d284u); LOADALL;
  /* 0052d289 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d28b jne 0x52d2b0 */ if (!ZF_) goto L_0052d2b0;
  /* 0052d28d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052d28e mov byte ptr [esi + edi - 2], al */ { const u32 m_ = (u32)(esi + edi + 0xfffffffeu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052d292 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d293 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052d294:;
  /* 0052d294 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d296 jne 0x52d2b0 */ if (!ZF_) goto L_0052d2b0;
  /* 0052d298 mov al, byte ptr [esi + edi - 2] */ { const u32 m_ = (u32)(esi + edi + 0xfffffffeu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d29c cmp al, 0xa0 */ { u32 a_ = (eax & 0xffu), b_ = 0xa0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052d29e lea ebx, [esi + edi - 2] */ ebx = (u32)((u32)(esi + edi + 0xfffffffeu));
  /* 0052d2a2 jbe 0x52d2b3 */ if ((CF_|ZF_)) goto L_0052d2b3;
  /* 0052d2a4 lea eax, [edi - 2] */ eax = (u32)((u32)(edi + 0xfffffffeu));
  /* 0052d2a7 call 0x52d230 */ esp -= 4; M32(esp) = 0x52d2acu; SAVEALL; F_0052d230(c); ABI_CHECK(0x52d230u, 0x52d2a7u); RETCHK(0x52d2acu, 0x52d2a7u); LOADALL;
  /* 0052d2ac test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d2ae je 0x52d2b3 */ if (ZF_) goto L_0052d2b3;
L_0052d2b0:;
  /* 0052d2b0 mov byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M8(m_) = (u8)(0x0u); }
L_0052d2b3:;
  /* 0052d2b3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0052d2b4:;
  /* 0052d2b4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d2b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d2c0(CPU *c) {
  NATIVE_HOOK(0x52d2c0u) REGS; LOADALL;
L_0052d2c0:;
  /* 0052d2c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d2c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d2c3 sub esp, 0x120 */ { u32 a_ = esp, b_ = 0x120u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d2c9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052d2ce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052d2cf mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0052d2d2 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d2d4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052d2d7 je 0x52d44f */ if (ZF_) goto L_0052d44f;
  /* 0052d2dd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052d2de xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052d2e0 mov ecx, 0x46 */ { ecx = (u32)(0x46u); }
  /* 0052d2e5 lea edi, [ebp - 0x11c] */ edi = (u32)((u32)(ebp + 0xfffffee4u));
  /* 0052d2eb rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0052d2ed mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d2f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d2f1 call 0x5feb42 */ esp -= 4; M32(esp) = 0x52d2f6u; SAVEALL; F_005feb42(c); ABI_CHECK(0x5feb42u, 0x52d2f1u); RETCHK(0x52d2f6u, 0x52d2f1u); LOADALL;
  /* 0052d2f6 lea ecx, [ebp - 0x11c] */ ecx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 0052d2fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d2fd push 0x6530ec */ { u32 v_ = 0x6530ecu; esp -= 4; M32(esp) = v_; }
  /* 0052d302 call 0x5feb48 */ esp -= 4; M32(esp) = 0x52d307u; SAVEALL; F_005feb48(c); ABI_CHECK(0x5feb48u, 0x52d302u); RETCHK(0x52d307u, 0x52d302u); LOADALL;
  /* 0052d307 lea edx, [ebp - 0x11c] */ edx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 0052d30d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052d30e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d30f mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052d312 call 0x5feb4e */ esp -= 4; M32(esp) = 0x52d317u; SAVEALL; F_005feb4e(c); ABI_CHECK(0x5feb4eu, 0x52d312u); RETCHK(0x52d317u, 0x52d312u); LOADALL;
  /* 0052d317 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d31a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d31c jne 0x52d432 */ if (!ZF_) goto L_0052d432;
  /* 0052d322 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_0052d323:;
  /* 0052d323 test byte ptr [ebp - 0x11c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d32a je 0x52d3ab */ if (ZF_) goto L_0052d3ab;
  /* 0052d32c mov edi, 0x6530e8 */ { edi = (u32)(0x6530e8u); }
  /* 0052d331 lea esi, [ebp - 0x108] */ esi = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d337 mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 0052d33c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052d33e repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 0052d340 je 0x52d416 */ if (ZF_) goto L_0052d416;
  /* 0052d346 mov edi, 0x6530e4 */ { edi = (u32)(0x6530e4u); }
  /* 0052d34b lea esi, [ebp - 0x108] */ esi = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d351 mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 0052d356 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052d358 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 0052d35a je 0x52d416 */ if (ZF_) goto L_0052d416;
  /* 0052d360 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d366 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0052d369 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052d370:;
  /* 0052d370 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d372 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052d373 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d375 jne 0x52d370 */ if (!ZF_) goto L_0052d370;
  /* 0052d377 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052d379 mov dword ptr [ebp - 0x120], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M32(m_) = (u32)(eax); }
  /* 0052d37f je 0x52d416 */ if (ZF_) goto L_0052d416;
  /* 0052d385 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0052d388 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d389 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d38f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d390 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052d392 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x52d394u; SAVEALL; call_ind(c, t_); RETCHK(0x52d394u, 0x52d392u); LOADALL; }
  /* 0052d394 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052d397 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d398 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052d399 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d39a lea edx, [ebp - 0x108] */ edx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d3a0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052d3a1 call 0x52d2c0 */ esp -= 4; M32(esp) = 0x52d3a6u; SAVEALL; F_0052d2c0(c); ABI_CHECK(0x52d2c0u, 0x52d3a1u); RETCHK(0x52d3a6u, 0x52d3a1u); LOADALL;
  /* 0052d3a6 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d3a9 jmp 0x52d416 */ goto L_0052d416;
L_0052d3ab:;
  /* 0052d3ab lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d3b1 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0052d3b4:;
  /* 0052d3b4 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d3b6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052d3b7 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d3b9 jne 0x52d3b4 */ if (!ZF_) goto L_0052d3b4;
  /* 0052d3bb sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052d3bd mov edx, eax */ { edx = (u32)(eax); }
  /* 0052d3bf lea ecx, [edx - 4] */ ecx = (u32)((u32)(edx + 0xfffffffcu));
  /* 0052d3c2 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d3c4 jge 0x52d3ed */ if (!LT_) goto L_0052d3ed;
  /* 0052d3c6 jmp 0x52d3d0 */ goto L_0052d3d0;
L_0052d3d0:;
  /* 0052d3d0 mov al, byte ptr [ebp + ecx - 0x108] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffef8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d3d7 cmp al, 0x41 */ { u32 a_ = (eax & 0xffu), b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052d3d9 jl 0x52d3e8 */ if (LT_) goto L_0052d3e8;
  /* 0052d3db cmp al, 0x5a */ { u32 a_ = (eax & 0xffu), b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052d3dd jg 0x52d3e8 */ if (!(ZF_|LT_)) goto L_0052d3e8;
  /* 0052d3df add al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052d3e1 mov byte ptr [ebp + ecx - 0x108], al */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffef8u); M8(m_) = (u8)((eax & 0xffu)); }
L_0052d3e8:;
  /* 0052d3e8 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052d3e9 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d3eb jl 0x52d3d0 */ if (LT_) goto L_0052d3d0;
L_0052d3ed:;
  /* 0052d3ed mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052d3f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d3f1 lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d3f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d3f8 call 0x5fe9da */ esp -= 4; M32(esp) = 0x52d3fdu; SAVEALL; F_005fe9da(c); ABI_CHECK(0x5fe9dau, 0x52d3f8u); RETCHK(0x52d3fdu, 0x52d3f8u); LOADALL;
  /* 0052d3fd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d400 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d402 je 0x52d416 */ if (ZF_) goto L_0052d416;
  /* 0052d404 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052d407 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052d408 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d40e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d40f push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052d411 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x52d413u; SAVEALL; call_ind(c, t_); RETCHK(0x52d413u, 0x52d411u); LOADALL; }
  /* 0052d413 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052d416:;
  /* 0052d416 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052d419 lea ecx, [ebp - 0x11c] */ ecx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 0052d41f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d420 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052d421 call 0x5feb4e */ esp -= 4; M32(esp) = 0x52d426u; SAVEALL; F_005feb4e(c); ABI_CHECK(0x5feb4eu, 0x52d421u); RETCHK(0x52d426u, 0x52d421u); LOADALL;
  /* 0052d426 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d429 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d42b je 0x52d323 */ if (ZF_) goto L_0052d323;
  /* 0052d431 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052d432:;
  /* 0052d432 push 0x6530e4 */ { u32 v_ = 0x6530e4u; esp -= 4; M32(esp) = v_; }
  /* 0052d437 call 0x5feb42 */ esp -= 4; M32(esp) = 0x52d43cu; SAVEALL; F_005feb42(c); ABI_CHECK(0x5feb42u, 0x52d437u); RETCHK(0x52d43cu, 0x52d437u); LOADALL;
  /* 0052d43c mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052d43f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d440 lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0052d446 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d447 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052d449 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x52d44bu; SAVEALL; call_ind(c, t_); RETCHK(0x52d44bu, 0x52d449u); LOADALL; }
  /* 0052d44b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d44e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0052d44f:;
  /* 0052d44f mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052d452 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052d453 call 0x61af31 */ esp -= 4; M32(esp) = 0x52d458u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52d453u); RETCHK(0x52d458u, 0x52d453u); LOADALL;
  /* 0052d458 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d45a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d45b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d460(CPU *c) {
  NATIVE_HOOK(0x52d460u) REGS; LOADALL;
L_0052d460:;
  /* 0052d460 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d461 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d463 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d466 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052d469 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052d46a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052d46c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052d46e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d470 jne 0x52d498 */ if (!ZF_) goto L_0052d498;
  /* 0052d472 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d475 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052d478 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052d47b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052d47e mov dword ptr [edi], 0x3f800000 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d484 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052d487 mov dword ptr [edi + 0xc], 0x3f800000 */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d48e mov dword ptr [edi + 0x14], ecx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0052d491 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052d492 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d494 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d495 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0052d498:;
  /* 0052d498 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d49b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d49c jne 0x52d510 */ if (!ZF_) goto L_0052d510;
  /* 0052d49e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052d4a1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d4a4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d4a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052d4a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d4a7 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052d4aa mov dword ptr [ebp - 0x18], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d4b1 mov dword ptr [ebp - 0xc], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d4b8 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 0052d4bf mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0052d4c6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052d4cd mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0052d4d4 call 0x52d460 */ esp -= 4; M32(esp) = 0x52d4d9u; SAVEALL; F_0052d460(c); ABI_CHECK(0x52d460u, 0x52d4d4u); RETCHK(0x52d4d9u, 0x52d4d4u); LOADALL;
  /* 0052d4d9 mov edx, edi */ { edx = (u32)(edi); }
  /* 0052d4db lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0052d4de lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052d4e1 call 0x52d690 */ esp -= 4; M32(esp) = 0x52d4e6u; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52d4e1u); RETCHK(0x52d4e6u, 0x52d4e1u); LOADALL;
  /* 0052d4e6 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052d4e8 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 0052d4ea mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052d4ed mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052d4f0 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052d4f3 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052d4f6 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052d4f9 mov dword ptr [edi + 0xc], edx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052d4fc mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052d4ff mov dword ptr [edi + 0x10], ecx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052d502 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052d505 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d506 mov dword ptr [edi + 0x14], edx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(edx); }
  /* 0052d509 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052d50a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d50c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d50d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0052d510:;
  /* 0052d510 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d513 jne 0x52d57f */ if (!ZF_) goto L_0052d57f;
  /* 0052d515 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052d518 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d519 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052d51c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d51d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d51e lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052d521 mov dword ptr [ebp - 0x18], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d528 mov dword ptr [ebp - 0xc], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d52f mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 0052d536 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0052d53d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052d544 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0052d54b call 0x52d460 */ esp -= 4; M32(esp) = 0x52d550u; SAVEALL; F_0052d460(c); ABI_CHECK(0x52d460u, 0x52d54bu); RETCHK(0x52d550u, 0x52d54bu); LOADALL;
  /* 0052d550 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052d553 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0052d556 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052d558 call 0x52d690 */ esp -= 4; M32(esp) = 0x52d55du; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52d558u); RETCHK(0x52d55du, 0x52d558u); LOADALL;
  /* 0052d55d mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052d55f mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 0052d561 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052d564 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052d567 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052d56a mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052d56d mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052d570 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052d573 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052d576 mov dword ptr [edi + 0x10], edx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(edx); }
  /* 0052d579 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052d57c mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
L_0052d57f:;
  /* 0052d57f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052d581 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d583 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d584 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052d590(CPU *c) {
  NATIVE_HOOK(0x52d590u) REGS; LOADALL;
L_0052d590:;
  /* 0052d590 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d591 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d593 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d596 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d599 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052d59c fmul dword ptr [0x656f54] */ { const u32 m_ = (u32)(0x656f54u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d5a2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052d5a3 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052d5a5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052d5a7 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d5a9 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d5ac jne 0x52d5d6 */ if (!ZF_) goto L_0052d5d6;
  /* 0052d5ae fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0052d5b1 mov dword ptr [edi + 0x10], ecx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052d5b4 fcos */ ST(0) = m_cos(ST(0)); c->fsw &= ~0x400u;
  /* 0052d5b6 mov dword ptr [edi + 0x14], ecx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0052d5b9 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0052d5bc fsin */ ST(0) = m_sin(ST(0)); c->fsw &= ~0x400u;
  /* 0052d5be fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0052d5c0 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d5c2 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0052d5c4 fchs */ ST(0) = -ST(0);
  /* 0052d5c6 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d5c9 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d5cc fstp dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d5cf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052d5d0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d5d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d5d3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052d5d6:;
  /* 0052d5d6 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d5d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d5da jne 0x52d61a */ if (!ZF_) goto L_0052d61a;
  /* 0052d5dc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d5df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d5e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d5e1 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0052d5e4 mov dword ptr [ebp - 0x1c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d5eb mov dword ptr [ebp - 0x10], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d5f2 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0052d5f9 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0052d600 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0052d607 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 0052d60e call 0x52d590 */ esp -= 4; M32(esp) = 0x52d613u; SAVEALL; F_0052d590(c); ABI_CHECK(0x52d590u, 0x52d60eu); RETCHK(0x52d613u, 0x52d60eu); LOADALL;
  /* 0052d613 mov edx, edi */ { edx = (u32)(edi); }
  /* 0052d615 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0052d618 jmp 0x52d65b */ goto L_0052d65b;
L_0052d61a:;
  /* 0052d61a cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052d61d jne 0x52d685 */ if (!ZF_) goto L_0052d685;
  /* 0052d61f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052d622 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052d623 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d624 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0052d627 mov dword ptr [ebp - 0x1c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d62e mov dword ptr [ebp - 0x10], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d635 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0052d63c mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0052d643 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0052d64a mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 0052d651 call 0x52d590 */ esp -= 4; M32(esp) = 0x52d656u; SAVEALL; F_0052d590(c); ABI_CHECK(0x52d590u, 0x52d651u); RETCHK(0x52d656u, 0x52d651u); LOADALL;
  /* 0052d656 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0052d659 mov ecx, edi */ { ecx = (u32)(edi); }
L_0052d65b:;
  /* 0052d65b lea esi, [ebp - 0x34] */ esi = (u32)((u32)(ebp + 0xffffffccu));
  /* 0052d65e call 0x52d690 */ esp -= 4; M32(esp) = 0x52d663u; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52d65eu); RETCHK(0x52d663u, 0x52d65eu); LOADALL;
  /* 0052d663 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052d665 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 0052d667 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052d66a mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052d66d mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052d670 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052d673 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052d676 mov dword ptr [edi + 0xc], edx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052d679 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052d67c mov dword ptr [edi + 0x10], ecx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052d67f mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052d682 mov dword ptr [edi + 0x14], edx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(edx); }
L_0052d685:;
  /* 0052d685 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d686 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052d687 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052d689 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d68a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052d690(CPU *c) {
  NATIVE_HOOK(0x52d690u) REGS; LOADALL;
L_0052d690:;
  /* 0052d690 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052d691 mov bl, byte ptr [0x9b9254] */ { const u32 m_ = (u32)(0x9b9254u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d697 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052d69c test al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d69e jne 0x52d6e2 */ if (!ZF_) goto L_0052d6e2;
  /* 0052d6a0 or dword ptr [0x9b9254], eax */ { const u32 m_ = (u32)(0x9b9254u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0052d6a6 mov dword ptr [0x9b923c], 0x3f800000 */ { const u32 m_ = (u32)(0x9b923cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d6b0 mov dword ptr [0x9b9248], 0x3f800000 */ { const u32 m_ = (u32)(0x9b9248u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d6ba mov dword ptr [0x9b9244], 0 */ { const u32 m_ = (u32)(0x9b9244u); M32(m_) = (u32)(0x0u); }
  /* 0052d6c4 mov dword ptr [0x9b9240], 0 */ { const u32 m_ = (u32)(0x9b9240u); M32(m_) = (u32)(0x0u); }
  /* 0052d6ce mov dword ptr [0x9b9250], 0 */ { const u32 m_ = (u32)(0x9b9250u); M32(m_) = (u32)(0x0u); }
  /* 0052d6d8 mov dword ptr [0x9b924c], 0 */ { const u32 m_ = (u32)(0x9b924cu); M32(m_) = (u32)(0x0u); }
L_0052d6e2:;
  /* 0052d6e2 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d6e5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052d6e7 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d6ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052d6eb fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0052d6ed fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d6ef faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d6f1 fstp dword ptr [0x9b923c] */ { const u32 m_ = (u32)(0x9b923cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d6f7 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0052d6f9 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d6fc fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0052d6ff fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d702 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d704 fstp dword ptr [0x9b9240] */ { const u32 m_ = (u32)(0x9b9240u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d70a fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d70d fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d70f fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d712 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d715 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d717 fstp dword ptr [0x9b9244] */ { const u32 m_ = (u32)(0x9b9244u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d71d fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0052d720 fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d723 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d726 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d729 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d72b fstp dword ptr [0x9b9248] */ { const u32 m_ = (u32)(0x9b9248u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d731 fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0052d734 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d736 fld dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0052d739 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d73c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d73e fadd dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d741 fstp dword ptr [0x9b924c] */ { const u32 m_ = (u32)(0x9b924cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d747 fld dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0052d74a fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d74d fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0052d750 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d753 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d755 fadd dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d758 mov ecx, dword ptr [0x9b923c] */ { const u32 m_ = (u32)(0x9b923cu); ecx = (u32)(M32(m_)); }
  /* 0052d75e fstp dword ptr [0x9b9250] */ { const u32 m_ = (u32)(0x9b9250u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d764 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052d766 mov edx, dword ptr [0x9b9240] */ { const u32 m_ = (u32)(0x9b9240u); edx = (u32)(M32(m_)); }
  /* 0052d76c mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052d76f mov ecx, dword ptr [0x9b9244] */ { const u32 m_ = (u32)(0x9b9244u); ecx = (u32)(M32(m_)); }
  /* 0052d775 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052d778 mov edx, dword ptr [0x9b9248] */ { const u32 m_ = (u32)(0x9b9248u); edx = (u32)(M32(m_)); }
  /* 0052d77e mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052d781 mov ecx, dword ptr [0x9b924c] */ { const u32 m_ = (u32)(0x9b924cu); ecx = (u32)(M32(m_)); }
  /* 0052d787 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052d78a mov edx, dword ptr [0x9b9250] */ { const u32 m_ = (u32)(0x9b9250u); edx = (u32)(M32(m_)); }
  /* 0052d790 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 0052d793 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d7a0(CPU *c) {
  NATIVE_HOOK(0x52d7a0u) REGS; LOADALL;
L_0052d7a0:;
  /* 0052d7a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052d7a1 mov bl, byte ptr [0x9b9238] */ { const u32 m_ = (u32)(0x9b9238u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052d7a7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052d7ac test al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d7ae jne 0x52d7f2 */ if (!ZF_) goto L_0052d7f2;
  /* 0052d7b0 or dword ptr [0x9b9238], eax */ { const u32 m_ = (u32)(0x9b9238u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0052d7b6 mov dword ptr [0x9b9220], 0x3f800000 */ { const u32 m_ = (u32)(0x9b9220u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d7c0 mov dword ptr [0x9b922c], 0x3f800000 */ { const u32 m_ = (u32)(0x9b922cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0052d7ca mov dword ptr [0x9b9228], 0 */ { const u32 m_ = (u32)(0x9b9228u); M32(m_) = (u32)(0x0u); }
  /* 0052d7d4 mov dword ptr [0x9b9224], 0 */ { const u32 m_ = (u32)(0x9b9224u); M32(m_) = (u32)(0x0u); }
  /* 0052d7de mov dword ptr [0x9b9234], 0 */ { const u32 m_ = (u32)(0x9b9234u); M32(m_) = (u32)(0x0u); }
  /* 0052d7e8 mov dword ptr [0x9b9230], 0 */ { const u32 m_ = (u32)(0x9b9230u); M32(m_) = (u32)(0x0u); }
L_0052d7f2:;
  /* 0052d7f2 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052d7f5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052d7f6 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d7f9 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0052d7fb fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d7fd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d7ff fst dword ptr [0x9b9220] */ { const u32 m_ = (u32)(0x9b9220u); MF32(m_) = (float)ST(0); }
  /* 0052d805 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052d808 fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d80b fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0052d80d fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d810 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d812 fstp dword ptr [0x9b9224] */ { const u32 m_ = (u32)(0x9b9224u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d818 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d81b fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d81d fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0052d820 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d823 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d825 fstp dword ptr [0x9b9228] */ { const u32 m_ = (u32)(0x9b9228u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d82b fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0052d82e fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d831 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d834 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d837 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d839 fstp dword ptr [0x9b922c] */ { const u32 m_ = (u32)(0x9b922cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d83f fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0052d842 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d844 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052d847 fmul dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d84a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d84c fadd dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d84f fstp dword ptr [0x9b9230] */ { const u32 m_ = (u32)(0x9b9230u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d855 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0052d858 fmul dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d85b fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052d85e fmul dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d861 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052d863 fadd dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052d866 fstp dword ptr [0x9b9234] */ { const u32 m_ = (u32)(0x9b9234u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d86c fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d86e mov eax, dword ptr [0x9b9224] */ { const u32 m_ = (u32)(0x9b9224u); eax = (u32)(M32(m_)); }
  /* 0052d873 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052d876 mov ecx, dword ptr [0x9b9228] */ { const u32 m_ = (u32)(0x9b9228u); ecx = (u32)(M32(m_)); }
  /* 0052d87c mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052d87f mov edx, dword ptr [0x9b922c] */ { const u32 m_ = (u32)(0x9b922cu); edx = (u32)(M32(m_)); }
  /* 0052d885 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052d888 mov eax, dword ptr [0x9b9230] */ { const u32 m_ = (u32)(0x9b9230u); eax = (u32)(M32(m_)); }
  /* 0052d88d mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052d890 mov ecx, dword ptr [0x9b9234] */ { const u32 m_ = (u32)(0x9b9234u); ecx = (u32)(M32(m_)); }
  /* 0052d896 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0052d899 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052d89b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d8a0(CPU *c) {
  NATIVE_HOOK(0x52d8a0u) REGS; LOADALL;
L_0052d8a0:;
  /* 0052d8a0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052d8a2 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 0052d8a8 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0052d8af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d8b0(CPU *c) {
  NATIVE_HOOK(0x52d8b0u) REGS; LOADALL;
L_0052d8b0:;
  /* 0052d8b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d8b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d8b3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052d8b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d8b8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052d8ba mov dword ptr [esi], 0x6530f8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6530f8u); }
  /* 0052d8c0 je 0x52d8cb */ if (ZF_) goto L_0052d8cb;
  /* 0052d8c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d8c3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52d8c8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52d8c3u); RETCHK(0x52d8c8u, 0x52d8c3u); LOADALL;
  /* 0052d8c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052d8cb:;
  /* 0052d8cb mov eax, esi */ { eax = (u32)(esi); }
  /* 0052d8cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d8ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052d8cf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052d8e0(CPU *c) {
  NATIVE_HOOK(0x52d8e0u) REGS; LOADALL;
L_0052d8e0:;
  /* 0052d8e0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052d8e3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052d8e5 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052d8e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d8f0(CPU *c) {
  NATIVE_HOOK(0x52d8f0u) REGS; LOADALL;
L_0052d8f0:;
  /* 0052d8f0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052d8f3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052d8f5 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052d8f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d900(CPU *c) {
  NATIVE_HOOK(0x52d900u) REGS; LOADALL;
L_0052d900:;
  /* 0052d900 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d901 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052d903 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052d906 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052d907 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x52d90cu; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x52d907u); RETCHK(0x52d90cu, 0x52d907u); LOADALL;
  /* 0052d90c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d90d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52d912u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52d90du); RETCHK(0x52d912u, 0x52d90du); LOADALL;
  /* 0052d912 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d915 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0052d917 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052d918 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052d920(CPU *c) {
  NATIVE_HOOK(0x52d920u) REGS; LOADALL;
L_0052d920:;
  /* 0052d920 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052d921 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052d923 sub esp, 0xfc */ { u32 a_ = esp, b_ = 0xfcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052d929 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052d92a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0052d92d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d92f je 0x52de0e */ if (ZF_) goto L_0052de0e;
  /* 0052d935 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052d937 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052d938 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052d939 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052d93b call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52d93du; SAVEALL; call_ind(c, t_); RETCHK(0x52d93du, 0x52d93bu); LOADALL; }
  /* 0052d93d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0052d93f mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052d942 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052d945 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052d947 fstp dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d94a call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52d94du; SAVEALL; call_ind(c, t_); RETCHK(0x52d94du, 0x52d94au); LOADALL; }
  /* 0052d94d mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052d950 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052d953 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052d956 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052d959 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052d95b fstp dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d95e mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052d961 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052d963 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052d966 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052d969 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052d96c mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052d96f mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0052d972 fst dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); MF32(m_) = (float)ST(0); }
  /* 0052d975 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 0052d978 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0052d97e mov bl, 0xff */ { ebx = (ebx & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0052d980 fdiv dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052d983 mov dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(0x0u); }
  /* 0052d98a mov dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x0u); }
  /* 0052d991 mov dword ptr [ebp - 0x50], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x0u); }
  /* 0052d998 mov dword ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x0u); }
  /* 0052d99f mov byte ptr [ebp - 1], bl */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052d9a2 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d9a5 fild dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0052d9a8 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052d9ab fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d9ae fst dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); }
  /* 0052d9b1 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0052d9b7 fdiv dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052d9ba fild dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0052d9bd mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052d9c0 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052d9c2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052d9c4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0052d9c6 fst dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); }
  /* 0052d9c9 fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052d9cc fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052d9cf mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052d9d2 fst dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); }
  /* 0052d9d5 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052d9d7 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d9da fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052d9dd fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 0052d9e0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052d9e3 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d9e6 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0052d9e9 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d9ec mov byte ptr [ebp + 0xf], bl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052d9ef fimul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 0052d9f2 fst dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 0052d9f5 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052d9f8 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052d9fb fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052d9fd mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 0052da00 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052da03 mov byte ptr [ebp + 0x13], bl */ { const u32 m_ = (u32)(ebp + 0x13u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052da06 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052da09 je 0x52dc04 */ if (ZF_) goto L_0052dc04;
  /* 0052da0f mov al, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052da12 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052da14 jns 0x52dbaf */ if (!SF_) goto L_0052dbaf;
  /* 0052da1a push 0x52d8a0 */ { u32 v_ = 0x52d8a0u; esp -= 4; M32(esp) = v_; }
  /* 0052da1f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0052da21 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0052da23 lea edx, [ebp - 0x8c] */ edx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0052da29 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052da2a call 0x4b91a0 */ esp -= 4; M32(esp) = 0x52da2fu; SAVEALL; F_004b91a0(c); ABI_CHECK(0x4b91a0u, 0x52da2au); RETCHK(0x52da2fu, 0x52da2au); LOADALL;
  /* 0052da2f fld dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); FPUSH((double)MF32(m_)); }
  /* 0052da32 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052da38 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052da3b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052da3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052da3e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052da41 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0052da44 fld dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); FPUSH((double)MF32(m_)); }
  /* 0052da47 mov dword ptr [ebp - 0x24], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x3f800000u); }
  /* 0052da4e fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052da54 mov dword ptr [ebp - 0x18], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052da5b mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0052da62 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 0052da69 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052da6c mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 0052da73 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0052da7a call 0x52d590 */ esp -= 4; M32(esp) = 0x52da7fu; SAVEALL; F_0052d590(c); ABI_CHECK(0x52d590u, 0x52da7au); RETCHK(0x52da7fu, 0x52da7au); LOADALL;
  /* 0052da7f fld dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); FPUSH((double)MF32(m_)); }
  /* 0052da82 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052da85 fstp dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052da8b fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0052da8e fchs */ ST(0) = -ST(0);
  /* 0052da90 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0052da92 fld dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); FPUSH((double)MF32(m_)); }
  /* 0052da98 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0052da9a fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052da9d fld dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); FPUSH((double)MF32(m_)); }
  /* 0052daa3 fmul dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052daa6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052daa8 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052daab fstp dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dab1 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052dab3 fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dab6 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0052dab9 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0052dabb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dabd fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dac0 fstp dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dac6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052dac8 fld dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); FPUSH((double)MF32(m_)); }
  /* 0052dace fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dad1 fstp dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dad4 fld dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); FPUSH((double)MF32(m_)); }
  /* 0052dada fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dadd fstp dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dae0 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0052dae3 fchs */ ST(0) = -ST(0);
  /* 0052dae5 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0052dae7 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0052dae9 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0052daeb fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052daee fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 0052daf0 fmul dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052daf3 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0052daf5 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052daf7 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dafa fstp dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db00 fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 0052db02 fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052db05 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0052db08 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0052db0a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052db0c fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db0f fstp dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db12 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0052db14 fld dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); FPUSH((double)MF32(m_)); }
  /* 0052db1a fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db1d fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db20 fld dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); FPUSH((double)MF32(m_)); }
  /* 0052db23 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db26 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db29 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0052db2c fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052db2f fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0052db31 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0052db33 fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052db36 fxch st(3) */ { double t_ = ST(0); ST(0) = ST(3); ST(3) = t_; }
  /* 0052db38 fmul dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052db3b faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0052db3d fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 0052db3f fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db42 fstp dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db45 fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052db48 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0052db4b fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0052db4d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052db4f fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db52 fstp dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db55 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052db57 fld dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); FPUSH((double)MF32(m_)); }
  /* 0052db5a fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db5d fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db60 fld dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); FPUSH((double)MF32(m_)); }
  /* 0052db63 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db66 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db69 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0052db6c fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052db6f fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0052db72 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052db75 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0052db77 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0052db79 fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052db7c fxch st(3) */ { double t_ = ST(0); ST(0) = ST(3); ST(3) = t_; }
  /* 0052db7e fmul dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052db81 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0052db83 fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 0052db85 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db88 fstp dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db8b fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052db8e fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0052db91 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0052db93 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052db95 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052db98 fstp dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052db9b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052db9d fld dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); FPUSH((double)MF32(m_)); }
  /* 0052dba0 fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dba3 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dba6 fld dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); FPUSH((double)MF32(m_)); }
  /* 0052dba9 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dbac fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
L_0052dbaf:;
  /* 0052dbaf mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052dbb2 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052dbb4 je 0x52dbce */ if (ZF_) goto L_0052dbce;
  /* 0052dbb6 fld dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); FPUSH((double)MF32(m_)); }
  /* 0052dbb9 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 0052dbbc mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0052dbbf fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dbc2 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 0052dbc5 mov dword ptr [ebp - 0x5c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ecx); }
  /* 0052dbc8 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dbcb mov dword ptr [ebp - 0x3c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edx); }
L_0052dbce:;
  /* 0052dbce test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052dbd0 je 0x52dbea */ if (ZF_) goto L_0052dbea;
  /* 0052dbd2 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 0052dbd5 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 0052dbd8 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0052dbdb fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dbde fld dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); FPUSH((double)MF32(m_)); }
  /* 0052dbe1 mov dword ptr [ebp - 0x48], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ecx); }
  /* 0052dbe4 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dbe7 mov dword ptr [ebp - 0x58], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(edx); }
L_0052dbea:;
  /* 0052dbea test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052dbed je 0x52dc04 */ if (ZF_) goto L_0052dc04;
  /* 0052dbef mov al, byte ptr [edi + 0xd] */ { const u32 m_ = (u32)(edi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052dbf2 mov cl, byte ptr [edi + 0xe] */ { const u32 m_ = (u32)(edi + 0xeu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052dbf5 mov dl, byte ptr [edi + 0xf] */ { const u32 m_ = (u32)(edi + 0xfu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052dbf8 mov bl, byte ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052dbfb mov byte ptr [ebp + 0x13], al */ { const u32 m_ = (u32)(ebp + 0x13u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052dbfe mov byte ptr [ebp - 1], cl */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052dc01 mov byte ptr [ebp + 0xf], dl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((edx & 0xffu)); }
L_0052dc04:;
  /* 0052dc04 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052dc07 fld dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); FPUSH((double)MF32(m_)); }
  /* 0052dc0a fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dc0c mov ecx, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ecx = (u32)(M32(m_)); }
  /* 0052dc0f fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 0052dc12 mov edx, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); edx = (u32)(M32(m_)); }
  /* 0052dc15 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dc18 mov dword ptr [ebp - 0xe8], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(ecx); }
  /* 0052dc1e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052dc20 mov ch, byte ptr [ebp + 0xf] */ { const u32 m_ = (u32)(ebp + 0xfu); ecx = (ecx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 0052dc23 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dc25 mov dword ptr [ebp - 0xe4], edx */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edx); }
  /* 0052dc2b movzx edx, byte ptr [ebp + 0x13] */ { const u32 m_ = (u32)(ebp + 0x13u); edx = (u32)(M8(m_)); }
  /* 0052dc2f mov dword ptr [ebp - 0xf4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff0cu); M32(m_) = (u32)(0x0u); }
  /* 0052dc39 fadd dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dc3c mov dword ptr [ebp - 0xf0], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff10u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052dc46 fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 0052dc49 mov cl, bl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0052dc4b fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dc4e mov dword ptr [ebp - 0xd8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff28u); M32(m_) = (u32)(0x0u); }
  /* 0052dc58 fld dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); FPUSH((double)MF32(m_)); }
  /* 0052dc5b mov dword ptr [ebp - 0xd4], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff2cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0052dc65 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dc68 mov dword ptr [ebp - 0xbc], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff44u); M32(m_) = (u32)(0x0u); }
  /* 0052dc72 mov dword ptr [ebp - 0xb8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052dc7c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dc7e fadd dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dc81 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052dc84 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052dc86 or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052dc88 fstp dword ptr [ebp - 0xfc] */ { const u32 m_ = (u32)(ebp + 0xffffff04u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dc8e movzx edx, byte ptr [ebp - 1] */ { const u32 m_ = (u32)(ebp + 0xffffffffu); edx = (u32)(M8(m_)); }
  /* 0052dc92 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052dc95 fstp dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dc9b or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052dc9d fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0052dca0 mov edx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edx = (u32)(M32(m_)); }
  /* 0052dca3 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dca5 mov dword ptr [ebp - 0xcc], edx */ { const u32 m_ = (u32)(ebp + 0xffffff34u); M32(m_) = (u32)(edx); }
  /* 0052dcab fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0052dcae mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 0052dcb1 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dcb4 mov dword ptr [ebp - 0xc8], edx */ { const u32 m_ = (u32)(ebp + 0xffffff38u); M32(m_) = (u32)(edx); }
  /* 0052dcba mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 0052dcbd mov dword ptr [ebp - 0xb0], edx */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(edx); }
  /* 0052dcc3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dcc5 mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 0052dcc8 mov dword ptr [ebp - 0xec], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff14u); M32(m_) = (u32)(ecx); }
  /* 0052dcce mov dword ptr [ebp - 0xd0], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff30u); M32(m_) = (u32)(ecx); }
  /* 0052dcd4 fadd dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dcd7 mov dword ptr [ebp - 0xac], edx */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M32(m_) = (u32)(edx); }
  /* 0052dcdd fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0052dce0 mov dword ptr [ebp - 0xb4], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(ecx); }
  /* 0052dce6 fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dce9 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0052dcec fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dcef faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dcf1 fadd dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dcf4 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052dcf6 fstp dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dcfc fstp dword ptr [ebp - 0xdc] */ { const u32 m_ = (u32)(ebp + 0xffffff24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dd02 fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0052dd05 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dd07 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0052dd0a fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dd0d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dd0f fadd dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dd12 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0052dd15 fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dd18 fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0052dd1b fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dd1e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dd20 fadd dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dd23 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052dd25 fstp dword ptr [ebp - 0xc4] */ { const u32 m_ = (u32)(ebp + 0xffffff3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dd2b fstp dword ptr [ebp - 0xc0] */ { const u32 m_ = (u32)(ebp + 0xffffff40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dd31 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0052dd34 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dd36 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0052dd39 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dd3c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dd3e fadd dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dd41 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0052dd44 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0052dd47 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0052dd49 fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dd4c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052dd4e fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0052dd51 mov dword ptr [ebp - 0xa0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(0x0u); }
  /* 0052dd5b fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052dd5e mov dword ptr [ebp - 0x9c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052dd68 mov dword ptr [ebp - 0x90], edx */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(edx); }
  /* 0052dd6e mov dword ptr [ebp - 0x98], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(ecx); }
  /* 0052dd74 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0052dd76 fadd dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052dd79 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 0052dd7c fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0052dd7e mov dword ptr [ebp - 0x94], eax */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(eax); }
  /* 0052dd84 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052dd89 fstp dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dd8f fstp dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052dd95 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52dd98u; SAVEALL; call_ind(c, t_); RETCHK(0x52dd98u, 0x52dd95u); LOADALL; }
  /* 0052dd98 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052dd9e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052dda0 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0052dda2 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52dda5u; SAVEALL; call_ind(c, t_); RETCHK(0x52dda5u, 0x52dda2u); LOADALL; }
  /* 0052dda5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052ddab push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052ddad push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0052ddaf call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ddb2u; SAVEALL; call_ind(c, t_); RETCHK(0x52ddb2u, 0x52ddafu); LOADALL; }
  /* 0052ddb2 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 0052ddb7 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052ddba add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ddbd test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ddbf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ddc0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ddc1 je 0x52ddd7 */ if (ZF_) goto L_0052ddd7;
  /* 0052ddc3 cmp dword ptr [eax + 0x10], 1 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ddc7 je 0x52ddd7 */ if (ZF_) goto L_0052ddd7;
  /* 0052ddc9 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052ddce push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052ddd0 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0052ddd2 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ddd5u; SAVEALL; call_ind(c, t_); RETCHK(0x52ddd5u, 0x52ddd2u); LOADALL; }
  /* 0052ddd5 jmp 0x52dde4 */ goto L_0052dde4;
L_0052ddd7:;
  /* 0052ddd7 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052dddd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052dddf push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0052dde1 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52dde4u; SAVEALL; call_ind(c, t_); RETCHK(0x52dde4u, 0x52dde1u); LOADALL; }
L_0052dde4:;
  /* 0052dde4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052dde7 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0052dde9 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052ddef add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ddf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ddf3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052ddf5 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ddf8u; SAVEALL; call_ind(c, t_); RETCHK(0x52ddf8u, 0x52ddf5u); LOADALL; }
  /* 0052ddf8 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052ddfd push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0052ddff lea edx, [ebp - 0xfc] */ edx = (u32)((u32)(ebp + 0xffffff04u));
  /* 0052de05 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052de06 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0052de08 call dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52de0bu; SAVEALL; call_ind(c, t_); RETCHK(0x52de0bu, 0x52de08u); LOADALL; }
  /* 0052de0b add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052de0e:;
  /* 0052de0e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052de0f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052de11 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052de12 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0052de20(CPU *c) {
  NATIVE_HOOK(0x52de20u) REGS; LOADALL;
L_0052de20:;
  /* 0052de20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052de21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052de23 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052de26 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052de28 jne 0x52de43 */ if (!ZF_) goto L_0052de43;
  /* 0052de2a mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052de30 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0052de33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052de34 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0052de36 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52de39u; SAVEALL; call_ind(c, t_); RETCHK(0x52de39u, 0x52de36u); LOADALL; }
  /* 0052de39 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052de3c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052de3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052de40 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052de43:;
  /* 0052de43 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052de45 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052de46 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052de50(CPU *c) {
  NATIVE_HOOK(0x52de50u) REGS; LOADALL;
L_0052de50:;
  /* 0052de50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052de51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052de53 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052de56 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052de58 jne 0x52de7c */ if (!ZF_) goto L_0052de7c;
  /* 0052de5a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052de5d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052de5f jl 0x52de7c */ if (LT_) goto L_0052de7c;
  /* 0052de61 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052de64 jge 0x52de7c */ if (!LT_) goto L_0052de7c;
  /* 0052de66 mov eax, dword ptr [eax*4 + 0x640450] */ { const u32 m_ = (u32)(eax * 4u + 0x640450u); eax = (u32)(M32(m_)); }
  /* 0052de6d mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052de73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052de74 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0052de76 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52de79u; SAVEALL; call_ind(c, t_); RETCHK(0x52de79u, 0x52de76u); LOADALL; }
  /* 0052de79 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052de7c:;
  /* 0052de7c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052de7d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052de80(CPU *c) {
  NATIVE_HOOK(0x52de80u) REGS; LOADALL;
L_0052de80:;
  /* 0052de80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052de81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052de83 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052de86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052de88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052de89 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052de8b mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052de8e jne 0x52debd */ if (!ZF_) goto L_0052debd;
  /* 0052de90 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052de93 push 0x653344 */ { u32 v_ = 0x653344u; esp -= 4; M32(esp) = v_; }
  /* 0052de98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052de99 call 0x5fea9a */ esp -= 4; M32(esp) = 0x52de9eu; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x52de99u); RETCHK(0x52de9eu, 0x52de99u); LOADALL;
  /* 0052de9e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052dea1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052dea3 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052dea6 je 0x52df0e */ if (ZF_) goto L_0052df0e;
  /* 0052dea8 mov byte ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)(0x1u); }
  /* 0052deac mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
L_0052deb3:;
  /* 0052deb3 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052deb8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052deb9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052deba ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052debd:;
  /* 0052debd cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052dec0 jne 0x52deb3 */ if (!ZF_) goto L_0052deb3;
  /* 0052dec2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052dec5 push 0x653340 */ { u32 v_ = 0x653340u; esp -= 4; M32(esp) = v_; }
  /* 0052deca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052decb call 0x5fea9a */ esp -= 4; M32(esp) = 0x52ded0u; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x52decbu); RETCHK(0x52ded0u, 0x52decbu); LOADALL;
  /* 0052ded0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ded3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ded5 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052ded8 je 0x52df0e */ if (ZF_) goto L_0052df0e;
  /* 0052deda push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052dedc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052dede push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052dedf mov byte ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)(0x1u); }
  /* 0052dee3 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x52dee8u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x52dee3u); RETCHK(0x52dee8u, 0x52dee3u); LOADALL;
  /* 0052dee8 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052deeb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052deec call 0x5feaa6 */ esp -= 4; M32(esp) = 0x52def1u; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x52deecu); RETCHK(0x52def1u, 0x52deecu); LOADALL;
  /* 0052def1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052def3 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052def6 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052def9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052defb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052defc call 0x5feaa0 */ esp -= 4; M32(esp) = 0x52df01u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x52defcu); RETCHK(0x52df01u, 0x52defcu); LOADALL;
  /* 0052df01 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052df04 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052df09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052df0a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052df0b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052df0e:;
  /* 0052df0e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052df10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052df11 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052df12 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052df20(CPU *c) {
  NATIVE_HOOK(0x52df20u) REGS; LOADALL;
L_0052df20:;
  /* 0052df20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052df21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052df23 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052df26 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052df29 je 0x52df5d */ if (ZF_) goto L_0052df5d;
  /* 0052df2b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052df2c je 0x52df47 */ if (ZF_) goto L_0052df47;
  /* 0052df2e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052df2f jne 0x52df6f */ if (!ZF_) goto L_0052df6f;
  /* 0052df31 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052df34 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052df37 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052df39 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052df3a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052df3b call 0x5feaa0 */ esp -= 4; M32(esp) = 0x52df40u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x52df3bu); RETCHK(0x52df40u, 0x52df3bu); LOADALL;
  /* 0052df40 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052df43 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052df44 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052df47:;
  /* 0052df47 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052df4a mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052df4d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052df4f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052df50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052df51 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x52df56u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x52df51u); RETCHK(0x52df56u, 0x52df51u); LOADALL;
  /* 0052df56 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052df59 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052df5a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052df5d:;
  /* 0052df5d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052df60 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052df63 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052df65 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052df66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052df67 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x52df6cu; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x52df67u); RETCHK(0x52df6cu, 0x52df67u); LOADALL;
  /* 0052df6c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052df6f:;
  /* 0052df6f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052df70 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052df80(CPU *c) {
  NATIVE_HOOK(0x52df80u) REGS; LOADALL;
L_0052df80:;
  /* 0052df80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052df81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052df83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052df84 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052df86 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052df89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052df8b jne 0x52dfb1 */ if (!ZF_) goto L_0052dfb1;
  /* 0052df8d mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052df90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052df92 je 0x52dfb1 */ if (ZF_) goto L_0052dfb1;
  /* 0052df94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052df95 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0052df98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052df99 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052df9c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052df9e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052df9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052dfa0 call 0x5feadc */ esp -= 4; M32(esp) = 0x52dfa5u; SAVEALL; F_005feadc(c); ABI_CHECK(0x5feadcu, 0x52dfa0u); RETCHK(0x52dfa5u, 0x52dfa0u); LOADALL;
  /* 0052dfa5 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052dfa8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052dfab add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052dfad mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052dfb0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0052dfb1:;
  /* 0052dfb1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052dfb2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052dfb3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052dfc0(CPU *c) {
  NATIVE_HOOK(0x52dfc0u) REGS; LOADALL;
L_0052dfc0:;
  /* 0052dfc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052dfc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052dfc3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052dfc4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052dfc6 cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052dfca jne 0x52dfd3 */ if (!ZF_) goto L_0052dfd3;
  /* 0052dfcc mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052dfcf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052dfd1 jne 0x52dfda */ if (!ZF_) goto L_0052dfda;
L_0052dfd3:;
  /* 0052dfd3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052dfd5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052dfd6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052dfd7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052dfda:;
  /* 0052dfda mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052dfdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052dfde mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052dfe1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052dfe2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052dfe4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052dfe5 call 0x5feb54 */ esp -= 4; M32(esp) = 0x52dfeau; SAVEALL; F_005feb54(c); ABI_CHECK(0x5feb54u, 0x52dfe5u); RETCHK(0x52dfeau, 0x52dfe5u); LOADALL;
  /* 0052dfea mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052dfed add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052dff0 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052dff2 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052dff5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052dff6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052dff7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052e000(CPU *c) {
  NATIVE_HOOK(0x52e000u) REGS; LOADALL;
L_0052e000:;
  /* 0052e000 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052e003 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e004 call 0x5feafa */ esp -= 4; M32(esp) = 0x52e009u; SAVEALL; F_005feafa(c); ABI_CHECK(0x5feafau, 0x52e004u); RETCHK(0x52e009u, 0x52e004u); LOADALL;
  /* 0052e009 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0052e00a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e010(CPU *c) {
  NATIVE_HOOK(0x52e010u) REGS; LOADALL;
L_0052e010:;
  /* 0052e010 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052e013 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e020(CPU *c) {
  NATIVE_HOOK(0x52e020u) REGS; LOADALL;
L_0052e020:;
  /* 0052e020 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e023 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e026 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052e029 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052e02c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e02d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e02e call 0x5feae2 */ esp -= 4; M32(esp) = 0x52e033u; SAVEALL; F_005feae2(c); ABI_CHECK(0x5feae2u, 0x52e02eu); RETCHK(0x52e033u, 0x52e02eu); LOADALL;
  /* 0052e033 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0052e036 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e039 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e03b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e03c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e040(CPU *c) {
  NATIVE_HOOK(0x52e040u) REGS; LOADALL;
L_0052e040:;
  /* 0052e040 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e041 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052e043 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052e046 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e048 mov dword ptr [esi], 0x653118 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653118u); }
  /* 0052e04e je 0x52e059 */ if (ZF_) goto L_0052e059;
  /* 0052e050 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e051 call 0x5feafa */ esp -= 4; M32(esp) = 0x52e056u; SAVEALL; F_005feafa(c); ABI_CHECK(0x5feafau, 0x52e051u); RETCHK(0x52e056u, 0x52e051u); LOADALL;
  /* 0052e056 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052e059:;
  /* 0052e059 mov dword ptr [esi], 0x6530f8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6530f8u); }
  /* 0052e05f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e060 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e070(CPU *c) {
  NATIVE_HOOK(0x52e070u) REGS; LOADALL;
L_0052e070:;
  /* 0052e070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e073 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e074 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052e076 call 0x52e040 */ esp -= 4; M32(esp) = 0x52e07bu; SAVEALL; F_0052e040(c); ABI_CHECK(0x52e040u, 0x52e076u); RETCHK(0x52e07bu, 0x52e076u); LOADALL;
  /* 0052e07b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052e07f je 0x52e08a */ if (ZF_) goto L_0052e08a;
  /* 0052e081 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e082 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52e087u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52e082u); RETCHK(0x52e087u, 0x52e082u); LOADALL;
  /* 0052e087 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052e08a:;
  /* 0052e08a mov eax, esi */ { eax = (u32)(esi); }
  /* 0052e08c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e08d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e08e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052e0a0(CPU *c) {
  NATIVE_HOOK(0x52e0a0u) REGS; LOADALL;
L_0052e0a0:;
  /* 0052e0a0 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0052e0a2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x52e0a7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52e0a2u); RETCHK(0x52e0a7u, 0x52e0a2u); LOADALL;
  /* 0052e0a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e0aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e0ac je 0x52e0b5 */ if (ZF_) goto L_0052e0b5;
  /* 0052e0ae mov dword ptr [eax], 0x653118 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x653118u); }
  /* 0052e0b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052e0b5:;
  /* 0052e0b5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e0b7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e0c0(CPU *c) {
  NATIVE_HOOK(0x52e0c0u) REGS; LOADALL;
L_0052e0c0:;
  /* 0052e0c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e0c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e0c3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052e0c6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e0c8 je 0x52e0d0 */ if (ZF_) goto L_0052e0d0;
  /* 0052e0ca mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052e0cc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052e0ce call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e0d0u; SAVEALL; call_ind(c, t_); RETCHK(0x52e0d0u, 0x52e0ceu); LOADALL; }
L_0052e0d0:;
  /* 0052e0d0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052e0d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e0d6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052e0e0(CPU *c) {
  NATIVE_HOOK(0x52e0e0u) REGS; LOADALL;
L_0052e0e0:;
  /* 0052e0e0 mov cl, byte ptr [0x9b91e8] */ { const u32 m_ = (u32)(0x9b91e8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052e0e6 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052e0eb test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052e0ed jne 0x52e0ff */ if (!ZF_) goto L_0052e0ff;
  /* 0052e0ef or dword ptr [0x9b91e8], eax */ { const u32 m_ = (u32)(0x9b91e8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0052e0f5 mov dword ptr [0x9b91e4], 0x653138 */ { const u32 m_ = (u32)(0x9b91e4u); M32(m_) = (u32)(0x653138u); }
L_0052e0ff:;
  /* 0052e0ff mov eax, 0x9b91e4 */ { eax = (u32)(0x9b91e4u); }
  /* 0052e104 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e110(CPU *c) {
  NATIVE_HOOK(0x52e110u) REGS; LOADALL;
L_0052e110:;
  /* 0052e110 mov cl, byte ptr [0x9b91e0] */ { const u32 m_ = (u32)(0x9b91e0u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052e116 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052e11b test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052e11d jne 0x52e12f */ if (!ZF_) goto L_0052e12f;
  /* 0052e11f or dword ptr [0x9b91e0], eax */ { const u32 m_ = (u32)(0x9b91e0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0052e125 mov dword ptr [0x9b91dc], 0x65315c */ { const u32 m_ = (u32)(0x9b91dcu); M32(m_) = (u32)(0x65315cu); }
L_0052e12f:;
  /* 0052e12f mov eax, 0x9b91dc */ { eax = (u32)(0x9b91dcu); }
  /* 0052e134 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e140(CPU *c) {
  NATIVE_HOOK(0x52e140u) REGS; LOADALL;
L_0052e140:;
  /* 0052e140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e143 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052e146 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e147 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e149 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e14a call 0x5aca30 */ esp -= 4; M32(esp) = 0x52e14fu; SAVEALL; F_005aca30(c); ABI_CHECK(0x5aca30u, 0x52e14au); RETCHK(0x52e14fu, 0x52e14au); LOADALL;
  /* 0052e14f mov esi, eax */ { esi = (u32)(eax); }
  /* 0052e151 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e154 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e156 je 0x52e17e */ if (ZF_) goto L_0052e17e;
  /* 0052e158 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0052e15a call 0x5fe934 */ esp -= 4; M32(esp) = 0x52e15fu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52e15au); RETCHK(0x52e15fu, 0x52e15au); LOADALL;
  /* 0052e15f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e162 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e164 je 0x52e174 */ if (ZF_) goto L_0052e174;
  /* 0052e166 mov dword ptr [eax], 0x653150 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x653150u); }
  /* 0052e16c mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 0052e16f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e170 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e171 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052e174:;
  /* 0052e174 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e176 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 0052e179 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e17a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e17b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052e17e:;
  /* 0052e17e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e180 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e181 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e182 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052e190(CPU *c) {
  NATIVE_HOOK(0x52e190u) REGS; LOADALL;
L_0052e190:;
  /* 0052e190 mov eax, 0x68a598 */ { eax = (u32)(0x68a598u); }
  /* 0052e195 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e1a0(CPU *c) {
  NATIVE_HOOK(0x52e1a0u) REGS; LOADALL;
L_0052e1a0:;
  /* 0052e1a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e1a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e1a3 sub esp, 0xdc */ { u32 a_ = esp, b_ = 0xdcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e1a9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052e1ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e1af mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052e1b1 push 0x653340 */ { u32 v_ = 0x653340u; esp -= 4; M32(esp) = v_; }
  /* 0052e1b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e1b7 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052e1ba call 0x5fea9a */ esp -= 4; M32(esp) = 0x52e1bfu; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x52e1bau); RETCHK(0x52e1bfu, 0x52e1bau); LOADALL;
  /* 0052e1bf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e1c2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e1c4 mov dword ptr [ebp - 0x90], eax */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(eax); }
  /* 0052e1ca push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e1cc jne 0x52e1ee */ if (!ZF_) goto L_0052e1ee;
  /* 0052e1ce push 0x653320 */ { u32 v_ = 0x653320u; esp -= 4; M32(esp) = v_; }
  /* 0052e1d3 push 0x653308 */ { u32 v_ = 0x653308u; esp -= 4; M32(esp) = v_; }
  /* 0052e1d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e1d9 call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e1dfu; SAVEALL; call_ind(c, t_); RETCHK(0x52e1dfu, 0x52e1d9u); LOADALL; }
L_0052e1df:;
  /* 0052e1df xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e1e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e1e2 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052e1e5 call 0x61af31 */ esp -= 4; M32(esp) = 0x52e1eau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52e1e5u); RETCHK(0x52e1eau, 0x52e1e5u); LOADALL;
  /* 0052e1ea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e1ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e1ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052e1ee:;
  /* 0052e1ee lea eax, [ebp - 0x8c] */ eax = (u32)((u32)(ebp + 0xffffff74u));
  /* 0052e1f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e1f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e1f6 call dword ptr [0x62e0d8] */ { const u32 m_ = (u32)(0x62e0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e1fcu; SAVEALL; call_ind(c, t_); RETCHK(0x52e1fcu, 0x52e1f6u); LOADALL; }
  /* 0052e1fc mov esi, eax */ { esi = (u32)(eax); }
  /* 0052e1fe cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052e201 je 0x52e1df */ if (ZF_) goto L_0052e1df;
  /* 0052e203 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052e204 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e205 lea ecx, [ebp - 0xdc] */ ecx = (u32)((u32)(ebp + 0xffffff24u));
  /* 0052e20b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e20c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e20d call dword ptr [0x62e138] */ { const u32 m_ = (u32)(0x62e138u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e213u; SAVEALL; call_ind(c, t_); RETCHK(0x52e213u, 0x52e20du); LOADALL; }
  /* 0052e213 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e214 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052e216 call dword ptr [0x62e1c0] */ { const u32 m_ = (u32)(0x62e1c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e21cu; SAVEALL; call_ind(c, t_); RETCHK(0x52e21cu, 0x52e216u); LOADALL; }
  /* 0052e21c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052e21d call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52e222u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52e21du); RETCHK(0x52e222u, 0x52e21du); LOADALL;
  /* 0052e222 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052e224 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052e225 mov dword ptr [ebp - 0x9c], edi */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(edi); }
  /* 0052e22b call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52e230u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52e22bu); RETCHK(0x52e230u, 0x52e22bu); LOADALL;
  /* 0052e230 push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 0052e232 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052e234 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e236 lea edx, [ebp - 0xd8] */ edx = (u32)((u32)(ebp + 0xffffff28u));
  /* 0052e23c push 0x653300 */ { u32 v_ = 0x653300u; esp -= 4; M32(esp) = v_; }
  /* 0052e241 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e242 mov dword ptr [ebp - 0x98], esi */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(esi); }
  /* 0052e248 mov dword ptr [ebp - 0xb8], eax */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(eax); }
  /* 0052e24e mov dword ptr [ebp - 0xb4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(eax); }
  /* 0052e254 mov dword ptr [ebp - 0xb0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(eax); }
  /* 0052e25a mov dword ptr [ebp - 0xd8], eax */ { const u32 m_ = (u32)(ebp + 0xffffff28u); M32(m_) = (u32)(eax); }
  /* 0052e260 mov dword ptr [ebp - 0xd4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff2cu); M32(m_) = (u32)(eax); }
  /* 0052e266 call 0x5ff1d0 */ esp -= 4; M32(esp) = 0x52e26bu; SAVEALL; F_005ff1d0(c); ABI_CHECK(0x5ff1d0u, 0x52e266u); RETCHK(0x52e26bu, 0x52e266u); LOADALL;
  /* 0052e26b add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e26e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e270 je 0x52e2b2 */ if (ZF_) goto L_0052e2b2;
  /* 0052e272 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e274 push 0x653320 */ { u32 v_ = 0x653320u; esp -= 4; M32(esp) = v_; }
  /* 0052e279 push 0x6532dc */ { u32 v_ = 0x6532dcu; esp -= 4; M32(esp) = v_; }
  /* 0052e27e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e280 call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e286u; SAVEALL; call_ind(c, t_); RETCHK(0x52e286u, 0x52e280u); LOADALL; }
  /* 0052e286 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e287 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e28cu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e287u); RETCHK(0x52e28cu, 0x52e287u); LOADALL;
  /* 0052e28c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e28d call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e292u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e28du); RETCHK(0x52e292u, 0x52e28du); LOADALL;
  /* 0052e292 mov eax, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); eax = (u32)(M32(m_)); }
  /* 0052e298 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e299 call 0x5feafa */ esp -= 4; M32(esp) = 0x52e29eu; SAVEALL; F_005feafa(c); ABI_CHECK(0x5feafau, 0x52e299u); RETCHK(0x52e29eu, 0x52e299u); LOADALL;
  /* 0052e29e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e2a1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052e2a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052e2a3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e2a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e2a6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052e2a9 call 0x61af31 */ esp -= 4; M32(esp) = 0x52e2aeu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52e2a9u); RETCHK(0x52e2aeu, 0x52e2a9u); LOADALL;
  /* 0052e2ae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e2b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e2b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052e2b2:;
  /* 0052e2b2 mov ecx, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); ecx = (u32)(M32(m_)); }
  /* 0052e2b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e2b9 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0052e2bb lea edx, [ebp - 0xa0] */ edx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0052e2c1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052e2c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e2c4 mov dword ptr [ebp - 0xcc], esi */ { const u32 m_ = (u32)(ebp + 0xffffff34u); M32(m_) = (u32)(esi); }
  /* 0052e2ca mov dword ptr [ebp - 0xc8], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff38u); M32(m_) = (u32)(ebx); }
  /* 0052e2d0 call 0x5feb54 */ esp -= 4; M32(esp) = 0x52e2d5u; SAVEALL; F_005feb54(c); ABI_CHECK(0x5feb54u, 0x52e2d0u); RETCHK(0x52e2d5u, 0x52e2d0u); LOADALL;
  /* 0052e2d5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052e2d8 mov ecx, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); ecx = (u32)(M32(m_)); }
  /* 0052e2de add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e2e1 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052e2e3 jb 0x52e43b */ if (CF_) goto L_0052e43b;
  /* 0052e2e9 mov dword ptr [ebp - 0x94], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(0x0u); }
L_0052e2f3:;
  /* 0052e2f3 mov eax, dword ptr [ebp - 0xd4] */ { const u32 m_ = (u32)(ebp + 0xffffff2cu); eax = (u32)(M32(m_)); }
  /* 0052e2f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e2fb jne 0x52e31c */ if (!ZF_) goto L_0052e31c;
  /* 0052e2fd mov ecx, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); ecx = (u32)(M32(m_)); }
  /* 0052e303 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e304 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052e305 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052e307 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e308 mov dword ptr [ebp - 0xd8], edi */ { const u32 m_ = (u32)(ebp + 0xffffff28u); M32(m_) = (u32)(edi); }
  /* 0052e30e call 0x5feb54 */ esp -= 4; M32(esp) = 0x52e313u; SAVEALL; F_005feb54(c); ABI_CHECK(0x5feb54u, 0x52e30eu); RETCHK(0x52e313u, 0x52e30eu); LOADALL;
  /* 0052e313 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e316 mov dword ptr [ebp - 0xd4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff2cu); M32(m_) = (u32)(eax); }
L_0052e31c:;
  /* 0052e31c lea edx, [ebp - 0xd8] */ edx = (u32)((u32)(ebp + 0xffffff28u));
  /* 0052e322 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e324 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e325 call 0x5ff1f0 */ esp -= 4; M32(esp) = 0x52e32au; SAVEALL; F_005ff1f0(c); ABI_CHECK(0x5ff1f0u, 0x52e325u); RETCHK(0x52e32au, 0x52e325u); LOADALL;
  /* 0052e32a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e32d cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052e330 je 0x52e3c9 */ if (ZF_) goto L_0052e3c9;
  /* 0052e336 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e338 jne 0x52e389 */ if (!ZF_) goto L_0052e389;
  /* 0052e33a mov eax, dword ptr [ebp - 0xc8] */ { const u32 m_ = (u32)(ebp + 0xffffff38u); eax = (u32)(M32(m_)); }
  /* 0052e340 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e342 jne 0x52e2f3 */ if (!ZF_) goto L_0052e2f3;
  /* 0052e344 mov edx, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); edx = (u32)(M32(m_)); }
  /* 0052e34a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052e34d lea edi, [edx + eax] */ edi = (u32)((u32)(edx + eax));
  /* 0052e350 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052e352 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052e354 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052e357 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052e359 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052e35b and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052e35e rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052e360 mov ecx, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); ecx = (u32)(M32(m_)); }
  /* 0052e366 mov edi, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edi = (u32)(M32(m_)); }
  /* 0052e36c mov eax, edx */ { eax = (u32)(edx); }
  /* 0052e36e add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052e370 mov dword ptr [ebp - 0x94], eax */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(eax); }
  /* 0052e376 mov dword ptr [ebp - 0xcc], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff34u); M32(m_) = (u32)(ecx); }
  /* 0052e37c mov dword ptr [ebp - 0xc8], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff38u); M32(m_) = (u32)(ebx); }
  /* 0052e382 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052e384 jmp 0x52e2f3 */ goto L_0052e2f3;
L_0052e389:;
  /* 0052e389 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e38b push 0x653320 */ { u32 v_ = 0x653320u; esp -= 4; M32(esp) = v_; }
  /* 0052e390 push 0x6532bc */ { u32 v_ = 0x6532bcu; esp -= 4; M32(esp) = v_; }
  /* 0052e395 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e397 call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e39du; SAVEALL; call_ind(c, t_); RETCHK(0x52e39du, 0x52e397u); LOADALL; }
  /* 0052e39d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e39e call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e3a3u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e39eu); RETCHK(0x52e3a3u, 0x52e39eu); LOADALL;
  /* 0052e3a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e3a4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e3a9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e3a4u); RETCHK(0x52e3a9u, 0x52e3a4u); LOADALL;
  /* 0052e3a9 mov edx, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); edx = (u32)(M32(m_)); }
  /* 0052e3af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e3b0 call 0x5feafa */ esp -= 4; M32(esp) = 0x52e3b5u; SAVEALL; F_005feafa(c); ABI_CHECK(0x5feafau, 0x52e3b0u); RETCHK(0x52e3b5u, 0x52e3b0u); LOADALL;
  /* 0052e3b5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e3b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052e3b9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052e3ba xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e3bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e3bd mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052e3c0 call 0x61af31 */ esp -= 4; M32(esp) = 0x52e3c5u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52e3c0u); RETCHK(0x52e3c5u, 0x52e3c0u); LOADALL;
  /* 0052e3c5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e3c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e3c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052e3c9:;
  /* 0052e3c9 sub ebx, dword ptr [ebp - 0xc8] */ { const u32 m_ = (u32)(ebp + 0xffffff38u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052e3cf je 0x52e3f9 */ if (ZF_) goto L_0052e3f9;
  /* 0052e3d1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052e3d4 mov edx, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); edx = (u32)(M32(m_)); }
  /* 0052e3da mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052e3dc lea edi, [edx + eax] */ edi = (u32)((u32)(edx + eax));
  /* 0052e3df mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052e3e1 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052e3e4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052e3e6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052e3e8 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052e3eb rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052e3ed mov edi, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edi = (u32)(M32(m_)); }
  /* 0052e3f3 mov esi, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); esi = (u32)(M32(m_)); }
L_0052e3f9:;
  /* 0052e3f9 lea ecx, [ebp - 0xd8] */ ecx = (u32)((u32)(ebp + 0xffffff28u));
  /* 0052e3ff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e400 call 0x5ff080 */ esp -= 4; M32(esp) = 0x52e405u; SAVEALL; F_005ff080(c); ABI_CHECK(0x5ff080u, 0x52e400u); RETCHK(0x52e405u, 0x52e400u); LOADALL;
  /* 0052e405 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e408 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e40a je 0x52e44c */ if (ZF_) goto L_0052e44c;
  /* 0052e40c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e40e push 0x653320 */ { u32 v_ = 0x653320u; esp -= 4; M32(esp) = v_; }
  /* 0052e413 push 0x653298 */ { u32 v_ = 0x653298u; esp -= 4; M32(esp) = v_; }
  /* 0052e418 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e41a call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e420u; SAVEALL; call_ind(c, t_); RETCHK(0x52e420u, 0x52e41au); LOADALL; }
  /* 0052e420 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e421 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e426u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e421u); RETCHK(0x52e426u, 0x52e421u); LOADALL;
  /* 0052e426 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e427 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e42cu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e427u); RETCHK(0x52e42cu, 0x52e427u); LOADALL;
  /* 0052e42c mov edx, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); edx = (u32)(M32(m_)); }
  /* 0052e432 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e433 call 0x5feafa */ esp -= 4; M32(esp) = 0x52e438u; SAVEALL; F_005feafa(c); ABI_CHECK(0x5feafau, 0x52e433u); RETCHK(0x52e438u, 0x52e433u); LOADALL;
  /* 0052e438 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052e43b:;
  /* 0052e43b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052e43c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052e43d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e43f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e440 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052e443 call 0x61af31 */ esp -= 4; M32(esp) = 0x52e448u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52e443u); RETCHK(0x52e448u, 0x52e443u); LOADALL;
  /* 0052e448 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e44a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e44b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052e44c:;
  /* 0052e44c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e44d call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e452u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e44du); RETCHK(0x52e452u, 0x52e44du); LOADALL;
  /* 0052e452 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e453 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e458u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e453u); RETCHK(0x52e458u, 0x52e453u); LOADALL;
  /* 0052e458 mov eax, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); eax = (u32)(M32(m_)); }
  /* 0052e45e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e45f call 0x5feafa */ esp -= 4; M32(esp) = 0x52e464u; SAVEALL; F_005feafa(c); ABI_CHECK(0x5feafau, 0x52e45fu); RETCHK(0x52e464u, 0x52e45fu); LOADALL;
  /* 0052e464 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052e467 mov eax, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); eax = (u32)(M32(m_)); }
  /* 0052e46d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e470 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052e471 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052e472 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e473 call 0x61af31 */ esp -= 4; M32(esp) = 0x52e478u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52e473u); RETCHK(0x52e478u, 0x52e473u); LOADALL;
  /* 0052e478 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e47a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e47b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e480(CPU *c) {
  NATIVE_HOOK(0x52e480u) REGS; LOADALL;
L_0052e480:;
  /* 0052e480 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e481 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e483 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e486 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052e488 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e489 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e48cu; SAVEALL; call_ind(c, t_); RETCHK(0x52e48cu, 0x52e489u); LOADALL; }
  /* 0052e48c mov edi, eax */ { edi = (u32)(eax); }
  /* 0052e48e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e48f mov eax, 0x653290 */ { eax = (u32)(0x653290u); }
  /* 0052e494 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52e499u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52e494u); RETCHK(0x52e499u, 0x52e494u); LOADALL;
  /* 0052e499 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052e49c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e49d push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052e4a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e4a3 call 0x5feaac */ esp -= 4; M32(esp) = 0x52e4a8u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52e4a3u); RETCHK(0x52e4a8u, 0x52e4a3u); LOADALL;
  /* 0052e4a8 mov dx, word ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e4ac add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e4af push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e4b0 mov eax, 0x65328c */ { eax = (u32)(0x65328cu); }
  /* 0052e4b5 mov word ptr [esi], dx */ { const u32 m_ = (u32)(esi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0052e4b8 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52e4bdu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52e4b8u); RETCHK(0x52e4bdu, 0x52e4b8u); LOADALL;
  /* 0052e4bd lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0052e4c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e4c1 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052e4c4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e4c5 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0052e4c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e4c9 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052e4cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e4cd push 0x651d24 */ { u32 v_ = 0x651d24u; esp -= 4; M32(esp) = v_; }
  /* 0052e4d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e4d3 call 0x5feaac */ esp -= 4; M32(esp) = 0x52e4d8u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52e4d3u); RETCHK(0x52e4d8u, 0x52e4d3u); LOADALL;
  /* 0052e4d8 mov ax, word ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e4dc mov cx, word ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e4e0 mov dx, word ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e4e4 mov word ptr [esi + 4], ax */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0052e4e8 mov ax, word ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e4ec add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e4ef mov word ptr [esi + 0xa], ax */ { const u32 m_ = (u32)(esi + 0xau); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0052e4f3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e4f4 mov eax, 0x653284 */ { eax = (u32)(0x653284u); }
  /* 0052e4f9 mov word ptr [esi + 6], cx */ { const u32 m_ = (u32)(esi + 0x6u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0052e4fd mov word ptr [esi + 8], dx */ { const u32 m_ = (u32)(esi + 0x8u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0052e501 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52e506u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52e501u); RETCHK(0x52e506u, 0x52e501u); LOADALL;
  /* 0052e506 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052e509 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e50a push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052e50f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e510 call 0x5feaac */ esp -= 4; M32(esp) = 0x52e515u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52e510u); RETCHK(0x52e515u, 0x52e510u); LOADALL;
  /* 0052e515 mov dx, word ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e519 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e51c mov word ptr [esi + 2], dx */ { const u32 m_ = (u32)(esi + 0x2u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0052e520 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052e521 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e523 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e524 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e530(CPU *c) {
  NATIVE_HOOK(0x52e530u) REGS; LOADALL;
L_0052e530:;
  /* 0052e530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e533 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e536 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e537 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e538 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052e53a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052e53c lea ecx, [esi + 0x40] */ ecx = (u32)((u32)(esi + 0x40u));
  /* 0052e53f lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0052e542 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0052e545 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 0052e548 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0052e54b mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 0052e54e mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 0052e551 call 0x5300b0 */ esp -= 4; M32(esp) = 0x52e556u; SAVEALL; F_005300b0(c); ABI_CHECK(0x5300b0u, 0x52e551u); RETCHK(0x52e556u, 0x52e551u); LOADALL;
  /* 0052e556 lea ecx, [esi + 0x50] */ ecx = (u32)((u32)(esi + 0x50u));
  /* 0052e559 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0052e55c lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0052e55f mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 0052e562 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0052e565 mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 0052e568 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 0052e56b call 0x5300b0 */ esp -= 4; M32(esp) = 0x52e570u; SAVEALL; F_005300b0(c); ABI_CHECK(0x5300b0u, 0x52e56bu); RETCHK(0x52e570u, 0x52e56bu); LOADALL;
  /* 0052e570 mov word ptr [ebp - 4], di */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0052e574 mov word ptr [ebp - 2], di */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0052e578 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052e57b mov dword ptr [esi + 0x68], edi */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(edi); }
  /* 0052e57e mov dword ptr [esi + 0x64], edi */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(edi); }
  /* 0052e581 mov dword ptr [esi + 0x60], eax */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(eax); }
  /* 0052e584 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052e585 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052e587 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e588 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e58a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e58b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e590(CPU *c) {
  NATIVE_HOOK(0x52e590u) REGS; LOADALL;
L_0052e590:;
  /* 0052e590 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e591 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052e593 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 0052e596 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e598 je 0x52e5b1 */ if (ZF_) goto L_0052e5b1;
  /* 0052e59a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e59b call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52e5a0u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52e59bu); RETCHK(0x52e5a0u, 0x52e59bu); LOADALL;
  /* 0052e5a0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e5a3 mov dword ptr [esi + 0x64], 0 */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(0x0u); }
  /* 0052e5aa mov dword ptr [esi + 0x68], 0 */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(0x0u); }
L_0052e5b1:;
  /* 0052e5b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e5b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052e5c0(CPU *c) {
  NATIVE_HOOK(0x52e5c0u) REGS; LOADALL;
L_0052e5c0:;
  /* 0052e5c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e5c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e5c3 sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e5c6 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 0052e5c9 mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0052e5cc mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0052e5cf mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052e5d1 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 0052e5d4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052e5d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e5d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e5d9 lea edi, [eax + edx*4] */ edi = (u32)((u32)(eax + edx * 4u));
  /* 0052e5dc mov ax, word ptr [edi + 0xa] */ { const u32 m_ = (u32)(edi + 0xau); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e5e0 sub ax, word ptr [edi + 6] */ { const u32 m_ = (u32)(edi + 0x6u); u32 a_ = (eax & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 0052e5e4 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0052e5e7 mov cx, word ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e5eb sub cx, word ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = (ecx & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); ecx = (ecx & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 0052e5ef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e5f1 movzx edx, cx */ { edx = (u32)((ecx & 0xffffu)); }
  /* 0052e5f4 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0052e5f6 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052e5f9 movzx ecx, ax */ { ecx = (u32)((eax & 0xffffu)); }
  /* 0052e5fc fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052e5ff neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0052e601 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052e604 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052e60a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e60b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0052e60e mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0052e615 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052e618 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0052e61b fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052e61e mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0052e625 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 0052e62c mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 0052e633 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052e639 mov dword ptr [ebp - 0x38], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052e640 mov dword ptr [ebp - 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052e647 mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 0052e64e fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052e651 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e652 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 0052e659 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0052e660 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 0052e667 call 0x52d460 */ esp -= 4; M32(esp) = 0x52e66cu; SAVEALL; F_0052d460(c); ABI_CHECK(0x52d460u, 0x52e667u); RETCHK(0x52e66cu, 0x52e667u); LOADALL;
  /* 0052e66c lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0052e66f lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052e672 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0052e675 call 0x52d690 */ esp -= 4; M32(esp) = 0x52e67au; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52e675u); RETCHK(0x52e67au, 0x52e675u); LOADALL;
  /* 0052e67a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052e67c mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052e67f mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0052e682 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052e685 mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 0052e688 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052e68b mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052e68e mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052e691 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0052e694 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052e697 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 0052e69a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e69c mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052e69f mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052e6a2 je 0x52e70d */ if (ZF_) goto L_0052e70d;
  /* 0052e6a4 mov eax, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); eax = (u32)(M32(m_)); }
  /* 0052e6a7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e6a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e6aa lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0052e6ad mov dword ptr [ebp - 0x38], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052e6b4 mov dword ptr [ebp - 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052e6bb mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 0052e6c2 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 0052e6c9 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0052e6d0 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 0052e6d7 call 0x52d590 */ esp -= 4; M32(esp) = 0x52e6dcu; SAVEALL; F_0052d590(c); ABI_CHECK(0x52d590u, 0x52e6d7u); RETCHK(0x52e6dcu, 0x52e6d7u); LOADALL;
  /* 0052e6dc lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0052e6df lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052e6e2 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0052e6e5 call 0x52d690 */ esp -= 4; M32(esp) = 0x52e6eau; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52e6e5u); RETCHK(0x52e6eau, 0x52e6e5u); LOADALL;
  /* 0052e6ea mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052e6ec mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052e6ef mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0052e6f2 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052e6f5 mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 0052e6f8 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052e6fb mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052e6fe mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052e701 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0052e704 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052e707 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052e70a mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
L_0052e70d:;
  /* 0052e70d mov ax, word ptr [edi + 0xa] */ { const u32 m_ = (u32)(edi + 0xau); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e711 sub ax, word ptr [edi + 6] */ { const u32 m_ = (u32)(edi + 0x6u); u32 a_ = (eax & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 0052e715 mov dx, word ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052e719 sub dx, word ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = (edx & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 0052e71d movzx ecx, ax */ { ecx = (u32)((eax & 0xffffu)); }
  /* 0052e720 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052e723 movzx eax, dx */ { eax = (u32)((edx & 0xffffu)); }
  /* 0052e726 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052e729 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e72b sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e72e fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052e734 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052e737 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0052e73a mov dword ptr [ebp - 0x38], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052e741 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052e745 mov dword ptr [ebp - 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052e74c fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052e74f mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 0052e756 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 0052e75d fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052e763 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0052e76a mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 0052e771 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052e774 call 0x52d460 */ esp -= 4; M32(esp) = 0x52e779u; SAVEALL; F_0052d460(c); ABI_CHECK(0x52d460u, 0x52e774u); RETCHK(0x52e779u, 0x52e774u); LOADALL;
  /* 0052e779 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0052e77c lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052e77f lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0052e782 call 0x52d690 */ esp -= 4; M32(esp) = 0x52e787u; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52e782u); RETCHK(0x52e787u, 0x52e782u); LOADALL;
  /* 0052e787 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052e789 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052e78c mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0052e78f mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052e792 mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 0052e795 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052e798 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052e79b mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052e79e mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0052e7a1 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052e7a4 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052e7a7 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052e7aa mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052e7ad push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e7af mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052e7b2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052e7b3 mov edx, eax */ { edx = (u32)(eax); }
  /* 0052e7b5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e7b6 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0052e7b9 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0052e7bc mov dword ptr [ebp - 0x38], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052e7c3 mov dword ptr [ebp - 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052e7ca mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 0052e7d1 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 0052e7d8 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0052e7df mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 0052e7e6 call 0x52d460 */ esp -= 4; M32(esp) = 0x52e7ebu; SAVEALL; F_0052d460(c); ABI_CHECK(0x52d460u, 0x52e7e6u); RETCHK(0x52e7ebu, 0x52e7e6u); LOADALL;
  /* 0052e7eb lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0052e7ee lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052e7f1 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0052e7f4 call 0x52d690 */ esp -= 4; M32(esp) = 0x52e7f9u; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52e7f4u); RETCHK(0x52e7f9u, 0x52e7f4u); LOADALL;
  /* 0052e7f9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052e7fb mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052e7fe mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0052e801 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052e804 mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 0052e807 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052e80a mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052e80d mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052e810 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0052e813 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052e816 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052e819 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052e81c mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052e81f lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0052e822 mov esi, 0x68a59c */ { esi = (u32)(0x68a59cu); }
  /* 0052e827 call 0x52d7a0 */ esp -= 4; M32(esp) = 0x52e82cu; SAVEALL; F_0052d7a0(c); ABI_CHECK(0x52d7a0u, 0x52e827u); RETCHK(0x52e82cu, 0x52e827u); LOADALL;
  /* 0052e82c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052e82d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052e82e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052e830 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052e831 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052e840(CPU *c) {
  NATIVE_HOOK(0x52e840u) REGS; LOADALL;
L_0052e840:;
  /* 0052e840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052e841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052e843 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052e846 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052e849 mov edx, dword ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); edx = (u32)(M32(m_)); }
  /* 0052e84c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e84e cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052e850 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0052e853 jbe 0x52ea3f */ if ((CF_|ZF_)) goto L_0052ea3f;
  /* 0052e859 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052e85c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052e85d add edx, 0x14 */ { u32 a_ = edx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052e860 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052e861 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052e864 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052e867 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052e868 jmp 0x52e870 */ goto L_0052e870;
L_0052e870:;
  /* 0052e870 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052e873 mov ebx, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); ebx = (u32)(M32(m_)); }
  /* 0052e876 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0052e879 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052e87c mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052e87f mov ecx, dword ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ecx = (u32)(M32(m_)); }
  /* 0052e882 add ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052e884 lea edx, [ecx + ecx*2] */ edx = (u32)((u32)(ecx + ecx * 2u));
  /* 0052e887 lea ecx, [eax + edx*4] */ ecx = (u32)((u32)(eax + edx * 4u));
  /* 0052e88a mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052e88d mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0052e890 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052e891 lea esi, [ebx + 0xc] */ esi = (u32)((u32)(ebx + 0xcu));
  /* 0052e894 mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 0052e899 lea edi, [ebp - 0x40] */ edi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0052e89c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e89d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052e89f call 0x52e5c0 */ esp -= 4; M32(esp) = 0x52e8a4u; SAVEALL; F_0052e5c0(c); ABI_CHECK(0x52e5c0u, 0x52e89fu); RETCHK(0x52e8a4u, 0x52e89fu); LOADALL;
  /* 0052e8a4 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 0052e8a7 movzx eax, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M16(m_)); }
  /* 0052e8ab mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0052e8ae movzx ecx, word ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); ecx = (u32)(M16(m_)); }
  /* 0052e8b2 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052e8b5 movzx edx, word ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M16(m_)); }
  /* 0052e8b9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052e8bb mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0052e8be movzx eax, word ptr [esi + 0xa] */ { const u32 m_ = (u32)(esi + 0xau); eax = (u32)(M16(m_)); }
  /* 0052e8c2 mov dword ptr [0x9b93a8], ecx */ { const u32 m_ = (u32)(0x9b93a8u); M32(m_) = (u32)(ecx); }
  /* 0052e8c8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052e8cb mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0052e8ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e8d0 mov dword ptr [0x9b93ac], ecx */ { const u32 m_ = (u32)(0x9b93acu); M32(m_) = (u32)(ecx); }
  /* 0052e8d6 mov dword ptr [0x9b93b0], ecx */ { const u32 m_ = (u32)(0x9b93b0u); M32(m_) = (u32)(ecx); }
  /* 0052e8dc mov dword ptr [0x9b93b4], ecx */ { const u32 m_ = (u32)(0x9b93b4u); M32(m_) = (u32)(ecx); }
  /* 0052e8e2 mov dword ptr [0x9b93a8], 0x10 */ { const u32 m_ = (u32)(0x9b93a8u); M32(m_) = (u32)(0x10u); }
  /* 0052e8ec je 0x52e8f8 */ if (ZF_) goto L_0052e8f8;
  /* 0052e8ee mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052e8f0 or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052e8f3 mov dword ptr [0x9b93ac], eax */ { const u32 m_ = (u32)(0x9b93acu); M32(m_) = (u32)(eax); }
L_0052e8f8:;
  /* 0052e8f8 mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0052e8fb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e8fd je 0x52e906 */ if (ZF_) goto L_0052e906;
  /* 0052e8ff or dword ptr [0x9b93ac], 4 */ { const u32 m_ = (u32)(0x9b93acu); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_0052e906:;
  /* 0052e906 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0052e909 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052e90b je 0x52e947 */ if (ZF_) goto L_0052e947;
  /* 0052e90d mov edx, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); edx = (u32)(M32(m_)); }
  /* 0052e910 mov ebx, dword ptr [0x9b93ac] */ { const u32 m_ = (u32)(0x9b93acu); ebx = (u32)(M32(m_)); }
  /* 0052e916 mov dword ptr [0x9b93b4], edx */ { const u32 m_ = (u32)(0x9b93b4u); M32(m_) = (u32)(edx); }
  /* 0052e91c mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0052e91f or ebx, 0x100 */ { u32 a_ = ebx, b_ = 0x100u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052e925 mov dword ptr [0x9b93ac], ebx */ { const u32 m_ = (u32)(0x9b93acu); M32(m_) = (u32)(ebx); }
  /* 0052e92b mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0052e92e mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0052e930 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052e932 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e933 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e935 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e938u; SAVEALL; call_ind(c, t_); RETCHK(0x52e938u, 0x52e935u); LOADALL; }
  /* 0052e938 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0052e93b mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0052e93d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052e93f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052e940 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052e942 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e945u; SAVEALL; call_ind(c, t_); RETCHK(0x52e945u, 0x52e942u); LOADALL; }
  /* 0052e945 jmp 0x52e962 */ goto L_0052e962;
L_0052e947:;
  /* 0052e947 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0052e94a mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0052e94c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052e94e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0052e950 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052e952 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e955u; SAVEALL; call_ind(c, t_); RETCHK(0x52e955u, 0x52e952u); LOADALL; }
  /* 0052e955 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0052e957 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0052e959 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0052e95b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052e95d call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52e960u; SAVEALL; call_ind(c, t_); RETCHK(0x52e960u, 0x52e95du); LOADALL; }
  /* 0052e960 mov ebx, edi */ { ebx = (u32)(edi); }
L_0052e962:;
  /* 0052e962 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 0052e965 movzx eax, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M8(m_)); }
  /* 0052e968 movzx ecx, byte ptr [0x9b93b4] */ { const u32 m_ = (u32)(0x9b93b4u); ecx = (u32)(M8(m_)); }
  /* 0052e96f mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0052e972 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0052e975 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0052e978 fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052e97e fimul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 0052e981 call 0x61b154 */ esp -= 4; M32(esp) = 0x52e986u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52e981u); RETCHK(0x52e986u, 0x52e981u); LOADALL;
  /* 0052e986 mov byte ptr [0x9b93b4], al */ { const u32 m_ = (u32)(0x9b93b4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052e98b movzx edx, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); edx = (u32)(M8(m_)); }
  /* 0052e98f movzx eax, byte ptr [0x9b93b5] */ { const u32 m_ = (u32)(0x9b93b5u); eax = (u32)(M8(m_)); }
  /* 0052e996 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052e999 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0052e99c mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0052e99f fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052e9a5 fimul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 0052e9a8 call 0x61b154 */ esp -= 4; M32(esp) = 0x52e9adu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52e9a8u); RETCHK(0x52e9adu, 0x52e9a8u); LOADALL;
  /* 0052e9ad movzx edx, byte ptr [0x9b93b6] */ { const u32 m_ = (u32)(0x9b93b6u); edx = (u32)(M8(m_)); }
  /* 0052e9b4 mov byte ptr [0x9b93b5], al */ { const u32 m_ = (u32)(0x9b93b5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052e9b9 movzx ecx, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (u32)(M8(m_)); }
  /* 0052e9bd mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0052e9c0 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0052e9c3 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052e9c6 fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052e9cc fimul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 0052e9cf call 0x61b154 */ esp -= 4; M32(esp) = 0x52e9d4u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52e9cfu); RETCHK(0x52e9d4u, 0x52e9cfu); LOADALL;
  /* 0052e9d4 movzx ecx, byte ptr [0x9b93b7] */ { const u32 m_ = (u32)(0x9b93b7u); ecx = (u32)(M8(m_)); }
  /* 0052e9db mov byte ptr [0x9b93b6], al */ { const u32 m_ = (u32)(0x9b93b6u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052e9e0 movzx eax, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); eax = (u32)(M8(m_)); }
  /* 0052e9e4 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0052e9e7 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0052e9ea mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0052e9ed fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052e9f3 fimul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 0052e9f6 call 0x61b154 */ esp -= 4; M32(esp) = 0x52e9fbu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52e9f6u); RETCHK(0x52e9fbu, 0x52e9f6u); LOADALL;
  /* 0052e9fb mov byte ptr [0x9b93b7], al */ { const u32 m_ = (u32)(0x9b93b7u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052ea00 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0052ea02 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0052ea04 push 0x9b93a8 */ { u32 v_ = 0x9b93a8u; esp -= 4; M32(esp) = v_; }
  /* 0052ea09 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0052ea0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ea0d movzx eax, word ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M16(m_)); }
  /* 0052ea10 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052ea13 mov eax, dword ptr [esi + eax*4] */ { const u32 m_ = (u32)(esi + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0052ea16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ea17 push 0x68a59c */ { u32 v_ = 0x68a59cu; esp -= 4; M32(esp) = v_; }
  /* 0052ea1c call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ea1eu; SAVEALL; call_ind(c, t_); RETCHK(0x52ea1eu, 0x52ea1cu); LOADALL; }
  /* 0052ea1e mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0052ea21 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0052ea24 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ea27 mov edx, dword ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); edx = (u32)(M32(m_)); }
  /* 0052ea2a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052ea2b add esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052ea2e cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ea30 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0052ea33 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0052ea36 jb 0x52e870 */ if (CF_) goto L_0052e870;
  /* 0052ea3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ea3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ea3e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0052ea3f:;
  /* 0052ea3f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ea41 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ea42 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0052ea50(CPU *c) {
  NATIVE_HOOK(0x52ea50u) REGS; LOADALL;
L_0052ea50:;
  /* 0052ea50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ea51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ea53 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ea56 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052ea58 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ea59 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ea5cu; SAVEALL; call_ind(c, t_); RETCHK(0x52ea5cu, 0x52ea59u); LOADALL; }
  /* 0052ea5c mov edi, eax */ { edi = (u32)(eax); }
  /* 0052ea5e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ea5f mov eax, 0x653280 */ { eax = (u32)(0x653280u); }
  /* 0052ea64 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ea69u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ea64u); RETCHK(0x52ea69u, 0x52ea64u); LOADALL;
  /* 0052ea69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ea6a call 0x5fe92e */ esp -= 4; M32(esp) = 0x52ea6fu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52ea6au); RETCHK(0x52ea6fu, 0x52ea6au); LOADALL;
  /* 0052ea6f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ea72 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0052ea74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ea75 mov eax, 0x65327c */ { eax = (u32)(0x65327cu); }
  /* 0052ea7a call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ea7fu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ea7au); RETCHK(0x52ea7fu, 0x52ea7au); LOADALL;
  /* 0052ea7f lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0052ea82 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ea83 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ea86 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ea87 push 0x653274 */ { u32 v_ = 0x653274u; esp -= 4; M32(esp) = v_; }
  /* 0052ea8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ea8d call 0x5feaac */ esp -= 4; M32(esp) = 0x52ea92u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ea8du); RETCHK(0x52ea92u, 0x52ea8du); LOADALL;
  /* 0052ea92 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0052ea95 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ea98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ea99 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052ea9c mov eax, 0x65326c */ { eax = (u32)(0x65326cu); }
  /* 0052eaa1 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0052eaa4 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052eaa7 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52eaacu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52eaa7u); RETCHK(0x52eaacu, 0x52eaa7u); LOADALL;
  /* 0052eaac lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052eaaf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052eab0 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052eab3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052eab4 push 0x651d3c */ { u32 v_ = 0x651d3cu; esp -= 4; M32(esp) = v_; }
  /* 0052eab9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052eaba call 0x5feaac */ esp -= 4; M32(esp) = 0x52eabfu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52eabau); RETCHK(0x52eabfu, 0x52eabau); LOADALL;
  /* 0052eabf mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0052eac2 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052eac5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052eac8 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0052eacb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052eacc mov eax, 0x653264 */ { eax = (u32)(0x653264u); }
  /* 0052ead1 mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0052ead4 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ead9u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ead4u); RETCHK(0x52ead9u, 0x52ead4u); LOADALL;
  /* 0052ead9 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052eadc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052eadd push 0x651d4c */ { u32 v_ = 0x651d4cu; esp -= 4; M32(esp) = v_; }
  /* 0052eae2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052eae3 call 0x5feaac */ esp -= 4; M32(esp) = 0x52eae8u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52eae3u); RETCHK(0x52eae8u, 0x52eae3u); LOADALL;
  /* 0052eae8 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0052eaeb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052eaee mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0052eaf1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052eaf2 mov eax, 0x653258 */ { eax = (u32)(0x653258u); }
  /* 0052eaf7 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52eafcu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52eaf7u); RETCHK(0x52eafcu, 0x52eaf7u); LOADALL;
  /* 0052eafc lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052eaff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052eb00 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052eb05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052eb06 call 0x5feaac */ esp -= 4; M32(esp) = 0x52eb0bu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52eb06u); RETCHK(0x52eb0bu, 0x52eb06u); LOADALL;
  /* 0052eb0b mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052eb0e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052eb11 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052eb12 mov eax, 0x653254 */ { eax = (u32)(0x653254u); }
  /* 0052eb17 mov dword ptr [esi + 0x3c], edx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(edx); }
  /* 0052eb1a call 0x560ed0 */ esp -= 4; M32(esp) = 0x52eb1fu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52eb1au); RETCHK(0x52eb1fu, 0x52eb1au); LOADALL;
  /* 0052eb1f lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052eb22 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052eb23 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052eb28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052eb29 call 0x5feaac */ esp -= 4; M32(esp) = 0x52eb2eu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52eb29u); RETCHK(0x52eb2eu, 0x52eb29u); LOADALL;
  /* 0052eb2e mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052eb31 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052eb34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052eb35 mov eax, 0x653250 */ { eax = (u32)(0x653250u); }
  /* 0052eb3a mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052eb3d call 0x560ed0 */ esp -= 4; M32(esp) = 0x52eb42u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52eb3du); RETCHK(0x52eb42u, 0x52eb3du); LOADALL;
  /* 0052eb42 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052eb45 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052eb46 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052eb4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052eb4c call 0x5feaac */ esp -= 4; M32(esp) = 0x52eb51u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52eb4cu); RETCHK(0x52eb51u, 0x52eb4cu); LOADALL;
  /* 0052eb51 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052eb54 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052eb57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052eb58 mov eax, 0x653248 */ { eax = (u32)(0x653248u); }
  /* 0052eb5d mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 0052eb60 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52eb65u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52eb60u); RETCHK(0x52eb65u, 0x52eb60u); LOADALL;
  /* 0052eb65 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052eb68 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052eb69 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052eb6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052eb6f call 0x5feaac */ esp -= 4; M32(esp) = 0x52eb74u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52eb6fu); RETCHK(0x52eb74u, 0x52eb6fu); LOADALL;
  /* 0052eb74 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052eb77 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052eb7a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052eb7b mov eax, 0x653240 */ { eax = (u32)(0x653240u); }
  /* 0052eb80 mov dword ptr [esi + 0x18], edx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edx); }
  /* 0052eb83 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52eb88u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52eb83u); RETCHK(0x52eb88u, 0x52eb83u); LOADALL;
  /* 0052eb88 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052eb8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052eb8c push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052eb91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052eb92 call 0x5feaac */ esp -= 4; M32(esp) = 0x52eb97u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52eb92u); RETCHK(0x52eb97u, 0x52eb92u); LOADALL;
  /* 0052eb97 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052eb9a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052eb9d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052eb9e mov eax, 0x653238 */ { eax = (u32)(0x653238u); }
  /* 0052eba3 mov dword ptr [esi + 0x1c], edx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edx); }
  /* 0052eba6 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ebabu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52eba6u); RETCHK(0x52ebabu, 0x52eba6u); LOADALL;
  /* 0052ebab lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ebae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ebaf push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052ebb4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ebb5 call 0x5feaac */ esp -= 4; M32(esp) = 0x52ebbau; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ebb5u); RETCHK(0x52ebbau, 0x52ebb5u); LOADALL;
  /* 0052ebba mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052ebbd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ebc0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ebc1 mov eax, 0x653230 */ { eax = (u32)(0x653230u); }
  /* 0052ebc6 mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0052ebc9 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ebceu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ebc9u); RETCHK(0x52ebceu, 0x52ebc9u); LOADALL;
  /* 0052ebce lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ebd1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ebd2 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052ebd7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ebd8 call 0x5feaac */ esp -= 4; M32(esp) = 0x52ebddu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ebd8u); RETCHK(0x52ebddu, 0x52ebd8u); LOADALL;
  /* 0052ebdd mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052ebe0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ebe3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ebe4 mov eax, 0x653224 */ { eax = (u32)(0x653224u); }
  /* 0052ebe9 mov dword ptr [esi + 0x24], edx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edx); }
  /* 0052ebec call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ebf1u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ebecu); RETCHK(0x52ebf1u, 0x52ebecu); LOADALL;
  /* 0052ebf1 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ebf4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ebf5 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052ebfa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ebfb call 0x5feaac */ esp -= 4; M32(esp) = 0x52ec00u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ebfbu); RETCHK(0x52ec00u, 0x52ebfbu); LOADALL;
  /* 0052ec00 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052ec03 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ec06 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ec07 mov eax, 0x653218 */ { eax = (u32)(0x653218u); }
  /* 0052ec0c mov dword ptr [esi + 0x28], edx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edx); }
  /* 0052ec0f call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ec14u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ec0fu); RETCHK(0x52ec14u, 0x52ec0fu); LOADALL;
  /* 0052ec14 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ec17 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ec18 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052ec1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ec1e call 0x5feaac */ esp -= 4; M32(esp) = 0x52ec23u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ec1eu); RETCHK(0x52ec23u, 0x52ec1eu); LOADALL;
  /* 0052ec23 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052ec26 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ec29 mov dword ptr [esi + 0x2c], edx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0052ec2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ec2d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ec2f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ec30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ec40(CPU *c) {
  NATIVE_HOOK(0x52ec40u) REGS; LOADALL;
L_0052ec40:;
  /* 0052ec40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ec41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ec43 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ec46 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ec49 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052ec4b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ec4c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ec4d call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ec50u; SAVEALL; call_ind(c, t_); RETCHK(0x52ec50u, 0x52ec4du); LOADALL; }
  /* 0052ec50 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052ec52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ec53 mov eax, 0x653070 */ { eax = (u32)(0x653070u); }
  /* 0052ec58 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ec5du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ec58u); RETCHK(0x52ec5du, 0x52ec58u); LOADALL;
  /* 0052ec5d mov edx, edi */ { edx = (u32)(edi); }
  /* 0052ec5f nop */ ;
L_0052ec60:;
  /* 0052ec60 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052ec62 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052ec63 mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052ec65 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052ec66 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052ec68 jne 0x52ec60 */ if (!ZF_) goto L_0052ec60;
  /* 0052ec6a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ec6b mov eax, 0x653210 */ { eax = (u32)(0x653210u); }
  /* 0052ec70 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ec75u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ec70u); RETCHK(0x52ec75u, 0x52ec70u); LOADALL;
  /* 0052ec75 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052ec78 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ec79 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ec7c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ec7d push 0x653274 */ { u32 v_ = 0x653274u; esp -= 4; M32(esp) = v_; }
  /* 0052ec82 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ec83 call 0x5feaac */ esp -= 4; M32(esp) = 0x52ec88u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ec83u); RETCHK(0x52ec88u, 0x52ec83u); LOADALL;
  /* 0052ec88 mov ax, word ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052ec8c mov cx, word ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0052ec90 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ec93 mov word ptr [edi + 0x60], ax */ { const u32 m_ = (u32)(edi + 0x60u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0052ec97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ec98 mov eax, 0x653208 */ { eax = (u32)(0x653208u); }
  /* 0052ec9d mov word ptr [edi + 0x62], cx */ { const u32 m_ = (u32)(edi + 0x62u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0052eca1 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52eca6u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52eca1u); RETCHK(0x52eca6u, 0x52eca1u); LOADALL;
  /* 0052eca6 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0052eca9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ecaa lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052ecad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ecae lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052ecb1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ecb2 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ecb5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ecb6 push 0x651d24 */ { u32 v_ = 0x651d24u; esp -= 4; M32(esp) = v_; }
  /* 0052ecbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ecbc call 0x5feaac */ esp -= 4; M32(esp) = 0x52ecc1u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ecbcu); RETCHK(0x52ecc1u, 0x52ecbcu); LOADALL;
  /* 0052ecc1 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052ecc4 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0052ecc7 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052ecca add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052eccd mov dword ptr [edi + 0x40], edx */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(edx); }
  /* 0052ecd0 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0052ecd3 mov dword ptr [edi + 0x44], eax */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(eax); }
  /* 0052ecd6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ecd7 mov eax, 0x6531fc */ { eax = (u32)(0x6531fcu); }
  /* 0052ecdc mov dword ptr [edi + 0x48], ecx */ { const u32 m_ = (u32)(edi + 0x48u); M32(m_) = (u32)(ecx); }
  /* 0052ecdf mov dword ptr [edi + 0x4c], edx */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(edx); }
  /* 0052ece2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ece7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ece2u); RETCHK(0x52ece7u, 0x52ece2u); LOADALL;
  /* 0052ece7 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ecea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052eceb push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052ecf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ecf1 call 0x5feaac */ esp -= 4; M32(esp) = 0x52ecf6u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ecf1u); RETCHK(0x52ecf6u, 0x52ecf1u); LOADALL;
  /* 0052ecf6 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052ecf9 mov dword ptr [edi + 0x68], eax */ { const u32 m_ = (u32)(edi + 0x68u); M32(m_) = (u32)(eax); }
  /* 0052ecfc mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052ecfe shl eax, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052ed01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ed02 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52ed07u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52ed02u); RETCHK(0x52ed07u, 0x52ed02u); LOADALL;
  /* 0052ed07 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052ed09 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ed0c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ed0e je 0x52ed46 */ if (ZF_) goto L_0052ed46;
  /* 0052ed10 lea edx, [ebx - 1] */ edx = (u32)((u32)(ebx + 0xffffffffu));
  /* 0052ed13 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ed15 jl 0x52ed48 */ if (LT_) goto L_0052ed48;
  /* 0052ed17 lea ecx, [eax + 0x14] */ ecx = (u32)((u32)(eax + 0x14u));
  /* 0052ed1a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052ed1b mov ebx, 7 */ { ebx = (u32)(0x7u); }
L_0052ed20:;
  /* 0052ed20 mov dword ptr [ecx - 8], esi */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 0052ed23 mov dword ptr [ecx - 4], esi */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0052ed26 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 0052ed28 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 0052ed2b mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 0052ed2e mov dword ptr [ecx + 0xc], esi */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(esi); }
  /* 0052ed31 mov dword ptr [ecx + 0x10], esi */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(esi); }
  /* 0052ed34 mov dword ptr [ecx + 0x14], 2 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x2u); }
  /* 0052ed3b mov dword ptr [ecx + 0x18], ebx */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0052ed3e add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052ed41 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052ed42 jne 0x52ed20 */ if (!ZF_) goto L_0052ed20;
  /* 0052ed44 jmp 0x52ed48 */ goto L_0052ed48;
L_0052ed46:;
  /* 0052ed46 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0052ed48:;
  /* 0052ed48 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ed4b mov dword ptr [edi + 0x64], eax */ { const u32 m_ = (u32)(edi + 0x64u); M32(m_) = (u32)(eax); }
  /* 0052ed4e mov eax, 0x6531f0 */ { eax = (u32)(0x6531f0u); }
  /* 0052ed53 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52ed58u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52ed53u); RETCHK(0x52ed58u, 0x52ed53u); LOADALL;
  /* 0052ed58 mov ebx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ebx = (u32)(M32(m_)); }
  /* 0052ed5b cmp dword ptr [edi + 0x68], esi */ { const u32 m_ = (u32)(edi + 0x68u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ed5e mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 0052ed61 jbe 0x52ed8d */ if ((CF_|ZF_)) goto L_0052ed8d;
  /* 0052ed63 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
L_0052ed66:;
  /* 0052ed66 mov esi, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); esi = (u32)(M32(m_)); }
  /* 0052ed69 add esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052ed6c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052ed6e call 0x52ea50 */ esp -= 4; M32(esp) = 0x52ed73u; SAVEALL; F_0052ea50(c); ABI_CHECK(0x52ea50u, 0x52ed6eu); RETCHK(0x52ed73u, 0x52ed6eu); LOADALL;
  /* 0052ed73 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 0052ed76 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052ed79 mov ecx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 0052ed7c mov ebx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ebx = (u32)(M32(m_)); }
  /* 0052ed7f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052ed80 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052ed83 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ed85 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0052ed88 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052ed8b jb 0x52ed66 */ if (CF_) goto L_0052ed66;
L_0052ed8d:;
  /* 0052ed8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ed8e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ed8f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ed91 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ed92 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052eda0(CPU *c) {
  NATIVE_HOOK(0x52eda0u) REGS; LOADALL;
L_0052eda0:;
  /* 0052eda0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052eda2 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052eda4 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052eda7 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052edaa mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0052edad mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0052edb0 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0052edb3 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0052edb6 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0052edb9 mov dword ptr [eax + 0x28], 2 */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(0x2u); }
  /* 0052edc0 mov dword ptr [eax + 0x2c], 7 */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(0x7u); }
  /* 0052edc7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052edd0(CPU *c) {
  NATIVE_HOOK(0x52edd0u) REGS; LOADALL;
L_0052edd0:;
  /* 0052edd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052edd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052edd2 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052edd4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052edd6 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52edd9u; SAVEALL; call_ind(c, t_); RETCHK(0x52edd9u, 0x52edd6u); LOADALL; }
  /* 0052edd9 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052eddb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052eddc mov eax, 0x650358 */ { eax = (u32)(0x650358u); }
  /* 0052ede1 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ede6u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ede1u); RETCHK(0x52ede6u, 0x52ede1u); LOADALL;
  /* 0052ede6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ede8 je 0x52edf9 */ if (ZF_) goto L_0052edf9;
  /* 0052edea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052edeb push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052edf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052edf1 call 0x5feaac */ esp -= 4; M32(esp) = 0x52edf6u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52edf1u); RETCHK(0x52edf6u, 0x52edf1u); LOADALL;
  /* 0052edf6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052edf9:;
  /* 0052edf9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052edfa mov eax, 0x6531e4 */ { eax = (u32)(0x6531e4u); }
  /* 0052edff call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ee04u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52edffu); RETCHK(0x52ee04u, 0x52edffu); LOADALL;
  /* 0052ee04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ee06 je 0x52ee1a */ if (ZF_) goto L_0052ee1a;
  /* 0052ee08 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052ee0b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ee0c push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0052ee11 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ee12 call 0x5feaac */ esp -= 4; M32(esp) = 0x52ee17u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52ee12u); RETCHK(0x52ee17u, 0x52ee12u); LOADALL;
  /* 0052ee17 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052ee1a:;
  /* 0052ee1a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ee1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ee1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ee20(CPU *c) {
  NATIVE_HOOK(0x52ee20u) REGS; LOADALL;
L_0052ee20:;
  /* 0052ee20 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052ee22 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052ee24 mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0052ee27 mov dword ptr [eax + 0x44], ecx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(ecx); }
  /* 0052ee2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ee30(CPU *c) {
  NATIVE_HOOK(0x52ee30u) REGS; LOADALL;
L_0052ee30:;
  /* 0052ee30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ee31 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052ee33 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 0052ee36 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ee37 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052ee39 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ee3b je 0x52ee4c */ if (ZF_) goto L_0052ee4c;
  /* 0052ee3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ee3e call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52ee43u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52ee3eu); RETCHK(0x52ee43u, 0x52ee3eu); LOADALL;
  /* 0052ee43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ee46 mov dword ptr [esi + 0x40], edi */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(edi); }
  /* 0052ee49 mov dword ptr [esi + 0x44], edi */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(edi); }
L_0052ee4c:;
  /* 0052ee4c mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 0052ee4f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ee51 je 0x52ee62 */ if (ZF_) goto L_0052ee62;
  /* 0052ee53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ee54 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52ee59u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52ee54u); RETCHK(0x52ee59u, 0x52ee54u); LOADALL;
  /* 0052ee59 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ee5c mov dword ptr [esi + 0x48], edi */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(edi); }
  /* 0052ee5f mov dword ptr [esi + 0x4c], edi */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(edi); }
L_0052ee62:;
  /* 0052ee62 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ee63 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ee64 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ee70(CPU *c) {
  NATIVE_HOOK(0x52ee70u) REGS; LOADALL;
L_0052ee70:;
  /* 0052ee70 mov eax, dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); eax = (u32)(M32(m_)); }
  /* 0052ee73 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ee75 jg 0x52ee7a */ if (!(ZF_|LT_)) goto L_0052ee7a;
  /* 0052ee77 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052ee79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052ee7a:;
  /* 0052ee7a mov ecx, dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0052ee7d shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052ee80 mov eax, dword ptr [ecx + eax - 0x10] */ { const u32 m_ = (u32)(ecx + eax + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0052ee84 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ee90(CPU *c) {
  NATIVE_HOOK(0x52ee90u) REGS; LOADALL;
L_0052ee90:;
  /* 0052ee90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ee91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ee93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ee94 mov ecx, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0052ee97 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052ee99 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ee9a or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052ee9d cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ee9f mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0052eea2 jle 0x52eeb9 */ if ((ZF_|LT_)) goto L_0052eeb9;
  /* 0052eea4 mov eax, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); eax = (u32)(M32(m_)); }
L_0052eea7:;
  /* 0052eea7 cmp dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052eea9 ja 0x52eeb5 */ if (!(CF_|ZF_)) goto L_0052eeb5;
  /* 0052eeab inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052eeac add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052eeaf cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052eeb1 jl 0x52eea7 */ if (LT_) goto L_0052eea7;
  /* 0052eeb3 jmp 0x52eeb9 */ goto L_0052eeb9;
L_0052eeb5:;
  /* 0052eeb5 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052eeb7 jl 0x52eeda */ if (LT_) goto L_0052eeda;
L_0052eeb9:;
  /* 0052eeb9 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052eebc test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052eebe je 0x52eec3 */ if (ZF_) goto L_0052eec3;
  /* 0052eec0 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0052eec3:;
  /* 0052eec3 test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052eec5 je 0x52eeca */ if (ZF_) goto L_0052eeca;
  /* 0052eec7 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0052eeca:;
  /* 0052eeca test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052eecc je 0x52ef2a */ if (ZF_) goto L_0052ef2a;
  /* 0052eece mov eax, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); eax = (u32)(M32(m_)); }
  /* 0052eed1 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052eed4 mov esi, dword ptr [ecx + eax - 0xc] */ { const u32 m_ = (u32)(ecx + eax + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 0052eed8 jmp 0x52ef2a */ goto L_0052ef2a;
L_0052eeda:;
  /* 0052eeda test byte ptr [ebp + 8], 2 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052eede je 0x52ef02 */ if (ZF_) goto L_0052ef02;
  /* 0052eee0 mov eax, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); eax = (u32)(M32(m_)); }
  /* 0052eee3 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0052eee5 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052eee8 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052eeea cmp dword ptr [eax - 0x10], ebx */ { const u32 m_ = (u32)(eax + 0xfffffff0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052eeed jne 0x52ef02 */ if (!ZF_) goto L_0052ef02;
  /* 0052eeef mov esi, dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 0052eef2 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052eef5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052eef7 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0052eefe je 0x52ef02 */ if (ZF_) goto L_0052ef02;
  /* 0052ef00 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
L_0052ef02:;
  /* 0052ef02 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052ef05 test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052ef07 je 0x52ef16 */ if (ZF_) goto L_0052ef16;
  /* 0052ef09 mov esi, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); esi = (u32)(M32(m_)); }
  /* 0052ef0c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0052ef0e shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052ef11 mov esi, dword ptr [ecx + esi + 4] */ { const u32 m_ = (u32)(ecx + esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052ef15 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0052ef16:;
  /* 0052ef16 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052ef18 je 0x52ef2a */ if (ZF_) goto L_0052ef2a;
  /* 0052ef1a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ef1c jle 0x52ef2a */ if ((ZF_|LT_)) goto L_0052ef2a;
  /* 0052ef1e mov ecx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0052ef21 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052ef23 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052ef26 mov esi, dword ptr [eax + ecx - 0xc] */ { const u32 m_ = (u32)(eax + ecx + 0xfffffff4u); esi = (u32)(M32(m_)); }
L_0052ef2a:;
  /* 0052ef2a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052ef2d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ef2f je 0x52ef34 */ if (ZF_) goto L_0052ef34;
  /* 0052ef31 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052ef32 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
L_0052ef34:;
  /* 0052ef34 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052ef37 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ef39 je 0x52ef40 */ if (ZF_) goto L_0052ef40;
  /* 0052ef3b mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052ef3e mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
L_0052ef40:;
  /* 0052ef40 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ef42 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ef43 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ef45 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ef46 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0052ef50(CPU *c) {
  NATIVE_HOOK(0x52ef50u) REGS; LOADALL;
L_0052ef50:;
  /* 0052ef50 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052ef52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ef53 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52ef56u; SAVEALL; call_ind(c, t_); RETCHK(0x52ef56u, 0x52ef53u); LOADALL; }
  /* 0052ef56 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052ef58 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ef59 mov eax, 0x650358 */ { eax = (u32)(0x650358u); }
  /* 0052ef5e call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ef63u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ef5eu); RETCHK(0x52ef63u, 0x52ef5eu); LOADALL;
  /* 0052ef63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ef64 call 0x5fe92e */ esp -= 4; M32(esp) = 0x52ef69u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52ef64u); RETCHK(0x52ef69u, 0x52ef64u); LOADALL;
  /* 0052ef69 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ef6c mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0052ef6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ef6f mov eax, 0x651000 */ { eax = (u32)(0x651000u); }
  /* 0052ef74 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ef79u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ef74u); RETCHK(0x52ef79u, 0x52ef74u); LOADALL;
  /* 0052ef79 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ef7a call 0x5fe92e */ esp -= 4; M32(esp) = 0x52ef7fu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52ef7au); RETCHK(0x52ef7fu, 0x52ef7au); LOADALL;
  /* 0052ef7f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ef82 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052ef85 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ef86 mov eax, 0x653284 */ { eax = (u32)(0x653284u); }
  /* 0052ef8b call 0x560ed0 */ esp -= 4; M32(esp) = 0x52ef90u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52ef8bu); RETCHK(0x52ef90u, 0x52ef8bu); LOADALL;
  /* 0052ef90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ef91 call 0x5fe92e */ esp -= 4; M32(esp) = 0x52ef96u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52ef91u); RETCHK(0x52ef96u, 0x52ef91u); LOADALL;
  /* 0052ef96 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ef99 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052ef9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ef9d mov eax, 0x6531d8 */ { eax = (u32)(0x6531d8u); }
  /* 0052efa2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52efa7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52efa2u); RETCHK(0x52efa7u, 0x52efa2u); LOADALL;
  /* 0052efa7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052efa8 call 0x5fe92e */ esp -= 4; M32(esp) = 0x52efadu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52efa8u); RETCHK(0x52efadu, 0x52efa8u); LOADALL;
  /* 0052efad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052efb0 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052efb3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052efb4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052efc0(CPU *c) {
  NATIVE_HOOK(0x52efc0u) REGS; LOADALL;
L_0052efc0:;
  /* 0052efc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052efc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052efc3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052efc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052efc7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052efca mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052efcc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052efcd mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052efcf call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52efd2u; SAVEALL; call_ind(c, t_); RETCHK(0x52efd2u, 0x52efcfu); LOADALL; }
  /* 0052efd2 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052efd4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052efd6 mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 0052efd9 je 0x52f0da */ if (ZF_) goto L_0052f0da;
  /* 0052efdf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052efe0 mov eax, 0x653070 */ { eax = (u32)(0x653070u); }
  /* 0052efe5 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52efeau; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52efe5u); RETCHK(0x52efeau, 0x52efe5u); LOADALL;
  /* 0052efea mov edx, esi */ { edx = (u32)(esi); }
  /* 0052efec lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052eff0:;
  /* 0052eff0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052eff2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052eff3 mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052eff5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052eff6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052eff8 jne 0x52eff0 */ if (!ZF_) goto L_0052eff0;
  /* 0052effa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052effb mov eax, 0x6531cc */ { eax = (u32)(0x6531ccu); }
  /* 0052f000 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52f005u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52f000u); RETCHK(0x52f005u, 0x52f000u); LOADALL;
  /* 0052f005 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f007 je 0x52f07a */ if (ZF_) goto L_0052f07a;
  /* 0052f009 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f00a call 0x5fe92e */ esp -= 4; M32(esp) = 0x52f00fu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52f00au); RETCHK(0x52f00fu, 0x52f00au); LOADALL;
  /* 0052f00f mov edi, eax */ { edi = (u32)(eax); }
  /* 0052f011 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f014 mov eax, 0x6531c0 */ { eax = (u32)(0x6531c0u); }
  /* 0052f019 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052f01b call 0x560ba0 */ esp -= 4; M32(esp) = 0x52f020u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52f01bu); RETCHK(0x52f020u, 0x52f01bu); LOADALL;
  /* 0052f020 mov dword ptr [esi + 0x44], edi */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(edi); }
  /* 0052f023 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0052f026 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f027 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052f029 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52f02eu; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52f029u); RETCHK(0x52f02eu, 0x52f029u); LOADALL;
  /* 0052f02e mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 0052f031 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 0052f034 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f037 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f039 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0052f040 jbe 0x52f077 */ if ((CF_|ZF_)) goto L_0052f077;
  /* 0052f042 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052f049 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052f050:;
  /* 0052f050 mov edi, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); edi = (u32)(M32(m_)); }
  /* 0052f053 add edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052f056 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052f058 call 0x52ef50 */ esp -= 4; M32(esp) = 0x52f05du; SAVEALL; F_0052ef50(c); ABI_CHECK(0x52ef50u, 0x52f058u); RETCHK(0x52f05du, 0x52f058u); LOADALL;
  /* 0052f05d mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0052f060 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052f063 mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0052f066 mov ebx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ebx = (u32)(M32(m_)); }
  /* 0052f069 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052f06a add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052f06d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f06f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0052f072 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0052f075 jb 0x52f050 */ if (CF_) goto L_0052f050;
L_0052f077:;
  /* 0052f077 mov edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edi = (u32)(M32(m_)); }
L_0052f07a:;
  /* 0052f07a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f07b mov eax, 0x6531b4 */ { eax = (u32)(0x6531b4u); }
  /* 0052f080 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52f085u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52f080u); RETCHK(0x52f085u, 0x52f080u); LOADALL;
  /* 0052f085 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f087 je 0x52f0da */ if (ZF_) goto L_0052f0da;
  /* 0052f089 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f08a call 0x5fe92e */ esp -= 4; M32(esp) = 0x52f08fu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52f08au); RETCHK(0x52f08fu, 0x52f08au); LOADALL;
  /* 0052f08f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052f092 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052f094 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f097 mov eax, 0x6531a8 */ { eax = (u32)(0x6531a8u); }
  /* 0052f09c call 0x560ba0 */ esp -= 4; M32(esp) = 0x52f0a1u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52f09cu); RETCHK(0x52f0a1u, 0x52f09cu); LOADALL;
  /* 0052f0a1 lea ecx, [ebx*8] */ ecx = (u32)((u32)(ebx * 8u));
  /* 0052f0a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f0a9 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052f0ab mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 0052f0ae call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52f0b3u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52f0aeu); RETCHK(0x52f0b3u, 0x52f0aeu); LOADALL;
  /* 0052f0b3 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 0052f0b6 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 0052f0b9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f0bc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052f0be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f0c0 jbe 0x52f0da */ if ((CF_|ZF_)) goto L_0052f0da;
L_0052f0c2:;
  /* 0052f0c2 mov edx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); edx = (u32)(M32(m_)); }
  /* 0052f0c5 lea eax, [edx + ebx*8] */ eax = (u32)((u32)(edx + ebx * 8u));
  /* 0052f0c8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052f0ca call 0x52edd0 */ esp -= 4; M32(esp) = 0x52f0cfu; SAVEALL; F_0052edd0(c); ABI_CHECK(0x52edd0u, 0x52f0cau); RETCHK(0x52f0cfu, 0x52f0cau); LOADALL;
  /* 0052f0cf mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 0052f0d2 mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 0052f0d5 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052f0d6 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f0d8 jb 0x52f0c2 */ if (CF_) goto L_0052f0c2;
L_0052f0da:;
  /* 0052f0da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f0db pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f0dc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052f0de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f0df ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052f0f0(CPU *c) {
  NATIVE_HOOK(0x52f0f0u) REGS; LOADALL;
L_0052f0f0:;
  /* 0052f0f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f0f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f0f2 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052f0f4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052f0f6 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f0f9u; SAVEALL; call_ind(c, t_); RETCHK(0x52f0f9u, 0x52f0f6u); LOADALL; }
  /* 0052f0f9 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052f0fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f0fc mov eax, 0x653070 */ { eax = (u32)(0x653070u); }
  /* 0052f101 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52f106u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52f101u); RETCHK(0x52f106u, 0x52f101u); LOADALL;
  /* 0052f106 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f108 je 0x52f11a */ if (ZF_) goto L_0052f11a;
  /* 0052f10a mov edx, edi */ { edx = (u32)(edi); }
  /* 0052f10c sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052f10e mov edi, edi */ { edi = (u32)(edi); }
L_0052f110:;
  /* 0052f110 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052f112 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052f115 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052f116 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052f118 jne 0x52f110 */ if (!ZF_) goto L_0052f110;
L_0052f11a:;
  /* 0052f11a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f11b mov eax, 0x643d84 */ { eax = (u32)(0x643d84u); }
  /* 0052f120 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52f125u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52f120u); RETCHK(0x52f125u, 0x52f120u); LOADALL;
  /* 0052f125 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f127 je 0x52f13f */ if (ZF_) goto L_0052f13f;
  /* 0052f129 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 0052f12c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f12d add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052f130 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f131 push 0x653274 */ { u32 v_ = 0x653274u; esp -= 4; M32(esp) = v_; }
  /* 0052f136 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f137 call 0x5feaac */ esp -= 4; M32(esp) = 0x52f13cu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52f137u); RETCHK(0x52f13cu, 0x52f137u); LOADALL;
  /* 0052f13c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052f13f:;
  /* 0052f13f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f140 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052f141 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f150(CPU *c) {
  NATIVE_HOOK(0x52f150u) REGS; LOADALL;
L_0052f150:;
  /* 0052f150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f153 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052f155 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f158u; SAVEALL; call_ind(c, t_); RETCHK(0x52f158u, 0x52f155u); LOADALL; }
  /* 0052f158 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f159 mov eax, 0x653070 */ { eax = (u32)(0x653070u); }
  /* 0052f15e call 0x560ed0 */ esp -= 4; M32(esp) = 0x52f163u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52f15eu); RETCHK(0x52f163u, 0x52f15eu); LOADALL;
  /* 0052f163 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f165 je 0x52f17a */ if (ZF_) goto L_0052f17a;
  /* 0052f167 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052f16a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052f16c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052f170:;
  /* 0052f170 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052f172 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052f175 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052f176 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052f178 jne 0x52f170 */ if (!ZF_) goto L_0052f170;
L_0052f17a:;
  /* 0052f17a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f17b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052f180(CPU *c) {
  NATIVE_HOOK(0x52f180u) REGS; LOADALL;
L_0052f180:;
  /* 0052f180 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052f182 mov dword ptr [eax], 0x6530f0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6530f0u); }
  /* 0052f188 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052f18b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052f18e mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052f191 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052f194 mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0052f197 mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 0052f19a mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 0052f19d mov dword ptr [eax + 0x48], ecx */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(ecx); }
  /* 0052f1a0 mov edx, 0x3f800000 */ { edx = (u32)(0x3f800000u); }
  /* 0052f1a5 mov dword ptr [eax + 0x38], edx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(edx); }
  /* 0052f1a8 mov dword ptr [eax + 0x44], edx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(edx); }
  /* 0052f1ab mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052f1ae mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052f1b1 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052f1b4 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052f1b7 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0052f1ba mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0052f1bd mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0052f1c0 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0052f1c3 mov byte ptr [eax + 0x24], cl */ { const u32 m_ = (u32)(eax + 0x24u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052f1c6 mov dword ptr [eax + 0x28], edx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(edx); }
  /* 0052f1c9 mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0052f1cc mov dword ptr [eax + 0x50], 0xffffffff */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(0xffffffffu); }
  /* 0052f1d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f1e0(CPU *c) {
  NATIVE_HOOK(0x52f1e0u) REGS; LOADALL;
L_0052f1e0:;
  /* 0052f1e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f1e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f1e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f1e4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052f1e6 call 0x52f210 */ esp -= 4; M32(esp) = 0x52f1ebu; SAVEALL; F_0052f210(c); ABI_CHECK(0x52f210u, 0x52f1e6u); RETCHK(0x52f1ebu, 0x52f1e6u); LOADALL;
  /* 0052f1eb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052f1ef je 0x52f1fa */ if (ZF_) goto L_0052f1fa;
  /* 0052f1f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f1f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52f1f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52f1f2u); RETCHK(0x52f1f7u, 0x52f1f2u); LOADALL;
  /* 0052f1f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052f1fa:;
  /* 0052f1fa mov eax, esi */ { eax = (u32)(esi); }
  /* 0052f1fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052f1fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f1fe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052f210(CPU *c) {
  NATIVE_HOOK(0x52f210u) REGS; LOADALL;
L_0052f210:;
  /* 0052f210 mov dword ptr [ecx], 0x6530f0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6530f0u); }
  /* 0052f216 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f220(CPU *c) {
  NATIVE_HOOK(0x52f220u) REGS; LOADALL;
L_0052f220:;
  /* 0052f220 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f221 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f223 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052f225 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f227 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052f228 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f229 mov esi, 0x3f800000 */ { esi = (u32)(0x3f800000u); }
  /* 0052f22e mov dword ptr [eax + 0xc], esi */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(esi); }
  /* 0052f231 mov dword ptr [eax + 0x10], esi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(esi); }
  /* 0052f234 mov dword ptr [eax + 0x28], esi */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(esi); }
  /* 0052f237 mov bl, 0xff */ { ebx = (ebx & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0052f239 mov byte ptr [eax + 0x2c], bl */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052f23c mov byte ptr [eax + 0x2d], bl */ { const u32 m_ = (u32)(eax + 0x2du); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052f23f mov byte ptr [eax + 0x2e], bl */ { const u32 m_ = (u32)(eax + 0x2eu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052f242 mov byte ptr [eax + 0x2f], bl */ { const u32 m_ = (u32)(eax + 0x2fu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052f245 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052f248 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052f24b mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0052f24e mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0052f251 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0052f254 mov dword ptr [eax + 0x38], esi */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(esi); }
  /* 0052f257 mov dword ptr [eax + 0x44], esi */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(esi); }
  /* 0052f25a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052f25d mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0052f260 mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 0052f263 mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 0052f266 mov dword ptr [eax + 0x48], ecx */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(ecx); }
  /* 0052f269 mov dword ptr [eax + 0x34], esi */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(esi); }
  /* 0052f26c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052f26d mov dword ptr [eax + 0x54], edx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(edx); }
  /* 0052f270 mov dword ptr [eax + 0x58], edi */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(edi); }
  /* 0052f273 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f274 je 0x52f27f */ if (ZF_) goto L_0052f27f;
  /* 0052f276 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f277 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f278 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f279 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f27a call edx */ { u32 t_ = edx; esp -= 4; M32(esp) = 0x52f27cu; SAVEALL; call_ind(c, t_); RETCHK(0x52f27cu, 0x52f27au); LOADALL; }
  /* 0052f27c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052f27f:;
  /* 0052f27f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f280 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052f290(CPU *c) {
  NATIVE_HOOK(0x52f290u) REGS; LOADALL;
L_0052f290:;
  /* 0052f290 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0052f293 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f295 je 0x52f2a5 */ if (ZF_) goto L_0052f2a5;
  /* 0052f297 mov ecx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 0052f29a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f29b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052f29d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052f29f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f2a0 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x52f2a2u; SAVEALL; call_ind(c, t_); RETCHK(0x52f2a2u, 0x52f2a0u); LOADALL; }
  /* 0052f2a2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052f2a5:;
  /* 0052f2a5 mov dword ptr [esi + 0x34], 0 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 0052f2ac mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0052f2ae push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052f2b0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052f2b2 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f2b4u; SAVEALL; call_ind(c, t_); RETCHK(0x52f2b4u, 0x52f2b2u); LOADALL; }
  /* 0052f2b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f2c0(CPU *c) {
  NATIVE_HOOK(0x52f2c0u) REGS; LOADALL;
L_0052f2c0:;
  /* 0052f2c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f2c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f2c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052f2c4 mov ebx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ebx = (u32)(M32(m_)); }
  /* 0052f2c7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f2c9 je 0x52f327 */ if (ZF_) goto L_0052f327;
  /* 0052f2cb mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0052f2ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f2d0 je 0x52f327 */ if (ZF_) goto L_0052f327;
  /* 0052f2d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f2d3 mov edi, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edi = (u32)(M32(m_)); }
  /* 0052f2d6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f2d8 jl 0x52f326 */ if (LT_) goto L_0052f326;
  /* 0052f2da fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052f2dd fadd dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052f2e0 fst dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); }
  /* 0052f2e3 fmul dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f2e6 fmul dword ptr [0x656ea0] */ { const u32 m_ = (u32)(0x656ea0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f2ec call 0x61b154 */ esp -= 4; M32(esp) = 0x52f2f1u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52f2ecu); RETCHK(0x52f2f1u, 0x52f2ecu); LOADALL;
  /* 0052f2f1 lea ecx, [edi + edi*4] */ ecx = (u32)((u32)(edi + edi * 4u));
  /* 0052f2f4 mov edi, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); edi = (u32)(M32(m_)); }
  /* 0052f2f7 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052f2fa add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052f2fc mov edx, eax */ { edx = (u32)(eax); }
  /* 0052f2fe call 0x52ee70 */ esp -= 4; M32(esp) = 0x52f303u; SAVEALL; F_0052ee70(c); ABI_CHECK(0x52ee70u, 0x52f2feu); RETCHK(0x52f303u, 0x52f2feu); LOADALL;
  /* 0052f303 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052f305 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f307 jl 0x52f326 */ if (LT_) goto L_0052f326;
  /* 0052f309 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052f30b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f30c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f30d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052f30f call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f312u; SAVEALL; call_ind(c, t_); RETCHK(0x52f312u, 0x52f30fu); LOADALL; }
  /* 0052f312 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0052f315 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f317 je 0x52f326 */ if (ZF_) goto L_0052f326;
  /* 0052f319 mov ecx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 0052f31c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f31d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f31e push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0052f320 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f321 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x52f323u; SAVEALL; call_ind(c, t_); RETCHK(0x52f323u, 0x52f321u); LOADALL; }
  /* 0052f323 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052f326:;
  /* 0052f326 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0052f327:;
  /* 0052f327 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f328 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f329 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052f330(CPU *c) {
  NATIVE_HOOK(0x52f330u) REGS; LOADALL;
L_0052f330:;
  /* 0052f330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f333 mov ecx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0052f336 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f338 je 0x52f348 */ if (ZF_) goto L_0052f348;
  /* 0052f33a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052f33d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f33e call 0x52f680 */ esp -= 4; M32(esp) = 0x52f343u; SAVEALL; F_0052f680(c); ABI_CHECK(0x52f680u, 0x52f33eu); RETCHK(0x52f343u, 0x52f33eu); LOADALL;
  /* 0052f343 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f346 jne 0x52f34e */ if (!ZF_) goto L_0052f34e;
L_0052f348:;
  /* 0052f348 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052f34a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f34b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052f34e:;
  /* 0052f34e mov cl, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052f351 mov byte ptr [esi + 0x24], cl */ { const u32 m_ = (u32)(esi + 0x24u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052f354 mov ecx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 0052f357 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f359 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0052f35c mov dword ptr [esi + 0x20], 1 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x1u); }
  /* 0052f363 mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 0052f36a je 0x52f379 */ if (ZF_) goto L_0052f379;
  /* 0052f36c mov edx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); edx = (u32)(M32(m_)); }
  /* 0052f36f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f370 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f371 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052f373 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f374 call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x52f376u; SAVEALL; call_ind(c, t_); RETCHK(0x52f376u, 0x52f374u); LOADALL; }
  /* 0052f376 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052f379:;
  /* 0052f379 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052f37e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f37f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052f390(CPU *c) {
  NATIVE_HOOK(0x52f390u) REGS; LOADALL;
L_0052f390:;
  /* 0052f390 mov ecx, dword ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); ecx = (u32)(M32(m_)); }
  /* 0052f393 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f395 mov dword ptr [eax + 0x20], 0 */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 0052f39c je 0x52f3ae */ if (ZF_) goto L_0052f3ae;
  /* 0052f39e mov edx, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); edx = (u32)(M32(m_)); }
  /* 0052f3a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f3a2 mov edx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0052f3a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f3a6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0052f3a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f3a9 call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x52f3abu; SAVEALL; call_ind(c, t_); RETCHK(0x52f3abu, 0x52f3a9u); LOADALL; }
  /* 0052f3ab add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052f3ae:;
  /* 0052f3ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f3b0(CPU *c) {
  NATIVE_HOOK(0x52f3b0u) REGS; LOADALL;
L_0052f3b0:;
  /* 0052f3b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f3b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f3b3 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f3b6 mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0052f3b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052f3bb cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f3bd je 0x52f546 */ if (ZF_) goto L_0052f546;
  /* 0052f3c3 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052f3c6 fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0052f3c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f3ca fstp dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052f3cd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f3ce lea edi, [ebx + 0x38] */ edi = (u32)((u32)(ebx + 0x38u));
  /* 0052f3d1 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 0052f3d3 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052f3d6 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052f3d9 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052f3dc mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0052f3df mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052f3e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f3e3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f3e4 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052f3e7 mov dword ptr [ebp - 0x28], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052f3ee mov dword ptr [ebp - 0x1c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052f3f5 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0052f3f8 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0052f3fb mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0052f3fe mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052f401 call 0x52d590 */ esp -= 4; M32(esp) = 0x52f406u; SAVEALL; F_0052d590(c); ABI_CHECK(0x52d590u, 0x52f401u); RETCHK(0x52f406u, 0x52f401u); LOADALL;
  /* 0052f406 mov edx, edi */ { edx = (u32)(edi); }
  /* 0052f408 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0052f40b lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052f40e call 0x52d690 */ esp -= 4; M32(esp) = 0x52f413u; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52f40eu); RETCHK(0x52f413u, 0x52f40eu); LOADALL;
  /* 0052f413 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052f415 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052f417 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0052f419 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052f41c mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052f41f mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052f422 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052f425 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052f428 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052f42b mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052f42e mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 0052f431 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052f434 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0052f437 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052f43a mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052f43d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052f43f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f440 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f441 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052f444 mov dword ptr [ebp - 0x28], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052f44b mov dword ptr [ebp - 0x1c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0052f452 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 0052f459 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0052f460 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0052f467 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0052f46e call 0x52d460 */ esp -= 4; M32(esp) = 0x52f473u; SAVEALL; F_0052d460(c); ABI_CHECK(0x52d460u, 0x52f46eu); RETCHK(0x52f473u, 0x52f46eu); LOADALL;
  /* 0052f473 mov edx, edi */ { edx = (u32)(edi); }
  /* 0052f475 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0052f478 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052f47b call 0x52d690 */ esp -= 4; M32(esp) = 0x52f480u; SAVEALL; F_0052d690(c); ABI_CHECK(0x52d690u, 0x52f47bu); RETCHK(0x52f480u, 0x52f47bu); LOADALL;
  /* 0052f480 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052f482 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052f484 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0052f486 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052f489 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052f48c mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052f48f mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052f492 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052f495 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052f498 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052f49b mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 0052f49e mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052f4a1 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0052f4a4 call 0x52e190 */ esp -= 4; M32(esp) = 0x52f4a9u; SAVEALL; F_0052e190(c); ABI_CHECK(0x52e190u, 0x52f4a4u); RETCHK(0x52f4a9u, 0x52f4a4u); LOADALL;
  /* 0052f4a9 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052f4ab mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0052f4ad mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052f4af mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 0052f4b2 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f4b4u; SAVEALL; call_ind(c, t_); RETCHK(0x52f4b4u, 0x52f4b2u); LOADALL; }
  /* 0052f4b4 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052f4b6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052f4b8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052f4ba call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f4bdu; SAVEALL; call_ind(c, t_); RETCHK(0x52f4bdu, 0x52f4bau); LOADALL; }
  /* 0052f4bd mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0052f4c0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052f4c2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052f4c4 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f4c6u; SAVEALL; call_ind(c, t_); RETCHK(0x52f4c6u, 0x52f4c4u); LOADALL; }
  /* 0052f4c6 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052f4c8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052f4ca mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052f4cc call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f4cfu; SAVEALL; call_ind(c, t_); RETCHK(0x52f4cfu, 0x52f4ccu); LOADALL; }
  /* 0052f4cf fld dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0052f4d2 fmul dword ptr [0x656ea0] */ { const u32 m_ = (u32)(0x656ea0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f4d8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052f4db call 0x61b154 */ esp -= 4; M32(esp) = 0x52f4e0u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52f4dbu); RETCHK(0x52f4e0u, 0x52f4dbu); LOADALL;
  /* 0052f4e0 mov esi, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); esi = (u32)(M32(m_)); }
  /* 0052f4e3 lea edx, [ebx + 0x2c] */ edx = (u32)((u32)(ebx + 0x2cu));
  /* 0052f4e6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f4e7 mov edx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0052f4ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f4eb lea ecx, [ebx + 0x50] */ ecx = (u32)((u32)(ebx + 0x50u));
  /* 0052f4ee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f4ef mov edi, eax */ { edi = (u32)(eax); }
  /* 0052f4f1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052f4f4 call 0x52f6f0 */ esp -= 4; M32(esp) = 0x52f4f9u; SAVEALL; F_0052f6f0(c); ABI_CHECK(0x52f6f0u, 0x52f4f4u); RETCHK(0x52f4f9u, 0x52f4f4u); LOADALL;
  /* 0052f4f9 mov eax, dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); eax = (u32)(M32(m_)); }
  /* 0052f4fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f4fe je 0x52f51b */ if (ZF_) goto L_0052f51b;
  /* 0052f500 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052f502 mov edi, dword ptr [ebx + 0x50] */ { const u32 m_ = (u32)(ebx + 0x50u); edi = (u32)(M32(m_)); }
  /* 0052f505 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0052f507 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052f509 cmp edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f50c jle 0x52f51b */ if ((ZF_|LT_)) goto L_0052f51b;
  /* 0052f50e mov edx, dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); edx = (u32)(M32(m_)); }
  /* 0052f511 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f512 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f513 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0052f515 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052f516 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x52f518u; SAVEALL; call_ind(c, t_); RETCHK(0x52f518u, 0x52f516u); LOADALL; }
  /* 0052f518 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052f51b:;
  /* 0052f51b mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 0052f51e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052f520 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052f522 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f524u; SAVEALL; call_ind(c, t_); RETCHK(0x52f524u, 0x52f522u); LOADALL; }
  /* 0052f524 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052f527 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052f529 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f52a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052f52c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052f52e call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f531u; SAVEALL; call_ind(c, t_); RETCHK(0x52f531u, 0x52f52eu); LOADALL; }
  /* 0052f531 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0052f533 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052f535 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f537u; SAVEALL; call_ind(c, t_); RETCHK(0x52f537u, 0x52f535u); LOADALL; }
  /* 0052f537 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052f53a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052f53c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f53d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052f53f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052f541 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f544u; SAVEALL; call_ind(c, t_); RETCHK(0x52f544u, 0x52f541u); LOADALL; }
  /* 0052f544 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f545 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052f546:;
  /* 0052f546 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052f548 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f549 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f550(CPU *c) {
  NATIVE_HOOK(0x52f550u) REGS; LOADALL;
L_0052f550:;
  /* 0052f550 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052f552 mov cl, byte ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052f555 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052f557 je 0x52f563 */ if (ZF_) goto L_0052f563;
  /* 0052f559 mov dword ptr [eax + 0x18], 0 */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 0052f560 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052f563:;
  /* 0052f563 call 0x52f390 */ esp -= 4; M32(esp) = 0x52f568u; SAVEALL; F_0052f390(c); ABI_CHECK(0x52f390u, 0x52f563u); RETCHK(0x52f568u, 0x52f563u); LOADALL;
  /* 0052f568 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0052f570(CPU *c) {
  NATIVE_HOOK(0x52f570u) REGS; LOADALL;
L_0052f570:;
  /* 0052f570 lea ecx, [esi + 0x38] */ ecx = (u32)((u32)(esi + 0x38u));
  /* 0052f573 call 0x52e530 */ esp -= 4; M32(esp) = 0x52f578u; SAVEALL; F_0052e530(c); ABI_CHECK(0x52e530u, 0x52f573u); RETCHK(0x52f578u, 0x52f573u); LOADALL;
  /* 0052f578 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052f57a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f580(CPU *c) {
  NATIVE_HOOK(0x52f580u) REGS; LOADALL;
L_0052f580:;
  /* 0052f580 add ecx, 0x38 */ { u32 a_ = ecx, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052f583 jmp 0x52e590 */ SAVEALL; F_0052e590(c); return;
}

void F_0052f590(CPU *c) {
  NATIVE_HOOK(0x52f590u) REGS; LOADALL;
L_0052f590:;
  /* 0052f590 mov dword ptr [eax + 0x28], 0 */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 0052f597 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f5a0(CPU *c) {
  NATIVE_HOOK(0x52f5a0u) REGS; LOADALL;
L_0052f5a0:;
  /* 0052f5a0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052f5a2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052f5a3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052f5a5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f5a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f5a8 je 0x52f5b8 */ if (ZF_) goto L_0052f5b8;
  /* 0052f5aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f5ab call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52f5b0u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52f5abu); RETCHK(0x52f5b0u, 0x52f5abu); LOADALL;
  /* 0052f5b0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f5b3 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 0052f5b5 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
L_0052f5b8:;
  /* 0052f5b8 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052f5bb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f5bd je 0x52f5ce */ if (ZF_) goto L_0052f5ce;
  /* 0052f5bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f5c0 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52f5c5u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52f5c0u); RETCHK(0x52f5c5u, 0x52f5c0u); LOADALL;
  /* 0052f5c5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f5c8 mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0052f5cb mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
L_0052f5ce:;
  /* 0052f5ce mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0052f5d1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f5d3 je 0x52f5f8 */ if (ZF_) goto L_0052f5f8;
  /* 0052f5d5 mov ecx, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052f5d8 lea edi, [eax - 4] */ edi = (u32)((u32)(eax + 0xfffffffcu));
  /* 0052f5db push 0x52e590 */ { u32 v_ = 0x52e590u; esp -= 4; M32(esp) = v_; }
  /* 0052f5e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f5e1 push 0x6c */ { u32 v_ = 0x6cu; esp -= 4; M32(esp) = v_; }
  /* 0052f5e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f5e4 call 0x5fe890 */ esp -= 4; M32(esp) = 0x52f5e9u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x52f5e4u); RETCHK(0x52f5e9u, 0x52f5e4u); LOADALL;
  /* 0052f5e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f5ea call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52f5efu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52f5eau); RETCHK(0x52f5efu, 0x52f5eau); LOADALL;
  /* 0052f5ef add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f5f2 mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0052f5f5 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
L_0052f5f8:;
  /* 0052f5f8 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0052f5fb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f5fd je 0x52f622 */ if (ZF_) goto L_0052f622;
  /* 0052f5ff mov edx, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052f602 lea edi, [eax - 4] */ edi = (u32)((u32)(eax + 0xfffffffcu));
  /* 0052f605 push 0x52ee30 */ { u32 v_ = 0x52ee30u; esp -= 4; M32(esp) = v_; }
  /* 0052f60a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f60b push 0x50 */ { u32 v_ = 0x50u; esp -= 4; M32(esp) = v_; }
  /* 0052f60d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f60e call 0x5fe890 */ esp -= 4; M32(esp) = 0x52f613u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x52f60eu); RETCHK(0x52f613u, 0x52f60eu); LOADALL;
  /* 0052f613 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f614 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52f619u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52f614u); RETCHK(0x52f619u, 0x52f614u); LOADALL;
  /* 0052f619 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f61c mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0052f61f mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
L_0052f622:;
  /* 0052f622 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0052f625 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052f627 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f629 jle 0x52f64c */ if ((ZF_|LT_)) goto L_0052f64c;
  /* 0052f62b jmp 0x52f630 */ goto L_0052f630;
L_0052f630:;
  /* 0052f630 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0052f633 mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 0052f636 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f638 lea eax, [eax + edi*4] */ eax = (u32)((u32)(eax + edi * 4u));
  /* 0052f63b je 0x52f644 */ if (ZF_) goto L_0052f644;
  /* 0052f63d mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052f63f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052f641 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52f644u; SAVEALL; call_ind(c, t_); RETCHK(0x52f644u, 0x52f641u); LOADALL; }
L_0052f644:;
  /* 0052f644 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0052f647 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052f648 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f64a jl 0x52f630 */ if (LT_) goto L_0052f630;
L_0052f64c:;
  /* 0052f64c mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0052f64f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f650 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52f655u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52f650u); RETCHK(0x52f655u, 0x52f650u); LOADALL;
  /* 0052f655 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052f658 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f659 mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 0052f65c call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52f661u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52f65cu); RETCHK(0x52f661u, 0x52f65cu); LOADALL;
  /* 0052f661 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f664 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052f666 call 0x52f580 */ esp -= 4; M32(esp) = 0x52f66bu; SAVEALL; F_0052f580(c); ABI_CHECK(0x52f580u, 0x52f666u); RETCHK(0x52f66bu, 0x52f666u); LOADALL;
  /* 0052f66b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f66c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52f671u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52f66cu); RETCHK(0x52f671u, 0x52f66cu); LOADALL;
  /* 0052f671 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f674 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f675 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f676 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052f680(CPU *c) {
  NATIVE_HOOK(0x52f680u) REGS; LOADALL;
L_0052f680:;
  /* 0052f680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f683 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f684 mov eax, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); eax = (u32)(M32(m_)); }
  /* 0052f687 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052f688 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f689 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f68a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052f68c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f68e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052f691 jle 0x52f6d8 */ if ((ZF_|LT_)) goto L_0052f6d8;
  /* 0052f693 mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
L_0052f696:;
  /* 0052f696 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052f699 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052f69b jmp 0x52f6a0 */ goto L_0052f6a0;
L_0052f6a0:;
  /* 0052f6a0 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052f6a2 mov dl, bl */ { edx = (edx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0052f6a4 cmp bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052f6a6 jne 0x52f6c4 */ if (!ZF_) goto L_0052f6c4;
  /* 0052f6a8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052f6aa je 0x52f6c0 */ if (ZF_) goto L_0052f6c0;
  /* 0052f6ac mov bl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052f6af mov dl, bl */ { edx = (edx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0052f6b1 cmp bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052f6b4 jne 0x52f6c4 */ if (!ZF_) goto L_0052f6c4;
  /* 0052f6b6 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052f6b9 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052f6bc test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052f6be jne 0x52f6a0 */ if (!ZF_) goto L_0052f6a0;
L_0052f6c0:;
  /* 0052f6c0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052f6c2 jmp 0x52f6c9 */ goto L_0052f6c9;
L_0052f6c4:;
  /* 0052f6c4 sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 0052f6c6 sbb ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
L_0052f6c9:;
  /* 0052f6c9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f6cb je 0x52f6e4 */ if (ZF_) goto L_0052f6e4;
  /* 0052f6cd mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052f6d0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052f6d1 add eax, 0x50 */ { u32 a_ = eax, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052f6d4 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052f6d6 jl 0x52f696 */ if (LT_) goto L_0052f696;
L_0052f6d8:;
  /* 0052f6d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f6d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052f6da or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052f6dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f6de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052f6e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f6e1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052f6e4:;
  /* 0052f6e4 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052f6e6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f6e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052f6e8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f6e9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052f6eb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f6ec ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052f6f0(CPU *c) {
  NATIVE_HOOK(0x52f6f0u) REGS; LOADALL;
L_0052f6f0:;
  /* 0052f6f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f6f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f6f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f6f4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f6f6 jl 0x52f747 */ if (LT_) goto L_0052f747;
  /* 0052f6f8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052f6f9 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052f6fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f6fd lea ebx, [esi + 0x38] */ ebx = (u32)((u32)(esi + 0x38u));
  /* 0052f700 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052f701 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f702 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052f704 call 0x52f750 */ esp -= 4; M32(esp) = 0x52f709u; SAVEALL; F_0052f750(c); ABI_CHECK(0x52f750u, 0x52f704u); RETCHK(0x52f709u, 0x52f704u); LOADALL;
  /* 0052f709 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f70b jge 0x52f712 */ if (!LT_) goto L_0052f712;
  /* 0052f70d mov dword ptr [esi + 0x34], ebx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 0052f710 jmp 0x52f71d */ goto L_0052f71d;
L_0052f712:;
  /* 0052f712 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0052f715 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052f718 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052f71a mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
L_0052f71d:;
  /* 0052f71d mov ecx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0052f720 mov edx, dword ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); edx = (u32)(M32(m_)); }
  /* 0052f723 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052f726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052f729 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f72a mov dword ptr [esi + 0xb8], edx */ { const u32 m_ = (u32)(esi + 0xb8u); M32(m_) = (u32)(edx); }
  /* 0052f730 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052f733 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0052f735 mov ecx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0052f738 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f739 lea eax, [esi + 0xa4] */ eax = (u32)((u32)(esi + 0xa4u));
  /* 0052f73f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f740 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f741 call 0x52e840 */ esp -= 4; M32(esp) = 0x52f746u; SAVEALL; F_0052e840(c); ABI_CHECK(0x52e840u, 0x52f741u); RETCHK(0x52f746u, 0x52f741u); LOADALL;
  /* 0052f746 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0052f747:;
  /* 0052f747 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052f749 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f74a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052f750(CPU *c) {
  NATIVE_HOOK(0x52f750u) REGS; LOADALL;
L_0052f750:;
  /* 0052f750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052f751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052f753 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052f755 push 0x61b4eb */ { u32 v_ = 0x61b4ebu; esp -= 4; M32(esp) = v_; }
  /* 0052f75a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052f760 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f761 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052f768 sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f76b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052f76e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f770 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052f771 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052f772 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052f775 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052f776 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0052f778 mov edi, edx */ { edi = (u32)(edx); }
  /* 0052f77a jne 0x52f794 */ if (!ZF_) goto L_0052f794;
  /* 0052f77c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f77d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052f77e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052f783 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f784 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052f787 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052f78e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052f790 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f791 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0052f794:;
  /* 0052f794 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f796 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 0052f79d jge 0x52f7b4 */ if (!LT_) goto L_0052f7b4;
  /* 0052f79f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f7a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052f7a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052f7a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f7a4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052f7a7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052f7ae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052f7b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f7b1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0052f7b4:;
  /* 0052f7b4 mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0052f7b7 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052f7ba lea edi, [edi + edi*4] */ edi = (u32)((u32)(edi + edi * 4u));
  /* 0052f7bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f7be shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0052f7c1 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052f7c4 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052f7c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052f7c7 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0052f7ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f7cb push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0052f7cd call 0x52ee90 */ esp -= 4; M32(esp) = 0x52f7d2u; SAVEALL; F_0052ee90(c); ABI_CHECK(0x52ee90u, 0x52f7cdu); RETCHK(0x52f7d2u, 0x52f7cdu); LOADALL;
  /* 0052f7d2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052f7d4 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052f7d7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052f7d9 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052f7dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f7dd push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0052f7df call 0x52ee90 */ esp -= 4; M32(esp) = 0x52f7e4u; SAVEALL; F_0052ee90(c); ABI_CHECK(0x52ee90u, 0x52f7dfu); RETCHK(0x52f7e4u, 0x52f7dfu); LOADALL;
  /* 0052f7e4 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052f7e7 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0052f7ea mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052f7ed imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052f7f0 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052f7f2 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0052f7f5 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0052f7f8 add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052f7fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f7fc mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 0052f7ff jne 0x52f814 */ if (!ZF_) goto L_0052f814;
  /* 0052f801 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0052f804 mov ecx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0052f807 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052f80a test byte ptr [ecx + eax + 8], 1 */ { const u32 m_ = (u32)(ecx + eax + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052f80f mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0052f812 jne 0x52f82a */ if (!ZF_) goto L_0052f82a;
L_0052f814:;
  /* 0052f814 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052f817 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052f818 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052f819 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052f81a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052f81d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052f824 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052f826 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052f827 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0052f82a:;
  /* 0052f82a mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0052f82d mov ecx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0052f830 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052f833 mov edx, dword ptr [edx + ecx] */ { const u32 m_ = (u32)(edx + ecx); edx = (u32)(M32(m_)); }
  /* 0052f836 sub edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052f839 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 0052f83c je 0x52fa20 */ if (ZF_) goto L_0052fa20;
  /* 0052f842 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0052f845 call 0x52eda0 */ esp -= 4; M32(esp) = 0x52f84au; SAVEALL; F_0052eda0(c); ABI_CHECK(0x52eda0u, 0x52f845u); RETCHK(0x52f84au, 0x52f845u); LOADALL;
  /* 0052f84a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052f84d mov eax, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); eax = (u32)(M32(m_)); }
  /* 0052f850 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f852 je 0x52f868 */ if (ZF_) goto L_0052f868;
  /* 0052f854 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f855 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52f85au; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52f855u); RETCHK(0x52f85au, 0x52f855u); LOADALL;
  /* 0052f85a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052f85d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f860 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052f862 mov dword ptr [eax + 0x64], ecx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ecx); }
  /* 0052f865 mov dword ptr [eax + 0x68], ecx */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(ecx); }
L_0052f868:;
  /* 0052f868 mov eax, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); eax = (u32)(M32(m_)); }
  /* 0052f86b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052f86e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052f871 mov dword ptr [ecx + 0x68], eax */ { const u32 m_ = (u32)(ecx + 0x68u); M32(m_) = (u32)(eax); }
  /* 0052f874 shl eax, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052f877 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f878 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52f87du; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52f878u); RETCHK(0x52f87du, 0x52f878u); LOADALL;
  /* 0052f87d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052f880 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052f883 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f885 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052f88c je 0x52f8a4 */ if (ZF_) goto L_0052f8a4;
  /* 0052f88e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052f891 push 0x52eda0 */ { u32 v_ = 0x52eda0u; esp -= 4; M32(esp) = v_; }
  /* 0052f896 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052f897 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0052f899 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052f89a call 0x4b91a0 */ esp -= 4; M32(esp) = 0x52f89fu; SAVEALL; F_004b91a0(c); ABI_CHECK(0x4b91a0u, 0x52f89au); RETCHK(0x52f89fu, 0x52f89au); LOADALL;
  /* 0052f89f mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0052f8a2 jmp 0x52f8a6 */ goto L_0052f8a6;
L_0052f8a4:;
  /* 0052f8a4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0052f8a6:;
  /* 0052f8a6 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052f8a9 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0052f8ac mov dword ptr [ecx + 0x64], eax */ { const u32 m_ = (u32)(ecx + 0x64u); M32(m_) = (u32)(eax); }
  /* 0052f8af mov eax, dword ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); eax = (u32)(M32(m_)); }
  /* 0052f8b2 mov ecx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0052f8b5 sub ebx, dword ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052f8b8 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f8ba mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0052f8bd fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f8c0 mov dword ptr [0x9b8b70], eax */ { const u32 m_ = (u32)(0x9b8b70u); M32(m_) = (u32)(eax); }
  /* 0052f8c5 jge 0x52f8cd */ if (!LT_) goto L_0052f8cd;
  /* 0052f8c7 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_0052f8cd:;
  /* 0052f8cd fidiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0052f8d0 mov eax, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); eax = (u32)(M32(m_)); }
  /* 0052f8d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052f8d5 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052f8d8 jle 0x52fa20 */ if ((ZF_|LT_)) goto L_0052fa20;
  /* 0052f8de xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052f8e0 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052f8e3 jmp 0x52f8f0 */ goto L_0052f8f0;
L_0052f8e5:;
  /* 0052f8e5 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0052f8e8 jmp 0x52f8f0 */ goto L_0052f8f0;
L_0052f8f0:;
  /* 0052f8f0 mov esi, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); esi = (u32)(M32(m_)); }
  /* 0052f8f3 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0052f8f6 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052f8f9 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052f8fb mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0052f900 lea edi, [ebp - 0x5c] */ edi = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0052f903 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052f905 mov ecx, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); ecx = (u32)(M32(m_)); }
  /* 0052f908 mov eax, dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); eax = (u32)(M32(m_)); }
  /* 0052f90b lea esi, [ebx + eax] */ esi = (u32)((u32)(ebx + eax));
  /* 0052f90e fld dword ptr [ecx + ebx + 4] */ { const u32 m_ = (u32)(ecx + ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0052f912 lea edi, [ecx + ebx] */ edi = (u32)((u32)(ecx + ebx));
  /* 0052f915 movzx ecx, byte ptr [esi + 0x3f] */ { const u32 m_ = (u32)(esi + 0x3fu); ecx = (u32)(M8(m_)); }
  /* 0052f919 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052f91c movzx edx, byte ptr [edi + 0x3f] */ { const u32 m_ = (u32)(edi + 0x3fu); edx = (u32)(M8(m_)); }
  /* 0052f920 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f923 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052f926 fadd dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052f929 fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052f92c fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052f92f fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052f932 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f935 fadd dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052f938 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052f93b fld dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0052f93e fsub dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052f941 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f944 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052f947 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052f94a fld dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0052f94d fsub dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052f950 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f953 fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052f956 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052f959 fld dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0052f95c fsub dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052f95f fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f962 fadd dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052f965 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052f968 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f96b mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 0052f96e fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f971 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0052f973 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f976 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0052f978 call 0x61b154 */ esp -= 4; M32(esp) = 0x52f97du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52f978u); RETCHK(0x52f97du, 0x52f978u); LOADALL;
  /* 0052f97d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052f97f movzx ecx, byte ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); ecx = (u32)(M8(m_)); }
  /* 0052f983 mov byte ptr [ebp - 0x1d], al */ { const u32 m_ = (u32)(ebp + 0xffffffe3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052f986 movzx eax, byte ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M8(m_)); }
  /* 0052f98a mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052f98d fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f990 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052f993 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f996 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0052f998 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f99b fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0052f99d call 0x61b154 */ esp -= 4; M32(esp) = 0x52f9a2u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52f99du); RETCHK(0x52f9a2u, 0x52f99du); LOADALL;
  /* 0052f9a2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052f9a4 movzx edx, byte ptr [esi + 0x3d] */ { const u32 m_ = (u32)(esi + 0x3du); edx = (u32)(M8(m_)); }
  /* 0052f9a8 mov byte ptr [ebp - 0x20], al */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052f9ab movzx eax, byte ptr [edi + 0x3d] */ { const u32 m_ = (u32)(edi + 0x3du); eax = (u32)(M8(m_)); }
  /* 0052f9af mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 0052f9b2 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f9b5 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052f9b8 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f9bb fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0052f9bd fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f9c0 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0052f9c2 call 0x61b154 */ esp -= 4; M32(esp) = 0x52f9c7u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52f9c2u); RETCHK(0x52f9c7u, 0x52f9c2u); LOADALL;
  /* 0052f9c7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052f9c9 movzx ecx, byte ptr [esi + 0x3e] */ { const u32 m_ = (u32)(esi + 0x3eu); ecx = (u32)(M8(m_)); }
  /* 0052f9cd movzx edx, byte ptr [edi + 0x3e] */ { const u32 m_ = (u32)(edi + 0x3eu); edx = (u32)(M8(m_)); }
  /* 0052f9d1 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052f9d4 mov byte ptr [ebp - 0x1f], al */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052f9d7 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f9da mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 0052f9dd fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0052f9e0 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0052f9e2 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052f9e5 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0052f9e7 call 0x61b154 */ esp -= 4; M32(esp) = 0x52f9ecu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x52f9e7u); RETCHK(0x52f9ecu, 0x52f9e7u); LOADALL;
  /* 0052f9ec fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052f9ee mov byte ptr [ebp - 0x1e], al */ { const u32 m_ = (u32)(ebp + 0xffffffe2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052f9f1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052f9f4 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052f9f7 mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 0052f9fc lea edi, [ebp - 0x50] */ edi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052f9ff rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052fa01 mov edi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); edi = (u32)(M32(m_)); }
  /* 0052fa04 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0052fa07 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052fa09 add ebx, 0x40 */ { u32 a_ = ebx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052fa0c mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0052fa11 lea esi, [ebp - 0x5c] */ esi = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0052fa14 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052fa15 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052fa17 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052fa1a jne 0x52f8e5 */ if (!ZF_) goto L_0052f8e5;
L_0052fa20:;
  /* 0052fa20 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052fa23 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052fa24 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052fa25 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052fa28 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052fa29 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052fa30 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052fa32 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052fa33 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052fa40(CPU *c) {
  NATIVE_HOOK(0x52fa40u) REGS; LOADALL;
L_0052fa40:;
  /* 0052fa40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052fa41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052fa43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052fa45 push 0x61c6ab */ { u32 v_ = 0x61c6abu; esp -= 4; M32(esp) = v_; }
  /* 0052fa4a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052fa50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fa51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052fa58 sub esp, 0x250 */ { u32 a_ = esp, b_ = 0x250u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fa5e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052fa63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052fa64 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0052fa66 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052fa67 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052fa69 lea edx, [ebp - 0x110] */ edx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0052fa6f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052fa72 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052fa74 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_0052fa76:;
  /* 0052fa76 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052fa78 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052fa7b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052fa7c test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052fa7e jne 0x52fa76 */ if (!ZF_) goto L_0052fa76;
  /* 0052fa80 lea eax, [ebp - 0x110] */ eax = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0052fa86 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0052fa89 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052fa90:;
  /* 0052fa90 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052fa92 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052fa93 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052fa95 jne 0x52fa90 */ if (!ZF_) goto L_0052fa90;
  /* 0052fa97 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052fa99 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052fa9a js 0x52faca */ if (SF_) goto L_0052faca;
  /* 0052fa9c mov cl, 0x2e */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x2eu) & 0xffu); }
  /* 0052fa9e mov edi, edi */ { edi = (u32)(edi); }
L_0052faa0:;
  /* 0052faa0 cmp byte ptr [ebp + eax - 0x110], cl */ { const u32 m_ = (u32)(ebp + eax + 0xfffffef0u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052faa7 je 0x52faae */ if (ZF_) goto L_0052faae;
  /* 0052faa9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052faaa jns 0x52faa0 */ if (!SF_) goto L_0052faa0;
  /* 0052faac jmp 0x52faca */ goto L_0052faca;
L_0052faae:;
  /* 0052faae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052fab0 jl 0x52faca */ if (LT_) goto L_0052faca;
  /* 0052fab2 mov cl, 0x5c */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x5cu) & 0xffu); }
L_0052fab4:;
  /* 0052fab4 cmp byte ptr [ebp + eax - 0x110], cl */ { const u32 m_ = (u32)(ebp + eax + 0xfffffef0u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052fabb je 0x52fac2 */ if (ZF_) goto L_0052fac2;
  /* 0052fabd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052fabe jns 0x52fab4 */ if (!SF_) goto L_0052fab4;
  /* 0052fac0 jmp 0x52faca */ goto L_0052faca;
L_0052fac2:;
  /* 0052fac2 mov byte ptr [ebp + eax - 0x10f], 0 */ { const u32 m_ = (u32)(ebp + eax + 0xfffffef1u); M8(m_) = (u8)(0x0u); }
L_0052faca:;
  /* 0052faca push 0x100000 */ { u32 v_ = 0x100000u; esp -= 4; M32(esp) = v_; }
  /* 0052facf push 0x696e50 */ { u32 v_ = 0x696e50u; esp -= 4; M32(esp) = v_; }
  /* 0052fad4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052fad6 call 0x52e1a0 */ esp -= 4; M32(esp) = 0x52fadbu; SAVEALL; F_0052e1a0(c); ABI_CHECK(0x52e1a0u, 0x52fad6u); RETCHK(0x52fadbu, 0x52fad6u); LOADALL;
  /* 0052fadb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fade test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052fae0 jne 0x52faf7 */ if (!ZF_) goto L_0052faf7;
  /* 0052fae2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fae3 push 0x653198 */ { u32 v_ = 0x653198u; esp -= 4; M32(esp) = v_; }
  /* 0052fae8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052fae9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052faea call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52faf0u; SAVEALL; call_ind(c, t_); RETCHK(0x52faf0u, 0x52faeau); LOADALL; }
  /* 0052faf0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052faf2 jmp 0x52fc13 */ goto L_0052fc13;
L_0052faf7:;
  /* 0052faf7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052faf8 lea eax, [ebp - 0x25c] */ eax = (u32)((u32)(ebp + 0xfffffda4u));
  /* 0052fafe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052faff call 0x5614b0 */ esp -= 4; M32(esp) = 0x52fb04u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x52faffu); RETCHK(0x52fb04u, 0x52faffu); LOADALL;
  /* 0052fb04 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052fb06 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052fb08 push 0x696e50 */ { u32 v_ = 0x696e50u; esp -= 4; M32(esp) = v_; }
  /* 0052fb0d lea ecx, [ebp - 0x25c] */ ecx = (u32)((u32)(ebp + 0xfffffda4u));
  /* 0052fb13 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052fb1a call 0x5628f0 */ esp -= 4; M32(esp) = 0x52fb1fu; SAVEALL; F_005628f0(c); ABI_CHECK(0x5628f0u, 0x52fb1au); RETCHK(0x52fb1fu, 0x52fb1au); LOADALL;
  /* 0052fb1f lea eax, [ebp - 0x25c] */ eax = (u32)((u32)(ebp + 0xfffffda4u));
  /* 0052fb25 call 0x560c60 */ esp -= 4; M32(esp) = 0x52fb2au; SAVEALL; F_00560c60(c); ABI_CHECK(0x560c60u, 0x52fb25u); RETCHK(0x52fb2au, 0x52fb25u); LOADALL;
  /* 0052fb2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fb2b call 0x52fc30 */ esp -= 4; M32(esp) = 0x52fb30u; SAVEALL; F_0052fc30(c); ABI_CHECK(0x52fc30u, 0x52fb2bu); RETCHK(0x52fb30u, 0x52fb2bu); LOADALL;
  /* 0052fb30 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052fb33 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052fb36 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052fb37 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52fb3cu; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52fb37u); RETCHK(0x52fb3cu, 0x52fb37u); LOADALL;
  /* 0052fb3c mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052fb3f shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052fb42 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0052fb44 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052fb46 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052fb49 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052fb4b mov dword ptr [ebx + 0x2c], edi */ { const u32 m_ = (u32)(ebx + 0x2cu); M32(m_) = (u32)(edi); }
  /* 0052fb4e rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0052fb50 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0052fb52 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052fb55 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 0052fb57 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052fb5a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fb5d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052fb5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052fb61 mov dword ptr [ebx + 0x30], eax */ { const u32 m_ = (u32)(ebx + 0x30u); M32(m_) = (u32)(eax); }
  /* 0052fb64 jbe 0x52fbb6 */ if ((CF_|ZF_)) goto L_0052fbb6;
  /* 0052fb66 call 0x52e190 */ esp -= 4; M32(esp) = 0x52fb6bu; SAVEALL; F_0052e190(c); ABI_CHECK(0x52e190u, 0x52fb66u); RETCHK(0x52fb6bu, 0x52fb66u); LOADALL;
  /* 0052fb6b mov dword ptr [ebp - 0x214], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(eax); }
  /* 0052fb71 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0052fb73:;
  /* 0052fb73 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052fb75 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052fb77 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fb78 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0052fb7e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052fb7f lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 0052fb85 push 0x649280 */ { u32 v_ = 0x649280u; esp -= 4; M32(esp) = v_; }
  /* 0052fb8a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052fb8b call 0x5fe9aa */ esp -= 4; M32(esp) = 0x52fb90u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x52fb8bu); RETCHK(0x52fb90u, 0x52fb8bu); LOADALL;
  /* 0052fb90 mov ecx, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); ecx = (u32)(M32(m_)); }
  /* 0052fb96 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052fb98 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fb9b lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 0052fba1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052fba2 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52fba5u; SAVEALL; call_ind(c, t_); RETCHK(0x52fba5u, 0x52fba2u); LOADALL; }
  /* 0052fba5 mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0052fba8 mov dword ptr [ecx + edi*4], eax */ { const u32 m_ = (u32)(ecx + edi * 4u); M32(m_) = (u32)(eax); }
  /* 0052fbab mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052fbae inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052fbaf add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052fbb2 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fbb4 jb 0x52fb73 */ if (CF_) goto L_0052fb73;
L_0052fbb6:;
  /* 0052fbb6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052fbb9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0052fbbb call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52fbbdu; SAVEALL; call_ind(c, t_); RETCHK(0x52fbbdu, 0x52fbbbu); LOADALL; }
  /* 0052fbbd mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0052fbc0 mov edx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052fbc3 mov dword ptr [ebx + 0xa4], eax */ { const u32 m_ = (u32)(ebx + 0xa4u); M32(m_) = (u32)(eax); }
  /* 0052fbc9 mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0052fbcc mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0052fbd3 mov dword ptr [ebx + 0xa8], eax */ { const u32 m_ = (u32)(ebx + 0xa8u); M32(m_) = (u32)(eax); }
  /* 0052fbd9 mov eax, dword ptr [ebp - 0x228] */ { const u32 m_ = (u32)(ebp + 0xfffffdd8u); eax = (u32)(M32(m_)); }
  /* 0052fbdf cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fbe4 mov dword ptr [ebx + 0xb8], ecx */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(ecx); }
  /* 0052fbea mov dword ptr [ebx + 0xb4], edx */ { const u32 m_ = (u32)(ebx + 0xb4u); M32(m_) = (u32)(edx); }
  /* 0052fbf0 mov dword ptr [ebp - 0x25c], 0x643d40 */ { const u32 m_ = (u32)(ebp + 0xfffffda4u); M32(m_) = (u32)(0x643d40u); }
  /* 0052fbfa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052fbfb je 0x52fc06 */ if (ZF_) goto L_0052fc06;
  /* 0052fbfd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fbfe call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x52fc03u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x52fbfeu); RETCHK(0x52fc03u, 0x52fbfeu); LOADALL;
  /* 0052fc03 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052fc06:;
  /* 0052fc06 lea ecx, [ebp - 0x25c] */ ecx = (u32)((u32)(ebp + 0xfffffda4u));
  /* 0052fc0c call 0x560aa0 */ esp -= 4; M32(esp) = 0x52fc11u; SAVEALL; F_00560aa0(c); ABI_CHECK(0x560aa0u, 0x52fc0cu); RETCHK(0x52fc11u, 0x52fc0cu); LOADALL;
  /* 0052fc11 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_0052fc13:;
  /* 0052fc13 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052fc16 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052fc17 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052fc1e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052fc21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052fc22 call 0x61af31 */ esp -= 4; M32(esp) = 0x52fc27u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52fc22u); RETCHK(0x52fc27u, 0x52fc22u); LOADALL;
  /* 0052fc27 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052fc29 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052fc2a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052fc30(CPU *c) {
  NATIVE_HOOK(0x52fc30u) REGS; LOADALL;
L_0052fc30:;
  /* 0052fc30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052fc31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052fc33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052fc35 push 0x61ba06 */ { u32 v_ = 0x61ba06u; esp -= 4; M32(esp) = v_; }
  /* 0052fc3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052fc40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fc41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052fc48 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fc4b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052fc4e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052fc4f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052fc50 mov eax, 0x65318c */ { eax = (u32)(0x65318cu); }
  /* 0052fc55 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52fc5au; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52fc55u); RETCHK(0x52fc5au, 0x52fc55u); LOADALL;
  /* 0052fc5a mov edi, eax */ { edi = (u32)(eax); }
  /* 0052fc5c mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0052fc5e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052fc60 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52fc63u; SAVEALL; call_ind(c, t_); RETCHK(0x52fc63u, 0x52fc60u); LOADALL; }
  /* 0052fc63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fc64 mov eax, 0x653188 */ { eax = (u32)(0x653188u); }
  /* 0052fc69 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52fc6eu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52fc69u); RETCHK(0x52fc6eu, 0x52fc69u); LOADALL;
  /* 0052fc6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fc6f call 0x5fe92e */ esp -= 4; M32(esp) = 0x52fc74u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52fc6fu); RETCHK(0x52fc74u, 0x52fc6fu); LOADALL;
  /* 0052fc74 mov edi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edi = (u32)(M32(m_)); }
  /* 0052fc77 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052fc79 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 0052fc7c shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052fc7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052fc80 mov dword ptr [ebx + 4], esi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(esi); }
  /* 0052fc83 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52fc88u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52fc83u); RETCHK(0x52fc88u, 0x52fc83u); LOADALL;
  /* 0052fc88 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fc8b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052fc8d mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 0052fc8f jle 0x52fcb3 */ if ((ZF_|LT_)) goto L_0052fcb3;
  /* 0052fc91 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
L_0052fc98:;
  /* 0052fc98 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052fc9a add eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052fc9d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052fc9f call 0x52f0f0 */ esp -= 4; M32(esp) = 0x52fca4u; SAVEALL; F_0052f0f0(c); ABI_CHECK(0x52f0f0u, 0x52fc9fu); RETCHK(0x52fca4u, 0x52fc9fu); LOADALL;
  /* 0052fca4 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052fca7 mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 0052fcaa add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052fcad dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052fcae mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052fcb1 jne 0x52fc98 */ if (!ZF_) goto L_0052fc98;
L_0052fcb3:;
  /* 0052fcb3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052fcb6 mov eax, 0x65317c */ { eax = (u32)(0x65317cu); }
  /* 0052fcbb call 0x560ba0 */ esp -= 4; M32(esp) = 0x52fcc0u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52fcbbu); RETCHK(0x52fcc0u, 0x52fcbbu); LOADALL;
  /* 0052fcc0 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052fcc2 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052fcc4 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fcc6 je 0x52fd22 */ if (ZF_) goto L_0052fd22;
  /* 0052fcc8 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0052fcca mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052fccc call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52fccfu; SAVEALL; call_ind(c, t_); RETCHK(0x52fccfu, 0x52fcccu); LOADALL; }
  /* 0052fccf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fcd0 mov eax, 0x653188 */ { eax = (u32)(0x653188u); }
  /* 0052fcd5 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52fcdau; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52fcd5u); RETCHK(0x52fcdau, 0x52fcd5u); LOADALL;
  /* 0052fcda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fcdb call 0x5fe92e */ esp -= 4; M32(esp) = 0x52fce0u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52fcdbu); RETCHK(0x52fce0u, 0x52fcdbu); LOADALL;
  /* 0052fce0 mov esi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); esi = (u32)(M32(m_)); }
  /* 0052fce3 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052fce6 shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052fce9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fcea call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52fcefu; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52fceau); RETCHK(0x52fcefu, 0x52fceau); LOADALL;
  /* 0052fcef mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052fcf2 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052fcf5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fcf8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fcfa jbe 0x52fd22 */ if ((CF_|ZF_)) goto L_0052fd22;
  /* 0052fcfc mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0052fcff nop */ ;
L_0052fd00:;
  /* 0052fd00 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052fd03 add eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052fd06 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fd07 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052fd09 call 0x52f150 */ esp -= 4; M32(esp) = 0x52fd0eu; SAVEALL; F_0052f150(c); ABI_CHECK(0x52f150u, 0x52fd09u); RETCHK(0x52fd0eu, 0x52fd09u); LOADALL;
  /* 0052fd0e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052fd11 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052fd14 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0052fd17 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052fd18 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052fd1b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fd1d mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052fd20 jb 0x52fd00 */ if (CF_) goto L_0052fd00;
L_0052fd22:;
  /* 0052fd22 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052fd25 mov eax, 0x6531f0 */ { eax = (u32)(0x6531f0u); }
  /* 0052fd2a call 0x560ba0 */ esp -= 4; M32(esp) = 0x52fd2fu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52fd2au); RETCHK(0x52fd2fu, 0x52fd2au); LOADALL;
  /* 0052fd2f mov esi, eax */ { esi = (u32)(eax); }
  /* 0052fd31 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0052fd33 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052fd35 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52fd38u; SAVEALL; call_ind(c, t_); RETCHK(0x52fd38u, 0x52fd35u); LOADALL; }
  /* 0052fd38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fd39 mov eax, 0x653188 */ { eax = (u32)(0x653188u); }
  /* 0052fd3e call 0x560ed0 */ esp -= 4; M32(esp) = 0x52fd43u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52fd3eu); RETCHK(0x52fd43u, 0x52fd3eu); LOADALL;
  /* 0052fd43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fd44 call 0x5fe92e */ esp -= 4; M32(esp) = 0x52fd49u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52fd44u); RETCHK(0x52fd49u, 0x52fd44u); LOADALL;
  /* 0052fd49 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052fd4b mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0052fd4e lea ecx, [edi + edi*2] */ ecx = (u32)((u32)(edi + edi * 2u));
  /* 0052fd51 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052fd54 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052fd55 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0052fd58 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52fd5du; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52fd58u); RETCHK(0x52fd5du, 0x52fd58u); LOADALL;
  /* 0052fd5d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052fd5f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fd62 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fd64 je 0x52fd7f */ if (ZF_) goto L_0052fd7f;
  /* 0052fd66 lea edx, [edi - 1] */ edx = (u32)((u32)(edi + 0xffffffffu));
  /* 0052fd69 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fd6b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052fd6d jl 0x52fd81 */ if (LT_) goto L_0052fd81;
  /* 0052fd6f inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0052fd70:;
  /* 0052fd70 mov word ptr [ecx], si */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 0052fd73 mov word ptr [ecx + 2], si */ { const u32 m_ = (u32)(ecx + 0x2u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 0052fd77 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052fd7a dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052fd7b jne 0x52fd70 */ if (!ZF_) goto L_0052fd70;
  /* 0052fd7d jmp 0x52fd81 */ goto L_0052fd81;
L_0052fd7f:;
  /* 0052fd7f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0052fd81:;
  /* 0052fd81 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fd83 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 0052fd86 jle 0x52fdba */ if ((ZF_|LT_)) goto L_0052fdba;
  /* 0052fd88 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0052fd8b mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0052fd8e mov edi, edi */ { edi = (u32)(edi); }
L_0052fd90:;
  /* 0052fd90 mov esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); esi = (u32)(M32(m_)); }
  /* 0052fd93 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0052fd96 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 0052fd99 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052fd9b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052fd9d call 0x52e480 */ esp -= 4; M32(esp) = 0x52fda2u; SAVEALL; F_0052e480(c); ABI_CHECK(0x52e480u, 0x52fd9du); RETCHK(0x52fda2u, 0x52fd9du); LOADALL;
  /* 0052fda2 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052fda5 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0052fda8 mov edx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 0052fdab add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052fdae dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052fdaf mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0052fdb2 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052fdb5 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052fdb8 jne 0x52fd90 */ if (!ZF_) goto L_0052fd90;
L_0052fdba:;
  /* 0052fdba mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052fdbd mov eax, 0x653170 */ { eax = (u32)(0x653170u); }
  /* 0052fdc2 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52fdc7u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52fdc2u); RETCHK(0x52fdc7u, 0x52fdc2u); LOADALL;
  /* 0052fdc7 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052fdc9 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052fdcb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052fdcd call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52fdd0u; SAVEALL; call_ind(c, t_); RETCHK(0x52fdd0u, 0x52fdcdu); LOADALL; }
  /* 0052fdd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fdd1 mov eax, 0x653188 */ { eax = (u32)(0x653188u); }
  /* 0052fdd6 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52fddbu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52fdd6u); RETCHK(0x52fddbu, 0x52fdd6u); LOADALL;
  /* 0052fddb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fddc call 0x5fe92e */ esp -= 4; M32(esp) = 0x52fde1u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52fddcu); RETCHK(0x52fde1u, 0x52fddcu); LOADALL;
  /* 0052fde1 mov esi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); esi = (u32)(M32(m_)); }
  /* 0052fde4 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052fde6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052fde8 imul ecx, ecx, 0x6c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052fdeb add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052fdee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052fdef mov dword ptr [ebx + 0x1c], edi */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(edi); }
  /* 0052fdf2 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52fdf7u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52fdf2u); RETCHK(0x52fdf7u, 0x52fdf2u); LOADALL;
  /* 0052fdf7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fdfa mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0052fdfd xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052fdff cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fe01 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0052fe04 je 0x52fe28 */ if (ZF_) goto L_0052fe28;
  /* 0052fe06 push 0x52e590 */ { u32 v_ = 0x52e590u; esp -= 4; M32(esp) = v_; }
  /* 0052fe0b push 0x52e530 */ { u32 v_ = 0x52e530u; esp -= 4; M32(esp) = v_; }
  /* 0052fe10 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052fe11 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0052fe13 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052fe16 push 0x6c */ { u32 v_ = 0x6cu; esp -= 4; M32(esp) = v_; }
  /* 0052fe18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fe19 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052fe1c call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x52fe21u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x52fe1cu); RETCHK(0x52fe21u, 0x52fe1cu); LOADALL;
  /* 0052fe21 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0052fe24 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052fe26 jmp 0x52fe2a */ goto L_0052fe2a;
L_0052fe28:;
  /* 0052fe28 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0052fe2a:;
  /* 0052fe2a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0052fe31 mov dword ptr [ebx + 0x18], eax */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(eax); }
  /* 0052fe34 cmp dword ptr [ebx + 0x1c], ecx */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fe37 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0052fe3a jle 0x52fe68 */ if ((ZF_|LT_)) goto L_0052fe68;
  /* 0052fe3c mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052fe3f nop */ ;
L_0052fe40:;
  /* 0052fe40 mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 0052fe43 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0052fe46 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052fe47 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052fe49 call 0x52ec40 */ esp -= 4; M32(esp) = 0x52fe4eu; SAVEALL; F_0052ec40(c); ABI_CHECK(0x52ec40u, 0x52fe49u); RETCHK(0x52fe4eu, 0x52fe49u); LOADALL;
  /* 0052fe4e mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0052fe51 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0052fe54 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0052fe57 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0052fe5a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052fe5b add edx, 0x6c */ { u32 a_ = edx, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052fe5e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052fe60 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052fe63 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 0052fe66 jl 0x52fe40 */ if (LT_) goto L_0052fe40;
L_0052fe68:;
  /* 0052fe68 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052fe6b mov eax, 0x653164 */ { eax = (u32)(0x653164u); }
  /* 0052fe70 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52fe75u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52fe70u); RETCHK(0x52fe75u, 0x52fe70u); LOADALL;
  /* 0052fe75 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052fe77 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0052fe79 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052fe7b call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52fe7eu; SAVEALL; call_ind(c, t_); RETCHK(0x52fe7eu, 0x52fe7bu); LOADALL; }
  /* 0052fe7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fe7f mov eax, 0x653188 */ { eax = (u32)(0x653188u); }
  /* 0052fe84 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52fe89u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52fe84u); RETCHK(0x52fe89u, 0x52fe84u); LOADALL;
  /* 0052fe89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fe8a call 0x5fe92e */ esp -= 4; M32(esp) = 0x52fe8fu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52fe8au); RETCHK(0x52fe8fu, 0x52fe8au); LOADALL;
  /* 0052fe8f mov edi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edi = (u32)(M32(m_)); }
  /* 0052fe92 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052fe94 lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 0052fe97 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052fe9a add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052fe9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052fe9e mov dword ptr [ebx + 0x24], esi */ { const u32 m_ = (u32)(ebx + 0x24u); M32(m_) = (u32)(esi); }
  /* 0052fea1 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52fea6u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52fea1u); RETCHK(0x52fea6u, 0x52fea1u); LOADALL;
  /* 0052fea6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052fea9 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052feac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052feae mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0052feb5 je 0x52fed7 */ if (ZF_) goto L_0052fed7;
  /* 0052feb7 push 0x52ee30 */ { u32 v_ = 0x52ee30u; esp -= 4; M32(esp) = v_; }
  /* 0052febc push 0x52ee20 */ { u32 v_ = 0x52ee20u; esp -= 4; M32(esp) = v_; }
  /* 0052fec1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052fec2 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0052fec4 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052fec7 push 0x50 */ { u32 v_ = 0x50u; esp -= 4; M32(esp) = v_; }
  /* 0052fec9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052feca mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052fecd call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x52fed2u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x52fecdu); RETCHK(0x52fed2u, 0x52fecdu); LOADALL;
  /* 0052fed2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052fed5 jmp 0x52fed9 */ goto L_0052fed9;
L_0052fed7:;
  /* 0052fed7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0052fed9:;
  /* 0052fed9 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0052fee0 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0052fee3 mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 0052fee6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052fee8 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052feea mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052feed jle 0x52ff1a */ if ((ZF_|LT_)) goto L_0052ff1a;
  /* 0052feef mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
L_0052fef2:;
  /* 0052fef2 mov esi, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); esi = (u32)(M32(m_)); }
  /* 0052fef5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052fef8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052fef9 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052fefb call 0x52efc0 */ esp -= 4; M32(esp) = 0x52ff00u; SAVEALL; F_0052efc0(c); ABI_CHECK(0x52efc0u, 0x52fefbu); RETCHK(0x52ff00u, 0x52fefbu); LOADALL;
  /* 0052ff00 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0052ff03 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052ff06 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0052ff09 mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 0052ff0c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052ff0d add edx, 0x50 */ { u32 a_ = edx, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052ff10 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ff12 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0052ff15 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052ff18 jl 0x52fef2 */ if (LT_) goto L_0052fef2;
L_0052ff1a:;
  /* 0052ff1a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052ff1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ff1e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ff1f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052ff26 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ff28 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ff29 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052ff30(CPU *c) {
  NATIVE_HOOK(0x52ff30u) REGS; LOADALL;
L_0052ff30:;
  /* 0052ff30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ff31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ff33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ff34 push 0xbc */ { u32 v_ = 0xbcu; esp -= 4; M32(esp) = v_; }
  /* 0052ff39 call 0x5fe934 */ esp -= 4; M32(esp) = 0x52ff3eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52ff39u); RETCHK(0x52ff3eu, 0x52ff39u); LOADALL;
  /* 0052ff3e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ff41 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ff43 je 0x52ff50 */ if (ZF_) goto L_0052ff50;
  /* 0052ff45 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052ff47 call 0x52f570 */ esp -= 4; M32(esp) = 0x52ff4cu; SAVEALL; F_0052f570(c); ABI_CHECK(0x52f570u, 0x52ff47u); RETCHK(0x52ff4cu, 0x52ff47u); LOADALL;
  /* 0052ff4c mov esi, eax */ { esi = (u32)(eax); }
  /* 0052ff4e jmp 0x52ff52 */ goto L_0052ff52;
L_0052ff50:;
  /* 0052ff50 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0052ff52:;
  /* 0052ff52 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ff54 call 0x52f590 */ esp -= 4; M32(esp) = 0x52ff59u; SAVEALL; F_0052f590(c); ABI_CHECK(0x52f590u, 0x52ff54u); RETCHK(0x52ff59u, 0x52ff54u); LOADALL;
  /* 0052ff59 call 0x52e190 */ esp -= 4; M32(esp) = 0x52ff5eu; SAVEALL; F_0052e190(c); ABI_CHECK(0x52e190u, 0x52ff59u); RETCHK(0x52ff5eu, 0x52ff59u); LOADALL;
  /* 0052ff5e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ff61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ff62 mov edx, esi */ { edx = (u32)(esi); }
  /* 0052ff64 call 0x52fa40 */ esp -= 4; M32(esp) = 0x52ff69u; SAVEALL; F_0052fa40(c); ABI_CHECK(0x52fa40u, 0x52ff64u); RETCHK(0x52ff69u, 0x52ff64u); LOADALL;
  /* 0052ff69 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ff6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ff6c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ff6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ff70(CPU *c) {
  NATIVE_HOOK(0x52ff70u) REGS; LOADALL;
L_0052ff70:;
  /* 0052ff70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ff71 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052ff73 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ff75 je 0x52ff7c */ if (ZF_) goto L_0052ff7c;
  /* 0052ff77 call 0x52f5a0 */ esp -= 4; M32(esp) = 0x52ff7cu; SAVEALL; F_0052f5a0(c); ABI_CHECK(0x52f5a0u, 0x52ff77u); RETCHK(0x52ff7cu, 0x52ff77u); LOADALL;
L_0052ff7c:;
  /* 0052ff7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ff7d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ff80(CPU *c) {
  NATIVE_HOOK(0x52ff80u) REGS; LOADALL;
L_0052ff80:;
  /* 0052ff80 mov eax, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); eax = (u32)(M32(m_)); }
  /* 0052ff83 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ff90(CPU *c) {
  NATIVE_HOOK(0x52ff90u) REGS; LOADALL;
L_0052ff90:;
  /* 0052ff90 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 0052ff93 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 0052ff96 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052ff99 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052ff9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ffa0(CPU *c) {
  NATIVE_HOOK(0x52ffa0u) REGS; LOADALL;
L_0052ffa0:;
  /* 0052ffa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ffa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ffa3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ffa4 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 0052ffa6 call 0x5fe934 */ esp -= 4; M32(esp) = 0x52ffabu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52ffa6u); RETCHK(0x52ffabu, 0x52ffa6u); LOADALL;
  /* 0052ffab add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ffae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ffb0 je 0x52ffcc */ if (ZF_) goto L_0052ffcc;
  /* 0052ffb2 call 0x52f180 */ esp -= 4; M32(esp) = 0x52ffb7u; SAVEALL; F_0052f180(c); ABI_CHECK(0x52f180u, 0x52ffb2u); RETCHK(0x52ffb7u, 0x52ffb2u); LOADALL;
  /* 0052ffb7 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ffba mov esi, eax */ { esi = (u32)(eax); }
  /* 0052ffbc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052ffbf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ffc0 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ffc2 call 0x52f220 */ esp -= 4; M32(esp) = 0x52ffc7u; SAVEALL; F_0052f220(c); ABI_CHECK(0x52f220u, 0x52ffc2u); RETCHK(0x52ffc7u, 0x52ffc2u); LOADALL;
  /* 0052ffc7 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ffc9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ffca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ffcb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052ffcc:;
  /* 0052ffcc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052ffcf mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ffd2 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052ffd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ffd5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ffd7 call 0x52f220 */ esp -= 4; M32(esp) = 0x52ffdcu; SAVEALL; F_0052f220(c); ABI_CHECK(0x52f220u, 0x52ffd7u); RETCHK(0x52ffdcu, 0x52ffd7u); LOADALL;
  /* 0052ffdc mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ffde pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ffdf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ffe0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052fff0(CPU *c) {
  NATIVE_HOOK(0x52fff0u) REGS; LOADALL;
L_0052fff0:;
  /* 0052fff0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052fff1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052fff3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052fff5 je 0x52fffc */ if (ZF_) goto L_0052fffc;
  /* 0052fff7 call 0x52f290 */ esp -= 4; M32(esp) = 0x52fffcu; SAVEALL; F_0052f290(c); ABI_CHECK(0x52f290u, 0x52fff7u); RETCHK(0x52fffcu, 0x52fff7u); LOADALL;
L_0052fffc:;
  /* 0052fffc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052fffd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530000(CPU *c) {
  NATIVE_HOOK(0x530000u) REGS; LOADALL;
L_00530000:;
  /* 00530000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530003 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00530006 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530007 call 0x52f2c0 */ esp -= 4; M32(esp) = 0x53000cu; SAVEALL; F_0052f2c0(c); ABI_CHECK(0x52f2c0u, 0x530007u); RETCHK(0x53000cu, 0x530007u); LOADALL;
  /* 0053000c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053000d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530001(CPU *c) {
  NATIVE_HOOK(0x530001u) REGS; LOADALL;
L_00530001:;
  /* 00530001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530003 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00530006 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530007 call 0x52f2c0 */ esp -= 4; M32(esp) = 0x53000cu; SAVEALL; F_0052f2c0(c); ABI_CHECK(0x52f2c0u, 0x530007u); RETCHK(0x53000cu, 0x530007u); LOADALL;
  /* 0053000c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053000d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530010(CPU *c) {
  NATIVE_HOOK(0x530010u) REGS; LOADALL;
L_00530010:;
  /* 00530010 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00530011 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00530013 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530015 je 0x53001c */ if (ZF_) goto L_0053001c;
  /* 00530017 call 0x52f3b0 */ esp -= 4; M32(esp) = 0x53001cu; SAVEALL; F_0052f3b0(c); ABI_CHECK(0x52f3b0u, 0x530017u); RETCHK(0x53001cu, 0x530017u); LOADALL;
L_0053001c:;
  /* 0053001c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053001d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530011(CPU *c) {
  NATIVE_HOOK(0x530011u) REGS; LOADALL;
L_00530011:;
  /* 00530011 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00530013 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530015 je 0x53001c */ if (ZF_) goto L_0053001c;
  /* 00530017 call 0x52f3b0 */ esp -= 4; M32(esp) = 0x53001cu; SAVEALL; F_0052f3b0(c); ABI_CHECK(0x52f3b0u, 0x530017u); RETCHK(0x53001cu, 0x530017u); LOADALL;
L_0053001c:;
  /* 0053001c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053001d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530013(CPU *c) {
  NATIVE_HOOK(0x530013u) REGS; LOADALL;
L_00530013:;
  /* 00530013 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530015 je 0x53001c */ if (ZF_) goto L_0053001c;
  /* 00530017 call 0x52f3b0 */ esp -= 4; M32(esp) = 0x53001cu; SAVEALL; F_0052f3b0(c); ABI_CHECK(0x52f3b0u, 0x530017u); RETCHK(0x53001cu, 0x530017u); LOADALL;
L_0053001c:;
  /* 0053001c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053001d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530020(CPU *c) {
  NATIVE_HOOK(0x530020u) REGS; LOADALL;
L_00530020:;
  /* 00530020 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530022 jne 0x530025 */ if (!ZF_) goto L_00530025;
  /* 00530024 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00530025:;
  /* 00530025 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 00530028 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530021(CPU *c) {
  NATIVE_HOOK(0x530021u) REGS; LOADALL;
L_00530021:;
  /* 00530021 sal byte ptr [ebp + 1], 0xc3 */ { const u32 m_ = (u32)(ebp + 0x1u); u32 n_ = (195u) & 31u; if (n_) { u32 a_ = M8(m_); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); M8(m_) = (u8)(r_); } }
  /* 00530025 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 00530028 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530030(CPU *c) {
  NATIVE_HOOK(0x530030u) REGS; LOADALL;
L_00530030:;
  /* 00530030 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530031 mov esi, edx */ { esi = (u32)(edx); }
  /* 00530033 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530035 je 0x53003e */ if (ZF_) goto L_0053003e;
  /* 00530037 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530038 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530039 call 0x52f330 */ esp -= 4; M32(esp) = 0x53003eu; SAVEALL; F_0052f330(c); ABI_CHECK(0x52f330u, 0x530039u); RETCHK(0x53003eu, 0x530039u); LOADALL;
L_0053003e:;
  /* 0053003e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053003f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530050(CPU *c) {
  NATIVE_HOOK(0x530050u) REGS; LOADALL;
L_00530050:;
  /* 00530050 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530051 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530053 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530055 je 0x530063 */ if (ZF_) goto L_00530063;
  /* 00530057 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053005a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0053005d mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00530060 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
L_00530063:;
  /* 00530063 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530064 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530053(CPU *c) {
  NATIVE_HOOK(0x530053u) REGS; LOADALL;
L_00530053:;
  /* 00530053 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530055 je 0x530063 */ if (ZF_) goto L_00530063;
  /* 00530057 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053005a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0053005d mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00530060 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
L_00530063:;
  /* 00530063 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530064 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530070(CPU *c) {
  NATIVE_HOOK(0x530070u) REGS; LOADALL;
L_00530070:;
  /* 00530070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530073 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530075 je 0x530083 */ if (ZF_) goto L_00530083;
  /* 00530077 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053007a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0053007d mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00530080 mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
L_00530083:;
  /* 00530083 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530084 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530090(CPU *c) {
  NATIVE_HOOK(0x530090u) REGS; LOADALL;
L_00530090:;
  /* 00530090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530093 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530095 je 0x53009d */ if (ZF_) goto L_0053009d;
  /* 00530097 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053009a mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
L_0053009d:;
  /* 0053009d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053009e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005300b0(CPU *c) {
  NATIVE_HOOK(0x5300b0u) REGS; LOADALL;
L_005300b0:;
  /* 005300b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005300b1 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 005300b3 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 005300b5 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005300b8 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005300bb mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 005300be mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 005300c1 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005300c4 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 005300c7 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 005300c9 mov edx, eax */ { edx = (u32)(eax); }
  /* 005300cb mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005300cd mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005300d0 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005300d3 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 005300d6 mov dword ptr [edx + 8], esi */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(esi); }
  /* 005300d9 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005300dc mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005300df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005300e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005300f0(CPU *c) {
  NATIVE_HOOK(0x5300f0u) REGS; LOADALL;
L_005300f0:;
  /* 005300f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005300f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005300f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005300f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005300f5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005300f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005300f9 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005300fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005300fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005300fe mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00530105 call 0x5fef9c */ esp -= 4; M32(esp) = 0x53010au; SAVEALL; F_005fef9c(c); ABI_CHECK(0x5fef9cu, 0x530105u); RETCHK(0x53010au, 0x530105u); LOADALL;
  /* 0053010a mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0053010d lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 00530110 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530111 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530112 call 0x5fefa2 */ esp -= 4; M32(esp) = 0x530117u; SAVEALL; F_005fefa2(c); ABI_CHECK(0x5fefa2u, 0x530112u); RETCHK(0x530117u, 0x530112u); LOADALL;
  /* 00530117 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053011a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053011c jne 0x530129 */ if (!ZF_) goto L_00530129;
  /* 0053011e mov dword ptr [edi*4 + 0x796f88], 0 */ { const u32 m_ = (u32)(edi * 4u + 0x796f88u); M32(m_) = (u32)(0x0u); }
L_00530129:;
  /* 00530129 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053012a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053012c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053012d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053012f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530130 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00530140(CPU *c) {
  NATIVE_HOOK(0x530140u) REGS; LOADALL;
L_00530140:;
  /* 00530140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530143 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530144 push 0x7a6d98 */ { u32 v_ = 0x7a6d98u; esp -= 4; M32(esp) = v_; }
  /* 00530149 call 0x5fef96 */ esp -= 4; M32(esp) = 0x53014eu; SAVEALL; F_005fef96(c); ABI_CHECK(0x5fef96u, 0x530149u); RETCHK(0x53014eu, 0x530149u); LOADALL;
  /* 0053014e mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 00530153 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530155 jne 0x530160 */ if (!ZF_) goto L_00530160;
  /* 00530157 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0053015c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053015e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053015f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00530160:;
  /* 00530160 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530161 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00530164 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530165 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530166 call 0x5fefa8 */ esp -= 4; M32(esp) = 0x53016bu; SAVEALL; F_005fefa8(c); ABI_CHECK(0x5fefa8u, 0x530166u); RETCHK(0x53016bu, 0x530166u); LOADALL;
  /* 0053016b mov edx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); edx = (u32)(M32(m_)); }
  /* 00530171 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530173 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530175 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00530177 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530178 call 0x9c1810 */ esp -= 4; M32(esp) = 0x53017du; SAVEALL; F_009c1810(c); ABI_CHECK(0x9c1810u, 0x530178u); RETCHK(0x53017du, 0x530178u); LOADALL;
  /* 0053017d mov esi, eax */ { esi = (u32)(eax); }
  /* 0053017f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00530181 mov dword ptr [0x796f88], eax */ { const u32 m_ = (u32)(0x796f88u); M32(m_) = (u32)(eax); }
  /* 00530186 mov dword ptr [0x796f8c], eax */ { const u32 m_ = (u32)(0x796f8cu); M32(m_) = (u32)(eax); }
  /* 0053018b mov dword ptr [0x796f90], eax */ { const u32 m_ = (u32)(0x796f90u); M32(m_) = (u32)(eax); }
  /* 00530190 mov ecx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); ecx = (u32)(M32(m_)); }
  /* 00530196 mov dword ptr [0x796f94], eax */ { const u32 m_ = (u32)(0x796f94u); M32(m_) = (u32)(eax); }
  /* 0053019b mov dword ptr [0x796f98], eax */ { const u32 m_ = (u32)(0x796f98u); M32(m_) = (u32)(eax); }
  /* 005301a0 mov dword ptr [0x796f9c], eax */ { const u32 m_ = (u32)(0x796f9cu); M32(m_) = (u32)(eax); }
  /* 005301a5 mov dword ptr [0x796fa0], eax */ { const u32 m_ = (u32)(0x796fa0u); M32(m_) = (u32)(eax); }
  /* 005301aa mov dword ptr [0x796fa4], eax */ { const u32 m_ = (u32)(0x796fa4u); M32(m_) = (u32)(eax); }
  /* 005301af mov dword ptr [0x796fa8], eax */ { const u32 m_ = (u32)(0x796fa8u); M32(m_) = (u32)(eax); }
  /* 005301b4 mov dword ptr [0x796fac], eax */ { const u32 m_ = (u32)(0x796facu); M32(m_) = (u32)(eax); }
  /* 005301b9 mov dword ptr [0x796fb0], eax */ { const u32 m_ = (u32)(0x796fb0u); M32(m_) = (u32)(eax); }
  /* 005301be mov dword ptr [0x796fb4], eax */ { const u32 m_ = (u32)(0x796fb4u); M32(m_) = (u32)(eax); }
  /* 005301c3 mov dword ptr [0x796fb8], eax */ { const u32 m_ = (u32)(0x796fb8u); M32(m_) = (u32)(eax); }
  /* 005301c8 mov dword ptr [0x796fbc], eax */ { const u32 m_ = (u32)(0x796fbcu); M32(m_) = (u32)(eax); }
  /* 005301cd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005301cf mov dword ptr [0x796fc0], eax */ { const u32 m_ = (u32)(0x796fc0u); M32(m_) = (u32)(eax); }
  /* 005301d4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005301d5 mov dword ptr [0x796fc4], eax */ { const u32 m_ = (u32)(0x796fc4u); M32(m_) = (u32)(eax); }
  /* 005301da call 0x5fefb4 */ esp -= 4; M32(esp) = 0x5301dfu; SAVEALL; F_005fefb4(c); ABI_CHECK(0x5fefb4u, 0x5301dau); RETCHK(0x5301dfu, 0x5301dau); LOADALL;
  /* 005301df mov edx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); edx = (u32)(M32(m_)); }
  /* 005301e5 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 005301ea push 0x41200000 */ { u32 v_ = 0x41200000u; esp -= 4; M32(esp) = v_; }
  /* 005301ef push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 005301f4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005301f5 call 0x5fefba */ esp -= 4; M32(esp) = 0x5301fau; SAVEALL; F_005fefba(c); ABI_CHECK(0x5fefbau, 0x5301f5u); RETCHK(0x5301fau, 0x5301f5u); LOADALL;
  /* 005301fa call 0x5302e0 */ esp -= 4; M32(esp) = 0x5301ffu; SAVEALL; F_005302e0(c); ABI_CHECK(0x5302e0u, 0x5301fau); RETCHK(0x5301ffu, 0x5301fau); LOADALL;
  /* 005301ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530201 call 0x530580 */ esp -= 4; M32(esp) = 0x530206u; SAVEALL; F_00530580(c); ABI_CHECK(0x530580u, 0x530201u); RETCHK(0x530206u, 0x530201u); LOADALL;
  /* 00530206 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530209 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053020b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053020c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053020e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053020f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530210(CPU *c) {
  NATIVE_HOOK(0x530210u) REGS; LOADALL;
L_00530210:;
  /* 00530210 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 00530215 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00530216 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00530218 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053021a je 0x5302aa */ if (ZF_) goto L_005302aa;
  /* 00530220 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530221 call 0x530a10 */ esp -= 4; M32(esp) = 0x530226u; SAVEALL; F_00530a10(c); ABI_CHECK(0x530a10u, 0x530221u); RETCHK(0x530226u, 0x530221u); LOADALL;
  /* 00530226 mov ecx, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); ecx = (u32)(M32(m_)); }
  /* 0053022c mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 0053022e cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530230 je 0x53024e */ if (ZF_) goto L_0053024e;
L_00530232:;
  /* 00530232 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00530235 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530237 je 0x530248 */ if (ZF_) goto L_00530248;
  /* 00530239 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053023a call 0x5fefc0 */ esp -= 4; M32(esp) = 0x53023fu; SAVEALL; F_005fefc0(c); ABI_CHECK(0x5fefc0u, 0x53023au); RETCHK(0x53023fu, 0x53023au); LOADALL;
  /* 0053023f mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 00530242 mov ecx, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); ecx = (u32)(M32(m_)); }
L_00530248:;
  /* 00530248 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0053024a cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053024c jne 0x530232 */ if (!ZF_) goto L_00530232;
L_0053024e:;
  /* 0053024e mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00530250 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 00530252 mov eax, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); eax = (u32)(M32(m_)); }
  /* 00530257 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0053025a cmp esi, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530260 mov dword ptr [0x7a8190], ebx */ { const u32 m_ = (u32)(0x7a8190u); M32(m_) = (u32)(ebx); }
  /* 00530266 je 0x53028c */ if (ZF_) goto L_0053028c;
  /* 00530268 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00530269 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00530270:;
  /* 00530270 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00530272 call 0x531640 */ esp -= 4; M32(esp) = 0x530277u; SAVEALL; F_00531640(c); ABI_CHECK(0x531640u, 0x530272u); RETCHK(0x530277u, 0x530272u); LOADALL;
  /* 00530277 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530278 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53027du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530278u); RETCHK(0x53027du, 0x530278u); LOADALL;
  /* 0053027d mov eax, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); eax = (u32)(M32(m_)); }
  /* 00530282 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530285 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530287 mov esi, edi */ { esi = (u32)(edi); }
  /* 00530289 jne 0x530270 */ if (!ZF_) goto L_00530270;
  /* 0053028b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0053028c:;
  /* 0053028c mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 00530291 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530292 call 0x5fefc6 */ esp -= 4; M32(esp) = 0x530297u; SAVEALL; F_005fefc6(c); ABI_CHECK(0x5fefc6u, 0x530292u); RETCHK(0x530297u, 0x530292u); LOADALL;
  /* 00530297 mov ecx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); ecx = (u32)(M32(m_)); }
  /* 0053029d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053029e call 0x5fefcc */ esp -= 4; M32(esp) = 0x5302a3u; SAVEALL; F_005fefcc(c); ABI_CHECK(0x5fefccu, 0x53029eu); RETCHK(0x5302a3u, 0x53029eu); LOADALL;
  /* 005302a3 mov dword ptr [0x7a6d98], ebx */ { const u32 m_ = (u32)(0x7a6d98u); M32(m_) = (u32)(ebx); }
  /* 005302a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005302aa:;
  /* 005302aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005302ab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005302b0(CPU *c) {
  NATIVE_HOOK(0x5302b0u) REGS; LOADALL;
L_005302b0:;
  /* 005302b0 mov eax, 1 */ { eax = (u32)(0x1u); }
L_005302b5:;
  /* 005302b5 mov ecx, dword ptr [eax*4 + 0x796f88] */ { const u32 m_ = (u32)(eax * 4u + 0x796f88u); ecx = (u32)(M32(m_)); }
  /* 005302bc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005302be je 0x5302c8 */ if (ZF_) goto L_005302c8;
  /* 005302c0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005302c1 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005302c4 jl 0x5302b5 */ if (LT_) goto L_005302b5;
  /* 005302c6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005302c8:;
  /* 005302c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005302d0(CPU *c) {
  NATIVE_HOOK(0x5302d0u) REGS; LOADALL;
L_005302d0:;
  /* 005302d0 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 005302d5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005302d7 je 0x5302df */ if (ZF_) goto L_005302df;
  /* 005302d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005302da call 0x5fefd2 */ esp -= 4; M32(esp) = 0x5302dfu; SAVEALL; F_005fefd2(c); ABI_CHECK(0x5fefd2u, 0x5302dau); RETCHK(0x5302dfu, 0x5302dau); LOADALL;
L_005302df:;
  /* 005302df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005302e0(CPU *c) {
  NATIVE_HOOK(0x5302e0u) REGS; LOADALL;
L_005302e0:;
  /* 005302e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005302e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005302e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005302e5 push 0x61da76 */ { u32 v_ = 0x61da76u; esp -= 4; M32(esp) = v_; }
  /* 005302ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005302f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005302f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005302f8 sub esp, 0x4b8 */ { u32 a_ = esp, b_ = 0x4b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005302fe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00530303 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00530304 push 0x6533c8 */ { u32 v_ = 0x6533c8u; esp -= 4; M32(esp) = v_; }
  /* 00530309 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0053030c lea eax, [ebp - 0x254] */ eax = (u32)((u32)(ebp + 0xfffffdacu));
  /* 00530312 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00530317 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530318 call 0x5fe928 */ esp -= 4; M32(esp) = 0x53031du; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x530318u); RETCHK(0x53031du, 0x530318u); LOADALL;
  /* 0053031d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0053031f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530322 mov dword ptr [ebp - 0x3c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0xfu); }
  /* 00530329 mov dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edi); }
  /* 0053032c mov byte ptr [ebp - 0x50], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x0u); }
  /* 00530330 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00530333 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530334 lea ecx, [ebp - 0x254] */ ecx = (u32)((u32)(ebp + 0xfffffdacu));
  /* 0053033a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0053033d call 0x41b430 */ esp -= 4; M32(esp) = 0x530342u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x53033du); RETCHK(0x530342u, 0x53033du); LOADALL;
  /* 00530342 lea edx, [ebp - 0x4c4] */ edx = (u32)((u32)(ebp + 0xfffffb3cu));
  /* 00530348 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530349 call 0x5614b0 */ esp -= 4; M32(esp) = 0x53034eu; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x530349u); RETCHK(0x53034eu, 0x530349u); LOADALL;
  /* 0053034e mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00530352 cmp dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530356 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 00530359 jae 0x53035e */ if (!CF_) goto L_0053035e;
  /* 0053035b lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
L_0053035e:;
  /* 0053035e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053035f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00530360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530361 lea ecx, [ebp - 0x4c4] */ ecx = (u32)((u32)(ebp + 0xfffffb3cu));
  /* 00530367 call 0x5628f0 */ esp -= 4; M32(esp) = 0x53036cu; SAVEALL; F_005628f0(c); ABI_CHECK(0x5628f0u, 0x530367u); RETCHK(0x53036cu, 0x530367u); LOADALL;
  /* 0053036c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053036e je 0x53051d */ if (ZF_) goto L_0053051d;
  /* 00530374 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530375 lea eax, [ebp - 0x4c4] */ eax = (u32)((u32)(ebp + 0xfffffb3cu));
  /* 0053037b call 0x560c60 */ esp -= 4; M32(esp) = 0x530380u; SAVEALL; F_00560c60(c); ABI_CHECK(0x560c60u, 0x53037bu); RETCHK(0x530380u, 0x53037bu); LOADALL;
  /* 00530380 call 0x560c60 */ esp -= 4; M32(esp) = 0x530385u; SAVEALL; F_00560c60(c); ABI_CHECK(0x560c60u, 0x530380u); RETCHK(0x530385u, 0x530380u); LOADALL;
  /* 00530385 mov esi, eax */ { esi = (u32)(eax); }
  /* 00530387 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530389 mov dword ptr [ebp - 0x458], edi */ { const u32 m_ = (u32)(ebp + 0xfffffba8u); M32(m_) = (u32)(edi); }
  /* 0053038f je 0x53051c */ if (ZF_) goto L_0053051c;
  /* 00530395 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00530396 jmp 0x5303a0 */ goto L_005303a0;
L_005303a0:;
  /* 005303a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005303a1 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 005303a6 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5303abu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5303a6u); RETCHK(0x5303abu, 0x5303a6u); LOADALL;
  /* 005303ab mov dword ptr [ebp - 0x45c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffba4u); M32(m_) = (u32)(eax); }
  /* 005303b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005303b2 mov eax, 0x6533c0 */ { eax = (u32)(0x6533c0u); }
  /* 005303b7 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5303bcu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5303b7u); RETCHK(0x5303bcu, 0x5303b7u); LOADALL;
  /* 005303bc mov edi, eax */ { edi = (u32)(eax); }
  /* 005303be push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005303bf mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 005303c4 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5303c9u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5303c4u); RETCHK(0x5303c9u, 0x5303c4u); LOADALL;
  /* 005303c9 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005303cb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005303cc mov eax, 0x64fe38 */ { eax = (u32)(0x64fe38u); }
  /* 005303d1 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5303d6u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5303d1u); RETCHK(0x5303d6u, 0x5303d1u); LOADALL;
  /* 005303d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005303d7 call 0x5fe92e */ esp -= 4; M32(esp) = 0x5303dcu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5303d7u); RETCHK(0x5303dcu, 0x5303d7u); LOADALL;
  /* 005303dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005303dd push 0x6533b0 */ { u32 v_ = 0x6533b0u; esp -= 4; M32(esp) = v_; }
  /* 005303e2 mov dword ptr [ebp - 0x460], eax */ { const u32 m_ = (u32)(ebp + 0xfffffba0u); M32(m_) = (u32)(eax); }
  /* 005303e8 lea eax, [ebp - 0x454] */ eax = (u32)((u32)(ebp + 0xfffffbacu));
  /* 005303ee push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 005303f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005303f4 call 0x5fe928 */ esp -= 4; M32(esp) = 0x5303f9u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x5303f4u); RETCHK(0x5303f9u, 0x5303f4u); LOADALL;
  /* 005303f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005303fa call 0x5fe92e */ esp -= 4; M32(esp) = 0x5303ffu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5303fau); RETCHK(0x5303ffu, 0x5303fau); LOADALL;
  /* 005303ff add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530402 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530405 jne 0x530411 */ if (!ZF_) goto L_00530411;
  /* 00530407 mov dword ptr [ebp - 0x458], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffba8u); M32(m_) = (u32)(0x10u); }
L_00530411:;
  /* 00530411 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00530413 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 00530418 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0053041b mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 0053041e mov byte ptr [ebp - 0x34], bl */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00530421 mov edi, dword ptr [ebp - 0x45c] */ { const u32 m_ = (u32)(ebp + 0xfffffba4u); edi = (u32)(M32(m_)); }
  /* 00530427 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0053042b mov dword ptr [ebp - 0x464], eax */ { const u32 m_ = (u32)(ebp + 0xfffffb9cu); M32(m_) = (u32)(eax); }
  /* 00530431 mov eax, edi */ { eax = (u32)(edi); }
  /* 00530433 mov dword ptr [ebp - 0x468], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffb98u); M32(m_) = (u32)(ebx); }
  /* 00530439 mov byte ptr [ebp - 0x478], bl */ { const u32 m_ = (u32)(ebp + 0xfffffb88u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053043f lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00530442:;
  /* 00530442 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00530444 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00530445 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530447 jne 0x530442 */ if (!ZF_) goto L_00530442;
  /* 00530449 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0053044b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053044c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053044d lea ecx, [ebp - 0x47c] */ ecx = (u32)((u32)(ebp + 0xfffffb84u));
  /* 00530453 call 0x404420 */ esp -= 4; M32(esp) = 0x530458u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x530453u); RETCHK(0x530458u, 0x530453u); LOADALL;
  /* 00530458 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053045a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053045b lea ecx, [ebp - 0x47c] */ ecx = (u32)((u32)(ebp + 0xfffffb84u));
  /* 00530461 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530462 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00530465 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00530469 call 0x404140 */ esp -= 4; M32(esp) = 0x53046eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x530469u); RETCHK(0x53046eu, 0x530469u); LOADALL;
  /* 0053046e mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00530472 cmp dword ptr [ebp - 0x464], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffb9cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530479 jb 0x53048a */ if (CF_) goto L_0053048a;
  /* 0053047b mov edx, dword ptr [ebp - 0x478] */ { const u32 m_ = (u32)(ebp + 0xfffffb88u); edx = (u32)(M32(m_)); }
  /* 00530481 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530482 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530487u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530482u); RETCHK(0x530487u, 0x530482u); LOADALL;
  /* 00530487 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053048a:;
  /* 0053048a mov eax, dword ptr [ebp - 0x458] */ { const u32 m_ = (u32)(ebp + 0xfffffba8u); eax = (u32)(M32(m_)); }
  /* 00530490 mov ecx, dword ptr [ebp - 0x460] */ { const u32 m_ = (u32)(ebp + 0xfffffba0u); ecx = (u32)(M32(m_)); }
  /* 00530496 mov edi, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); edi = (u32)(M32(m_)); }
  /* 0053049c mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0053049f mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 005304a2 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 005304a5 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005304a8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005304a9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005304aa lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 005304ad mov dword ptr [ebp - 0x464], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffb9cu); M32(m_) = (u32)(0xfu); }
  /* 005304b7 mov dword ptr [ebp - 0x468], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffb98u); M32(m_) = (u32)(ebx); }
  /* 005304bd mov byte ptr [ebp - 0x478], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffb88u); M8(m_) = (u8)(0x0u); }
  /* 005304c4 call 0x531500 */ esp -= 4; M32(esp) = 0x5304c9u; SAVEALL; F_00531500(c); ABI_CHECK(0x531500u, 0x5304c4u); RETCHK(0x5304c9u, 0x5304c4u); LOADALL;
  /* 005304c9 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005304ce mov edx, 0x7a8188 */ { edx = (u32)(0x7a8188u); }
  /* 005304d3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005304d5 call 0x5315b0 */ esp -= 4; M32(esp) = 0x5304dau; SAVEALL; F_005315b0(c); ABI_CHECK(0x5315b0u, 0x5304d5u); RETCHK(0x5304dau, 0x5304d5u); LOADALL;
  /* 005304da mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 005304dd mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005304e0 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 005304e2 mov eax, esi */ { eax = (u32)(esi); }
  /* 005304e4 call 0x560cd0 */ esp -= 4; M32(esp) = 0x5304e9u; SAVEALL; F_00560cd0(c); ABI_CHECK(0x560cd0u, 0x5304e4u); RETCHK(0x5304e9u, 0x5304e4u); LOADALL;
  /* 005304e9 mov esi, eax */ { esi = (u32)(eax); }
  /* 005304eb mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005304ef cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005304f3 jb 0x530501 */ if (CF_) goto L_00530501;
  /* 005304f5 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 005304f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005304f9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5304feu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5304f9u); RETCHK(0x5304feu, 0x5304f9u); LOADALL;
  /* 005304fe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530501:;
  /* 00530501 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530503 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0053050a mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00530511 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 00530515 jne 0x5303a0 */ if (!ZF_) goto L_005303a0;
  /* 0053051b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0053051c:;
  /* 0053051c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0053051d:;
  /* 0053051d mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00530521 mov eax, dword ptr [ebp - 0x490] */ { const u32 m_ = (u32)(ebp + 0xfffffb70u); eax = (u32)(M32(m_)); }
  /* 00530527 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053052c mov dword ptr [ebp - 0x4c4], 0x643d40 */ { const u32 m_ = (u32)(ebp + 0xfffffb3cu); M32(m_) = (u32)(0x643d40u); }
  /* 00530536 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00530537 je 0x530542 */ if (ZF_) goto L_00530542;
  /* 00530539 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053053a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x53053fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x53053au); RETCHK(0x53053fu, 0x53053au); LOADALL;
  /* 0053053f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530542:;
  /* 00530542 lea ecx, [ebp - 0x4c4] */ ecx = (u32)((u32)(ebp + 0xfffffb3cu));
  /* 00530548 call 0x560aa0 */ esp -= 4; M32(esp) = 0x53054du; SAVEALL; F_00560aa0(c); ABI_CHECK(0x560aa0u, 0x530548u); RETCHK(0x53054du, 0x530548u); LOADALL;
  /* 0053054d cmp dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530551 jb 0x53055f */ if (CF_) goto L_0053055f;
  /* 00530553 mov ecx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ecx = (u32)(M32(m_)); }
  /* 00530556 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530557 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53055cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530557u); RETCHK(0x53055cu, 0x530557u); LOADALL;
  /* 0053055c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053055f:;
  /* 0053055f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00530562 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00530569 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0053056c call 0x61af31 */ esp -= 4; M32(esp) = 0x530571u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53056cu); RETCHK(0x530571u, 0x53056cu); LOADALL;
  /* 00530571 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00530573 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530574 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530580(CPU *c) {
  NATIVE_HOOK(0x530580u) REGS; LOADALL;
L_00530580:;
  /* 00530580 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530581 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530583 sub esp, 0x204 */ { u32 a_ = esp, b_ = 0x204u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530589 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0053058e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00530591 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 00530596 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530598 je 0x530608 */ if (ZF_) goto L_00530608;
  /* 0053059a mov eax, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); eax = (u32)(M32(m_)); }
  /* 0053059f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005305a0 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 005305a2 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005305a4 je 0x530607 */ if (ZF_) goto L_00530607;
  /* 005305a6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_005305a7:;
  /* 005305a7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005305aa cmp dword ptr [esi + 0x28], ecx */ { const u32 m_ = (u32)(esi + 0x28u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005305ad jne 0x530600 */ if (!ZF_) goto L_00530600;
  /* 005305af mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005305b2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005305b4 lea edi, [esi + 0x2c] */ edi = (u32)((u32)(esi + 0x2cu));
  /* 005305b7 jne 0x530600 */ if (!ZF_) goto L_00530600;
  /* 005305b9 cmp dword ptr [esi + 0x20], 0x10 */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005305bd jb 0x5305c4 */ if (CF_) goto L_005305c4;
  /* 005305bf mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005305c2 jmp 0x5305c7 */ goto L_005305c7;
L_005305c4:;
  /* 005305c4 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
L_005305c7:;
  /* 005305c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005305c8 push 0x65339c */ { u32 v_ = 0x65339cu; esp -= 4; M32(esp) = v_; }
  /* 005305cd lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 005305d3 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 005305d8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005305d9 call 0x5fe928 */ esp -= 4; M32(esp) = 0x5305deu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x5305d9u); RETCHK(0x5305deu, 0x5305d9u); LOADALL;
  /* 005305de mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005305e1 mov edx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); edx = (u32)(M32(m_)); }
  /* 005305e7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005305ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005305eb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005305ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005305ee lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 005305f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005305f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005305f6 call 0x5fefd8 */ esp -= 4; M32(esp) = 0x5305fbu; SAVEALL; F_005fefd8(c); ABI_CHECK(0x5fefd8u, 0x5305f6u); RETCHK(0x5305fbu, 0x5305f6u); LOADALL;
  /* 005305fb mov eax, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); eax = (u32)(M32(m_)); }
L_00530600:;
  /* 00530600 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00530602 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530604 jne 0x5305a7 */ if (!ZF_) goto L_005305a7;
  /* 00530606 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00530607:;
  /* 00530607 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00530608:;
  /* 00530608 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0053060b call 0x61af31 */ esp -= 4; M32(esp) = 0x530610u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53060bu); RETCHK(0x530610u, 0x53060bu); LOADALL;
  /* 00530610 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00530612 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530613 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530620(CPU *c) {
  NATIVE_HOOK(0x530620u) REGS; LOADALL;
L_00530620:;
  /* 00530620 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530621 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530623 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00530629 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053062b push 0x6240a8 */ { u32 v_ = 0x6240a8u; esp -= 4; M32(esp) = v_; }
  /* 00530630 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530631 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00530638 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530639 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053063a mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00530641 mov eax, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); eax = (u32)(M32(m_)); }
  /* 00530646 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00530648 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053064a mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0053064f je 0x53067d */ if (ZF_) goto L_0053067d;
L_00530651:;
  /* 00530651 cmp dword ptr [ebp + 0x20], edi */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530654 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00530657 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 0053065a jae 0x53065f */ if (!CF_) goto L_0053065f;
  /* 0053065c lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
L_0053065f:;
  /* 0053065f mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00530662 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530663 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530664 mov eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (u32)(M32(m_)); }
  /* 00530667 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530668 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053066a call 0x405de0 */ esp -= 4; M32(esp) = 0x53066fu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x53066au); RETCHK(0x53066fu, 0x53066au); LOADALL;
  /* 0053066f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530671 je 0x5306a0 */ if (ZF_) goto L_005306a0;
  /* 00530673 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00530675 cmp esi, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053067b jne 0x530651 */ if (!ZF_) goto L_00530651;
L_0053067d:;
  /* 0053067d cmp dword ptr [ebp + 0x20], edi */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530680 jb 0x53068e */ if (CF_) goto L_0053068e;
  /* 00530682 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00530685 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530686 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53068bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530686u); RETCHK(0x53068bu, 0x530686u); LOADALL;
  /* 0053068b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053068e:;
  /* 0053068e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00530690 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00530693 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053069a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053069b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053069c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053069e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053069f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005306a0:;
  /* 005306a0 mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005306a3 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005306a6 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005306a8 jb 0x5306b6 */ if (CF_) goto L_005306b6;
  /* 005306aa mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005306ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005306ae call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5306b3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5306aeu); RETCHK(0x5306b3u, 0x5306aeu); LOADALL;
  /* 005306b3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005306b6:;
  /* 005306b6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005306b9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005306ba mov eax, esi */ { eax = (u32)(esi); }
  /* 005306bc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005306c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005306c4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005306c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005306c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005306d0(CPU *c) {
  NATIVE_HOOK(0x5306d0u) REGS; LOADALL;
L_005306d0:;
  /* 005306d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005306d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005306d3 sub esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005306d9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005306de push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005306df mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005306e2 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 005306e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005306e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005306ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005306eb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005306ed je 0x53080d */ if (ZF_) goto L_0053080d;
  /* 005306f3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005306f6 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005306f9 jl 0x53080d */ if (LT_) goto L_0053080d;
  /* 005306ff cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530702 jg 0x53080d */ if (!(ZF_|LT_)) goto L_0053080d;
  /* 00530708 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053070b sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053070e mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00530710 mov dword ptr [ebp - 0x208], esp */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(esp); }
  /* 00530716 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530717 call 0x403060 */ esp -= 4; M32(esp) = 0x53071cu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x530717u); RETCHK(0x53071cu, 0x530717u); LOADALL;
  /* 0053071c call 0x530620 */ esp -= 4; M32(esp) = 0x530721u; SAVEALL; F_00530620(c); ABI_CHECK(0x530620u, 0x53071cu); RETCHK(0x530721u, 0x53071cu); LOADALL;
  /* 00530721 mov esi, eax */ { esi = (u32)(eax); }
  /* 00530723 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530726 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530728 je 0x53080d */ if (ZF_) goto L_0053080d;
  /* 0053072e mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 00530731 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530733 lea ebx, [esi + 0x24] */ ebx = (u32)((u32)(esi + 0x24u));
  /* 00530736 jne 0x53076f */ if (!ZF_) goto L_0053076f;
  /* 00530738 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053073b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053073c push 0x65339c */ { u32 v_ = 0x65339cu; esp -= 4; M32(esp) = v_; }
  /* 00530741 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00530747 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0053074c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053074d call 0x5fe928 */ esp -= 4; M32(esp) = 0x530752u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x53074du); RETCHK(0x530752u, 0x53074du); LOADALL;
  /* 00530752 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00530755 mov edx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); edx = (u32)(M32(m_)); }
  /* 0053075b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053075e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053075f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530761 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530762 lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00530768 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530769 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053076a call 0x5fefd8 */ esp -= 4; M32(esp) = 0x53076fu; SAVEALL; F_005fefd8(c); ABI_CHECK(0x5fefd8u, 0x53076au); RETCHK(0x53076fu, 0x53076au); LOADALL;
L_0053076f:;
  /* 0053076f mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00530771 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530773 je 0x5307fb */ if (ZF_) goto L_005307fb;
  /* 00530779 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053077b je 0x530781 */ if (ZF_) goto L_00530781;
  /* 0053077d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0053077f jmp 0x530783 */ goto L_00530783;
L_00530781:;
  /* 00530781 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
L_00530783:;
  /* 00530783 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530784 call 0x5fefde */ esp -= 4; M32(esp) = 0x530789u; SAVEALL; F_005fefde(c); ABI_CHECK(0x5fefdeu, 0x530784u); RETCHK(0x530789u, 0x530784u); LOADALL;
  /* 00530789 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053078c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0053078e mov ecx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); ecx = (u32)(M32(m_)); }
  /* 00530794 lea esi, [esi*4 + 0x796f88] */ esi = (u32)((u32)(esi * 4u + 0x796f88u));
  /* 0053079b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053079c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053079e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053079f push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
  /* 005307a1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005307a2 call 0x5fefe4 */ esp -= 4; M32(esp) = 0x5307a7u; SAVEALL; F_005fefe4(c); ABI_CHECK(0x5fefe4u, 0x5307a2u); RETCHK(0x5307a7u, 0x5307a2u); LOADALL;
  /* 005307a7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005307a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005307ab je 0x5307fb */ if (ZF_) goto L_005307fb;
  /* 005307ad push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005307af push 0x5300f0 */ { u32 v_ = 0x5300f0u; esp -= 4; M32(esp) = v_; }
  /* 005307b4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005307b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005307b7 call 0x5fefea */ esp -= 4; M32(esp) = 0x5307bcu; SAVEALL; F_005fefea(c); ABI_CHECK(0x5fefeau, 0x5307b7u); RETCHK(0x5307bcu, 0x5307b7u); LOADALL;
  /* 005307bc mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005307bf mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005307c1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005307c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005307c3 call 0x5feff0 */ esp -= 4; M32(esp) = 0x5307c8u; SAVEALL; F_005feff0(c); ABI_CHECK(0x5feff0u, 0x5307c3u); RETCHK(0x5307c8u, 0x5307c3u); LOADALL;
  /* 005307c8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005307cb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005307cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005307ce push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005307cf call 0x5feff6 */ esp -= 4; M32(esp) = 0x5307d4u; SAVEALL; F_005feff6(c); ABI_CHECK(0x5feff6u, 0x5307cfu); RETCHK(0x5307d4u, 0x5307cfu); LOADALL;
  /* 005307d4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005307d6 neg edi */ { u32 a_ = edi; u32 r_ = (0u - a_) & 0xffffffffu; edi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005307d8 sbb edi, edi */ { u32 a_ = edi, b_ = edi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edi = (u32)(r_); }
  /* 005307da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005307db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005307dc call 0x5feffc */ esp -= 4; M32(esp) = 0x5307e1u; SAVEALL; F_005feffc(c); ABI_CHECK(0x5feffcu, 0x5307dcu); RETCHK(0x5307e1u, 0x5307dcu); LOADALL;
  /* 005307e1 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005307e4 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005307e7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005307e9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005307ea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005307eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005307ec call 0x5ff002 */ esp -= 4; M32(esp) = 0x5307f1u; SAVEALL; F_005ff002(c); ABI_CHECK(0x5ff002u, 0x5307ecu); RETCHK(0x5307f1u, 0x5307ecu); LOADALL;
  /* 005307f1 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005307f3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005307f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005307f6 call 0x5ff008 */ esp -= 4; M32(esp) = 0x5307fbu; SAVEALL; F_005ff008(c); ABI_CHECK(0x5ff008u, 0x5307f6u); RETCHK(0x5307fbu, 0x5307f6u); LOADALL;
L_005307fb:;
  /* 005307fb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005307fe mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00530801 call 0x61af31 */ esp -= 4; M32(esp) = 0x530806u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x530801u); RETCHK(0x530806u, 0x530801u); LOADALL;
  /* 00530806 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00530807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530808 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00530809 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053080b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053080c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053080d:;
  /* 0053080d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00530810 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00530812 call 0x61af31 */ esp -= 4; M32(esp) = 0x530817u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x530812u); RETCHK(0x530817u, 0x530812u); LOADALL;
  /* 00530817 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00530818 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530819 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053081a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053081c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053081d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
