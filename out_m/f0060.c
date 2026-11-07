#include "funcs.h"

void F_00600060(CPU *c) {
  NATIVE_HOOK(0x600060u) REGS; LOADALL;
L_00600060:;
  /* 00600060 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 00600064 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00600068 mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0060006b mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0060006f mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 00600072 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00600075 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00600079 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060007a mov eax, edi */ { eax = (u32)(edi); }
  /* 0060007c sub eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060007e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060007f add dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600082 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00600084 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600085 mov dword ptr [ebx + 0x34], ecx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(ecx); }
  /* 00600088 call 0x6011f0 */ esp -= 4; M32(esp) = 0x60008du; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x600088u); RETCHK(0x60008du, 0x600088u); LOADALL;
  /* 0060008d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600090 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600091 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600092 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600093 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600094 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600097 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00600065(CPU *c) {
  NATIVE_HOOK(0x600065u) REGS; LOADALL;
L_00600065:;
  /* 00600065 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 00600066 and al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00600068 mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0060006b mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0060006f mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 00600072 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00600075 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00600079 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060007a mov eax, edi */ { eax = (u32)(edi); }
  /* 0060007c sub eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060007e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060007f add dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600082 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00600084 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600085 mov dword ptr [ebx + 0x34], ecx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(ecx); }
  /* 00600088 call 0x6011f0 */ esp -= 4; M32(esp) = 0x60008du; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x600088u); RETCHK(0x60008du, 0x600088u); LOADALL;
  /* 0060008d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600090 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600091 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600092 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600093 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600094 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600097 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006001a0(CPU *c) {
  NATIVE_HOOK(0x6001a0u) REGS; LOADALL;
L_006001a0:;
  /* 006001a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006001a1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006001a5 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 006001a7 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006001aa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006001ab mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 006001af je 0x6001b6 */ if (ZF_) goto L_006001b6;
  /* 006001b1 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006001b4 jne 0x6001c4 */ if (!ZF_) goto L_006001c4;
L_006001b6:;
  /* 006001b6 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 006001b9 mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 006001bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006001bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006001be call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6001c1u; SAVEALL; call_ind(c, t_); RETCHK(0x6001c1u, 0x6001beu); LOADALL; }
  /* 006001c1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006001c4:;
  /* 006001c4 cmp dword ptr [esi], 6 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006001c7 jne 0x6001d6 */ if (!ZF_) goto L_006001d6;
  /* 006001c9 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 006001cc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006001cd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006001ce call 0x600aa0 */ esp -= 4; M32(esp) = 0x6001d3u; SAVEALL; F_00600aa0(c); ABI_CHECK(0x600aa0u, 0x6001ceu); RETCHK(0x6001d3u, 0x6001ceu); LOADALL;
  /* 006001d3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006001d6:;
  /* 006001d6 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 006001d9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006001db mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 006001de mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 006001e1 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 006001e4 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006001e6 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 006001e8 mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 006001eb mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 006001ee je 0x6001fe */ if (ZF_) goto L_006001fe;
  /* 006001f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006001f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006001f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006001f3 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x6001f5u; SAVEALL; call_ind(c, t_); RETCHK(0x6001f5u, 0x6001f3u); LOADALL; }
  /* 006001f5 mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 006001f8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006001fb mov dword ptr [edi + 0x30], eax */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(eax); }
L_006001fe:;
  /* 006001fe mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00600201 mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00600204 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600205 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00600206 call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x600209u; SAVEALL; call_ind(c, t_); RETCHK(0x600209u, 0x600206u); LOADALL; }
  /* 00600209 mov edx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); edx = (u32)(M32(m_)); }
  /* 0060020c mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0060020f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00600210 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600211 call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x600214u; SAVEALL; call_ind(c, t_); RETCHK(0x600214u, 0x600211u); LOADALL; }
  /* 00600214 mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00600217 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00600218 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00600219 call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60021cu; SAVEALL; call_ind(c, t_); RETCHK(0x60021cu, 0x600219u); LOADALL; }
  /* 0060021c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060021f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600220 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00600222 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600223 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00600230(CPU *c) {
  NATIVE_HOOK(0x600230u) REGS; LOADALL;
L_00600230:;
  /* 00600230 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00600231 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00600235 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00600236 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0060023a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0060023c and ecx, 0xffff */ { u32 a_ = ecx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00600242 shr edi, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00600245 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600247 jne 0x600251 */ if (!ZF_) goto L_00600251;
  /* 00600249 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060024a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0060024f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600250 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600251:;
  /* 00600251 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600252 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 00600256 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600258 jbe 0x600352 */ if ((CF_|ZF_)) goto L_00600352;
  /* 0060025e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060025f nop */ ;
L_00600260:;
  /* 00600260 cmp ebx, 0x15b0 */ { u32 a_ = ebx, b_ = 0x15b0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600266 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00600268 jb 0x60026f */ if (CF_) goto L_0060026f;
  /* 0060026a mov eax, 0x15b0 */ { eax = (u32)(0x15b0u); }
L_0060026f:;
  /* 0060026f sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00600271 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600274 jl 0x60031b */ if (LT_) goto L_0060031b;
  /* 0060027a mov edx, eax */ { edx = (u32)(eax); }
  /* 0060027c shr edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0060027f mov ebp, edx */ { ebp = (u32)(edx); }
  /* 00600281 neg ebp */ { u32 a_ = ebp; u32 r_ = (0u - a_) & 0xffffffffu; ebp = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00600283 shl ebp, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 00600286 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600288 jmp 0x600290 */ goto L_00600290;
L_00600290:;
  /* 00600290 movzx ebp, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebp = (u32)(M8(m_)); }
  /* 00600293 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600295 movzx ebp, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebp = (u32)(M8(m_)); }
  /* 00600299 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0060029b add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060029d movzx ebp, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); ebp = (u32)(M8(m_)); }
  /* 006002a1 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002a3 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002a5 movzx ebp, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); ebp = (u32)(M8(m_)); }
  /* 006002a9 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002ab add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002ad movzx ebp, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebp = (u32)(M8(m_)); }
  /* 006002b1 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002b3 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002b5 movzx ebp, byte ptr [esi + 5] */ { const u32 m_ = (u32)(esi + 0x5u); ebp = (u32)(M8(m_)); }
  /* 006002b9 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002bb add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002bd movzx ebp, byte ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); ebp = (u32)(M8(m_)); }
  /* 006002c1 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002c3 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002c5 movzx ebp, byte ptr [esi + 7] */ { const u32 m_ = (u32)(esi + 0x7u); ebp = (u32)(M8(m_)); }
  /* 006002c9 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002cb add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002cd movzx ebp, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebp = (u32)(M8(m_)); }
  /* 006002d1 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002d3 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002d5 movzx ebp, byte ptr [esi + 9] */ { const u32 m_ = (u32)(esi + 0x9u); ebp = (u32)(M8(m_)); }
  /* 006002d9 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002db add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002dd movzx ebp, byte ptr [esi + 0xa] */ { const u32 m_ = (u32)(esi + 0xau); ebp = (u32)(M8(m_)); }
  /* 006002e1 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002e3 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002e5 movzx ebp, byte ptr [esi + 0xb] */ { const u32 m_ = (u32)(esi + 0xbu); ebp = (u32)(M8(m_)); }
  /* 006002e9 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002eb add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002ed movzx ebp, byte ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ebp = (u32)(M8(m_)); }
  /* 006002f1 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002f3 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002f5 movzx ebp, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); ebp = (u32)(M8(m_)); }
  /* 006002f9 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006002fb add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006002fd movzx ebp, byte ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); ebp = (u32)(M8(m_)); }
  /* 00600301 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600303 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600305 movzx ebp, byte ptr [esi + 0xf] */ { const u32 m_ = (u32)(esi + 0xfu); ebp = (u32)(M8(m_)); }
  /* 00600309 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0060030b add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060030d add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0060030f add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600312 sub edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00600315 jne 0x600290 */ if (!ZF_) goto L_00600290;
L_0060031b:;
  /* 0060031b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060031d je 0x60032f */ if (ZF_) goto L_0060032f;
  /* 0060031f nop */ ;
L_00600320:;
  /* 00600320 movzx edx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M8(m_)); }
  /* 00600323 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600325 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600328 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0060032a sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060032d jne 0x600320 */ if (!ZF_) goto L_00600320;
L_0060032f:;
  /* 0060032f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00600331 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00600333 mov ecx, 0xfff1 */ { ecx = (u32)(0xfff1u); }
  /* 00600338 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x600338u); eax = q_; edx = r_; }
  /* 0060033a mov eax, edi */ { eax = (u32)(edi); }
  /* 0060033c mov edi, 0xfff1 */ { edi = (u32)(0xfff1u); }
  /* 00600341 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00600343 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00600345 div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x600345u); eax = q_; edx = r_; }
  /* 00600347 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600349 mov edi, edx */ { edi = (u32)(edx); }
  /* 0060034b ja 0x600260 */ if (!(CF_|ZF_)) goto L_00600260;
  /* 00600351 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_00600352:;
  /* 00600352 mov eax, edi */ { eax = (u32)(edi); }
  /* 00600354 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600355 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600358 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600359 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060035b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060035c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00600360(CPU *c) {
  NATIVE_HOOK(0x600360u) REGS; LOADALL;
L_00600360:;
  /* 00600360 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00600364 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00600368 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600369 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060036a call dword ptr [0x62e344] */ { const u32 m_ = (u32)(0x62e344u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x600370u; SAVEALL; call_ind(c, t_); RETCHK(0x600370u, 0x60036au); LOADALL; }
  /* 00600370 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600373 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00600380(CPU *c) {
  NATIVE_HOOK(0x600380u) REGS; LOADALL;
L_00600380:;
  /* 00600380 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00600384 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600385 call dword ptr [0x62e3d0] */ { const u32 m_ = (u32)(0x62e3d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60038bu; SAVEALL; call_ind(c, t_); RETCHK(0x60038bu, 0x600385u); LOADALL; }
  /* 0060038b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060038c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00600390(CPU *c) {
  NATIVE_HOOK(0x600390u) REGS; LOADALL;
L_00600390:;
  /* 00600390 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00600394 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00600397 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 00600399 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0060039b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060039c call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60039fu; SAVEALL; call_ind(c, t_); RETCHK(0x60039fu, 0x60039cu); LOADALL; }
  /* 0060039f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006003a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006003a4 je 0x6003c8 */ if (ZF_) goto L_006003c8;
  /* 006003a6 mov dl, byte ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006003aa mov cl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006003ae mov byte ptr [eax + 0x10], dl */ { const u32 m_ = (u32)(eax + 0x10u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006003b1 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 006003b5 mov byte ptr [eax + 0x11], cl */ { const u32 m_ = (u32)(eax + 0x11u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006003b8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 006003bc mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 006003c2 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 006003c5 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
L_006003c8:;
  /* 006003c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006003d0(CPU *c) {
  NATIVE_HOOK(0x6003d0u) REGS; LOADALL;
L_006003d0:;
  /* 006003d0 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006003d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006003d4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006003d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006003d6 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 006003da mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 006003dd mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006003e0 mov ebx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 006003e3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006003e4 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 006003e8 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 006003eb mov ebp, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebp = (u32)(M32(m_)); }
  /* 006003ed mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 006003f1 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 006003f4 mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
  /* 006003f8 mov edx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); edx = (u32)(M32(m_)); }
  /* 006003fb cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006003fd mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00600401 jae 0x60040a */ if (!CF_) goto L_0060040a;
  /* 00600403 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600405 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600408 jmp 0x60040f */ goto L_0060040f;
L_0060040a:;
  /* 0060040a mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0060040d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0060040f:;
  /* 0060040f mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00600411 cmp ecx, 9 */ { u32 a_ = ecx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600414 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 00600418 ja 0x60094f */ if (!(CF_|ZF_)) goto L_0060094f;
  /* 0060041e mov edi, edi */ { edi = (u32)(edi); }
L_00600420:;
  /* 00600420 jmp dword ptr [ecx*4 + 0x600a70] */ { const u32 m_ = (u32)(ecx * 4u + 0x600a70u); u32 t_ = M32(m_); switch (t_) { case 0x600427u: goto L_00600427; case 0x6004e1u: goto L_006004e1; case 0x6005b5u: goto L_006005b5; case 0x600627u: goto L_00600627; case 0x6006ecu: goto L_006006ec; case 0x600754u: goto L_00600754; case 0x60087cu: goto L_0060087c; case 0x6009fcu: goto L_006009fc; case 0x600a47u: goto L_00600a47; case 0x600a4eu: goto L_00600a4e; default: SAVEALL; call_ind(c, t_); return; } }
L_00600427:;
  /* 00600427 cmp eax, 0x102 */ { u32 a_ = eax, b_ = 0x102u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060042c jb 0x6004ca */ if (CF_) goto L_006004ca;
  /* 00600432 cmp dword ptr [esp + 0x2c], 0xa */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600437 jb 0x6004ca */ if (CF_) goto L_006004ca;
  /* 0060043d mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00600441 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00600445 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 00600448 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0060044b mov eax, ebp */ { eax = (u32)(ebp); }
  /* 0060044d sub eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060044f mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00600452 add dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600455 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00600459 mov dword ptr [edi], ebp */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebp); }
  /* 0060045b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060045c mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 0060045f mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00600462 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00600465 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00600466 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00600467 movzx ecx, byte ptr [eax + 0x11] */ { const u32 m_ = (u32)(eax + 0x11u); ecx = (u32)(M8(m_)); }
  /* 0060046b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060046c movzx edx, byte ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M8(m_)); }
  /* 00600470 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00600471 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00600472 call 0x601310 */ esp -= 4; M32(esp) = 0x600477u; SAVEALL; F_00601310(c); ABI_CHECK(0x601310u, 0x600472u); RETCHK(0x600477u, 0x600472u); LOADALL;
  /* 00600477 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0060047a mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0060047d mov ebp, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebp = (u32)(M32(m_)); }
  /* 0060047f mov ebx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 00600482 mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 00600486 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 00600489 mov dword ptr [esp + 0x40], edx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(edx); }
  /* 0060048d mov edx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); edx = (u32)(M32(m_)); }
  /* 00600490 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600493 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600495 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 00600499 jae 0x6004a2 */ if (!CF_) goto L_006004a2;
  /* 0060049b sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060049d sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006004a0 jmp 0x6004a7 */ goto L_006004a7;
L_006004a2:;
  /* 006004a2 mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 006004a5 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_006004a7:;
  /* 006004a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006004a9 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 006004ad je 0x6004ca */ if (ZF_) goto L_006004ca;
  /* 006004af xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006004b1 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006004b4 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006004b8 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 006004bb lea ecx, [ecx + ecx + 7] */ ecx = (u32)((u32)(ecx + ecx + 0x7u));
  /* 006004bf mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 006004c1 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 006004c5 jmp 0x600940 */ goto L_00600940;
L_006004ca:;
  /* 006004ca mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006004ce movzx ecx, byte ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M8(m_)); }
  /* 006004d2 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 006004d5 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006004d8 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 006004db mov dword ptr [eax], 1 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1u); }
L_006004e1:;
  /* 006004e1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006004e5 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 006004e8 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006004ea mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 006004ee jae 0x600522 */ if (!CF_) goto L_00600522;
L_006004f0:;
  /* 006004f0 cmp dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006004f5 je 0x6009a6 */ if (ZF_) goto L_006009a6;
  /* 006004fb movzx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M8(m_)); }
  /* 006004ff sub dword ptr [esp + 0x2c], 1 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600504 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00600506 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600508 add ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0060050b add ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0060050e mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 00600516 or dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060051a mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0060051e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600520 jb 0x6004f0 */ if (CF_) goto L_006004f0;
L_00600522:;
  /* 00600522 mov ecx, dword ptr [eax*4 + 0x680d30] */ { const u32 m_ = (u32)(eax * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 00600529 and ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060052d mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00600531 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00600534 lea eax, [eax + ecx*8] */ eax = (u32)((u32)(eax + ecx * 8u));
  /* 00600537 movzx ecx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (u32)(M8(m_)); }
  /* 0060053b shr dword ptr [esp + 0x28], cl */ { const u32 m_ = (u32)(esp + 0x28u); u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = M32(m_); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); M32(m_) = (u32)(r_); } }
  /* 0060053f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00600541 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 00600545 movzx eax, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); eax = (u32)(M8(m_)); }
  /* 00600549 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0060054b movzx eax, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M8(m_)); }
  /* 0060054e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600550 jne 0x60056b */ if (!ZF_) goto L_0060056b;
  /* 00600552 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00600556 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00600559 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0060055c mov dword ptr [eax], 6 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6u); }
  /* 00600562 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00600566 jmp 0x600940 */ goto L_00600940;
L_0060056b:;
  /* 0060056b test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060056d je 0x600592 */ if (ZF_) goto L_00600592;
  /* 0060056f mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00600573 and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00600576 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00600579 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0060057d mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00600580 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00600583 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00600587 mov dword ptr [ecx], 2 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x2u); }
  /* 0060058d jmp 0x600940 */ goto L_00600940;
L_00600592:;
  /* 00600592 test al, 0x40 */ { u32 a_ = (eax & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00600594 je 0x6006cb */ if (ZF_) goto L_006006cb;
  /* 0060059a test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060059c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006005a0 je 0x600980 */ if (ZF_) goto L_00600980;
  /* 006005a6 mov dword ptr [eax], 7 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x7u); }
  /* 006005ac mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 006005b0 jmp 0x600940 */ goto L_00600940;
L_006005b5:;
  /* 006005b5 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 006005b9 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 006005bc cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006005be mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 006005c2 jae 0x6005f6 */ if (!CF_) goto L_006005f6;
L_006005c4:;
  /* 006005c4 cmp dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006005c9 je 0x6009a6 */ if (ZF_) goto L_006009a6;
  /* 006005cf movzx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M8(m_)); }
  /* 006005d3 sub dword ptr [esp + 0x2c], 1 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 006005d8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 006005da shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 006005dc add ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 006005df add ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006005e2 mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 006005ea or dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 006005ee mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006005f2 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006005f4 jb 0x6005c4 */ if (CF_) goto L_006005c4;
L_006005f6:;
  /* 006005f6 mov ecx, dword ptr [eax*4 + 0x680d30] */ { const u32 m_ = (u32)(eax * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 006005fd and ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00600601 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00600605 add dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600608 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0060060c shr dword ptr [esp + 0x28], cl */ { const u32 m_ = (u32)(esp + 0x28u); u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = M32(m_); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); M32(m_) = (u32)(r_); } }
  /* 00600610 sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00600612 movzx ecx, byte ptr [eax + 0x11] */ { const u32 m_ = (u32)(eax + 0x11u); ecx = (u32)(M8(m_)); }
  /* 00600616 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00600619 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0060061c mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0060061f mov dword ptr [eax], 3 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x3u); }
  /* 00600625 jmp 0x60062b */ goto L_0060062b;
L_00600627:;
  /* 00600627 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
L_0060062b:;
  /* 0060062b mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0060062e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600630 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 00600634 jae 0x600672 */ if (!CF_) goto L_00600672;
  /* 00600636 jmp 0x600640 */ goto L_00600640;
L_00600640:;
  /* 00600640 cmp dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600645 je 0x6009a6 */ if (ZF_) goto L_006009a6;
  /* 0060064b movzx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M8(m_)); }
  /* 0060064f sub dword ptr [esp + 0x2c], 1 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600654 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00600656 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600658 add ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0060065b add ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0060065e mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 00600666 or dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060066a mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0060066e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600670 jb 0x600640 */ if (CF_) goto L_00600640;
L_00600672:;
  /* 00600672 mov ecx, dword ptr [eax*4 + 0x680d30] */ { const u32 m_ = (u32)(eax * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 00600679 and ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060067d mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00600681 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00600684 lea eax, [eax + ecx*8] */ eax = (u32)((u32)(eax + ecx * 8u));
  /* 00600687 movzx ecx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (u32)(M8(m_)); }
  /* 0060068b shr dword ptr [esp + 0x28], cl */ { const u32 m_ = (u32)(esp + 0x28u); u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = M32(m_); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); M32(m_) = (u32)(r_); } }
  /* 0060068f movzx ecx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (u32)(M8(m_)); }
  /* 00600693 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 00600697 movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 0060069a sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0060069c test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060069e je 0x6006c3 */ if (ZF_) goto L_006006c3;
  /* 006006a0 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 006006a4 and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006006a7 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 006006aa mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006006ae mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 006006b1 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 006006b4 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 006006b8 mov dword ptr [ecx], 4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x4u); }
  /* 006006be jmp 0x600940 */ goto L_00600940;
L_006006c3:;
  /* 006006c3 test al, 0x40 */ { u32 a_ = (eax & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006006c5 jne 0x600991 */ if (!ZF_) goto L_00600991;
L_006006cb:;
  /* 006006cb mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 006006cf mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 006006d2 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006006d6 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006006d9 lea eax, [eax + ecx*8] */ eax = (u32)((u32)(eax + ecx * 8u));
  /* 006006dc mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 006006e0 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 006006e3 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 006006e7 jmp 0x600940 */ goto L_00600940;
L_006006ec:;
  /* 006006ec mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006006f0 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 006006f3 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006006f5 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 006006f9 jae 0x600732 */ if (!CF_) goto L_00600732;
  /* 006006fb jmp 0x600700 */ goto L_00600700;
L_00600700:;
  /* 00600700 cmp dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600705 je 0x6009a6 */ if (ZF_) goto L_006009a6;
  /* 0060070b movzx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M8(m_)); }
  /* 0060070f sub dword ptr [esp + 0x2c], 1 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600714 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00600716 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600718 add ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0060071b add ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0060071e mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 00600726 or dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060072a mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0060072e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600730 jb 0x600700 */ if (CF_) goto L_00600700;
L_00600732:;
  /* 00600732 mov ecx, dword ptr [eax*4 + 0x680d30] */ { const u32 m_ = (u32)(eax * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 00600739 and ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060073d mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00600741 add dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600744 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00600748 shr dword ptr [esp + 0x28], cl */ { const u32 m_ = (u32)(esp + 0x28u); u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = M32(m_); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); M32(m_) = (u32)(r_); } }
  /* 0060074c sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0060074e mov dword ptr [eax], 5 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x5u); }
L_00600754:;
  /* 00600754 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00600757 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00600759 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060075b mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0060075f mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00600762 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600764 jae 0x60077b */ if (!CF_) goto L_0060077b;
  /* 00600766 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00600769 sub eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060076c mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00600770 sub eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600773 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600775 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00600779 jmp 0x600783 */ goto L_00600783;
L_0060077b:;
  /* 0060077b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0060077d sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060077f mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
L_00600783:;
  /* 00600783 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00600787 cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060078b mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0060078f je 0x60093a */ if (ZF_) goto L_0060093a;
L_00600795:;
  /* 00600795 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600797 jne 0x600834 */ if (!ZF_) goto L_00600834;
  /* 0060079d mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 006007a0 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006007a2 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 006007a6 jne 0x6007c9 */ if (!ZF_) goto L_006007c9;
  /* 006007a8 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 006007ab mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 006007ae cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006007b0 je 0x6007c9 */ if (ZF_) goto L_006007c9;
  /* 006007b2 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 006007b4 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006007b6 jae 0x6007bf */ if (!CF_) goto L_006007bf;
  /* 006007b8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006007ba sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006007bd jmp 0x6007c5 */ goto L_006007c5;
L_006007bf:;
  /* 006007bf mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006007c3 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_006007c5:;
  /* 006007c5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006007c7 jne 0x600834 */ if (!ZF_) goto L_00600834;
L_006007c9:;
  /* 006007c9 mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 006007cc mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 006007d0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006007d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006007d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006007d3 call 0x6011f0 */ esp -= 4; M32(esp) = 0x6007d8u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x6007d3u); RETCHK(0x6007d8u, 0x6007d3u); LOADALL;
  /* 006007d8 mov edx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); edx = (u32)(M32(m_)); }
  /* 006007db mov dword ptr [esp + 0x3c], eax */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(eax); }
  /* 006007df mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 006007e2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006007e5 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006007e7 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 006007eb jae 0x6007f4 */ if (!CF_) goto L_006007f4;
  /* 006007ed sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006007ef sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006007f2 jmp 0x6007f9 */ goto L_006007f9;
L_006007f4:;
  /* 006007f4 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 006007f7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_006007f9:;
  /* 006007f9 mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 006007fc cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006007fe mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 00600802 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00600806 jne 0x60082c */ if (!ZF_) goto L_0060082c;
  /* 00600808 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0060080b mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0060080f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600811 je 0x600828 */ if (ZF_) goto L_00600828;
  /* 00600813 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00600815 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600817 jae 0x600820 */ if (!CF_) goto L_00600820;
  /* 00600819 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060081b sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060081e jmp 0x60082c */ goto L_0060082c;
L_00600820:;
  /* 00600820 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00600824 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600826 jmp 0x60082c */ goto L_0060082c;
L_00600828:;
  /* 00600828 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
L_0060082c:;
  /* 0060082c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060082e je 0x6009da */ if (ZF_) goto L_006009da;
L_00600834:;
  /* 00600834 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00600838 mov cl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060083a mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0060083c mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00600840 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600843 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600846 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00600849 cmp ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060084c mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 00600854 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00600858 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0060085c jne 0x600865 */ if (!ZF_) goto L_00600865;
  /* 0060085e mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00600861 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
L_00600865:;
  /* 00600865 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00600869 add dword ptr [ecx + 4], -1 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060086d cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600871 jne 0x600795 */ if (!ZF_) goto L_00600795;
  /* 00600877 jmp 0x60093a */ goto L_0060093a;
L_0060087c:;
  /* 0060087c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060087e jne 0x60091b */ if (!ZF_) goto L_0060091b;
  /* 00600884 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00600887 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600889 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 0060088d jne 0x6008b0 */ if (!ZF_) goto L_006008b0;
  /* 0060088f mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00600892 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00600895 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600897 je 0x6008b0 */ if (ZF_) goto L_006008b0;
  /* 00600899 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0060089b cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060089d jae 0x6008a6 */ if (!CF_) goto L_006008a6;
  /* 0060089f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006008a1 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006008a4 jmp 0x6008ac */ goto L_006008ac;
L_006008a6:;
  /* 006008a6 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006008aa sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_006008ac:;
  /* 006008ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006008ae jne 0x60091b */ if (!ZF_) goto L_0060091b;
L_006008b0:;
  /* 006008b0 mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 006008b3 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 006008b7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006008b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006008b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006008ba call 0x6011f0 */ esp -= 4; M32(esp) = 0x6008bfu; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x6008bau); RETCHK(0x6008bfu, 0x6008bau); LOADALL;
  /* 006008bf mov edx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); edx = (u32)(M32(m_)); }
  /* 006008c2 mov dword ptr [esp + 0x3c], eax */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(eax); }
  /* 006008c6 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 006008c9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006008cc cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006008ce mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 006008d2 jae 0x6008db */ if (!CF_) goto L_006008db;
  /* 006008d4 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006008d6 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006008d9 jmp 0x6008e0 */ goto L_006008e0;
L_006008db:;
  /* 006008db mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 006008de sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_006008e0:;
  /* 006008e0 mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 006008e3 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006008e5 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 006008e9 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 006008ed jne 0x600913 */ if (!ZF_) goto L_00600913;
  /* 006008ef mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 006008f2 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 006008f6 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006008f8 je 0x60090f */ if (ZF_) goto L_0060090f;
  /* 006008fa mov edx, ecx */ { edx = (u32)(ecx); }
  /* 006008fc cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006008fe jae 0x600907 */ if (!CF_) goto L_00600907;
  /* 00600900 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600902 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600905 jmp 0x600913 */ goto L_00600913;
L_00600907:;
  /* 00600907 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0060090b sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060090d jmp 0x600913 */ goto L_00600913;
L_0060090f:;
  /* 0060090f mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
L_00600913:;
  /* 00600913 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600915 je 0x6009da */ if (ZF_) goto L_006009da;
L_0060091b:;
  /* 0060091b mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0060091f mov cl, byte ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00600922 mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00600924 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00600928 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0060092b sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060092e mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 00600936 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
L_0060093a:;
  /* 0060093a mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_00600940:;
  /* 00600940 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00600944 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00600946 cmp ecx, 9 */ { u32 a_ = ecx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600949 jbe 0x600420 */ if ((CF_|ZF_)) goto L_00600420;
L_0060094f:;
  /* 0060094f push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
L_00600951:;
  /* 00600951 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00600955 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 00600959 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0060095c mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0060095f mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
L_00600962:;
  /* 00600962 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 00600964 sub ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600966 add dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_00600969:;
  /* 00600969 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060096a mov dword ptr [edi], ebp */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebp); }
  /* 0060096c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060096d mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 00600970 call 0x6011f0 */ esp -= 4; M32(esp) = 0x600975u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x600970u); RETCHK(0x600975u, 0x600970u); LOADALL;
  /* 00600975 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600978 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060097a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060097b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060097c add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060097f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600980:;
  /* 00600980 mov dword ptr [eax], 9 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x9u); }
  /* 00600986 mov dword ptr [edi + 0x18], 0x67fb00 */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0x67fb00u); }
  /* 0060098d push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 0060098f jmp 0x600951 */ goto L_00600951;
L_00600991:;
  /* 00600991 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00600995 mov dword ptr [eax], 9 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x9u); }
  /* 0060099b mov dword ptr [edi + 0x18], 0x67fb1c */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0x67fb1cu); }
  /* 006009a2 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 006009a4 jmp 0x600951 */ goto L_00600951;
L_006009a6:;
  /* 006009a6 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 006009aa mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 006009ad mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 006009b0 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 006009b2 sub ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006009b4 mov dword ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 006009bb add dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 006009be mov dword ptr [edi], ebp */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebp); }
  /* 006009c0 mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 006009c3 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 006009c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006009c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006009c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006009ca call 0x6011f0 */ esp -= 4; M32(esp) = 0x6009cfu; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x6009cau); RETCHK(0x6009cfu, 0x6009cau); LOADALL;
  /* 006009cf add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006009d2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006009d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006009d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006009d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006009d6 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006009d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006009da:;
  /* 006009da mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 006009de mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 006009e2 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 006009e5 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 006009e8 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 006009ea sub eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006009ec mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 006009ef mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 006009f3 add dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 006009f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006009f7 jmp 0x600969 */ goto L_00600969;
L_006009fc:;
  /* 006009fc cmp ebx, 7 */ { u32 a_ = ebx, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006009ff jbe 0x600a0c */ if ((CF_|ZF_)) goto L_00600a0c;
  /* 00600a01 add dword ptr [esp + 0x2c], 1 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600a06 sub ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00600a09 sub ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
L_00600a0c:;
  /* 00600a0c mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 00600a0f mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 00600a13 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00600a14 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00600a15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00600a16 call 0x6011f0 */ esp -= 4; M32(esp) = 0x600a1bu; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x600a16u); RETCHK(0x600a1bu, 0x600a16u); LOADALL;
  /* 00600a1b mov edx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); edx = (u32)(M32(m_)); }
  /* 00600a1e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600a21 cmp dword ptr [esi + 0x30], edx */ { const u32 m_ = (u32)(esi + 0x30u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600a24 je 0x600a3d */ if (ZF_) goto L_00600a3d;
  /* 00600a26 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00600a2a mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00600a2d mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00600a31 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00600a34 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00600a37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600a38 jmp 0x600962 */ goto L_00600962;
L_00600a3d:;
  /* 00600a3d mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00600a41 mov dword ptr [eax], 8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x8u); }
L_00600a47:;
  /* 00600a47 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00600a49 jmp 0x600951 */ goto L_00600951;
L_00600a4e:;
  /* 00600a4e mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00600a52 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00600a56 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 00600a59 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00600a5c mov eax, ebp */ { eax = (u32)(ebp); }
  /* 00600a5e sub eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600a60 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00600a63 add dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600a66 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 00600a68 jmp 0x600969 */ goto L_00600969;
}

void F_00600aa0(CPU *c) {
  NATIVE_HOOK(0x600aa0u) REGS; LOADALL;
L_00600aa0:;
  /* 00600aa0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00600aa4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600aa5 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00600aa9 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00600aac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00600aad call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x600ab0u; SAVEALL; call_ind(c, t_); RETCHK(0x600ab0u, 0x600aadu); LOADALL; }
  /* 00600ab0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600ab3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00600ac0(CPU *c) {
  NATIVE_HOOK(0x600ac0u) REGS; LOADALL;
L_00600ac0:;
  /* 00600ac0 sub esp, 0xf8 */ { u32 a_ = esp, b_ = 0xf8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600ac6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00600ac8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600ac9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00600aca mov ebp, dword ptr [esp + 0x104] */ { const u32 m_ = (u32)(esp + 0x104u); ebp = (u32)(M32(m_)); }
  /* 00600ad1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00600ad2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00600ad3 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00600ad5 mov edi, eax */ { edi = (u32)(eax); }
  /* 00600ad7 mov dword ptr [esp + 0x4c], edx */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(edx); }
  /* 00600adb mov dword ptr [esp + 0x50], edx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(edx); }
  /* 00600adf mov dword ptr [esp + 0x54], edx */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(edx); }
  /* 00600ae3 mov dword ptr [esp + 0x58], edx */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(edx); }
  /* 00600ae7 mov dword ptr [esp + 0x5c], edx */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(edx); }
  /* 00600aeb mov dword ptr [esp + 0x60], edx */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)(edx); }
  /* 00600aef mov dword ptr [esp + 0x64], edx */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(edx); }
  /* 00600af3 mov dword ptr [esp + 0x68], edx */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)(edx); }
  /* 00600af7 mov dword ptr [esp + 0x6c], edx */ { const u32 m_ = (u32)(esp + 0x6cu); M32(m_) = (u32)(edx); }
  /* 00600afb mov dword ptr [esp + 0x70], edx */ { const u32 m_ = (u32)(esp + 0x70u); M32(m_) = (u32)(edx); }
  /* 00600aff mov dword ptr [esp + 0x74], edx */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(edx); }
  /* 00600b03 mov dword ptr [esp + 0x78], edx */ { const u32 m_ = (u32)(esp + 0x78u); M32(m_) = (u32)(edx); }
  /* 00600b07 mov dword ptr [esp + 0x7c], edx */ { const u32 m_ = (u32)(esp + 0x7cu); M32(m_) = (u32)(edx); }
  /* 00600b0b mov dword ptr [esp + 0x80], edx */ { const u32 m_ = (u32)(esp + 0x80u); M32(m_) = (u32)(edx); }
  /* 00600b12 mov dword ptr [esp + 0x84], edx */ { const u32 m_ = (u32)(esp + 0x84u); M32(m_) = (u32)(edx); }
  /* 00600b19 mov dword ptr [esp + 0x88], edx */ { const u32 m_ = (u32)(esp + 0x88u); M32(m_) = (u32)(edx); }
  /* 00600b20 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00600b22 mov esi, ebp */ { esi = (u32)(ebp); }
L_00600b24:;
  /* 00600b24 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00600b26 add dword ptr [esp + ecx*4 + 0x4c], 1 */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x4cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600b2b lea ecx, [esp + ecx*4 + 0x4c] */ ecx = (u32)((u32)(esp + ecx * 4u + 0x4cu));
  /* 00600b2f add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600b32 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600b35 jne 0x600b24 */ if (!ZF_) goto L_00600b24;
  /* 00600b37 cmp dword ptr [esp + 0x4c], ebp */ { const u32 m_ = (u32)(esp + 0x4cu); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600b3b jne 0x600b55 */ if (!ZF_) goto L_00600b55;
  /* 00600b3d mov eax, dword ptr [esp + 0x11c] */ { const u32 m_ = (u32)(esp + 0x11cu); eax = (u32)(M32(m_)); }
  /* 00600b44 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00600b46 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
L_00600b48:;
  /* 00600b48 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600b49 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600b4a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600b4b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00600b4d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600b4e add esp, 0xf8 */ { u32 a_ = esp, b_ = 0xf8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600b54 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600b55:;
  /* 00600b55 mov ebp, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebp = (u32)(M32(m_)); }
  /* 00600b57 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 00600b5b mov ecx, 1 */ { ecx = (u32)(0x1u); }
L_00600b60:;
  /* 00600b60 cmp dword ptr [esp + ecx*4 + 0x4c], edx */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x4cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600b64 jne 0x600b9a */ if (!ZF_) goto L_00600b9a;
  /* 00600b66 cmp dword ptr [esp + ecx*4 + 0x50], edx */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x50u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600b6a jne 0x600b88 */ if (!ZF_) goto L_00600b88;
  /* 00600b6c cmp dword ptr [esp + ecx*4 + 0x54], edx */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x54u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600b70 jne 0x600b8d */ if (!ZF_) goto L_00600b8d;
  /* 00600b72 cmp dword ptr [esp + ecx*4 + 0x58], edx */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x58u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600b76 jne 0x600b92 */ if (!ZF_) goto L_00600b92;
  /* 00600b78 cmp dword ptr [esp + ecx*4 + 0x5c], edx */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x5cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600b7c jne 0x600b97 */ if (!ZF_) goto L_00600b97;
  /* 00600b7e add ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600b81 cmp ecx, 0xf */ { u32 a_ = ecx, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600b84 jbe 0x600b60 */ if ((CF_|ZF_)) goto L_00600b60;
  /* 00600b86 jmp 0x600b9a */ goto L_00600b9a;
L_00600b88:;
  /* 00600b88 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600b8b jmp 0x600b9a */ goto L_00600b9a;
L_00600b8d:;
  /* 00600b8d add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600b90 jmp 0x600b9a */ goto L_00600b9a;
L_00600b92:;
  /* 00600b92 add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600b95 jmp 0x600b9a */ goto L_00600b9a;
L_00600b97:;
  /* 00600b97 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00600b9a:;
  /* 00600b9a cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600b9c mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00600b9e mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00600ba2 jae 0x600baa */ if (!CF_) goto L_00600baa;
  /* 00600ba4 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00600ba8 mov ebp, ecx */ { ebp = (u32)(ecx); }
L_00600baa:;
  /* 00600baa mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 00600baf nop */ ;
L_00600bb0:;
  /* 00600bb0 cmp dword ptr [esp + esi*4 + 0x4c], edx */ { const u32 m_ = (u32)(esp + esi * 4u + 0x4cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600bb4 jne 0x600bbb */ if (!ZF_) goto L_00600bbb;
  /* 00600bb6 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600bb9 jne 0x600bb0 */ if (!ZF_) goto L_00600bb0;
L_00600bbb:;
  /* 00600bbb cmp ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600bbd mov dword ptr [esp + 0x2c], esi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(esi); }
  /* 00600bc1 jbe 0x600bc9 */ if ((CF_|ZF_)) goto L_00600bc9;
  /* 00600bc3 mov dword ptr [esp + 0x10], esi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(esi); }
  /* 00600bc7 mov ebp, esi */ { ebp = (u32)(esi); }
L_00600bc9:;
  /* 00600bc9 mov dword ptr [edi], ebp */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebp); }
  /* 00600bcb mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 00600bd0 shl edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00600bd2 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600bd4 jae 0x600be5 */ if (!CF_) goto L_00600be5;
L_00600bd6:;
  /* 00600bd6 sub edi, dword ptr [esp + ecx*4 + 0x4c] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x4cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600bda js 0x600bfc */ if (SF_) goto L_00600bfc;
  /* 00600bdc add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600bdf add edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600be1 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600be3 jb 0x600bd6 */ if (CF_) goto L_00600bd6;
L_00600be5:;
  /* 00600be5 lea ecx, [esi*4] */ ecx = (u32)((u32)(esi * 4u));
  /* 00600bec mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00600bf0 mov ecx, dword ptr [esp + ecx + 0x4c] */ { const u32 m_ = (u32)(esp + ecx + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 00600bf4 sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600bf6 mov dword ptr [esp + 0x48], edi */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(edi); }
  /* 00600bfa jns 0x600c0c */ if (!SF_) goto L_00600c0c;
L_00600bfc:;
  /* 00600bfc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600bfd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600bfe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600bff mov eax, 0xfffffffd */ { eax = (u32)(0xfffffffdu); }
  /* 00600c04 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600c05 add esp, 0xf8 */ { u32 a_ = esp, b_ = 0xf8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600c0b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600c0c:;
  /* 00600c0c add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600c0e mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00600c12 mov dword ptr [esp + edi + 0x4c], ecx */ { const u32 m_ = (u32)(esp + edi + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 00600c16 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00600c18 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600c1b mov dword ptr [esp + 0x90], edx */ { const u32 m_ = (u32)(esp + 0x90u); M32(m_) = (u32)(edx); }
  /* 00600c22 je 0x600c39 */ if (ZF_) goto L_00600c39;
  /* 00600c24 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00600c26:;
  /* 00600c26 add ecx, dword ptr [esp + edi + 0x50] */ { const u32 m_ = (u32)(esp + edi + 0x50u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600c2a add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600c2d sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600c30 mov dword ptr [esp + edi + 0x90], ecx */ { const u32 m_ = (u32)(esp + edi + 0x90u); M32(m_) = (u32)(ecx); }
  /* 00600c37 jne 0x600c26 */ if (!ZF_) goto L_00600c26;
L_00600c39:;
  /* 00600c39 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00600c3b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00600c3d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00600c40:;
  /* 00600c40 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00600c42 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600c45 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600c47 mov dword ptr [esp + 0x24], esi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(esi); }
  /* 00600c4b je 0x600c6e */ if (ZF_) goto L_00600c6e;
  /* 00600c4d mov esi, dword ptr [esp + ecx*4 + 0x8c] */ { const u32 m_ = (u32)(esp + ecx * 4u + 0x8cu); esi = (u32)(M32(m_)); }
  /* 00600c54 mov ebx, dword ptr [esp + 0x128] */ { const u32 m_ = (u32)(esp + 0x128u); ebx = (u32)(M32(m_)); }
  /* 00600c5b lea ecx, [esp + ecx*4 + 0x8c] */ ecx = (u32)((u32)(esp + ecx * 4u + 0x8cu));
  /* 00600c62 mov dword ptr [ebx + esi*4], edi */ { const u32 m_ = (u32)(ebx + esi * 4u); M32(m_) = (u32)(edi); }
  /* 00600c65 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600c68 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00600c6a mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
L_00600c6e:;
  /* 00600c6e add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600c71 cmp edi, dword ptr [esp + 0x10c] */ { const u32 m_ = (u32)(esp + 0x10cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600c78 jb 0x600c40 */ if (CF_) goto L_00600c40;
  /* 00600c7a mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00600c7e mov ecx, dword ptr [esp + ecx + 0x8c] */ { const u32 m_ = (u32)(esp + ecx + 0x8cu); ecx = (u32)(M32(m_)); }
  /* 00600c85 mov ebx, ebp */ { ebx = (u32)(ebp); }
  /* 00600c87 mov dword ptr [esp + 0x10c], ecx */ { const u32 m_ = (u32)(esp + 0x10cu); M32(m_) = (u32)(ecx); }
  /* 00600c8e mov ecx, dword ptr [esp + 0x128] */ { const u32 m_ = (u32)(esp + 0x128u); ecx = (u32)(M32(m_)); }
  /* 00600c95 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00600c98 neg ebx */ { u32 a_ = ebx; u32 r_ = (0u - a_) & 0xffffffffu; ebx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00600c9a cmp eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600c9e mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
  /* 00600ca2 mov dword ptr [esp + 0x8c], edx */ { const u32 m_ = (u32)(esp + 0x8cu); M32(m_) = (u32)(edx); }
  /* 00600ca9 mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00600cad mov dword ptr [esp + 0xcc], edx */ { const u32 m_ = (u32)(esp + 0xccu); M32(m_) = (u32)(edx); }
  /* 00600cb4 mov dword ptr [esp + 0x44], edx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(edx); }
  /* 00600cb8 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 00600cbc jg 0x600f43 */ if (!(ZF_|LT_)) goto L_00600f43;
  /* 00600cc2 mov esi, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); esi = (u32)(M32(m_)); }
  /* 00600cc6 lea ecx, [eax - 1] */ ecx = (u32)((u32)(eax + 0xffffffffu));
  /* 00600cc9 mov dword ptr [esp + 0x3c], ecx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 00600ccd lea ecx, [esp + eax*4 + 0x4c] */ ecx = (u32)((u32)(esp + eax * 4u + 0x4cu));
  /* 00600cd1 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
L_00600cd5:;
  /* 00600cd5 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00600cd9 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00600cdb cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600cdd mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00600ce1 je 0x600f28 */ if (ZF_) goto L_00600f28;
  /* 00600ce7 jmp 0x600cf0 */ goto L_00600cf0;
L_00600cf0:;
  /* 00600cf0 sub dword ptr [esp + 0x20], 1 */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600cf5 lea ecx, [ebx + ebp] */ ecx = (u32)((u32)(ebx + ebp));
  /* 00600cf8 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600cfa jle 0x600e13 */ if ((ZF_|LT_)) goto L_00600e13;
  /* 00600d00 mov dword ptr [esp + 0x38], ecx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00600d04 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00600d06 sub ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600d08 jmp 0x600d12 */ goto L_00600d12;
L_00600d0a:;
  /* 00600d0a mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 00600d0e mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
L_00600d12:;
  /* 00600d12 add dword ptr [esp + 0x38], ebp */ { const u32 m_ = (u32)(esp + 0x38u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600d16 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00600d1a add ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00600d1c add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600d1e sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00600d20 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600d23 cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600d25 cmova edx, ebp */ { if (!(CF_|ZF_)) { edx = (u32)(ebp); } }
  /* 00600d28 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 00600d2c mov dword ptr [esp + 0x40], ecx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ecx); }
  /* 00600d30 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00600d32 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600d34 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00600d39 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600d3b add ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00600d3e mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 00600d42 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600d44 jbe 0x600d79 */ if ((CF_|ZF_)) goto L_00600d79;
  /* 00600d46 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 00600d4a or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00600d4d sub edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600d51 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600d53 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600d55 jae 0x600d75 */ if (!CF_) goto L_00600d75;
  /* 00600d57 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600d5a cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600d5c jae 0x600d75 */ if (!CF_) goto L_00600d75;
  /* 00600d5e mov edi, edi */ { edi = (u32)(edi); }
L_00600d60:;
  /* 00600d60 mov edi, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edi = (u32)(M32(m_)); }
  /* 00600d63 add ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00600d66 add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600d68 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600d6a jbe 0x600d75 */ if ((CF_|ZF_)) goto L_00600d75;
  /* 00600d6c add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600d6f sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600d71 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600d73 jb 0x600d60 */ if (CF_) goto L_00600d60;
L_00600d75:;
  /* 00600d75 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
L_00600d79:;
  /* 00600d79 mov eax, dword ptr [esp + 0x124] */ { const u32 m_ = (u32)(esp + 0x124u); eax = (u32)(M32(m_)); }
  /* 00600d80 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00600d82 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 00600d87 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00600d89 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 00600d8d add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00600d8f cmp edx, 0x5a0 */ { u32 a_ = edx, b_ = 0x5a0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600d95 ja 0x600f68 */ if (!(CF_|ZF_)) goto L_00600f68;
  /* 00600d9b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600d9d mov ebp, dword ptr [esp + 0x120] */ { const u32 m_ = (u32)(esp + 0x120u); ebp = (u32)(M32(m_)); }
  /* 00600da4 lea ebp, [ebp + eax*8] */ ebp = (u32)((u32)(ebp + eax * 8u));
  /* 00600da8 mov eax, dword ptr [esp + 0x124] */ { const u32 m_ = (u32)(esp + 0x124u); eax = (u32)(M32(m_)); }
  /* 00600daf mov dword ptr [esp + 0x44], ebp */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ebp); }
  /* 00600db3 mov dword ptr [esp + edi*4 + 0xcc], ebp */ { const u32 m_ = (u32)(esp + edi * 4u + 0xccu); M32(m_) = (u32)(ebp); }
  /* 00600dba mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00600dbc je 0x600dfa */ if (ZF_) goto L_00600dfa;
  /* 00600dbe mov esi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); esi = (u32)(M32(m_)); }
  /* 00600dc2 mov dl, byte ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00600dc6 mov eax, esi */ { eax = (u32)(esi); }
  /* 00600dc8 mov byte ptr [esp + 0x30], cl */ { const u32 m_ = (u32)(esp + 0x30u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00600dcc mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 00600dd0 mov dword ptr [esp + edi*4 + 0x8c], esi */ { const u32 m_ = (u32)(esp + edi * 4u + 0x8cu); M32(m_) = (u32)(esi); }
  /* 00600dd7 shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600dd9 mov ecx, dword ptr [esp + edi*4 + 0xc8] */ { const u32 m_ = (u32)(esp + edi * 4u + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00600de0 mov esi, ebp */ { esi = (u32)(ebp); }
  /* 00600de2 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600de4 mov byte ptr [esp + 0x31], dl */ { const u32 m_ = (u32)(esp + 0x31u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00600de8 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 00600dec sar esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00600def sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600df1 mov dword ptr [ecx + eax*8], edx */ { const u32 m_ = (u32)(ecx + eax * 8u); M32(m_) = (u32)(edx); }
  /* 00600df4 mov dword ptr [ecx + eax*8 + 4], esi */ { const u32 m_ = (u32)(ecx + eax * 8u + 0x4u); M32(m_) = (u32)(esi); }
  /* 00600df8 jmp 0x600e03 */ goto L_00600e03;
L_00600dfa:;
  /* 00600dfa mov eax, dword ptr [esp + 0x11c] */ { const u32 m_ = (u32)(esp + 0x11cu); eax = (u32)(M32(m_)); }
  /* 00600e01 mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
L_00600e03:;
  /* 00600e03 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 00600e07 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00600e0b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600e0d jg 0x600d0a */ if (!(ZF_|LT_)) goto L_00600d0a;
L_00600e13:;
  /* 00600e13 mov ecx, dword ptr [esp + 0x128] */ { const u32 m_ = (u32)(esp + 0x128u); ecx = (u32)(M32(m_)); }
  /* 00600e1a mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 00600e1e mov dl, al */ { edx = (edx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00600e20 sub dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00600e22 mov byte ptr [esp + 0x31], dl */ { const u32 m_ = (u32)(esp + 0x31u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00600e26 mov edx, dword ptr [esp + 0x10c] */ { const u32 m_ = (u32)(esp + 0x10cu); edx = (u32)(M32(m_)); }
  /* 00600e2d lea ecx, [ecx + edx*4] */ ecx = (u32)((u32)(ecx + edx * 4u));
  /* 00600e30 cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600e32 jb 0x600e3b */ if (CF_) goto L_00600e3b;
  /* 00600e34 mov byte ptr [esp + 0x30], 0xc0 */ { const u32 m_ = (u32)(esp + 0x30u); M8(m_) = (u8)(0xc0u); }
  /* 00600e39 jmp 0x600e81 */ goto L_00600e81;
L_00600e3b:;
  /* 00600e3b mov esi, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); esi = (u32)(M32(m_)); }
  /* 00600e3e mov ecx, dword ptr [esp + 0x110] */ { const u32 m_ = (u32)(esp + 0x110u); ecx = (u32)(M32(m_)); }
  /* 00600e45 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600e47 jae 0x600e59 */ if (!CF_) goto L_00600e59;
  /* 00600e49 cmp esi, 0x100 */ { u32 a_ = esi, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600e4f sbb dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00600e51 and dl, 0xa0 */ { u32 a_ = (edx & 0xffu), b_ = 0xa0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00600e54 add dl, 0x60 */ { u32 a_ = (edx & 0xffu), b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00600e57 jmp 0x600e76 */ goto L_00600e76;
L_00600e59:;
  /* 00600e59 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600e5b mov ecx, dword ptr [esp + 0x118] */ { const u32 m_ = (u32)(esp + 0x118u); ecx = (u32)(M32(m_)); }
  /* 00600e62 add esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600e64 add esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00600e66 mov dl, byte ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00600e69 mov ecx, dword ptr [esp + 0x114] */ { const u32 m_ = (u32)(esp + 0x114u); ecx = (u32)(M32(m_)); }
  /* 00600e70 mov esi, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); esi = (u32)(M32(m_)); }
  /* 00600e73 add dl, 0x50 */ { u32 a_ = (edx & 0xffu), b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_00600e76:;
  /* 00600e76 add ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00600e79 mov byte ptr [esp + 0x30], dl */ { const u32 m_ = (u32)(esp + 0x30u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00600e7d mov dword ptr [esp + 0x24], ebp */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebp); }
L_00600e81:;
  /* 00600e81 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00600e83 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00600e87 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600e89 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 00600e8e shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00600e90 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00600e92 shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600e94 cmp eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600e98 jae 0x600ebb */ if (!CF_) goto L_00600ebb;
  /* 00600e9a mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 00600e9e lea ecx, [ecx + eax*8] */ ecx = (u32)((u32)(ecx + eax * 8u));
L_00600ea1:;
  /* 00600ea1 mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 00600ea5 mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 00600ea7 lea ebp, [edx*8] */ ebp = (u32)((u32)(edx * 8u));
  /* 00600eae mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 00600eb1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600eb3 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00600eb5 cmp eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600eb9 jb 0x600ea1 */ if (CF_) goto L_00600ea1;
L_00600ebb:;
  /* 00600ebb mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 00600ebf mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 00600ec3 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00600ec8 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600eca test edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600ecc je 0x600ed8 */ if (ZF_) goto L_00600ed8;
  /* 00600ece mov edi, edi */ { edi = (u32)(edi); }
L_00600ed0:;
  /* 00600ed0 xor edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00600ed2 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600ed4 test edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600ed6 jne 0x600ed0 */ if (!ZF_) goto L_00600ed0;
L_00600ed8:;
  /* 00600ed8 xor edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00600eda mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00600edf mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00600ee1 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600ee3 mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
  /* 00600ee7 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600eea and eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00600eec cmp eax, dword ptr [esp + edi*4 + 0x8c] */ { const u32 m_ = (u32)(esp + edi * 4u + 0x8cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600ef3 je 0x600f13 */ if (ZF_) goto L_00600f13;
L_00600ef5:;
  /* 00600ef5 sub ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00600ef9 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00600efe mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00600f00 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00600f02 sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00600f05 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600f08 and eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00600f0a cmp eax, dword ptr [esp + edi*4 + 0x8c] */ { const u32 m_ = (u32)(esp + edi * 4u + 0x8cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600f11 jne 0x600ef5 */ if (!ZF_) goto L_00600ef5;
L_00600f13:;
  /* 00600f13 cmp dword ptr [esp + 0x20], 0 */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600f18 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00600f1c mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 00600f20 jne 0x600cf0 */ if (!ZF_) goto L_00600cf0;
  /* 00600f26 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_00600f28:;
  /* 00600f28 add dword ptr [esp + 0x14], 4 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600f2d add dword ptr [esp + 0x3c], 1 */ { const u32 m_ = (u32)(esp + 0x3cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600f32 add eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00600f35 cmp eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600f39 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00600f3d jle 0x600cd5 */ if ((ZF_|LT_)) goto L_00600cd5;
L_00600f43:;
  /* 00600f43 cmp dword ptr [esp + 0x48], edx */ { const u32 m_ = (u32)(esp + 0x48u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600f47 je 0x600b48 */ if (ZF_) goto L_00600b48;
  /* 00600f4d cmp dword ptr [esp + 0x2c], 1 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600f52 je 0x600b48 */ if (ZF_) goto L_00600b48;
  /* 00600f58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600f59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600f5a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600f5b mov eax, 0xfffffffb */ { eax = (u32)(0xfffffffbu); }
  /* 00600f60 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600f61 add esp, 0xf8 */ { u32 a_ = esp, b_ = 0xf8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600f67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600f68:;
  /* 00600f68 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600f69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600f6a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600f6b mov eax, 0xfffffffc */ { eax = (u32)(0xfffffffcu); }
  /* 00600f70 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600f71 add esp, 0xf8 */ { u32 a_ = esp, b_ = 0xf8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600f77 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00600f80(CPU *c) {
  NATIVE_HOOK(0x600f80u) REGS; LOADALL;
L_00600f80:;
  /* 00600f80 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00600f81 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600f82 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00600f83 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 00600f87 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00600f8a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00600f8c push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00600f8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600f8f mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 00600f97 call dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x600f9au; SAVEALL; call_ind(c, t_); RETCHK(0x600f9au, 0x600f97u); LOADALL; }
  /* 00600f9a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00600f9c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600f9f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00600fa1 jne 0x600fac */ if (!ZF_) goto L_00600fac;
  /* 00600fa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600fa4 mov eax, 0xfffffffc */ { eax = (u32)(0xfffffffcu); }
  /* 00600fa9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600faa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00600fab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600fac:;
  /* 00600fac mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00600fb0 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00600fb4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00600fb5 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 00600fb9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00600fba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600fbb lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 00600fbf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00600fc0 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00600fc4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00600fc5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600fc6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00600fc8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00600fca push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00600fcc push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00600fce mov eax, ebp */ { eax = (u32)(ebp); }
  /* 00600fd0 call 0x600ac0 */ esp -= 4; M32(esp) = 0x600fd5u; SAVEALL; F_00600ac0(c); ABI_CHECK(0x600ac0u, 0x600fd0u); RETCHK(0x600fd5u, 0x600fd0u); LOADALL;
  /* 00600fd5 mov esi, eax */ { esi = (u32)(eax); }
  /* 00600fd7 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600fda cmp esi, -3 */ { u32 a_ = esi, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600fdd jne 0x600ff9 */ if (!ZF_) goto L_00600ff9;
  /* 00600fdf mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00600fe2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600fe3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00600fe4 mov dword ptr [edi + 0x18], 0x67fb38 */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0x67fb38u); }
  /* 00600feb call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x600feeu; SAVEALL; call_ind(c, t_); RETCHK(0x600feeu, 0x600febu); LOADALL; }
  /* 00600fee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600ff1 mov eax, esi */ { eax = (u32)(esi); }
  /* 00600ff3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600ff4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600ff5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600ff6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600ff7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00600ff8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600ff9:;
  /* 00600ff9 cmp esi, -5 */ { u32 a_ = esi, b_ = 0xfffffffbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600ffc je 0x601004 */ if (ZF_) goto L_00601004;
  /* 00600ffe cmp dword ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601002 jne 0x601010 */ if (!ZF_) goto L_00601010;
L_00601004:;
  /* 00601004 mov dword ptr [edi + 0x18], 0x67fb60 */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0x67fb60u); }
  /* 0060100b mov esi, 0xfffffffd */ { esi = (u32)(0xfffffffdu); }
L_00601010:;
  /* 00601010 mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00601013 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601014 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601015 call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601018u; SAVEALL; call_ind(c, t_); RETCHK(0x601018u, 0x601015u); LOADALL; }
  /* 00601018 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060101b mov eax, esi */ { eax = (u32)(esi); }
  /* 0060101d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060101e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060101f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601020 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00601021 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601022 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601030(CPU *c) {
  NATIVE_HOOK(0x601030u) REGS; LOADALL;
L_00601030:;
  /* 00601030 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601031 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601032 mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 00601036 mov eax, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (u32)(M32(m_)); }
  /* 00601039 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060103a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0060103c push 0x120 */ { u32 v_ = 0x120u; esp -= 4; M32(esp) = v_; }
  /* 00601041 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601042 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0060104a call dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60104du; SAVEALL; call_ind(c, t_); RETCHK(0x60104du, 0x60104au); LOADALL; }
  /* 0060104d mov edi, eax */ { edi = (u32)(eax); }
  /* 0060104f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601052 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601054 jne 0x60105f */ if (!ZF_) goto L_0060105f;
  /* 00601056 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601057 mov eax, 0xfffffffc */ { eax = (u32)(0xfffffffcu); }
  /* 0060105c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060105d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060105e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060105f:;
  /* 0060105f mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00601063 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 00601067 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00601068 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 0060106c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060106d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060106e lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 00601072 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601073 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00601077 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00601078 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601079 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 0060107d push 0x63cde0 */ { u32 v_ = 0x63cde0u; esp -= 4; M32(esp) = v_; }
  /* 00601082 push 0x63cd60 */ { u32 v_ = 0x63cd60u; esp -= 4; M32(esp) = v_; }
  /* 00601087 push 0x101 */ { u32 v_ = 0x101u; esp -= 4; M32(esp) = v_; }
  /* 0060108c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060108d call 0x600ac0 */ esp -= 4; M32(esp) = 0x601092u; SAVEALL; F_00600ac0(c); ABI_CHECK(0x600ac0u, 0x60108du); RETCHK(0x601092u, 0x60108du); LOADALL;
  /* 00601092 mov esi, eax */ { esi = (u32)(eax); }
  /* 00601094 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601097 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601099 jne 0x60116e */ if (!ZF_) goto L_0060116e;
  /* 0060109f mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 006010a3 cmp dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006010a5 je 0x601192 */ if (ZF_) goto L_00601192;
  /* 006010ab mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 006010af mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 006010b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006010b4 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 006010b8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006010b9 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 006010bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006010be mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 006010c2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006010c3 push 0x63ced8 */ { u32 v_ = 0x63ced8u; esp -= 4; M32(esp) = v_; }
  /* 006010c8 push 0x63ce60 */ { u32 v_ = 0x63ce60u; esp -= 4; M32(esp) = v_; }
  /* 006010cd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006010ce lea ecx, [eax + ebp*4] */ ecx = (u32)((u32)(eax + ebp * 4u));
  /* 006010d1 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 006010d5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006010d6 call 0x600ac0 */ esp -= 4; M32(esp) = 0x6010dbu; SAVEALL; F_00600ac0(c); ABI_CHECK(0x600ac0u, 0x6010d6u); RETCHK(0x6010dbu, 0x6010d6u); LOADALL;
  /* 006010db mov esi, eax */ { esi = (u32)(eax); }
  /* 006010dd add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006010e0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006010e2 jne 0x601107 */ if (!ZF_) goto L_00601107;
  /* 006010e4 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 006010e8 cmp dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006010ea jne 0x6010f4 */ if (!ZF_) goto L_006010f4;
  /* 006010ec cmp ebp, 0x101 */ { u32 a_ = ebp, b_ = 0x101u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006010f2 ja 0x60114f */ if (!(CF_|ZF_)) goto L_0060114f;
L_006010f4:;
  /* 006010f4 mov edx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); edx = (u32)(M32(m_)); }
  /* 006010f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006010f8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006010f9 call dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6010fcu; SAVEALL; call_ind(c, t_); RETCHK(0x6010fcu, 0x6010f9u); LOADALL; }
  /* 006010fc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006010ff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601100 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00601101 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601102 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00601104 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00601105 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601106 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00601107:;
  /* 00601107 cmp esi, -3 */ { u32 a_ = esi, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060110a jne 0x601126 */ if (!ZF_) goto L_00601126;
  /* 0060110c mov eax, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (u32)(M32(m_)); }
  /* 0060110f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601110 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601111 mov dword ptr [ebx + 0x18], 0x67fbc8 */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0x67fbc8u); }
  /* 00601118 call dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60111bu; SAVEALL; call_ind(c, t_); RETCHK(0x60111bu, 0x601118u); LOADALL; }
  /* 0060111b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060111e mov eax, esi */ { eax = (u32)(esi); }
  /* 00601120 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601121 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00601122 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601123 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00601124 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601125 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00601126:;
  /* 00601126 cmp esi, -5 */ { u32 a_ = esi, b_ = 0xfffffffbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601129 jne 0x60114a */ if (!ZF_) goto L_0060114a;
  /* 0060112b mov eax, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (u32)(M32(m_)); }
  /* 0060112e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060112f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601130 mov dword ptr [ebx + 0x18], 0x67fbe8 */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0x67fbe8u); }
  /* 00601137 mov esi, 0xfffffffd */ { esi = (u32)(0xfffffffdu); }
  /* 0060113c call dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60113fu; SAVEALL; call_ind(c, t_); RETCHK(0x60113fu, 0x60113cu); LOADALL; }
  /* 0060113f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601142 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601144 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601145 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00601146 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601147 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00601148 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601149 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060114a:;
  /* 0060114a cmp esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060114d je 0x60115b */ if (ZF_) goto L_0060115b;
L_0060114f:;
  /* 0060114f mov dword ptr [ebx + 0x18], 0x67fc04 */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0x67fc04u); }
  /* 00601156 mov esi, 0xfffffffd */ { esi = (u32)(0xfffffffdu); }
L_0060115b:;
  /* 0060115b mov eax, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (u32)(M32(m_)); }
  /* 0060115e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060115f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601160 call dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601163u; SAVEALL; call_ind(c, t_); RETCHK(0x601163u, 0x601160u); LOADALL; }
  /* 00601163 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601166 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601168 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601169 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060116a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060116b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060116c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060116d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060116e:;
  /* 0060116e cmp esi, -3 */ { u32 a_ = esi, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601171 jne 0x60118d */ if (!ZF_) goto L_0060118d;
  /* 00601173 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00601176 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601177 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601178 mov dword ptr [ebx + 0x18], 0x67fb84 */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0x67fb84u); }
  /* 0060117f call dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601182u; SAVEALL; call_ind(c, t_); RETCHK(0x601182u, 0x60117fu); LOADALL; }
  /* 00601182 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601185 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601187 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601188 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00601189 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060118a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060118b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060118c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060118d:;
  /* 0060118d cmp esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601190 je 0x60119e */ if (ZF_) goto L_0060119e;
L_00601192:;
  /* 00601192 mov dword ptr [ebx + 0x18], 0x67fba8 */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0x67fba8u); }
  /* 00601199 mov esi, 0xfffffffd */ { esi = (u32)(0xfffffffdu); }
L_0060119e:;
  /* 0060119e mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 006011a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006011a2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006011a3 call dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6011a6u; SAVEALL; call_ind(c, t_); RETCHK(0x6011a6u, 0x6011a3u); LOADALL; }
  /* 006011a6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006011a9 mov eax, esi */ { eax = (u32)(esi); }
  /* 006011ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006011ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006011ad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006011ae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006011af pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006011b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006011c0(CPU *c) {
  NATIVE_HOOK(0x6011c0u) REGS; LOADALL;
L_006011c0:;
  /* 006011c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 006011c4 mov ecx, dword ptr [0x67fc28] */ { const u32 m_ = (u32)(0x67fc28u); ecx = (u32)(M32(m_)); }
  /* 006011ca mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 006011ce mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 006011d0 mov eax, dword ptr [0x67fc2c] */ { const u32 m_ = (u32)(0x67fc2cu); eax = (u32)(M32(m_)); }
  /* 006011d5 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006011d9 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 006011db mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 006011df mov dword ptr [ecx], 0x67fc30 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x67fc30u); }
  /* 006011e5 mov dword ptr [edx], 0x680c30 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x680c30u); }
  /* 006011eb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006011ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006011f0(CPU *c) {
  NATIVE_HOOK(0x6011f0u) REGS; LOADALL;
L_006011f0:;
  /* 006011f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006011f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006011f2 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 006011f6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006011f7 mov ebp, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ebp = (u32)(M32(m_)); }
  /* 006011fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006011fb mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 006011ff mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00601202 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601203 mov edi, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); edi = (u32)(M32(m_)); }
  /* 00601206 cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601208 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0060120c mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 00601210 jbe 0x601215 */ if ((CF_|ZF_)) goto L_00601215;
  /* 00601212 mov ebp, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ebp = (u32)(M32(m_)); }
L_00601215:;
  /* 00601215 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00601218 sub ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0060121a cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060121c cmova ebp, eax */ { if (!(CF_|ZF_)) { ebp = (u32)(eax); } }
  /* 0060121f test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601221 je 0x601232 */ if (ZF_) goto L_00601232;
  /* 00601223 cmp dword ptr [esp + 0x20], -5 */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = M32(m_), b_ = 0xfffffffbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601228 jne 0x601232 */ if (!ZF_) goto L_00601232;
  /* 0060122a mov dword ptr [esp + 0x20], 0 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x0u); }
L_00601232:;
  /* 00601232 add dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00601235 sub eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00601237 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0060123a mov eax, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); eax = (u32)(M32(m_)); }
  /* 0060123d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060123f je 0x601252 */ if (ZF_) goto L_00601252;
  /* 00601241 mov ecx, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 00601244 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00601245 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601246 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601247 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x601249u; SAVEALL; call_ind(c, t_); RETCHK(0x601249u, 0x601247u); LOADALL; }
  /* 00601249 mov dword ptr [ebx + 0x3c], eax */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(eax); }
  /* 0060124c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060124f mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
L_00601252:;
  /* 00601252 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00601256 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 00601258 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0060125a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0060125d mov esi, edi */ { esi = (u32)(edi); }
  /* 0060125f mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00601263 add dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00601267 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00601269 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0060126b and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060126e rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00601270 mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00601273 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00601275 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601277 jne 0x6012f0 */ if (!ZF_) goto L_006012f0;
  /* 00601279 cmp dword ptr [ebx + 0x34], ecx */ { const u32 m_ = (u32)(ebx + 0x34u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060127c mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0060127f mov dword ptr [esp + 0x18], esi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(esi); }
  /* 00601283 jne 0x601288 */ if (!ZF_) goto L_00601288;
  /* 00601285 mov dword ptr [ebx + 0x34], esi */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(esi); }
L_00601288:;
  /* 00601288 mov ebp, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ebp = (u32)(M32(m_)); }
  /* 0060128b mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 0060128f mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00601292 sub ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00601294 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601296 cmova ebp, eax */ { if (!(CF_|ZF_)) { ebp = (u32)(eax); } }
  /* 00601299 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060129b je 0x6012ac */ if (ZF_) goto L_006012ac;
  /* 0060129d cmp dword ptr [esp + 0x20], -5 */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = M32(m_), b_ = 0xfffffffbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006012a2 jne 0x6012ac */ if (!ZF_) goto L_006012ac;
  /* 006012a4 mov dword ptr [esp + 0x20], 0 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x0u); }
L_006012ac:;
  /* 006012ac add dword ptr [edi + 0x14], ebp */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 006012af sub eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006012b1 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 006012b4 mov eax, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); eax = (u32)(M32(m_)); }
  /* 006012b7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006012b9 je 0x6012cc */ if (ZF_) goto L_006012cc;
  /* 006012bb mov ecx, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 006012be push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006012bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006012c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006012c1 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x6012c3u; SAVEALL; call_ind(c, t_); RETCHK(0x6012c3u, 0x6012c1u); LOADALL; }
  /* 006012c3 mov dword ptr [ebx + 0x3c], eax */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(eax); }
  /* 006012c6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006012c9 mov dword ptr [edi + 0x30], eax */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(eax); }
L_006012cc:;
  /* 006012cc mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006012d0 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 006012d2 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 006012d4 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 006012d7 mov edi, eax */ { edi = (u32)(eax); }
  /* 006012d9 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 006012db mov ecx, edx */ { ecx = (u32)(edx); }
  /* 006012dd add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006012df and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006012e2 add dword ptr [esp + 0x18], ebp */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 006012e6 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 006012ea mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006012ee rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_006012f0:;
  /* 006012f0 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 006012f4 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 006012f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006012f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006012fa mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 006012fd mov dword ptr [ebx + 0x30], eax */ { const u32 m_ = (u32)(ebx + 0x30u); M32(m_) = (u32)(eax); }
  /* 00601300 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00601304 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00601305 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00601306 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601307 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601310(CPU *c) {
  NATIVE_HOOK(0x601310u) REGS; LOADALL;
L_00601310:;
  /* 00601310 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601313 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00601317 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0060131b mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 0060131e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0060131f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00601320 mov ebp, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebp = (u32)(M32(m_)); }
  /* 00601322 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00601325 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601326 mov esi, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); esi = (u32)(M32(m_)); }
  /* 00601329 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060132a mov edi, dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); edi = (u32)(M32(m_)); }
  /* 0060132d cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060132f mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00601333 mov eax, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00601336 mov dword ptr [esp + 0x18], ebp */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebp); }
  /* 0060133a jae 0x601347 */ if (!CF_) goto L_00601347;
  /* 0060133c sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0060133e sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00601341 mov dword ptr [esp + 0x14], esi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(esi); }
  /* 00601345 jmp 0x601350 */ goto L_00601350;
L_00601347:;
  /* 00601347 mov ecx, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0060134a sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060134c mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
L_00601350:;
  /* 00601350 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00601354 mov ecx, dword ptr [ecx*4 + 0x680d30] */ { const u32 m_ = (u32)(ecx * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 0060135b mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0060135f mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00601363 mov ecx, dword ptr [ecx*4 + 0x680d30] */ { const u32 m_ = (u32)(ecx * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 0060136a mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0060136e mov edi, edi */ { edi = (u32)(edi); }
L_00601370:;
  /* 00601370 cmp eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601373 jae 0x601393 */ if (!CF_) goto L_00601393;
L_00601375:;
  /* 00601375 movzx esi, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); esi = (u32)(M8(m_)); }
  /* 00601379 sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060137e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00601380 shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00601382 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00601385 add ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00601388 or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0060138a cmp eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060138d jb 0x601375 */ if (CF_) goto L_00601375;
  /* 0060138f mov dword ptr [esp + 0x18], ebp */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebp); }
L_00601393:;
  /* 00601393 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00601397 mov esi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); esi = (u32)(M32(m_)); }
  /* 0060139b and ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060139d movzx ebx, byte ptr [esi + ecx*8] */ { const u32 m_ = (u32)(esi + ecx * 8u); ebx = (u32)(M8(m_)); }
  /* 006013a1 lea esi, [esi + ecx*8] */ esi = (u32)((u32)(esi + ecx * 8u));
  /* 006013a4 movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 006013a8 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006013aa test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006013ac je 0x60153b */ if (ZF_) goto L_0060153b;
  /* 006013b2 movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 006013b6 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006013b8 test bl, 0x10 */ { u32 a_ = (ebx & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006013bb jne 0x6013f5 */ if (!ZF_) goto L_006013f5;
  /* 006013bd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_006013c0:;
  /* 006013c0 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006013c3 jne 0x6015b5 */ if (!ZF_) goto L_006015b5;
  /* 006013c9 mov ecx, dword ptr [ebx*4 + 0x680d30] */ { const u32 m_ = (u32)(ebx * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 006013d0 and ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006013d2 add ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006013d5 movzx ebx, byte ptr [esi + ecx*8] */ { const u32 m_ = (u32)(esi + ecx * 8u); ebx = (u32)(M8(m_)); }
  /* 006013d9 lea esi, [esi + ecx*8] */ esi = (u32)((u32)(esi + ecx * 8u));
  /* 006013dc movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 006013e0 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006013e2 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006013e4 je 0x60153b */ if (ZF_) goto L_0060153b;
  /* 006013ea movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 006013ee sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006013f0 test bl, 0x10 */ { u32 a_ = (ebx & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006013f3 je 0x6013c0 */ if (ZF_) goto L_006013c0;
L_006013f5:;
  /* 006013f5 and ebx, 0xf */ { u32 a_ = ebx, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 006013f8 mov ecx, dword ptr [ebx*4 + 0x680d30] */ { const u32 m_ = (u32)(ebx * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 006013ff and ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00601401 add ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00601404 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00601406 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0060140a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0060140c shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0060140e cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601411 jae 0x601431 */ if (!CF_) goto L_00601431;
L_00601413:;
  /* 00601413 movzx esi, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); esi = (u32)(M8(m_)); }
  /* 00601417 sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060141c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0060141e shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00601420 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00601423 add ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00601426 or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00601428 cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060142b jb 0x601413 */ if (CF_) goto L_00601413;
  /* 0060142d mov dword ptr [esp + 0x18], ebp */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebp); }
L_00601431:;
  /* 00601431 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00601435 mov esi, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); esi = (u32)(M32(m_)); }
  /* 00601439 and ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060143b movzx ebx, byte ptr [esi + ecx*8] */ { const u32 m_ = (u32)(esi + ecx * 8u); ebx = (u32)(M8(m_)); }
  /* 0060143f lea esi, [esi + ecx*8] */ esi = (u32)((u32)(esi + ecx * 8u));
  /* 00601442 movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 00601446 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00601448 movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 0060144c sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060144e test bl, 0x10 */ { u32 a_ = (ebx & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00601451 jne 0x601480 */ if (!ZF_) goto L_00601480;
L_00601453:;
  /* 00601453 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00601456 jne 0x6015a8 */ if (!ZF_) goto L_006015a8;
  /* 0060145c mov ecx, dword ptr [ebx*4 + 0x680d30] */ { const u32 m_ = (u32)(ebx * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 00601463 and ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00601465 add ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00601468 movzx ebx, byte ptr [esi + ecx*8] */ { const u32 m_ = (u32)(esi + ecx * 8u); ebx = (u32)(M8(m_)); }
  /* 0060146c lea esi, [esi + ecx*8] */ esi = (u32)((u32)(esi + ecx * 8u));
  /* 0060146f movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 00601473 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00601475 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00601477 test bl, 0x10 */ { u32 a_ = (ebx & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060147a mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0060147e je 0x601453 */ if (ZF_) goto L_00601453;
L_00601480:;
  /* 00601480 and ebx, 0xf */ { u32 a_ = ebx, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00601483 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601485 jae 0x6014b1 */ if (!CF_) goto L_006014b1;
  /* 00601487 jmp 0x601490 */ goto L_00601490;
L_00601490:;
  /* 00601490 movzx ebp, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); ebp = (u32)(M8(m_)); }
  /* 00601494 sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00601499 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0060149b shl ebp, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 0060149d add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006014a0 or edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006014a2 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 006014a6 add ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006014a9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006014ab mov dword ptr [esp + 0x18], ebp */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebp); }
  /* 006014af jb 0x601490 */ if (CF_) goto L_00601490;
L_006014b1:;
  /* 006014b1 mov ebp, dword ptr [ebx*4 + 0x680d30] */ { const u32 m_ = (u32)(ebx * 4u + 0x680d30u); ebp = (u32)(M32(m_)); }
  /* 006014b8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 006014ba and ebp, edx */ { u32 a_ = ebp, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 006014bc add ebp, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = ebp, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006014bf shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006014c1 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 006014c5 mov ecx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 006014c8 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006014ca mov ebx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebx = (u32)(M32(m_)); }
  /* 006014ce sub dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 006014d2 mov esi, edi */ { esi = (u32)(edi); }
  /* 006014d4 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 006014d6 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006014d8 jb 0x6014fa */ if (CF_) goto L_006014fa;
  /* 006014da mov esi, edi */ { esi = (u32)(edi); }
  /* 006014dc sub esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 006014de movzx ecx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M8(m_)); }
  /* 006014e1 mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006014e3 movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 006014e7 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 006014ea add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006014ed mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006014ef add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006014f2 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 006014f5 sub ebx, 2 */ { u32 a_ = ebx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 006014f8 jmp 0x601526 */ goto L_00601526;
L_006014fa:;
  /* 006014fa sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006014fc add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006014fe mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 00601500 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 00601504 mov esi, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); esi = (u32)(M32(m_)); }
  /* 00601507 sub esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00601509 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060150b jbe 0x601526 */ if ((CF_|ZF_)) goto L_00601526;
  /* 0060150d sub ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0060150f nop */ ;
L_00601510:;
  /* 00601510 mov cl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00601512 mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00601514 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00601517 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0060151a sub ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0060151d jne 0x601510 */ if (!ZF_) goto L_00601510;
  /* 0060151f mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 00601523 mov esi, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); esi = (u32)(M32(m_)); }
L_00601526:;
  /* 00601526 mov cl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00601528 mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0060152a add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0060152d add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00601530 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00601533 jne 0x601526 */ if (!ZF_) goto L_00601526;
  /* 00601535 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 00601539 jmp 0x60154a */ goto L_0060154a;
L_0060153b:;
  /* 0060153b sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060153d mov cl, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00601540 mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00601542 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00601545 sub dword ptr [esp + 0x14], 1 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_0060154a:;
  /* 0060154a cmp dword ptr [esp + 0x14], 0x102 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_), b_ = 0x102u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601552 jb 0x60155f */ if (CF_) goto L_0060155f;
  /* 00601554 cmp dword ptr [esp + 0x10], 0xa */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601559 jae 0x601370 */ if (!CF_) goto L_00601370;
L_0060155f:;
  /* 0060155f mov esi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); esi = (u32)(M32(m_)); }
  /* 00601563 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00601566 sub ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060156a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0060156c shr ebx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0060156f cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601571 cmovb ecx, ebx */ { if (CF_) { ecx = (u32)(ebx); } }
  /* 00601574 mov ebx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebx = (u32)(M32(m_)); }
  /* 00601578 mov dword ptr [ebx + 0x20], edx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(edx); }
  /* 0060157b lea edx, [ecx*8] */ edx = (u32)((u32)(ecx * 8u));
  /* 00601582 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00601584 mov dword ptr [ebx + 0x1c], eax */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00601587 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0060158b sub ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0060158d add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060158f mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00601592 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 00601594 sub ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00601596 mov dword ptr [esi], ebp */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebp); }
  /* 00601598 add dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060159b mov dword ptr [ebx + 0x34], edi */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(edi); }
  /* 0060159e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060159f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006015a0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006015a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006015a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006015a4 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006015a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006015a8:;
  /* 006015a8 mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 006015ac mov dword ptr [ecx + 0x18], 0x680d74 */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0x680d74u); }
  /* 006015b3 jmp 0x601611 */ goto L_00601611;
L_006015b5:;
  /* 006015b5 test bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006015b8 je 0x601606 */ if (ZF_) goto L_00601606;
  /* 006015ba mov esi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); esi = (u32)(M32(m_)); }
  /* 006015be mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006015c1 sub ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006015c5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 006015c7 shr ebx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 006015ca cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006015cc cmovb ecx, ebx */ { if (CF_) { ecx = (u32)(ebx); } }
  /* 006015cf mov ebx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebx = (u32)(M32(m_)); }
  /* 006015d3 mov dword ptr [ebx + 0x20], edx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(edx); }
  /* 006015d6 lea edx, [ecx*8] */ edx = (u32)((u32)(ecx * 8u));
  /* 006015dd sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006015df mov dword ptr [ebx + 0x1c], eax */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 006015e2 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006015e6 sub ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006015e8 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006015ea mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 006015ed mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 006015ef sub ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006015f1 mov dword ptr [esi], ebp */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebp); }
  /* 006015f3 add dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 006015f6 mov dword ptr [ebx + 0x34], edi */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(edi); }
  /* 006015f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006015fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006015fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006015fc mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00601601 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00601602 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601605 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00601606:;
  /* 00601606 mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0060160a mov dword ptr [ecx + 0x18], 0x680d8c */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0x680d8cu); }
L_00601611:;
  /* 00601611 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00601614 sub esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00601618 mov dword ptr [esp + 0x28], esi */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(esi); }
  /* 0060161c mov esi, eax */ { esi = (u32)(eax); }
  /* 0060161e shr esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00601621 cmp esi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601625 jb 0x60162b */ if (CF_) goto L_0060162b;
  /* 00601627 mov esi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); esi = (u32)(M32(m_)); }
L_0060162b:;
  /* 0060162b mov ebx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebx = (u32)(M32(m_)); }
  /* 0060162f mov dword ptr [ebx + 0x20], edx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(edx); }
  /* 00601632 lea edx, [esi*8] */ edx = (u32)((u32)(esi * 8u));
  /* 00601639 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060163b sub ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0060163d mov dword ptr [ebx + 0x1c], eax */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00601640 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00601644 mov edx, ebp */ { edx = (u32)(ebp); }
  /* 00601646 sub edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00601648 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0060164a add dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060164d mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 0060164f mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 00601652 mov dword ptr [ebx + 0x34], edi */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(edi); }
  /* 00601655 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601656 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601657 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00601658 mov eax, 0xfffffffd */ { eax = (u32)(0xfffffffdu); }
  /* 0060165d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060165e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601661 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601662(CPU *c) {
  NATIVE_HOOK(0x601662u) REGS; LOADALL;
L_00601662:;
  /* 00601662 jmp dword ptr [0x62e09c] */ { const u32 m_ = (u32)(0x62e09cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00601668(CPU *c) {
  NATIVE_HOOK(0x601668u) REGS; LOADALL;
L_00601668:;
  /* 00601668 jmp dword ptr [0x62e478] */ { const u32 m_ = (u32)(0x62e478u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0060166e(CPU *c) {
  NATIVE_HOOK(0x60166eu) REGS; LOADALL;
L_0060166e:;
  /* 0060166e mov eax, 0x61b1e2 */ { eax = (u32)(0x61b1e2u); }
  /* 00601673 call 0x5fee30 */ esp -= 4; M32(esp) = 0x601678u; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x601673u); RETCHK(0x601678u, 0x601673u); LOADALL;
  /* 00601678 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060167b push 0x63cf94 */ { u32 v_ = 0x63cf94u; esp -= 4; M32(esp) = v_; }
  /* 00601680 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00601683 call 0x403060 */ esp -= 4; M32(esp) = 0x601688u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x601683u); RETCHK(0x601688u, 0x601683u); LOADALL;
  /* 00601688 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060168c lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0060168f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601690 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00601693 call 0x4040e0 */ esp -= 4; M32(esp) = 0x601698u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x601693u); RETCHK(0x601698u, 0x601693u); LOADALL;
  /* 00601698 push 0x657b2c */ { u32 v_ = 0x657b2cu; esp -= 4; M32(esp) = v_; }
  /* 0060169d lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 006016a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006016a1 mov dword ptr [ebp - 0x50], 0x63cf8c */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf8cu); }
  /* 006016a8 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 006016ad int3 */ TRAP(0x6016adu, "int3");
}

void F_006016ae(CPU *c) {
  NATIVE_HOOK(0x6016aeu) REGS; LOADALL;
L_006016ae:;
  /* 006016ae mov eax, 0x61b1e2 */ { eax = (u32)(0x61b1e2u); }
  /* 006016b3 call 0x5fee30 */ esp -= 4; M32(esp) = 0x6016b8u; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x6016b3u); RETCHK(0x6016b8u, 0x6016b3u); LOADALL;
  /* 006016b8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006016bb push 0x63cfac */ { u32 v_ = 0x63cfacu; esp -= 4; M32(esp) = v_; }
  /* 006016c0 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006016c3 call 0x403060 */ esp -= 4; M32(esp) = 0x6016c8u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x6016c3u); RETCHK(0x6016c8u, 0x6016c3u); LOADALL;
  /* 006016c8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 006016cc lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006016cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006016d0 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 006016d3 call 0x4040e0 */ esp -= 4; M32(esp) = 0x6016d8u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x6016d3u); RETCHK(0x6016d8u, 0x6016d3u); LOADALL;
  /* 006016d8 push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 006016dd lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 006016e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006016e1 mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 006016e8 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 006016ed int3 */ TRAP(0x6016edu, "int3");
}

void F_006016ee(CPU *c) {
  NATIVE_HOOK(0x6016eeu) REGS; LOADALL;
L_006016ee:;
  /* 006016ee push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 006016f0 push 0x63cfc0 */ { u32 v_ = 0x63cfc0u; esp -= 4; M32(esp) = v_; }
  /* 006016f5 call 0x5fee88 */ esp -= 4; M32(esp) = 0x6016fau; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x6016f5u); RETCHK(0x6016fau, 0x6016f5u); LOADALL;
  /* 006016fa call 0x61aefa */ esp -= 4; M32(esp) = 0x6016ffu; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x6016fau); RETCHK(0x6016ffu, 0x6016fau); LOADALL;
  /* 006016ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601700 call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601706u; SAVEALL; call_ind(c, t_); RETCHK(0x601706u, 0x601700u); LOADALL; }
  /* 00601706 call 0x61aef4 */ esp -= 4; M32(esp) = 0x60170bu; SAVEALL; F_0061aef4(c); ABI_CHECK(0x61aef4u, 0x601706u); RETCHK(0x60170bu, 0x601706u); LOADALL;
  /* 0060170b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060170d je 0x60172c */ if (ZF_) goto L_0060172c;
  /* 0060170f call 0x61aefa */ esp -= 4; M32(esp) = 0x601714u; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x60170fu); RETCHK(0x601714u, 0x60170fu); LOADALL;
  /* 00601714 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601715 call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60171bu; SAVEALL; call_ind(c, t_); RETCHK(0x60171bu, 0x601715u); LOADALL; }
  /* 0060171b push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0060171d call 0x61aeee */ esp -= 4; M32(esp) = 0x601722u; SAVEALL; F_0061aeee(c); ABI_CHECK(0x61aeeeu, 0x60171du); RETCHK(0x601722u, 0x60171du); LOADALL;
  /* 00601722 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601723 mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 0060172a jmp 0x601730 */ goto L_00601730;
L_0060172c:;
  /* 0060172c and dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00601730:;
  /* 00601730 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00601734 call 0x61aee2 */ esp -= 4; M32(esp) = 0x601739u; SAVEALL; F_0061aee2(c); ABI_CHECK(0x61aee2u, 0x601734u); RETCHK(0x601739u, 0x601734u); LOADALL;
  /* 00601739 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060173c mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0060173f call 0x61aedc */ esp -= 4; M32(esp) = 0x601744u; SAVEALL; F_0061aedc(c); ABI_CHECK(0x61aedcu, 0x60173fu); RETCHK(0x601744u, 0x60173fu); LOADALL;
  /* 00601744 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 00601747 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060174b call 0x60175c */ esp -= 4; M32(esp) = 0x601750u; SAVEALL; F_0060175c(c); ABI_CHECK(0x60175cu, 0x60174bu); RETCHK(0x601750u, 0x60174bu); LOADALL;
  /* 00601750 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00601753 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 00601756 call 0x5feec3 */ esp -= 4; M32(esp) = 0x60175bu; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x601756u); RETCHK(0x60175bu, 0x601756u); LOADALL;
  /* 0060175b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0060175c(CPU *c) {
  NATIVE_HOOK(0x60175cu) REGS; LOADALL;
L_0060175c:;
  /* 0060175c cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601760 je 0x60176c */ if (ZF_) goto L_0060176c;
  /* 00601762 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00601764 call 0x61aee8 */ esp -= 4; M32(esp) = 0x601769u; SAVEALL; F_0061aee8(c); ABI_CHECK(0x61aee8u, 0x601764u); RETCHK(0x601769u, 0x601764u); LOADALL;
  /* 00601769 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060176a jmp 0x601778 */ goto L_00601778;
L_0060176c:;
  /* 0060176c call 0x61aefa */ esp -= 4; M32(esp) = 0x601771u; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x60176cu); RETCHK(0x601771u, 0x60176cu); LOADALL;
  /* 00601771 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601772 call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601778u; SAVEALL; call_ind(c, t_); RETCHK(0x601778u, 0x601772u); LOADALL; }
L_00601778:;
  /* 00601778 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601779(CPU *c) {
  NATIVE_HOOK(0x601779u) REGS; LOADALL;
L_00601779:;
  /* 00601779 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060177a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060177b mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0060177d mov esi, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); esi = (u32)(M32(m_)); }
  /* 00601780 jmp 0x601792 */ goto L_00601792;
L_00601782:;
  /* 00601782 push dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601785 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601786 push dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0060178a call dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60178du; SAVEALL; call_ind(c, t_); RETCHK(0x60178du, 0x60178au); LOADALL; }
  /* 0060178d mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0060178f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00601792:;
  /* 00601792 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601794 jne 0x601782 */ if (!ZF_) goto L_00601782;
  /* 00601796 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601797 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601798 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0060179b(CPU *c) {
  NATIVE_HOOK(0x60179bu) REGS; LOADALL;
L_0060179b:;
  /* 0060179b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060179c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0060179e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060179f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006017a0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006017a2 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 006017a4 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 006017a7 call 0x601e91 */ esp -= 4; M32(esp) = 0x6017acu; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x6017a7u); RETCHK(0x6017acu, 0x6017a7u); LOADALL;
  /* 006017ac mov dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x1u); }
L_006017b3:;
  /* 006017b3 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 006017b6 mov eax, dword ptr [eax*4 + 0x6945a4] */ { const u32 m_ = (u32)(eax * 4u + 0x6945a4u); eax = (u32)(M32(m_)); }
  /* 006017bd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006017bf je 0x6017ce */ if (ZF_) goto L_006017ce;
  /* 006017c1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006017c3 je 0x6017ce */ if (ZF_) goto L_006017ce;
  /* 006017c5 inc dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006017c8 cmp dword ptr [esi + 4], 8 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006017cc jb 0x6017b3 */ if (CF_) goto L_006017b3;
L_006017ce:;
  /* 006017ce mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 006017d1 mov dword ptr [eax*4 + 0x6945a4], esi */ { const u32 m_ = (u32)(eax * 4u + 0x6945a4u); M32(m_) = (u32)(esi); }
  /* 006017d8 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 006017db inc byte ptr [esi + 0x6945cc] */ { const u32 m_ = (u32)(esi + 0x6945ccu); u32 a_ = M8(m_); u32 r_ = (a_ + 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_INC, a_, 1, r_, 1); }
  /* 006017e1 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 006017e4 call 0x601eb4 */ esp -= 4; M32(esp) = 0x6017e9u; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x6017e4u); RETCHK(0x6017e9u, 0x6017e4u); LOADALL;
  /* 006017e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006017ea leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 006017eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006017ec(CPU *c) {
  NATIVE_HOOK(0x6017ecu) REGS; LOADALL;
L_006017ec:;
  /* 006017ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006017ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006017ee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006017f0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006017f2 call 0x601779 */ esp -= 4; M32(esp) = 0x6017f7u; SAVEALL; F_00601779(c); ABI_CHECK(0x601779u, 0x6017f2u); RETCHK(0x6017f7u, 0x6017f2u); LOADALL;
  /* 006017f7 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 006017fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006017fc je 0x60180d */ if (ZF_) goto L_0060180d;
L_006017fe:;
  /* 006017fe mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00601800 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601801 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x601806u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x601801u); RETCHK(0x601806u, 0x601801u); LOADALL;
  /* 00601806 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601808 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601809 mov eax, edi */ { eax = (u32)(edi); }
  /* 0060180b jne 0x6017fe */ if (!ZF_) goto L_006017fe;
L_0060180d:;
  /* 0060180d mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00601810 and dword ptr [esi + 0x1c], 0 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00601814 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601816 je 0x601827 */ if (ZF_) goto L_00601827;
L_00601818:;
  /* 00601818 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0060181a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060181b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x601820u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x60181bu); RETCHK(0x601820u, 0x60181bu); LOADALL;
  /* 00601820 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601822 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601823 mov eax, edi */ { eax = (u32)(edi); }
  /* 00601825 jne 0x601818 */ if (!ZF_) goto L_00601818;
L_00601827:;
  /* 00601827 and dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060182b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060182c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060182d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0060182e(CPU *c) {
  NATIVE_HOOK(0x60182eu) REGS; LOADALL;
L_0060182e:;
  /* 0060182e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060182f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601831 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00601834 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601836 mov dword ptr [esi], 0x63cfd4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cfd4u); }
  /* 0060183c jbe 0x601850 */ if ((CF_|ZF_)) goto L_00601850;
  /* 0060183e dec byte ptr [eax + 0x6945cc] */ { const u32 m_ = (u32)(eax + 0x6945ccu); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 00601844 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00601847 cmp byte ptr [eax + 0x6945cc], 0 */ { const u32 m_ = (u32)(eax + 0x6945ccu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0060184e jg 0x60186c */ if (!(ZF_|LT_)) goto L_0060186c;
L_00601850:;
  /* 00601850 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00601852 call 0x6017ec */ esp -= 4; M32(esp) = 0x601857u; SAVEALL; F_006017ec(c); ABI_CHECK(0x6017ecu, 0x601852u); RETCHK(0x601857u, 0x601852u); LOADALL;
  /* 00601857 mov esi, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); esi = (u32)(M32(m_)); }
  /* 0060185a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060185c je 0x60186c */ if (ZF_) goto L_0060186c;
  /* 0060185e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00601860 call 0x4b0ef0 */ esp -= 4; M32(esp) = 0x601865u; SAVEALL; F_004b0ef0(c); ABI_CHECK(0x4b0ef0u, 0x601860u); RETCHK(0x601865u, 0x601860u); LOADALL;
  /* 00601865 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601866 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x60186bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x601866u); RETCHK(0x60186bu, 0x601866u); LOADALL;
  /* 0060186b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0060186c:;
  /* 0060186c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060186d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0060186e(CPU *c) {
  NATIVE_HOOK(0x60186eu) REGS; LOADALL;
  goto L_0060186e;
L_005fe992:;
  /* 005fe992 jmp dword ptr [0x62e3d8] */ { const u32 m_ = (u32)(0x62e3d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0060186e:;
  /* 0060186e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060186f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601871 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00601873 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601875 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 00601878 mov dword ptr [esi], 0x63cfdc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cfdcu); }
  /* 0060187e call 0x404520 */ esp -= 4; M32(esp) = 0x601883u; SAVEALL; F_00404520(c); ABI_CHECK(0x404520u, 0x60187eu); RETCHK(0x601883u, 0x60187eu); LOADALL;
  /* 00601883 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00601885 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601886 jmp 0x5fe992 */ goto L_005fe992;
}

void F_0060188b(CPU *c) {
  NATIVE_HOOK(0x60188bu) REGS; LOADALL;
L_0060188b:;
  /* 0060188b cmp dword ptr [ecx + 0x24], 0x10 */ { const u32 m_ = (u32)(ecx + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060188f jb 0x601895 */ if (CF_) goto L_00601895;
  /* 00601891 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00601894 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00601895:;
  /* 00601895 lea eax, [ecx + 0x10] */ eax = (u32)((u32)(ecx + 0x10u));
  /* 00601898 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601899(CPU *c) {
  NATIVE_HOOK(0x601899u) REGS; LOADALL;
L_00601899:;
  /* 00601899 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060189a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0060189c call 0x60186e */ esp -= 4; M32(esp) = 0x6018a1u; SAVEALL; F_0060186e(c); ABI_CHECK(0x60186eu, 0x60189cu); RETCHK(0x6018a1u, 0x60189cu); LOADALL;
  /* 006018a1 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006018a6 je 0x6018af */ if (ZF_) goto L_006018af;
  /* 006018a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006018a9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6018aeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6018a9u); RETCHK(0x6018aeu, 0x6018a9u); LOADALL;
  /* 006018ae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_006018af:;
  /* 006018af mov eax, esi */ { eax = (u32)(esi); }
  /* 006018b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006018b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_006018b5(CPU *c) {
  NATIVE_HOOK(0x6018b5u) REGS; LOADALL;
L_006018b5:;
  /* 006018b5 mov eax, 0x61b219 */ { eax = (u32)(0x61b219u); }
  /* 006018ba call 0x5fee30 */ esp -= 4; M32(esp) = 0x6018bfu; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x6018bau); RETCHK(0x6018bfu, 0x6018bau); LOADALL;
  /* 006018bf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006018c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006018c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006018c3 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 006018c6 call 0x5fe93a */ esp -= 4; M32(esp) = 0x6018cbu; SAVEALL; F_005fe93a(c); ABI_CHECK(0x5fe93au, 0x6018c6u); RETCHK(0x6018cbu, 0x6018c6u); LOADALL;
  /* 006018cb push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 006018ce and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 006018d2 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 006018d5 mov dword ptr [esi], 0x63cfdc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cfdcu); }
  /* 006018db call 0x4045c0 */ esp -= 4; M32(esp) = 0x6018e0u; SAVEALL; F_004045c0(c); ABI_CHECK(0x4045c0u, 0x6018dbu); RETCHK(0x6018e0u, 0x6018dbu); LOADALL;
  /* 006018e0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 006018e3 mov eax, esi */ { eax = (u32)(esi); }
  /* 006018e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006018e6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 006018ed leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 006018ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_006018f1(CPU *c) {
  NATIVE_HOOK(0x6018f1u) REGS; LOADALL;
L_006018f1:;
  /* 006018f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006018f2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006018f4 call 0x60190d */ esp -= 4; M32(esp) = 0x6018f9u; SAVEALL; F_0060190d(c); ABI_CHECK(0x60190du, 0x6018f4u); RETCHK(0x6018f9u, 0x6018f4u); LOADALL;
  /* 006018f9 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006018fe je 0x601907 */ if (ZF_) goto L_00601907;
  /* 00601900 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601901 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x601906u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x601901u); RETCHK(0x601906u, 0x601901u); LOADALL;
  /* 00601906 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_00601907:;
  /* 00601907 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601909 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060190a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0060190d(CPU *c) {
  NATIVE_HOOK(0x60190du) REGS; LOADALL;
L_0060190d:;
  /* 0060190d mov dword ptr [ecx], 0x63cfe8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x63cfe8u); }
  /* 00601913 jmp 0x60186e */ SAVEALL; F_0060186e(c); return;
}

void F_00601918(CPU *c) {
  NATIVE_HOOK(0x601918u) REGS; LOADALL;
L_00601918:;
  /* 00601918 mov eax, 0x61b207 */ { eax = (u32)(0x61b207u); }
  /* 0060191d call 0x5fee30 */ esp -= 4; M32(esp) = 0x601922u; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x60191du); RETCHK(0x601922u, 0x60191du); LOADALL;
  /* 00601922 sub esp, 0x88 */ { u32 a_ = esp, b_ = 0x88u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601928 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060192b and eax, 0x17 */ { u32 a_ = eax, b_ = 0x17u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060192e mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00601931 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00601934 and ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00601936 je 0x6019d0 */ if (ZF_) goto L_006019d0;
  /* 0060193c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0060193e cmp byte ptr [ebp + 0xc], bl */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00601941 je 0x60194a */ if (ZF_) goto L_0060194a;
  /* 00601943 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601944 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601945 jmp 0x6019cb */ goto L_006019cb;
L_0060194a:;
  /* 0060194a test cl, 4 */ { u32 a_ = (ecx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060194d je 0x60197c */ if (ZF_) goto L_0060197c;
  /* 0060194f push 0x63d020 */ { u32 v_ = 0x63d020u; esp -= 4; M32(esp) = v_; }
  /* 00601954 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00601957 call 0x403060 */ esp -= 4; M32(esp) = 0x60195cu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x601957u); RETCHK(0x60195cu, 0x601957u); LOADALL;
  /* 0060195c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
L_0060195f:;
  /* 0060195f lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00601962 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601963 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 00601966 call 0x6018b5 */ esp -= 4; M32(esp) = 0x60196bu; SAVEALL; F_006018b5(c); ABI_CHECK(0x6018b5u, 0x601966u); RETCHK(0x60196bu, 0x601966u); LOADALL;
  /* 0060196b mov dword ptr [ebp - 0x34], 0x63cfe8 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x63cfe8u); }
  /* 00601972 push 0x657904 */ { u32 v_ = 0x657904u; esp -= 4; M32(esp) = v_; }
  /* 00601977 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0060197a jmp 0x6019ca */ goto L_006019ca;
L_0060197c:;
  /* 0060197c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0060197e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060197f test bl, cl */ { u32 a_ = (ebx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00601981 je 0x601999 */ if (ZF_) goto L_00601999;
  /* 00601983 push 0x63d008 */ { u32 v_ = 0x63d008u; esp -= 4; M32(esp) = v_; }
  /* 00601988 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0060198b call 0x403060 */ esp -= 4; M32(esp) = 0x601990u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x60198bu); RETCHK(0x601990u, 0x60198bu); LOADALL;
  /* 00601990 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00601997 jmp 0x60195f */ goto L_0060195f;
L_00601999:;
  /* 00601999 push 0x63cff0 */ { u32 v_ = 0x63cff0u; esp -= 4; M32(esp) = v_; }
  /* 0060199e lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 006019a4 call 0x403060 */ esp -= 4; M32(esp) = 0x6019a9u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x6019a4u); RETCHK(0x6019a9u, 0x6019a4u); LOADALL;
  /* 006019a9 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 006019af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006019b0 lea ecx, [ebp - 0x78] */ ecx = (u32)((u32)(ebp + 0xffffff88u));
  /* 006019b3 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 006019b6 call 0x6018b5 */ esp -= 4; M32(esp) = 0x6019bbu; SAVEALL; F_006018b5(c); ABI_CHECK(0x6018b5u, 0x6019b6u); RETCHK(0x6019bbu, 0x6019b6u); LOADALL;
  /* 006019bb mov dword ptr [ebp - 0x78], 0x63cfe8 */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(0x63cfe8u); }
  /* 006019c2 push 0x657904 */ { u32 v_ = 0x657904u; esp -= 4; M32(esp) = v_; }
  /* 006019c7 lea eax, [ebp - 0x78] */ eax = (u32)((u32)(ebp + 0xffffff88u));
L_006019ca:;
  /* 006019ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_006019cb:;
  /* 006019cb call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_006019d0:;
  /* 006019d0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 006019d3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 006019da leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 006019db ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_006019de(CPU *c) {
  NATIVE_HOOK(0x6019deu) REGS; LOADALL;
L_006019de:;
  /* 006019de mov eax, 0x61b219 */ { eax = (u32)(0x61b219u); }
  /* 006019e3 call 0x5fee30 */ esp -= 4; M32(esp) = 0x6019e8u; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x6019e3u); RETCHK(0x6019e8u, 0x6019e3u); LOADALL;
  /* 006019e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006019e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006019ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006019eb mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 006019ee mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006019f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006019f1 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 006019f4 call 0x5fe98c */ esp -= 4; M32(esp) = 0x6019f9u; SAVEALL; F_005fe98c(c); ABI_CHECK(0x5fe98cu, 0x6019f4u); RETCHK(0x6019f9u, 0x6019f4u); LOADALL;
  /* 006019f9 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 006019fd add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00601a00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601a01 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 00601a04 mov dword ptr [esi], 0x63cfdc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cfdcu); }
  /* 00601a0a call 0x4045c0 */ esp -= 4; M32(esp) = 0x601a0fu; SAVEALL; F_004045c0(c); ABI_CHECK(0x4045c0u, 0x601a0au); RETCHK(0x601a0fu, 0x601a0au); LOADALL;
  /* 00601a0f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00601a12 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601a13 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601a15 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601a16 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00601a1d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 00601a1e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00601a21(CPU *c) {
  NATIVE_HOOK(0x601a21u) REGS; LOADALL;
L_00601a21:;
  /* 00601a21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601a22 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601a26 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601a28 call 0x6019de */ esp -= 4; M32(esp) = 0x601a2du; SAVEALL; F_006019de(c); ABI_CHECK(0x6019deu, 0x601a28u); RETCHK(0x601a2du, 0x601a28u); LOADALL;
  /* 00601a2d mov dword ptr [esi], 0x63cfe8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cfe8u); }
  /* 00601a33 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601a35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601a36 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00601a39(CPU *c) {
  NATIVE_HOOK(0x601a39u) REGS; LOADALL;
L_00601a39:;
  /* 00601a39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601a3a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601a3b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00601a3d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601a3f call 0x5fe934 */ esp -= 4; M32(esp) = 0x601a44u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x601a3fu); RETCHK(0x601a44u, 0x601a3fu); LOADALL;
  /* 00601a44 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00601a46 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601a48 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601a49 je 0x601a54 */ if (ZF_) goto L_00601a54;
  /* 00601a4b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00601a4d call 0x601e20 */ esp -= 4; M32(esp) = 0x601a52u; SAVEALL; F_00601e20(c); ABI_CHECK(0x601e20u, 0x601a4du); RETCHK(0x601a52u, 0x601a4du); LOADALL;
  /* 00601a52 jmp 0x601a56 */ goto L_00601a56;
L_00601a54:;
  /* 00601a54 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00601a56:;
  /* 00601a56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601a57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601a58 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00601a5a mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 00601a5d mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 00601a60 mov dword ptr [esi + 0x10], 0x201 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x201u); }
  /* 00601a67 mov dword ptr [esi + 0x14], 6 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x6u); }
  /* 00601a6e mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 00601a71 mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 00601a74 mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 00601a77 call 0x601918 */ esp -= 4; M32(esp) = 0x601a7cu; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x601a77u); RETCHK(0x601a7cu, 0x601a77u); LOADALL;
  /* 00601a7c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601a7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601a7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601a7f(CPU *c) {
  NATIVE_HOOK(0x601a7fu) REGS; LOADALL;
L_00601a7f:;
  /* 00601a7f mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00601a82 call 0x4b0eb0 */ esp -= 4; M32(esp) = 0x601a87u; SAVEALL; F_004b0eb0(c); ABI_CHECK(0x4b0eb0u, 0x601a82u); RETCHK(0x601a87u, 0x601a82u); LOADALL;
  /* 00601a87 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601a89 je 0x601a93 */ if (ZF_) goto L_00601a93;
  /* 00601a8b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00601a8d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601a8f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00601a91 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601a93u; SAVEALL; call_ind(c, t_); RETCHK(0x601a93u, 0x601a91u); LOADALL; }
L_00601a93:;
  /* 00601a93 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601a94(CPU *c) {
  NATIVE_HOOK(0x601a94u) REGS; LOADALL;
L_00601a94:;
  /* 00601a94 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00601a98 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00601a9a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601a9c je 0x601aaf */ if (ZF_) goto L_00601aaf;
  /* 00601a9e call 0x4b0eb0 */ esp -= 4; M32(esp) = 0x601aa3u; SAVEALL; F_004b0eb0(c); ABI_CHECK(0x4b0eb0u, 0x601a9eu); RETCHK(0x601aa3u, 0x601a9eu); LOADALL;
  /* 00601aa3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601aa5 je 0x601aaf */ if (ZF_) goto L_00601aaf;
  /* 00601aa7 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00601aa9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601aab mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00601aad call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601aafu; SAVEALL; call_ind(c, t_); RETCHK(0x601aafu, 0x601aadu); LOADALL; }
L_00601aaf:;
  /* 00601aaf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601ab0(CPU *c) {
  NATIVE_HOOK(0x601ab0u) REGS; LOADALL;
L_00601ab0:;
  /* 00601ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00601ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00601ab3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601ab4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00601ab6 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00601ab9 call 0x601e91 */ esp -= 4; M32(esp) = 0x601abeu; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x601ab9u); RETCHK(0x601abeu, 0x601ab9u); LOADALL;
  /* 00601abe push 0x6945dc */ { u32 v_ = 0x6945dcu; esp -= 4; M32(esp) = v_; }
  /* 00601ac3 call 0x601a94 */ esp -= 4; M32(esp) = 0x601ac8u; SAVEALL; F_00601a94(c); ABI_CHECK(0x601a94u, 0x601ac3u); RETCHK(0x601ac8u, 0x601ac3u); LOADALL;
  /* 00601ac8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601ac9 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00601acc call 0x601eb4 */ esp -= 4; M32(esp) = 0x601ad1u; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x601accu); RETCHK(0x601ad1u, 0x601accu); LOADALL;
  /* 00601ad1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 00601ad2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601ad3(CPU *c) {
  NATIVE_HOOK(0x601ad3u) REGS; LOADALL;
L_00601ad3:;
  /* 00601ad3 cmp byte ptr [0x694600], 0 */ { const u32 m_ = (u32)(0x694600u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00601ada jne 0x601aee */ if (!ZF_) goto L_00601aee;
  /* 00601adc push 0x601ab0 */ { u32 v_ = 0x601ab0u; esp -= 4; M32(esp) = v_; }
  /* 00601ae1 mov byte ptr [0x694600], 1 */ { const u32 m_ = (u32)(0x694600u); M8(m_) = (u8)(0x1u); }
  /* 00601ae8 call 0x602417 */ esp -= 4; M32(esp) = 0x601aedu; SAVEALL; F_00602417(c); ABI_CHECK(0x602417u, 0x601ae8u); RETCHK(0x601aedu, 0x601ae8u); LOADALL;
  /* 00601aed pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_00601aee:;
  /* 00601aee mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00601af2 mov dword ptr [0x6945dc], eax */ { const u32 m_ = (u32)(0x6945dcu); M32(m_) = (u32)(eax); }
  /* 00601af7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601af8(CPU *c) {
  NATIVE_HOOK(0x601af8u) REGS; LOADALL;
L_00601af8:;
  /* 00601af8 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00601afa mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00601afe cmp edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601b01 jae 0x601b0b */ if (!CF_) goto L_00601b0b;
  /* 00601b03 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00601b06 mov eax, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); eax = (u32)(M32(m_)); }
  /* 00601b09 jmp 0x601b0d */ goto L_00601b0d;
L_00601b0b:;
  /* 00601b0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00601b0d:;
  /* 00601b0d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601b0f jne 0x601b2a */ if (!ZF_) goto L_00601b2a;
  /* 00601b11 cmp byte ptr [ecx + 0x14], al */ { const u32 m_ = (u32)(ecx + 0x14u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00601b14 je 0x601b2a */ if (ZF_) goto L_00601b2a;
  /* 00601b16 mov eax, dword ptr [0x6945dc] */ { const u32 m_ = (u32)(0x6945dcu); eax = (u32)(M32(m_)); }
  /* 00601b1b cmp edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601b1e jae 0x601b28 */ if (!CF_) goto L_00601b28;
  /* 00601b20 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00601b23 mov eax, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); eax = (u32)(M32(m_)); }
  /* 00601b26 jmp 0x601b2a */ goto L_00601b2a;
L_00601b28:;
  /* 00601b28 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00601b2a:;
  /* 00601b2a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00601b2d(CPU *c) {
  NATIVE_HOOK(0x601b2du) REGS; LOADALL;
L_00601b2d:;
  /* 00601b2d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00601b2e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00601b30 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601b31 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00601b33 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00601b36 call 0x601e91 */ esp -= 4; M32(esp) = 0x601b3bu; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x601b36u); RETCHK(0x601b3bu, 0x601b36u); LOADALL;
  /* 00601b3b mov eax, dword ptr [0x6945d8] */ { const u32 m_ = (u32)(0x6945d8u); eax = (u32)(M32(m_)); }
  /* 00601b40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601b42 je 0x601b66 */ if (ZF_) goto L_00601b66;
  /* 00601b44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_00601b45:;
  /* 00601b45 mov esi, eax */ { esi = (u32)(eax); }
  /* 00601b47 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00601b49 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00601b4b mov dword ptr [0x6945d8], eax */ { const u32 m_ = (u32)(0x6945d8u); M32(m_) = (u32)(eax); }
  /* 00601b50 call 0x601a7f */ esp -= 4; M32(esp) = 0x601b55u; SAVEALL; F_00601a7f(c); ABI_CHECK(0x601a7fu, 0x601b50u); RETCHK(0x601b55u, 0x601b50u); LOADALL;
  /* 00601b55 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601b56 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x601b5bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x601b56u); RETCHK(0x601b5bu, 0x601b56u); LOADALL;
  /* 00601b5b mov eax, dword ptr [0x6945d8] */ { const u32 m_ = (u32)(0x6945d8u); eax = (u32)(M32(m_)); }
  /* 00601b60 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601b62 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601b63 jne 0x601b45 */ if (!ZF_) goto L_00601b45;
  /* 00601b65 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00601b66:;
  /* 00601b66 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00601b69 call 0x601eb4 */ esp -= 4; M32(esp) = 0x601b6eu; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x601b69u); RETCHK(0x601b6eu, 0x601b69u); LOADALL;
  /* 00601b6e leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 00601b6f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601b70(CPU *c) {
  NATIVE_HOOK(0x601b70u) REGS; LOADALL;
L_00601b70:;
  /* 00601b70 cmp dword ptr [0x6945d8], 0 */ { const u32 m_ = (u32)(0x6945d8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601b77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601b78 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601b7a jne 0x601b87 */ if (!ZF_) goto L_00601b87;
  /* 00601b7c push 0x601b2d */ { u32 v_ = 0x601b2du; esp -= 4; M32(esp) = v_; }
  /* 00601b81 call 0x602417 */ esp -= 4; M32(esp) = 0x601b86u; SAVEALL; F_00602417(c); ABI_CHECK(0x602417u, 0x601b81u); RETCHK(0x601b86u, 0x601b81u); LOADALL;
  /* 00601b86 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_00601b87:;
  /* 00601b87 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00601b89 call 0x5fe934 */ esp -= 4; M32(esp) = 0x601b8eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x601b89u); RETCHK(0x601b8eu, 0x601b89u); LOADALL;
  /* 00601b8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601b90 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601b91 je 0x601ba0 */ if (ZF_) goto L_00601ba0;
  /* 00601b93 mov ecx, dword ptr [0x6945d8] */ { const u32 m_ = (u32)(0x6945d8u); ecx = (u32)(M32(m_)); }
  /* 00601b99 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00601b9b mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 00601b9e jmp 0x601ba2 */ goto L_00601ba2;
L_00601ba0:;
  /* 00601ba0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00601ba2:;
  /* 00601ba2 mov dword ptr [0x6945d8], eax */ { const u32 m_ = (u32)(0x6945d8u); M32(m_) = (u32)(eax); }
  /* 00601ba7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601ba8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601ba9(CPU *c) {
  NATIVE_HOOK(0x601ba9u) REGS; LOADALL;
L_00601ba9:;
  /* 00601ba9 mov eax, 0x61b23e */ { eax = (u32)(0x61b23eu); }
  /* 00601bae call 0x5fee30 */ esp -= 4; M32(esp) = 0x601bb3u; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x601baeu); RETCHK(0x601bb3u, 0x601baeu); LOADALL;
  /* 00601bb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601bb4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601bb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601bb6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601bb8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601bb9 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00601bbc mov dword ptr [esi], 0x63d048 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63d048u); }
  /* 00601bc2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00601bc4 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00601bc7 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00601bce call 0x601e91 */ esp -= 4; M32(esp) = 0x601bd3u; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x601bceu); RETCHK(0x601bd3u, 0x601bceu); LOADALL;
  /* 00601bd3 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 00601bd6 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00601bda jmp 0x601bf8 */ goto L_00601bf8;
L_00601bdc:;
  /* 00601bdc mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00601bdf dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00601be0 mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 00601be3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601be5 je 0x601bf8 */ if (ZF_) goto L_00601bf8;
  /* 00601be7 call 0x4b0eb0 */ esp -= 4; M32(esp) = 0x601becu; SAVEALL; F_004b0eb0(c); ABI_CHECK(0x4b0eb0u, 0x601be7u); RETCHK(0x601becu, 0x601be7u); LOADALL;
  /* 00601bec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601bee je 0x601bf8 */ if (ZF_) goto L_00601bf8;
  /* 00601bf0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00601bf2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601bf4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00601bf6 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601bf8u; SAVEALL; call_ind(c, t_); RETCHK(0x601bf8u, 0x601bf6u); LOADALL; }
L_00601bf8:;
  /* 00601bf8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601bfa ja 0x601bdc */ if (!(CF_|ZF_)) goto L_00601bdc;
  /* 00601bfc push dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601bff call 0x5fe99e */ esp -= 4; M32(esp) = 0x601c04u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x601bffu); RETCHK(0x601c04u, 0x601bffu); LOADALL;
  /* 00601c04 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601c05 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00601c08 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00601c0c call 0x601eb4 */ esp -= 4; M32(esp) = 0x601c11u; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x601c0cu); RETCHK(0x601c11u, 0x601c0cu); LOADALL;
  /* 00601c11 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00601c13 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601c15 lea ecx, [esi + 0x18] */ ecx = (u32)((u32)(esi + 0x18u));
  /* 00601c18 call 0x404520 */ esp -= 4; M32(esp) = 0x601c1du; SAVEALL; F_00404520(c); ABI_CHECK(0x404520u, 0x601c18u); RETCHK(0x601c1du, 0x601c18u); LOADALL;
  /* 00601c1d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00601c20 mov dword ptr [esi], 0x63d040 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63d040u); }
  /* 00601c26 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601c27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601c28 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00601c2f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 00601c30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601c31(CPU *c) {
  NATIVE_HOOK(0x601c31u) REGS; LOADALL;
L_00601c31:;
  /* 00601c31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601c32 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601c33 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601c35 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00601c37 cmp dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601c3a jbe 0x601c53 */ if ((CF_|ZF_)) goto L_00601c53;
  /* 00601c3c cmp dword ptr [esi + 0x54], 0x10 */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601c40 jb 0x601c47 */ if (CF_) goto L_00601c47;
  /* 00601c42 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 00601c45 jmp 0x601c4a */ goto L_00601c4a;
L_00601c47:;
  /* 00601c47 lea eax, [esi + 0x40] */ eax = (u32)((u32)(esi + 0x40u));
L_00601c4a:;
  /* 00601c4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601c4b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601c4c call 0x5fedda */ esp -= 4; M32(esp) = 0x601c51u; SAVEALL; F_005fedda(c); ABI_CHECK(0x5feddau, 0x601c4cu); RETCHK(0x601c51u, 0x601c4cu); LOADALL;
  /* 00601c51 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601c52 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_00601c53:;
  /* 00601c53 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601c54 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601c56 lea ecx, [esi + 0x58] */ ecx = (u32)((u32)(esi + 0x58u));
  /* 00601c59 call 0x404520 */ esp -= 4; M32(esp) = 0x601c5eu; SAVEALL; F_00404520(c); ABI_CHECK(0x404520u, 0x601c59u); RETCHK(0x601c5eu, 0x601c59u); LOADALL;
  /* 00601c5e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601c5f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601c61 lea ecx, [esi + 0x3c] */ ecx = (u32)((u32)(esi + 0x3cu));
  /* 00601c64 call 0x404520 */ esp -= 4; M32(esp) = 0x601c69u; SAVEALL; F_00404520(c); ABI_CHECK(0x404520u, 0x601c64u); RETCHK(0x601c69u, 0x601c64u); LOADALL;
  /* 00601c69 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601c6a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601c6c lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 00601c6f call 0x404520 */ esp -= 4; M32(esp) = 0x601c74u; SAVEALL; F_00404520(c); ABI_CHECK(0x404520u, 0x601c6fu); RETCHK(0x601c74u, 0x601c6fu); LOADALL;
  /* 00601c74 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601c75 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601c77 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00601c7a call 0x404520 */ esp -= 4; M32(esp) = 0x601c7fu; SAVEALL; F_00404520(c); ABI_CHECK(0x404520u, 0x601c7au); RETCHK(0x601c7fu, 0x601c7au); LOADALL;
  /* 00601c7f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00601c81 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601c82 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00601c83 jmp 0x601eb4 */ SAVEALL; F_00601eb4(c); return;
}

void F_00601c88(CPU *c) {
  NATIVE_HOOK(0x601c88u) REGS; LOADALL;
L_00601c88:;
  /* 00601c88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601c89 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601c8b call 0x601ba9 */ esp -= 4; M32(esp) = 0x601c90u; SAVEALL; F_00601ba9(c); ABI_CHECK(0x601ba9u, 0x601c8bu); RETCHK(0x601c90u, 0x601c8bu); LOADALL;
  /* 00601c90 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00601c95 je 0x601c9e */ if (ZF_) goto L_00601c9e;
  /* 00601c97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601c98 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x601c9du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x601c98u); RETCHK(0x601c9du, 0x601c98u); LOADALL;
  /* 00601c9d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_00601c9e:;
  /* 00601c9e mov eax, esi */ { eax = (u32)(esi); }
  /* 00601ca0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601ca1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00601ca4(CPU *c) {
  NATIVE_HOOK(0x601ca4u) REGS; LOADALL;
L_00601ca4:;
  /* 00601ca4 mov eax, 0x61b250 */ { eax = (u32)(0x61b250u); }
  /* 00601ca9 call 0x5fee30 */ esp -= 4; M32(esp) = 0x601caeu; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x601ca9u); RETCHK(0x601caeu, 0x601ca9u); LOADALL;
  /* 00601cae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601caf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601cb0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601cb2 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00601cb5 mov dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x1u); }
  /* 00601cbc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00601cbe mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00601cc1 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00601cc4 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00601cc7 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00601cca mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00601ccd push 0x63d04c */ { u32 v_ = 0x63d04cu; esp -= 4; M32(esp) = v_; }
  /* 00601cd2 lea ecx, [esi + 0x18] */ ecx = (u32)((u32)(esi + 0x18u));
  /* 00601cd5 mov dword ptr [esi], 0x63d048 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63d048u); }
  /* 00601cdb mov byte ptr [esi + 0x14], al */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00601cde call 0x403060 */ esp -= 4; M32(esp) = 0x601ce3u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x601cdeu); RETCHK(0x601ce3u, 0x601cdeu); LOADALL;
  /* 00601ce3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00601ce6 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601ce8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601ce9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00601cf0 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 00601cf1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00601cf4(CPU *c) {
  NATIVE_HOOK(0x601cf4u) REGS; LOADALL;
L_00601cf4:;
  /* 00601cf4 mov eax, 0x61b28e */ { eax = (u32)(0x61b28eu); }
  /* 00601cf9 call 0x5fee30 */ esp -= 4; M32(esp) = 0x601cfeu; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x601cf9u); RETCHK(0x601cfeu, 0x601cf9u); LOADALL;
  /* 00601cfe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601cff push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601d00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601d01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601d02 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601d04 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00601d06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601d07 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00601d0a call 0x601e91 */ esp -= 4; M32(esp) = 0x601d0fu; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x601d0au); RETCHK(0x601d0fu, 0x601d0au); LOADALL;
  /* 00601d0f lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00601d12 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00601d15 call 0x403040 */ esp -= 4; M32(esp) = 0x601d1au; SAVEALL; F_00403040(c); ABI_CHECK(0x403040u, 0x601d15u); RETCHK(0x601d1au, 0x601d15u); LOADALL;
  /* 00601d1a lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 00601d1d call 0x403040 */ esp -= 4; M32(esp) = 0x601d22u; SAVEALL; F_00403040(c); ABI_CHECK(0x403040u, 0x601d1du); RETCHK(0x601d22u, 0x601d1du); LOADALL;
  /* 00601d22 lea edi, [esi + 0x3c] */ edi = (u32)((u32)(esi + 0x3cu));
  /* 00601d25 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00601d27 call 0x403040 */ esp -= 4; M32(esp) = 0x601d2cu; SAVEALL; F_00403040(c); ABI_CHECK(0x403040u, 0x601d27u); RETCHK(0x601d2cu, 0x601d27u); LOADALL;
  /* 00601d2c lea ecx, [esi + 0x58] */ ecx = (u32)((u32)(esi + 0x58u));
  /* 00601d2f call 0x403040 */ esp -= 4; M32(esp) = 0x601d34u; SAVEALL; F_00403040(c); ABI_CHECK(0x403040u, 0x601d2fu); RETCHK(0x601d34u, 0x601d2fu); LOADALL;
  /* 00601d34 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601d35 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601d36 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00601d3a call 0x5fedda */ esp -= 4; M32(esp) = 0x601d3fu; SAVEALL; F_005fedda(c); ABI_CHECK(0x5feddau, 0x601d3au); RETCHK(0x601d3fu, 0x601d3au); LOADALL;
  /* 00601d3f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601d40 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601d41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601d42 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00601d44 call 0x404590 */ esp -= 4; M32(esp) = 0x601d49u; SAVEALL; F_00404590(c); ABI_CHECK(0x404590u, 0x601d44u); RETCHK(0x601d49u, 0x601d44u); LOADALL;
  /* 00601d49 cmp dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601d4c je 0x601d5d */ if (ZF_) goto L_00601d5d;
  /* 00601d4e push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601d51 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601d52 call 0x5fedda */ esp -= 4; M32(esp) = 0x601d57u; SAVEALL; F_005fedda(c); ABI_CHECK(0x5feddau, 0x601d52u); RETCHK(0x601d57u, 0x601d52u); LOADALL;
  /* 00601d57 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601d59 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601d5a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601d5b jne 0x601d62 */ if (!ZF_) goto L_00601d62;
L_00601d5d:;
  /* 00601d5d mov eax, 0x63d04c */ { eax = (u32)(0x63d04cu); }
L_00601d62:;
  /* 00601d62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601d63 lea ecx, [esi + 0x58] */ ecx = (u32)((u32)(esi + 0x58u));
  /* 00601d66 call 0x404590 */ esp -= 4; M32(esp) = 0x601d6bu; SAVEALL; F_00404590(c); ABI_CHECK(0x404590u, 0x601d66u); RETCHK(0x601d6bu, 0x601d66u); LOADALL;
  /* 00601d6b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00601d6e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601d6f mov eax, esi */ { eax = (u32)(esi); }
  /* 00601d71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601d72 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00601d73 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00601d7a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 00601d7b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00601d7e(CPU *c) {
  NATIVE_HOOK(0x601d7eu) REGS; LOADALL;
L_00601d7e:;
  /* 00601d7e mov eax, 0x61b2aa */ { eax = (u32)(0x61b2aau); }
  /* 00601d83 call 0x5fee30 */ esp -= 4; M32(esp) = 0x601d88u; SAVEALL; F_005fee30(c); ABI_CHECK(0x5fee30u, 0x601d83u); RETCHK(0x601d88u, 0x601d83u); LOADALL;
  /* 00601d88 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601d89 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601d8a mov eax, dword ptr [0x6945dc] */ { const u32 m_ = (u32)(0x6945dcu); eax = (u32)(M32(m_)); }
  /* 00601d8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601d91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601d92 mov esi, eax */ { esi = (u32)(eax); }
  /* 00601d94 jne 0x601e11 */ if (!ZF_) goto L_00601e11;
  /* 00601d96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601d97 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00601d9a call 0x601e91 */ esp -= 4; M32(esp) = 0x601d9fu; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x601d9au); RETCHK(0x601d9fu, 0x601d9au); LOADALL;
  /* 00601d9f mov eax, dword ptr [0x6945dc] */ { const u32 m_ = (u32)(0x6945dcu); eax = (u32)(M32(m_)); }
  /* 00601da4 and dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00601da7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601da9 mov esi, eax */ { esi = (u32)(eax); }
  /* 00601dab jne 0x601e05 */ if (!ZF_) goto L_00601e05;
  /* 00601dad push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 00601daf call 0x5fe934 */ esp -= 4; M32(esp) = 0x601db4u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x601dafu); RETCHK(0x601db4u, 0x601dafu); LOADALL;
  /* 00601db4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601db5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00601db7 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 00601dba test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601dbc mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00601dc0 je 0x601dcc */ if (ZF_) goto L_00601dcc;
  /* 00601dc2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601dc3 call 0x601ca4 */ esp -= 4; M32(esp) = 0x601dc8u; SAVEALL; F_00601ca4(c); ABI_CHECK(0x601ca4u, 0x601dc3u); RETCHK(0x601dc8u, 0x601dc3u); LOADALL;
  /* 00601dc8 mov esi, eax */ { esi = (u32)(eax); }
  /* 00601dca jmp 0x601dce */ goto L_00601dce;
L_00601dcc:;
  /* 00601dcc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00601dce:;
  /* 00601dce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601dcf mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00601dd3 call 0x601ad3 */ esp -= 4; M32(esp) = 0x601dd8u; SAVEALL; F_00601ad3(c); ABI_CHECK(0x601ad3u, 0x601dd3u); RETCHK(0x601dd8u, 0x601dd3u); LOADALL;
  /* 00601dd8 lea ecx, [esi + 0x18] */ ecx = (u32)((u32)(esi + 0x18u));
  /* 00601ddb mov dword ptr [esi + 0x10], 0x3f */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x3fu); }
  /* 00601de2 mov dword ptr [esp], 0x64e82c */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x64e82cu); }
  /* 00601de9 call 0x404590 */ esp -= 4; M32(esp) = 0x601deeu; SAVEALL; F_00404590(c); ABI_CHECK(0x404590u, 0x601de9u); RETCHK(0x601deeu, 0x601de9u); LOADALL;
  /* 00601dee mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00601df0 mov dword ptr [0x6945e0], esi */ { const u32 m_ = (u32)(0x6945e0u); M32(m_) = (u32)(esi); }
  /* 00601df6 call 0x4b0e80 */ esp -= 4; M32(esp) = 0x601dfbu; SAVEALL; F_004b0e80(c); ABI_CHECK(0x4b0e80u, 0x601df6u); RETCHK(0x601dfbu, 0x601df6u); LOADALL;
  /* 00601dfb mov eax, dword ptr [0x6945e0] */ { const u32 m_ = (u32)(0x6945e0u); eax = (u32)(M32(m_)); }
  /* 00601e00 mov dword ptr [0x6945e8], eax */ { const u32 m_ = (u32)(0x6945e8u); M32(m_) = (u32)(eax); }
L_00601e05:;
  /* 00601e05 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00601e09 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00601e0c call 0x601eb4 */ esp -= 4; M32(esp) = 0x601e11u; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x601e0cu); RETCHK(0x601e11u, 0x601e0cu); LOADALL;
L_00601e11:;
  /* 00601e11 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00601e14 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601e16 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601e17 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00601e1e leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 00601e1f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601e20(CPU *c) {
  NATIVE_HOOK(0x601e20u) REGS; LOADALL;
L_00601e20:;
  /* 00601e20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e21 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601e23 call 0x601d7e */ esp -= 4; M32(esp) = 0x601e28u; SAVEALL; F_00601d7e(c); ABI_CHECK(0x601d7eu, 0x601e23u); RETCHK(0x601e28u, 0x601e23u); LOADALL;
  /* 00601e28 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00601e2a mov ecx, dword ptr [0x6945dc] */ { const u32 m_ = (u32)(0x6945dcu); ecx = (u32)(M32(m_)); }
  /* 00601e30 call 0x4b0e80 */ esp -= 4; M32(esp) = 0x601e35u; SAVEALL; F_004b0e80(c); ABI_CHECK(0x4b0e80u, 0x601e30u); RETCHK(0x601e35u, 0x601e30u); LOADALL;
  /* 00601e35 mov eax, esi */ { eax = (u32)(esi); }
  /* 00601e37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601e38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601e39(CPU *c) {
  NATIVE_HOOK(0x601e39u) REGS; LOADALL;
L_00601e39:;
  /* 00601e39 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601e3a push 0x680e6c */ { u32 v_ = 0x680e6cu; esp -= 4; M32(esp) = v_; }
  /* 00601e3f mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00601e41 call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601e47u; SAVEALL; call_ind(c, t_); RETCHK(0x601e47u, 0x601e41u); LOADALL; }
  /* 00601e47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601e49 jne 0x601e64 */ if (!ZF_) goto L_00601e64;
  /* 00601e4b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e4c mov esi, 0x694608 */ { esi = (u32)(0x694608u); }
L_00601e51:;
  /* 00601e51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e52 call 0x602457 */ esp -= 4; M32(esp) = 0x601e57u; SAVEALL; F_00602457(c); ABI_CHECK(0x602457u, 0x601e52u); RETCHK(0x601e57u, 0x601e52u); LOADALL;
  /* 00601e57 add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00601e5a cmp esi, 0x694668 */ { u32 a_ = esi, b_ = 0x694668u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601e60 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601e61 jl 0x601e51 */ if (LT_) goto L_00601e51;
  /* 00601e63 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00601e64:;
  /* 00601e64 mov eax, edi */ { eax = (u32)(edi); }
  /* 00601e66 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601e67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601e91(CPU *c) {
  NATIVE_HOOK(0x601e91u) REGS; LOADALL;
L_00601e91:;
  /* 00601e91 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00601e95 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00601e98 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e99 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601e9b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00601e9d lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 00601ea0 lea eax, [eax*8 + 0x694608] */ eax = (u32)((u32)(eax * 8u + 0x694608u));
  /* 00601ea7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601ea8 call 0x60246d */ esp -= 4; M32(esp) = 0x601eadu; SAVEALL; F_0060246d(c); ABI_CHECK(0x60246du, 0x601ea8u); RETCHK(0x601eadu, 0x601ea8u); LOADALL;
  /* 00601ead pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601eae mov eax, esi */ { eax = (u32)(esi); }
  /* 00601eb0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601eb1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00601eb4(CPU *c) {
  NATIVE_HOOK(0x601eb4u) REGS; LOADALL;
L_00601eb4:;
  /* 00601eb4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00601eb6 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 00601eb9 lea eax, [eax*8 + 0x694608] */ eax = (u32)((u32)(eax * 8u + 0x694608u));
  /* 00601ec0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601ec1 call 0x602478 */ esp -= 4; M32(esp) = 0x601ec6u; SAVEALL; F_00602478(c); ABI_CHECK(0x602478u, 0x601ec1u); RETCHK(0x601ec6u, 0x601ec1u); LOADALL;
  /* 00601ec6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601ec7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601ec8(CPU *c) {
  NATIVE_HOOK(0x601ec8u) REGS; LOADALL;
L_00601ec8:;
  /* 00601ec8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601ec9 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 00601ecb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601ecd call 0x5fe934 */ esp -= 4; M32(esp) = 0x601ed2u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x601ecdu); RETCHK(0x601ed2u, 0x601ecdu); LOADALL;
  /* 00601ed2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601ed3 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00601ed5 call 0x602457 */ esp -= 4; M32(esp) = 0x601edau; SAVEALL; F_00602457(c); ABI_CHECK(0x602457u, 0x601ed5u); RETCHK(0x601edau, 0x601ed5u); LOADALL;
  /* 00601eda pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601edb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601edc mov eax, esi */ { eax = (u32)(esi); }
  /* 00601ede pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601edf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601ee0(CPU *c) {
  NATIVE_HOOK(0x601ee0u) REGS; LOADALL;
L_00601ee0:;
  /* 00601ee0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601ee1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00601ee3 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601ee5 call 0x602462 */ esp -= 4; M32(esp) = 0x601eeau; SAVEALL; F_00602462(c); ABI_CHECK(0x602462u, 0x601ee5u); RETCHK(0x601eeau, 0x601ee5u); LOADALL;
  /* 00601eea push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601eec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x601ef1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x601eecu); RETCHK(0x601ef1u, 0x601eecu); LOADALL;
  /* 00601ef1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601ef2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601ef3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601ef4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601ef5(CPU *c) {
  NATIVE_HOOK(0x601ef5u) REGS; LOADALL;
L_00601ef5:;
  /* 00601ef5 push dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601ef7 call 0x60246d */ esp -= 4; M32(esp) = 0x601efcu; SAVEALL; F_0060246d(c); ABI_CHECK(0x60246du, 0x601ef7u); RETCHK(0x601efcu, 0x601ef7u); LOADALL;
  /* 00601efc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601efd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601efe(CPU *c) {
  NATIVE_HOOK(0x601efeu) REGS; LOADALL;
L_00601efe:;
  /* 00601efe push dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601f00 call 0x602478 */ esp -= 4; M32(esp) = 0x601f05u; SAVEALL; F_00602478(c); ABI_CHECK(0x602478u, 0x601f00u); RETCHK(0x601f05u, 0x601f00u); LOADALL;
  /* 00601f05 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601f06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601f07(CPU *c) {
  NATIVE_HOOK(0x601f07u) REGS; LOADALL;
L_00601f07:;
  /* 00601f07 jmp 0x61af40 */ goto L_0061af40;
L_0061af40:;
  /* 0061af40 jmp dword ptr [0x62e448] */ { const u32 m_ = (u32)(0x62e448u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00601f0c(CPU *c) {
  NATIVE_HOOK(0x601f0cu) REGS; LOADALL;
L_00601f0c:;
  /* 00601f0c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00601f0d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00601f0f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601f12 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601f13 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00601f16 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601f18 jne 0x601f2c */ if (!ZF_) goto L_00601f2c;
  /* 00601f1a call 0x61aee2 */ esp -= 4; M32(esp) = 0x601f1fu; SAVEALL; F_0061aee2(c); ABI_CHECK(0x61aee2u, 0x601f1au); RETCHK(0x601f1fu, 0x601f1au); LOADALL;
  /* 00601f1f mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00601f22 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00601f25 call 0x61aedc */ esp -= 4; M32(esp) = 0x601f2au; SAVEALL; F_0061aedc(c); ABI_CHECK(0x61aedcu, 0x601f25u); RETCHK(0x601f2au, 0x601f25u); LOADALL;
  /* 00601f2a jmp 0x601f34 */ goto L_00601f34;
L_00601f2c:;
  /* 00601f2c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00601f2e mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00601f31 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
L_00601f34:;
  /* 00601f34 cmp dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601f38 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00601f3b jne 0x601f5a */ if (!ZF_) goto L_00601f5a;
  /* 00601f3d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00601f40 cmp eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601f43 jl 0x601ff2 */ if (LT_) goto L_00601ff2;
  /* 00601f49 cmp eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601f4c jg 0x601ff2 */ if (!(ZF_|LT_)) goto L_00601ff2;
  /* 00601f52 add eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00601f55 jmp 0x601ff2 */ goto L_00601ff2;
L_00601f5a:;
  /* 00601f5a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601f5b mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00601f5e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601f5f mov edi, 0x100 */ { edi = (u32)(0x100u); }
  /* 00601f64 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601f66 jae 0x601f82 */ if (!CF_) goto L_00601f82;
  /* 00601f68 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601f6a jne 0x601f79 */ if (!ZF_) goto L_00601f79;
  /* 00601f6c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00601f6d call 0x61af52 */ esp -= 4; M32(esp) = 0x601f72u; SAVEALL; F_0061af52(c); ABI_CHECK(0x61af52u, 0x601f6du); RETCHK(0x601f72u, 0x601f6du); LOADALL;
  /* 00601f72 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601f74 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601f75 jne 0x601f82 */ if (!ZF_) goto L_00601f82;
  /* 00601f77 jmp 0x601fd6 */ goto L_00601fd6;
L_00601f79:;
  /* 00601f79 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00601f7c test byte ptr [eax + ebx*2], 1 */ { const u32 m_ = (u32)(eax + ebx * 2u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00601f80 je 0x601fd6 */ if (ZF_) goto L_00601fd6;
L_00601f82:;
  /* 00601f82 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00601f85 sar dword ptr [ebp - 8], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 n_ = (8u) & 31u; if (n_) { u32 a_ = M32(m_); s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); M32(m_) = (u32)(r_); } }
  /* 00601f89 call 0x61af4c */ esp -= 4; M32(esp) = 0x601f8eu; SAVEALL; F_0061af4c(c); ABI_CHECK(0x61af4cu, 0x601f89u); RETCHK(0x601f8eu, 0x601f89u); LOADALL;
  /* 00601f8e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00601f90 mov al, byte ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00601f93 movzx edx, al */ { edx = (u32)((eax & 0xffu)); }
  /* 00601f96 test byte ptr [ecx + edx*2 + 1], 0x80 */ { const u32 m_ = (u32)(ecx + edx * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00601f9b je 0x601fac */ if (ZF_) goto L_00601fac;
  /* 00601f9d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00601f9f mov byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00601fa2 mov byte ptr [ebp + 0xd], bl */ { const u32 m_ = (u32)(ebp + 0xdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00601fa5 mov byte ptr [ebp + 0xe], 0 */ { const u32 m_ = (u32)(ebp + 0xeu); M8(m_) = (u8)(0x0u); }
  /* 00601fa9 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 00601faa jmp 0x601fb6 */ goto L_00601fb6;
L_00601fac:;
  /* 00601fac xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00601fae mov byte ptr [ebp + 0xc], bl */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00601fb1 mov byte ptr [ebp + 0xd], 0 */ { const u32 m_ = (u32)(ebp + 0xdu); M8(m_) = (u8)(0x0u); }
  /* 00601fb5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00601fb6:;
  /* 00601fb6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00601fb8 push dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601fbb lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00601fbe push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00601fc0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00601fc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601fc2 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 00601fc5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00601fc6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00601fc7 push dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00601fca call 0x61af46 */ esp -= 4; M32(esp) = 0x601fcfu; SAVEALL; F_0061af46(c); ABI_CHECK(0x61af46u, 0x601fcau); RETCHK(0x601fcfu, 0x601fcau); LOADALL;
  /* 00601fcf add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00601fd2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601fd4 jne 0x601fda */ if (!ZF_) goto L_00601fda;
L_00601fd6:;
  /* 00601fd6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00601fd8 jmp 0x601ff0 */ goto L_00601ff0;
L_00601fda:;
  /* 00601fda cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601fdd jne 0x601fe5 */ if (!ZF_) goto L_00601fe5;
  /* 00601fdf movzx eax, byte ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M8(m_)); }
  /* 00601fe3 jmp 0x601ff0 */ goto L_00601ff0;
L_00601fe5:;
  /* 00601fe5 movzx ecx, byte ptr [ebp - 3] */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); ecx = (u32)(M8(m_)); }
  /* 00601fe9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00601feb mov ah, byte ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00601fee or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00601ff0:;
  /* 00601ff0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00601ff1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00601ff2:;
  /* 00601ff2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00601ff3 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 00601ff4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00601ff5(CPU *c) {
  NATIVE_HOOK(0x601ff5u) REGS; LOADALL;
L_00601ff5:;
  /* 00601ff5 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 00601ff7 push 0x63d050 */ { u32 v_ = 0x63d050u; esp -= 4; M32(esp) = v_; }
  /* 00601ffc call 0x5fee88 */ esp -= 4; M32(esp) = 0x602001u; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x601ffcu); RETCHK(0x602001u, 0x601ffcu); LOADALL;
  /* 00602001 call 0x61aefa */ esp -= 4; M32(esp) = 0x602006u; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x602001u); RETCHK(0x602006u, 0x602001u); LOADALL;
  /* 00602006 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602007 call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60200du; SAVEALL; call_ind(c, t_); RETCHK(0x60200du, 0x602007u); LOADALL; }
  /* 0060200d call 0x61aef4 */ esp -= 4; M32(esp) = 0x602012u; SAVEALL; F_0061aef4(c); ABI_CHECK(0x61aef4u, 0x60200du); RETCHK(0x602012u, 0x60200du); LOADALL;
  /* 00602012 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602014 je 0x602033 */ if (ZF_) goto L_00602033;
  /* 00602016 call 0x61aefa */ esp -= 4; M32(esp) = 0x60201bu; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x602016u); RETCHK(0x60201bu, 0x602016u); LOADALL;
  /* 0060201b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060201c call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602022u; SAVEALL; call_ind(c, t_); RETCHK(0x602022u, 0x60201cu); LOADALL; }
  /* 00602022 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00602024 call 0x61aeee */ esp -= 4; M32(esp) = 0x602029u; SAVEALL; F_0061aeee(c); ABI_CHECK(0x61aeeeu, 0x602024u); RETCHK(0x602029u, 0x602024u); LOADALL;
  /* 00602029 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060202a mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 00602031 jmp 0x602037 */ goto L_00602037;
L_00602033:;
  /* 00602033 and dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00602037:;
  /* 00602037 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060203b call 0x61aee2 */ esp -= 4; M32(esp) = 0x602040u; SAVEALL; F_0061aee2(c); ABI_CHECK(0x61aee2u, 0x60203bu); RETCHK(0x602040u, 0x60203bu); LOADALL;
  /* 00602040 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00602043 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 00602046 call 0x61aedc */ esp -= 4; M32(esp) = 0x60204bu; SAVEALL; F_0061aedc(c); ABI_CHECK(0x61aedcu, 0x602046u); RETCHK(0x60204bu, 0x602046u); LOADALL;
  /* 0060204b mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0060204e mov esi, 0x200 */ { esi = (u32)(0x200u); }
  /* 00602053 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602054 call 0x5fea94 */ esp -= 4; M32(esp) = 0x602059u; SAVEALL; F_005fea94(c); ABI_CHECK(0x5fea94u, 0x602054u); RETCHK(0x602059u, 0x602054u); LOADALL;
  /* 00602059 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060205a mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0060205d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060205f je 0x60207c */ if (ZF_) goto L_0060207c;
  /* 00602061 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602062 call 0x61af4c */ esp -= 4; M32(esp) = 0x602067u; SAVEALL; F_0061af4c(c); ABI_CHECK(0x61af4cu, 0x602062u); RETCHK(0x602067u, 0x602062u); LOADALL;
  /* 00602067 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602068 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0060206b call 0x61aed0 */ esp -= 4; M32(esp) = 0x602070u; SAVEALL; F_0061aed0(c); ABI_CHECK(0x61aed0u, 0x60206bu); RETCHK(0x602070u, 0x60206bu); LOADALL;
  /* 00602070 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602073 mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
  /* 0060207a jmp 0x602088 */ goto L_00602088;
L_0060207c:;
  /* 0060207c call 0x61af4c */ esp -= 4; M32(esp) = 0x602081u; SAVEALL; F_0061af4c(c); ABI_CHECK(0x61af4cu, 0x60207cu); RETCHK(0x602081u, 0x60207cu); LOADALL;
  /* 00602081 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 00602084 and dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00602088:;
  /* 00602088 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060208c call 0x6020a3 */ esp -= 4; M32(esp) = 0x602091u; SAVEALL; F_006020a3(c); ABI_CHECK(0x6020a3u, 0x60208cu); RETCHK(0x602091u, 0x60208cu); LOADALL;
  /* 00602091 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00602094 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602097 mov edi, eax */ { edi = (u32)(eax); }
  /* 00602099 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0060209a movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0060209b movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0060209c movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0060209d call 0x5feec3 */ esp -= 4; M32(esp) = 0x6020a2u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x60209du); RETCHK(0x6020a2u, 0x60209du); LOADALL;
  /* 006020a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602040(CPU *c) {
  NATIVE_HOOK(0x602040u) REGS; LOADALL;
L_00602040:;
  /* 00602040 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00602043 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 00602046 call 0x61aedc */ esp -= 4; M32(esp) = 0x60204bu; SAVEALL; F_0061aedc(c); ABI_CHECK(0x61aedcu, 0x602046u); RETCHK(0x60204bu, 0x602046u); LOADALL;
  /* 0060204b mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0060204e mov esi, 0x200 */ { esi = (u32)(0x200u); }
  /* 00602053 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602054 call 0x5fea94 */ esp -= 4; M32(esp) = 0x602059u; SAVEALL; F_005fea94(c); ABI_CHECK(0x5fea94u, 0x602054u); RETCHK(0x602059u, 0x602054u); LOADALL;
  /* 00602059 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060205a mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0060205d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060205f je 0x60207c */ if (ZF_) goto L_0060207c;
  /* 00602061 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602062 call 0x61af4c */ esp -= 4; M32(esp) = 0x602067u; SAVEALL; F_0061af4c(c); ABI_CHECK(0x61af4cu, 0x602062u); RETCHK(0x602067u, 0x602062u); LOADALL;
  /* 00602067 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602068 push dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0060206b call 0x61aed0 */ esp -= 4; M32(esp) = 0x602070u; SAVEALL; F_0061aed0(c); ABI_CHECK(0x61aed0u, 0x60206bu); RETCHK(0x602070u, 0x60206bu); LOADALL;
  /* 00602070 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602073 mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
  /* 0060207a jmp 0x602088 */ goto L_00602088;
L_0060207c:;
  /* 0060207c call 0x61af4c */ esp -= 4; M32(esp) = 0x602081u; SAVEALL; F_0061af4c(c); ABI_CHECK(0x61af4cu, 0x60207cu); RETCHK(0x602081u, 0x60207cu); LOADALL;
  /* 00602081 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 00602084 and dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00602088:;
  /* 00602088 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060208c call 0x6020a3 */ esp -= 4; M32(esp) = 0x602091u; SAVEALL; F_006020a3(c); ABI_CHECK(0x6020a3u, 0x60208cu); RETCHK(0x602091u, 0x60208cu); LOADALL;
  /* 00602091 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00602094 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602097 mov edi, eax */ { edi = (u32)(eax); }
  /* 00602099 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0060209a movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0060209b movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0060209c movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0060209d call 0x5feec3 */ esp -= 4; M32(esp) = 0x6020a2u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x60209du); RETCHK(0x6020a2u, 0x60209du); LOADALL;
  /* 006020a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006020a3(CPU *c) {
  NATIVE_HOOK(0x6020a3u) REGS; LOADALL;
L_006020a3:;
  /* 006020a3 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006020a7 je 0x6020b3 */ if (ZF_) goto L_006020b3;
  /* 006020a9 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 006020ab call 0x61aee8 */ esp -= 4; M32(esp) = 0x6020b0u; SAVEALL; F_0061aee8(c); ABI_CHECK(0x61aee8u, 0x6020abu); RETCHK(0x6020b0u, 0x6020abu); LOADALL;
  /* 006020b0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006020b1 jmp 0x6020bf */ goto L_006020bf;
L_006020b3:;
  /* 006020b3 call 0x61aefa */ esp -= 4; M32(esp) = 0x6020b8u; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x6020b3u); RETCHK(0x6020b8u, 0x6020b3u); LOADALL;
  /* 006020b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006020b9 call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6020bfu; SAVEALL; call_ind(c, t_); RETCHK(0x6020bfu, 0x6020b9u); LOADALL; }
L_006020bf:;
  /* 006020bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006020c0(CPU *c) {
  NATIVE_HOOK(0x6020c0u) REGS; LOADALL;
L_006020c0:;
  /* 006020c0 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 006020c2 push 0x63d060 */ { u32 v_ = 0x63d060u; esp -= 4; M32(esp) = v_; }
  /* 006020c7 call 0x5fee88 */ esp -= 4; M32(esp) = 0x6020ccu; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x6020c7u); RETCHK(0x6020ccu, 0x6020c7u); LOADALL;
  /* 006020cc mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 006020cf test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006020d1 jne 0x6020dd */ if (!ZF_) goto L_006020dd;
  /* 006020d3 call 0x61aee2 */ esp -= 4; M32(esp) = 0x6020d8u; SAVEALL; F_0061aee2(c); ABI_CHECK(0x61aee2u, 0x6020d3u); RETCHK(0x6020d8u, 0x6020d3u); LOADALL;
  /* 006020d8 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 006020db jmp 0x6020df */ goto L_006020df;
L_006020dd:;
  /* 006020dd mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
L_006020df:;
  /* 006020df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006020e1 jne 0x6020f5 */ if (!ZF_) goto L_006020f5;
  /* 006020e3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006020e6 cmp eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006020e9 jl 0x602149 */ if (LT_) goto L_00602149;
  /* 006020eb cmp eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006020ee jg 0x602149 */ if (!(ZF_|LT_)) goto L_00602149;
  /* 006020f0 add eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006020f3 jmp 0x602149 */ goto L_00602149;
L_006020f5:;
  /* 006020f5 call 0x61aefa */ esp -= 4; M32(esp) = 0x6020fau; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x6020f5u); RETCHK(0x6020fau, 0x6020f5u); LOADALL;
  /* 006020fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006020fb call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602101u; SAVEALL; call_ind(c, t_); RETCHK(0x602101u, 0x6020fbu); LOADALL; }
  /* 00602101 call 0x61aef4 */ esp -= 4; M32(esp) = 0x602106u; SAVEALL; F_0061aef4(c); ABI_CHECK(0x61aef4u, 0x602101u); RETCHK(0x602106u, 0x602101u); LOADALL;
  /* 00602106 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602108 je 0x602127 */ if (ZF_) goto L_00602127;
  /* 0060210a call 0x61aefa */ esp -= 4; M32(esp) = 0x60210fu; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x60210au); RETCHK(0x60210fu, 0x60210au); LOADALL;
  /* 0060210f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602110 call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602116u; SAVEALL; call_ind(c, t_); RETCHK(0x602116u, 0x602110u); LOADALL; }
  /* 00602116 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00602118 call 0x61aeee */ esp -= 4; M32(esp) = 0x60211du; SAVEALL; F_0061aeee(c); ABI_CHECK(0x61aeeeu, 0x602118u); RETCHK(0x60211du, 0x602118u); LOADALL;
  /* 0060211d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060211e mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 00602125 jmp 0x60212b */ goto L_0060212b;
L_00602127:;
  /* 00602127 and dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_0060212b:;
  /* 0060212b and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060212f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602130 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00602133 call 0x601f0c */ esp -= 4; M32(esp) = 0x602138u; SAVEALL; F_00601f0c(c); ABI_CHECK(0x601f0cu, 0x602133u); RETCHK(0x602138u, 0x602133u); LOADALL;
  /* 00602138 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00602139 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060213a mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0060213d or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00602141 call 0x60214f */ esp -= 4; M32(esp) = 0x602146u; SAVEALL; F_0060214f(c); ABI_CHECK(0x60214fu, 0x602141u); RETCHK(0x602146u, 0x602141u); LOADALL;
  /* 00602146 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_00602149:;
  /* 00602149 call 0x5feec3 */ esp -= 4; M32(esp) = 0x60214eu; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x602149u); RETCHK(0x60214eu, 0x602149u); LOADALL;
  /* 0060214e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0060214f(CPU *c) {
  NATIVE_HOOK(0x60214fu) REGS; LOADALL;
L_0060214f:;
  /* 0060214f cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602153 je 0x60215f */ if (ZF_) goto L_0060215f;
  /* 00602155 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00602157 call 0x61aee8 */ esp -= 4; M32(esp) = 0x60215cu; SAVEALL; F_0061aee8(c); ABI_CHECK(0x61aee8u, 0x602157u); RETCHK(0x60215cu, 0x602157u); LOADALL;
  /* 0060215c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060215d jmp 0x60216b */ goto L_0060216b;
L_0060215f:;
  /* 0060215f call 0x61aefa */ esp -= 4; M32(esp) = 0x602164u; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x60215fu); RETCHK(0x602164u, 0x60215fu); LOADALL;
  /* 00602164 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602165 call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60216bu; SAVEALL; call_ind(c, t_); RETCHK(0x60216bu, 0x602165u); LOADALL; }
L_0060216b:;
  /* 0060216b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0060216c(CPU *c) {
  NATIVE_HOOK(0x60216cu) REGS; LOADALL;
L_0060216c:;
  /* 0060216c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060216d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0060216f sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602172 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602173 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00602176 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602178 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602179 jne 0x60218a */ if (!ZF_) goto L_0060218a;
  /* 0060217b call 0x61aee2 */ esp -= 4; M32(esp) = 0x602180u; SAVEALL; F_0061aee2(c); ABI_CHECK(0x61aee2u, 0x60217bu); RETCHK(0x602180u, 0x60217bu); LOADALL;
  /* 00602180 mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 00602183 call 0x61aedc */ esp -= 4; M32(esp) = 0x602188u; SAVEALL; F_0061aedc(c); ABI_CHECK(0x61aedcu, 0x602183u); RETCHK(0x602188u, 0x602183u); LOADALL;
  /* 00602188 jmp 0x60218f */ goto L_0060218f;
L_0060218a:;
  /* 0060218a mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 0060218c mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
L_0060218f:;
  /* 0060218f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602191 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00602194 jne 0x6021b3 */ if (!ZF_) goto L_006021b3;
  /* 00602196 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602199 cmp eax, 0x61 */ { u32 a_ = eax, b_ = 0x61u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060219c jl 0x602248 */ if (LT_) goto L_00602248;
  /* 006021a2 cmp eax, 0x7a */ { u32 a_ = eax, b_ = 0x7au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006021a5 jg 0x602248 */ if (!(ZF_|LT_)) goto L_00602248;
  /* 006021ab sub eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006021ae jmp 0x602248 */ goto L_00602248;
L_006021b3:;
  /* 006021b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006021b4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 006021b7 cmp ebx, 0x100 */ { u32 a_ = ebx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006021bd jae 0x6021db */ if (!CF_) goto L_006021db;
  /* 006021bf test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006021c1 jne 0x6021d2 */ if (!ZF_) goto L_006021d2;
  /* 006021c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006021c4 call 0x61af58 */ esp -= 4; M32(esp) = 0x6021c9u; SAVEALL; F_0061af58(c); ABI_CHECK(0x61af58u, 0x6021c4u); RETCHK(0x6021c9u, 0x6021c4u); LOADALL;
  /* 006021c9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006021ca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_006021cc:;
  /* 006021cc jne 0x6021db */ if (!ZF_) goto L_006021db;
L_006021ce:;
  /* 006021ce mov eax, ebx */ { eax = (u32)(ebx); }
  /* 006021d0 jmp 0x602247 */ goto L_00602247;
L_006021d2:;
  /* 006021d2 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 006021d5 test byte ptr [eax + ebx*2], 2 */ { const u32 m_ = (u32)(eax + ebx * 2u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006021d9 jmp 0x6021cc */ goto L_006021cc;
L_006021db:;
  /* 006021db mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 006021de sar dword ptr [ebp - 8], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 n_ = (8u) & 31u; if (n_) { u32 a_ = M32(m_); s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); M32(m_) = (u32)(r_); } }
  /* 006021e2 call 0x61af4c */ esp -= 4; M32(esp) = 0x6021e7u; SAVEALL; F_0061af4c(c); ABI_CHECK(0x61af4cu, 0x6021e2u); RETCHK(0x6021e7u, 0x6021e2u); LOADALL;
  /* 006021e7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 006021e9 mov al, byte ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006021ec movzx edx, al */ { edx = (u32)((eax & 0xffu)); }
  /* 006021ef test byte ptr [ecx + edx*2 + 1], 0x80 */ { const u32 m_ = (u32)(ecx + edx * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006021f4 je 0x602205 */ if (ZF_) goto L_00602205;
  /* 006021f6 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 006021f8 mov byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006021fb mov byte ptr [ebp + 0xd], bl */ { const u32 m_ = (u32)(ebp + 0xdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006021fe mov byte ptr [ebp + 0xe], 0 */ { const u32 m_ = (u32)(ebp + 0xeu); M8(m_) = (u8)(0x0u); }
  /* 00602202 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 00602203 jmp 0x60220f */ goto L_0060220f;
L_00602205:;
  /* 00602205 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602207 mov byte ptr [ebp + 0xc], bl */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0060220a mov byte ptr [ebp + 0xd], 0 */ { const u32 m_ = (u32)(ebp + 0xdu); M8(m_) = (u8)(0x0u); }
  /* 0060220e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0060220f:;
  /* 0060220f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00602211 push dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00602214 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00602217 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00602219 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060221a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060221b lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0060221e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060221f push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00602224 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602225 call 0x61af46 */ esp -= 4; M32(esp) = 0x60222au; SAVEALL; F_0061af46(c); ABI_CHECK(0x61af46u, 0x602225u); RETCHK(0x60222au, 0x602225u); LOADALL;
  /* 0060222a add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060222d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060222f je 0x6021ce */ if (ZF_) goto L_006021ce;
  /* 00602231 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602234 jne 0x60223c */ if (!ZF_) goto L_0060223c;
  /* 00602236 movzx eax, byte ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M8(m_)); }
  /* 0060223a jmp 0x602247 */ goto L_00602247;
L_0060223c:;
  /* 0060223c movzx ecx, byte ptr [ebp - 3] */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); ecx = (u32)(M8(m_)); }
  /* 00602240 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602242 mov ah, byte ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00602245 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00602247:;
  /* 00602247 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00602248:;
  /* 00602248 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602249 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060224a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0060224b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0060224c(CPU *c) {
  NATIVE_HOOK(0x60224cu) REGS; LOADALL;
L_0060224c:;
  /* 0060224c push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0060224e push 0x63d070 */ { u32 v_ = 0x63d070u; esp -= 4; M32(esp) = v_; }
  /* 00602253 call 0x5fee88 */ esp -= 4; M32(esp) = 0x602258u; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x602253u); RETCHK(0x602258u, 0x602253u); LOADALL;
  /* 00602258 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0060225b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060225d jne 0x602269 */ if (!ZF_) goto L_00602269;
  /* 0060225f call 0x61aee2 */ esp -= 4; M32(esp) = 0x602264u; SAVEALL; F_0061aee2(c); ABI_CHECK(0x61aee2u, 0x60225fu); RETCHK(0x602264u, 0x60225fu); LOADALL;
  /* 00602264 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602267 jmp 0x60226b */ goto L_0060226b;
L_00602269:;
  /* 00602269 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
L_0060226b:;
  /* 0060226b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060226d jne 0x602281 */ if (!ZF_) goto L_00602281;
  /* 0060226f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602272 cmp eax, 0x61 */ { u32 a_ = eax, b_ = 0x61u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602275 jl 0x6022d5 */ if (LT_) goto L_006022d5;
  /* 00602277 cmp eax, 0x7a */ { u32 a_ = eax, b_ = 0x7au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060227a jg 0x6022d5 */ if (!(ZF_|LT_)) goto L_006022d5;
  /* 0060227c sub eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060227f jmp 0x6022d5 */ goto L_006022d5;
L_00602281:;
  /* 00602281 call 0x61aefa */ esp -= 4; M32(esp) = 0x602286u; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x602281u); RETCHK(0x602286u, 0x602281u); LOADALL;
  /* 00602286 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602287 call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60228du; SAVEALL; call_ind(c, t_); RETCHK(0x60228du, 0x602287u); LOADALL; }
  /* 0060228d call 0x61aef4 */ esp -= 4; M32(esp) = 0x602292u; SAVEALL; F_0061aef4(c); ABI_CHECK(0x61aef4u, 0x60228du); RETCHK(0x602292u, 0x60228du); LOADALL;
  /* 00602292 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602294 je 0x6022b3 */ if (ZF_) goto L_006022b3;
  /* 00602296 call 0x61aefa */ esp -= 4; M32(esp) = 0x60229bu; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x602296u); RETCHK(0x60229bu, 0x602296u); LOADALL;
  /* 0060229b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060229c call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6022a2u; SAVEALL; call_ind(c, t_); RETCHK(0x6022a2u, 0x60229cu); LOADALL; }
  /* 006022a2 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 006022a4 call 0x61aeee */ esp -= 4; M32(esp) = 0x6022a9u; SAVEALL; F_0061aeee(c); ABI_CHECK(0x61aeeeu, 0x6022a4u); RETCHK(0x6022a9u, 0x6022a4u); LOADALL;
  /* 006022a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006022aa mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 006022b1 jmp 0x6022b7 */ goto L_006022b7;
L_006022b3:;
  /* 006022b3 and dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_006022b7:;
  /* 006022b7 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 006022bb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006022bc push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 006022bf call 0x60216c */ esp -= 4; M32(esp) = 0x6022c4u; SAVEALL; F_0060216c(c); ABI_CHECK(0x60216cu, 0x6022bfu); RETCHK(0x6022c4u, 0x6022bfu); LOADALL;
  /* 006022c4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006022c5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006022c6 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 006022c9 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 006022cd call 0x6022db */ esp -= 4; M32(esp) = 0x6022d2u; SAVEALL; F_006022db(c); ABI_CHECK(0x6022dbu, 0x6022cdu); RETCHK(0x6022d2u, 0x6022cdu); LOADALL;
  /* 006022d2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_006022d5:;
  /* 006022d5 call 0x5feec3 */ esp -= 4; M32(esp) = 0x6022dau; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x6022d5u); RETCHK(0x6022dau, 0x6022d5u); LOADALL;
  /* 006022da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006022db(CPU *c) {
  NATIVE_HOOK(0x6022dbu) REGS; LOADALL;
L_006022db:;
  /* 006022db cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006022df je 0x6022eb */ if (ZF_) goto L_006022eb;
  /* 006022e1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 006022e3 call 0x61aee8 */ esp -= 4; M32(esp) = 0x6022e8u; SAVEALL; F_0061aee8(c); ABI_CHECK(0x61aee8u, 0x6022e3u); RETCHK(0x6022e8u, 0x6022e3u); LOADALL;
  /* 006022e8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006022e9 jmp 0x6022f7 */ goto L_006022f7;
L_006022eb:;
  /* 006022eb call 0x61aefa */ esp -= 4; M32(esp) = 0x6022f0u; SAVEALL; F_0061aefa(c); ABI_CHECK(0x61aefau, 0x6022ebu); RETCHK(0x6022f0u, 0x6022ebu); LOADALL;
  /* 006022f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006022f1 call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6022f7u; SAVEALL; call_ind(c, t_); RETCHK(0x6022f7u, 0x6022f1u); LOADALL; }
L_006022f7:;
  /* 006022f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006022f8(CPU *c) {
  NATIVE_HOOK(0x6022f8u) REGS; LOADALL;
L_006022f8:;
  /* 006022f8 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 006022fc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006022fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006022fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006022ff mov ebx, edx */ { ebx = (u32)(edx); }
  /* 00602301 mov edi, edx */ { edi = (u32)(edx); }
  /* 00602303 and ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00602306 and edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0060230c test dl, 0x40 */ { u32 a_ = (edx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060230f je 0x602314 */ if (ZF_) goto L_00602314;
  /* 00602311 or edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_00602314:;
  /* 00602314 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00602316 and edx, 0xffffff3b */ { u32 a_ = edx, b_ = 0xffffff3bu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0060231c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060231e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0060231f:;
  /* 0060231f cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602321 je 0x60232f */ if (ZF_) goto L_0060232f;
  /* 00602323 mov ecx, dword ptr [eax*4 + 0x63d09c] */ { const u32 m_ = (u32)(eax * 4u + 0x63d09cu); ecx = (u32)(M32(m_)); }
  /* 0060232a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060232b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060232d jne 0x60231f */ if (!ZF_) goto L_0060231f;
L_0060232f:;
  /* 0060232f mov esi, eax */ { esi = (u32)(eax); }
  /* 00602331 shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00602334 cmp dword ptr [esi + 0x63d098], 0 */ { const u32 m_ = (u32)(esi + 0x63d098u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060233b je 0x602390 */ if (ZF_) goto L_00602390;
  /* 0060233d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060233f je 0x60235d */ if (ZF_) goto L_0060235d;
  /* 00602341 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00602344 je 0x60235d */ if (ZF_) goto L_0060235d;
  /* 00602346 push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 0060234b push dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0060234f call 0x5fea9a */ esp -= 4; M32(esp) = 0x602354u; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x60234fu); RETCHK(0x602354u, 0x60234fu); LOADALL;
  /* 00602354 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602356 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00602357 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00602358 je 0x60235d */ if (ZF_) goto L_0060235d;
  /* 0060235a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060235b jmp 0x60238a */ goto L_0060238a;
L_0060235d:;
  /* 0060235d push dword ptr [esi + 0x680e70] */ { const u32 m_ = (u32)(esi + 0x680e70u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00602363 push dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00602367 call 0x5fea9a */ esp -= 4; M32(esp) = 0x60236cu; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x602367u); RETCHK(0x60236cu, 0x602367u); LOADALL;
  /* 0060236c mov esi, eax */ { esi = (u32)(eax); }
  /* 0060236e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602370 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00602371 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00602372 je 0x602390 */ if (ZF_) goto L_00602390;
  /* 00602374 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602376 je 0x602394 */ if (ZF_) goto L_00602394;
  /* 00602378 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0060237a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060237c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060237d call 0x5feaa0 */ esp -= 4; M32(esp) = 0x602382u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x60237du); RETCHK(0x602382u, 0x60237du); LOADALL;
  /* 00602382 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602385 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602387 je 0x602394 */ if (ZF_) goto L_00602394;
  /* 00602389 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_0060238a:;
  /* 0060238a call 0x5feafa */ esp -= 4; M32(esp) = 0x60238fu; SAVEALL; F_005feafa(c); ABI_CHECK(0x5feafau, 0x60238au); RETCHK(0x60238fu, 0x60238au); LOADALL;
  /* 0060238f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_00602390:;
  /* 00602390 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602392 jmp 0x602396 */ goto L_00602396;
L_00602394:;
  /* 00602394 mov eax, esi */ { eax = (u32)(esi); }
L_00602396:;
  /* 00602396 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602397 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602398 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602399 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006023ce(CPU *c) {
  NATIVE_HOOK(0x6023ceu) REGS; LOADALL;
L_006023ce:;
  /* 006023ce push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 006023d2 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 006023d6 call 0x61af6a */ esp -= 4; M32(esp) = 0x6023dbu; SAVEALL; F_0061af6a(c); ABI_CHECK(0x61af6au, 0x6023d6u); RETCHK(0x6023dbu, 0x6023d6u); LOADALL;
  /* 006023db mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 006023df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006023e1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006023e2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006023e3 jle 0x6023f4 */ if ((ZF_|LT_)) goto L_006023f4;
  /* 006023e5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 006023e7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_006023e9:;
  /* 006023e9 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006023ea fmul qword ptr [0x634558] */ { const u32 m_ = (u32)(0x634558u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006023f0 jne 0x6023e9 */ if (!ZF_) goto L_006023e9;
  /* 006023f2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_006023f4:;
  /* 006023f4 jge 0x602401 */ if (!LT_) goto L_00602401;
  /* 006023f6 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
L_006023f8:;
  /* 006023f8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006023f9 fmul qword ptr [0x657000] */ { const u32 m_ = (u32)(0x657000u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006023ff jne 0x6023f8 */ if (!ZF_) goto L_006023f8;
L_00602401:;
  /* 00602401 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602402(CPU *c) {
  NATIVE_HOOK(0x602402u) REGS; LOADALL;
L_00602402:;
  /* 00602402 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00602406 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0060240a push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0060240e call 0x6023ce */ esp -= 4; M32(esp) = 0x602413u; SAVEALL; F_006023ce(c); ABI_CHECK(0x6023ceu, 0x60240eu); RETCHK(0x602413u, 0x60240eu); LOADALL;
  /* 00602413 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602416 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602417(CPU *c) {
  NATIVE_HOOK(0x602417u) REGS; LOADALL;
L_00602417:;
  /* 00602417 mov eax, dword ptr [0x681018] */ { const u32 m_ = (u32)(0x681018u); eax = (u32)(M32(m_)); }
  /* 0060241c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060241e jne 0x602425 */ if (!ZF_) goto L_00602425;
  /* 00602420 jmp 0x61af70 */ goto L_0061af70;
L_00602425:;
  /* 00602425 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00602429 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0060242a mov dword ptr [0x681018], eax */ { const u32 m_ = (u32)(0x681018u); M32(m_) = (u32)(eax); }
  /* 0060242f mov dword ptr [eax*4 + 0x694728], ecx */ { const u32 m_ = (u32)(eax * 4u + 0x694728u); M32(m_) = (u32)(ecx); }
  /* 00602436 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061af70:;
  /* 0061af70 jmp dword ptr [0x62e40c] */ { const u32 m_ = (u32)(0x62e40cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00602457(CPU *c) {
  NATIVE_HOOK(0x602457u) REGS; LOADALL;
L_00602457:;
  /* 00602457 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0060245b call dword ptr [0x62e20c] */ { const u32 m_ = (u32)(0x62e20cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602461u; SAVEALL; call_ind(c, t_); RETCHK(0x602461u, 0x60245bu); LOADALL; }
  /* 00602461 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602462(CPU *c) {
  NATIVE_HOOK(0x602462u) REGS; LOADALL;
L_00602462:;
  /* 00602462 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00602466 call dword ptr [0x62e1a8] */ { const u32 m_ = (u32)(0x62e1a8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60246cu; SAVEALL; call_ind(c, t_); RETCHK(0x60246cu, 0x602466u); LOADALL; }
  /* 0060246c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0060246d(CPU *c) {
  NATIVE_HOOK(0x60246du) REGS; LOADALL;
L_0060246d:;
  /* 0060246d push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 00602471 call dword ptr [0x62e15c] */ { const u32 m_ = (u32)(0x62e15cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602477u; SAVEALL; call_ind(c, t_); RETCHK(0x602477u, 0x602471u); LOADALL; }
  /* 00602477 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602478(CPU *c) {
  NATIVE_HOOK(0x602478u) REGS; LOADALL;
L_00602478:;
  /* 00602478 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0060247c call dword ptr [0x62e0d0] */ { const u32 m_ = (u32)(0x62e0d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602482u; SAVEALL; call_ind(c, t_); RETCHK(0x602482u, 0x60247cu); LOADALL; }
  /* 00602482 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006024a0(CPU *c) {
  NATIVE_HOOK(0x6024a0u) REGS; LOADALL;
L_006024a0:;
  /* 006024a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006024a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006024a3 lea ecx, [esi + 0x18] */ ecx = (u32)((u32)(esi + 0x18u));
  /* 006024a6 call 0x4045f0 */ esp -= 4; M32(esp) = 0x6024abu; SAVEALL; F_004045f0(c); ABI_CHECK(0x4045f0u, 0x6024a6u); RETCHK(0x6024abu, 0x6024a6u); LOADALL;
  /* 006024ab xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006024ad mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 006024b0 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 006024b3 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 006024b6 mov eax, esi */ { eax = (u32)(esi); }
  /* 006024b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006024b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006024d0(CPU *c) {
  NATIVE_HOOK(0x6024d0u) REGS; LOADALL;
L_006024d0:;
  /* 006024d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006024d1 lea ebp, [esp - 0x78] */ ebp = (u32)((u32)(esp + 0xffffff88u));
  /* 006024d5 sub esp, 0x98 */ { u32 a_ = esp, b_ = 0x98u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006024db mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 006024e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006024e1 mov dword ptr [ebp + 0x74], eax */ { const u32 m_ = (u32)(ebp + 0x74u); M32(m_) = (u32)(eax); }
  /* 006024e4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006024e6 call 0x6024a0 */ esp -= 4; M32(esp) = 0x6024ebu; SAVEALL; F_006024a0(c); ABI_CHECK(0x6024a0u, 0x6024e6u); RETCHK(0x6024ebu, 0x6024e6u); LOADALL;
  /* 006024eb mov eax, 0x400000 */ { eax = (u32)(0x400000u); }
  /* 006024f0 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 006024f5 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 006024f8 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 006024fb lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 006024fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602500 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602501 mov dword ptr [esi], 0x3c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x3cu); }
  /* 00602507 mov byte ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M8(m_) = (u8)(0x0u); }
  /* 0060250b call 0x61af5e */ esp -= 4; M32(esp) = 0x602510u; SAVEALL; F_0061af5e(c); ABI_CHECK(0x61af5eu, 0x60250bu); RETCHK(0x602510u, 0x60250bu); LOADALL;
  /* 00602510 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602513 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00602516 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602517 mov dword ptr [ebp - 0x20], 0x94 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x94u); }
  /* 0060251e call dword ptr [0x62e1ac] */ { const u32 m_ = (u32)(0x62e1acu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602524u; SAVEALL; call_ind(c, t_); RETCHK(0x602524u, 0x60251eu); LOADALL; }
  /* 00602524 cmp dword ptr [ebp - 0x10], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602528 jne 0x602532 */ if (!ZF_) goto L_00602532;
  /* 0060252a cmp dword ptr [ebp - 0x1c], 5 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060252e jb 0x60254a */ if (CF_) goto L_0060254a;
  /* 00602530 jmp 0x602546 */ goto L_00602546;
L_00602532:;
  /* 00602532 cmp dword ptr [ebp - 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602536 jne 0x60254a */ if (!ZF_) goto L_0060254a;
  /* 00602538 cmp dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060253c ja 0x602546 */ if (!(CF_|ZF_)) goto L_00602546;
  /* 0060253e jne 0x60254a */ if (!ZF_) goto L_0060254a;
  /* 00602540 cmp dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602544 jbe 0x60254a */ if ((CF_|ZF_)) goto L_0060254a;
L_00602546:;
  /* 00602546 mov byte ptr [esi + 0xc], 1 */ { const u32 m_ = (u32)(esi + 0xcu); M8(m_) = (u8)(0x1u); }
L_0060254a:;
  /* 0060254a lea ecx, [esi + 0x18] */ ecx = (u32)((u32)(esi + 0x18u));
  /* 0060254d mov dword ptr [esi + 0x10], 0x710 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x710u); }
  /* 00602554 mov dword ptr [esi + 0x14], 0x63d1b0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x63d1b0u); }
  /* 0060255b call 0x404610 */ esp -= 4; M32(esp) = 0x602560u; SAVEALL; F_00404610(c); ABI_CHECK(0x404610u, 0x60255bu); RETCHK(0x602560u, 0x60255bu); LOADALL;
  /* 00602560 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602562 jge 0x60256b */ if (!LT_) goto L_0060256b;
  /* 00602564 mov byte ptr [0x9b888c], 1 */ { const u32 m_ = (u32)(0x9b888cu); M8(m_) = (u8)(0x1u); }
L_0060256b:;
  /* 0060256b mov ecx, dword ptr [ebp + 0x74] */ { const u32 m_ = (u32)(ebp + 0x74u); ecx = (u32)(M32(m_)); }
  /* 0060256e mov eax, esi */ { eax = (u32)(esi); }
  /* 00602570 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602571 call 0x61af31 */ esp -= 4; M32(esp) = 0x602576u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x602571u); RETCHK(0x602576u, 0x602571u); LOADALL;
  /* 00602576 add ebp, 0x78 */ { u32 a_ = ebp, b_ = 0x78u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 00602579 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0060257a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0060257c(CPU *c) {
  NATIVE_HOOK(0x60257cu) REGS; LOADALL;
L_0060257c:;
  /* 0060257c jmp dword ptr [0x62e050] */ { const u32 m_ = (u32)(0x62e050u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00602582(CPU *c) {
  NATIVE_HOOK(0x602582u) REGS; LOADALL;
L_00602582:;
  /* 00602582 jmp dword ptr [0x62e748] */ { const u32 m_ = (u32)(0x62e748u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00602590(CPU *c) {
  NATIVE_HOOK(0x602590u) REGS; LOADALL;
L_00602590:;
  /* 00602590 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00602594 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602596 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602597 call dword ptr [0x68107c] */ { const u32 m_ = (u32)(0x68107cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60259du; SAVEALL; call_ind(c, t_); RETCHK(0x60259du, 0x602597u); LOADALL; }
  /* 0060259d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_006025a0(CPU *c) {
  NATIVE_HOOK(0x6025a0u) REGS; LOADALL;
L_006025a0:;
  /* 006025a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006025a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 006025a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 006025a5 push 0x63d1c0 */ { u32 v_ = 0x63d1c0u; esp -= 4; M32(esp) = v_; }
  /* 006025aa push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 006025af mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 006025b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006025b6 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 006025bd sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006025c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006025c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006025c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006025c3 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 006025c6 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006025c9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006025cb je 0x6026bc */ if (ZF_) goto L_006026bc;
  /* 006025d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006025d2 call dword ptr [0x62e140] */ { const u32 m_ = (u32)(0x62e140u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6025d8u; SAVEALL; call_ind(c, t_); RETCHK(0x6025d8u, 0x6025d2u); LOADALL; }
  /* 006025d8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 006025da inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006025db mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 006025de push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006025e0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006025e2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006025e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006025e4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006025e6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006025e8 call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6025eeu; SAVEALL; call_ind(c, t_); RETCHK(0x6025eeu, 0x6025e8u); LOADALL; }
  /* 006025ee mov esi, eax */ { esi = (u32)(eax); }
  /* 006025f0 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 006025f3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006025f5 je 0x602692 */ if (ZF_) goto L_00602692;
  /* 006025fb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00602602 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 00602605 cmp esi, 0x1000 */ { u32 a_ = esi, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060260b jge 0x60262b */ if (!LT_) goto L_0060262b;
  /* 0060260d add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00602610 and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602613 call 0x5fede0 */ esp -= 4; M32(esp) = 0x602618u; SAVEALL; F_005fede0(c); ABI_CHECK(0x5fede0u, 0x602613u); RETCHK(0x602618u, 0x602613u); LOADALL;
  /* 00602618 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 0060261b mov eax, esp */ { eax = (u32)(esp); }
  /* 0060261d mov edi, eax */ { edi = (u32)(eax); }
  /* 0060261f mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 00602622 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00602629 jmp 0x60265a */ goto L_0060265a;
L_0060262b:;
  /* 0060262b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060262c call 0x5fea94 */ esp -= 4; M32(esp) = 0x602631u; SAVEALL; F_005fea94(c); ABI_CHECK(0x5fea94u, 0x60262cu); RETCHK(0x602631u, 0x60262cu); LOADALL;
  /* 00602631 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602634 mov edi, eax */ { edi = (u32)(eax); }
  /* 00602636 mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 00602639 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00602640 jmp 0x60265a */ goto L_0060265a;
L_0060265a:;
  /* 0060265a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060265c jne 0x60266c */ if (!ZF_) goto L_0060266c;
  /* 0060265e push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 00602663 call 0x602590 */ esp -= 4; M32(esp) = 0x602668u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x602663u); RETCHK(0x602668u, 0x602663u); LOADALL;
  /* 00602668 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060266a jmp 0x6026ea */ goto L_006026ea;
L_0060266c:;
  /* 0060266c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060266d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060266e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0060266f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00602672 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602673 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602675 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602677 call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60267du; SAVEALL; call_ind(c, t_); RETCHK(0x60267du, 0x602677u); LOADALL; }
  /* 0060267d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060267f jne 0x6026c0 */ if (!ZF_) goto L_006026c0;
  /* 00602681 cmp esi, 0x1000 */ { u32 a_ = esi, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602687 jl 0x602692 */ if (LT_) goto L_00602692;
  /* 00602689 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060268a call 0x5fe99e */ esp -= 4; M32(esp) = 0x60268fu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x60268au); RETCHK(0x60268fu, 0x60268au); LOADALL;
  /* 0060268f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00602692:;
  /* 00602692 mov esi, dword ptr [0x62e120] */ { const u32 m_ = (u32)(0x62e120u); esi = (u32)(M32(m_)); }
  /* 00602698 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x60269au; SAVEALL; call_ind(c, t_); RETCHK(0x60269au, 0x602698u); LOADALL; }
  /* 0060269a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060269c jg 0x6026aa */ if (!(ZF_|LT_)) goto L_006026aa;
  /* 0060269e call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x6026a0u; SAVEALL; call_ind(c, t_); RETCHK(0x6026a0u, 0x60269eu); LOADALL; }
  /* 006026a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006026a1 call 0x602590 */ esp -= 4; M32(esp) = 0x6026a6u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x6026a1u); RETCHK(0x6026a6u, 0x6026a1u); LOADALL;
  /* 006026a6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006026a8 jmp 0x6026ea */ goto L_006026ea;
L_006026aa:;
  /* 006026aa call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x6026acu; SAVEALL; call_ind(c, t_); RETCHK(0x6026acu, 0x6026aau); LOADALL; }
  /* 006026ac and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006026b1 or eax, 0x80070000 */ { u32 a_ = eax, b_ = 0x80070000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006026b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006026b7 call 0x602590 */ esp -= 4; M32(esp) = 0x6026bcu; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x6026b7u); RETCHK(0x6026bcu, 0x6026b7u); LOADALL;
L_006026bc:;
  /* 006026bc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006026be jmp 0x6026ea */ goto L_006026ea;
L_006026c0:;
  /* 006026c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006026c1 call dword ptr [0x62e470] */ { const u32 m_ = (u32)(0x62e470u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6026c7u; SAVEALL; call_ind(c, t_); RETCHK(0x6026c7u, 0x6026c1u); LOADALL; }
  /* 006026c7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 006026c9 cmp esi, 0x1000 */ { u32 a_ = esi, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006026cf jl 0x6026da */ if (LT_) goto L_006026da;
  /* 006026d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006026d2 call 0x5fe99e */ esp -= 4; M32(esp) = 0x6026d7u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x6026d2u); RETCHK(0x6026d7u, 0x6026d2u); LOADALL;
  /* 006026d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006026da:;
  /* 006026da test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006026dc jne 0x6026e8 */ if (!ZF_) goto L_006026e8;
  /* 006026de push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 006026e3 call 0x602590 */ esp -= 4; M32(esp) = 0x6026e8u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x6026e3u); RETCHK(0x6026e8u, 0x6026e3u); LOADALL;
L_006026e8:;
  /* 006026e8 mov eax, ebx */ { eax = (u32)(ebx); }
L_006026ea:;
  /* 006026ea lea esp, [ebp - 0x30] */ esp = (u32)((u32)(ebp + 0xffffffd0u));
  /* 006026ed mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 006026f0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 006026f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006026f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006026f9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006026fa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006026fc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006026fd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00602642(CPU *c) {
  NATIVE_HOOK(0x602642u) REGS; LOADALL;
L_00602642:;
  /* 00602642 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00602647 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602648(CPU *c) {
  NATIVE_HOOK(0x602648u) REGS; LOADALL;
L_00602648:;
  /* 00602648 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 0060264b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0060264d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00602654 mov ebx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ebx = (u32)(M32(m_)); }
  /* 00602657 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
  /* 0060265a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060265c jne 0x60266c */ if (!ZF_) goto L_0060266c;
  /* 0060265e push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 00602663 call 0x602590 */ esp -= 4; M32(esp) = 0x602668u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x602663u); RETCHK(0x602668u, 0x602663u); LOADALL;
  /* 00602668 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060266a jmp 0x6026ea */ goto L_006026ea;
L_0060266c:;
  /* 0060266c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060266d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060266e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0060266f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00602672 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602673 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602675 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602677 call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60267du; SAVEALL; call_ind(c, t_); RETCHK(0x60267du, 0x602677u); LOADALL; }
  /* 0060267d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060267f jne 0x6026c0 */ if (!ZF_) goto L_006026c0;
  /* 00602681 cmp esi, 0x1000 */ { u32 a_ = esi, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602687 jl 0x602692 */ if (LT_) goto L_00602692;
  /* 00602689 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060268a call 0x5fe99e */ esp -= 4; M32(esp) = 0x60268fu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x60268au); RETCHK(0x60268fu, 0x60268au); LOADALL;
  /* 0060268f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00602692:;
  /* 00602692 mov esi, dword ptr [0x62e120] */ { const u32 m_ = (u32)(0x62e120u); esi = (u32)(M32(m_)); }
  /* 00602698 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x60269au; SAVEALL; call_ind(c, t_); RETCHK(0x60269au, 0x602698u); LOADALL; }
  /* 0060269a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060269c jg 0x6026aa */ if (!(ZF_|LT_)) goto L_006026aa;
  /* 0060269e call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x6026a0u; SAVEALL; call_ind(c, t_); RETCHK(0x6026a0u, 0x60269eu); LOADALL; }
  /* 006026a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006026a1 call 0x602590 */ esp -= 4; M32(esp) = 0x6026a6u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x6026a1u); RETCHK(0x6026a6u, 0x6026a1u); LOADALL;
  /* 006026a6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006026a8 jmp 0x6026ea */ goto L_006026ea;
L_006026aa:;
  /* 006026aa call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x6026acu; SAVEALL; call_ind(c, t_); RETCHK(0x6026acu, 0x6026aau); LOADALL; }
  /* 006026ac and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006026b1 or eax, 0x80070000 */ { u32 a_ = eax, b_ = 0x80070000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006026b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006026b7 call 0x602590 */ esp -= 4; M32(esp) = 0x6026bcu; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x6026b7u); RETCHK(0x6026bcu, 0x6026b7u); LOADALL;
  /* 006026bc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006026be jmp 0x6026ea */ goto L_006026ea;
L_006026c0:;
  /* 006026c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006026c1 call dword ptr [0x62e470] */ { const u32 m_ = (u32)(0x62e470u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6026c7u; SAVEALL; call_ind(c, t_); RETCHK(0x6026c7u, 0x6026c1u); LOADALL; }
  /* 006026c7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 006026c9 cmp esi, 0x1000 */ { u32 a_ = esi, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006026cf jl 0x6026da */ if (LT_) goto L_006026da;
  /* 006026d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006026d2 call 0x5fe99e */ esp -= 4; M32(esp) = 0x6026d7u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x6026d2u); RETCHK(0x6026d7u, 0x6026d2u); LOADALL;
  /* 006026d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006026da:;
  /* 006026da test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006026dc jne 0x6026e8 */ if (!ZF_) goto L_006026e8;
  /* 006026de push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 006026e3 call 0x602590 */ esp -= 4; M32(esp) = 0x6026e8u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x6026e3u); RETCHK(0x6026e8u, 0x6026e3u); LOADALL;
L_006026e8:;
  /* 006026e8 mov eax, ebx */ { eax = (u32)(ebx); }
L_006026ea:;
  /* 006026ea lea esp, [ebp - 0x30] */ esp = (u32)((u32)(ebp + 0xffffffd0u));
  /* 006026ed mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 006026f0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 006026f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006026f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006026f9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006026fa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006026fc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006026fd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00602700(CPU *c) {
  NATIVE_HOOK(0x602700u) REGS; LOADALL;
L_00602700:;
  /* 00602700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00602701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00602703 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00602705 push 0x61b2c0 */ { u32 v_ = 0x61b2c0u; esp -= 4; M32(esp) = v_; }
  /* 0060270a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00602710 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602711 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00602718 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060271b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0060271c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060271d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060271e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00602721 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602723 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00602726 je 0x6027e7 */ if (ZF_) goto L_006027e7;
  /* 0060272c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060272d call 0x5feb00 */ esp -= 4; M32(esp) = 0x602732u; SAVEALL; F_005feb00(c); ABI_CHECK(0x5feb00u, 0x60272du); RETCHK(0x602732u, 0x60272du); LOADALL;
  /* 00602732 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602735 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602737 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602739 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060273b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060273d mov esi, eax */ { esi = (u32)(eax); }
  /* 0060273f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00602740 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602741 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602742 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602744 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602746 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00602749 call dword ptr [0x62e170] */ { const u32 m_ = (u32)(0x62e170u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x60274fu; SAVEALL; call_ind(c, t_); RETCHK(0x60274fu, 0x602749u); LOADALL; }
  /* 0060274f mov edi, eax */ { edi = (u32)(eax); }
  /* 00602751 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602753 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00602756 jne 0x6027a8 */ if (!ZF_) goto L_006027a8;
  /* 00602758 mov esi, dword ptr [0x62e120] */ { const u32 m_ = (u32)(0x62e120u); esi = (u32)(M32(m_)); }
  /* 0060275e call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x602760u; SAVEALL; call_ind(c, t_); RETCHK(0x602760u, 0x60275eu); LOADALL; }
  /* 00602760 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602762 jg 0x602781 */ if (!(ZF_|LT_)) goto L_00602781;
  /* 00602764 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x602766u; SAVEALL; call_ind(c, t_); RETCHK(0x602766u, 0x602764u); LOADALL; }
  /* 00602766 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602767 call 0x602590 */ esp -= 4; M32(esp) = 0x60276cu; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x602767u); RETCHK(0x60276cu, 0x602767u); LOADALL;
  /* 0060276c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060276e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00602771 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00602778 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602779 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060277a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060277b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0060277d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060277e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00602781:;
  /* 00602781 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x602783u; SAVEALL; call_ind(c, t_); RETCHK(0x602783u, 0x602781u); LOADALL; }
  /* 00602783 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602788 or eax, 0x80070000 */ { u32 a_ = eax, b_ = 0x80070000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060278d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060278e call 0x602590 */ esp -= 4; M32(esp) = 0x602793u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x60278eu); RETCHK(0x602793u, 0x60278eu); LOADALL;
  /* 00602793 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602795 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00602798 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0060279f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006027a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006027a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006027a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006027a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006027a5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_006027a8:;
  /* 006027a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006027a9 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 006027b0 call 0x5fe934 */ esp -= 4; M32(esp) = 0x6027b5u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x6027b0u); RETCHK(0x6027b5u, 0x6027b0u); LOADALL;
  /* 006027b5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006027b8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 006027ba jmp 0x6027d2 */ goto L_006027d2;
L_006027d2:;
  /* 006027d2 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006027d4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 006027db jne 0x6027fc */ if (!ZF_) goto L_006027fc;
  /* 006027dd push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 006027e2 call 0x602590 */ esp -= 4; M32(esp) = 0x6027e7u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x6027e2u); RETCHK(0x6027e7u, 0x6027e2u); LOADALL;
L_006027e7:;
  /* 006027e7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006027e9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 006027ec mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 006027f3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006027f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006027f5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006027f6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006027f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006027f9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_006027fc:;
  /* 006027fc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006027ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602801 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602803 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602804 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602805 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602806 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602807 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602809 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060280b call dword ptr [0x62e170] */ { const u32 m_ = (u32)(0x62e170u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602811u; SAVEALL; call_ind(c, t_); RETCHK(0x602811u, 0x60280bu); LOADALL; }
  /* 00602811 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602813 jne 0x602842 */ if (!ZF_) goto L_00602842;
  /* 00602815 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602816 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x60281bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x602816u); RETCHK(0x60281bu, 0x602816u); LOADALL;
  /* 0060281b mov esi, dword ptr [0x62e120] */ { const u32 m_ = (u32)(0x62e120u); esi = (u32)(M32(m_)); }
  /* 00602821 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602824 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00602826 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x602828u; SAVEALL; call_ind(c, t_); RETCHK(0x602828u, 0x602826u); LOADALL; }
  /* 00602828 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060282a jg 0x602830 */ if (!(ZF_|LT_)) goto L_00602830;
  /* 0060282c call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x60282eu; SAVEALL; call_ind(c, t_); RETCHK(0x60282eu, 0x60282cu); LOADALL; }
  /* 0060282e jmp 0x60283c */ goto L_0060283c;
L_00602830:;
  /* 00602830 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x602832u; SAVEALL; call_ind(c, t_); RETCHK(0x602832u, 0x602830u); LOADALL; }
  /* 00602832 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602837 or eax, 0x80070000 */ { u32 a_ = eax, b_ = 0x80070000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0060283c:;
  /* 0060283c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060283d call 0x602590 */ esp -= 4; M32(esp) = 0x602842u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x60283du); RETCHK(0x602842u, 0x60283du); LOADALL;
L_00602842:;
  /* 00602842 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00602845 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602846 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602847 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00602849 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00602850 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602851 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602853 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602854 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_006027bc(CPU *c) {
  NATIVE_HOOK(0x6027bcu) REGS; LOADALL;
L_006027bc:;
  /* 006027bc mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 006027c3 mov eax, 0x6027c9 */ { eax = (u32)(0x6027c9u); }
  /* 006027c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006027c9(CPU *c) {
  NATIVE_HOOK(0x6027c9u) REGS; LOADALL;
L_006027c9:;
  /* 006027c9 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 006027cc mov edi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edi = (u32)(M32(m_)); }
  /* 006027cf mov ebx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ebx = (u32)(M32(m_)); }
  /* 006027d2 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006027d4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 006027db jne 0x6027fc */ if (!ZF_) goto L_006027fc;
  /* 006027dd push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 006027e2 call 0x602590 */ esp -= 4; M32(esp) = 0x6027e7u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x6027e2u); RETCHK(0x6027e7u, 0x6027e2u); LOADALL;
  /* 006027e7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006027e9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 006027ec mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 006027f3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006027f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006027f5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006027f6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006027f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006027f9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_006027fc:;
  /* 006027fc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006027ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602801 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602803 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602804 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602805 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602806 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602807 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602809 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060280b call dword ptr [0x62e170] */ { const u32 m_ = (u32)(0x62e170u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602811u; SAVEALL; call_ind(c, t_); RETCHK(0x602811u, 0x60280bu); LOADALL; }
  /* 00602811 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602813 jne 0x602842 */ if (!ZF_) goto L_00602842;
  /* 00602815 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602816 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x60281bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x602816u); RETCHK(0x60281bu, 0x602816u); LOADALL;
  /* 0060281b mov esi, dword ptr [0x62e120] */ { const u32 m_ = (u32)(0x62e120u); esi = (u32)(M32(m_)); }
  /* 00602821 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602824 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00602826 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x602828u; SAVEALL; call_ind(c, t_); RETCHK(0x602828u, 0x602826u); LOADALL; }
  /* 00602828 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060282a jg 0x602830 */ if (!(ZF_|LT_)) goto L_00602830;
  /* 0060282c call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x60282eu; SAVEALL; call_ind(c, t_); RETCHK(0x60282eu, 0x60282cu); LOADALL; }
  /* 0060282e jmp 0x60283c */ goto L_0060283c;
L_00602830:;
  /* 00602830 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x602832u; SAVEALL; call_ind(c, t_); RETCHK(0x602832u, 0x602830u); LOADALL; }
  /* 00602832 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602837 or eax, 0x80070000 */ { u32 a_ = eax, b_ = 0x80070000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0060283c:;
  /* 0060283c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060283d call 0x602590 */ esp -= 4; M32(esp) = 0x602842u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x60283du); RETCHK(0x602842u, 0x60283du); LOADALL;
L_00602842:;
  /* 00602842 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00602845 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602846 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602847 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00602849 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00602850 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602851 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602853 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602854 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00602860(CPU *c) {
  NATIVE_HOOK(0x602860u) REGS; LOADALL;
L_00602860:;
  /* 00602860 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602863 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00602867 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0060286b push 0x657aa8 */ { u32 v_ = 0x657aa8u; esp -= 4; M32(esp) = v_; }
  /* 00602870 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 00602874 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602875 mov dword ptr [esp + 8], 0x63d1d0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x63d1d0u); }
  /* 0060287d mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00602881 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00602885 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0060288d call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00602892 int3 */ TRAP(0x602892u, "int3");
}

void F_006028a0(CPU *c) {
  NATIVE_HOOK(0x6028a0u) REGS; LOADALL;
L_006028a0:;
  /* 006028a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 006028a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006028a5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006028a7 mov dword ptr [esi], 0x63d1d0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63d1d0u); }
  /* 006028ad mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006028b0 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 006028b3 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006028b6 mov eax, edx */ { eax = (u32)(edx); }
  /* 006028b8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006028ba mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 006028bd mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 006028c4 je 0x6028cc */ if (ZF_) goto L_006028cc;
  /* 006028c6 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006028c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006028c9 call dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6028ccu; SAVEALL; call_ind(c, t_); RETCHK(0x6028ccu, 0x6028c9u); LOADALL; }
L_006028cc:;
  /* 006028cc mov eax, esi */ { eax = (u32)(esi); }
  /* 006028ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006028cf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_006028e0(CPU *c) {
  NATIVE_HOOK(0x6028e0u) REGS; LOADALL;
L_006028e0:;
  /* 006028e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006028e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006028e3 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 006028e6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006028e8 mov dword ptr [esi], 0x63d1d0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63d1d0u); }
  /* 006028ee je 0x6028f6 */ if (ZF_) goto L_006028f6;
  /* 006028f0 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006028f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006028f3 call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6028f6u; SAVEALL; call_ind(c, t_); RETCHK(0x6028f6u, 0x6028f3u); LOADALL; }
L_006028f6:;
  /* 006028f6 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 006028f9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006028fb je 0x602904 */ if (ZF_) goto L_00602904;
  /* 006028fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006028fe call dword ptr [0x62e11c] */ { const u32 m_ = (u32)(0x62e11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602904u; SAVEALL; call_ind(c, t_); RETCHK(0x602904u, 0x6028feu); LOADALL; }
L_00602904:;
  /* 00602904 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602905 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602910(CPU *c) {
  NATIVE_HOOK(0x602910u) REGS; LOADALL;
L_00602910:;
  /* 00602910 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602911 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00602913 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602916 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602918 mov dword ptr [esi], 0x63d1d0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63d1d0u); }
  /* 0060291e je 0x602926 */ if (ZF_) goto L_00602926;
  /* 00602920 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00602922 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602923 call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602926u; SAVEALL; call_ind(c, t_); RETCHK(0x602926u, 0x602923u); LOADALL; }
L_00602926:;
  /* 00602926 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00602929 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060292b je 0x602934 */ if (ZF_) goto L_00602934;
  /* 0060292d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060292e call dword ptr [0x62e11c] */ { const u32 m_ = (u32)(0x62e11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602934u; SAVEALL; call_ind(c, t_); RETCHK(0x602934u, 0x60292eu); LOADALL; }
L_00602934:;
  /* 00602934 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00602939 je 0x602944 */ if (ZF_) goto L_00602944;
  /* 0060293b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060293c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x602941u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x60293cu); RETCHK(0x602941u, 0x60293cu); LOADALL;
  /* 00602941 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00602944:;
  /* 00602944 mov eax, esi */ { eax = (u32)(esi); }
  /* 00602946 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602947 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00602950(CPU *c) {
  NATIVE_HOOK(0x602950u) REGS; LOADALL;
L_00602950:;
  /* 00602950 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00602951 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00602953 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602956 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00602959 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0060295a mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0060295d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060295e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00602960 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602961 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602963 je 0x602c7c */ if (ZF_) goto L_00602c7c;
  /* 00602969 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060296b je 0x602c7c */ if (ZF_) goto L_00602c7c;
  /* 00602971 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602972 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00602974 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00602976 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x60297bu; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x602976u); RETCHK(0x60297bu, 0x602976u); LOADALL;
  /* 0060297b mov edi, eax */ { edi = (u32)(eax); }
  /* 0060297d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602980 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602982 mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 00602985 je 0x602be4 */ if (ZF_) goto L_00602be4;
  /* 0060298b mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 0060298e push 0x602cb0 */ { u32 v_ = 0x602cb0u; esp -= 4; M32(esp) = v_; }
  /* 00602993 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00602996 push 0x602c90 */ { u32 v_ = 0x602c90u; esp -= 4; M32(esp) = v_; }
  /* 0060299b mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 0060299e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060299f mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 006029a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006029a3 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 006029a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006029a7 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 006029aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006029ab mov dword ptr [ebp - 0x28], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(esi); }
  /* 006029ae push 0x6810ac */ { u32 v_ = 0x6810acu; esp -= 4; M32(esp) = v_; }
  /* 006029b3 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 006029b6 call 0x6036d0 */ esp -= 4; M32(esp) = 0x6029bbu; SAVEALL; F_006036d0(c); ABI_CHECK(0x6036d0u, 0x6029b6u); RETCHK(0x6029bbu, 0x6029b6u); LOADALL;
  /* 006029bb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 006029be mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 006029c1 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006029c4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006029c6 jne 0x6029db */ if (!ZF_) goto L_006029db;
  /* 006029c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006029c9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006029ca call 0x5b3410 */ esp -= 4; M32(esp) = 0x6029cfu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x6029cau); RETCHK(0x6029cfu, 0x6029cau); LOADALL;
  /* 006029cf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006029d2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006029d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006029d5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006029d6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006029d7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006029d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006029da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006029db:;
  /* 006029db mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 006029de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006029df call 0x605770 */ esp -= 4; M32(esp) = 0x6029e4u; SAVEALL; F_00605770(c); ABI_CHECK(0x605770u, 0x6029dfu); RETCHK(0x6029e4u, 0x6029dfu); LOADALL;
  /* 006029e4 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 006029e7 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 006029ea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006029ed cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006029ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006029f0 jne 0x602a0e */ if (!ZF_) goto L_00602a0e;
  /* 006029f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006029f3 call 0x5b3410 */ esp -= 4; M32(esp) = 0x6029f8u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x6029f3u); RETCHK(0x6029f8u, 0x6029f3u); LOADALL;
  /* 006029f8 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 006029fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006029fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006029fd call 0x603b90 */ esp -= 4; M32(esp) = 0x602a02u; SAVEALL; F_00603b90(c); ABI_CHECK(0x603b90u, 0x6029fdu); RETCHK(0x602a02u, 0x6029fdu); LOADALL;
  /* 00602a02 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602a05 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602a07 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602a08 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602a09 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602a0a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602a0c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602a0d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00602a0e:;
  /* 00602a0e mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00602a11 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602a12 call 0x61af88 */ { void *hb_; rt_setjmp(c, M32(esp), ebx, esi, edi, ebp, esp, &hb_); if (CK_SETJMP(hb_)) { LOADALL; eax = c->lj_val; } else eax = 0; }
  /* 00602a17 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602a1a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602a1c je 0x602a3e */ if (ZF_) goto L_00602a3e;
  /* 00602a1e mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00602a21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602a22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602a23 call 0x5b3410 */ esp -= 4; M32(esp) = 0x602a28u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x602a23u); RETCHK(0x602a28u, 0x602a23u); LOADALL;
  /* 00602a28 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00602a2b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602a2c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602a2d call 0x603b90 */ esp -= 4; M32(esp) = 0x602a32u; SAVEALL; F_00603b90(c); ABI_CHECK(0x603b90u, 0x602a2du); RETCHK(0x602a32u, 0x602a2du); LOADALL;
  /* 00602a32 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602a35 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602a37 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602a38 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602a39 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602a3a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602a3c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602a3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00602a3e:;
  /* 00602a3e mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00602a41 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602a44 push 0x602cf0 */ { u32 v_ = 0x602cf0u; esp -= 4; M32(esp) = v_; }
  /* 00602a49 push 0x602cd0 */ { u32 v_ = 0x602cd0u; esp -= 4; M32(esp) = v_; }
  /* 00602a4e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602a4f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602a50 call 0x6055c0 */ esp -= 4; M32(esp) = 0x602a55u; SAVEALL; F_006055c0(c); ABI_CHECK(0x6055c0u, 0x602a50u); RETCHK(0x602a55u, 0x602a50u); LOADALL;
  /* 00602a55 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00602a58 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602a5b mov edi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edi = (u32)(M32(m_)); }
  /* 00602a5e mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00602a61 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 00602a64 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 00602a67 cmp edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602a6a mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 00602a6d je 0x602a9e */ if (ZF_) goto L_00602a9e;
  /* 00602a6f mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 00602a74 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602a76 je 0x602a8c */ if (ZF_) goto L_00602a8c;
  /* 00602a78 cmp edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602a7b jne 0x602ab2 */ if (!ZF_) goto L_00602ab2;
  /* 00602a7d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00602a80 mov dword ptr [ebp - 0x10], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x6u); }
  /* 00602a87 mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 00602a8a jmp 0x602ab2 */ goto L_00602ab2;
L_00602a8c:;
  /* 00602a8c mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00602a8f mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 00602a92 mov dword ptr [ebp - 0x10], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3u); }
  /* 00602a99 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00602a9c jmp 0x602ab2 */ goto L_00602ab2;
L_00602a9e:;
  /* 00602a9e mov ecx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00602aa1 mov dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x4u); }
  /* 00602aa8 mov dword ptr [ebp - 0x10], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3u); }
  /* 00602aaf mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
L_00602ab2:;
  /* 00602ab2 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00602ab5 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 00602ab8 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00602abb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602abc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602abd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602abe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602abf mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00602ac2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602ac3 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00602ac6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602ac7 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602aca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602acb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602acc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602acd call 0x6049a0 */ esp -= 4; M32(esp) = 0x602ad2u; SAVEALL; F_006049a0(c); ABI_CHECK(0x6049a0u, 0x602acdu); RETCHK(0x602ad2u, 0x602acdu); LOADALL;
  /* 00602ad2 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00602ad5 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602ad8 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602adb jne 0x602b83 */ if (!ZF_) goto L_00602b83;
  /* 00602ae1 mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 00602ae6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00602ae8 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00602aeb push 0x3010d */ { u32 v_ = 0x3010du; esp -= 4; M32(esp) = v_; }
  /* 00602af0 shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00602af2 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00602af8 lea eax, [esi + esi*2] */ eax = (u32)((u32)(esi + esi * 2u));
  /* 00602afb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602afc call dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602b02u; SAVEALL; call_ind(c, t_); RETCHK(0x602b02u, 0x602afcu); LOADALL; }
  /* 00602b02 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00602b05 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 00602b08 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00602b0d push 0x3010d */ { u32 v_ = 0x3010du; esp -= 4; M32(esp) = v_; }
  /* 00602b12 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602b13 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602b19u; SAVEALL; call_ind(c, t_); RETCHK(0x602b19u, 0x602b13u); LOADALL; }
  /* 00602b19 mov edi, eax */ { edi = (u32)(eax); }
  /* 00602b1b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602b1e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602b20 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602b22 jle 0x602b5b */ if ((ZF_|LT_)) goto L_00602b5b;
  /* 00602b24 mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 00602b27 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00602b2a:;
  /* 00602b2a mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00602b2d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00602b2e add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00602b31 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602b33 mov dl, byte ptr [edx + eax*4 - 4] */ { const u32 m_ = (u32)(edx + eax * 4u + 0xfffffffcu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00602b37 mov byte ptr [ecx - 5], dl */ { const u32 m_ = (u32)(ecx + 0xfffffffbu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00602b3a mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00602b3d mov dl, byte ptr [edx + eax*4 - 3] */ { const u32 m_ = (u32)(edx + eax * 4u + 0xfffffffdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00602b41 mov byte ptr [ecx - 4], dl */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00602b44 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00602b47 mov dl, byte ptr [edx + eax*4 - 2] */ { const u32 m_ = (u32)(edx + eax * 4u + 0xfffffffeu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00602b4b mov byte ptr [ecx - 3], dl */ { const u32 m_ = (u32)(ecx + 0xfffffffdu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00602b4e mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00602b51 mov dl, byte ptr [edx + eax*4 - 1] */ { const u32 m_ = (u32)(edx + eax * 4u + 0xffffffffu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00602b55 mov byte ptr [edi + eax - 1], dl */ { const u32 m_ = (u32)(edi + eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00602b59 jl 0x602b2a */ if (LT_) goto L_00602b2a;
L_00602b5b:;
  /* 00602b5b mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 00602b5e mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00602b61 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00602b64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602b65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602b66 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602b67 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602b68 call 0x604d70 */ esp -= 4; M32(esp) = 0x602b6du; SAVEALL; F_00604d70(c); ABI_CHECK(0x604d70u, 0x602b68u); RETCHK(0x602b6du, 0x602b68u); LOADALL;
  /* 00602b6d mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00602b70 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602b73 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602b75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602b76 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602b77 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602b78 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602b79 call 0x605240 */ esp -= 4; M32(esp) = 0x602b7eu; SAVEALL; F_00605240(c); ABI_CHECK(0x605240u, 0x602b79u); RETCHK(0x602b7eu, 0x602b79u); LOADALL;
  /* 00602b7e add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602b81 jmp 0x602b88 */ goto L_00602b88;
L_00602b83:;
  /* 00602b83 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 00602b86 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00602b88:;
  /* 00602b88 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00602b8b mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602b8e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602b8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602b90 call 0x6032f0 */ esp -= 4; M32(esp) = 0x602b95u; SAVEALL; F_006032f0(c); ABI_CHECK(0x6032f0u, 0x602b90u); RETCHK(0x602b95u, 0x602b90u); LOADALL;
  /* 00602b95 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602b98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602b99 call 0x604030 */ esp -= 4; M32(esp) = 0x602b9eu; SAVEALL; F_00604030(c); ABI_CHECK(0x604030u, 0x602b99u); RETCHK(0x602b9eu, 0x602b99u); LOADALL;
  /* 00602b9e mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00602ba1 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 00602ba4 mov esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); esi = (u32)(M32(m_)); }
  /* 00602ba7 push 0x3010d */ { u32 v_ = 0x3010du; esp -= 4; M32(esp) = v_; }
  /* 00602bac shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00602baf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602bb0 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00602bb5 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 00602bb8 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602bbeu; SAVEALL; call_ind(c, t_); RETCHK(0x602bbeu, 0x602bb8u); LOADALL; }
  /* 00602bbe mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00602bc1 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00602bc4 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602bc7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602bc9 jne 0x602bed */ if (!ZF_) goto L_00602bed;
  /* 00602bcb lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00602bce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602bd0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602bd1 call 0x603b90 */ esp -= 4; M32(esp) = 0x602bd6u; SAVEALL; F_00603b90(c); ABI_CHECK(0x603b90u, 0x602bd1u); RETCHK(0x602bd6u, 0x602bd1u); LOADALL;
  /* 00602bd6 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00602bd9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602bdb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602bdc call 0x5b3410 */ esp -= 4; M32(esp) = 0x602be1u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x602bdcu); RETCHK(0x602be1u, 0x602bdcu); LOADALL;
  /* 00602be1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00602be4:;
  /* 00602be4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602be6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602be7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602be8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602be9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602beb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602bec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00602bed:;
  /* 00602bed mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00602bf0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602bf2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602bf4 jle 0x602c0a */ if ((ZF_|LT_)) goto L_00602c0a;
  /* 00602bf6 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
L_00602bf9:;
  /* 00602bf9 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00602bfc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00602bfd mov dword ptr [edx + eax*4 - 4], ecx */ { const u32 m_ = (u32)(edx + eax * 4u + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00602c01 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00602c04 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00602c06 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602c08 jl 0x602bf9 */ if (LT_) goto L_00602bf9;
L_00602c0a:;
  /* 00602c0a mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00602c0d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602c10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602c11 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602c12 call 0x603830 */ esp -= 4; M32(esp) = 0x602c17u; SAVEALL; F_00603830(c); ABI_CHECK(0x603830u, 0x602c12u); RETCHK(0x602c17u, 0x602c12u); LOADALL;
  /* 00602c17 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00602c1a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602c1d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602c1e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602c1f call 0x6035a0 */ esp -= 4; M32(esp) = 0x602c24u; SAVEALL; F_006035a0(c); ABI_CHECK(0x6035a0u, 0x602c1fu); RETCHK(0x602c24u, 0x602c1fu); LOADALL;
  /* 00602c24 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 00602c27 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602c2a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602c2c je 0x602c51 */ if (ZF_) goto L_00602c51;
  /* 00602c2e mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00602c34 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602c37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602c38 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602c3eu; SAVEALL; call_ind(c, t_); RETCHK(0x602c3eu, 0x602c38u); LOADALL; }
  /* 00602c3e mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00602c44 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602c47 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602c48 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602c4eu; SAVEALL; call_ind(c, t_); RETCHK(0x602c4eu, 0x602c48u); LOADALL; }
  /* 00602c4e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00602c51:;
  /* 00602c51 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00602c54 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00602c5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602c5b call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602c61u; SAVEALL; call_ind(c, t_); RETCHK(0x602c61u, 0x602c5bu); LOADALL; }
  /* 00602c61 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00602c64 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00602c67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602c68 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602c69 call 0x603b90 */ esp -= 4; M32(esp) = 0x602c6eu; SAVEALL; F_00603b90(c); ABI_CHECK(0x603b90u, 0x602c69u); RETCHK(0x602c6eu, 0x602c69u); LOADALL;
  /* 00602c6e mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00602c71 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602c73 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602c74 call 0x5b3410 */ esp -= 4; M32(esp) = 0x602c79u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x602c74u); RETCHK(0x602c79u, 0x602c74u); LOADALL;
  /* 00602c79 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00602c7c:;
  /* 00602c7c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602c7d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00602c7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602c80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602c81 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602c83 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602c84 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602c90(CPU *c) {
  NATIVE_HOOK(0x602c90u) REGS; LOADALL;
L_00602c90:;
  /* 00602c90 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602c94 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00602c9a push 0x3010d */ { u32 v_ = 0x3010du; esp -= 4; M32(esp) = v_; }
  /* 00602c9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602ca0 call dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602ca6u; SAVEALL; call_ind(c, t_); RETCHK(0x602ca6u, 0x602ca0u); LOADALL; }
  /* 00602ca6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602ca9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602cb0(CPU *c) {
  NATIVE_HOOK(0x602cb0u) REGS; LOADALL;
L_00602cb0:;
  /* 00602cb0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602cb4 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00602cba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602cbb call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602cc1u; SAVEALL; call_ind(c, t_); RETCHK(0x602cc1u, 0x602cbbu); LOADALL; }
  /* 00602cc1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00602cc2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602cd0(CPU *c) {
  NATIVE_HOOK(0x602cd0u) REGS; LOADALL;
L_00602cd0:;
  /* 00602cd0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00602cd4 mov eax, dword ptr [ecx + 0x54] */ { const u32 m_ = (u32)(ecx + 0x54u); eax = (u32)(M32(m_)); }
  /* 00602cd7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602cd9 je 0x602ce4 */ if (ZF_) goto L_00602ce4;
  /* 00602cdb mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 00602cdf jmp 0x5b3130 */ SAVEALL; F_005b3130(c); return;
L_00602ce4:;
  /* 00602ce4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602ce6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602ce7 call 0x605c20 */ esp -= 4; M32(esp) = 0x602cecu; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x602ce7u); RETCHK(0x602cecu, 0x602ce7u); LOADALL;
  /* 00602cec add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602cef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602cf0(CPU *c) {
  NATIVE_HOOK(0x602cf0u) REGS; LOADALL;
L_00602cf0:;
  /* 00602cf0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00602d00(CPU *c) {
  NATIVE_HOOK(0x602d00u) REGS; LOADALL;
L_00602d00:;
  /* 00602d00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00602d01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00602d03 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602d06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00602d09 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602d0a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602d0b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d0c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00602d0e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602d10 je 0x6030e6 */ if (ZF_) goto L_006030e6;
  /* 00602d16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602d17 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00602d19 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00602d1b call 0x5b34e0 */ esp -= 4; M32(esp) = 0x602d20u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x602d1bu); RETCHK(0x602d20u, 0x602d1bu); LOADALL;
  /* 00602d20 mov esi, eax */ { esi = (u32)(eax); }
  /* 00602d22 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602d25 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602d27 je 0x603106 */ if (ZF_) goto L_00603106;
  /* 00602d2d push 0x602cb0 */ { u32 v_ = 0x602cb0u; esp -= 4; M32(esp) = v_; }
  /* 00602d32 push 0x602c90 */ { u32 v_ = 0x602c90u; esp -= 4; M32(esp) = v_; }
  /* 00602d37 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00602d3a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d3b mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 00602d3e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d3f mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00602d42 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d43 mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 00602d46 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d47 mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 00602d4a push 0x6810ac */ { u32 v_ = 0x6810acu; esp -= 4; M32(esp) = v_; }
  /* 00602d4f mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00602d52 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00602d55 call 0x605dc0 */ esp -= 4; M32(esp) = 0x602d5au; SAVEALL; F_00605dc0(c); ABI_CHECK(0x605dc0u, 0x602d55u); RETCHK(0x602d5au, 0x602d55u); LOADALL;
  /* 00602d5a mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00602d5d mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602d60 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602d63 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602d65 jne 0x602d7a */ if (!ZF_) goto L_00602d7a;
  /* 00602d67 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d68 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602d69 call 0x5b3410 */ esp -= 4; M32(esp) = 0x602d6eu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x602d69u); RETCHK(0x602d6eu, 0x602d69u); LOADALL;
  /* 00602d6e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602d71 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602d73 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602d74 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602d75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602d76 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602d78 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602d79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00602d7a:;
  /* 00602d7a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602d7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602d7e call 0x605770 */ esp -= 4; M32(esp) = 0x602d83u; SAVEALL; F_00605770(c); ABI_CHECK(0x605770u, 0x602d7eu); RETCHK(0x602d83u, 0x602d7eu); LOADALL;
  /* 00602d83 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00602d86 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00602d89 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602d8c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602d8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d8f jne 0x602dae */ if (!ZF_) goto L_00602dae;
  /* 00602d91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602d92 call 0x5b3410 */ esp -= 4; M32(esp) = 0x602d97u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x602d92u); RETCHK(0x602d97u, 0x602d92u); LOADALL;
  /* 00602d97 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d98 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00602d9b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602d9c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602d9d call 0x606a50 */ esp -= 4; M32(esp) = 0x602da2u; SAVEALL; F_00606a50(c); ABI_CHECK(0x606a50u, 0x602d9du); RETCHK(0x602da2u, 0x602d9du); LOADALL;
  /* 00602da2 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602da5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602da7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602da8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602da9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602daa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602dac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602dad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00602dae:;
  /* 00602dae mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00602db1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602db2 call 0x61af88 */ { void *hb_; rt_setjmp(c, M32(esp), ebx, esi, edi, ebp, esp, &hb_); if (CK_SETJMP(hb_)) { LOADALL; eax = c->lj_val; } else eax = 0; }
  /* 00602db7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602dba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602dbc je 0x602e05 */ if (ZF_) goto L_00602e05;
  /* 00602dbe cmp dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602dc1 je 0x602dd8 */ if (ZF_) goto L_00602dd8;
  /* 00602dc3 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00602dc6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602dc7 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00602dcc call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602dd2u; SAVEALL; call_ind(c, t_); RETCHK(0x602dd2u, 0x602dccu); LOADALL; }
  /* 00602dd2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602dd5 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
L_00602dd8:;
  /* 00602dd8 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00602ddb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602ddc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602ddd call 0x5b3410 */ esp -= 4; M32(esp) = 0x602de2u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x602dddu); RETCHK(0x602de2u, 0x602dddu); LOADALL;
  /* 00602de2 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00602de5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602de6 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00602de9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602dea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602deb mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00602dee call 0x606a50 */ esp -= 4; M32(esp) = 0x602df3u; SAVEALL; F_00606a50(c); ABI_CHECK(0x606a50u, 0x602deeu); RETCHK(0x602df3u, 0x602deeu); LOADALL;
  /* 00602df3 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602df6 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00602df9 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 00602dfc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602dfe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602dff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602e00 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602e01 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602e03 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602e04 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00602e05:;
  /* 00602e05 mov esi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esi = (u32)(M32(m_)); }
  /* 00602e08 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602e0b push 0x603130 */ { u32 v_ = 0x603130u; esp -= 4; M32(esp) = v_; }
  /* 00602e10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602e11 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602e12 call 0x60b3e0 */ esp -= 4; M32(esp) = 0x602e17u; SAVEALL; F_0060b3e0(c); ABI_CHECK(0x60b3e0u, 0x602e12u); RETCHK(0x602e17u, 0x602e12u); LOADALL;
  /* 00602e17 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00602e1a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602e1d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602e1e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602e1f call 0x605fa0 */ esp -= 4; M32(esp) = 0x602e24u; SAVEALL; F_00605fa0(c); ABI_CHECK(0x605fa0u, 0x602e1fu); RETCHK(0x602e24u, 0x602e1fu); LOADALL;
  /* 00602e24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602e25 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00602e28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602e29 lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00602e2c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602e2d lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00602e30 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602e31 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00602e34 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602e35 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00602e38 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00602e3b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602e3c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602e3f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602e40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602e41 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602e42 call 0x606d90 */ esp -= 4; M32(esp) = 0x602e47u; SAVEALL; F_00606d90(c); ABI_CHECK(0x606d90u, 0x602e42u); RETCHK(0x602e47u, 0x602e42u); LOADALL;
  /* 00602e47 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00602e4a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602e4b call 0x606f40 */ esp -= 4; M32(esp) = 0x602e50u; SAVEALL; F_00606f40(c); ABI_CHECK(0x606f40u, 0x602e4bu); RETCHK(0x602e50u, 0x602e4bu); LOADALL;
  /* 00602e50 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 00602e53 add esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602e56 cmp eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602e59 ja 0x602edf */ if (!(CF_|ZF_)) goto L_00602edf;
  /* 00602e5f jmp dword ptr [eax*4 + 0x603110] */ { const u32 m_ = (u32)(eax * 4u + 0x603110u); u32 t_ = M32(m_); switch (t_) { case 0x602e66u: goto L_00602e66; case 0x602e8au: goto L_00602e8a; case 0x602ea7u: goto L_00602ea7; case 0x602ebcu: goto L_00602ebc; case 0x602ed8u: goto L_00602ed8; case 0x602edfu: goto L_00602edf; default: SAVEALL; call_ind(c, t_); return; } }
L_00602e66:;
  /* 00602e66 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 00602e69 mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 00602e6e cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602e70 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00602e73 jge 0x602edf */ if (!LT_) goto L_00602edf;
  /* 00602e75 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602e78 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602e79 call 0x604030 */ esp -= 4; M32(esp) = 0x602e7eu; SAVEALL; F_00604030(c); ABI_CHECK(0x604030u, 0x602e79u); RETCHK(0x602e7eu, 0x602e79u); LOADALL;
  /* 00602e7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602e81 mov dword ptr [ebp - 0xc], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x4u); }
  /* 00602e88 jmp 0x602edf */ goto L_00602edf;
L_00602e8a:;
  /* 00602e8a mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 00602e8d mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 00602e92 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602e94 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00602e97 jge 0x602edf */ if (!LT_) goto L_00602edf;
  /* 00602e99 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602e9c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602e9d call 0x606f50 */ esp -= 4; M32(esp) = 0x602ea2u; SAVEALL; F_00606f50(c); ABI_CHECK(0x606f50u, 0x602e9du); RETCHK(0x602ea2u, 0x602e9du); LOADALL;
  /* 00602ea2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602ea5 jmp 0x602edf */ goto L_00602edf;
L_00602ea7:;
  /* 00602ea7 mov dword ptr [ebp - 0xc], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x20u); }
  /* 00602eae mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00602eb1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602eb2 call 0x606f60 */ esp -= 4; M32(esp) = 0x602eb7u; SAVEALL; F_00606f60(c); ABI_CHECK(0x606f60u, 0x602eb2u); RETCHK(0x602eb7u, 0x602eb2u); LOADALL;
  /* 00602eb7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602eba jmp 0x602edf */ goto L_00602edf;
L_00602ebc:;
  /* 00602ebc mov dword ptr [ebp - 0xc], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x20u); }
  /* 00602ec3 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00602ec6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00602ec8 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 00602ecd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602ece call 0x604080 */ esp -= 4; M32(esp) = 0x602ed3u; SAVEALL; F_00604080(c); ABI_CHECK(0x604080u, 0x602eceu); RETCHK(0x602ed3u, 0x602eceu); LOADALL;
  /* 00602ed3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602ed6 jmp 0x602edf */ goto L_00602edf;
L_00602ed8:;
  /* 00602ed8 mov dword ptr [ebp - 0xc], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x20u); }
L_00602edf:;
  /* 00602edf mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00602ee2 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00602ee5 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 00602ee8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602ee9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602eea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602eeb call 0x5b11b0 */ esp -= 4; M32(esp) = 0x602ef0u; SAVEALL; F_005b11b0(c); ABI_CHECK(0x5b11b0u, 0x602eebu); RETCHK(0x602ef0u, 0x602eebu); LOADALL;
  /* 00602ef0 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00602ef2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602ef5 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602ef7 je 0x6030d3 */ if (ZF_) goto L_006030d3;
  /* 00602efd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602efe call 0x5b1270 */ esp -= 4; M32(esp) = 0x602f03u; SAVEALL; F_005b1270(c); ABI_CHECK(0x5b1270u, 0x602efeu); RETCHK(0x602f03u, 0x602efeu); LOADALL;
  /* 00602f03 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602f06 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602f08 jne 0x602f23 */ if (!ZF_) goto L_00602f23;
  /* 00602f0a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602f0b call 0x5b1210 */ esp -= 4; M32(esp) = 0x602f10u; SAVEALL; F_005b1210(c); ABI_CHECK(0x5b1210u, 0x602f0bu); RETCHK(0x602f10u, 0x602f0bu); LOADALL;
  /* 00602f10 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00602f11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602f12 call 0x5b3410 */ esp -= 4; M32(esp) = 0x602f17u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x602f12u); RETCHK(0x602f17u, 0x602f12u); LOADALL;
  /* 00602f17 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602f1a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602f1c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602f1d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602f1e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602f1f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602f21 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602f22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00602f23:;
  /* 00602f23 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00602f26 mov ecx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00602f29 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00602f2f mov edi, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edi = (u32)(M32(m_)); }
  /* 00602f32 mov esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); esi = (u32)(M32(m_)); }
  /* 00602f35 push 0x3010d */ { u32 v_ = 0x3010du; esp -= 4; M32(esp) = v_; }
  /* 00602f3a shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00602f3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602f3e mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 00602f41 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x602f47u; SAVEALL; call_ind(c, t_); RETCHK(0x602f47u, 0x602f41u); LOADALL; }
  /* 00602f47 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00602f4a mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00602f4d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602f50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602f52 jne 0x602f77 */ if (!ZF_) goto L_00602f77;
  /* 00602f54 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602f55 call 0x5b1330 */ esp -= 4; M32(esp) = 0x602f5au; SAVEALL; F_005b1330(c); ABI_CHECK(0x5b1330u, 0x602f55u); RETCHK(0x602f5au, 0x602f55u); LOADALL;
  /* 00602f5a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00602f5b call 0x5b1210 */ esp -= 4; M32(esp) = 0x602f60u; SAVEALL; F_005b1210(c); ABI_CHECK(0x5b1210u, 0x602f5bu); RETCHK(0x602f60u, 0x602f5bu); LOADALL;
  /* 00602f60 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00602f63 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00602f65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602f66 call 0x5b3410 */ esp -= 4; M32(esp) = 0x602f6bu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x602f66u); RETCHK(0x602f6bu, 0x602f66u); LOADALL;
  /* 00602f6b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602f6e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602f70 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00602f71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00602f72 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00602f73 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00602f75 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00602f76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00602f77:;
  /* 00602f77 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00602f7a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602f7c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602f7e jle 0x602f93 */ if ((ZF_|LT_)) goto L_00602f93;
  /* 00602f80 mov ecx, edi */ { ecx = (u32)(edi); }
L_00602f82:;
  /* 00602f82 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00602f85 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00602f86 mov dword ptr [edx + eax*4 - 4], ecx */ { const u32 m_ = (u32)(edx + eax * 4u + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00602f8a mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00602f8d add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00602f8f cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602f91 jl 0x602f82 */ if (LT_) goto L_00602f82;
L_00602f93:;
  /* 00602f93 cmp dword ptr [ebp - 0xc], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602f97 je 0x602fa3 */ if (ZF_) goto L_00602fa3;
  /* 00602f99 cmp dword ptr [ebp - 0xc], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602f9d jne 0x603089 */ if (!ZF_) goto L_00603089;
L_00602fa3:;
  /* 00602fa3 mov edi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edi = (u32)(M32(m_)); }
  /* 00602fa6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602fa8 je 0x603089 */ if (ZF_) goto L_00603089;
  /* 00602fae mov cl, byte ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00602fb1 mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 00602fb6 shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00602fb8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00602fba test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602fbc jle 0x602fd5 */ if ((ZF_|LT_)) goto L_00602fd5;
  /* 00602fbe lea ecx, [edi + 1] */ ecx = (u32)((u32)(edi + 0x1u));
L_00602fc1:;
  /* 00602fc1 mov byte ptr [ecx + 1], al */ { const u32 m_ = (u32)(ecx + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00602fc4 mov byte ptr [ecx], al */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00602fc6 mov byte ptr [ecx - 1], al */ { const u32 m_ = (u32)(ecx + 0xffffffffu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00602fc9 mov byte ptr [ecx + 2], 0xff */ { const u32 m_ = (u32)(ecx + 0x2u); M8(m_) = (u8)(0xffu); }
  /* 00602fcd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00602fce add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00602fd1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602fd3 jl 0x602fc1 */ if (LT_) goto L_00602fc1;
L_00602fd5:;
  /* 00602fd5 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00602fd8 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00602fdb push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00602fdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602fde push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602fdf call 0x606d70 */ esp -= 4; M32(esp) = 0x602fe4u; SAVEALL; F_00606d70(c); ABI_CHECK(0x606d70u, 0x602fdfu); RETCHK(0x602fe4u, 0x602fdfu); LOADALL;
  /* 00602fe4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00602fe7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00602fe9 je 0x60303b */ if (ZF_) goto L_0060303b;
  /* 00602feb mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00602fee lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00602ff1 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 00602ff4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602ff5 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00602ff8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00602ff9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00602ffa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00602ffb call 0x606e80 */ esp -= 4; M32(esp) = 0x603000u; SAVEALL; F_00606e80(c); ABI_CHECK(0x606e80u, 0x602ffbu); RETCHK(0x603000u, 0x602ffbu); LOADALL;
  /* 00603000 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00603003 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603006 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603008 jge 0x60300f */ if (!LT_) goto L_0060300f;
  /* 0060300a mov edx, esi */ { edx = (u32)(esi); }
  /* 0060300c mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
L_0060300f:;
  /* 0060300f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603011 jle 0x60303b */ if ((ZF_|LT_)) goto L_0060303b;
  /* 00603013 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00603016 lea ecx, [edi + 2] */ ecx = (u32)((u32)(edi + 0x2u));
  /* 00603019 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060301c mov esi, edx */ { esi = (u32)(edx); }
L_0060301e:;
  /* 0060301e mov dl, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603021 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00603024 mov byte ptr [ecx - 2], dl */ { const u32 m_ = (u32)(ecx + 0xfffffffeu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00603027 mov dl, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060302a mov byte ptr [ecx - 1], dl */ { const u32 m_ = (u32)(ecx + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060302d mov dl, byte ptr [eax - 3] */ { const u32 m_ = (u32)(eax + 0xfffffffdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603030 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00603032 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00603035 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00603036 jne 0x60301e */ if (!ZF_) goto L_0060301e;
  /* 00603038 mov edi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edi = (u32)(M32(m_)); }
L_0060303b:;
  /* 0060303b mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0060303e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00603041 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00603043 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603044 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603045 call 0x606d70 */ esp -= 4; M32(esp) = 0x60304au; SAVEALL; F_00606d70(c); ABI_CHECK(0x606d70u, 0x603045u); RETCHK(0x60304au, 0x603045u); LOADALL;
  /* 0060304a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060304d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060304f je 0x603089 */ if (ZF_) goto L_00603089;
  /* 00603051 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00603054 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00603057 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603058 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0060305b lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0060305e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060305f mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00603062 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603063 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603064 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603065 call 0x606ec0 */ esp -= 4; M32(esp) = 0x60306au; SAVEALL; F_00606ec0(c); ABI_CHECK(0x606ec0u, 0x603065u); RETCHK(0x60306au, 0x603065u); LOADALL;
  /* 0060306a mov esi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); esi = (u32)(M32(m_)); }
  /* 0060306d add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603070 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603072 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603074 jle 0x603089 */ if ((ZF_|LT_)) goto L_00603089;
  /* 00603076 lea ecx, [edi + 3] */ ecx = (u32)((u32)(edi + 0x3u));
  /* 00603079 mov edi, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edi = (u32)(M32(m_)); }
L_0060307c:;
  /* 0060307c mov dl, byte ptr [edi + eax] */ { const u32 m_ = (u32)(edi + eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060307f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603080 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00603082 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00603085 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603087 jl 0x60307c */ if (LT_) goto L_0060307c;
L_00603089:;
  /* 00603089 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0060308c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0060308f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603090 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603091 call 0x606770 */ esp -= 4; M32(esp) = 0x603096u; SAVEALL; F_00606770(c); ABI_CHECK(0x606770u, 0x603091u); RETCHK(0x603096u, 0x603091u); LOADALL;
  /* 00603096 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00603099 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0060309c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060309d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060309e call 0x6067d0 */ esp -= 4; M32(esp) = 0x6030a3u; SAVEALL; F_006067d0(c); ABI_CHECK(0x6067d0u, 0x60309eu); RETCHK(0x6030a3u, 0x60309eu); LOADALL;
  /* 006030a3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 006030a5 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 006030a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006030a9 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 006030ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006030ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006030ae call 0x606a50 */ esp -= 4; M32(esp) = 0x6030b3u; SAVEALL; F_00606a50(c); ABI_CHECK(0x606a50u, 0x6030aeu); RETCHK(0x6030b3u, 0x6030aeu); LOADALL;
  /* 006030b3 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 006030b6 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 006030b9 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006030bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006030bd mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 006030c2 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6030c8u; SAVEALL; call_ind(c, t_); RETCHK(0x6030c8u, 0x6030c2u); LOADALL; }
  /* 006030c8 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006030cb mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 006030ce mov esi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esi = (u32)(M32(m_)); }
  /* 006030d1 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_006030d3:;
  /* 006030d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006030d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006030d5 call 0x5b3410 */ esp -= 4; M32(esp) = 0x6030dau; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x6030d5u); RETCHK(0x6030dau, 0x6030d5u); LOADALL;
  /* 006030da add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006030dd mov eax, ebx */ { eax = (u32)(ebx); }
  /* 006030df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006030e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006030e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006030e2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006030e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006030e5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006030e6:;
  /* 006030e6 push 0x80000016 */ { u32 v_ = 0x80000016u; esp -= 4; M32(esp) = v_; }
  /* 006030eb mov dword ptr [ebp - 0x2c], 0x10d */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x10du); }
  /* 006030f2 call 0x619d80 */ esp -= 4; M32(esp) = 0x6030f7u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x6030f2u); RETCHK(0x6030f7u, 0x6030f2u); LOADALL;
  /* 006030f7 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006030fa mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 006030fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006030fe call 0x5be8c0 */ esp -= 4; M32(esp) = 0x603103u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x6030feu); RETCHK(0x603103u, 0x6030feu); LOADALL;
  /* 00603103 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603106:;
  /* 00603106 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603107 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603108 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060310a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060310b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0060310d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060310e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603018(CPU *c) {
  NATIVE_HOOK(0x603018u) REGS; LOADALL;
L_00603018:;
  /* 00603018 add al, byte ptr [ebx - 0xd74fd40] */ { const u32 m_ = (u32)(ebx + 0xf28b02c0u); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0060301e:;
  /* 0060301e mov dl, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603021 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00603024 mov byte ptr [ecx - 2], dl */ { const u32 m_ = (u32)(ecx + 0xfffffffeu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00603027 mov dl, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060302a mov byte ptr [ecx - 1], dl */ { const u32 m_ = (u32)(ecx + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060302d mov dl, byte ptr [eax - 3] */ { const u32 m_ = (u32)(eax + 0xfffffffdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603030 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00603032 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00603035 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00603036 jne 0x60301e */ if (!ZF_) goto L_0060301e;
  /* 00603038 mov edi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edi = (u32)(M32(m_)); }
  /* 0060303b mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0060303e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00603041 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00603043 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603044 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603045 call 0x606d70 */ esp -= 4; M32(esp) = 0x60304au; SAVEALL; F_00606d70(c); ABI_CHECK(0x606d70u, 0x603045u); RETCHK(0x60304au, 0x603045u); LOADALL;
  /* 0060304a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060304d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060304f je 0x603089 */ if (ZF_) goto L_00603089;
  /* 00603051 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00603054 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00603057 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603058 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0060305b lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0060305e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060305f mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00603062 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603063 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603064 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603065 call 0x606ec0 */ esp -= 4; M32(esp) = 0x60306au; SAVEALL; F_00606ec0(c); ABI_CHECK(0x606ec0u, 0x603065u); RETCHK(0x60306au, 0x603065u); LOADALL;
  /* 0060306a mov esi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); esi = (u32)(M32(m_)); }
  /* 0060306d add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603070 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603072 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603074 jle 0x603089 */ if ((ZF_|LT_)) goto L_00603089;
  /* 00603076 lea ecx, [edi + 3] */ ecx = (u32)((u32)(edi + 0x3u));
  /* 00603079 mov edi, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edi = (u32)(M32(m_)); }
L_0060307c:;
  /* 0060307c mov dl, byte ptr [edi + eax] */ { const u32 m_ = (u32)(edi + eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060307f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603080 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00603082 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00603085 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603087 jl 0x60307c */ if (LT_) goto L_0060307c;
L_00603089:;
  /* 00603089 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0060308c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0060308f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603090 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603091 call 0x606770 */ esp -= 4; M32(esp) = 0x603096u; SAVEALL; F_00606770(c); ABI_CHECK(0x606770u, 0x603091u); RETCHK(0x603096u, 0x603091u); LOADALL;
  /* 00603096 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00603099 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0060309c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060309d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060309e call 0x6067d0 */ esp -= 4; M32(esp) = 0x6030a3u; SAVEALL; F_006067d0(c); ABI_CHECK(0x6067d0u, 0x60309eu); RETCHK(0x6030a3u, 0x60309eu); LOADALL;
  /* 006030a3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 006030a5 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 006030a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006030a9 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 006030ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006030ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006030ae call 0x606a50 */ esp -= 4; M32(esp) = 0x6030b3u; SAVEALL; F_00606a50(c); ABI_CHECK(0x606a50u, 0x6030aeu); RETCHK(0x6030b3u, 0x6030aeu); LOADALL;
  /* 006030b3 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 006030b6 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 006030b9 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006030bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006030bd mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 006030c2 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6030c8u; SAVEALL; call_ind(c, t_); RETCHK(0x6030c8u, 0x6030c2u); LOADALL; }
  /* 006030c8 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006030cb mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 006030ce mov esi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esi = (u32)(M32(m_)); }
  /* 006030d1 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 006030d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006030d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006030d5 call 0x5b3410 */ esp -= 4; M32(esp) = 0x6030dau; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x6030d5u); RETCHK(0x6030dau, 0x6030d5u); LOADALL;
  /* 006030da add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006030dd mov eax, ebx */ { eax = (u32)(ebx); }
  /* 006030df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006030e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006030e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006030e2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006030e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006030e5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603130(CPU *c) {
  NATIVE_HOOK(0x603130u) REGS; LOADALL;
L_00603130:;
  /* 00603130 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00603134 mov eax, dword ptr [ecx + 0x54] */ { const u32 m_ = (u32)(ecx + 0x54u); eax = (u32)(M32(m_)); }
  /* 00603137 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603139 je 0x603144 */ if (ZF_) goto L_00603144;
  /* 0060313b mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 0060313f jmp 0x5b2fe0 */ SAVEALL; F_005b2fe0(c); return;
L_00603144:;
  /* 00603144 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00603146 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603147 call 0x605c20 */ esp -= 4; M32(esp) = 0x60314cu; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x603147u); RETCHK(0x60314cu, 0x603147u); LOADALL;
  /* 0060314c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060314f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603150(CPU *c) {
  NATIVE_HOOK(0x603150u) REGS; LOADALL;
L_00603150:;
  /* 00603150 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603151 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00603155 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 00603158 test ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060315b jne 0x6032ec */ if (!ZF_) goto L_006032ec;
  /* 00603161 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603162 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603163 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603164 call 0x60b540 */ esp -= 4; M32(esp) = 0x603169u; SAVEALL; F_0060b540(c); ABI_CHECK(0x60b540u, 0x603164u); RETCHK(0x603169u, 0x603164u); LOADALL;
  /* 00603169 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 0060316d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060316f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00603171 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00603173 mov al, byte ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603176 mov cl, byte ptr [esi + 0x1b] */ { const u32 m_ = (u32)(esi + 0x1bu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603179 mov dl, byte ptr [esi + 0x1a] */ { const u32 m_ = (u32)(esi + 0x1au); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060317c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060317d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060317e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603180 mov al, byte ptr [esi + 0x19] */ { const u32 m_ = (u32)(esi + 0x19u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603183 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00603185 mov cl, byte ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603188 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603189 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0060318c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060318d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0060318f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603190 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603191 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603192 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603193 call 0x60b5b0 */ esp -= 4; M32(esp) = 0x603198u; SAVEALL; F_0060b5b0(c); ABI_CHECK(0x60b5b0u, 0x603193u); RETCHK(0x603198u, 0x603193u); LOADALL;
  /* 00603198 mov al, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060319b add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060319e test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006031a0 je 0x6031b4 */ if (ZF_) goto L_006031b4;
  /* 006031a2 fld dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); FPUSH((double)MF32(m_)); }
  /* 006031a5 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006031a8 fstp qword ptr [esp] */ { const u32 m_ = (u32)(esp); MF64(m_) = ST(0); FPOP(); }
  /* 006031ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006031ac call 0x60bc10 */ esp -= 4; M32(esp) = 0x6031b1u; SAVEALL; F_0060bc10(c); ABI_CHECK(0x60bc10u, 0x6031acu); RETCHK(0x6031b1u, 0x6031acu); LOADALL;
  /* 006031b1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006031b4:;
  /* 006031b4 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 006031b7 test ah, 8 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006031ba je 0x6031cb */ if (ZF_) goto L_006031cb;
  /* 006031bc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006031be mov cl, byte ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006031c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006031c2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006031c3 call 0x60bd10 */ esp -= 4; M32(esp) = 0x6031c8u; SAVEALL; F_0060bd10(c); ABI_CHECK(0x60bd10u, 0x6031c3u); RETCHK(0x6031c8u, 0x6031c3u); LOADALL;
  /* 006031c8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006031cb:;
  /* 006031cb mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 006031ce test ah, 0x10 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006031d1 je 0x6031f3 */ if (ZF_) goto L_006031f3;
  /* 006031d3 mov edx, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); edx = (u32)(M32(m_)); }
  /* 006031d9 mov eax, dword ptr [esi + 0xc8] */ { const u32 m_ = (u32)(esi + 0xc8u); eax = (u32)(M32(m_)); }
  /* 006031df mov ecx, dword ptr [esi + 0xc4] */ { const u32 m_ = (u32)(esi + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 006031e5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006031e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006031e7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006031e9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006031ea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006031eb call 0x60bdd0 */ esp -= 4; M32(esp) = 0x6031f0u; SAVEALL; F_0060bdd0(c); ABI_CHECK(0x60bdd0u, 0x6031ebu); RETCHK(0x6031f0u, 0x6031ebu); LOADALL;
  /* 006031f0 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006031f3:;
  /* 006031f3 test byte ptr [esi + 8], 2 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006031f7 je 0x60320c */ if (ZF_) goto L_0060320c;
  /* 006031f9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006031fb lea eax, [esi + 0x44] */ eax = (u32)((u32)(esi + 0x44u));
  /* 006031fe mov dl, byte ptr [esi + 0x19] */ { const u32 m_ = (u32)(esi + 0x19u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603201 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603202 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603203 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603204 call 0x60c500 */ esp -= 4; M32(esp) = 0x603209u; SAVEALL; F_0060c500(c); ABI_CHECK(0x60c500u, 0x603204u); RETCHK(0x603209u, 0x603204u); LOADALL;
  /* 00603209 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0060320c:;
  /* 0060320c test byte ptr [esi + 8], 4 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603210 je 0x60326d */ if (ZF_) goto L_0060326d;
  /* 00603212 fld dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); FPUSH((double)MF32(m_)); }
  /* 00603218 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060321b fstp qword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); MF64(m_) = ST(0); FPOP(); }
  /* 0060321f fld dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); FPUSH((double)MF32(m_)); }
  /* 00603225 fstp qword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); MF64(m_) = ST(0); FPOP(); }
  /* 00603229 fld dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); FPUSH((double)MF32(m_)); }
  /* 0060322f fstp qword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF64(m_) = ST(0); FPOP(); }
  /* 00603233 fld dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); FPUSH((double)MF32(m_)); }
  /* 00603239 fstp qword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF64(m_) = ST(0); FPOP(); }
  /* 0060323d fld dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); FPUSH((double)MF32(m_)); }
  /* 00603243 fstp qword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF64(m_) = ST(0); FPOP(); }
  /* 00603247 fld dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); FPUSH((double)MF32(m_)); }
  /* 0060324d fstp qword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF64(m_) = ST(0); FPOP(); }
  /* 00603251 fld dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); FPUSH((double)MF32(m_)); }
  /* 00603257 fstp qword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF64(m_) = ST(0); FPOP(); }
  /* 0060325b fld dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 00603261 fstp qword ptr [esp] */ { const u32 m_ = (u32)(esp); MF64(m_) = ST(0); FPOP(); }
  /* 00603264 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603265 call 0x60c670 */ esp -= 4; M32(esp) = 0x60326au; SAVEALL; F_0060c670(c); ABI_CHECK(0x60c670u, 0x603265u); RETCHK(0x60326au, 0x603265u); LOADALL;
  /* 0060326a add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0060326d:;
  /* 0060326d mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 00603273 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603275 je 0x6032e1 */ if (ZF_) goto L_006032e1;
  /* 00603277 mov edi, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); edi = (u32)(M32(m_)); }
  /* 0060327d lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 00603280 lea edx, [edi + ecx*4] */ edx = (u32)((u32)(edi + ecx * 4u));
  /* 00603283 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603285 jae 0x6032e1 */ if (!CF_) goto L_006032e1;
L_00603287:;
  /* 00603287 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603288 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603289 call 0x605bd0 */ esp -= 4; M32(esp) = 0x60328eu; SAVEALL; F_00605bd0(c); ABI_CHECK(0x605bd0u, 0x603289u); RETCHK(0x60328eu, 0x603289u); LOADALL;
  /* 0060328e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603291 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603294 je 0x6032c8 */ if (ZF_) goto L_006032c8;
  /* 00603296 mov cl, byte ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603299 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060329b je 0x6032c8 */ if (ZF_) goto L_006032c8;
  /* 0060329d test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006032a0 jne 0x6032c8 */ if (!ZF_) goto L_006032c8;
  /* 006032a2 test byte ptr [edi + 3], 0x20 */ { const u32 m_ = (u32)(edi + 0x3u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006032a6 jne 0x6032b6 */ if (!ZF_) goto L_006032b6;
  /* 006032a8 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006032ab je 0x6032b6 */ if (ZF_) goto L_006032b6;
  /* 006032ad test dword ptr [ebx + 0x6c], 0x10000 */ { const u32 m_ = (u32)(ebx + 0x6cu); u32 a_ = M32(m_), b_ = 0x10000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006032b4 je 0x6032c8 */ if (ZF_) goto L_006032c8;
L_006032b6:;
  /* 006032b6 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 006032b9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006032bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006032bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006032be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006032bf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006032c0 call 0x60b460 */ esp -= 4; M32(esp) = 0x6032c5u; SAVEALL; F_0060b460(c); ABI_CHECK(0x60b460u, 0x6032c0u); RETCHK(0x6032c5u, 0x6032c0u); LOADALL;
  /* 006032c5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006032c8:;
  /* 006032c8 mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 006032ce add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006032d1 lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 006032d4 mov eax, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); eax = (u32)(M32(m_)); }
  /* 006032da lea ecx, [eax + edx*4] */ ecx = (u32)((u32)(eax + edx * 4u));
  /* 006032dd cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006032df jb 0x603287 */ if (CF_) goto L_00603287;
L_006032e1:;
  /* 006032e1 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 006032e4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006032e5 or ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 006032e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006032e9 mov dword ptr [ebx + 0x68], eax */ { const u32 m_ = (u32)(ebx + 0x68u); M32(m_) = (u32)(eax); }
L_006032ec:;
  /* 006032ec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006032ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006032f0(CPU *c) {
  NATIVE_HOOK(0x6032f0u) REGS; LOADALL;
L_006032f0:;
  /* 006032f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006032f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006032f2 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 006032f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006032f7 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 006032fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006032fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006032fd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006032fe call 0x603150 */ esp -= 4; M32(esp) = 0x603303u; SAVEALL; F_00603150(c); ABI_CHECK(0x603150u, 0x6032feu); RETCHK(0x603303u, 0x6032feu); LOADALL;
  /* 00603303 mov al, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603306 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603309 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060330b je 0x603323 */ if (ZF_) goto L_00603323;
  /* 0060330d mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00603310 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603312 mov ax, word ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603316 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603317 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603318 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603319 call 0x60b990 */ esp -= 4; M32(esp) = 0x60331eu; SAVEALL; F_0060b990(c); ABI_CHECK(0x60b990u, 0x603319u); RETCHK(0x60331eu, 0x603319u); LOADALL;
  /* 0060331e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603321 jmp 0x603337 */ goto L_00603337;
L_00603323:;
  /* 00603323 cmp byte ptr [esi + 0x19], 3 */ { const u32 m_ = (u32)(esi + 0x19u); u32 a_ = M8(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00603327 jne 0x603337 */ if (!ZF_) goto L_00603337;
  /* 00603329 push 0x6810d8 */ { u32 v_ = 0x6810d8u; esp -= 4; M32(esp) = v_; }
  /* 0060332e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060332f call 0x605c20 */ esp -= 4; M32(esp) = 0x603334u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x60332fu); RETCHK(0x603334u, 0x60332fu); LOADALL;
  /* 00603334 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603337:;
  /* 00603337 test byte ptr [esi + 8], 0x10 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060333b je 0x60338d */ if (ZF_) goto L_0060338d;
  /* 0060333d test dword ptr [ebp + 0x70], 0x80000 */ { const u32 m_ = (u32)(ebp + 0x70u); u32 a_ = M32(m_), b_ = 0x80000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603344 je 0x60336f */ if (ZF_) goto L_0060336f;
  /* 00603346 cmp byte ptr [esi + 0x19], 3 */ { const u32 m_ = (u32)(esi + 0x19u); u32 a_ = M8(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0060334a jne 0x60336f */ if (!ZF_) goto L_0060336f;
  /* 0060334c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060334e cmp word ptr [esi + 0x16], ax */ { const u32 m_ = (u32)(esi + 0x16u); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00603352 jbe 0x60336f */ if ((CF_|ZF_)) goto L_0060336f;
L_00603354:;
  /* 00603354 mov edx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 00603357 mov bl, byte ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060335a lea ecx, [eax + edx] */ ecx = (u32)((u32)(eax + edx));
  /* 0060335d or dl, 0xff */ { u32 a_ = (edx & 0xffu), b_ = 0xffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00603360 sub dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00603362 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603363 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00603365 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00603367 mov cx, word ptr [esi + 0x16] */ { const u32 m_ = (u32)(esi + 0x16u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0060336b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060336d jl 0x603354 */ if (LT_) goto L_00603354;
L_0060336f:;
  /* 0060336f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00603371 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603373 mov dl, byte ptr [esi + 0x19] */ { const u32 m_ = (u32)(esi + 0x19u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603376 mov ax, word ptr [esi + 0x16] */ { const u32 m_ = (u32)(esi + 0x16u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0060337a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060337b mov edx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 0060337e lea ecx, [esi + 0x50] */ ecx = (u32)((u32)(esi + 0x50u));
  /* 00603381 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603382 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603383 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603384 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603385 call 0x60cbe0 */ esp -= 4; M32(esp) = 0x60338au; SAVEALL; F_0060cbe0(c); ABI_CHECK(0x60cbe0u, 0x603385u); RETCHK(0x60338au, 0x603385u); LOADALL;
  /* 0060338a add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0060338d:;
  /* 0060338d test byte ptr [esi + 8], 0x20 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603391 je 0x6033a6 */ if (ZF_) goto L_006033a6;
  /* 00603393 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603395 lea ecx, [esi + 0x5a] */ ecx = (u32)((u32)(esi + 0x5au));
  /* 00603398 mov al, byte ptr [esi + 0x19] */ { const u32 m_ = (u32)(esi + 0x19u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060339b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060339c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060339d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060339e call 0x60ce50 */ esp -= 4; M32(esp) = 0x6033a3u; SAVEALL; F_0060ce50(c); ABI_CHECK(0x60ce50u, 0x60339eu); RETCHK(0x6033a3u, 0x60339eu); LOADALL;
  /* 006033a3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006033a6:;
  /* 006033a6 test byte ptr [esi + 8], 0x40 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006033aa je 0x6033c0 */ if (ZF_) goto L_006033c0;
  /* 006033ac mov eax, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 006033af xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006033b1 mov dx, word ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006033b5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006033b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006033b7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006033b8 call 0x60d0a0 */ esp -= 4; M32(esp) = 0x6033bdu; SAVEALL; F_0060d0a0(c); ABI_CHECK(0x60d0a0u, 0x6033b8u); RETCHK(0x6033bdu, 0x6033b8u); LOADALL;
  /* 006033bd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006033c0:;
  /* 006033c0 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 006033c3 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006033c6 je 0x6033df */ if (ZF_) goto L_006033df;
  /* 006033c8 mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 006033cb mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 006033ce xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006033d0 mov cl, byte ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006033d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006033d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006033d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006033d6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006033d7 call 0x60d710 */ esp -= 4; M32(esp) = 0x6033dcu; SAVEALL; F_0060d710(c); ABI_CHECK(0x60d710u, 0x6033d7u); RETCHK(0x6033dcu, 0x6033d7u); LOADALL;
  /* 006033dc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006033df:;
  /* 006033df mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 006033e2 test ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006033e5 je 0x603425 */ if (ZF_) goto L_00603425;
  /* 006033e7 mov ecx, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 006033ed mov edx, dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); edx = (u32)(M32(m_)); }
  /* 006033f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006033f4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006033f6 mov al, byte ptr [esi + 0xb5] */ { const u32 m_ = (u32)(esi + 0xb5u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006033fc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006033fe mov cl, byte ptr [esi + 0xb4] */ { const u32 m_ = (u32)(esi + 0xb4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603404 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603405 mov edx, dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); edx = (u32)(M32(m_)); }
  /* 0060340b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060340c mov eax, dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); eax = (u32)(M32(m_)); }
  /* 00603412 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603413 mov ecx, dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); ecx = (u32)(M32(m_)); }
  /* 00603419 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060341a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060341b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060341c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060341d call 0x60d820 */ esp -= 4; M32(esp) = 0x603422u; SAVEALL; F_0060d820(c); ABI_CHECK(0x60d820u, 0x60341du); RETCHK(0x603422u, 0x60341du); LOADALL;
  /* 00603422 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603425:;
  /* 00603425 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00603428 test ah, 0x40 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060342b je 0x60344d */ if (ZF_) goto L_0060344d;
  /* 0060342d mov edx, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); edx = (u32)(M32(m_)); }
  /* 00603433 mov eax, dword ptr [esi + 0xf0] */ { const u32 m_ = (u32)(esi + 0xf0u); eax = (u32)(M32(m_)); }
  /* 00603439 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060343b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060343c mov cl, byte ptr [esi + 0xdc] */ { const u32 m_ = (u32)(esi + 0xdcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603442 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603443 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603444 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603445 call 0x60da90 */ esp -= 4; M32(esp) = 0x60344au; SAVEALL; F_0060da90(c); ABI_CHECK(0x60da90u, 0x603445u); RETCHK(0x60344au, 0x603445u); LOADALL;
  /* 0060344a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0060344d:;
  /* 0060344d mov al, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603450 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603452 jns 0x60346b */ if (!SF_) goto L_0060346b;
  /* 00603454 mov eax, dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); eax = (u32)(M32(m_)); }
  /* 00603457 mov ecx, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); ecx = (u32)(M32(m_)); }
  /* 0060345a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0060345c mov dl, byte ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060345f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603460 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603461 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603462 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603463 call 0x60dbf0 */ esp -= 4; M32(esp) = 0x603468u; SAVEALL; F_0060dbf0(c); ABI_CHECK(0x60dbf0u, 0x603463u); RETCHK(0x603468u, 0x603463u); LOADALL;
  /* 00603468 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0060346b:;
  /* 0060346b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060346e test ah, 0x20 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603471 je 0x6034a1 */ if (ZF_) goto L_006034a1;
  /* 00603473 mov eax, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); eax = (u32)(M32(m_)); }
  /* 00603479 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0060347b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060347d jle 0x6034a1 */ if ((ZF_|LT_)) goto L_006034a1;
  /* 0060347f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00603481:;
  /* 00603481 mov edx, dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); edx = (u32)(M32(m_)); }
  /* 00603487 add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00603489 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060348a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060348b call 0x60c2d0 */ esp -= 4; M32(esp) = 0x603490u; SAVEALL; F_0060c2d0(c); ABI_CHECK(0x60c2d0u, 0x60348bu); RETCHK(0x603490u, 0x60348bu); LOADALL;
  /* 00603490 mov eax, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); eax = (u32)(M32(m_)); }
  /* 00603496 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603499 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060349a add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0060349d cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060349f jl 0x603481 */ if (LT_) goto L_00603481;
L_006034a1:;
  /* 006034a1 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 006034a4 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 006034a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006034a8 jle 0x603516 */ if ((ZF_|LT_)) goto L_00603516;
  /* 006034aa xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_006034ac:;
  /* 006034ac mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 006034af add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006034b1 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006034b3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006034b5 jle 0x6034c7 */ if ((ZF_|LT_)) goto L_006034c7;
  /* 006034b7 push 0x6810b4 */ { u32 v_ = 0x6810b4u; esp -= 4; M32(esp) = v_; }
  /* 006034bc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006034bd call 0x605c40 */ esp -= 4; M32(esp) = 0x6034c2u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x6034bdu); RETCHK(0x6034c2u, 0x6034bdu); LOADALL;
  /* 006034c2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006034c5 jmp 0x603501 */ goto L_00603501;
L_006034c7:;
  /* 006034c7 jne 0x6034e9 */ if (!ZF_) goto L_006034e9;
  /* 006034c9 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006034cc mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 006034cf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006034d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006034d2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006034d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006034d4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006034d5 call 0x60d480 */ esp -= 4; M32(esp) = 0x6034dau; SAVEALL; F_0060d480(c); ABI_CHECK(0x60d480u, 0x6034d5u); RETCHK(0x6034dau, 0x6034d5u); LOADALL;
  /* 006034da mov ecx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 006034dd add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006034e0 mov dword ptr [edi + ecx], 0xfffffffe */ { const u32 m_ = (u32)(edi + ecx); M32(m_) = (u32)(0xfffffffeu); }
  /* 006034e7 jmp 0x60350b */ goto L_0060350b;
L_006034e9:;
  /* 006034e9 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006034ec jne 0x60350b */ if (!ZF_) goto L_0060350b;
  /* 006034ee mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006034f1 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 006034f4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006034f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006034f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006034f8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006034f9 call 0x60d340 */ esp -= 4; M32(esp) = 0x6034feu; SAVEALL; F_0060d340(c); ABI_CHECK(0x60d340u, 0x6034f9u); RETCHK(0x6034feu, 0x6034f9u); LOADALL;
  /* 006034fe add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603501:;
  /* 00603501 mov ecx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 00603504 mov dword ptr [edi + ecx], 0xfffffffd */ { const u32 m_ = (u32)(edi + ecx); M32(m_) = (u32)(0xfffffffdu); }
L_0060350b:;
  /* 0060350b mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0060350e inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060350f add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00603512 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603514 jl 0x6034ac */ if (LT_) goto L_006034ac;
L_00603516:;
  /* 00603516 mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 0060351c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060351e je 0x603590 */ if (ZF_) goto L_00603590;
  /* 00603520 mov edi, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); edi = (u32)(M32(m_)); }
  /* 00603526 lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 00603529 lea eax, [edi + edx*4] */ eax = (u32)((u32)(edi + edx * 4u));
  /* 0060352c cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060352e jae 0x603590 */ if (!CF_) goto L_00603590;
  /* 00603530 mov ebx, 0x10000 */ { ebx = (u32)(0x10000u); }
L_00603535:;
  /* 00603535 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603536 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603537 call 0x605bd0 */ esp -= 4; M32(esp) = 0x60353cu; SAVEALL; F_00605bd0(c); ABI_CHECK(0x605bd0u, 0x603537u); RETCHK(0x60353cu, 0x603537u); LOADALL;
  /* 0060353c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060353f cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603542 je 0x603577 */ if (ZF_) goto L_00603577;
  /* 00603544 mov cl, byte ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603547 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603549 je 0x603577 */ if (ZF_) goto L_00603577;
  /* 0060354b test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060354e je 0x603577 */ if (ZF_) goto L_00603577;
  /* 00603550 test cl, 4 */ { u32 a_ = (ecx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603553 jne 0x603577 */ if (!ZF_) goto L_00603577;
  /* 00603555 test byte ptr [edi + 3], 0x20 */ { const u32 m_ = (u32)(edi + 0x3u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603559 jne 0x603565 */ if (!ZF_) goto L_00603565;
  /* 0060355b cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060355e je 0x603565 */ if (ZF_) goto L_00603565;
  /* 00603560 test dword ptr [ebp + 0x6c], ebx */ { const u32 m_ = (u32)(ebp + 0x6cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603563 je 0x603577 */ if (ZF_) goto L_00603577;
L_00603565:;
  /* 00603565 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00603568 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0060356b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060356c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060356d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060356e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060356f call 0x60b460 */ esp -= 4; M32(esp) = 0x603574u; SAVEALL; F_0060b460(c); ABI_CHECK(0x60b460u, 0x60356fu); RETCHK(0x603574u, 0x60356fu); LOADALL;
  /* 00603574 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603577:;
  /* 00603577 mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 0060357d mov ecx, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 00603583 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00603586 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 00603589 lea edx, [ecx + eax*4] */ edx = (u32)((u32)(ecx + eax * 4u));
  /* 0060358c cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060358e jb 0x603535 */ if (CF_) goto L_00603535;
L_00603590:;
  /* 00603590 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603591 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603592 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00603593 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00603594 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006035a0(CPU *c) {
  NATIVE_HOOK(0x6035a0u) REGS; LOADALL;
L_006035a0:;
  /* 006035a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006035a1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006035a2 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 006035a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006035a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006035a8 test byte ptr [ebp + 0x68], 4 */ { const u32 m_ = (u32)(ebp + 0x68u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006035ac jne 0x6035bc */ if (!ZF_) goto L_006035bc;
  /* 006035ae push 0x681104 */ { u32 v_ = 0x681104u; esp -= 4; M32(esp) = v_; }
  /* 006035b3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006035b4 call 0x605c20 */ esp -= 4; M32(esp) = 0x6035b9u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x6035b4u); RETCHK(0x6035b9u, 0x6035b4u); LOADALL;
  /* 006035b9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006035bc:;
  /* 006035bc mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 006035c0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006035c2 je 0x6036b2 */ if (ZF_) goto L_006036b2;
  /* 006035c8 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 006035cb xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 006035cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006035cf jle 0x60363d */ if ((ZF_|LT_)) goto L_0060363d;
  /* 006035d1 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_006035d3:;
  /* 006035d3 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 006035d6 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006035d8 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006035da test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006035dc jle 0x6035ee */ if ((ZF_|LT_)) goto L_006035ee;
  /* 006035de push 0x6810b4 */ { u32 v_ = 0x6810b4u; esp -= 4; M32(esp) = v_; }
  /* 006035e3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006035e4 call 0x605c40 */ esp -= 4; M32(esp) = 0x6035e9u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x6035e4u); RETCHK(0x6035e9u, 0x6035e4u); LOADALL;
  /* 006035e9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006035ec jmp 0x603628 */ goto L_00603628;
L_006035ee:;
  /* 006035ee jl 0x603610 */ if (LT_) goto L_00603610;
  /* 006035f0 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 006035f3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 006035f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006035f7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006035f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006035fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006035fb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006035fc call 0x60d480 */ esp -= 4; M32(esp) = 0x603601u; SAVEALL; F_0060d480(c); ABI_CHECK(0x60d480u, 0x6035fcu); RETCHK(0x603601u, 0x6035fcu); LOADALL;
  /* 00603601 mov ecx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 00603604 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603607 mov dword ptr [edi + ecx], 0xfffffffe */ { const u32 m_ = (u32)(edi + ecx); M32(m_) = (u32)(0xfffffffeu); }
  /* 0060360e jmp 0x603632 */ goto L_00603632;
L_00603610:;
  /* 00603610 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603613 jne 0x603632 */ if (!ZF_) goto L_00603632;
  /* 00603615 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00603618 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0060361b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060361d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060361e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060361f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603620 call 0x60d340 */ esp -= 4; M32(esp) = 0x603625u; SAVEALL; F_0060d340(c); ABI_CHECK(0x60d340u, 0x603620u); RETCHK(0x603625u, 0x603620u); LOADALL;
  /* 00603625 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603628:;
  /* 00603628 mov ecx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0060362b mov dword ptr [edi + ecx], 0xfffffffd */ { const u32 m_ = (u32)(edi + ecx); M32(m_) = (u32)(0xfffffffdu); }
L_00603632:;
  /* 00603632 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00603635 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603636 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00603639 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060363b jl 0x6035d3 */ if (LT_) goto L_006035d3;
L_0060363d:;
  /* 0060363d mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 00603643 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603645 je 0x6036b2 */ if (ZF_) goto L_006036b2;
  /* 00603647 mov edi, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); edi = (u32)(M32(m_)); }
  /* 0060364d lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 00603650 lea eax, [edi + edx*4] */ eax = (u32)((u32)(edi + edx * 4u));
  /* 00603653 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603655 jae 0x6036b2 */ if (!CF_) goto L_006036b2;
  /* 00603657 mov ebx, 0x10000 */ { ebx = (u32)(0x10000u); }
L_0060365c:;
  /* 0060365c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060365d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060365e call 0x605bd0 */ esp -= 4; M32(esp) = 0x603663u; SAVEALL; F_00605bd0(c); ABI_CHECK(0x605bd0u, 0x60365eu); RETCHK(0x603663u, 0x60365eu); LOADALL;
  /* 00603663 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603666 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603669 je 0x603699 */ if (ZF_) goto L_00603699;
  /* 0060366b mov cl, byte ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060366e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603670 je 0x603699 */ if (ZF_) goto L_00603699;
  /* 00603672 test cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603675 je 0x603699 */ if (ZF_) goto L_00603699;
  /* 00603677 test byte ptr [edi + 3], 0x20 */ { const u32 m_ = (u32)(edi + 0x3u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060367b jne 0x603687 */ if (!ZF_) goto L_00603687;
  /* 0060367d cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603680 je 0x603687 */ if (ZF_) goto L_00603687;
  /* 00603682 test dword ptr [ebp + 0x6c], ebx */ { const u32 m_ = (u32)(ebp + 0x6cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603685 je 0x603699 */ if (ZF_) goto L_00603699;
L_00603687:;
  /* 00603687 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0060368a mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0060368d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060368e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060368f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603690 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603691 call 0x60b460 */ esp -= 4; M32(esp) = 0x603696u; SAVEALL; F_0060b460(c); ABI_CHECK(0x60b460u, 0x603691u); RETCHK(0x603696u, 0x603691u); LOADALL;
  /* 00603696 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603699:;
  /* 00603699 mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 0060369f mov ecx, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 006036a5 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006036a8 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 006036ab lea edx, [ecx + eax*4] */ edx = (u32)((u32)(ecx + eax * 4u));
  /* 006036ae cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006036b0 jb 0x60365c */ if (CF_) goto L_0060365c;
L_006036b2:;
  /* 006036b2 mov edx, dword ptr [ebp + 0x68] */ { const u32 m_ = (u32)(ebp + 0x68u); edx = (u32)(M32(m_)); }
  /* 006036b5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006036b6 or edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 006036b9 mov dword ptr [ebp + 0x68], edx */ { const u32 m_ = (u32)(ebp + 0x68u); M32(m_) = (u32)(edx); }
  /* 006036bc call 0x60bb80 */ esp -= 4; M32(esp) = 0x6036c1u; SAVEALL; F_0060bb80(c); ABI_CHECK(0x60bb80u, 0x6036bcu); RETCHK(0x6036c1u, 0x6036bcu); LOADALL;
  /* 006036c1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006036c4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006036c5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006036c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006036c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006036c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006036d0(CPU *c) {
  NATIVE_HOOK(0x6036d0u) REGS; LOADALL;
L_006036d0:;
  /* 006036d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006036d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 006036d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006036d4 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006036d7 mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 006036da push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006036db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006036dc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006036dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006036de push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006036df push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 006036e1 call 0x60f170 */ esp -= 4; M32(esp) = 0x6036e6u; SAVEALL; F_0060f170(c); ABI_CHECK(0x60f170u, 0x6036e1u); RETCHK(0x6036e6u, 0x6036e1u); LOADALL;
  /* 006036e6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006036e9 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 006036ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006036ee jne 0x6036f7 */ if (!ZF_) goto L_006036f7;
  /* 006036f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006036f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006036f2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006036f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006036f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006036f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006036f7:;
  /* 006036f7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006036f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006036fa call 0x61af88 */ { void *hb_; rt_setjmp(c, M32(esp), ebx, esi, edi, ebp, esp, &hb_); if (CK_SETJMP(hb_)) { LOADALL; eax = c->lj_val; } else eax = 0; }
  /* 006036ff mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00603702 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603705 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603707 je 0x603732 */ if (ZF_) goto L_00603732;
  /* 00603709 mov edx, dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); edx = (u32)(M32(m_)); }
  /* 0060370f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603710 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603711 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603716u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603711u); RETCHK(0x603716u, 0x603711u); LOADALL;
  /* 00603716 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603717 mov dword ptr [esi + 0xac], 0 */ { const u32 m_ = (u32)(esi + 0xacu); M32(m_) = (u32)(0x0u); }
  /* 00603721 call 0x60f200 */ esp -= 4; M32(esp) = 0x603726u; SAVEALL; F_0060f200(c); ABI_CHECK(0x60f200u, 0x603721u); RETCHK(0x603726u, 0x603721u); LOADALL;
  /* 00603726 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603729 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060372b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060372c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060372d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060372e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00603730 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00603731 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00603732:;
  /* 00603732 mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00603735 mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00603738 mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0060373b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060373c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060373d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060373e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060373f call 0x60f380 */ esp -= 4; M32(esp) = 0x603744u; SAVEALL; F_0060f380(c); ABI_CHECK(0x60f380u, 0x60373fu); RETCHK(0x603744u, 0x60373fu); LOADALL;
  /* 00603744 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00603747 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0060374a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0060374d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060374e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060374f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603750 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603751 call 0x605da0 */ esp -= 4; M32(esp) = 0x603756u; SAVEALL; F_00605da0(c); ABI_CHECK(0x605da0u, 0x603751u); RETCHK(0x603756u, 0x603751u); LOADALL;
  /* 00603756 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00603759 mov eax, 0x63d1f0 */ { eax = (u32)(0x63d1f0u); }
  /* 0060375e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00603760 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603763 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00603765 mov edx, 0x20000 */ { edx = (u32)(0x20000u); }
L_0060376a:;
  /* 0060376a mov bl, byte ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060376d cmp bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0060376f je 0x603774 */ if (ZF_) goto L_00603774;
  /* 00603771 or dword ptr [esi + 0x6c], edx */ { const u32 m_ = (u32)(esi + 0x6cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00603774:;
  /* 00603774 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603776 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603777 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603779 jne 0x60376a */ if (!ZF_) goto L_0060376a;
  /* 0060377b test dword ptr [esi + 0x6c], edx */ { const u32 m_ = (u32)(esi + 0x6cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060377e je 0x6037e4 */ if (ZF_) goto L_006037e4;
  /* 00603780 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603782 je 0x6037ab */ if (ZF_) goto L_006037ab;
  /* 00603784 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603786 mov cl, byte ptr [0x63d1f0] */ { const u32 m_ = (u32)(0x63d1f0u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060378c cmp al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0060378e jne 0x6037ab */ if (!ZF_) goto L_006037ab;
  /* 00603790 cmp al, 0x31 */ { u32 a_ = (eax & 0xffu), b_ = 0x31u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00603792 jne 0x6037a1 */ if (!ZF_) goto L_006037a1;
  /* 00603794 mov cl, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603797 mov dl, byte ptr [0x63d1f2] */ { const u32 m_ = (u32)(0x63d1f2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060379d cmp cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0060379f jne 0x6037ab */ if (!ZF_) goto L_006037ab;
L_006037a1:;
  /* 006037a1 cmp al, 0x30 */ { u32 a_ = (eax & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006037a3 jne 0x6037b9 */ if (!ZF_) goto L_006037b9;
  /* 006037a5 cmp byte ptr [edi + 2], 0x39 */ { const u32 m_ = (u32)(edi + 0x2u); u32 a_ = M8(m_), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006037a9 jge 0x6037b9 */ if (!LT_) goto L_006037b9;
L_006037ab:;
  /* 006037ab push 0x681164 */ { u32 v_ = 0x681164u; esp -= 4; M32(esp) = v_; }
  /* 006037b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006037b1 call 0x605c20 */ esp -= 4; M32(esp) = 0x6037b6u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x6037b1u); RETCHK(0x6037b6u, 0x6037b1u); LOADALL;
  /* 006037b6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006037b9:;
  /* 006037b9 cmp byte ptr [edi], 0x31 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x31u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006037bc jne 0x6037e4 */ if (!ZF_) goto L_006037e4;
  /* 006037be cmp byte ptr [edi + 2], 0x30 */ { const u32 m_ = (u32)(edi + 0x2u); u32 a_ = M8(m_), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006037c2 jne 0x6037e4 */ if (!ZF_) goto L_006037e4;
  /* 006037c4 mov al, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006037c7 cmp al, 0x32 */ { u32 a_ = (eax & 0xffu), b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006037c9 jl 0x6037cf */ if (LT_) goto L_006037cf;
  /* 006037cb cmp al, 0x36 */ { u32 a_ = (eax & 0xffu), b_ = 0x36u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006037cd jne 0x6037e4 */ if (!ZF_) goto L_006037e4;
L_006037cf:;
  /* 006037cf mov al, byte ptr [edi + 5] */ { const u32 m_ = (u32)(edi + 0x5u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006037d2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006037d4 jne 0x6037e4 */ if (!ZF_) goto L_006037e4;
  /* 006037d6 push 0x681120 */ { u32 v_ = 0x681120u; esp -= 4; M32(esp) = v_; }
  /* 006037db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006037dc call 0x605c20 */ esp -= 4; M32(esp) = 0x6037e1u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x6037dcu); RETCHK(0x6037e1u, 0x6037dcu); LOADALL;
  /* 006037e1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006037e4:;
  /* 006037e4 push 0x2000 */ { u32 v_ = 0x2000u; esp -= 4; M32(esp) = v_; }
  /* 006037e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006037ea mov dword ptr [esi + 0xb0], 0x2000 */ { const u32 m_ = (u32)(esi + 0xb0u); M32(m_) = (u32)(0x2000u); }
  /* 006037f4 call 0x60f270 */ esp -= 4; M32(esp) = 0x6037f9u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x6037f4u); RETCHK(0x6037f9u, 0x6037f4u); LOADALL;
  /* 006037f9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006037fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006037fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006037ff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603800 mov dword ptr [esi + 0xac], eax */ { const u32 m_ = (u32)(esi + 0xacu); M32(m_) = (u32)(eax); }
  /* 00603806 call 0x6055c0 */ esp -= 4; M32(esp) = 0x60380bu; SAVEALL; F_006055c0(c); ABI_CHECK(0x6055c0u, 0x603806u); RETCHK(0x60380bu, 0x603806u); LOADALL;
  /* 0060380b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060380d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060380f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00603811 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00603813 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603814 call 0x603d40 */ esp -= 4; M32(esp) = 0x603819u; SAVEALL; F_00603d40(c); ABI_CHECK(0x603d40u, 0x603814u); RETCHK(0x603819u, 0x603814u); LOADALL;
  /* 00603819 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060381c mov eax, esi */ { eax = (u32)(esi); }
  /* 0060381e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060381f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603820 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00603821 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00603823 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00603824 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603830(CPU *c) {
  NATIVE_HOOK(0x603830u) REGS; LOADALL;
L_00603830:;
  /* 00603830 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603831 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00603835 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603836 call 0x604050 */ esp -= 4; M32(esp) = 0x60383bu; SAVEALL; F_00604050(c); ABI_CHECK(0x604050u, 0x603836u); RETCHK(0x60383bu, 0x603836u); LOADALL;
  /* 0060383b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060383e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603840 jle 0x603883 */ if ((ZF_|LT_)) goto L_00603883;
  /* 00603842 mov ecx, dword ptr [ebx + 0xcc] */ { const u32 m_ = (u32)(ebx + 0xccu); ecx = (u32)(M32(m_)); }
  /* 00603848 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603849 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 0060384d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060384e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060384f mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
L_00603853:;
  /* 00603853 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00603855 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 00603857 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603859 jbe 0x603875 */ if ((CF_|ZF_)) goto L_00603875;
L_0060385b:;
  /* 0060385b mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0060385d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060385e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0060385f call 0x603890 */ esp -= 4; M32(esp) = 0x603864u; SAVEALL; F_00603890(c); ABI_CHECK(0x603890u, 0x60385fu); RETCHK(0x603864u, 0x60385fu); LOADALL;
  /* 00603864 mov ecx, dword ptr [ebx + 0xcc] */ { const u32 m_ = (u32)(ebx + 0xccu); ecx = (u32)(M32(m_)); }
  /* 0060386a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060386d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060386e add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00603871 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603873 jb 0x60385b */ if (CF_) goto L_0060385b;
L_00603875:;
  /* 00603875 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00603879 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0060387a mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0060387e jne 0x603853 */ if (!ZF_) goto L_00603853;
  /* 00603880 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603881 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603882 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_00603883:;
  /* 00603883 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00603884 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603890(CPU *c) {
  NATIVE_HOOK(0x603890u) REGS; LOADALL;
L_00603890:;
  /* 00603890 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603891 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00603895 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603896 mov eax, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); eax = (u32)(M32(m_)); }
  /* 0060389c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060389e jne 0x6038b3 */ if (!ZF_) goto L_006038b3;
  /* 006038a0 mov al, byte ptr [esi + 0x124] */ { const u32 m_ = (u32)(esi + 0x124u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006038a6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006038a8 jne 0x6038b3 */ if (!ZF_) goto L_006038b3;
  /* 006038aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006038ab call 0x60dd00 */ esp -= 4; M32(esp) = 0x6038b0u; SAVEALL; F_0060dd00(c); ABI_CHECK(0x60dd00u, 0x6038abu); RETCHK(0x6038b0u, 0x6038abu); LOADALL;
  /* 006038b0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006038b3:;
  /* 006038b3 mov al, byte ptr [esi + 0x123] */ { const u32 m_ = (u32)(esi + 0x123u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006038b9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006038bb je 0x6039a7 */ if (ZF_) goto L_006039a7;
  /* 006038c1 test byte ptr [esi + 0x70], 2 */ { const u32 m_ = (u32)(esi + 0x70u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006038c5 je 0x6039a7 */ if (ZF_) goto L_006039a7;
  /* 006038cb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006038cd mov al, byte ptr [esi + 0x124] */ { const u32 m_ = (u32)(esi + 0x124u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006038d3 cmp eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006038d6 ja 0x6039a7 */ if (!(CF_|ZF_)) goto L_006039a7;
  /* 006038dc jmp dword ptr [eax*4 + 0x603a8c] */ { const u32 m_ = (u32)(eax * 4u + 0x603a8cu); u32 t_ = M32(m_); switch (t_) { case 0x6038e3u: goto L_006038e3; case 0x6038fcu: goto L_006038fc; case 0x60391eu: goto L_0060391e; case 0x603937u: goto L_00603937; case 0x60395au: goto L_0060395a; case 0x603974u: goto L_00603974; case 0x603992u: goto L_00603992; default: SAVEALL; call_ind(c, t_); return; } }
L_006038e3:;
  /* 006038e3 test byte ptr [esi + 0xe4], 7 */ { const u32 m_ = (u32)(esi + 0xe4u); u32 a_ = M8(m_), b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006038ea je 0x6039a7 */ if (ZF_) goto L_006039a7;
  /* 006038f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006038f1 call 0x60dea0 */ esp -= 4; M32(esp) = 0x6038f6u; SAVEALL; F_0060dea0(c); ABI_CHECK(0x60dea0u, 0x6038f1u); RETCHK(0x6038f6u, 0x6038f1u); LOADALL;
  /* 006038f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006038f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006038fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006038fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006038fc:;
  /* 006038fc test byte ptr [esi + 0xe4], 7 */ { const u32 m_ = (u32)(esi + 0xe4u); u32 a_ = M8(m_), b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603903 jne 0x603912 */ if (!ZF_) goto L_00603912;
  /* 00603905 cmp dword ptr [esi + 0xc8], 5 */ { const u32 m_ = (u32)(esi + 0xc8u); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060390c jae 0x6039a7 */ if (!CF_) goto L_006039a7;
L_00603912:;
  /* 00603912 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603913 call 0x60dea0 */ esp -= 4; M32(esp) = 0x603918u; SAVEALL; F_0060dea0(c); ABI_CHECK(0x60dea0u, 0x603913u); RETCHK(0x603918u, 0x603913u); LOADALL;
  /* 00603918 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060391b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060391c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060391d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060391e:;
  /* 0060391e mov eax, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); eax = (u32)(M32(m_)); }
  /* 00603924 and eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603927 cmp al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00603929 je 0x6039a7 */ if (ZF_) goto L_006039a7;
  /* 0060392b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060392c call 0x60dea0 */ esp -= 4; M32(esp) = 0x603931u; SAVEALL; F_0060dea0(c); ABI_CHECK(0x60dea0u, 0x60392cu); RETCHK(0x603931u, 0x60392cu); LOADALL;
  /* 00603931 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603934 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603935 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603936 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00603937:;
  /* 00603937 mov cl, byte ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060393d mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 00603942 test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603944 jne 0x60394e */ if (!ZF_) goto L_0060394e;
  /* 00603946 cmp dword ptr [esi + 0xc8], eax */ { const u32 m_ = (u32)(esi + 0xc8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060394c jae 0x6039a7 */ if (!CF_) goto L_006039a7;
L_0060394e:;
  /* 0060394e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060394f call 0x60dea0 */ esp -= 4; M32(esp) = 0x603954u; SAVEALL; F_0060dea0(c); ABI_CHECK(0x60dea0u, 0x60394fu); RETCHK(0x603954u, 0x60394fu); LOADALL;
  /* 00603954 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603957 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603958 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603959 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060395a:;
  /* 0060395a mov ecx, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); ecx = (u32)(M32(m_)); }
  /* 00603960 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00603963 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00603966 je 0x6039a7 */ if (ZF_) goto L_006039a7;
  /* 00603968 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603969 call 0x60dea0 */ esp -= 4; M32(esp) = 0x60396eu; SAVEALL; F_0060dea0(c); ABI_CHECK(0x60dea0u, 0x603969u); RETCHK(0x60396eu, 0x603969u); LOADALL;
  /* 0060396e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603971 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603972 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603973 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00603974:;
  /* 00603974 test byte ptr [esi + 0xe4], 1 */ { const u32 m_ = (u32)(esi + 0xe4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060397b jne 0x603986 */ if (!ZF_) goto L_00603986;
  /* 0060397d cmp dword ptr [esi + 0xc8], 2 */ { const u32 m_ = (u32)(esi + 0xc8u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603984 jae 0x6039a7 */ if (!CF_) goto L_006039a7;
L_00603986:;
  /* 00603986 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603987 call 0x60dea0 */ esp -= 4; M32(esp) = 0x60398cu; SAVEALL; F_0060dea0(c); ABI_CHECK(0x60dea0u, 0x603987u); RETCHK(0x60398cu, 0x603987u); LOADALL;
  /* 0060398c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060398f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603990 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603991 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00603992:;
  /* 00603992 test byte ptr [esi + 0xe4], 1 */ { const u32 m_ = (u32)(esi + 0xe4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603999 jne 0x6039a7 */ if (!ZF_) goto L_006039a7;
  /* 0060399b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060399c call 0x60dea0 */ esp -= 4; M32(esp) = 0x6039a1u; SAVEALL; F_0060dea0(c); ABI_CHECK(0x60dea0u, 0x60399cu); RETCHK(0x6039a1u, 0x60399cu); LOADALL;
  /* 006039a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006039a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006039a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006039a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006039a7:;
  /* 006039a7 mov dl, byte ptr [esi + 0x126] */ { const u32 m_ = (u32)(esi + 0x126u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006039ad mov al, byte ptr [esi + 0x128] */ { const u32 m_ = (u32)(esi + 0x128u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006039b3 mov byte ptr [esi + 0x108], dl */ { const u32 m_ = (u32)(esi + 0x108u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006039b9 mov dl, byte ptr [esi + 0x12b] */ { const u32 m_ = (u32)(esi + 0x12bu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006039bf mov byte ptr [esi + 0x109], al */ { const u32 m_ = (u32)(esi + 0x109u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006039c5 imul dl */ { s32 p_ = (s32)(s8)eax * (s8)(edx & 0xffu); eax = (eax & 0xffff0000u) | ((u32)(p_) & 0xffffu); u32 of_ = p_ != (s32)(s8)p_; SETF(OP_RES, of_, 0, (u32)p_ & 0xffu, 1); SETC(OP_RAW, of_, 0, 0, 1); }
  /* 006039c7 mov ecx, dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 006039cd mov byte ptr [esi + 0x10b], al */ { const u32 m_ = (u32)(esi + 0x10bu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006039d3 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006039d8 lea edi, [esi + 0x100] */ edi = (u32)((u32)(esi + 0x100u));
  /* 006039de imul eax, ecx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 006039e1 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006039e4 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 006039e6 mov ecx, dword ptr [esi + 0xec] */ { const u32 m_ = (u32)(esi + 0xecu); ecx = (u32)(M32(m_)); }
  /* 006039ec mov byte ptr [esi + 0x10a], dl */ { const u32 m_ = (u32)(esi + 0x10au); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006039f2 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 006039f5 mov dword ptr [esi + 0x104], eax */ { const u32 m_ = (u32)(esi + 0x104u); M32(m_) = (u32)(eax); }
  /* 006039fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006039fc mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00603a00 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603a01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603a02 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603a03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603a04 call 0x60f310 */ esp -= 4; M32(esp) = 0x603a09u; SAVEALL; F_0060f310(c); ABI_CHECK(0x60f310u, 0x603a04u); RETCHK(0x603a09u, 0x603a04u); LOADALL;
  /* 00603a09 mov al, byte ptr [esi + 0x123] */ { const u32 m_ = (u32)(esi + 0x123u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603a0f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603a12 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603a14 je 0x603a4f */ if (ZF_) goto L_00603a4f;
  /* 00603a16 mov al, byte ptr [esi + 0x124] */ { const u32 m_ = (u32)(esi + 0x124u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603a1c cmp al, 6 */ { u32 a_ = (eax & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00603a1e jae 0x603a4f */ if (!CF_) goto L_00603a4f;
  /* 00603a20 test byte ptr [esi + 0x70], 2 */ { const u32 m_ = (u32)(esi + 0x70u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603a24 je 0x603a4f */ if (ZF_) goto L_00603a4f;
  /* 00603a26 mov edx, dword ptr [esi + 0xec] */ { const u32 m_ = (u32)(esi + 0xecu); edx = (u32)(M32(m_)); }
  /* 00603a2c and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603a31 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603a32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603a33 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603a34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603a35 call 0x60e1c0 */ esp -= 4; M32(esp) = 0x603a3au; SAVEALL; F_0060e1c0(c); ABI_CHECK(0x60e1c0u, 0x603a35u); RETCHK(0x603a3au, 0x603a35u); LOADALL;
  /* 00603a3a mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00603a3c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603a3f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603a41 jne 0x603a4f */ if (!ZF_) goto L_00603a4f;
  /* 00603a43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603a44 call 0x60dea0 */ esp -= 4; M32(esp) = 0x603a49u; SAVEALL; F_0060dea0(c); ABI_CHECK(0x60dea0u, 0x603a44u); RETCHK(0x603a49u, 0x603a44u); LOADALL;
  /* 00603a49 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603a4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603a4d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603a4e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00603a4f:;
  /* 00603a4f mov eax, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); eax = (u32)(M32(m_)); }
  /* 00603a52 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603a54 je 0x603a5f */ if (ZF_) goto L_00603a5f;
  /* 00603a56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603a57 call 0x60f3b0 */ esp -= 4; M32(esp) = 0x603a5cu; SAVEALL; F_0060f3b0(c); ABI_CHECK(0x60f3b0u, 0x603a57u); RETCHK(0x603a5cu, 0x603a57u); LOADALL;
  /* 00603a5c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603a5f:;
  /* 00603a5f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603a60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603a61 call 0x60e400 */ esp -= 4; M32(esp) = 0x603a66u; SAVEALL; F_0060e400(c); ABI_CHECK(0x60e400u, 0x603a61u); RETCHK(0x603a66u, 0x603a61u); LOADALL;
  /* 00603a66 mov eax, dword ptr [esi + 0x19c] */ { const u32 m_ = (u32)(esi + 0x19cu); eax = (u32)(M32(m_)); }
  /* 00603a6c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603a6f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603a71 je 0x603a89 */ if (ZF_) goto L_00603a89;
  /* 00603a73 mov edx, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); edx = (u32)(M32(m_)); }
  /* 00603a79 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00603a7b mov cl, byte ptr [esi + 0x124] */ { const u32 m_ = (u32)(esi + 0x124u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00603a81 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603a82 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603a83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603a84 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x603a86u; SAVEALL; call_ind(c, t_); RETCHK(0x603a86u, 0x603a84u); LOADALL; }
  /* 00603a86 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603a89:;
  /* 00603a89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603a8a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603a8b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603ab0(CPU *c) {
  NATIVE_HOOK(0x603ab0u) REGS; LOADALL;
L_00603ab0:;
  /* 00603ab0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603ab1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00603ab5 mov eax, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); eax = (u32)(M32(m_)); }
  /* 00603abb mov ecx, dword ptr [esi + 0xd0] */ { const u32 m_ = (u32)(esi + 0xd0u); ecx = (u32)(M32(m_)); }
  /* 00603ac1 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603ac3 jae 0x603b81 */ if (!CF_) goto L_00603b81;
  /* 00603ac9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603aca lea edi, [esi + 0x74] */ edi = (u32)((u32)(esi + 0x74u));
L_00603acd:;
  /* 00603acd push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00603acf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603ad0 call 0x60fed0 */ esp -= 4; M32(esp) = 0x603ad5u; SAVEALL; F_0060fed0(c); ABI_CHECK(0x60fed0u, 0x603ad0u); RETCHK(0x603ad5u, 0x603ad0u); LOADALL;
  /* 00603ad5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603ad8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603ada je 0x603af7 */ if (ZF_) goto L_00603af7;
  /* 00603adc mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 00603ae2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603ae4 je 0x603ae9 */ if (ZF_) goto L_00603ae9;
  /* 00603ae6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603ae7 jmp 0x603aee */ goto L_00603aee;
L_00603ae9:;
  /* 00603ae9 push 0x68119c */ { u32 v_ = 0x68119cu; esp -= 4; M32(esp) = v_; }
L_00603aee:;
  /* 00603aee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603aef call 0x605c20 */ esp -= 4; M32(esp) = 0x603af4u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x603aefu); RETCHK(0x603af4u, 0x603aefu); LOADALL;
  /* 00603af4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603af7:;
  /* 00603af7 mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 00603afd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603aff jne 0x603b32 */ if (!ZF_) goto L_00603b32;
  /* 00603b01 mov ecx, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 00603b07 mov edx, dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); edx = (u32)(M32(m_)); }
  /* 00603b0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603b0e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603b0f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603b10 call 0x60bac0 */ esp -= 4; M32(esp) = 0x603b15u; SAVEALL; F_0060bac0(c); ABI_CHECK(0x60bac0u, 0x603b10u); RETCHK(0x603b15u, 0x603b10u); LOADALL;
  /* 00603b15 mov eax, dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); eax = (u32)(M32(m_)); }
  /* 00603b1b mov ecx, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 00603b21 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603b24 mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 00603b2a mov dword ptr [esi + 0x84], ecx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(ecx); }
  /* 00603b30 jmp 0x603acd */ goto L_00603acd;
L_00603b32:;
  /* 00603b32 mov eax, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); eax = (u32)(M32(m_)); }
  /* 00603b38 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 00603b3e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603b40 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603b41 je 0x603b6e */ if (ZF_) goto L_00603b6e;
  /* 00603b43 mov edx, dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); edx = (u32)(M32(m_)); }
  /* 00603b49 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00603b4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603b4c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603b4d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603b4e call 0x60bac0 */ esp -= 4; M32(esp) = 0x603b53u; SAVEALL; F_0060bac0(c); ABI_CHECK(0x60bac0u, 0x603b4eu); RETCHK(0x603b53u, 0x603b4eu); LOADALL;
  /* 00603b53 mov eax, dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); eax = (u32)(M32(m_)); }
  /* 00603b59 mov ecx, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 00603b5f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603b62 mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 00603b68 mov dword ptr [esi + 0x84], ecx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(ecx); }
L_00603b6e:;
  /* 00603b6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603b6f mov dword ptr [esi + 0x154], 0 */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(0x0u); }
  /* 00603b79 call 0x6055a0 */ esp -= 4; M32(esp) = 0x603b7eu; SAVEALL; F_006055a0(c); ABI_CHECK(0x6055a0u, 0x603b79u); RETCHK(0x603b7eu, 0x603b79u); LOADALL;
  /* 00603b7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00603b81:;
  /* 00603b81 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603b82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603b90(CPU *c) {
  NATIVE_HOOK(0x603b90u) REGS; LOADALL;
L_00603b90:;
  /* 00603b90 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00603b94 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603b95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603b96 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00603b98 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00603b9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603b9c je 0x603ba6 */ if (ZF_) goto L_00603ba6;
  /* 00603b9e mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00603ba0 mov ebx, dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); ebx = (u32)(M32(m_)); }
L_00603ba6:;
  /* 00603ba6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603ba7 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 00603bab test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603bad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603bae je 0x603c03 */ if (ZF_) goto L_00603c03;
  /* 00603bb0 mov edi, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edi = (u32)(M32(m_)); }
  /* 00603bb3 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603bb5 je 0x603c03 */ if (ZF_) goto L_00603c03;
  /* 00603bb7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00603bb9 push 0x7fff */ { u32 v_ = 0x7fffu; esp -= 4; M32(esp) = v_; }
  /* 00603bbe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603bbf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603bc0 call 0x6057b0 */ esp -= 4; M32(esp) = 0x603bc5u; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x603bc0u); RETCHK(0x603bc5u, 0x603bc0u); LOADALL;
  /* 00603bc5 mov eax, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00603bcb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603bce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603bd0 je 0x603bf0 */ if (ZF_) goto L_00603bf0;
  /* 00603bd2 mov eax, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00603bd8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603bd9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603bda call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603bdfu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603bdau); RETCHK(0x603bdfu, 0x603bdau); LOADALL;
  /* 00603bdf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603be2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603be4 mov dword ptr [esi + 0x1d4], eax */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 00603bea mov dword ptr [esi + 0x1d0], eax */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(eax); }
L_00603bf0:;
  /* 00603bf0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00603bf2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603bf3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603bf4 call 0x60f220 */ esp -= 4; M32(esp) = 0x603bf9u; SAVEALL; F_0060f220(c); ABI_CHECK(0x60f220u, 0x603bf4u); RETCHK(0x603bf9u, 0x603bf4u); LOADALL;
  /* 00603bf9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603bfc mov dword ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(0x0u); }
L_00603c03:;
  /* 00603c03 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603c05 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603c06 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00603c07 je 0x603c25 */ if (ZF_) goto L_00603c25;
  /* 00603c09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603c0a call 0x603c30 */ esp -= 4; M32(esp) = 0x603c0fu; SAVEALL; F_00603c30(c); ABI_CHECK(0x603c30u, 0x603c0au); RETCHK(0x603c0fu, 0x603c0au); LOADALL;
  /* 00603c0f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00603c11 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c12 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603c13 call 0x60f220 */ esp -= 4; M32(esp) = 0x603c18u; SAVEALL; F_0060f220(c); ABI_CHECK(0x60f220u, 0x603c13u); RETCHK(0x603c18u, 0x603c13u); LOADALL;
  /* 00603c18 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00603c1c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603c1f mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_00603c25:;
  /* 00603c25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603c26 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00603c27 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603c30(CPU *c) {
  NATIVE_HOOK(0x603c30u) REGS; LOADALL;
L_00603c30:;
  /* 00603c30 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603c33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c34 mov ebx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ebx = (u32)(M32(m_)); }
  /* 00603c38 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603c39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603c3a lea eax, [ebx + 0x74] */ eax = (u32)((u32)(ebx + 0x74u));
  /* 00603c3d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603c3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603c3f call 0x610340 */ esp -= 4; M32(esp) = 0x603c44u; SAVEALL; F_00610340(c); ABI_CHECK(0x610340u, 0x603c3fu); RETCHK(0x603c44u, 0x603c3fu); LOADALL;
  /* 00603c44 mov ecx, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); ecx = (u32)(M32(m_)); }
  /* 00603c4a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603c4b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c4c call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603c51u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603c4cu); RETCHK(0x603c51u, 0x603c4cu); LOADALL;
  /* 00603c51 mov edx, dword ptr [ebx + 0xec] */ { const u32 m_ = (u32)(ebx + 0xecu); edx = (u32)(M32(m_)); }
  /* 00603c57 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603c58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c59 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603c5eu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603c59u); RETCHK(0x603c5eu, 0x603c59u); LOADALL;
  /* 00603c5e mov eax, dword ptr [ebx + 0xe8] */ { const u32 m_ = (u32)(ebx + 0xe8u); eax = (u32)(M32(m_)); }
  /* 00603c64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603c65 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c66 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603c6bu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603c66u); RETCHK(0x603c6bu, 0x603c66u); LOADALL;
  /* 00603c6b mov ecx, dword ptr [ebx + 0xf0] */ { const u32 m_ = (u32)(ebx + 0xf0u); ecx = (u32)(M32(m_)); }
  /* 00603c71 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603c72 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c73 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603c78u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603c73u); RETCHK(0x603c78u, 0x603c73u); LOADALL;
  /* 00603c78 mov edx, dword ptr [ebx + 0xf4] */ { const u32 m_ = (u32)(ebx + 0xf4u); edx = (u32)(M32(m_)); }
  /* 00603c7e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603c7f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c80 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603c85u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603c80u); RETCHK(0x603c85u, 0x603c80u); LOADALL;
  /* 00603c85 mov eax, dword ptr [ebx + 0xf8] */ { const u32 m_ = (u32)(ebx + 0xf8u); eax = (u32)(M32(m_)); }
  /* 00603c8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603c8c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c8d call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603c92u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603c8du); RETCHK(0x603c92u, 0x603c8du); LOADALL;
  /* 00603c92 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 00603c98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603c99 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603c9a call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603c9fu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603c9au); RETCHK(0x603c9fu, 0x603c9au); LOADALL;
  /* 00603c9f mov edx, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); edx = (u32)(M32(m_)); }
  /* 00603ca5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603ca6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603ca7 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603cacu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603ca7u); RETCHK(0x603cacu, 0x603ca7u); LOADALL;
  /* 00603cac mov eax, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 00603cb2 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603cb5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603cb6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603cb7 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603cbcu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603cb7u); RETCHK(0x603cbcu, 0x603cb7u); LOADALL;
  /* 00603cbc mov ecx, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); ecx = (u32)(M32(m_)); }
  /* 00603cc2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00603cc3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603cc4 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603cc9u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603cc4u); RETCHK(0x603cc9u, 0x603cc4u); LOADALL;
  /* 00603cc9 mov edx, dword ptr [ebx + 0x1bc] */ { const u32 m_ = (u32)(ebx + 0x1bcu); edx = (u32)(M32(m_)); }
  /* 00603ccf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00603cd0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603cd1 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603cd6u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603cd1u); RETCHK(0x603cd6u, 0x603cd1u); LOADALL;
  /* 00603cd6 mov eax, dword ptr [ebx + 0x1c0] */ { const u32 m_ = (u32)(ebx + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 00603cdc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603cdd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603cde call 0x60f2e0 */ esp -= 4; M32(esp) = 0x603ce3u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x603cdeu); RETCHK(0x603ce3u, 0x603cdeu); LOADALL;
  /* 00603ce3 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00603ce8 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00603cea lea edi, [esp + 0x30] */ edi = (u32)((u32)(esp + 0x30u));
  /* 00603cee mov edx, dword ptr [ebx + 0x40] */ { const u32 m_ = (u32)(ebx + 0x40u); edx = (u32)(M32(m_)); }
  /* 00603cf1 mov ebp, dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); ebp = (u32)(M32(m_)); }
  /* 00603cf4 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603cf7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00603cf9 mov ecx, dword ptr [ebx + 0x1f0] */ { const u32 m_ = (u32)(ebx + 0x1f0u); ecx = (u32)(M32(m_)); }
  /* 00603cff mov esi, dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); esi = (u32)(M32(m_)); }
  /* 00603d02 mov dword ptr [esp + 0x54], ecx */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(ecx); }
  /* 00603d06 mov ecx, 0x7d */ { ecx = (u32)(0x7du); }
  /* 00603d0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603d0d mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00603d0f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00603d11 mov dword ptr [ebx + 0x44], esi */ { const u32 m_ = (u32)(ebx + 0x44u); M32(m_) = (u32)(esi); }
  /* 00603d14 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00603d19 lea esi, [esp + 0x10] */ esi = (u32)((u32)(esp + 0x10u));
  /* 00603d1d mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00603d1f mov dword ptr [ebx + 0x40], edx */ { const u32 m_ = (u32)(ebx + 0x40u); M32(m_) = (u32)(edx); }
  /* 00603d22 mov edx, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); edx = (u32)(M32(m_)); }
  /* 00603d26 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00603d28 mov dword ptr [ebx + 0x48], ebp */ { const u32 m_ = (u32)(ebx + 0x48u); M32(m_) = (u32)(ebp); }
  /* 00603d2b mov dword ptr [ebx + 0x1f0], edx */ { const u32 m_ = (u32)(ebx + 0x1f0u); M32(m_) = (u32)(edx); }
  /* 00603d31 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603d32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603d33 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00603d34 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00603d35 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603d38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00603d40(CPU *c) {
  NATIVE_HOOK(0x603d40u) REGS; LOADALL;
L_00603d40:;
  /* 00603d40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00603d41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00603d43 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 00603d46 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603d49 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00603d4c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603d4d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603d4e cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603d51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603d52 jl 0x603d6c */ if (LT_) goto L_00603d6c;
  /* 00603d54 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00603d57 push 0x6811a8 */ { u32 v_ = 0x6811a8u; esp -= 4; M32(esp) = v_; }
  /* 00603d5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00603d5d call 0x605c40 */ esp -= 4; M32(esp) = 0x603d62u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x603d5du); RETCHK(0x603d62u, 0x603d5du); LOADALL;
  /* 00603d62 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603d65 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00603d66 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00603d67 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00603d68 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00603d6a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00603d6b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00603d6c:;
  /* 00603d6c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603d6e jne 0x603d75 */ if (!ZF_) goto L_00603d75;
  /* 00603d70 mov eax, 1 */ { eax = (u32)(0x1u); }
L_00603d75:;
  /* 00603d75 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00603d78 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00603d7b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603d7d jl 0x603d88 */ if (LT_) goto L_00603d88;
  /* 00603d7f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603d81 je 0x603d88 */ if (ZF_) goto L_00603d88;
  /* 00603d83 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603d86 jne 0x603d8a */ if (!ZF_) goto L_00603d8a;
L_00603d88:;
  /* 00603d88 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00603d8a:;
  /* 00603d8a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00603d8d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603d8f mov byte ptr [esi + 0x1ad], bl */ { const u32 m_ = (u32)(esi + 0x1adu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00603d95 mov byte ptr [esi + 0x1ac], al */ { const u32 m_ = (u32)(esi + 0x1acu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00603d9b jle 0x603ee9 */ if ((ZF_|LT_)) goto L_00603ee9;
  /* 00603da1 mov eax, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 00603da7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603da9 jne 0x603dd1 */ if (!ZF_) goto L_00603dd1;
  /* 00603dab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00603dac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603dad call 0x60f270 */ esp -= 4; M32(esp) = 0x603db2u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x603dadu); RETCHK(0x603db2u, 0x603dadu); LOADALL;
  /* 00603db2 mov dword ptr [esi + 0x1b0], eax */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 00603db8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603dbb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603dbd test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603dbf jle 0x603dd1 */ if ((ZF_|LT_)) goto L_00603dd1;
L_00603dc1:;
  /* 00603dc1 mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 00603dc7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603dc8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603dca mov byte ptr [eax + ecx - 1], 0xff */ { const u32 m_ = (u32)(eax + ecx + 0xffffffffu); M8(m_) = (u8)(0xffu); }
  /* 00603dcf jl 0x603dc1 */ if (LT_) goto L_00603dc1;
L_00603dd1:;
  /* 00603dd1 mov eax, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 00603dd7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603dd9 jne 0x603e23 */ if (!ZF_) goto L_00603e23;
  /* 00603ddb lea edi, [ebx + ebx] */ edi = (u32)((u32)(ebx + ebx));
  /* 00603dde push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603ddf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603de0 call 0x60f270 */ esp -= 4; M32(esp) = 0x603de5u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x603de0u); RETCHK(0x603de5u, 0x603de0u); LOADALL;
  /* 00603de5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00603de6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603de7 mov dword ptr [esi + 0x1b4], eax */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(eax); }
  /* 00603ded call 0x60f270 */ esp -= 4; M32(esp) = 0x603df2u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x603dedu); RETCHK(0x603df2u, 0x603dedu); LOADALL;
  /* 00603df2 mov dword ptr [esi + 0x1b8], eax */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(eax); }
  /* 00603df8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603dfb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603dfd test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603dff jle 0x603e20 */ if ((ZF_|LT_)) goto L_00603e20;
L_00603e01:;
  /* 00603e01 mov edx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 00603e07 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603e08 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603e0a mov word ptr [edx + eax*2 - 2], 0x100 */ { const u32 m_ = (u32)(edx + eax * 2u + 0xfffffffeu); M16(m_) = (u16)(0x100u); }
  /* 00603e11 mov ecx, dword ptr [esi + 0x1b8] */ { const u32 m_ = (u32)(esi + 0x1b8u); ecx = (u32)(M32(m_)); }
  /* 00603e17 mov word ptr [ecx + eax*2 - 2], 0x100 */ { const u32 m_ = (u32)(ecx + eax * 2u + 0xfffffffeu); M16(m_) = (u16)(0x100u); }
  /* 00603e1e jl 0x603e01 */ if (LT_) goto L_00603e01;
L_00603e20:;
  /* 00603e20 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
L_00603e23:;
  /* 00603e23 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00603e25 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603e27 jle 0x603ee9 */ if ((ZF_|LT_)) goto L_00603ee9;
L_00603e2d:;
  /* 00603e2d fld qword ptr [edi + ecx*8] */ { const u32 m_ = (u32)(edi + ecx * 8u); FPUSH(MF64(m_)); }
  /* 00603e30 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00603e36 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00603e38 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603e3b jp 0x603e5a */ if (PF_) goto L_00603e5a;
  /* 00603e3d mov edx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 00603e43 mov word ptr [edx + ecx*2], 0x100 */ { const u32 m_ = (u32)(edx + ecx * 2u); M16(m_) = (u16)(0x100u); }
  /* 00603e49 mov eax, dword ptr [esi + 0x1b8] */ { const u32 m_ = (u32)(esi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 00603e4f mov word ptr [eax + ecx*2], 0x100 */ { const u32 m_ = (u32)(eax + ecx * 2u); M16(m_) = (u16)(0x100u); }
  /* 00603e55 jmp 0x603ee0 */ goto L_00603ee0;
L_00603e5a:;
  /* 00603e5a fld qword ptr [edi + ecx*8] */ { const u32 m_ = (u32)(edi + ecx * 8u); FPUSH(MF64(m_)); }
  /* 00603e5d fmul qword ptr [0x63d1d8] */ { const u32 m_ = (u32)(0x63d1d8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00603e63 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 00603e69 fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00603e6d fnstcw word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); M16(m_) = (u16)c->fcw; }
  /* 00603e71 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00603e75 mov ax, word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603e7a or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00603e7d mov word ptr [esp + 0xc], ax */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00603e82 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00603e86 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00603e8a fldcw word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00603e8e mov edx, dword ptr [esi + 0x1b8] */ { const u32 m_ = (u32)(esi + 0x1b8u); edx = (u32)(M32(m_)); }
  /* 00603e94 mov ax, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603e99 fld qword ptr [0x63d1d8] */ { const u32 m_ = (u32)(0x63d1d8u); FPUSH(MF64(m_)); }
  /* 00603e9f mov word ptr [edx + ecx*2], ax */ { const u32 m_ = (u32)(edx + ecx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00603ea3 fdiv qword ptr [edi + ecx*8] */ { const u32 m_ = (u32)(edi + ecx * 8u); ST(0) = FR(ST(0) / MF64(m_)); }
  /* 00603ea6 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 00603eac fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00603eb0 fnstcw word ptr [esp + 0x12] */ { const u32 m_ = (u32)(esp + 0x12u); M16(m_) = (u16)c->fcw; }
  /* 00603eb4 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00603eb8 mov ax, word ptr [esp + 0x12] */ { const u32 m_ = (u32)(esp + 0x12u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603ebd or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00603ec0 mov word ptr [esp + 0x10], ax */ { const u32 m_ = (u32)(esp + 0x10u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00603ec5 fldcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00603ec9 fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00603ecd fldcw word ptr [esp + 0x12] */ { const u32 m_ = (u32)(esp + 0x12u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00603ed1 mov edx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 00603ed7 mov ax, word ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603edc mov word ptr [edx + ecx*2], ax */ { const u32 m_ = (u32)(edx + ecx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
L_00603ee0:;
  /* 00603ee0 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00603ee1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603ee3 jl 0x603e2d */ if (LT_) goto L_00603e2d;
L_00603ee9:;
  /* 00603ee9 mov eax, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 00603eef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603ef1 jne 0x603f36 */ if (!ZF_) goto L_00603f36;
  /* 00603ef3 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00603ef5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603ef6 call 0x60f270 */ esp -= 4; M32(esp) = 0x603efbu; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x603ef6u); RETCHK(0x603efbu, 0x603ef6u); LOADALL;
  /* 00603efb push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00603efd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00603efe mov dword ptr [esi + 0x1bc], eax */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(eax); }
  /* 00603f04 call 0x60f270 */ esp -= 4; M32(esp) = 0x603f09u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x603f04u); RETCHK(0x603f09u, 0x603f04u); LOADALL;
  /* 00603f09 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00603f0c mov dword ptr [esi + 0x1c0], eax */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 00603f12 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00603f14:;
  /* 00603f14 mov ecx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 00603f1a add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00603f1d cmp eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00603f20 mov word ptr [eax + ecx - 2], 8 */ { const u32 m_ = (u32)(eax + ecx + 0xfffffffeu); M16(m_) = (u16)(0x8u); }
  /* 00603f27 mov edx, dword ptr [esi + 0x1c0] */ { const u32 m_ = (u32)(esi + 0x1c0u); edx = (u32)(M32(m_)); }
  /* 00603f2d mov word ptr [eax + edx - 2], 8 */ { const u32 m_ = (u32)(eax + edx + 0xfffffffeu); M16(m_) = (u16)(0x8u); }
  /* 00603f34 jl 0x603f14 */ if (LT_) goto L_00603f14;
L_00603f36:;
  /* 00603f36 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 00603f39 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00603f3b mov edx, edi */ { edx = (u32)(edi); }
L_00603f3d:;
  /* 00603f3d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00603f3f je 0x603ff3 */ if (ZF_) goto L_00603ff3;
  /* 00603f45 fld qword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH(MF64(m_)); }
  /* 00603f47 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00603f4d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00603f4f test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00603f52 jnp 0x603ff1 */ if (!PF_) goto L_00603ff1;
  /* 00603f58 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00603f5e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00603f60 and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00603f65 jne 0x60400b */ if (!ZF_) goto L_0060400b;
  /* 00603f6b fld qword ptr [0x639910] */ { const u32 m_ = (u32)(0x639910u); FPUSH(MF64(m_)); }
  /* 00603f71 fdiv qword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) / MF64(m_)); }
  /* 00603f73 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 00603f79 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00603f7d fnstcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); M16(m_) = (u16)c->fcw; }
  /* 00603f81 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 00603f85 mov ax, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603f8a or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00603f8d mov word ptr [esp + 0x12], ax */ { const u32 m_ = (u32)(esp + 0x12u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00603f92 fldcw word ptr [esp + 0x12] */ { const u32 m_ = (u32)(esp + 0x12u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00603f96 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00603f9a fldcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00603f9e mov eax, dword ptr [esi + 0x1c0] */ { const u32 m_ = (u32)(esi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 00603fa4 mov bx, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603fa9 mov word ptr [ecx + eax], bx */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00603fad fld qword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH(MF64(m_)); }
  /* 00603faf fmul qword ptr [0x639910] */ { const u32 m_ = (u32)(0x639910u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00603fb5 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 00603fbb fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00603fbf fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 00603fc3 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 00603fc7 mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603fcc or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00603fcf mov word ptr [esp + 0xe], ax */ { const u32 m_ = (u32)(esp + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00603fd4 fldcw word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00603fd8 fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00603fdc fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00603fe0 mov eax, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 00603fe6 mov bx, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00603feb mov word ptr [ecx + eax], bx */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00603fef jmp 0x60400b */ goto L_0060400b;
L_00603ff1:;
  /* 00603ff1 fstp st(0) */ ST(0) = ST(0); FPOP();
L_00603ff3:;
  /* 00603ff3 mov eax, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 00603ff9 mov word ptr [ecx + eax], 8 */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)(0x8u); }
  /* 00603fff mov eax, dword ptr [esi + 0x1c0] */ { const u32 m_ = (u32)(esi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 00604005 mov word ptr [ecx + eax], 8 */ { const u32 m_ = (u32)(ecx + eax); M16(m_) = (u16)(0x8u); }
L_0060400b:;
  /* 0060400b add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0060400e add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00604011 cmp ecx, 0xa */ { u32 a_ = ecx, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604014 jl 0x603f3d */ if (LT_) goto L_00603f3d;
  /* 0060401a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060401b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060401c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060401d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0060401f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00604020 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604030(CPU *c) {
  NATIVE_HOOK(0x604030u) REGS; LOADALL;
L_00604030:;
  /* 00604030 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604034 mov cl, 8 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x8u) & 0xffu); }
  /* 00604036 cmp byte ptr [eax + 0x127], cl */ { const u32 m_ = (u32)(eax + 0x127u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0060403c jae 0x60404d */ if (!CF_) goto L_0060404d;
  /* 0060403e mov edx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); edx = (u32)(M32(m_)); }
  /* 00604041 mov byte ptr [eax + 0x128], cl */ { const u32 m_ = (u32)(eax + 0x128u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604047 or edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0060404a mov dword ptr [eax + 0x70], edx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(edx); }
L_0060404d:;
  /* 0060404d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604050(CPU *c) {
  NATIVE_HOOK(0x604050u) REGS; LOADALL;
L_00604050:;
  /* 00604050 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604054 mov cl, byte ptr [eax + 0x123] */ { const u32 m_ = (u32)(eax + 0x123u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060405a test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060405c je 0x60406d */ if (ZF_) goto L_0060406d;
  /* 0060405e mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 00604061 or ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604064 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 00604067 mov eax, 7 */ { eax = (u32)(0x7u); }
  /* 0060406c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060406d:;
  /* 0060406d mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00604072 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604080(CPU *c) {
  NATIVE_HOOK(0x604080u) REGS; LOADALL;
L_00604080:;
  /* 00604080 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604084 mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 00604087 or ch, 0x80 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0060408a mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 0060408d movzx cx, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (ecx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00604093 mov word ptr [eax + 0x12e], cx */ { const u32 m_ = (u32)(eax + 0x12eu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0060409a mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0060409e cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006040a1 mov ecx, dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 006040a4 jne 0x6040ab */ if (!ZF_) goto L_006040ab;
  /* 006040a6 or cl, 0x80 */ { u32 a_ = (ecx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006040a9 jmp 0x6040ae */ goto L_006040ae;
L_006040ab:;
  /* 006040ab and cl, 0x7f */ { u32 a_ = (ecx & 0xffu), b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_006040ae:;
  /* 006040ae mov dword ptr [eax + 0x6c], ecx */ { const u32 m_ = (u32)(eax + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 006040b1 mov cl, byte ptr [eax + 0x126] */ { const u32 m_ = (u32)(eax + 0x126u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006040b7 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006040ba jne 0x6040c3 */ if (!ZF_) goto L_006040c3;
  /* 006040bc mov byte ptr [eax + 0x12b], 4 */ { const u32 m_ = (u32)(eax + 0x12bu); M8(m_) = (u8)(0x4u); }
L_006040c3:;
  /* 006040c3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006040c5 jne 0x6040d7 */ if (!ZF_) goto L_006040d7;
  /* 006040c7 cmp byte ptr [eax + 0x127], 8 */ { const u32 m_ = (u32)(eax + 0x127u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006040ce jb 0x6040d7 */ if (CF_) goto L_006040d7;
  /* 006040d0 mov byte ptr [eax + 0x12b], 2 */ { const u32 m_ = (u32)(eax + 0x12bu); M8(m_) = (u8)(0x2u); }
L_006040d7:;
  /* 006040d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006040e0(CPU *c) {
  NATIVE_HOOK(0x6040e0u) REGS; LOADALL;
L_006040e0:;
  /* 006040e0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006040e4 cmp byte ptr [ecx + 9], 1 */ { const u32 m_ = (u32)(ecx + 0x9u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006040e8 jne 0x604107 */ if (!ZF_) goto L_00604107;
  /* 006040ea mov al, byte ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006040ed test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006040ef jne 0x604107 */ if (!ZF_) goto L_00604107;
  /* 006040f1 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006040f4 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006040f8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006040fa jbe 0x604107 */ if ((CF_|ZF_)) goto L_00604107;
L_006040fc:;
  /* 006040fc mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006040fe inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006040ff not dl */ { edx = (edx & 0xffffff00u) | ((u32)(~(edx & 0xffu) & 0xffu) & 0xffu); }
  /* 00604101 mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604104 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00604105 jne 0x6040fc */ if (!ZF_) goto L_006040fc;
L_00604107:;
  /* 00604107 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604110(CPU *c) {
  NATIVE_HOOK(0x604110u) REGS; LOADALL;
L_00604110:;
  /* 00604110 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00604114 cmp byte ptr [edx + 9], 0x10 */ { const u32 m_ = (u32)(edx + 0x9u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00604118 jne 0x60413e */ if (!ZF_) goto L_0060413e;
  /* 0060411a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060411c mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604120 mov cl, byte ptr [edx + 0xa] */ { const u32 m_ = (u32)(edx + 0xau); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604123 imul ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00604126 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604128 jbe 0x60413e */ if ((CF_|ZF_)) goto L_0060413e;
  /* 0060412a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060412b mov esi, ecx */ { esi = (u32)(ecx); }
L_0060412d:;
  /* 0060412d mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060412f mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604132 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604134 mov byte ptr [eax + 1], cl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604137 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060413a dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0060413b jne 0x60412d */ if (!ZF_) goto L_0060412d;
  /* 0060413d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0060413e:;
  /* 0060413e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604140(CPU *c) {
  NATIVE_HOOK(0x604140u) REGS; LOADALL;
L_00604140:;
  /* 00604140 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604144 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604145 mov dl, byte ptr [eax + 9] */ { const u32 m_ = (u32)(eax + 0x9u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604148 cmp dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0060414b jae 0x60418b */ if (!CF_) goto L_0060418b;
  /* 0060414d mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00604150 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00604154 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00604156 cmp dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00604159 jne 0x604162 */ if (!ZF_) goto L_00604162;
  /* 0060415b mov esi, 0x6811c8 */ { esi = (u32)(0x6811c8u); }
  /* 00604160 jmp 0x604178 */ goto L_00604178;
L_00604162:;
  /* 00604162 cmp dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00604165 jne 0x60416e */ if (!ZF_) goto L_0060416e;
  /* 00604167 mov esi, 0x6812c8 */ { esi = (u32)(0x6812c8u); }
  /* 0060416c jmp 0x604178 */ goto L_00604178;
L_0060416e:;
  /* 0060416e cmp dl, 4 */ { u32 a_ = (edx & 0xffu), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00604171 jne 0x60418b */ if (!ZF_) goto L_0060418b;
  /* 00604173 mov esi, 0x6813c8 */ { esi = (u32)(0x6813c8u); }
L_00604178:;
  /* 00604178 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060417a jae 0x60418b */ if (!CF_) goto L_0060418b;
L_0060417c:;
  /* 0060417c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0060417e mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604180 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604181 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604183 mov dl, byte ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604186 mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604189 jb 0x60417c */ if (CF_) goto L_0060417c;
L_0060418b:;
  /* 0060418b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060418c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604190(CPU *c) {
  NATIVE_HOOK(0x604190u) REGS; LOADALL;
L_00604190:;
  /* 00604190 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00604191 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 00604195 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604196 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0060419a mov dl, byte ptr [ebp + 0xa] */ { const u32 m_ = (u32)(ebp + 0xau); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060419d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060419e mov edi, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edi = (u32)(M32(m_)); }
  /* 006041a1 cmp dl, 4 */ { u32 a_ = (edx & 0xffu), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006041a4 mov eax, esi */ { eax = (u32)(esi); }
  /* 006041a6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 006041a8 jne 0x6042cc */ if (!ZF_) goto L_006042cc;
  /* 006041ae mov dl, byte ptr [ebp + 9] */ { const u32 m_ = (u32)(ebp + 0x9u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006041b1 cmp dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006041b4 mov dl, byte ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006041b8 jne 0x604238 */ if (!ZF_) goto L_00604238;
  /* 006041ba test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006041bc jns 0x6041ff */ if (!SF_) goto L_006041ff;
  /* 006041be cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006041c1 lea edx, [esi + 3] */ edx = (u32)((u32)(esi + 0x3u));
  /* 006041c4 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 006041c7 jbe 0x60421e */ if ((CF_|ZF_)) goto L_0060421e;
  /* 006041c9 lea esi, [edi - 1] */ esi = (u32)((u32)(edi + 0xffffffffu));
L_006041cc:;
  /* 006041cc mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006041ce mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006041d0 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006041d3 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006041d4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006041d5 mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006041d7 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006041da inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006041db inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006041dc add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006041df mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006041e1 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006041e2 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006041e3 jne 0x6041cc */ if (!ZF_) goto L_006041cc;
  /* 006041e5 lea eax, [edi + edi*2] */ eax = (u32)((u32)(edi + edi * 2u));
  /* 006041e8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006041e9 mov dword ptr [ebp + 4], eax */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(eax); }
  /* 006041ec mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006041ef and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006041f1 mov byte ptr [ebp + 0xb], 0x18 */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)(0x18u); }
  /* 006041f5 mov byte ptr [ebp + 0xa], 3 */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)(0x3u); }
  /* 006041f9 mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006041fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006041fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006041fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006041ff:;
  /* 006041ff test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604201 jbe 0x60421e */ if ((CF_|ZF_)) goto L_0060421e;
  /* 00604203 mov esi, edi */ { esi = (u32)(edi); }
L_00604205:;
  /* 00604205 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604208 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604209 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060420b inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060420c mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060420f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604210 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604212 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604213 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604216 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604217 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604219 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060421a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060421b dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0060421c jne 0x604205 */ if (!ZF_) goto L_00604205;
L_0060421e:;
  /* 0060421e lea eax, [edi + edi*2] */ eax = (u32)((u32)(edi + edi * 2u));
  /* 00604221 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604222 mov dword ptr [ebp + 4], eax */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(eax); }
  /* 00604225 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604228 and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0060422a mov byte ptr [ebp + 0xb], 0x18 */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)(0x18u); }
  /* 0060422e mov byte ptr [ebp + 0xa], 3 */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)(0x3u); }
  /* 00604232 mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00604235 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604236 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00604237 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00604238:;
  /* 00604238 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060423a jns 0x60427a */ if (!SF_) goto L_0060427a;
  /* 0060423c cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060423f lea edx, [esi + 8] */ edx = (u32)((u32)(esi + 0x8u));
  /* 00604242 lea eax, [esi + 6] */ eax = (u32)((u32)(esi + 0x6u));
  /* 00604245 jbe 0x6042b0 */ if ((CF_|ZF_)) goto L_006042b0;
  /* 00604247 lea esi, [edi - 1] */ esi = (u32)((u32)(edi + 0xffffffffu));
L_0060424a:;
  /* 0060424a mov cl, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060424c mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0060424e mov cl, byte ptr [edx + 1] */ { const u32 m_ = (u32)(edx + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604251 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604252 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604253 mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604255 mov cl, byte ptr [edx + 1] */ { const u32 m_ = (u32)(edx + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604258 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604259 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060425a mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0060425c mov cl, byte ptr [edx + 1] */ { const u32 m_ = (u32)(edx + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060425f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604260 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604261 mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604263 mov cl, byte ptr [edx + 1] */ { const u32 m_ = (u32)(edx + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604266 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604267 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604268 mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0060426a mov cl, byte ptr [edx + 1] */ { const u32 m_ = (u32)(edx + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060426d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060426e inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060426f add edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00604272 mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604274 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604275 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00604276 jne 0x60424a */ if (!ZF_) goto L_0060424a;
  /* 00604278 jmp 0x6042b0 */ goto L_006042b0;
L_0060427a:;
  /* 0060427a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060427c jbe 0x6042b0 */ if ((CF_|ZF_)) goto L_006042b0;
  /* 0060427e mov esi, edi */ { esi = (u32)(edi); }
L_00604280:;
  /* 00604280 mov dl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604283 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00604286 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604288 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604289 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060428c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060428d mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060428f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604290 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604293 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604294 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604296 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604297 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060429a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060429b mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060429d inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060429e mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006042a1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006042a2 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006042a4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006042a5 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006042a8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006042a9 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006042ab inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006042ac inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006042ad dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006042ae jne 0x604280 */ if (!ZF_) goto L_00604280;
L_006042b0:;
  /* 006042b0 lea eax, [edi + edi*2] */ eax = (u32)((u32)(edi + edi * 2u));
  /* 006042b3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006042b4 add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006042b6 mov byte ptr [ebp + 0xb], 0x30 */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)(0x30u); }
  /* 006042ba mov dword ptr [ebp + 4], eax */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(eax); }
  /* 006042bd mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006042c0 and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006042c2 mov byte ptr [ebp + 0xa], 3 */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)(0x3u); }
  /* 006042c6 mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006042c9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006042ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006042cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006042cc:;
  /* 006042cc cmp dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006042cf jne 0x604392 */ if (!ZF_) goto L_00604392;
  /* 006042d5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006042d6 mov bl, byte ptr [ebp + 9] */ { const u32 m_ = (u32)(ebp + 0x9u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006042d9 mov dl, 8 */ { edx = (edx & 0xffffff00u) | ((u32)(0x8u) & 0xffu); }
  /* 006042db cmp bl, dl */ { u32 a_ = (ebx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006042dd jne 0x604337 */ if (!ZF_) goto L_00604337;
  /* 006042df mov bl, byte ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006042e3 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006042e5 jns 0x60430f */ if (!SF_) goto L_0060430f;
  /* 006042e7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006042e9 jbe 0x604320 */ if ((CF_|ZF_)) goto L_00604320;
  /* 006042eb mov esi, edi */ { esi = (u32)(edi); }
L_006042ed:;
  /* 006042ed mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006042ef add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006042f2 mov byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 006042f4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006042f5 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006042f6 jne 0x6042ed */ if (!ZF_) goto L_006042ed;
  /* 006042f8 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006042fb mov dword ptr [ebp + 4], edi */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(edi); }
  /* 006042fe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006042ff and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604301 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604302 mov byte ptr [ebp + 0xb], dl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604305 mov byte ptr [ebp + 0xa], 1 */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)(0x1u); }
  /* 00604309 mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0060430c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060430d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060430e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060430f:;
  /* 0060430f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604311 jbe 0x604320 */ if ((CF_|ZF_)) goto L_00604320;
  /* 00604313 mov esi, edi */ { esi = (u32)(edi); }
L_00604315:;
  /* 00604315 mov bl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604318 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604319 mov byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0060431b inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060431c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060431d dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0060431e jne 0x604315 */ if (!ZF_) goto L_00604315;
L_00604320:;
  /* 00604320 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604323 mov dword ptr [ebp + 4], edi */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(edi); }
  /* 00604326 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00604327 and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604329 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060432a mov byte ptr [ebp + 0xb], dl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060432d mov byte ptr [ebp + 0xa], 1 */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)(0x1u); }
  /* 00604331 mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00604334 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604335 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00604336 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00604337:;
  /* 00604337 mov dl, byte ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060433b test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060433d jns 0x604361 */ if (!SF_) goto L_00604361;
  /* 0060433f cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604342 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 00604345 lea eax, [esi + 2] */ eax = (u32)((u32)(esi + 0x2u));
  /* 00604348 jbe 0x60437b */ if ((CF_|ZF_)) goto L_0060437b;
  /* 0060434a lea esi, [edi - 1] */ esi = (u32)((u32)(edi + 0xffffffffu));
L_0060434d:;
  /* 0060434d mov cl, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060434f mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604351 mov cl, byte ptr [edx + 1] */ { const u32 m_ = (u32)(edx + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604354 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604355 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604356 add edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00604359 mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0060435b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060435c dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0060435d jne 0x60434d */ if (!ZF_) goto L_0060434d;
  /* 0060435f jmp 0x60437b */ goto L_0060437b;
L_00604361:;
  /* 00604361 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604363 jbe 0x60437b */ if ((CF_|ZF_)) goto L_0060437b;
  /* 00604365 mov esi, edi */ { esi = (u32)(edi); }
L_00604367:;
  /* 00604367 mov dl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060436a add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060436d mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060436f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604370 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604373 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604374 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604376 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604377 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604378 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00604379 jne 0x604367 */ if (!ZF_) goto L_00604367;
L_0060437b:;
  /* 0060437b lea eax, [edi + edi] */ eax = (u32)((u32)(edi + edi));
  /* 0060437e mov byte ptr [ebp + 0xb], 0x10 */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)(0x10u); }
  /* 00604382 mov dword ptr [ebp + 4], eax */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(eax); }
  /* 00604385 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604388 and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0060438a mov byte ptr [ebp + 0xa], 1 */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)(0x1u); }
  /* 0060438e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060438f mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
L_00604392:;
  /* 00604392 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604393 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604394 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00604395 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006043a0(CPU *c) {
  NATIVE_HOOK(0x6043a0u) REGS; LOADALL;
L_006043a0:;
  /* 006043a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 006043a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006043a5 mov dl, byte ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006043a8 test dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006043ab je 0x604460 */ if (ZF_) goto L_00604460;
  /* 006043b1 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 006043b3 mov al, byte ptr [eax + 9] */ { const u32 m_ = (u32)(eax + 0x9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006043b6 cmp al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006043b8 jne 0x604400 */ if (!ZF_) goto L_00604400;
  /* 006043ba cmp dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006043bd jne 0x6043df */ if (!ZF_) goto L_006043df;
  /* 006043bf mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006043c3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006043c5 jbe 0x604460 */ if ((CF_|ZF_)) goto L_00604460;
  /* 006043cb mov esi, ecx */ { esi = (u32)(ecx); }
L_006043cd:;
  /* 006043cd mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006043cf mov cl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006043d2 mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006043d4 mov byte ptr [eax + 2], dl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006043d7 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006043da dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006043db jne 0x6043cd */ if (!ZF_) goto L_006043cd;
  /* 006043dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006043de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006043df:;
  /* 006043df cmp dl, 6 */ { u32 a_ = (edx & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006043e2 jne 0x604460 */ if (!ZF_) goto L_00604460;
  /* 006043e4 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006043e8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006043ea jbe 0x604460 */ if ((CF_|ZF_)) goto L_00604460;
  /* 006043ec mov esi, ecx */ { esi = (u32)(ecx); }
L_006043ee:;
  /* 006043ee mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006043f0 mov cl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006043f3 mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006043f5 mov byte ptr [eax + 2], dl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006043f8 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006043fb dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006043fc jne 0x6043ee */ if (!ZF_) goto L_006043ee;
  /* 006043fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006043ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00604400:;
  /* 00604400 cmp al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00604402 jne 0x604460 */ if (!ZF_) goto L_00604460;
  /* 00604404 cmp dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00604407 jne 0x604434 */ if (!ZF_) goto L_00604434;
  /* 00604409 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060440b jbe 0x604460 */ if ((CF_|ZF_)) goto L_00604460;
  /* 0060440d mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00604411 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00604413 lea eax, [edx + 1] */ eax = (u32)((u32)(edx + 0x1u));
L_00604416:;
  /* 00604416 mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604419 mov dl, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060441c mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060441f mov dl, byte ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604422 mov byte ptr [eax + 3], cl */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604425 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604427 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604429 mov byte ptr [eax + 4], cl */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0060442c add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060442f dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00604430 jne 0x604416 */ if (!ZF_) goto L_00604416;
  /* 00604432 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604433 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00604434:;
  /* 00604434 cmp dl, 6 */ { u32 a_ = (edx & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00604437 jne 0x604460 */ if (!ZF_) goto L_00604460;
  /* 00604439 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060443b jbe 0x604460 */ if ((CF_|ZF_)) goto L_00604460;
  /* 0060443d mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00604441 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00604443 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00604444:;
  /* 00604444 mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604447 mov dl, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060444a mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0060444d mov dl, byte ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604450 mov byte ptr [eax + 3], cl */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604453 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604455 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604457 mov byte ptr [eax + 4], cl */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0060445a add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060445d dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0060445e jne 0x604444 */ if (!ZF_) goto L_00604444;
L_00604460:;
  /* 00604460 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604461 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604470(CPU *c) {
  NATIVE_HOOK(0x604470u) REGS; LOADALL;
L_00604470:;
  /* 00604470 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604474 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604476 je 0x6044a4 */ if (ZF_) goto L_006044a4;
  /* 00604478 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060447c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060447e je 0x6044a4 */ if (ZF_) goto L_006044a4;
  /* 00604480 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00604484 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604485 lea ecx, [eax + 0x5a] */ ecx = (u32)((u32)(eax + 0x5au));
  /* 00604488 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 0060448a mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 0060448c mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0060448f mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 00604492 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604493 mov dx, word ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00604497 mov word ptr [ecx + 8], dx */ { const u32 m_ = (u32)(ecx + 0x8u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0060449b mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0060449e or ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006044a1 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_006044a4:;
  /* 006044a4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006044b0(CPU *c) {
  NATIVE_HOOK(0x6044b0u) REGS; LOADALL;
L_006044b0:;
  /* 006044b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006044b1 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006044b5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006044b7 je 0x604719 */ if (ZF_) goto L_00604719;
  /* 006044bd mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006044c1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006044c3 je 0x604719 */ if (ZF_) goto L_00604719;
  /* 006044c9 fld qword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH(MF64(m_)); }
  /* 006044cd fstp dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006044d3 fld qword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH(MF64(m_)); }
  /* 006044d7 fstp dword ptr [ecx + 0x84] */ { const u32 m_ = (u32)(ecx + 0x84u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006044dd fld qword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH(MF64(m_)); }
  /* 006044e1 fstp dword ptr [ecx + 0x88] */ { const u32 m_ = (u32)(ecx + 0x88u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006044e7 fld qword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH(MF64(m_)); }
  /* 006044eb fstp dword ptr [ecx + 0x8c] */ { const u32 m_ = (u32)(ecx + 0x8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006044f1 fld qword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); FPUSH(MF64(m_)); }
  /* 006044f5 fstp dword ptr [ecx + 0x90] */ { const u32 m_ = (u32)(ecx + 0x90u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006044fb fld qword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); FPUSH(MF64(m_)); }
  /* 006044ff fstp dword ptr [ecx + 0x94] */ { const u32 m_ = (u32)(ecx + 0x94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00604505 fld qword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); FPUSH(MF64(m_)); }
  /* 00604509 fstp dword ptr [ecx + 0x98] */ { const u32 m_ = (u32)(ecx + 0x98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0060450f fld qword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); FPUSH(MF64(m_)); }
  /* 00604513 fstp dword ptr [ecx + 0x9c] */ { const u32 m_ = (u32)(ecx + 0x9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00604519 fld qword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH(MF64(m_)); }
  /* 0060451d fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604523 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 00604529 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0060452d fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 00604531 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00604535 mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0060453a or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0060453d mov word ptr [esp + 8], ax */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00604542 fldcw word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604546 fistp dword ptr [esp] */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0060454a fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0060454e fld qword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH(MF64(m_)); }
  /* 00604552 fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604558 mov eax, dword ptr [esp] */ { const u32 m_ = (u32)(esp); eax = (u32)(M32(m_)); }
  /* 0060455c mov dword ptr [ecx + 0x100], eax */ { const u32 m_ = (u32)(ecx + 0x100u); M32(m_) = (u32)(eax); }
  /* 00604562 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 00604568 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0060456c fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 00604570 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00604574 mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00604579 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0060457c mov word ptr [esp + 8], ax */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00604581 fldcw word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604585 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00604589 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0060458d fld qword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH(MF64(m_)); }
  /* 00604591 fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604597 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0060459b mov dword ptr [ecx + 0x104], edx */ { const u32 m_ = (u32)(ecx + 0x104u); M32(m_) = (u32)(edx); }
  /* 006045a1 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 006045a7 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006045ab fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 006045af fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 006045b3 mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006045b8 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 006045bb mov word ptr [esp + 8], ax */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 006045c0 fldcw word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 006045c4 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 006045c8 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 006045cc fld qword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH(MF64(m_)); }
  /* 006045d0 fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006045d6 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006045da mov dword ptr [ecx + 0x108], eax */ { const u32 m_ = (u32)(ecx + 0x108u); M32(m_) = (u32)(eax); }
  /* 006045e0 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 006045e6 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006045ea fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 006045ee fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 006045f2 mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006045f7 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 006045fa mov word ptr [esp + 8], ax */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 006045ff fldcw word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604603 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00604607 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0060460b fld qword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); FPUSH(MF64(m_)); }
  /* 0060460f fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604615 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00604619 mov dword ptr [ecx + 0x10c], edx */ { const u32 m_ = (u32)(ecx + 0x10cu); M32(m_) = (u32)(edx); }
  /* 0060461f fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 00604625 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00604629 fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 0060462d fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00604631 mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00604636 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604639 mov word ptr [esp + 8], ax */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0060463e fldcw word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604642 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00604646 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0060464a fld qword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); FPUSH(MF64(m_)); }
  /* 0060464e fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604654 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00604658 mov dword ptr [ecx + 0x110], eax */ { const u32 m_ = (u32)(ecx + 0x110u); M32(m_) = (u32)(eax); }
  /* 0060465e fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 00604664 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00604668 fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 0060466c fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00604670 mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00604675 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604678 mov word ptr [esp + 8], ax */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0060467d fldcw word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604681 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00604685 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604689 fld qword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); FPUSH(MF64(m_)); }
  /* 0060468d fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604693 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00604697 mov dword ptr [ecx + 0x114], edx */ { const u32 m_ = (u32)(ecx + 0x114u); M32(m_) = (u32)(edx); }
  /* 0060469d fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 006046a3 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006046a7 fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 006046ab fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 006046af mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006046b4 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 006046b7 mov word ptr [esp + 8], ax */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 006046bc fldcw word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 006046c0 fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 006046c4 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 006046c8 fld qword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); FPUSH(MF64(m_)); }
  /* 006046cc fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006046d2 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006046d6 mov dword ptr [ecx + 0x118], eax */ { const u32 m_ = (u32)(ecx + 0x118u); M32(m_) = (u32)(eax); }
  /* 006046dc fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 006046e2 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006046e6 fnstcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)c->fcw; }
  /* 006046ea fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 006046ee mov ax, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006046f3 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 006046f6 mov word ptr [esp + 8], ax */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 006046fb fldcw word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 006046ff fistp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00604703 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604707 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0060470b mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060470e mov dword ptr [ecx + 0x11c], edx */ { const u32 m_ = (u32)(ecx + 0x11cu); M32(m_) = (u32)(edx); }
  /* 00604714 or al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604716 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_00604719:;
  /* 00604719 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0060471a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604720(CPU *c) {
  NATIVE_HOOK(0x604720u) REGS; LOADALL;
L_00604720:;
  /* 00604720 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604724 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604726 je 0x604811 */ if (ZF_) goto L_00604811;
  /* 0060472c mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604730 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604732 je 0x604811 */ if (ZF_) goto L_00604811;
  /* 00604738 fild dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0060473c mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00604740 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00604744 mov dword ptr [eax + 0x100], ecx */ { const u32 m_ = (u32)(eax + 0x100u); M32(m_) = (u32)(ecx); }
  /* 0060474a mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0060474e fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604754 fstp dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0060475a fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0060475e mov dword ptr [eax + 0x108], ecx */ { const u32 m_ = (u32)(eax + 0x108u); M32(m_) = (u32)(ecx); }
  /* 00604764 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00604768 mov dword ptr [eax + 0x104], edx */ { const u32 m_ = (u32)(eax + 0x104u); M32(m_) = (u32)(edx); }
  /* 0060476e mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00604772 fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604778 fstp dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0060477e fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 00604782 mov dword ptr [eax + 0x110], ecx */ { const u32 m_ = (u32)(eax + 0x110u); M32(m_) = (u32)(ecx); }
  /* 00604788 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0060478c mov dword ptr [eax + 0x10c], edx */ { const u32 m_ = (u32)(eax + 0x10cu); M32(m_) = (u32)(edx); }
  /* 00604792 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 00604796 fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 0060479c fstp dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006047a2 fild dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 006047a6 mov dword ptr [eax + 0x118], ecx */ { const u32 m_ = (u32)(eax + 0x118u); M32(m_) = (u32)(ecx); }
  /* 006047ac mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006047af mov dword ptr [eax + 0x114], edx */ { const u32 m_ = (u32)(eax + 0x114u); M32(m_) = (u32)(edx); }
  /* 006047b5 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 006047b9 fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006047bf fstp dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006047c5 fild dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 006047c9 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006047cc mov dword ptr [eax + 0x11c], edx */ { const u32 m_ = (u32)(eax + 0x11cu); M32(m_) = (u32)(edx); }
  /* 006047d2 fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006047d8 fstp dword ptr [eax + 0x90] */ { const u32 m_ = (u32)(eax + 0x90u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006047de fild dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)(s32)M32(m_)); }
  /* 006047e2 fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006047e8 fstp dword ptr [eax + 0x94] */ { const u32 m_ = (u32)(eax + 0x94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006047ee fild dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)(s32)M32(m_)); }
  /* 006047f2 fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006047f8 fstp dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006047fe fild dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)(s32)M32(m_)); }
  /* 00604802 fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604808 fstp dword ptr [eax + 0x9c] */ { const u32 m_ = (u32)(eax + 0x9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0060480e mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_00604811:;
  /* 00604811 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604820(CPU *c) {
  NATIVE_HOOK(0x604820u) REGS; LOADALL;
L_00604820:;
  /* 00604820 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00604824 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604827 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604829 je 0x6048a4 */ if (ZF_) goto L_006048a4;
  /* 0060482b mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0060482f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604831 je 0x6048a4 */ if (ZF_) goto L_006048a4;
  /* 00604833 fld qword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH(MF64(m_)); }
  /* 00604837 fst dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); }
  /* 0060483b fstp dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0060483e fld qword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH(MF64(m_)); }
  /* 00604842 fmul qword ptr [0x63d1e0] */ { const u32 m_ = (u32)(0x63d1e0u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00604848 fadd qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 0060484e fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00604852 fnstcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); M16(m_) = (u16)c->fcw; }
  /* 00604856 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0060485a mov ax, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0060485f or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604862 mov word ptr [esp + 0xc], ax */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00604867 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0060486b fistp dword ptr [esp] */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0060486f fldcw word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604873 mov eax, dword ptr [esp] */ { const u32 m_ = (u32)(esp); eax = (u32)(M32(m_)); }
  /* 00604877 fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0060487b fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00604881 mov dword ptr [ecx + 0xfc], eax */ { const u32 m_ = (u32)(ecx + 0xfcu); M32(m_) = (u32)(eax); }
  /* 00604887 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060488a or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0060488c mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0060488f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00604891 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00604894 jp 0x6048a4 */ if (PF_) goto L_006048a4;
  /* 00604896 push 0x6814c8 */ { u32 v_ = 0x6814c8u; esp -= 4; M32(esp) = v_; }
  /* 0060489b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060489c call 0x605c40 */ esp -= 4; M32(esp) = 0x6048a1u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x60489cu); RETCHK(0x6048a1u, 0x60489cu); LOADALL;
  /* 006048a1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006048a4:;
  /* 006048a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006048a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006048b0(CPU *c) {
  NATIVE_HOOK(0x6048b0u) REGS; LOADALL;
L_006048b0:;
  /* 006048b0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 006048b4 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006048b6 je 0x6048f4 */ if (ZF_) goto L_006048f4;
  /* 006048b8 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006048bc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006048be je 0x6048f4 */ if (ZF_) goto L_006048f4;
  /* 006048c0 fild dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 006048c4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006048c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006048c9 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 006048cc mov dword ptr [eax + 0xfc], ecx */ { const u32 m_ = (u32)(eax + 0xfcu); M32(m_) = (u32)(ecx); }
  /* 006048d2 fmul qword ptr [0x63d1e8] */ { const u32 m_ = (u32)(0x63d1e8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 006048d8 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 006048db or esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 006048de mov dword ptr [eax + 8], esi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(esi); }
  /* 006048e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006048e2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006048e4 jne 0x6048f4 */ if (!ZF_) goto L_006048f4;
  /* 006048e6 push 0x6814c8 */ { u32 v_ = 0x6814c8u; esp -= 4; M32(esp) = v_; }
  /* 006048eb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006048ec call 0x605c40 */ esp -= 4; M32(esp) = 0x6048f1u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x6048ecu); RETCHK(0x6048f1u, 0x6048ecu); LOADALL;
  /* 006048f1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006048f4:;
  /* 006048f4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604900(CPU *c) {
  NATIVE_HOOK(0x604900u) REGS; LOADALL;
L_00604900:;
  /* 00604900 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604901 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604902 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00604906 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604908 je 0x60499c */ if (ZF_) goto L_0060499c;
  /* 0060490e mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00604912 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604914 je 0x60499c */ if (ZF_) goto L_0060499c;
  /* 0060491a cmp word ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0060491f jne 0x604932 */ if (!ZF_) goto L_00604932;
  /* 00604921 push 0x6814d8 */ { u32 v_ = 0x6814d8u; esp -= 4; M32(esp) = v_; }
  /* 00604926 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604927 call 0x605c40 */ esp -= 4; M32(esp) = 0x60492cu; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x604927u); RETCHK(0x60492cu, 0x604927u); LOADALL;
  /* 0060492c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060492f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604930 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604931 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00604932:;
  /* 00604932 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00604934 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00604936 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604937 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604938 call 0x6057b0 */ esp -= 4; M32(esp) = 0x60493du; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x604938u); RETCHK(0x60493du, 0x604938u); LOADALL;
  /* 0060493d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060493f mov ax, word ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00604943 add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00604945 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00604946 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604947 call 0x60f270 */ esp -= 4; M32(esp) = 0x60494cu; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x604947u); RETCHK(0x60494cu, 0x604947u); LOADALL;
  /* 0060494c mov dword ptr [edi + 0x1a8], eax */ { const u32 m_ = (u32)(edi + 0x1a8u); M32(m_) = (u32)(eax); }
  /* 00604952 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00604954 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604957 cmp word ptr [esi + 0x14], ax */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0060495b jbe 0x60497c */ if ((CF_|ZF_)) goto L_0060497c;
  /* 0060495d mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00604961 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_00604962:;
  /* 00604962 mov edx, dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); edx = (u32)(M32(m_)); }
  /* 00604968 mov bx, word ptr [ecx + eax*2] */ { const u32 m_ = (u32)(ecx + eax * 2u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0060496c mov word ptr [edx + eax*2], bx */ { const u32 m_ = (u32)(edx + eax * 2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00604970 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00604972 mov dx, word ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00604976 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604977 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604979 jl 0x604962 */ if (LT_) goto L_00604962;
  /* 0060497b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0060497c:;
  /* 0060497c mov eax, dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); eax = (u32)(M32(m_)); }
  /* 00604982 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00604985 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 00604988 mov eax, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); eax = (u32)(M32(m_)); }
  /* 0060498e or ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604991 or al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604993 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00604996 mov dword ptr [esi + 0xb8], eax */ { const u32 m_ = (u32)(esi + 0xb8u); M32(m_) = (u32)(eax); }
L_0060499c:;
  /* 0060499c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060499d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060499e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006049a0(CPU *c) {
  NATIVE_HOOK(0x6049a0u) REGS; LOADALL;
L_006049a0:;
  /* 006049a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006049a1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 006049a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006049a6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006049a7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006049a9 je 0x604b6c */ if (ZF_) goto L_00604b6c;
  /* 006049af mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 006049b3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006049b5 je 0x604b6c */ if (ZF_) goto L_00604b6c;
  /* 006049bb mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 006049bf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006049c0 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 006049c4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006049c6 je 0x6049cc */ if (ZF_) goto L_006049cc;
  /* 006049c8 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006049ca jne 0x6049da */ if (!ZF_) goto L_006049da;
L_006049cc:;
  /* 006049cc push 0x681634 */ { u32 v_ = 0x681634u; esp -= 4; M32(esp) = v_; }
  /* 006049d1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006049d2 call 0x605c20 */ esp -= 4; M32(esp) = 0x6049d7u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x6049d2u); RETCHK(0x6049d7u, 0x6049d2u); LOADALL;
  /* 006049d7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006049da:;
  /* 006049da cmp edi, 0x7fffffff */ { u32 a_ = edi, b_ = 0x7fffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006049e0 ja 0x6049ea */ if (!(CF_|ZF_)) goto L_006049ea;
  /* 006049e2 cmp ebp, 0x7fffffff */ { u32 a_ = ebp, b_ = 0x7fffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006049e8 jbe 0x6049f8 */ if ((CF_|ZF_)) goto L_006049f8;
L_006049ea:;
  /* 006049ea push 0x681618 */ { u32 v_ = 0x681618u; esp -= 4; M32(esp) = v_; }
  /* 006049ef push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006049f0 call 0x605c20 */ esp -= 4; M32(esp) = 0x6049f5u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x6049f0u); RETCHK(0x6049f5u, 0x6049f0u); LOADALL;
  /* 006049f5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006049f8:;
  /* 006049f8 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 006049fc cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006049ff je 0x604a27 */ if (ZF_) goto L_00604a27;
  /* 00604a01 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a04 je 0x604a27 */ if (ZF_) goto L_00604a27;
  /* 00604a06 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a09 je 0x604a27 */ if (ZF_) goto L_00604a27;
  /* 00604a0b cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a0e je 0x604a27 */ if (ZF_) goto L_00604a27;
  /* 00604a10 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a13 je 0x604a27 */ if (ZF_) goto L_00604a27;
  /* 00604a15 push 0x6815fc */ { u32 v_ = 0x6815fcu; esp -= 4; M32(esp) = v_; }
  /* 00604a1a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604a1b call 0x605c20 */ esp -= 4; M32(esp) = 0x604a20u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x604a1bu); RETCHK(0x604a20u, 0x604a1bu); LOADALL;
  /* 00604a20 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00604a24 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00604a27:;
  /* 00604a27 mov ebx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebx = (u32)(M32(m_)); }
  /* 00604a2b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604a2d jl 0x604a3e */ if (LT_) goto L_00604a3e;
  /* 00604a2f cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a32 je 0x604a3e */ if (ZF_) goto L_00604a3e;
  /* 00604a34 cmp ebx, 5 */ { u32 a_ = ebx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a37 je 0x604a3e */ if (ZF_) goto L_00604a3e;
  /* 00604a39 cmp ebx, 6 */ { u32 a_ = ebx, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a3c jle 0x604a54 */ if ((ZF_|LT_)) goto L_00604a54;
L_00604a3e:;
  /* 00604a3e mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00604a42 push 0x6815e0 */ { u32 v_ = 0x6815e0u; esp -= 4; M32(esp) = v_; }
  /* 00604a47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00604a48 call 0x605c20 */ esp -= 4; M32(esp) = 0x604a4du; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x604a48u); RETCHK(0x604a4du, 0x604a48u); LOADALL;
  /* 00604a4d mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00604a51 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00604a54:;
  /* 00604a54 cmp ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a57 jne 0x604a60 */ if (!ZF_) goto L_00604a60;
  /* 00604a59 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a5c jg 0x604a74 */ if (!(ZF_|LT_)) goto L_00604a74;
  /* 00604a5e jmp 0x604a8a */ goto L_00604a8a;
L_00604a60:;
  /* 00604a60 cmp ebx, 2 */ { u32 a_ = ebx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a63 je 0x604a6f */ if (ZF_) goto L_00604a6f;
  /* 00604a65 cmp ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a68 je 0x604a6f */ if (ZF_) goto L_00604a6f;
  /* 00604a6a cmp ebx, 6 */ { u32 a_ = ebx, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a6d jne 0x604a8a */ if (!ZF_) goto L_00604a8a;
L_00604a6f:;
  /* 00604a6f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a72 jge 0x604a8a */ if (!LT_) goto L_00604a8a;
L_00604a74:;
  /* 00604a74 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00604a78 push 0x6815ac */ { u32 v_ = 0x6815acu; esp -= 4; M32(esp) = v_; }
  /* 00604a7d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00604a7e call 0x605c20 */ esp -= 4; M32(esp) = 0x604a83u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x604a7eu); RETCHK(0x604a83u, 0x604a7eu); LOADALL;
  /* 00604a83 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00604a87 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00604a8a:;
  /* 00604a8a cmp dword ptr [esp + 0x2c], 2 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604a8f jl 0x604aa7 */ if (LT_) goto L_00604aa7;
  /* 00604a91 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00604a95 push 0x681588 */ { u32 v_ = 0x681588u; esp -= 4; M32(esp) = v_; }
  /* 00604a9a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00604a9b call 0x605c20 */ esp -= 4; M32(esp) = 0x604aa0u; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x604a9bu); RETCHK(0x604aa0u, 0x604a9bu); LOADALL;
  /* 00604aa0 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00604aa4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00604aa7:;
  /* 00604aa7 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 00604aab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604aad je 0x604ac5 */ if (ZF_) goto L_00604ac5;
  /* 00604aaf mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00604ab3 push 0x681564 */ { u32 v_ = 0x681564u; esp -= 4; M32(esp) = v_; }
  /* 00604ab8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00604ab9 call 0x605c20 */ esp -= 4; M32(esp) = 0x604abeu; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x604ab9u); RETCHK(0x604abeu, 0x604ab9u); LOADALL;
  /* 00604abe mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00604ac2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00604ac5:;
  /* 00604ac5 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 00604ac9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604acb je 0x604ae3 */ if (ZF_) goto L_00604ae3;
  /* 00604acd mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00604ad1 push 0x681544 */ { u32 v_ = 0x681544u; esp -= 4; M32(esp) = v_; }
  /* 00604ad6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00604ad7 call 0x605c20 */ esp -= 4; M32(esp) = 0x604adcu; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x604ad7u); RETCHK(0x604adcu, 0x604ad7u); LOADALL;
  /* 00604adc mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00604ae0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00604ae3:;
  /* 00604ae3 mov dl, byte ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604ae7 mov al, byte ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604aeb mov byte ptr [esi + 0x1a], dl */ { const u32 m_ = (u32)(esi + 0x1au); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604aee mov dl, byte ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604af2 mov dword ptr [esi + 4], ebp */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebp); }
  /* 00604af5 cmp bl, 3 */ { u32 a_ = (ebx & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00604af8 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00604afa mov byte ptr [esi + 0x18], cl */ { const u32 m_ = (u32)(esi + 0x18u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604afd mov byte ptr [esi + 0x19], bl */ { const u32 m_ = (u32)(esi + 0x19u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00604b00 mov byte ptr [esi + 0x1b], al */ { const u32 m_ = (u32)(esi + 0x1bu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00604b03 mov byte ptr [esi + 0x1c], dl */ { const u32 m_ = (u32)(esi + 0x1cu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604b06 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00604b07 je 0x604b14 */ if (ZF_) goto L_00604b14;
  /* 00604b09 test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00604b0c je 0x604b14 */ if (ZF_) goto L_00604b14;
  /* 00604b0e mov byte ptr [esi + 0x1d], 3 */ { const u32 m_ = (u32)(esi + 0x1du); M8(m_) = (u8)(0x3u); }
  /* 00604b12 jmp 0x604b18 */ goto L_00604b18;
L_00604b14:;
  /* 00604b14 mov byte ptr [esi + 0x1d], 1 */ { const u32 m_ = (u32)(esi + 0x1du); M8(m_) = (u8)(0x1u); }
L_00604b18:;
  /* 00604b18 test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00604b1b je 0x604b20 */ if (ZF_) goto L_00604b20;
  /* 00604b1d inc byte ptr [esi + 0x1d] */ { const u32 m_ = (u32)(esi + 0x1du); u32 a_ = M8(m_); u32 r_ = (a_ + 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_INC, a_, 1, r_, 1); }
L_00604b20:;
  /* 00604b20 mov al, byte ptr [esi + 0x1d] */ { const u32 m_ = (u32)(esi + 0x1du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604b23 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00604b25 imul cl */ { s32 p_ = (s32)(s8)eax * (s8)(ecx & 0xffu); eax = (eax & 0xffff0000u) | ((u32)(p_) & 0xffffu); u32 of_ = p_ != (s32)(s8)p_; SETF(OP_RES, of_, 0, (u32)p_ & 0xffu, 1); SETC(OP_RAW, of_, 0, 0, 1); }
  /* 00604b27 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00604b29 mov byte ptr [esi + 0x1e], al */ { const u32 m_ = (u32)(esi + 0x1eu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00604b2c and ecx, 0xff */ { u32 a_ = ecx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604b32 mov eax, 0x7fffffff */ { eax = (u32)(0x7fffffffu); }
  /* 00604b37 lea ebx, [ecx + 7] */ ebx = (u32)((u32)(ecx + 0x7u));
  /* 00604b3a sar ebx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00604b3d div ebx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ebx, &q_, &r_, 0x604b3du); eax = q_; edx = r_; }
  /* 00604b3f cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604b41 jbe 0x604b60 */ if ((CF_|ZF_)) goto L_00604b60;
  /* 00604b43 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00604b47 push 0x681504 */ { u32 v_ = 0x681504u; esp -= 4; M32(esp) = v_; }
  /* 00604b4c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00604b4d call 0x605c40 */ esp -= 4; M32(esp) = 0x604b52u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x604b4du); RETCHK(0x604b52u, 0x604b4du); LOADALL;
  /* 00604b52 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604b55 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 00604b5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604b5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604b5e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00604b5f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00604b60:;
  /* 00604b60 imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00604b63 add ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00604b66 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00604b69 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
L_00604b6c:;
  /* 00604b6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604b6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604b6e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00604b6f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604b70(CPU *c) {
  NATIVE_HOOK(0x604b70u) REGS; LOADALL;
L_00604b70:;
  /* 00604b70 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604b74 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604b76 je 0x604b9e */ if (ZF_) goto L_00604b9e;
  /* 00604b78 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604b7c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604b7e je 0x604b9e */ if (ZF_) goto L_00604b9e;
  /* 00604b80 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00604b84 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00604b88 mov dword ptr [eax + 0x64], ecx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ecx); }
  /* 00604b8b mov cl, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604b8f mov byte ptr [eax + 0x6c], cl */ { const u32 m_ = (u32)(eax + 0x6cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604b92 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00604b95 or ch, 1 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604b98 mov dword ptr [eax + 0x68], edx */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(edx); }
  /* 00604b9b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_00604b9e:;
  /* 00604b9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604ba0(CPU *c) {
  NATIVE_HOOK(0x604ba0u) REGS; LOADALL;
L_00604ba0:;
  /* 00604ba0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604ba1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00604ba5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604ba7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00604ba8 je 0x604ce3 */ if (ZF_) goto L_00604ce3;
  /* 00604bae mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 00604bb2 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604bb4 je 0x604ce3 */ if (ZF_) goto L_00604ce3;
  /* 00604bba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604bbb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604bbc mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 00604bc0 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604bc3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00604bc5 repne scasb al, byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = (eax & 0xffu), b_ = M8(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (ZF_) break; } }
  /* 00604bc7 not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 00604bc9 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00604bca mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00604bcc inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604bcd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604bce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604bcf call 0x60f270 */ esp -= 4; M32(esp) = 0x604bd4u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x604bcfu); RETCHK(0x604bd4u, 0x604bcfu); LOADALL;
  /* 00604bd4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00604bd6 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 00604bda mov dword ptr [ebp + 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xa0u); M32(m_) = (u32)(eax); }
  /* 00604be0 mov edi, eax */ { edi = (u32)(eax); }
  /* 00604be2 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00604be4 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00604be8 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00604beb rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604bed mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00604bef mov al, byte ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604bf3 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604bf6 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604bf8 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00604bfc mov edi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edi = (u32)(M32(m_)); }
  /* 00604c00 mov dword ptr [ebp + 0xa4], ecx */ { const u32 m_ = (u32)(ebp + 0xa4u); M32(m_) = (u32)(ecx); }
  /* 00604c06 mov cl, byte ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604c0a mov byte ptr [ebp + 0xb4], al */ { const u32 m_ = (u32)(ebp + 0xb4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00604c10 mov byte ptr [ebp + 0xb5], cl */ { const u32 m_ = (u32)(ebp + 0xb5u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604c16 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604c19 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00604c1b mov dword ptr [ebp + 0xa8], edx */ { const u32 m_ = (u32)(ebp + 0xa8u); M32(m_) = (u32)(edx); }
  /* 00604c21 repne scasb al, byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = (eax & 0xffu), b_ = M8(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (ZF_) break; } }
  /* 00604c23 not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 00604c25 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00604c26 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00604c28 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604c29 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604c2a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604c2b call 0x60f270 */ esp -= 4; M32(esp) = 0x604c30u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x604c2bu); RETCHK(0x604c30u, 0x604c2bu); LOADALL;
  /* 00604c30 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00604c32 mov esi, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); esi = (u32)(M32(m_)); }
  /* 00604c36 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00604c38 mov edi, eax */ { edi = (u32)(eax); }
  /* 00604c3a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00604c3d mov dword ptr [ebp + 0xac], eax */ { const u32 m_ = (u32)(ebp + 0xacu); M32(m_) = (u32)(eax); }
  /* 00604c43 mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 00604c47 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604c49 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00604c4b and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604c4e rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604c50 lea ecx, [eax*4 + 4] */ ecx = (u32)((u32)(eax * 4u + 0x4u));
  /* 00604c57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00604c58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604c59 call 0x60f270 */ esp -= 4; M32(esp) = 0x604c5eu; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x604c59u); RETCHK(0x604c5eu, 0x604c59u); LOADALL;
  /* 00604c5e mov edx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); edx = (u32)(M32(m_)); }
  /* 00604c62 mov dword ptr [ebp + 0xb0], eax */ { const u32 m_ = (u32)(ebp + 0xb0u); M32(m_) = (u32)(eax); }
  /* 00604c68 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604c6b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00604c6d mov dword ptr [eax + edx*4], 0 */ { const u32 m_ = (u32)(eax + edx * 4u); M32(m_) = (u32)(0x0u); }
  /* 00604c74 mov eax, edx */ { eax = (u32)(edx); }
  /* 00604c76 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604c78 jle 0x604cca */ if ((ZF_|LT_)) goto L_00604cca;
L_00604c7a:;
  /* 00604c7a mov esi, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); esi = (u32)(M32(m_)); }
  /* 00604c7e or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604c81 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00604c83 mov edi, dword ptr [esi + ebx*4] */ { const u32 m_ = (u32)(esi + ebx * 4u); edi = (u32)(M32(m_)); }
  /* 00604c86 repne scasb al, byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = (eax & 0xffu), b_ = M8(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (ZF_) break; } }
  /* 00604c88 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00604c8c not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 00604c8e dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00604c8f mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00604c91 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604c92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604c93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00604c94 call 0x60f270 */ esp -= 4; M32(esp) = 0x604c99u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x604c94u); RETCHK(0x604c99u, 0x604c94u); LOADALL;
  /* 00604c99 mov ecx, dword ptr [ebp + 0xb0] */ { const u32 m_ = (u32)(ebp + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 00604c9f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604ca2 mov dword ptr [ecx + ebx*4], eax */ { const u32 m_ = (u32)(ecx + ebx * 4u); M32(m_) = (u32)(eax); }
  /* 00604ca5 mov edx, dword ptr [ebp + 0xb0] */ { const u32 m_ = (u32)(ebp + 0xb0u); edx = (u32)(M32(m_)); }
  /* 00604cab mov esi, dword ptr [esi + ebx*4] */ { const u32 m_ = (u32)(esi + ebx * 4u); esi = (u32)(M32(m_)); }
  /* 00604cae mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00604cb0 mov edi, dword ptr [edx + ebx*4] */ { const u32 m_ = (u32)(edx + ebx * 4u); edi = (u32)(M32(m_)); }
  /* 00604cb3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00604cb5 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00604cb8 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604cba mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00604cbc mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00604cc0 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604cc3 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604cc4 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00604cc6 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604cc8 jl 0x604c7a */ if (LT_) goto L_00604c7a;
L_00604cca:;
  /* 00604cca mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00604ccd mov eax, dword ptr [ebp + 0xb8] */ { const u32 m_ = (u32)(ebp + 0xb8u); eax = (u32)(M32(m_)); }
  /* 00604cd3 or ch, 4 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604cd6 or al, 0x80 */ { u32 a_ = (eax & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604cd8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604cd9 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00604cdc mov dword ptr [ebp + 0xb8], eax */ { const u32 m_ = (u32)(ebp + 0xb8u); M32(m_) = (u32)(eax); }
  /* 00604ce2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00604ce3:;
  /* 00604ce3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00604ce4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00604ce5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604cf0(CPU *c) {
  NATIVE_HOOK(0x604cf0u) REGS; LOADALL;
L_00604cf0:;
  /* 00604cf0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604cf4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604cf6 je 0x604d3b */ if (ZF_) goto L_00604d3b;
  /* 00604cf8 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604cfc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604cfe je 0x604d3b */ if (ZF_) goto L_00604d3b;
  /* 00604d00 mov cl, byte ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604d04 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00604d08 mov byte ptr [eax + 0xdc], cl */ { const u32 m_ = (u32)(eax + 0xdcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604d0e mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00604d12 mov dword ptr [eax + 0xe4], ecx */ { const u32 m_ = (u32)(eax + 0xe4u); M32(m_) = (u32)(ecx); }
  /* 00604d18 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00604d1c mov dword ptr [eax + 0xec], ecx */ { const u32 m_ = (u32)(eax + 0xecu); M32(m_) = (u32)(ecx); }
  /* 00604d22 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00604d25 mov dword ptr [eax + 0xe0], edx */ { const u32 m_ = (u32)(eax + 0xe0u); M32(m_) = (u32)(edx); }
  /* 00604d2b mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00604d2f or ch, 0x40 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604d32 mov dword ptr [eax + 0xe8], edx */ { const u32 m_ = (u32)(eax + 0xe8u); M32(m_) = (u32)(edx); }
  /* 00604d38 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_00604d3b:;
  /* 00604d3b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604d40(CPU *c) {
  NATIVE_HOOK(0x604d40u) REGS; LOADALL;
L_00604d40:;
  /* 00604d40 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604d44 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604d46 je 0x604d6e */ if (ZF_) goto L_00604d6e;
  /* 00604d48 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604d4c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604d4e je 0x604d6e */ if (ZF_) goto L_00604d6e;
  /* 00604d50 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00604d54 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00604d58 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 00604d5b mov cl, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604d5f mov byte ptr [eax + 0x78], cl */ { const u32 m_ = (u32)(eax + 0x78u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604d62 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00604d65 or cl, 0x80 */ { u32 a_ = (ecx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604d68 mov dword ptr [eax + 0x74], edx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(edx); }
  /* 00604d6b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_00604d6e:;
  /* 00604d6e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604d41(CPU *c) {
  NATIVE_HOOK(0x604d41u) REGS; LOADALL;
L_00604d41:;
  /* 00604d41 inc esp */ { u32 a_ = esp; u32 r_ = (a_ + 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604d42 and al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604d44 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604d46 je 0x604d6e */ if (ZF_) goto L_00604d6e;
  /* 00604d48 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604d4c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604d4e je 0x604d6e */ if (ZF_) goto L_00604d6e;
  /* 00604d50 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00604d54 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00604d58 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 00604d5b mov cl, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604d5f mov byte ptr [eax + 0x78], cl */ { const u32 m_ = (u32)(eax + 0x78u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604d62 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00604d65 or cl, 0x80 */ { u32 a_ = (ecx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604d68 mov dword ptr [eax + 0x74], edx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(edx); }
  /* 00604d6b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_00604d6e:;
  /* 00604d6e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604d70(CPU *c) {
  NATIVE_HOOK(0x604d70u) REGS; LOADALL;
L_00604d70:;
  /* 00604d70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604d71 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00604d72 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 00604d76 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604d78 je 0x604df0 */ if (ZF_) goto L_00604df0;
  /* 00604d7a mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00604d7e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604d80 je 0x604df0 */ if (ZF_) goto L_00604df0;
  /* 00604d82 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604d83 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604d84 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00604d86 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 00604d8b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604d8c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00604d8d call 0x6057b0 */ esp -= 4; M32(esp) = 0x604d92u; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x604d8du); RETCHK(0x604d92u, 0x604d8du); LOADALL;
  /* 00604d92 mov esi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); esi = (u32)(M32(m_)); }
  /* 00604d96 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00604d98 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604d99 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00604d9a call 0x605690 */ esp -= 4; M32(esp) = 0x604d9fu; SAVEALL; F_00605690(c); ABI_CHECK(0x605690u, 0x604d9au); RETCHK(0x604d9fu, 0x604d9au); LOADALL;
  /* 00604d9f lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 00604da2 mov esi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); esi = (u32)(M32(m_)); }
  /* 00604da6 mov dword ptr [ebp + 0x114], eax */ { const u32 m_ = (u32)(ebp + 0x114u); M32(m_) = (u32)(eax); }
  /* 00604dac mov edi, eax */ { edi = (u32)(eax); }
  /* 00604dae mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00604db0 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604db3 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00604db6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604db8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00604dba mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00604dbe and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604dc1 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604dc3 mov ecx, dword ptr [ebp + 0x114] */ { const u32 m_ = (u32)(ebp + 0x114u); ecx = (u32)(M32(m_)); }
  /* 00604dc9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604dca mov dword ptr [ebx + 0x10], ecx */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00604dcd mov word ptr [ebp + 0x118], ax */ { const u32 m_ = (u32)(ebp + 0x118u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00604dd4 mov ecx, dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); ecx = (u32)(M32(m_)); }
  /* 00604dda mov word ptr [ebx + 0x14], ax */ { const u32 m_ = (u32)(ebx + 0x14u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00604dde mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604de1 or ch, 0x10 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604de4 or al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604de6 mov dword ptr [ebx + 0xb8], ecx */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(ecx); }
  /* 00604dec mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00604def pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00604df0:;
  /* 00604df0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00604df1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00604df2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604e00(CPU *c) {
  NATIVE_HOOK(0x604e00u) REGS; LOADALL;
L_00604e00:;
  /* 00604e00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00604e04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604e06 je 0x604e2c */ if (ZF_) goto L_00604e2c;
  /* 00604e08 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604e0c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604e0e je 0x604e2c */ if (ZF_) goto L_00604e2c;
  /* 00604e10 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00604e14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604e15 lea ecx, [eax + 0x44] */ ecx = (u32)((u32)(eax + 0x44u));
  /* 00604e18 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00604e1a mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00604e1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604e1d mov dl, byte ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604e20 mov byte ptr [ecx + 4], dl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00604e23 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00604e26 or ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604e29 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_00604e2c:;
  /* 00604e2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604e30(CPU *c) {
  NATIVE_HOOK(0x604e30u) REGS; LOADALL;
L_00604e30:;
  /* 00604e30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00604e31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00604e33 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 00604e36 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604e39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604e3a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604e3b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00604e3e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604e40 je 0x604f2c */ if (ZF_) goto L_00604f2c;
  /* 00604e46 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00604e49 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604e4b je 0x604f2c */ if (ZF_) goto L_00604f2c;
  /* 00604e51 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00604e54 mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604e57 or ch, 8 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604e5a mov byte ptr [esi + 0x2c], al */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00604e5d mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00604e60 mov ecx, 0x3ee8bac7 */ { ecx = (u32)(0x3ee8bac7u); }
  /* 00604e65 mov dword ptr [esi + 0x28], ecx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ecx); }
  /* 00604e68 mov dword ptr [esp + 0x10], 0x47318f80 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x47318f80u); }
  /* 00604e70 fnstcw word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); M16(m_) = (u16)c->fcw; }
  /* 00604e74 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00604e78 mov ax, word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00604e7d or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604e80 mov word ptr [esp + 0xc], ax */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00604e85 fldcw word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604e89 fistp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 00604e8d fldcw word ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); c->fcw = M16(m_); rt_fldcw(c); }
  /* 00604e91 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604e94 push 0x1770 */ { u32 v_ = 0x1770u; esp -= 4; M32(esp) = v_; }
  /* 00604e99 push 0x3a98 */ { u32 v_ = 0x3a98u; esp -= 4; M32(esp) = v_; }
  /* 00604e9e push 0xea60 */ { u32 v_ = 0xea60u; esp -= 4; M32(esp) = v_; }
  /* 00604ea3 push 0x7530 */ { u32 v_ = 0x7530u; esp -= 4; M32(esp) = v_; }
  /* 00604ea8 push 0x80e8 */ { u32 v_ = 0x80e8u; esp -= 4; M32(esp) = v_; }
  /* 00604ead push 0xfa00 */ { u32 v_ = 0xfa00u; esp -= 4; M32(esp) = v_; }
  /* 00604eb2 push 0x8084 */ { u32 v_ = 0x8084u; esp -= 4; M32(esp) = v_; }
  /* 00604eb7 push 0x7a26 */ { u32 v_ = 0x7a26u; esp -= 4; M32(esp) = v_; }
  /* 00604ebc or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00604ebe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604ebf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604ec0 mov dword ptr [esi + 0x28], ecx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ecx); }
  /* 00604ec3 mov dword ptr [esi + 0xfc], 0xb18f */ { const u32 m_ = (u32)(esi + 0xfcu); M32(m_) = (u32)(0xb18fu); }
  /* 00604ecd mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00604ed0 call 0x604720 */ esp -= 4; M32(esp) = 0x604ed5u; SAVEALL; F_00604720(c); ABI_CHECK(0x604720u, 0x604ed0u); RETCHK(0x604ed5u, 0x604ed0u); LOADALL;
  /* 00604ed5 push 0x3faeb851 */ { u32 v_ = 0x3faeb851u; esp -= 4; M32(esp) = v_; }
  /* 00604eda push 0xe0000000 */ { u32 v_ = 0xe0000000u; esp -= 4; M32(esp) = v_; }
  /* 00604edf push 0x3fc33333 */ { u32 v_ = 0x3fc33333u; esp -= 4; M32(esp) = v_; }
  /* 00604ee4 push 0x40000000 */ { u32 v_ = 0x40000000u; esp -= 4; M32(esp) = v_; }
  /* 00604ee9 push 0x3fe33333 */ { u32 v_ = 0x3fe33333u; esp -= 4; M32(esp) = v_; }
  /* 00604eee push 0x40000000 */ { u32 v_ = 0x40000000u; esp -= 4; M32(esp) = v_; }
  /* 00604ef3 push 0x3fd33333 */ { u32 v_ = 0x3fd33333u; esp -= 4; M32(esp) = v_; }
  /* 00604ef8 push 0x40000000 */ { u32 v_ = 0x40000000u; esp -= 4; M32(esp) = v_; }
  /* 00604efd push 0x3fd51eb8 */ { u32 v_ = 0x3fd51eb8u; esp -= 4; M32(esp) = v_; }
  /* 00604f02 push 0x60000000 */ { u32 v_ = 0x60000000u; esp -= 4; M32(esp) = v_; }
  /* 00604f07 push 0x3fe47ae1 */ { u32 v_ = 0x3fe47ae1u; esp -= 4; M32(esp) = v_; }
  /* 00604f0c push 0x40000000 */ { u32 v_ = 0x40000000u; esp -= 4; M32(esp) = v_; }
  /* 00604f11 push 0x3fd50e56 */ { u32 v_ = 0x3fd50e56u; esp -= 4; M32(esp) = v_; }
  /* 00604f16 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00604f18 push 0x3fd40346 */ { u32 v_ = 0x3fd40346u; esp -= 4; M32(esp) = v_; }
  /* 00604f1d push 0xe0000000 */ { u32 v_ = 0xe0000000u; esp -= 4; M32(esp) = v_; }
  /* 00604f22 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604f23 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604f24 call 0x6044b0 */ esp -= 4; M32(esp) = 0x604f29u; SAVEALL; F_006044b0(c); ABI_CHECK(0x6044b0u, 0x604f24u); RETCHK(0x604f29u, 0x604f24u); LOADALL;
  /* 00604f29 add esp, 0x70 */ { u32 a_ = esp, b_ = 0x70u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00604f2c:;
  /* 00604f2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00604f2d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00604f2e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00604f30 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00604f31 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00604f40(CPU *c) {
  NATIVE_HOOK(0x604f40u) REGS; LOADALL;
L_00604f40:;
  /* 00604f40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604f41 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00604f42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604f43 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00604f47 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604f49 je 0x605011 */ if (ZF_) goto L_00605011;
  /* 00604f4f mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 00604f53 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604f55 je 0x605011 */ if (ZF_) goto L_00605011;
  /* 00604f5b mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 00604f5f test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604f61 je 0x605011 */ if (ZF_) goto L_00605011;
  /* 00604f67 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00604f6b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00604f6d je 0x605011 */ if (ZF_) goto L_00605011;
  /* 00604f73 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00604f74 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 00604f76 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604f79 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00604f7b repne scasb al, byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = (eax & 0xffu), b_ = M8(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (ZF_) break; } }
  /* 00604f7d not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 00604f7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00604f80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604f81 call 0x60f270 */ esp -= 4; M32(esp) = 0x604f86u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x604f81u); RETCHK(0x604f86u, 0x604f81u); LOADALL;
  /* 00604f86 mov edx, eax */ { edx = (u32)(eax); }
  /* 00604f88 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604f8b mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 00604f8f mov eax, ebp */ { eax = (u32)(ebp); }
  /* 00604f91 sub edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_00604f93:;
  /* 00604f93 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604f95 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604f98 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00604f99 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00604f9b jne 0x604f93 */ if (!ZF_) goto L_00604f93;
  /* 00604f9d mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 00604fa1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00604fa2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00604fa3 call 0x60f270 */ esp -= 4; M32(esp) = 0x604fa8u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x604fa3u); RETCHK(0x604fa8u, 0x604fa3u); LOADALL;
  /* 00604fa8 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 00604fac mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 00604fae mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 00604fb2 mov edi, eax */ { edi = (u32)(eax); }
  /* 00604fb4 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00604fb6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00604fb8 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00604fbb rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604fbd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00604fbf push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00604fc1 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604fc4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00604fc5 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00604fc7 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00604fcb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00604fcc call 0x6057b0 */ esp -= 4; M32(esp) = 0x604fd1u; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x604fccu); RETCHK(0x604fd1u, 0x604fccu); LOADALL;
  /* 00604fd1 mov cl, byte ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00604fd5 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 00604fd9 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 00604fdd mov byte ptr [ebx + 0xd0], cl */ { const u32 m_ = (u32)(ebx + 0xd0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00604fe3 mov ecx, dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); ecx = (u32)(M32(m_)); }
  /* 00604fe9 mov dword ptr [ebx + 0xc8], eax */ { const u32 m_ = (u32)(ebx + 0xc8u); M32(m_) = (u32)(eax); }
  /* 00604fef mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00604ff2 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00604ff5 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00604ff8 or ah, 0x10 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00604ffb mov dword ptr [ebx + 0xcc], ebp */ { const u32 m_ = (u32)(ebx + 0xccu); M32(m_) = (u32)(ebp); }
  /* 00605001 mov dword ptr [ebx + 0xc4], edx */ { const u32 m_ = (u32)(ebx + 0xc4u); M32(m_) = (u32)(edx); }
  /* 00605007 mov dword ptr [ebx + 0xb8], ecx */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(ecx); }
  /* 0060500d mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00605010 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00605011:;
  /* 00605011 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605012 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00605013 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00605014 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605020(CPU *c) {
  NATIVE_HOOK(0x605020u) REGS; LOADALL;
L_00605020:;
  /* 00605020 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605021 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00605025 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00605026 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00605027 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605028 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060502a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060502b je 0x6051f8 */ if (ZF_) goto L_006051f8;
  /* 00605031 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 00605035 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605037 je 0x6051f8 */ if (ZF_) goto L_006051f8;
  /* 0060503d mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 00605041 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605043 je 0x6051f8 */ if (ZF_) goto L_006051f8;
  /* 00605049 mov eax, dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); eax = (u32)(M32(m_)); }
  /* 0060504c mov esi, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); esi = (u32)(M32(m_)); }
  /* 0060504f add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00605051 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605053 jle 0x6050c8 */ if ((ZF_|LT_)) goto L_006050c8;
  /* 00605055 mov ebx, dword ptr [ebp + 0x38] */ { const u32 m_ = (u32)(ebp + 0x38u); ebx = (u32)(M32(m_)); }
  /* 00605058 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060505a je 0x60509a */ if (ZF_) goto L_0060509a;
  /* 0060505c add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060505f mov dword ptr [ebp + 0x34], eax */ { const u32 m_ = (u32)(ebp + 0x34u); M32(m_) = (u32)(eax); }
  /* 00605062 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00605065 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605066 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605067 call 0x60f270 */ esp -= 4; M32(esp) = 0x60506cu; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x605067u); RETCHK(0x60506cu, 0x605067u); LOADALL;
  /* 0060506c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0060506e mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00605070 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00605073 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00605075 mov edi, eax */ { edi = (u32)(eax); }
  /* 00605077 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0060507a mov dword ptr [ebp + 0x38], eax */ { const u32 m_ = (u32)(ebp + 0x38u); M32(m_) = (u32)(eax); }
  /* 0060507d mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00605081 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00605083 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00605085 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00605086 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605089 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060508a rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0060508c call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605091u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x60508cu); RETCHK(0x605091u, 0x60508cu); LOADALL;
  /* 00605091 mov edi, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edi = (u32)(M32(m_)); }
  /* 00605095 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605098 jmp 0x6050c8 */ goto L_006050c8;
L_0060509a:;
  /* 0060509a lea edx, [edi + 8] */ edx = (u32)((u32)(edi + 0x8u));
  /* 0060509d mov dword ptr [ebp + 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 006050a4 mov eax, edx */ { eax = (u32)(edx); }
  /* 006050a6 mov dword ptr [ebp + 0x34], edx */ { const u32 m_ = (u32)(ebp + 0x34u); M32(m_) = (u32)(edx); }
  /* 006050a9 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 006050ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006050ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006050ae call 0x60f270 */ esp -= 4; M32(esp) = 0x6050b3u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x6050aeu); RETCHK(0x6050b3u, 0x6050aeu); LOADALL;
  /* 006050b3 mov dword ptr [ebp + 0x38], eax */ { const u32 m_ = (u32)(ebp + 0x38u); M32(m_) = (u32)(eax); }
  /* 006050b6 mov eax, dword ptr [ebp + 0xb8] */ { const u32 m_ = (u32)(ebp + 0xb8u); eax = (u32)(M32(m_)); }
  /* 006050bc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006050bf or ah, 0x40 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 006050c2 mov dword ptr [ebp + 0xb8], eax */ { const u32 m_ = (u32)(ebp + 0xb8u); M32(m_) = (u32)(eax); }
L_006050c8:;
  /* 006050c8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006050ca jle 0x6051f8 */ if ((ZF_|LT_)) goto L_006051f8;
  /* 006050d0 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 006050d4 mov dword ptr [esp + 0x10], edi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edi); }
  /* 006050d8 lea esi, [ecx + 8] */ esi = (u32)((u32)(ecx + 0x8u));
  /* 006050db mov dword ptr [esp + 0x24], esi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(esi); }
L_006050df:;
  /* 006050df mov ebx, dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); ebx = (u32)(M32(m_)); }
  /* 006050e2 mov ecx, dword ptr [ebp + 0x38] */ { const u32 m_ = (u32)(ebp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 006050e5 mov edi, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 006050e8 shl ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 006050eb add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 006050ed test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006050ef je 0x6051e2 */ if (ZF_) goto L_006051e2;
  /* 006050f5 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006050f8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006050fa repne scasb al, byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = (eax & 0xffu), b_ = M8(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (ZF_) break; } }
  /* 006050fc mov edx, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 006050ff not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 00605101 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00605102 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00605104 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605106 mov dword ptr [esp + 0x20], edi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(edi); }
  /* 0060510a jg 0x6051d0 */ if (!(ZF_|LT_)) goto L_006051d0;
  /* 00605110 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00605112 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605114 je 0x605131 */ if (ZF_) goto L_00605131;
  /* 00605116 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00605119 je 0x605131 */ if (ZF_) goto L_00605131;
  /* 0060511b mov edi, eax */ { edi = (u32)(eax); }
  /* 0060511d or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605120 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605122 repne scasb al, byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = (eax & 0xffu), b_ = M8(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (ZF_) break; } }
  /* 00605124 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 00605128 mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 0060512a not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 0060512c dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0060512d mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 0060512f jmp 0x605139 */ goto L_00605139;
L_00605131:;
  /* 00605131 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00605133 mov dword ptr [ebx], 0xffffffff */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0xffffffffu); }
L_00605139:;
  /* 00605139 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0060513d lea edx, [edi + ebp + 4] */ edx = (u32)((u32)(edi + ebp + 0x4u));
  /* 00605141 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00605142 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605143 call 0x60f270 */ esp -= 4; M32(esp) = 0x605148u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x605143u); RETCHK(0x605148u, 0x605143u); LOADALL;
  /* 00605148 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0060514a mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0060514d mov esi, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00605150 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00605152 mov edi, eax */ { edi = (u32)(eax); }
  /* 00605154 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00605158 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0060515b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0060515d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0060515f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605162 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605165 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00605167 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0060516a test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060516c mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 00605170 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00605173 lea edi, [edx + eax + 1] */ edi = (u32)((u32)(edx + eax + 0x1u));
  /* 00605177 mov dword ptr [ebx + 8], edi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edi); }
  /* 0060517a je 0x605192 */ if (ZF_) goto L_00605192;
  /* 0060517c mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 00605180 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 00605182 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00605184 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00605186 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00605189 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0060518b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0060518d and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605190 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_00605192:;
  /* 00605192 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00605195 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 00605199 mov byte ptr [eax + ebp], 0 */ { const u32 m_ = (u32)(eax + ebp); M8(m_) = (u8)(0x0u); }
  /* 0060519d mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 006051a1 mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 006051a4 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 006051a6 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 006051a9 mov edx, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); edx = (u32)(M32(m_)); }
  /* 006051ac shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 006051af add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006051b1 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 006051b3 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 006051b5 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 006051b8 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 006051bb mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 006051be mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 006051c1 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 006051c4 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 006051c7 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 006051ca inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006051cb mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 006051ce jmp 0x6051e2 */ goto L_006051e2;
L_006051d0:;
  /* 006051d0 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 006051d4 push 0x68165c */ { u32 v_ = 0x68165cu; esp -= 4; M32(esp) = v_; }
  /* 006051d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006051da call 0x605c40 */ esp -= 4; M32(esp) = 0x6051dfu; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x6051dau); RETCHK(0x6051dfu, 0x6051dau); LOADALL;
  /* 006051df add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_006051e2:;
  /* 006051e2 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006051e6 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 006051e9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 006051ea mov dword ptr [esp + 0x24], esi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(esi); }
  /* 006051ee mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 006051f2 jne 0x6050df */ if (!ZF_) goto L_006050df;
L_006051f8:;
  /* 006051f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006051f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006051fa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006051fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006051fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006051fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605200(CPU *c) {
  NATIVE_HOOK(0x605200u) REGS; LOADALL;
L_00605200:;
  /* 00605200 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00605204 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605205 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605207 je 0x605234 */ if (ZF_) goto L_00605234;
  /* 00605209 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0060520d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060520f je 0x605234 */ if (ZF_) goto L_00605234;
  /* 00605211 mov esi, dword ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); esi = (u32)(M32(m_)); }
  /* 00605214 mov edx, 0x200 */ { edx = (u32)(0x200u); }
  /* 00605219 test edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060521b jne 0x605234 */ if (!ZF_) goto L_00605234;
  /* 0060521d mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00605221 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00605223 mov dword ptr [eax + 0x3c], esi */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(esi); }
  /* 00605226 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00605229 mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0060522c mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0060522f or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605231 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_00605234:;
  /* 00605234 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605235 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605240(CPU *c) {
  NATIVE_HOOK(0x605240u) REGS; LOADALL;
L_00605240:;
  /* 00605240 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00605241 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605242 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00605246 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605248 je 0x6052df */ if (ZF_) goto L_006052df;
  /* 0060524e mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00605252 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605254 je 0x6052df */ if (ZF_) goto L_006052df;
  /* 0060525a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060525b mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 0060525f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605260 mov esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 00605264 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605266 je 0x6052ab */ if (ZF_) goto L_006052ab;
  /* 00605268 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0060526a push 0x2000 */ { u32 v_ = 0x2000u; esp -= 4; M32(esp) = v_; }
  /* 0060526f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00605270 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605271 call 0x6057b0 */ esp -= 4; M32(esp) = 0x605276u; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x605271u); RETCHK(0x605276u, 0x605271u); LOADALL;
  /* 00605276 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00605277 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605278 call 0x60f270 */ esp -= 4; M32(esp) = 0x60527du; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x605278u); RETCHK(0x60527du, 0x605278u); LOADALL;
  /* 0060527d mov dword ptr [ebx + 0x4c], eax */ { const u32 m_ = (u32)(ebx + 0x4cu); M32(m_) = (u32)(eax); }
  /* 00605280 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 00605282 mov dword ptr [edi + 0x188], eax */ { const u32 m_ = (u32)(edi + 0x188u); M32(m_) = (u32)(eax); }
  /* 00605288 mov edi, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); edi = (u32)(M32(m_)); }
  /* 0060528b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0060528d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605290 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00605293 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00605295 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00605297 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060529a rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0060529c mov eax, dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); eax = (u32)(M32(m_)); }
  /* 006052a2 or ah, 0x20 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 006052a5 mov dword ptr [ebx + 0xb8], eax */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(eax); }
L_006052ab:;
  /* 006052ab mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 006052af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006052b1 je 0x6052d1 */ if (ZF_) goto L_006052d1;
  /* 006052b3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 006052b5 lea ecx, [ebx + 0x50] */ ecx = (u32)((u32)(ebx + 0x50u));
  /* 006052b8 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006052ba mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 006052bc mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 006052bf mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 006052c2 mov ax, word ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 006052c6 mov word ptr [ecx + 8], ax */ { const u32 m_ = (u32)(ecx + 0x8u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 006052ca jne 0x6052d1 */ if (!ZF_) goto L_006052d1;
  /* 006052cc mov ebp, 1 */ { ebp = (u32)(0x1u); }
L_006052d1:;
  /* 006052d1 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 006052d4 mov word ptr [ebx + 0x16], bp */ { const u32 m_ = (u32)(ebx + 0x16u); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 006052d8 or al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 006052da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006052db mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 006052de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_006052df:;
  /* 006052df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006052e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006052e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006052f0(CPU *c) {
  NATIVE_HOOK(0x6052f0u) REGS; LOADALL;
L_006052f0:;
  /* 006052f0 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006052f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006052f4 mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 006052f8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 006052fc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006052fd mov eax, dword ptr [ebx + 0xd8] */ { const u32 m_ = (u32)(ebx + 0xd8u); eax = (u32)(M32(m_)); }
  /* 00605303 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 00605307 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00605309 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060530a shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0060530d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060530e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060530f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605310 call 0x60f270 */ esp -= 4; M32(esp) = 0x605315u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x605310u); RETCHK(0x605315u, 0x605310u); LOADALL;
  /* 00605315 mov ecx, dword ptr [ebx + 0xd8] */ { const u32 m_ = (u32)(ebx + 0xd8u); ecx = (u32)(M32(m_)); }
  /* 0060531b mov esi, dword ptr [ebx + 0xd4] */ { const u32 m_ = (u32)(ebx + 0xd4u); esi = (u32)(M32(m_)); }
  /* 00605321 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00605324 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00605326 mov edi, eax */ { edi = (u32)(eax); }
  /* 00605328 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0060532b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0060532d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0060532f mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00605333 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605336 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00605338 mov eax, dword ptr [ebx + 0xd4] */ { const u32 m_ = (u32)(ebx + 0xd4u); eax = (u32)(M32(m_)); }
  /* 0060533e mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00605342 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605343 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605344 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605349u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605344u); RETCHK(0x605349u, 0x605344u); LOADALL;
  /* 00605349 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060534b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060534e cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605350 mov dword ptr [ebx + 0xd4], eax */ { const u32 m_ = (u32)(ebx + 0xd4u); M32(m_) = (u32)(eax); }
  /* 00605356 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0060535a jle 0x6053fa */ if ((ZF_|LT_)) goto L_006053fa;
  /* 00605360 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
L_00605364:;
  /* 00605364 mov ebx, dword ptr [ebx + 0xd8] */ { const u32 m_ = (u32)(ebx + 0xd8u); ebx = (u32)(M32(m_)); }
  /* 0060536a mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0060536e mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 00605372 mov edi, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edi = (u32)(M32(m_)); }
  /* 00605375 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00605377 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0060537a shl ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0060537d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060537f add ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00605381 repne scasb al, byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = (eax & 0xffu), b_ = M8(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (ZF_) break; } }
  /* 00605383 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 00605387 not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 00605389 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060538a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060538b call 0x60f270 */ esp -= 4; M32(esp) = 0x605390u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x60538bu); RETCHK(0x605390u, 0x60538bu); LOADALL;
  /* 00605390 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 00605392 mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 00605395 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605398 mov esi, eax */ { esi = (u32)(eax); }
L_0060539a:;
  /* 0060539a mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060539c inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060539d mov byte ptr [esi], al */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0060539f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006053a0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006053a2 jne 0x60539a */ if (!ZF_) goto L_0060539a;
  /* 006053a4 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 006053a7 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 006053aa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006053ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006053ac call 0x60f270 */ esp -= 4; M32(esp) = 0x6053b1u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x6053acu); RETCHK(0x6053b1u, 0x6053acu); LOADALL;
  /* 006053b1 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 006053b4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006053b7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006053ba mov edi, eax */ { edi = (u32)(eax); }
  /* 006053bc shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 006053bf mov eax, ecx */ { eax = (u32)(ecx); }
  /* 006053c1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006053c4 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 006053c7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 006053c9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 006053cb mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 006053cf and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006053d2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006053d3 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 006053d5 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006053d8 add ebp, 0x10 */ { u32 a_ = ebp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 006053db mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 006053de mov dl, byte ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006053e1 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 006053e5 mov byte ptr [ebx + 4], dl */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 006053e8 mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 006053ec cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006053ee mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 006053f2 jl 0x605364 */ if (LT_) goto L_00605364;
  /* 006053f8 mov ebp, ecx */ { ebp = (u32)(ecx); }
L_006053fa:;
  /* 006053fa mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 006053fe mov edx, dword ptr [ebx + 0xd8] */ { const u32 m_ = (u32)(ebx + 0xd8u); edx = (u32)(M32(m_)); }
  /* 00605404 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00605407 mov dword ptr [ebx + 0xd4], eax */ { const u32 m_ = (u32)(ebx + 0xd4u); M32(m_) = (u32)(eax); }
  /* 0060540d mov eax, dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); eax = (u32)(M32(m_)); }
  /* 00605413 add edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00605415 or ch, 0x20 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00605418 or al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0060541a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060541b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060541c mov dword ptr [ebx + 0xd8], edx */ { const u32 m_ = (u32)(ebx + 0xd8u); M32(m_) = (u32)(edx); }
  /* 00605422 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00605425 mov dword ptr [ebx + 0xb8], eax */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(eax); }
  /* 0060542b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060542c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060542d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605430 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605440(CPU *c) {
  NATIVE_HOOK(0x605440u) REGS; LOADALL;
L_00605440:;
  /* 00605440 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00605444 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605447 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605449 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0060544a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0060544b je 0x605571 */ if (ZF_) goto L_00605571;
  /* 00605451 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 00605455 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605457 je 0x605571 */ if (ZF_) goto L_00605571;
  /* 0060545d mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 00605461 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605463 je 0x605571 */ if (ZF_) goto L_00605571;
  /* 00605469 mov eax, dword ptr [ebp + 0xc0] */ { const u32 m_ = (u32)(ebp + 0xc0u); eax = (u32)(M32(m_)); }
  /* 0060546f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605470 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00605472 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605473 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 00605476 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00605479 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060547a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060547b call 0x60f270 */ esp -= 4; M32(esp) = 0x605480u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x60547bu); RETCHK(0x605480u, 0x60547bu); LOADALL;
  /* 00605480 mov edi, eax */ { edi = (u32)(eax); }
  /* 00605482 mov eax, dword ptr [ebp + 0xc0] */ { const u32 m_ = (u32)(ebp + 0xc0u); eax = (u32)(M32(m_)); }
  /* 00605488 mov esi, dword ptr [ebp + 0xbc] */ { const u32 m_ = (u32)(ebp + 0xbcu); esi = (u32)(M32(m_)); }
  /* 0060548e mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 00605492 lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 00605495 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00605498 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0060549a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0060549d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0060549f mov ecx, edx */ { ecx = (u32)(edx); }
  /* 006054a1 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006054a4 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 006054a6 mov eax, dword ptr [ebp + 0xbc] */ { const u32 m_ = (u32)(ebp + 0xbcu); eax = (u32)(M32(m_)); }
  /* 006054ac mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 006054b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006054b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006054b2 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x6054b7u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x6054b2u); RETCHK(0x6054b7u, 0x6054b2u); LOADALL;
  /* 006054b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006054b9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006054bc cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006054be mov dword ptr [ebp + 0xbc], eax */ { const u32 m_ = (u32)(ebp + 0xbcu); M32(m_) = (u32)(eax); }
  /* 006054c4 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 006054c8 jle 0x605548 */ if ((ZF_|LT_)) goto L_00605548;
  /* 006054ca mov ebx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebx = (u32)(M32(m_)); }
L_006054ce:;
  /* 006054ce mov eax, dword ptr [ebp + 0xc0] */ { const u32 m_ = (u32)(ebp + 0xc0u); eax = (u32)(M32(m_)); }
  /* 006054d4 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 006054d8 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006054da lea edx, [eax + eax*4] */ edx = (u32)((u32)(eax + eax * 4u));
  /* 006054dd mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 006054e1 lea ebp, [eax + edx*4] */ ebp = (u32)((u32)(eax + edx * 4u));
  /* 006054e4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 006054e6 mov edx, ebp */ { edx = (u32)(ebp); }
  /* 006054e8 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_006054ea:;
  /* 006054ea mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006054ec mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 006054ef inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006054f0 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006054f2 jne 0x6054ea */ if (!ZF_) goto L_006054ea;
  /* 006054f4 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006054f7 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 006054fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006054fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006054fd call 0x60f270 */ esp -= 4; M32(esp) = 0x605502u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x6054fdu); RETCHK(0x605502u, 0x6054fdu); LOADALL;
  /* 00605502 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00605505 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00605508 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0060550b mov edi, eax */ { edi = (u32)(eax); }
  /* 0060550d mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0060550f mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 00605513 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00605516 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00605518 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0060551a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060551d and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605520 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00605523 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00605525 mov ecx, dword ptr [ebx - 8] */ { const u32 m_ = (u32)(ebx + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00605528 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0060552b mov al, byte ptr [edx + 0x68] */ { const u32 m_ = (u32)(edx + 0x68u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0060552e mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00605532 mov byte ptr [ebp + 0x10], al */ { const u32 m_ = (u32)(ebp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00605535 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00605539 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 0060553d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060553e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605540 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00605544 jl 0x6054ce */ if (LT_) goto L_006054ce;
  /* 00605546 mov ebx, ecx */ { ebx = (u32)(ecx); }
L_00605548:;
  /* 00605548 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0060554c mov eax, dword ptr [ebp + 0xb8] */ { const u32 m_ = (u32)(ebp + 0xb8u); eax = (u32)(M32(m_)); }
  /* 00605552 mov dword ptr [ebp + 0xbc], ecx */ { const u32 m_ = (u32)(ebp + 0xbcu); M32(m_) = (u32)(ecx); }
  /* 00605558 mov ecx, dword ptr [ebp + 0xc0] */ { const u32 m_ = (u32)(ebp + 0xc0u); ecx = (u32)(M32(m_)); }
  /* 0060555e add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00605560 or ah, 2 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00605563 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00605564 mov dword ptr [ebp + 0xc0], ecx */ { const u32 m_ = (u32)(ebp + 0xc0u); M32(m_) = (u32)(ecx); }
  /* 0060556a mov dword ptr [ebp + 0xb8], eax */ { const u32 m_ = (u32)(ebp + 0xb8u); M32(m_) = (u32)(eax); }
  /* 00605570 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00605571:;
  /* 00605571 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00605572 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00605573 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605576 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605580(CPU *c) {
  NATIVE_HOOK(0x605580u) REGS; LOADALL;
L_00605580:;
  /* 00605580 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00605584 mov eax, dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 00605587 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605589 je 0x605591 */ if (ZF_) goto L_00605591;
  /* 0060558b mov dword ptr [esp + 4], ecx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0060558f jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
L_00605591:;
  /* 00605591 push 0x681678 */ { u32 v_ = 0x681678u; esp -= 4; M32(esp) = v_; }
  /* 00605596 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605597 call 0x605c20 */ esp -= 4; M32(esp) = 0x60559cu; SAVEALL; F_00605c20(c); ABI_CHECK(0x605c20u, 0x605597u); RETCHK(0x60559cu, 0x605597u); LOADALL;
  /* 0060559c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060559f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006055a0(CPU *c) {
  NATIVE_HOOK(0x6055a0u) REGS; LOADALL;
L_006055a0:;
  /* 006055a0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 006055a4 mov eax, dword ptr [ecx + 0x14c] */ { const u32 m_ = (u32)(ecx + 0x14cu); eax = (u32)(M32(m_)); }
  /* 006055aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006055ac je 0x6055b4 */ if (ZF_) goto L_006055b4;
  /* 006055ae mov dword ptr [esp + 4], ecx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(ecx); }
  /* 006055b2 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
L_006055b4:;
  /* 006055b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006055c0(CPU *c) {
  NATIVE_HOOK(0x6055c0u) REGS; LOADALL;
L_006055c0:;
  /* 006055c0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006055c4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 006055c8 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 006055cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006055cd mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006055d1 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 006055d4 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 006055d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 006055d9 mov dword ptr [esi + 0x4c], ecx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 006055dc mov dword ptr [esi + 0x14c], edx */ { const u32 m_ = (u32)(esi + 0x14cu); M32(m_) = (u32)(edx); }
  /* 006055e2 je 0x605604 */ if (ZF_) goto L_00605604;
  /* 006055e4 push 0x6816cc */ { u32 v_ = 0x6816ccu; esp -= 4; M32(esp) = v_; }
  /* 006055e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006055ea mov dword ptr [esi + 0x50], 0 */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 006055f1 call 0x605c40 */ esp -= 4; M32(esp) = 0x6055f6u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x6055f1u); RETCHK(0x6055f6u, 0x6055f1u); LOADALL;
  /* 006055f6 push 0x681694 */ { u32 v_ = 0x681694u; esp -= 4; M32(esp) = v_; }
  /* 006055fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006055fc call 0x605c40 */ esp -= 4; M32(esp) = 0x605601u; SAVEALL; F_00605c40(c); ABI_CHECK(0x605c40u, 0x6055fcu); RETCHK(0x605601u, 0x6055fcu); LOADALL;
  /* 00605601 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00605604:;
  /* 00605604 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605605 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605610(CPU *c) {
  NATIVE_HOOK(0x605610u) REGS; LOADALL;
L_00605610:;
  /* 00605610 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605613 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00605617 mov al, 0xa */ { eax = (eax & 0xffffff00u) | ((u32)(0xau) & 0xffu); }
  /* 00605619 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060561c mov byte ptr [esp], 0x89 */ { const u32 m_ = (u32)(esp); M8(m_) = (u8)(0x89u); }
  /* 00605621 mov byte ptr [esp + 1], 0x50 */ { const u32 m_ = (u32)(esp + 0x1u); M8(m_) = (u8)(0x50u); }
  /* 00605626 mov byte ptr [esp + 2], 0x4e */ { const u32 m_ = (u32)(esp + 0x2u); M8(m_) = (u8)(0x4eu); }
  /* 0060562b mov byte ptr [esp + 3], 0x47 */ { const u32 m_ = (u32)(esp + 0x3u); M8(m_) = (u8)(0x47u); }
  /* 00605630 mov byte ptr [esp + 4], 0xd */ { const u32 m_ = (u32)(esp + 0x4u); M8(m_) = (u8)(0xdu); }
  /* 00605635 mov byte ptr [esp + 5], al */ { const u32 m_ = (u32)(esp + 0x5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00605639 mov byte ptr [esp + 6], 0x1a */ { const u32 m_ = (u32)(esp + 0x6u); M8(m_) = (u8)(0x1au); }
  /* 0060563e mov byte ptr [esp + 7], al */ { const u32 m_ = (u32)(esp + 0x7u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00605642 jbe 0x605658 */ if ((CF_|ZF_)) goto L_00605658;
  /* 00605644 mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_00605649:;
  /* 00605649 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0060564d cmp eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605650 jbe 0x605663 */ if ((CF_|ZF_)) goto L_00605663;
  /* 00605652 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605654 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605657 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00605658:;
  /* 00605658 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060565b jae 0x605649 */ if (!CF_) goto L_00605649;
  /* 0060565d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060565f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605662 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00605663:;
  /* 00605663 lea edx, [eax + ecx] */ edx = (u32)((u32)(eax + ecx));
  /* 00605666 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605669 jbe 0x605672 */ if ((CF_|ZF_)) goto L_00605672;
  /* 0060566b mov ecx, 8 */ { ecx = (u32)(0x8u); }
  /* 00605670 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00605672:;
  /* 00605672 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00605676 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605677 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605678 lea edi, [esp + eax + 8] */ edi = (u32)((u32)(esp + eax + 0x8u));
  /* 0060567c lea esi, [edx + eax] */ esi = (u32)((u32)(edx + eax));
  /* 0060567f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605681 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00605683 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00605684 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605685 je 0x60568c */ if (ZF_) goto L_0060568c;
  /* 00605687 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00605689 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_0060568c:;
  /* 0060568c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060568f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605690(CPU *c) {
  NATIVE_HOOK(0x605690u) REGS; LOADALL;
L_00605690:;
  /* 00605690 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605691 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00605695 imul esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); s64 p_ = (s64)(s32)esi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0060569a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060569e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060569f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006056a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006056a1 call 0x60f270 */ esp -= 4; M32(esp) = 0x6056a6u; SAVEALL; F_0060f270(c); ABI_CHECK(0x60f270u, 0x6056a1u); RETCHK(0x6056a6u, 0x6056a1u); LOADALL;
  /* 006056a6 mov edx, eax */ { edx = (u32)(eax); }
  /* 006056a8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006056ab xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006056ad cmp esi, 0x8000 */ { u32 a_ = esi, b_ = 0x8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006056b3 mov edi, edx */ { edi = (u32)(edx); }
  /* 006056b5 jbe 0x6056dd */ if ((CF_|ZF_)) goto L_006056dd;
  /* 006056b7 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 006056bc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 006056be lea ecx, [esi - 0x8000] */ ecx = (u32)((u32)(esi + 0xffff8000u));
  /* 006056c4 lea edi, [edx + 0x8000] */ edi = (u32)((u32)(edx + 0x8000u));
  /* 006056ca mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006056cc shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 006056cf rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 006056d1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 006056d3 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006056d6 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 006056d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006056d9 mov eax, edx */ { eax = (u32)(edx); }
  /* 006056db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006056dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006056dd:;
  /* 006056dd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 006056df shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 006056e2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 006056e4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 006056e6 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006056e9 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 006056eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006056ec mov eax, edx */ { eax = (u32)(edx); }
  /* 006056ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006056ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006056f0(CPU *c) {
  NATIVE_HOOK(0x6056f0u) REGS; LOADALL;
L_006056f0:;
  /* 006056f0 jmp 0x60f2e0 */ SAVEALL; F_0060f2e0(c); return;
}

void F_00605700(CPU *c) {
  NATIVE_HOOK(0x605700u) REGS; LOADALL;
L_00605700:;
  /* 00605700 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00605702 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00605704 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00605706 call 0x611320 */ esp -= 4; M32(esp) = 0x60570bu; SAVEALL; F_00611320(c); ABI_CHECK(0x611320u, 0x605706u); RETCHK(0x60570bu, 0x605706u); LOADALL;
  /* 0060570b mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0060570f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605712 mov dword ptr [ecx + 0x110], eax */ { const u32 m_ = (u32)(ecx + 0x110u); M32(m_) = (u32)(eax); }
  /* 00605718 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605720(CPU *c) {
  NATIVE_HOOK(0x605720u) REGS; LOADALL;
L_00605720:;
  /* 00605720 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605721 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00605725 test byte ptr [esi + 0x11c], 0x20 */ { const u32 m_ = (u32)(esi + 0x11cu); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060572c mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 0060572f je 0x60573f */ if (ZF_) goto L_0060573f;
  /* 00605731 and eax, 0x300 */ { u32 a_ = eax, b_ = 0x300u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605736 cmp eax, 0x300 */ { u32 a_ = eax, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060573b jne 0x605744 */ if (!ZF_) goto L_00605744;
  /* 0060573d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060573e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0060573f:;
  /* 0060573f test ah, 8 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00605742 jne 0x605763 */ if (!ZF_) goto L_00605763;
L_00605744:;
  /* 00605744 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00605748 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0060574c mov eax, dword ptr [esi + 0x110] */ { const u32 m_ = (u32)(esi + 0x110u); eax = (u32)(M32(m_)); }
  /* 00605752 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605753 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00605754 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605755 call 0x611320 */ esp -= 4; M32(esp) = 0x60575au; SAVEALL; F_00611320(c); ABI_CHECK(0x611320u, 0x605755u); RETCHK(0x60575au, 0x605755u); LOADALL;
  /* 0060575a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060575d mov dword ptr [esi + 0x110], eax */ { const u32 m_ = (u32)(esi + 0x110u); M32(m_) = (u32)(eax); }
L_00605763:;
  /* 00605763 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605764 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605770(CPU *c) {
  NATIVE_HOOK(0x605770u) REGS; LOADALL;
L_00605770:;
  /* 00605770 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00605774 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605776 jne 0x605779 */ if (!ZF_) goto L_00605779;
  /* 00605778 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00605779:;
  /* 00605779 mov ecx, dword ptr [eax + 0x1e8] */ { const u32 m_ = (u32)(eax + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0060577f mov edx, dword ptr [eax + 0x1ec] */ { const u32 m_ = (u32)(eax + 0x1ecu); edx = (u32)(M32(m_)); }
  /* 00605785 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605786 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00605787 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00605789 call 0x60f170 */ esp -= 4; M32(esp) = 0x60578eu; SAVEALL; F_0060f170(c); ABI_CHECK(0x60f170u, 0x605789u); RETCHK(0x60578eu, 0x605789u); LOADALL;
  /* 0060578e mov edx, eax */ { edx = (u32)(eax); }
  /* 00605790 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605793 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605795 je 0x6057a4 */ if (ZF_) goto L_006057a4;
  /* 00605797 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605798 mov ecx, 0x48 */ { ecx = (u32)(0x48u); }
  /* 0060579d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060579f mov edi, edx */ { edi = (u32)(edx); }
  /* 006057a1 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 006057a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_006057a4:;
  /* 006057a4 mov eax, edx */ { eax = (u32)(edx); }
  /* 006057a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006057b0(CPU *c) {
  NATIVE_HOOK(0x6057b0u) REGS; LOADALL;
L_006057b0:;
  /* 006057b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006057b1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006057b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006057b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006057b4 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 006057b8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 006057ba cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006057bc je 0x605b5d */ if (ZF_) goto L_00605b5d;
  /* 006057c2 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 006057c6 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006057c8 je 0x605b5d */ if (ZF_) goto L_00605b5d;
  /* 006057ce mov eax, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); eax = (u32)(M32(m_)); }
  /* 006057d4 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 006057d8 and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006057da test ah, 0x40 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 006057dd je 0x605844 */ if (ZF_) goto L_00605844;
  /* 006057df mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 006057e3 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006057e6 je 0x60580c */ if (ZF_) goto L_0060580c;
  /* 006057e8 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 006057eb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006057ed je 0x605844 */ if (ZF_) goto L_00605844;
  /* 006057ef mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 006057f1 shl ebp, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 006057f4 mov eax, dword ptr [eax + ebp + 4] */ { const u32 m_ = (u32)(eax + ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 006057f8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006057fa je 0x605840 */ if (ZF_) goto L_00605840;
  /* 006057fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006057fd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006057fe call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605803u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x6057feu); RETCHK(0x605803u, 0x6057feu); LOADALL;
  /* 00605803 mov ecx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 00605806 mov dword ptr [ecx + ebp + 4], ebx */ { const u32 m_ = (u32)(ecx + ebp + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0060580a jmp 0x60583d */ goto L_0060583d;
L_0060580c:;
  /* 0060580c mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0060580f xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00605811 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605813 jle 0x60582d */ if ((ZF_|LT_)) goto L_0060582d;
L_00605815:;
  /* 00605815 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00605816 push 0x4000 */ { u32 v_ = 0x4000u; esp -= 4; M32(esp) = v_; }
  /* 0060581b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060581c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060581d call 0x6057b0 */ esp -= 4; M32(esp) = 0x605822u; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x60581du); RETCHK(0x605822u, 0x60581du); LOADALL;
  /* 00605822 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00605825 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605828 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00605829 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0060582b jl 0x605815 */ if (LT_) goto L_00605815;
L_0060582d:;
  /* 0060582d mov edx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); edx = (u32)(M32(m_)); }
  /* 00605830 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00605831 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605832 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605837u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605832u); RETCHK(0x605837u, 0x605832u); LOADALL;
  /* 00605837 mov dword ptr [esi + 0x38], ebx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ebx); }
  /* 0060583a mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
L_0060583d:;
  /* 0060583d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00605840:;
  /* 00605840 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
L_00605844:;
  /* 00605844 mov eax, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); eax = (u32)(M32(m_)); }
  /* 0060584a and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060584c test ah, 0x20 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060584f je 0x605869 */ if (ZF_) goto L_00605869;
  /* 00605851 mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 00605854 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605855 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605856 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x60585bu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605856u); RETCHK(0x60585bu, 0x605856u); LOADALL;
  /* 0060585b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060585e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605861 and al, 0xef */ { u32 a_ = (eax & 0xffu), b_ = 0xefu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00605863 mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 00605866 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00605869:;
  /* 00605869 mov eax, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); eax = (u32)(M32(m_)); }
  /* 0060586f and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605871 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00605874 je 0x60587f */ if (ZF_) goto L_0060587f;
  /* 00605876 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00605879 and ch, 0xbf */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0xbfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0060587c mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
L_0060587f:;
  /* 0060587f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00605881 jns 0x605912 */ if (!SF_) goto L_00605912;
  /* 00605887 mov edx, dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); edx = (u32)(M32(m_)); }
  /* 0060588d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060588e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060588f call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605894u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x60588fu); RETCHK(0x605894u, 0x60588fu); LOADALL;
  /* 00605894 mov eax, dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); eax = (u32)(M32(m_)); }
  /* 0060589a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060589b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0060589c call 0x60f2e0 */ esp -= 4; M32(esp) = 0x6058a1u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x60589cu); RETCHK(0x6058a1u, 0x60589cu); LOADALL;
  /* 006058a1 mov eax, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); eax = (u32)(M32(m_)); }
  /* 006058a7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006058aa cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006058ac mov dword ptr [esi + 0xa0], ebx */ { const u32 m_ = (u32)(esi + 0xa0u); M32(m_) = (u32)(ebx); }
  /* 006058b2 mov dword ptr [esi + 0xac], ebx */ { const u32 m_ = (u32)(esi + 0xacu); M32(m_) = (u32)(ebx); }
  /* 006058b8 je 0x605909 */ if (ZF_) goto L_00605909;
  /* 006058ba mov al, byte ptr [esi + 0xb5] */ { const u32 m_ = (u32)(esi + 0xb5u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006058c0 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 006058c2 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 006058c4 jbe 0x6058ef */ if ((CF_|ZF_)) goto L_006058ef;
L_006058c6:;
  /* 006058c6 mov ecx, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 006058cc mov edx, dword ptr [ecx + ebp*4] */ { const u32 m_ = (u32)(ecx + ebp * 4u); edx = (u32)(M32(m_)); }
  /* 006058cf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006058d0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006058d1 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x6058d6u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x6058d1u); RETCHK(0x6058d6u, 0x6058d1u); LOADALL;
  /* 006058d6 mov eax, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); eax = (u32)(M32(m_)); }
  /* 006058dc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 006058de add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006058e1 mov dword ptr [eax + ebp*4], ebx */ { const u32 m_ = (u32)(eax + ebp * 4u); M32(m_) = (u32)(ebx); }
  /* 006058e4 mov cl, byte ptr [esi + 0xb5] */ { const u32 m_ = (u32)(esi + 0xb5u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 006058ea inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006058eb cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006058ed jl 0x6058c6 */ if (LT_) goto L_006058c6;
L_006058ef:;
  /* 006058ef mov edx, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); edx = (u32)(M32(m_)); }
  /* 006058f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006058f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006058f7 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x6058fcu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x6058f7u); RETCHK(0x6058fcu, 0x6058f7u); LOADALL;
  /* 006058fc mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 00605900 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605903 mov dword ptr [esi + 0xb0], ebx */ { const u32 m_ = (u32)(esi + 0xb0u); M32(m_) = (u32)(ebx); }
L_00605909:;
  /* 00605909 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060590c and ah, 0xfb */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 0060590f mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00605912:;
  /* 00605912 mov eax, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); eax = (u32)(M32(m_)); }
  /* 00605918 and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0060591a test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060591c je 0x605950 */ if (ZF_) goto L_00605950;
  /* 0060591e mov ecx, dword ptr [esi + 0xc4] */ { const u32 m_ = (u32)(esi + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 00605924 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605925 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605926 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x60592bu; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605926u); RETCHK(0x60592bu, 0x605926u); LOADALL;
  /* 0060592b mov edx, dword ptr [esi + 0xc8] */ { const u32 m_ = (u32)(esi + 0xc8u); edx = (u32)(M32(m_)); }
  /* 00605931 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00605932 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605933 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605938u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605933u); RETCHK(0x605938u, 0x605933u); LOADALL;
  /* 00605938 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0060593b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060593e and ah, 0xef */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xefu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00605941 mov dword ptr [esi + 0xc4], ebx */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(ebx); }
  /* 00605947 mov dword ptr [esi + 0xc8], ebx */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(ebx); }
  /* 0060594d mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00605950:;
  /* 00605950 mov eax, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); eax = (u32)(M32(m_)); }
  /* 00605956 and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605958 test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0060595a je 0x605a04 */ if (ZF_) goto L_00605a04;
  /* 00605960 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00605964 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605967 je 0x6059b3 */ if (ZF_) goto L_006059b3;
  /* 00605969 mov eax, dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); eax = (u32)(M32(m_)); }
  /* 0060596f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605971 je 0x605a04 */ if (ZF_) goto L_00605a04;
  /* 00605977 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 00605979 shl ebp, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 0060597c mov ecx, dword ptr [eax + ebp] */ { const u32 m_ = (u32)(eax + ebp); ecx = (u32)(M32(m_)); }
  /* 0060597f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605980 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605981 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605986u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605981u); RETCHK(0x605986u, 0x605981u); LOADALL;
  /* 00605986 mov edx, dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); edx = (u32)(M32(m_)); }
  /* 0060598c mov eax, dword ptr [edx + ebp + 8] */ { const u32 m_ = (u32)(edx + ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00605990 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605991 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605992 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605997u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605992u); RETCHK(0x605997u, 0x605992u); LOADALL;
  /* 00605997 mov ecx, dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 0060599d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006059a0 mov dword ptr [ecx + ebp], ebx */ { const u32 m_ = (u32)(ecx + ebp); M32(m_) = (u32)(ebx); }
  /* 006059a3 mov edx, dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); edx = (u32)(M32(m_)); }
  /* 006059a9 mov dword ptr [edx + ebp + 8], ebx */ { const u32 m_ = (u32)(edx + ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 006059ad mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 006059b1 jmp 0x605a04 */ goto L_00605a04;
L_006059b3:;
  /* 006059b3 mov eax, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); eax = (u32)(M32(m_)); }
  /* 006059b9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006059bb je 0x6059fb */ if (ZF_) goto L_006059fb;
  /* 006059bd xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 006059bf cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006059c1 jle 0x6059db */ if ((ZF_|LT_)) goto L_006059db;
L_006059c3:;
  /* 006059c3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006059c4 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 006059c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006059c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006059c8 call 0x6057b0 */ esp -= 4; M32(esp) = 0x6059cdu; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x6059c8u); RETCHK(0x6059cdu, 0x6059c8u); LOADALL;
  /* 006059cd mov eax, dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); eax = (u32)(M32(m_)); }
  /* 006059d3 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006059d6 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 006059d7 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 006059d9 jl 0x6059c3 */ if (LT_) goto L_006059c3;
L_006059db:;
  /* 006059db mov eax, dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); eax = (u32)(M32(m_)); }
  /* 006059e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006059e2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 006059e3 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x6059e8u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x6059e3u); RETCHK(0x6059e8u, 0x6059e3u); LOADALL;
  /* 006059e8 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 006059ec add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006059ef mov dword ptr [esi + 0xd4], ebx */ { const u32 m_ = (u32)(esi + 0xd4u); M32(m_) = (u32)(ebx); }
  /* 006059f5 mov dword ptr [esi + 0xd8], ebx */ { const u32 m_ = (u32)(esi + 0xd8u); M32(m_) = (u32)(ebx); }
L_006059fb:;
  /* 006059fb mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 006059fe and ah, 0xdf */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xdfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00605a01 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00605a04:;
  /* 00605a04 mov ecx, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); ecx = (u32)(M32(m_)); }
  /* 00605a0a and ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605a0c test ch, 2 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00605a0f je 0x605a8c */ if (ZF_) goto L_00605a8c;
  /* 00605a11 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00605a15 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605a18 je 0x605a41 */ if (ZF_) goto L_00605a41;
  /* 00605a1a mov eax, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); eax = (u32)(M32(m_)); }
  /* 00605a20 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605a22 je 0x605a8c */ if (ZF_) goto L_00605a8c;
  /* 00605a24 lea ebp, [ecx + ecx*4] */ ebp = (u32)((u32)(ecx + ecx * 4u));
  /* 00605a27 shl ebp, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 00605a2a mov edx, dword ptr [eax + ebp + 8] */ { const u32 m_ = (u32)(eax + ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00605a2e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00605a2f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605a30 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605a35u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605a30u); RETCHK(0x605a35u, 0x605a30u); LOADALL;
  /* 00605a35 mov eax, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); eax = (u32)(M32(m_)); }
  /* 00605a3b mov dword ptr [eax + ebp + 8], ebx */ { const u32 m_ = (u32)(eax + ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00605a3f jmp 0x605a85 */ goto L_00605a85;
L_00605a41:;
  /* 00605a41 mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 00605a47 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605a49 je 0x605a8c */ if (ZF_) goto L_00605a8c;
  /* 00605a4b xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00605a4d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605a4f jle 0x605a6c */ if ((ZF_|LT_)) goto L_00605a6c;
L_00605a51:;
  /* 00605a51 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00605a52 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00605a57 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605a58 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605a59 call 0x6057b0 */ esp -= 4; M32(esp) = 0x605a5eu; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x605a59u); RETCHK(0x605a5eu, 0x605a59u); LOADALL;
  /* 00605a5e mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 00605a64 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605a67 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00605a68 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605a6a jl 0x605a51 */ if (LT_) goto L_00605a51;
L_00605a6c:;
  /* 00605a6c mov ecx, dword ptr [esi + 0xbc] */ { const u32 m_ = (u32)(esi + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 00605a72 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605a73 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605a74 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605a79u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605a74u); RETCHK(0x605a79u, 0x605a74u); LOADALL;
  /* 00605a79 mov dword ptr [esi + 0xbc], ebx */ { const u32 m_ = (u32)(esi + 0xbcu); M32(m_) = (u32)(ebx); }
  /* 00605a7f mov dword ptr [esi + 0xc0], ebx */ { const u32 m_ = (u32)(esi + 0xc0u); M32(m_) = (u32)(ebx); }
L_00605a85:;
  /* 00605a85 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 00605a89 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00605a8c:;
  /* 00605a8c mov edx, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); edx = (u32)(M32(m_)); }
  /* 00605a92 and edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00605a94 test dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00605a97 je 0x605ab1 */ if (ZF_) goto L_00605ab1;
  /* 00605a99 mov eax, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 00605a9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605a9d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605a9e call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605aa3u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605a9eu); RETCHK(0x605aa3u, 0x605a9eu); LOADALL;
  /* 00605aa3 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00605aa6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605aa9 and al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00605aab mov dword ptr [esi + 0x7c], ebx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 00605aae mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00605ab1:;
  /* 00605ab1 mov ecx, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); ecx = (u32)(M32(m_)); }
  /* 00605ab7 and ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00605ab9 test ch, 0x10 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00605abc je 0x605ada */ if (ZF_) goto L_00605ada;
  /* 00605abe mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 00605ac1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00605ac2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605ac3 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605ac8u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605ac3u); RETCHK(0x605ac8u, 0x605ac3u); LOADALL;
  /* 00605ac8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00605acb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605ace and al, 0xf7 */ { u32 a_ = (eax & 0xffu), b_ = 0xf7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00605ad0 mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 00605ad3 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00605ad6 mov word ptr [esi + 0x14], bx */ { const u32 m_ = (u32)(esi + 0x14u); M16(m_) = (u16)((ebx & 0xffffu)); }
L_00605ada:;
  /* 00605ada mov eax, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); eax = (u32)(M32(m_)); }
  /* 00605ae0 and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605ae2 test al, 0x40 */ { u32 a_ = (eax & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00605ae4 je 0x605b3e */ if (ZF_) goto L_00605b3e;
  /* 00605ae6 cmp dword ptr [esi + 0xf8], ebx */ { const u32 m_ = (u32)(esi + 0xf8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605aec je 0x605b35 */ if (ZF_) goto L_00605b35;
  /* 00605aee mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00605af1 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00605af3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605af5 jle 0x605b1b */ if ((ZF_|LT_)) goto L_00605b1b;
L_00605af7:;
  /* 00605af7 mov ecx, dword ptr [esi + 0xf8] */ { const u32 m_ = (u32)(esi + 0xf8u); ecx = (u32)(M32(m_)); }
  /* 00605afd mov edx, dword ptr [ecx + ebp*4] */ { const u32 m_ = (u32)(ecx + ebp * 4u); edx = (u32)(M32(m_)); }
  /* 00605b00 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00605b01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605b02 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605b07u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605b02u); RETCHK(0x605b07u, 0x605b02u); LOADALL;
  /* 00605b07 mov eax, dword ptr [esi + 0xf8] */ { const u32 m_ = (u32)(esi + 0xf8u); eax = (u32)(M32(m_)); }
  /* 00605b0d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605b10 mov dword ptr [eax + ebp*4], ebx */ { const u32 m_ = (u32)(eax + ebp * 4u); M32(m_) = (u32)(ebx); }
  /* 00605b13 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00605b16 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00605b17 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605b19 jl 0x605af7 */ if (LT_) goto L_00605af7;
L_00605b1b:;
  /* 00605b1b mov ecx, dword ptr [esi + 0xf8] */ { const u32 m_ = (u32)(esi + 0xf8u); ecx = (u32)(M32(m_)); }
  /* 00605b21 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605b22 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605b23 call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605b28u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605b23u); RETCHK(0x605b28u, 0x605b23u); LOADALL;
  /* 00605b28 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 00605b2c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605b2f mov dword ptr [esi + 0xf8], ebx */ { const u32 m_ = (u32)(esi + 0xf8u); M32(m_) = (u32)(ebx); }
L_00605b35:;
  /* 00605b35 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00605b38 and ah, 0x7f */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00605b3b mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00605b3e:;
  /* 00605b3e mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00605b42 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605b45 mov eax, dword ptr [esi + 0xb8] */ { const u32 m_ = (u32)(esi + 0xb8u); eax = (u32)(M32(m_)); }
  /* 00605b4b je 0x605b53 */ if (ZF_) goto L_00605b53;
  /* 00605b4d and ebp, 0xffffbddf */ { u32 a_ = ebp, b_ = 0xffffbddfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
L_00605b53:;
  /* 00605b53 not ebp */ { ebp = (u32)(~ebp & 0xffffffffu); }
  /* 00605b55 and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605b57 mov dword ptr [esi + 0xb8], eax */ { const u32 m_ = (u32)(esi + 0xb8u); M32(m_) = (u32)(eax); }
L_00605b5d:;
  /* 00605b5d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00605b5e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605b5f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00605b60 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00605b61 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605b70(CPU *c) {
  NATIVE_HOOK(0x605b70u) REGS; LOADALL;
L_00605b70:;
  /* 00605b70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605b71 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00605b75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605b76 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00605b7a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00605b7c push 0x7fff */ { u32 v_ = 0x7fffu; esp -= 4; M32(esp) = v_; }
  /* 00605b81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605b82 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605b83 call 0x6057b0 */ esp -= 4; M32(esp) = 0x605b88u; SAVEALL; F_006057b0(c); ABI_CHECK(0x6057b0u, 0x605b83u); RETCHK(0x605b88u, 0x605b83u); LOADALL;
  /* 00605b88 mov eax, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00605b8e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605b91 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605b93 je 0x605bb9 */ if (ZF_) goto L_00605bb9;
  /* 00605b95 mov eax, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00605b9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605b9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605b9d call 0x60f2e0 */ esp -= 4; M32(esp) = 0x605ba2u; SAVEALL; F_0060f2e0(c); ABI_CHECK(0x60f2e0u, 0x605b9du); RETCHK(0x605ba2u, 0x605b9du); LOADALL;
  /* 00605ba2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00605ba5 mov dword ptr [esi + 0x1d4], 0 */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(0x0u); }
  /* 00605baf mov dword ptr [esi + 0x1d0], 0 */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(0x0u); }
L_00605bb9:;
  /* 00605bb9 mov ecx, 0x48 */ { ecx = (u32)(0x48u); }
  /* 00605bbe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605bc0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00605bc2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00605bc3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605bc4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605bd0(CPU *c) {
  NATIVE_HOOK(0x605bd0u) REGS; LOADALL;
L_00605bd0:;
  /* 00605bd0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00605bd4 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00605bd8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605bd9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00605bda test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605bdc jne 0x605be2 */ if (!ZF_) goto L_00605be2;
  /* 00605bde test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605be0 je 0x605c09 */ if (ZF_) goto L_00605c09;
L_00605be2:;
  /* 00605be2 mov eax, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00605be8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605bea jle 0x605c09 */ if ((ZF_|LT_)) goto L_00605c09;
  /* 00605bec mov ecx, dword ptr [ecx + 0x1d4] */ { const u32 m_ = (u32)(ecx + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 00605bf2 lea esi, [eax + eax*4] */ esi = (u32)((u32)(eax + eax * 4u));
  /* 00605bf5 lea ecx, [esi + ecx - 5] */ ecx = (u32)((u32)(esi + ecx + 0xfffffffbu));
L_00605bf9:;
  /* 00605bf9 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00605bfb mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 00605bfd cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605bff je 0x605c0e */ if (ZF_) goto L_00605c0e;
  /* 00605c01 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00605c02 sub ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00605c05 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605c07 jne 0x605bf9 */ if (!ZF_) goto L_00605bf9;
L_00605c09:;
  /* 00605c09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00605c0a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605c0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605c0d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00605c0e:;
  /* 00605c0e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605c10 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00605c11 mov al, byte ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00605c14 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605c15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605c20(CPU *c) {
  NATIVE_HOOK(0x605c20u) REGS; LOADALL;
L_00605c20:;
  /* 00605c20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605c21 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00605c25 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 00605c28 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605c2a je 0x605c37 */ if (ZF_) goto L_00605c37;
  /* 00605c2c mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00605c30 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00605c31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605c32 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x605c34u; SAVEALL; call_ind(c, t_); RETCHK(0x605c34u, 0x605c32u); LOADALL; }
  /* 00605c34 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00605c37:;
  /* 00605c37 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00605c39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605c3a call 0x61af8e */ { SAVEALL; rt_longjmp(c, M32(esp + 0), M32(esp + 4)); }
  /* 00605c3f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605c40 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00605c44 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605c46 cmp byte ptr [edx], 0x23 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00605c49 jne 0x605c5c */ if (!ZF_) goto L_00605c5c;
  /* 00605c4b mov eax, 1 */ { eax = (u32)(0x1u); }
L_00605c50:;
  /* 00605c50 cmp byte ptr [eax + edx], 0x20 */ { const u32 m_ = (u32)(eax + edx); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00605c54 je 0x605c5c */ if (ZF_) goto L_00605c5c;
  /* 00605c56 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00605c57 cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605c5a jl 0x605c50 */ if (LT_) goto L_00605c50;
L_00605c5c:;
  /* 00605c5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605c5d mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00605c61 mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 00605c64 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605c66 je 0x605c71 */ if (ZF_) goto L_00605c71;
  /* 00605c68 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00605c6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605c6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605c6c call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x605c6eu; SAVEALL; call_ind(c, t_); RETCHK(0x605c6eu, 0x605c6cu); LOADALL; }
  /* 00605c6e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00605c71:;
  /* 00605c71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605c72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00605c40(CPU *c) {
  NATIVE_HOOK(0x605c40u) REGS; LOADALL;
L_00605c40:;
  /* 00605c40 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00605c44 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00605c46 cmp byte ptr [edx], 0x23 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00605c49 jne 0x605c5c */ if (!ZF_) goto L_00605c5c;
  /* 00605c4b mov eax, 1 */ { eax = (u32)(0x1u); }
L_00605c50:;
  /* 00605c50 cmp byte ptr [eax + edx], 0x20 */ { const u32 m_ = (u32)(eax + edx); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00605c54 je 0x605c5c */ if (ZF_) goto L_00605c5c;
  /* 00605c56 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00605c57 cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00605c5a jl 0x605c50 */ if (LT_) goto L_00605c50;
L_00605c5c:;
  /* 00605c5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605c5d mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00605c61 mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 00605c64 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00605c66 je 0x605c71 */ if (ZF_) goto L_00605c71;
  /* 00605c68 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00605c6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00605c6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00605c6c call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x605c6eu; SAVEALL; call_ind(c, t_); RETCHK(0x605c6eu, 0x605c6cu); LOADALL; }
  /* 00605c6e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00605c71:;
  /* 00605c71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00605c72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
