#include "funcs.h"

void F_00576ec0(CPU *c) {
  NATIVE_HOOK(0x576ec0u) REGS; LOADALL;
L_00576ec0:;
  /* 00576ec0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00576ec4 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00576ec7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00576ec8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00576ec9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00576eca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00576ecb mov edi, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); edi = (u32)(M32(m_)); }
  /* 00576ece mov ebx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebx = (u32)(M32(m_)); }
  /* 00576ed2 imul edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); s64 p_ = (s64)(s32)edi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00576ed7 mov esi, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); esi = (u32)(M32(m_)); }
  /* 00576eda mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00576edd mov eax, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); eax = (u32)(M32(m_)); }
  /* 00576ee0 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00576ee3 shl ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00576ee6 or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00576ee8 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00576eea cmp edx, 0x808 */ { u32 a_ = edx, b_ = 0x808u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00576ef0 mov eax, edi */ { eax = (u32)(edi); }
  /* 00576ef2 ja 0x577090 */ if (!(CF_|ZF_)) goto L_00577090;
  /* 00576ef8 je 0x577071 */ if (ZF_) goto L_00577071;
  /* 00576efe cmp edx, 0x404 */ { u32 a_ = edx, b_ = 0x404u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00576f04 ja 0x576fc1 */ if (!(CF_|ZF_)) goto L_00576fc1;
  /* 00576f0a je 0x577032 */ if (ZF_) goto L_00577032;
  /* 00576f10 sub edx, 0x104 */ { u32 a_ = edx, b_ = 0x104u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00576f16 je 0x576f84 */ if (ZF_) goto L_00576f84;
  /* 00576f18 sub edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00576f1b je 0x576f84 */ if (ZF_) goto L_00576f84;
  /* 00576f1d sub edx, 0x18 */ { u32 a_ = edx, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00576f20 jne 0x577192 */ if (!ZF_) goto L_00577192;
  /* 00576f26 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 00576f2a mov edx, 7 */ { edx = (u32)(0x7u); }
  /* 00576f2f mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00576f31 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00576f32 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00576f34 mov byte ptr [esp + 0x24], bl */ { const u32 m_ = (u32)(esp + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00576f38 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 00576f3e mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00576f42 mov ebx, 0xff */ { ebx = (u32)(0xffu); }
L_00576f47:;
  /* 00576f47 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 00576f4b mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 00576f4d and ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00576f4f add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00576f52 shr ebp, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 00576f54 and ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00576f57 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00576f58 mov ecx, dword ptr [esi + ebp*4] */ { const u32 m_ = (u32)(esi + ebp * 4u); ecx = (u32)(M32(m_)); }
  /* 00576f5b mov dword ptr [eax - 4], ecx */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00576f5e jns 0x576f6c */ if (!SF_) goto L_00576f6c;
  /* 00576f60 mov cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00576f62 mov edx, 7 */ { edx = (u32)(0x7u); }
  /* 00576f67 mov byte ptr [esp + 0x24], cl */ { const u32 m_ = (u32)(esp + 0x24u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00576f6b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00576f6c:;
  /* 00576f6c mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00576f70 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00576f71 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00576f75 jne 0x576f47 */ if (!ZF_) goto L_00576f47;
  /* 00576f77 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00576f78 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00576f79 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00576f7a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00576f7f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00576f80 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00576f83 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00576f84:;
  /* 00576f84 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 00576f88 mov eax, 7 */ { eax = (u32)(0x7u); }
  /* 00576f8d mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00576f8f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00576f90 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00576f92 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 00576f98 mov ebp, ecx */ { ebp = (u32)(ecx); }
L_00576f9a:;
  /* 00576f9a mov bl, dl */ { ebx = (ebx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 00576f9c mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00576f9e shr bl, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (ebx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00576fa0 and bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00576fa3 mov byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00576fa5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00576fa6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00576fa7 jns 0x576fb1 */ if (!SF_) goto L_00576fb1;
  /* 00576fa9 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00576fab mov eax, 7 */ { eax = (u32)(0x7u); }
  /* 00576fb0 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00576fb1:;
  /* 00576fb1 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00576fb2 jne 0x576f9a */ if (!ZF_) goto L_00576f9a;
  /* 00576fb4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00576fb5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00576fb6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00576fb7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00576fbc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00576fbd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00576fc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00576fc1:;
  /* 00576fc1 sub edx, 0x408 */ { u32 a_ = edx, b_ = 0x408u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00576fc7 je 0x577032 */ if (ZF_) goto L_00577032;
  /* 00576fc9 sub edx, 0x18 */ { u32 a_ = edx, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00576fcc jne 0x577192 */ if (!ZF_) goto L_00577192;
  /* 00576fd2 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 00576fd6 mov edx, 4 */ { edx = (u32)(0x4u); }
  /* 00576fdb mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00576fdd inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00576fde test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00576fe0 mov byte ptr [esp + 0x24], bl */ { const u32 m_ = (u32)(esp + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00576fe4 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 00576fea mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00576fee mov ebx, 0xff */ { ebx = (u32)(0xffu); }
L_00576ff3:;
  /* 00576ff3 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 00576ff7 mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 00576ff9 and ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00576ffb add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00576ffe shr ebp, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 00577000 and ebp, 0xf */ { u32 a_ = ebp, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00577003 sub edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00577006 mov ecx, dword ptr [esi + ebp*4] */ { const u32 m_ = (u32)(esi + ebp * 4u); ecx = (u32)(M32(m_)); }
  /* 00577009 mov dword ptr [eax - 4], ecx */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0057700c jns 0x57701a */ if (!SF_) goto L_0057701a;
  /* 0057700e mov cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577010 mov edx, 4 */ { edx = (u32)(0x4u); }
  /* 00577015 mov byte ptr [esp + 0x24], cl */ { const u32 m_ = (u32)(esp + 0x24u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00577019 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0057701a:;
  /* 0057701a mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0057701e dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057701f mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00577023 jne 0x576ff3 */ if (!ZF_) goto L_00576ff3;
  /* 00577025 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577026 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577027 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577028 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057702d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057702e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577031 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577032:;
  /* 00577032 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 00577036 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 0057703b mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057703d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057703e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577040 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 00577046 mov ebp, ecx */ { ebp = (u32)(ecx); }
L_00577048:;
  /* 00577048 mov bl, dl */ { ebx = (ebx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0057704a mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0057704c shr bl, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = (ebx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 0057704e and bl, 0xf */ { u32 a_ = (ebx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00577051 mov byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00577053 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00577054 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577057 jns 0x577061 */ if (!SF_) goto L_00577061;
  /* 00577059 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057705b mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 00577060 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00577061:;
  /* 00577061 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00577062 jne 0x577048 */ if (!ZF_) goto L_00577048;
  /* 00577064 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577065 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577066 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577067 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057706c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057706d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577070 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577071:;
  /* 00577071 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 00577075 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00577077 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0057707a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0057707c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0057707e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00577083 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00577086 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00577088 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577089 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057708a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057708b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057708c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057708f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577090:;
  /* 00577090 cmp edx, 0x1020 */ { u32 a_ = edx, b_ = 0x1020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577096 ja 0x577182 */ if (!(CF_|ZF_)) goto L_00577182;
  /* 0057709c je 0x577132 */ if (ZF_) goto L_00577132;
  /* 005770a2 cmp edx, 0x820 */ { u32 a_ = edx, b_ = 0x820u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005770a8 je 0x577106 */ if (ZF_) goto L_00577106;
  /* 005770aa cmp edx, 0xf20 */ { u32 a_ = edx, b_ = 0xf20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005770b0 jne 0x577192 */ if (!ZF_) goto L_00577192;
  /* 005770b6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005770b8 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 005770be mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005770c2 lea edx, [edi + 2] */ edx = (u32)((u32)(edi + 0x2u));
  /* 005770c5 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005770c7 mov ebx, 0xff */ { ebx = (u32)(0xffu); }
L_005770cc:;
  /* 005770cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005770ce add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005770d1 mov ax, word ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005770d4 mov byte ptr [edx - 3], bl */ { const u32 m_ = (u32)(edx + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005770d7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005770d9 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005770dc sar ecx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005770df and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005770e2 mov byte ptr [edx - 6], cl */ { const u32 m_ = (u32)(edx + 0xfffffffau); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005770e5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005770e7 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005770ea and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005770ed shl al, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005770f0 mov byte ptr [edx - 5], cl */ { const u32 m_ = (u32)(edx + 0xfffffffbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005770f3 mov byte ptr [edx - 4], al */ { const u32 m_ = (u32)(edx + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005770f6 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005770f7 jne 0x5770cc */ if (!ZF_) goto L_005770cc;
  /* 005770f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005770fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005770fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005770fc mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00577101 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577102 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577105 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577106:;
  /* 00577106 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577108 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 0057710e mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 00577112 mov edi, ecx */ { edi = (u32)(ecx); }
L_00577114:;
  /* 00577114 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00577116 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577119 mov cl, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057711b inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057711c dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057711d mov ecx, dword ptr [esi + ecx*4] */ { const u32 m_ = (u32)(esi + ecx * 4u); ecx = (u32)(M32(m_)); }
  /* 00577120 mov dword ptr [eax - 4], ecx */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00577123 jne 0x577114 */ if (!ZF_) goto L_00577114;
  /* 00577125 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577126 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577127 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577128 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057712d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057712e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577131 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577132:;
  /* 00577132 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577134 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 0057713a mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0057713e lea edx, [edi + 2] */ edx = (u32)((u32)(edi + 0x2u));
  /* 00577141 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00577143 mov ebx, 0xff */ { ebx = (u32)(0xffu); }
L_00577148:;
  /* 00577148 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057714a add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0057714d mov ax, word ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00577150 mov byte ptr [edx - 3], bl */ { const u32 m_ = (u32)(edx + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00577153 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00577155 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00577158 sar ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0057715b and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0057715e mov byte ptr [edx - 6], cl */ { const u32 m_ = (u32)(edx + 0xfffffffau); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00577161 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00577163 sar ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00577166 and cl, 0xfc */ { u32 a_ = (ecx & 0xffu), b_ = 0xfcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00577169 shl al, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 0057716c mov byte ptr [edx - 5], cl */ { const u32 m_ = (u32)(edx + 0xfffffffbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057716f mov byte ptr [edx - 4], al */ { const u32 m_ = (u32)(edx + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00577172 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00577173 jne 0x577148 */ if (!ZF_) goto L_00577148;
  /* 00577175 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577176 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577177 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577178 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057717d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057717e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577181 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577182:;
  /* 00577182 cmp edx, 0x1820 */ { u32 a_ = edx, b_ = 0x1820u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577188 je 0x5771ff */ if (ZF_) goto L_005771ff;
  /* 0057718a cmp edx, 0x2020 */ { u32 a_ = edx, b_ = 0x2020u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577190 je 0x5771bf */ if (ZF_) goto L_005771bf;
L_00577192:;
  /* 00577192 push 0x80000008 */ { u32 v_ = 0x80000008u; esp -= 4; M32(esp) = v_; }
  /* 00577197 mov dword ptr [esp + 0x14], 0x19d */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x19du); }
  /* 0057719f call 0x619d80 */ esp -= 4; M32(esp) = 0x5771a4u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57719fu); RETCHK(0x5771a4u, 0x57719fu); LOADALL;
  /* 005771a4 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 005771a8 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005771ac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005771ad call 0x5be8c0 */ esp -= 4; M32(esp) = 0x5771b2u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x5771adu); RETCHK(0x5771b2u, 0x5771adu); LOADALL;
  /* 005771b2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005771b5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005771b7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005771b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005771b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005771ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005771bb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005771be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005771bf:;
  /* 005771bf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005771c1 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 005771c7 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005771cb lea edx, [edi + 2] */ edx = (u32)((u32)(edi + 0x2u));
  /* 005771ce mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005771d0 mov ebx, 0xff */ { ebx = (u32)(0xffu); }
L_005771d5:;
  /* 005771d5 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005771d7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005771d8 mov byte ptr [edx - 2], cl */ { const u32 m_ = (u32)(edx + 0xfffffffeu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005771db add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005771de mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005771e0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005771e1 mov byte ptr [edx - 5], cl */ { const u32 m_ = (u32)(edx + 0xfffffffbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005771e4 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005771e6 mov byte ptr [edx - 3], bl */ { const u32 m_ = (u32)(edx + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005771e9 mov byte ptr [edx - 4], cl */ { const u32 m_ = (u32)(edx + 0xfffffffcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005771ec add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005771ef dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005771f0 jne 0x5771d5 */ if (!ZF_) goto L_005771d5;
  /* 005771f2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005771f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005771f4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005771f5 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005771fa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005771fb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005771fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005771ff:;
  /* 005771ff mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00577203 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577205 je 0x577241 */ if (ZF_) goto L_00577241;
  /* 00577207 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577209 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 0057720b mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 0057720f lea edx, [edi + 2] */ edx = (u32)((u32)(edi + 0x2u));
  /* 00577212 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00577214 mov ebx, 0xff */ { ebx = (u32)(0xffu); }
L_00577219:;
  /* 00577219 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057721b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057721c mov byte ptr [edx - 2], cl */ { const u32 m_ = (u32)(edx + 0xfffffffeu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057721f add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00577222 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577224 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00577225 mov byte ptr [edx - 5], cl */ { const u32 m_ = (u32)(edx + 0xfffffffbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00577228 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057722a mov byte ptr [edx - 3], bl */ { const u32 m_ = (u32)(edx + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0057722d mov byte ptr [edx - 4], cl */ { const u32 m_ = (u32)(edx + 0xfffffffcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00577230 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00577231 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00577232 jne 0x577219 */ if (!ZF_) goto L_00577219;
  /* 00577234 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577235 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577236 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577237 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057723c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057723d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577240 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577241:;
  /* 00577241 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577243 je 0x57726e */ if (ZF_) goto L_0057726e;
  /* 00577245 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 00577249 lea edx, [edi + 1] */ edx = (u32)((u32)(edi + 0x1u));
  /* 0057724c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0057724e mov ebx, 0xff */ { ebx = (u32)(0xffu); }
L_00577253:;
  /* 00577253 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577255 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00577256 mov byte ptr [edx + 1], cl */ { const u32 m_ = (u32)(edx + 0x1u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00577259 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0057725c mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057725e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057725f mov byte ptr [edx - 4], cl */ { const u32 m_ = (u32)(edx + 0xfffffffcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00577262 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577264 mov byte ptr [edx - 2], bl */ { const u32 m_ = (u32)(edx + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00577267 mov byte ptr [edx - 5], cl */ { const u32 m_ = (u32)(edx + 0xfffffffbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057726a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057726b dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057726c jne 0x577253 */ if (!ZF_) goto L_00577253;
L_0057726e:;
  /* 0057726e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057726f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577270 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577271 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00577276 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577277 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057727a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577280(CPU *c) {
  NATIVE_HOOK(0x577280u) REGS; LOADALL;
L_00577280:;
  /* 00577280 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00577284 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577287 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577288 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577289 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057728a push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0057728c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0057728e call 0x5b34e0 */ esp -= 4; M32(esp) = 0x577293u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x57728eu); RETCHK(0x577293u, 0x57728eu); LOADALL;
  /* 00577293 mov esi, eax */ { esi = (u32)(eax); }
  /* 00577295 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00577297 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057729a cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057729c je 0x57751f */ if (ZF_) goto L_0057751f;
  /* 005772a2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005772a3 mov ebp, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ebp = (u32)(M32(m_)); }
  /* 005772a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005772a8 mov edi, 0x18 */ { edi = (u32)(0x18u); }
  /* 005772ad cmp dword ptr [ebp + 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005772b0 je 0x5772b5 */ if (ZF_) goto L_005772b5;
  /* 005772b2 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
L_005772b5:;
  /* 005772b5 lea ecx, [esp + 0x48] */ ecx = (u32)((u32)(esp + 0x48u));
  /* 005772b9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005772bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005772bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005772bd mov byte ptr [esp + 0x54], 0x42 */ { const u32 m_ = (u32)(esp + 0x54u); M8(m_) = (u8)(0x42u); }
  /* 005772c2 call 0x5b3130 */ esp -= 4; M32(esp) = 0x5772c7u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x5772c2u); RETCHK(0x5772c7u, 0x5772c2u); LOADALL;
  /* 005772c7 lea edx, [esp + 0x50] */ edx = (u32)((u32)(esp + 0x50u));
  /* 005772cb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005772cd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005772ce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005772cf mov byte ptr [esp + 0x5c], 0x4d */ { const u32 m_ = (u32)(esp + 0x5cu); M8(m_) = (u8)(0x4du); }
  /* 005772d4 call 0x5b3130 */ esp -= 4; M32(esp) = 0x5772d9u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x5772d4u); RETCHK(0x5772d9u, 0x5772d4u); LOADALL;
  /* 005772d9 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005772dc cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005772df ja 0x5772ef */ if (!(CF_|ZF_)) goto L_005772ef;
  /* 005772e1 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005772e6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005772e8 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005772ea shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005772ed jmp 0x5772f1 */ goto L_005772f1;
L_005772ef:;
  /* 005772ef xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005772f1:;
  /* 005772f1 mov ecx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005772f4 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005772f6 imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005772f9 add ecx, 0x1f */ { u32 a_ = ecx, b_ = 0x1fu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005772fc shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005772ff and ecx, 0x1ffffffc */ { u32 a_ = ecx, b_ = 0x1ffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00577305 imul ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00577309 lea edx, [ecx + eax + 0x36] */ edx = (u32)((u32)(ecx + eax + 0x36u));
  /* 0057730d lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 00577311 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577312 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577313 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00577317 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57731cu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x577317u); RETCHK(0x57731cu, 0x577317u); LOADALL;
  /* 0057731c lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 00577320 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00577322 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577323 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577324 mov dword ptr [esp + 0x2c], ebx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 00577328 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57732du; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x577328u); RETCHK(0x57732du, 0x577328u); LOADALL;
  /* 0057732d lea edx, [esp + 0x30] */ edx = (u32)((u32)(esp + 0x30u));
  /* 00577331 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00577333 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577334 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577335 mov dword ptr [esp + 0x3c], ebx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 00577339 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57733eu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x577339u); RETCHK(0x57733eu, 0x577339u); LOADALL;
  /* 0057733e add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577341 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577344 ja 0x577354 */ if (!(CF_|ZF_)) goto L_00577354;
  /* 00577346 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057734b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0057734d shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0057734f shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00577352 jmp 0x577356 */ goto L_00577356;
L_00577354:;
  /* 00577354 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00577356:;
  /* 00577356 add eax, 0x36 */ { u32 a_ = eax, b_ = 0x36u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577359 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057735b mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 0057735f lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 00577363 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577364 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577365 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57736au; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x577365u); RETCHK(0x57736au, 0x577365u); LOADALL;
  /* 0057736a lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 0057736e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577370 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577371 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577372 mov dword ptr [esp + 0x34], 0x28 */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(0x28u); }
  /* 0057737a call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57737fu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x57737au); RETCHK(0x57737fu, 0x57737au); LOADALL;
  /* 0057737f mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577382 lea eax, [esp + 0x30] */ eax = (u32)((u32)(esp + 0x30u));
  /* 00577386 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577388 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577389 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057738a mov dword ptr [esp + 0x3c], edx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edx); }
  /* 0057738e call 0x5b3a20 */ esp -= 4; M32(esp) = 0x577393u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x57738eu); RETCHK(0x577393u, 0x57738eu); LOADALL;
  /* 00577393 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00577396 lea edx, [esp + 0x38] */ edx = (u32)((u32)(esp + 0x38u));
  /* 0057739a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057739c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057739d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057739e mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 005773a2 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773a7u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773a2u); RETCHK(0x5773a7u, 0x5773a2u); LOADALL;
  /* 005773a7 lea eax, [esp + 0x40] */ eax = (u32)((u32)(esp + 0x40u));
  /* 005773ab push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005773ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005773ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773af mov dword ptr [esp + 0x4c], 1 */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(0x1u); }
  /* 005773b7 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773bcu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773b7u); RETCHK(0x5773bcu, 0x5773b7u); LOADALL;
  /* 005773bc lea ecx, [esp + 0x5c] */ ecx = (u32)((u32)(esp + 0x5cu));
  /* 005773c0 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005773c2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005773c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773c4 mov dword ptr [esp + 0x68], edi */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)(edi); }
  /* 005773c8 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773cdu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773c8u); RETCHK(0x5773cdu, 0x5773c8u); LOADALL;
  /* 005773cd add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005773d0 lea edx, [esp + 0x24] */ edx = (u32)((u32)(esp + 0x24u));
  /* 005773d4 mov dword ptr [esp + 0x24], ebx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebx); }
  /* 005773d8 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005773da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005773db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773dc call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773e1u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773dcu); RETCHK(0x5773e1u, 0x5773dcu); LOADALL;
  /* 005773e1 lea eax, [esp + 0x34] */ eax = (u32)((u32)(esp + 0x34u));
  /* 005773e5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005773e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005773e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773e9 mov dword ptr [esp + 0x40], ebx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ebx); }
  /* 005773ed call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773f2u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773edu); RETCHK(0x5773f2u, 0x5773edu); LOADALL;
  /* 005773f2 lea ecx, [esp + 0x44] */ ecx = (u32)((u32)(esp + 0x44u));
  /* 005773f6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005773f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005773f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773fa mov dword ptr [esp + 0x50], ebx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ebx); }
  /* 005773fe call 0x5b3a20 */ esp -= 4; M32(esp) = 0x577403u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773feu); RETCHK(0x577403u, 0x5773feu); LOADALL;
  /* 00577403 lea edx, [esp + 0x54] */ edx = (u32)((u32)(esp + 0x54u));
  /* 00577407 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577409 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057740a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057740b mov dword ptr [esp + 0x60], ebx */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)(ebx); }
  /* 0057740f call 0x5b3a20 */ esp -= 4; M32(esp) = 0x577414u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x57740fu); RETCHK(0x577414u, 0x57740fu); LOADALL;
  /* 00577414 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577417 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057741a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057741c ja 0x57749d */ if (!(CF_|ZF_)) goto L_0057749d;
  /* 0057741e mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00577421 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 00577426 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00577428 mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 0057742c shl ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0057742e lea ecx, [esp + 0x38] */ ecx = (u32)((u32)(esp + 0x38u));
  /* 00577432 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577433 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577434 mov dword ptr [esp + 0x40], ebx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ebx); }
  /* 00577438 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57743du; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x577438u); RETCHK(0x57743du, 0x577438u); LOADALL;
  /* 0057743d lea edx, [esp + 0x44] */ edx = (u32)((u32)(esp + 0x44u));
  /* 00577441 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577443 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577444 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577445 mov dword ptr [esp + 0x50], ebx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ebx); }
  /* 00577449 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57744eu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x577449u); RETCHK(0x57744eu, 0x577449u); LOADALL;
  /* 0057744e add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577451 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577453 jle 0x5774c0 */ if ((ZF_|LT_)) goto L_005774c0;
  /* 00577455 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 00577459 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057745a mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 0057745e jmp 0x577464 */ goto L_00577464;
L_00577460:;
  /* 00577460 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
L_00577464:;
  /* 00577464 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577467 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577469 mov byte ptr [esp + 0x4c], cl */ { const u32 m_ = (u32)(esp + 0x4cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057746d mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057746f lea ecx, [esp + 0x4c] */ ecx = (u32)((u32)(esp + 0x4cu));
  /* 00577473 mov byte ptr [esp + 0x4d], dl */ { const u32 m_ = (u32)(esp + 0x4du); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00577477 mov al, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057747a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057747b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057747c mov byte ptr [esp + 0x56], al */ { const u32 m_ = (u32)(esp + 0x56u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00577480 mov byte ptr [esp + 0x57], 0xff */ { const u32 m_ = (u32)(esp + 0x57u); M8(m_) = (u8)(0xffu); }
  /* 00577485 call 0x5b3130 */ esp -= 4; M32(esp) = 0x57748au; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x577485u); RETCHK(0x57748au, 0x577485u); LOADALL;
  /* 0057748a mov ecx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ecx = (u32)(M32(m_)); }
  /* 0057748e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577491 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00577494 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00577495 mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 00577499 jne 0x577460 */ if (!ZF_) goto L_00577460;
  /* 0057749b jmp 0x5774c0 */ goto L_005774c0;
L_0057749d:;
  /* 0057749d lea edx, [esp + 0x48] */ edx = (u32)((u32)(esp + 0x48u));
  /* 005774a1 mov dword ptr [esp + 0x48], ebx */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(ebx); }
  /* 005774a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005774a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005774a7 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5774acu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5774a7u); RETCHK(0x5774acu, 0x5774a7u); LOADALL;
  /* 005774ac lea eax, [esp + 0x48] */ eax = (u32)((u32)(esp + 0x48u));
  /* 005774b0 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005774b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005774b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005774b4 mov dword ptr [esp + 0x54], ebx */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(ebx); }
  /* 005774b8 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5774bdu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5774b8u); RETCHK(0x5774bdu, 0x5774b8u); LOADALL;
  /* 005774bd add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005774c0:;
  /* 005774c0 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005774c3 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005774c9 push 0x10000 */ { u32 v_ = 0x10000u; esp -= 4; M32(esp) = v_; }
  /* 005774ce lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 005774d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005774d2 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5774d8u; SAVEALL; call_ind(c, t_); RETCHK(0x5774d8u, 0x5774d2u); LOADALL; }
  /* 005774d8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005774db add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005774de dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005774df mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005774e3 js 0x5774f9 */ if (SF_) goto L_005774f9;
L_005774e5:;
  /* 005774e5 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005774e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005774ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005774eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005774ec push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005774ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005774ee call 0x577530 */ esp -= 4; M32(esp) = 0x5774f3u; SAVEALL; F_00577530(c); ABI_CHECK(0x577530u, 0x5774eeu); RETCHK(0x5774f3u, 0x5774eeu); LOADALL;
  /* 005774f3 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005774f6 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005774f7 jns 0x5774e5 */ if (!SF_) goto L_005774e5;
L_005774f9:;
  /* 005774f9 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005774fd mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00577503 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577504 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57750au; SAVEALL; call_ind(c, t_); RETCHK(0x57750au, 0x577504u); LOADALL; }
  /* 0057750a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057750c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057750d call 0x5b3410 */ esp -= 4; M32(esp) = 0x577512u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x57750du); RETCHK(0x577512u, 0x57750du); LOADALL;
  /* 00577512 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577515 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 00577517 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577518 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577519 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057751a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057751b add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057751e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057751f:;
  /* 0057751f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577520 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00577522 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577523 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577526 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577367(CPU *c) {
  NATIVE_HOOK(0x577367u) REGS; LOADALL;
L_00577367:;
  /* 00577367 mov byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M8(m_) = (u8)(0x0u); }
  /* 0057736a lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 0057736e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577370 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577371 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577372 mov dword ptr [esp + 0x34], 0x28 */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(0x28u); }
  /* 0057737a call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57737fu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x57737au); RETCHK(0x57737fu, 0x57737au); LOADALL;
  /* 0057737f mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577382 lea eax, [esp + 0x30] */ eax = (u32)((u32)(esp + 0x30u));
  /* 00577386 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577388 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577389 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057738a mov dword ptr [esp + 0x3c], edx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edx); }
  /* 0057738e call 0x5b3a20 */ esp -= 4; M32(esp) = 0x577393u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x57738eu); RETCHK(0x577393u, 0x57738eu); LOADALL;
  /* 00577393 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00577396 lea edx, [esp + 0x38] */ edx = (u32)((u32)(esp + 0x38u));
  /* 0057739a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057739c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057739d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057739e mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 005773a2 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773a7u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773a2u); RETCHK(0x5773a7u, 0x5773a2u); LOADALL;
  /* 005773a7 lea eax, [esp + 0x40] */ eax = (u32)((u32)(esp + 0x40u));
  /* 005773ab push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005773ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005773ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773af mov dword ptr [esp + 0x4c], 1 */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(0x1u); }
  /* 005773b7 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773bcu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773b7u); RETCHK(0x5773bcu, 0x5773b7u); LOADALL;
  /* 005773bc lea ecx, [esp + 0x5c] */ ecx = (u32)((u32)(esp + 0x5cu));
  /* 005773c0 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005773c2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005773c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773c4 mov dword ptr [esp + 0x68], edi */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)(edi); }
  /* 005773c8 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773cdu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773c8u); RETCHK(0x5773cdu, 0x5773c8u); LOADALL;
  /* 005773cd add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005773d0 lea edx, [esp + 0x24] */ edx = (u32)((u32)(esp + 0x24u));
  /* 005773d4 mov dword ptr [esp + 0x24], ebx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebx); }
  /* 005773d8 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005773da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005773db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773dc call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773e1u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773dcu); RETCHK(0x5773e1u, 0x5773dcu); LOADALL;
  /* 005773e1 lea eax, [esp + 0x34] */ eax = (u32)((u32)(esp + 0x34u));
  /* 005773e5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005773e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005773e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773e9 mov dword ptr [esp + 0x40], ebx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ebx); }
  /* 005773ed call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5773f2u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773edu); RETCHK(0x5773f2u, 0x5773edu); LOADALL;
  /* 005773f2 lea ecx, [esp + 0x44] */ ecx = (u32)((u32)(esp + 0x44u));
  /* 005773f6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005773f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005773f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005773fa mov dword ptr [esp + 0x50], ebx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ebx); }
  /* 005773fe call 0x5b3a20 */ esp -= 4; M32(esp) = 0x577403u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5773feu); RETCHK(0x577403u, 0x5773feu); LOADALL;
  /* 00577403 lea edx, [esp + 0x54] */ edx = (u32)((u32)(esp + 0x54u));
  /* 00577407 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577409 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057740a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057740b mov dword ptr [esp + 0x60], ebx */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)(ebx); }
  /* 0057740f call 0x5b3a20 */ esp -= 4; M32(esp) = 0x577414u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x57740fu); RETCHK(0x577414u, 0x57740fu); LOADALL;
  /* 00577414 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577417 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057741a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057741c ja 0x57749d */ if (!(CF_|ZF_)) goto L_0057749d;
  /* 0057741e mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00577421 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 00577426 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00577428 mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 0057742c shl ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0057742e lea ecx, [esp + 0x38] */ ecx = (u32)((u32)(esp + 0x38u));
  /* 00577432 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577433 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577434 mov dword ptr [esp + 0x40], ebx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ebx); }
  /* 00577438 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57743du; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x577438u); RETCHK(0x57743du, 0x577438u); LOADALL;
  /* 0057743d lea edx, [esp + 0x44] */ edx = (u32)((u32)(esp + 0x44u));
  /* 00577441 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577443 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577444 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577445 mov dword ptr [esp + 0x50], ebx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ebx); }
  /* 00577449 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57744eu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x577449u); RETCHK(0x57744eu, 0x577449u); LOADALL;
  /* 0057744e add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577451 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577453 jle 0x5774c0 */ if ((ZF_|LT_)) goto L_005774c0;
  /* 00577455 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 00577459 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057745a mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 0057745e jmp 0x577464 */ goto L_00577464;
L_00577460:;
  /* 00577460 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
L_00577464:;
  /* 00577464 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577467 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577469 mov byte ptr [esp + 0x4c], cl */ { const u32 m_ = (u32)(esp + 0x4cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057746d mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057746f lea ecx, [esp + 0x4c] */ ecx = (u32)((u32)(esp + 0x4cu));
  /* 00577473 mov byte ptr [esp + 0x4d], dl */ { const u32 m_ = (u32)(esp + 0x4du); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00577477 mov al, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057747a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057747b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057747c mov byte ptr [esp + 0x56], al */ { const u32 m_ = (u32)(esp + 0x56u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00577480 mov byte ptr [esp + 0x57], 0xff */ { const u32 m_ = (u32)(esp + 0x57u); M8(m_) = (u8)(0xffu); }
  /* 00577485 call 0x5b3130 */ esp -= 4; M32(esp) = 0x57748au; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x577485u); RETCHK(0x57748au, 0x577485u); LOADALL;
  /* 0057748a mov ecx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ecx = (u32)(M32(m_)); }
  /* 0057748e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577491 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00577494 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00577495 mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 00577499 jne 0x577460 */ if (!ZF_) goto L_00577460;
  /* 0057749b jmp 0x5774c0 */ goto L_005774c0;
L_0057749d:;
  /* 0057749d lea edx, [esp + 0x48] */ edx = (u32)((u32)(esp + 0x48u));
  /* 005774a1 mov dword ptr [esp + 0x48], ebx */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(ebx); }
  /* 005774a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005774a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005774a7 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5774acu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5774a7u); RETCHK(0x5774acu, 0x5774a7u); LOADALL;
  /* 005774ac lea eax, [esp + 0x48] */ eax = (u32)((u32)(esp + 0x48u));
  /* 005774b0 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005774b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005774b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005774b4 mov dword ptr [esp + 0x54], ebx */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(ebx); }
  /* 005774b8 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x5774bdu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x5774b8u); RETCHK(0x5774bdu, 0x5774b8u); LOADALL;
  /* 005774bd add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005774c0:;
  /* 005774c0 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005774c3 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005774c9 push 0x10000 */ { u32 v_ = 0x10000u; esp -= 4; M32(esp) = v_; }
  /* 005774ce lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 005774d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005774d2 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5774d8u; SAVEALL; call_ind(c, t_); RETCHK(0x5774d8u, 0x5774d2u); LOADALL; }
  /* 005774d8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005774db add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005774de dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005774df mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005774e3 js 0x5774f9 */ if (SF_) goto L_005774f9;
L_005774e5:;
  /* 005774e5 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005774e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005774ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005774eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005774ec push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005774ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005774ee call 0x577530 */ esp -= 4; M32(esp) = 0x5774f3u; SAVEALL; F_00577530(c); ABI_CHECK(0x577530u, 0x5774eeu); RETCHK(0x5774f3u, 0x5774eeu); LOADALL;
  /* 005774f3 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005774f6 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005774f7 jns 0x5774e5 */ if (!SF_) goto L_005774e5;
L_005774f9:;
  /* 005774f9 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005774fd mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00577503 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577504 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57750au; SAVEALL; call_ind(c, t_); RETCHK(0x57750au, 0x577504u); LOADALL; }
  /* 0057750a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057750c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057750d call 0x5b3410 */ esp -= 4; M32(esp) = 0x577512u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x57750du); RETCHK(0x577512u, 0x57750du); LOADALL;
  /* 00577512 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577515 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 00577517 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577518 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577519 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057751a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057751b add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057751e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057746e(CPU *c) {
  NATIVE_HOOK(0x57746eu) REGS; LOADALL;
  goto L_0057746e;
L_00577460:;
  /* 00577460 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 00577464 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577467 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577469 mov byte ptr [esp + 0x4c], cl */ { const u32 m_ = (u32)(esp + 0x4cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057746d mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  goto L_0057746f;
L_0057746e:;
  /* 0057746e adc byte ptr [ebp - 0x77b3dbb4], cl */ { const u32 m_ = (u32)(ebp + 0x884c244cu); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  goto L_00577474;
L_0057746f:;
  /* 0057746f lea ecx, [esp + 0x4c] */ ecx = (u32)((u32)(esp + 0x4cu));
  /* 00577473 mov byte ptr [esp + 0x4d], dl */ { const u32 m_ = (u32)(esp + 0x4du); M8(m_) = (u8)((edx & 0xffu)); }
  goto L_00577477;
L_00577474:;
  /* 00577474 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 00577475 and al, 0x4d */ { u32 a_ = (eax & 0xffu), b_ = 0x4du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_00577477:;
  /* 00577477 mov al, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057747a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057747b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057747c mov byte ptr [esp + 0x56], al */ { const u32 m_ = (u32)(esp + 0x56u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00577480 mov byte ptr [esp + 0x57], 0xff */ { const u32 m_ = (u32)(esp + 0x57u); M8(m_) = (u8)(0xffu); }
  /* 00577485 call 0x5b3130 */ esp -= 4; M32(esp) = 0x57748au; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x577485u); RETCHK(0x57748au, 0x577485u); LOADALL;
  /* 0057748a mov ecx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ecx = (u32)(M32(m_)); }
  /* 0057748e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577491 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00577494 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00577495 mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 00577499 jne 0x577460 */ if (!ZF_) goto L_00577460;
  /* 0057749b jmp 0x5774c0 */ goto L_005774c0;
L_005774c0:;
  /* 005774c0 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005774c3 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005774c9 push 0x10000 */ { u32 v_ = 0x10000u; esp -= 4; M32(esp) = v_; }
  /* 005774ce lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 005774d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005774d2 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5774d8u; SAVEALL; call_ind(c, t_); RETCHK(0x5774d8u, 0x5774d2u); LOADALL; }
  /* 005774d8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005774db add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005774de dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005774df mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005774e3 js 0x5774f9 */ if (SF_) goto L_005774f9;
L_005774e5:;
  /* 005774e5 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005774e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005774ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005774eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005774ec push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005774ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005774ee call 0x577530 */ esp -= 4; M32(esp) = 0x5774f3u; SAVEALL; F_00577530(c); ABI_CHECK(0x577530u, 0x5774eeu); RETCHK(0x5774f3u, 0x5774eeu); LOADALL;
  /* 005774f3 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005774f6 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005774f7 jns 0x5774e5 */ if (!SF_) goto L_005774e5;
L_005774f9:;
  /* 005774f9 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005774fd mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00577503 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577504 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57750au; SAVEALL; call_ind(c, t_); RETCHK(0x57750au, 0x577504u); LOADALL; }
  /* 0057750a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057750c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057750d call 0x5b3410 */ esp -= 4; M32(esp) = 0x577512u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x57750du); RETCHK(0x577512u, 0x57750du); LOADALL;
  /* 00577512 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577515 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 00577517 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577518 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577519 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057751a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057751b add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057751e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577478(CPU *c) {
  NATIVE_HOOK(0x577478u) REGS; LOADALL;
  goto L_00577478;
L_00577460:;
  /* 00577460 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 00577464 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577467 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577469 mov byte ptr [esp + 0x4c], cl */ { const u32 m_ = (u32)(esp + 0x4cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057746d mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057746f lea ecx, [esp + 0x4c] */ ecx = (u32)((u32)(esp + 0x4cu));
  /* 00577473 mov byte ptr [esp + 0x4d], dl */ { const u32 m_ = (u32)(esp + 0x4du); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00577477 mov al, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  goto L_0057747a;
L_00577478:;
  /* 00577478 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00577479 call dword ptr [ecx + 0x56] */ { const u32 m_ = (u32)(ecx + 0x56u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57747cu; SAVEALL; call_ind(c, t_); RETCHK(0x57747cu, 0x577479u); LOADALL; }
  goto L_0057747c;
L_0057747a:;
  /* 0057747a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057747b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_0057747c:;
  /* 0057747c mov byte ptr [esp + 0x56], al */ { const u32 m_ = (u32)(esp + 0x56u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00577480 mov byte ptr [esp + 0x57], 0xff */ { const u32 m_ = (u32)(esp + 0x57u); M8(m_) = (u8)(0xffu); }
  /* 00577485 call 0x5b3130 */ esp -= 4; M32(esp) = 0x57748au; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x577485u); RETCHK(0x57748au, 0x577485u); LOADALL;
  /* 0057748a mov ecx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ecx = (u32)(M32(m_)); }
  /* 0057748e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577491 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00577494 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00577495 mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 00577499 jne 0x577460 */ if (!ZF_) goto L_00577460;
  /* 0057749b jmp 0x5774c0 */ goto L_005774c0;
L_005774c0:;
  /* 005774c0 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005774c3 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005774c9 push 0x10000 */ { u32 v_ = 0x10000u; esp -= 4; M32(esp) = v_; }
  /* 005774ce lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 005774d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005774d2 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5774d8u; SAVEALL; call_ind(c, t_); RETCHK(0x5774d8u, 0x5774d2u); LOADALL; }
  /* 005774d8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005774db add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005774de dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005774df mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005774e3 js 0x5774f9 */ if (SF_) goto L_005774f9;
L_005774e5:;
  /* 005774e5 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005774e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005774ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005774eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005774ec push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005774ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005774ee call 0x577530 */ esp -= 4; M32(esp) = 0x5774f3u; SAVEALL; F_00577530(c); ABI_CHECK(0x577530u, 0x5774eeu); RETCHK(0x5774f3u, 0x5774eeu); LOADALL;
  /* 005774f3 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005774f6 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005774f7 jns 0x5774e5 */ if (!SF_) goto L_005774e5;
L_005774f9:;
  /* 005774f9 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005774fd mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00577503 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577504 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57750au; SAVEALL; call_ind(c, t_); RETCHK(0x57750au, 0x577504u); LOADALL; }
  /* 0057750a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057750c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057750d call 0x5b3410 */ esp -= 4; M32(esp) = 0x577512u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x57750du); RETCHK(0x577512u, 0x57750du); LOADALL;
  /* 00577512 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577515 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 00577517 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577518 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577519 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057751a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057751b add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057751e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577530(CPU *c) {
  NATIVE_HOOK(0x577530u) REGS; LOADALL;
L_00577530:;
  /* 00577530 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00577534 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577535 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00577536 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577537 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057753a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057753b jne 0x57757f */ if (!ZF_) goto L_0057757f;
  /* 0057753d mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 00577541 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 00577545 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00577547 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057754a mov edi, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edi = (u32)(M32(m_)); }
  /* 0057754d imul ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00577552 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577555 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00577557 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577559 jle 0x577578 */ if ((ZF_|LT_)) goto L_00577578;
L_0057755b:;
  /* 0057755b mov dl, byte ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057755e mov bl, byte ptr [ecx + eax + 1] */ { const u32 m_ = (u32)(ecx + eax + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577562 mov edi, eax */ { edi = (u32)(eax); }
  /* 00577564 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577567 shl dl, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (edx & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 0057756a sar edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0057756c or dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0057756e mov byte ptr [edi + ebp], dl */ { const u32 m_ = (u32)(edi + ebp); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00577571 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577574 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577576 jl 0x57755b */ if (LT_) goto L_0057755b;
L_00577578:;
  /* 00577578 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0057757b sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0057757d jmp 0x5775f9 */ goto L_005775f9;
L_0057757f:;
  /* 0057757f cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577582 jne 0x5775b1 */ if (!ZF_) goto L_005775b1;
  /* 00577584 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00577588 mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 0057758b mov ebp, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ebp = (u32)(M32(m_)); }
  /* 0057758e imul esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); s64 p_ = (s64)(s32)esi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00577593 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00577596 add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00577598 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 0057759c mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0057759e mov edi, ebp */ { edi = (u32)(ebp); }
  /* 005775a0 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005775a3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005775a5 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005775a7 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005775aa rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005775ac mov ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ebx = (u32)(M32(m_)); }
  /* 005775af jmp 0x5775f9 */ goto L_005775f9;
L_005775b1:;
  /* 005775b1 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 005775b5 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 005775b9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005775bb mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005775be mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005775c1 imul eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005775c6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005775c9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005775cb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005775cd jle 0x5775f3 */ if ((ZF_|LT_)) goto L_005775f3;
  /* 005775cf add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005775d2 lea ecx, [ebp + 1] */ ecx = (u32)((u32)(ebp + 0x1u));
L_005775d5:;
  /* 005775d5 mov dl, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005775d8 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005775d9 mov byte ptr [ecx + 1], dl */ { const u32 m_ = (u32)(ecx + 0x1u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005775dc mov dl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005775df mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005775e1 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005775e3 mov byte ptr [ecx - 1], dl */ { const u32 m_ = (u32)(ecx + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005775e6 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005775e9 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005775ec add ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005775ef cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005775f1 jl 0x5775d5 */ if (LT_) goto L_005775d5;
L_005775f3:;
  /* 005775f3 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 005775f6 lea ebx, [esi + esi*2] */ ebx = (u32)((u32)(esi + esi * 2u));
L_005775f9:;
  /* 005775f9 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005775fd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005775fe push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005775ff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577600 call 0x5b3130 */ esp -= 4; M32(esp) = 0x577605u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x577600u); RETCHK(0x577605u, 0x577600u); LOADALL;
  /* 00577605 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577608 test bl, 3 */ { u32 a_ = (ebx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057760b je 0x577628 */ if (ZF_) goto L_00577628;
L_0057760d:;
  /* 0057760d lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 00577611 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00577613 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577614 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577615 mov byte ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M8(m_) = (u8)(0x0u); }
  /* 0057761a call 0x5b3130 */ esp -= 4; M32(esp) = 0x57761fu; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x57761au); RETCHK(0x57761fu, 0x57761au); LOADALL;
  /* 0057761f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577622 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00577623 test bl, 3 */ { u32 a_ = (ebx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00577626 jne 0x57760d */ if (!ZF_) goto L_0057760d;
L_00577628:;
  /* 00577628 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577629 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057762a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057762c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057762d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057762e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577630(CPU *c) {
  NATIVE_HOOK(0x577630u) REGS; LOADALL;
L_00577630:;
  /* 00577630 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577631 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00577635 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577637 push 0x68a8c8 */ { u32 v_ = 0x68a8c8u; esp -= 4; M32(esp) = v_; }
  /* 0057763c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057763d call 0x5b3a40 */ esp -= 4; M32(esp) = 0x577642u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x57763du); RETCHK(0x577642u, 0x57763du); LOADALL;
  /* 00577642 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577645 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577647 jne 0x57764b */ if (!ZF_) goto L_0057764b;
  /* 00577649 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057764a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057764b:;
  /* 0057764b cmp dword ptr [esp + 0xc], 8 */ { const u32 m_ = (u32)(esp + 0xcu); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577650 jne 0x577668 */ if (!ZF_) goto L_00577668;
  /* 00577652 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577654 push 0x68a8a0 */ { u32 v_ = 0x68a8a0u; esp -= 4; M32(esp) = v_; }
  /* 00577659 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057765a call 0x5b3a40 */ esp -= 4; M32(esp) = 0x57765fu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x57765au); RETCHK(0x57765fu, 0x57765au); LOADALL;
  /* 0057765f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577662 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577664 jne 0x577668 */ if (!ZF_) goto L_00577668;
  /* 00577666 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577667 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577668:;
  /* 00577668 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057766a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057766b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577670(CPU *c) {
  NATIVE_HOOK(0x577670u) REGS; LOADALL;
L_00577670:;
  /* 00577670 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577674 mov eax, dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00577677 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577679 je 0x577688 */ if (ZF_) goto L_00577688;
  /* 0057767b mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0057767e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577680 je 0x577688 */ if (ZF_) goto L_00577688;
  /* 00577682 mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 00577687 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577688:;
  /* 00577688 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057768a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577690(CPU *c) {
  NATIVE_HOOK(0x577690u) REGS; LOADALL;
L_00577690:;
  /* 00577690 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577691 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00577695 mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00577698 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057769a jne 0x5776ab */ if (!ZF_) goto L_005776ab;
  /* 0057769c mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005776a1 mov ecx, dword ptr [0x9bf4e0] */ { const u32 m_ = (u32)(0x9bf4e0u); ecx = (u32)(M32(m_)); }
  /* 005776a7 mov eax, dword ptr [ecx + eax + 0x3c] */ { const u32 m_ = (u32)(ecx + eax + 0x3cu); eax = (u32)(M32(m_)); }
L_005776ab:;
  /* 005776ab push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005776ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005776ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005776af call 0x5becf0 */ esp -= 4; M32(esp) = 0x5776b4u; SAVEALL; F_005becf0(c); ABI_CHECK(0x5becf0u, 0x5776afu); RETCHK(0x5776b4u, 0x5776afu); LOADALL;
  /* 005776b4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005776b7 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005776b9 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005776bb and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005776bd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005776be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005776c0(CPU *c) {
  NATIVE_HOOK(0x5776c0u) REGS; LOADALL;
L_005776c0:;
  /* 005776c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005776c1 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005776c5 mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 005776c8 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005776ca je 0x5777fc */ if (ZF_) goto L_005777fc;
  /* 005776d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005776d1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005776d2 mov bp, word ptr [eax + 0x52] */ { const u32 m_ = (u32)(eax + 0x52u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005776d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005776d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005776d8 mov di, word ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005776dc cmp di, bp */ { u32 a_ = (edi & 0xffffu), b_ = (ebp & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005776df je 0x57778b */ if (ZF_) goto L_0057778b;
  /* 005776e5 mov ebx, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ebx = (u32)(M32(m_)); }
  /* 005776e8 movsx ecx, di */ { ecx = (u32)((u32)sxt((edi & 0xffffu), 2) & 0xffffffffu); }
  /* 005776eb cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005776ed jge 0x57778b */ if (!LT_) goto L_0057778b;
  /* 005776f3 movsx esi, bp */ { esi = (u32)((u32)sxt((ebp & 0xffffu), 2) & 0xffffffffu); }
  /* 005776f6 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005776f8 jge 0x57778b */ if (!LT_) goto L_0057778b;
  /* 005776fe mov edx, dword ptr [edx + 0x5c] */ { const u32 m_ = (u32)(edx + 0x5cu); edx = (u32)(M32(m_)); }
  /* 00577701 lea edi, [ecx*8] */ edi = (u32)((u32)(ecx * 8u));
  /* 00577708 fld dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 0057770b sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057770d fmul dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00577710 lea ecx, [edx + edi*4] */ ecx = (u32)((u32)(edx + edi * 4u));
  /* 00577713 lea edi, [esi*8] */ edi = (u32)((u32)(esi * 8u));
  /* 0057771a sub edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057771c fld dword ptr [edx + edi*4 + 0x10] */ { const u32 m_ = (u32)(edx + edi * 4u + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00577720 lea edx, [edx + edi*4] */ edx = (u32)((u32)(edx + edi * 4u));
  /* 00577723 fsub dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00577726 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00577728 fadd dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057772b fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057772e fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00577731 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00577734 fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00577737 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0057773a fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057773d fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00577740 fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00577743 fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00577746 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00577749 fld dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0057774c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057774e fst dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); }
  /* 00577751 fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 00577754 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00577756 fst dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); }
  /* 0057775a fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057775d fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 00577760 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00577762 fst dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 00577766 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00577769 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0057776c fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0057776e fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00577771 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00577773 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00577775 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00577778 fadd dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057777c fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057777f fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00577782 fadd dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00577786 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00577789 jmp 0x5777e6 */ goto L_005777e6;
L_0057778b:;
  /* 0057778b mov esi, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); esi = (u32)(M32(m_)); }
  /* 0057778e movsx ecx, di */ { ecx = (u32)((u32)sxt((edi & 0xffffu), 2) & 0xffffffffu); }
  /* 00577791 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577793 jge 0x5777c7 */ if (!LT_) goto L_005777c7;
  /* 00577795 movsx edi, bp */ { edi = (u32)((u32)sxt((ebp & 0xffffu), 2) & 0xffffffffu); }
  /* 00577798 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057779a jge 0x5777c7 */ if (!LT_) goto L_005777c7;
  /* 0057779c lea esi, [ecx*8] */ esi = (u32)((u32)(ecx * 8u));
  /* 005777a3 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005777a5 mov ecx, dword ptr [edx + 0x5c] */ { const u32 m_ = (u32)(edx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005777a8 lea edx, [ecx + esi*4 + 4] */ edx = (u32)((u32)(ecx + esi * 4u + 0x4u));
  /* 005777ac lea ecx, [eax + 0x1c] */ ecx = (u32)((u32)(eax + 0x1cu));
  /* 005777af mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 005777b1 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 005777b3 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005777b6 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005777b9 mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 005777bc mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 005777bf mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005777c2 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 005777c5 jmp 0x5777e6 */ goto L_005777e6;
L_005777c7:;
  /* 005777c7 mov ecx, dword ptr [edx + 0x5c] */ { const u32 m_ = (u32)(edx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005777ca lea edx, [eax + 0x1c] */ edx = (u32)((u32)(eax + 0x1cu));
  /* 005777cd add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005777d0 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 005777d2 mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005777d4 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005777d7 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005777da mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 005777dd mov dword ptr [edx + 8], esi */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(esi); }
  /* 005777e0 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005777e3 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
L_005777e6:;
  /* 005777e6 mov edx, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); edx = (u32)(M32(m_)); }
  /* 005777e9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005777ea and edx, 0xfffffffd */ { u32 a_ = edx, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005777ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005777ee mov dword ptr [eax + 0x4c], edx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(edx); }
  /* 005777f1 mov cl, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005777f4 or cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005777f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005777f8 mov byte ptr [eax + 3], cl */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005777fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005777fc:;
  /* 005777fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005777fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577800(CPU *c) {
  NATIVE_HOOK(0x577800u) REGS; LOADALL;
L_00577800:;
  /* 00577800 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577801 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577802 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577803 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00577807 mov al, byte ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057780a mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0057780d test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057780f je 0x57781a */ if (ZF_) goto L_0057781a;
  /* 00577811 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577812 call 0x5776c0 */ esp -= 4; M32(esp) = 0x577817u; SAVEALL; F_005776c0(c); ABI_CHECK(0x5776c0u, 0x577812u); RETCHK(0x577817u, 0x577812u); LOADALL;
  /* 00577817 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057781a:;
  /* 0057781a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057781b call 0x5ab990 */ esp -= 4; M32(esp) = 0x577820u; SAVEALL; F_005ab990(c); ABI_CHECK(0x5ab990u, 0x57781bu); RETCHK(0x577820u, 0x57781bu); LOADALL;
  /* 00577820 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577823 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577825 jne 0x577831 */ if (!ZF_) goto L_00577831;
  /* 00577827 test byte ptr [edi + 3], 1 */ { const u32 m_ = (u32)(edi + 0x3u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057782b je 0x577940 */ if (ZF_) goto L_00577940;
L_00577831:;
  /* 00577831 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577832 call 0x5abd50 */ esp -= 4; M32(esp) = 0x577837u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x577832u); RETCHK(0x577837u, 0x577832u); LOADALL;
  /* 00577837 mov esi, eax */ { esi = (u32)(eax); }
  /* 00577839 lea eax, [edi + 0x1c] */ eax = (u32)((u32)(edi + 0x1cu));
  /* 0057783c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057783d lea ecx, [edi + 0x2c] */ ecx = (u32)((u32)(edi + 0x2cu));
  /* 00577840 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577841 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577842 call 0x5aaba0 */ esp -= 4; M32(esp) = 0x577847u; SAVEALL; F_005aaba0(c); ABI_CHECK(0x5aaba0u, 0x577842u); RETCHK(0x577847u, 0x577842u); LOADALL;
  /* 00577847 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057784a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057784d and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00577850 cmp dl, 3 */ { u32 a_ = (edx & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00577853 je 0x577932 */ if (ZF_) goto L_00577932;
  /* 00577859 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0057785c fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0057785e fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00577861 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00577863 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00577865 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 00577867 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00577869 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0057786b fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0057786d fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057786f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00577871 fstp st(3) */ ST(3) = ST(0); FPOP();
  /* 00577873 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00577875 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00577877 fld dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0057787a fld dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0057787d fld dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); FPUSH((double)MF32(m_)); }
  /* 00577880 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00577882 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00577884 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 00577886 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00577888 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0057788a fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0057788c fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057788e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00577890 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00577894 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00577896 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00577898 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0057789a fld dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0057789d fld dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005778a0 fld dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); FPUSH((double)MF32(m_)); }
  /* 005778a3 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005778a5 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005778a7 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 005778a9 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 005778ab faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005778ad fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005778af fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005778b1 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005778b3 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005778b7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005778b9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005778bb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005778bd fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005778c1 fcomp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005778c5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005778c7 and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005778cc jne 0x5778d4 */ if (!ZF_) goto L_005778d4;
  /* 005778ce fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005778d2 jmp 0x5778d8 */ goto L_005778d8;
L_005778d4:;
  /* 005778d4 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
L_005778d8:;
  /* 005778d8 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005778da fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 005778dc fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005778de and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005778e3 jne 0x5778eb */ if (!ZF_) goto L_005778eb;
  /* 005778e5 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005778e9 jmp 0x577910 */ goto L_00577910;
L_005778eb:;
  /* 005778eb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005778ed fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005778f1 fcomp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005778f5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005778f7 and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005778fc jne 0x577908 */ if (!ZF_) goto L_00577908;
  /* 005778fe mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00577902 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00577906 jmp 0x577910 */ goto L_00577910;
L_00577908:;
  /* 00577908 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057790c mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
L_00577910:;
  /* 00577910 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00577914 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577915 call 0x5aa9e0 */ esp -= 4; M32(esp) = 0x57791au; SAVEALL; F_005aa9e0(c); ABI_CHECK(0x5aa9e0u, 0x577915u); RETCHK(0x57791au, 0x577915u); LOADALL;
  /* 0057791a fmul dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057791d mov al, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577920 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577923 and al, 0xfe */ { u32 a_ = (eax & 0xffu), b_ = 0xfeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00577925 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00577928 lea eax, [edi + 0x2c] */ eax = (u32)((u32)(edi + 0x2cu));
  /* 0057792b fstp dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057792e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057792f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577930 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00577931 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577932:;
  /* 00577932 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00577935 mov dword ptr [edi + 0x38], eax */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(eax); }
  /* 00577938 mov al, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057793b and al, 0xfe */ { u32 a_ = (eax & 0xffu), b_ = 0xfeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0057793d mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
L_00577940:;
  /* 00577940 lea eax, [edi + 0x2c] */ eax = (u32)((u32)(edi + 0x2cu));
  /* 00577943 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577944 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577945 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00577946 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577950(CPU *c) {
  NATIVE_HOOK(0x577950u) REGS; LOADALL;
L_00577950:;
  /* 00577950 mov eax, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); eax = (u32)(M32(m_)); }
  /* 00577955 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057795b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057795d push 0x5779f0 */ { u32 v_ = 0x5779f0u; esp -= 4; M32(esp) = v_; }
  /* 00577962 mov edx, dword ptr [eax + ecx + 4] */ { const u32 m_ = (u32)(eax + ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577966 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577967 call 0x5be1d0 */ esp -= 4; M32(esp) = 0x57796cu; SAVEALL; F_005be1d0(c); ABI_CHECK(0x5be1d0u, 0x577967u); RETCHK(0x57796cu, 0x577967u); LOADALL;
  /* 0057796c mov eax, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); eax = (u32)(M32(m_)); }
  /* 00577971 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00577977 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00577979 push 0x577b70 */ { u32 v_ = 0x577b70u; esp -= 4; M32(esp) = v_; }
  /* 0057797e mov edx, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); edx = (u32)(M32(m_)); }
  /* 00577981 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577982 call 0x5be1d0 */ esp -= 4; M32(esp) = 0x577987u; SAVEALL; F_005be1d0(c); ABI_CHECK(0x5be1d0u, 0x577982u); RETCHK(0x577987u, 0x577982u); LOADALL;
  /* 00577987 mov eax, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); eax = (u32)(M32(m_)); }
  /* 0057798c mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00577992 mov edx, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); edx = (u32)(M32(m_)); }
  /* 00577995 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577996 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x57799bu; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x577996u); RETCHK(0x57799bu, 0x577996u); LOADALL;
  /* 0057799b mov eax, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); eax = (u32)(M32(m_)); }
  /* 005779a0 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005779a6 mov edx, dword ptr [eax + ecx + 4] */ { const u32 m_ = (u32)(eax + ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005779aa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005779ab call 0x5bdee0 */ esp -= 4; M32(esp) = 0x5779b0u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x5779abu); RETCHK(0x5779b0u, 0x5779abu); LOADALL;
  /* 005779b0 mov eax, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); eax = (u32)(M32(m_)); }
  /* 005779b5 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005779bb add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005779be mov dword ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M32(m_) = (u32)(0x0u); }
  /* 005779c5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005779cb mov eax, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); eax = (u32)(M32(m_)); }
  /* 005779d0 mov dword ptr [eax + edx + 4], 0 */ { const u32 m_ = (u32)(eax + edx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005779d8 mov eax, dword ptr [0x68a8d0] */ { const u32 m_ = (u32)(0x68a8d0u); eax = (u32)(M32(m_)); }
  /* 005779dd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005779de mov dword ptr [0x68a8d0], eax */ { const u32 m_ = (u32)(0x68a8d0u); M32(m_) = (u32)(eax); }
  /* 005779e3 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005779e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005779f0(CPU *c) {
  NATIVE_HOOK(0x5779f0u) REGS; LOADALL;
L_005779f0:;
  /* 005779f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005779f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005779f2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005779f3 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005779f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005779f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005779f9 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 005779fe call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x577a03u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x5779feu); RETCHK(0x577a03u, 0x5779feu); LOADALL;
  /* 00577a03 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00577a06 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 00577a09 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577a0c xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00577a0e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577a10 je 0x577a99 */ if (ZF_) goto L_00577a99;
L_00577a16:;
  /* 00577a16 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00577a18 lea esi, [eax - 0x40] */ esi = (u32)((u32)(eax + 0xffffffc0u));
  /* 00577a1b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577a1c push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00577a21 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x577a26u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x577a21u); RETCHK(0x577a26u, 0x577a21u); LOADALL;
  /* 00577a26 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00577a29 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577a2c cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577a2e je 0x577a39 */ if (ZF_) goto L_00577a39;
  /* 00577a30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577a31 call 0x5beff0 */ esp -= 4; M32(esp) = 0x577a36u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x577a31u); RETCHK(0x577a36u, 0x577a31u); LOADALL;
  /* 00577a36 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577a39:;
  /* 00577a39 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00577a3c cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577a3e je 0x577a69 */ if (ZF_) goto L_00577a69;
  /* 00577a40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577a41 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x577a46u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x577a41u); RETCHK(0x577a46u, 0x577a41u); LOADALL;
  /* 00577a46 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00577a49 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577a4c cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577a4e mov dword ptr [esi + 0x18], ebp */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebp); }
  /* 00577a51 je 0x577a69 */ if (ZF_) goto L_00577a69;
  /* 00577a53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577a54 call 0x57ad80 */ esp -= 4; M32(esp) = 0x577a59u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x577a54u); RETCHK(0x577a59u, 0x577a54u); LOADALL;
  /* 00577a59 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577a5c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577a5e je 0x577a69 */ if (ZF_) goto L_00577a69;
  /* 00577a60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577a61 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x577a66u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x577a61u); RETCHK(0x577a66u, 0x577a61u); LOADALL;
  /* 00577a66 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577a69:;
  /* 00577a69 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577a6a call 0x5b4a40 */ esp -= 4; M32(esp) = 0x577a6fu; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x577a6au); RETCHK(0x577a6fu, 0x577a6au); LOADALL;
  /* 00577a6f mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00577a74 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 00577a7a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577a7b mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 00577a7e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577a7f call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x577a85u; SAVEALL; call_ind(c, t_); RETCHK(0x577a85u, 0x577a7fu); LOADALL; }
  /* 00577a85 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00577a89 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577a8c add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00577a8f mov eax, edi */ { eax = (u32)(edi); }
  /* 00577a91 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577a93 jne 0x577a16 */ if (!ZF_) goto L_00577a16;
  /* 00577a95 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
L_00577a99:;
  /* 00577a99 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00577a9c lea ebx, [esi + 0x10] */ ebx = (u32)((u32)(esi + 0x10u));
  /* 00577a9f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577aa1 je 0x577ae7 */ if (ZF_) goto L_00577ae7;
L_00577aa3:;
  /* 00577aa3 mov ecx, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); ecx = (u32)(M32(m_)); }
  /* 00577aa9 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00577aab mov esi, eax */ { esi = (u32)(eax); }
  /* 00577aad sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00577aaf sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00577ab2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577ab3 mov edx, dword ptr [ecx + esi + 8] */ { const u32 m_ = (u32)(ecx + esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00577ab7 lea eax, [ecx + esi] */ eax = (u32)((u32)(ecx + esi));
  /* 00577aba mov ecx, dword ptr [ecx + esi + 4] */ { const u32 m_ = (u32)(ecx + esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00577abe mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00577ac0 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577ac3 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00577ac6 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00577ac9 mov dword ptr [eax + 8], ebp */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebp); }
  /* 00577acc mov dword ptr [eax + 4], ebp */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebp); }
  /* 00577acf mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
  /* 00577ad1 call 0x57d320 */ esp -= 4; M32(esp) = 0x577ad6u; SAVEALL; F_0057d320(c); ABI_CHECK(0x57d320u, 0x577ad1u); RETCHK(0x577ad6u, 0x577ad1u); LOADALL;
  /* 00577ad6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577ad9 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577adb je 0x577ae3 */ if (ZF_) goto L_00577ae3;
  /* 00577add cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577adf mov eax, edi */ { eax = (u32)(edi); }
  /* 00577ae1 jne 0x577aa3 */ if (!ZF_) goto L_00577aa3;
L_00577ae3:;
  /* 00577ae3 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
L_00577ae7:;
  /* 00577ae7 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00577aea lea ebx, [esi + 0x18] */ ebx = (u32)((u32)(esi + 0x18u));
  /* 00577aed cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577aef je 0x577b35 */ if (ZF_) goto L_00577b35;
L_00577af1:;
  /* 00577af1 mov ecx, dword ptr [0x68a8f8] */ { const u32 m_ = (u32)(0x68a8f8u); ecx = (u32)(M32(m_)); }
  /* 00577af7 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00577af9 mov esi, eax */ { esi = (u32)(eax); }
  /* 00577afb sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00577afd sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00577b00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577b01 mov edx, dword ptr [ecx + esi + 8] */ { const u32 m_ = (u32)(ecx + esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00577b05 lea eax, [ecx + esi] */ eax = (u32)((u32)(ecx + esi));
  /* 00577b08 mov ecx, dword ptr [ecx + esi + 4] */ { const u32 m_ = (u32)(ecx + esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00577b0c mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00577b0e mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577b11 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00577b14 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00577b17 mov dword ptr [eax + 8], ebp */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebp); }
  /* 00577b1a mov dword ptr [eax + 4], ebp */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebp); }
  /* 00577b1d mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
  /* 00577b1f call 0x5afe70 */ esp -= 4; M32(esp) = 0x577b24u; SAVEALL; F_005afe70(c); ABI_CHECK(0x5afe70u, 0x577b1fu); RETCHK(0x577b24u, 0x577b1fu); LOADALL;
  /* 00577b24 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577b27 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577b29 je 0x577b31 */ if (ZF_) goto L_00577b31;
  /* 00577b2b cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577b2d mov eax, edi */ { eax = (u32)(edi); }
  /* 00577b2f jne 0x577af1 */ if (!ZF_) goto L_00577af1;
L_00577b31:;
  /* 00577b31 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
L_00577b35:;
  /* 00577b35 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577b38 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577b3a je 0x577b45 */ if (ZF_) goto L_00577b45;
  /* 00577b3c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577b3d call 0x5abc60 */ esp -= 4; M32(esp) = 0x577b42u; SAVEALL; F_005abc60(c); ABI_CHECK(0x5abc60u, 0x577b3du); RETCHK(0x577b42u, 0x577b3du); LOADALL;
  /* 00577b42 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577b45:;
  /* 00577b45 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00577b4a mov edx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); edx = (u32)(M32(m_)); }
  /* 00577b50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577b51 mov ecx, dword ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00577b55 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577b56 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x577b5cu; SAVEALL; call_ind(c, t_); RETCHK(0x577b5cu, 0x577b56u); LOADALL; }
  /* 00577b5c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577b5f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577b60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577b61 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577b62 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577b63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577b70(CPU *c) {
  NATIVE_HOOK(0x577b70u) REGS; LOADALL;
L_00577b70:;
  /* 00577b70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577b71 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00577b75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577b76 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577b77 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00577b7c call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x577b81u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x577b7cu); RETCHK(0x577b81u, 0x577b7cu); LOADALL;
  /* 00577b81 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00577b84 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577b87 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577b89 je 0x577b94 */ if (ZF_) goto L_00577b94;
  /* 00577b8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577b8c call 0x5beff0 */ esp -= 4; M32(esp) = 0x577b91u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x577b8cu); RETCHK(0x577b91u, 0x577b8cu); LOADALL;
  /* 00577b91 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577b94:;
  /* 00577b94 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00577b97 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577b99 je 0x577bc8 */ if (ZF_) goto L_00577bc8;
  /* 00577b9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577b9c call 0x57c3d0 */ esp -= 4; M32(esp) = 0x577ba1u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x577b9cu); RETCHK(0x577ba1u, 0x577b9cu); LOADALL;
  /* 00577ba1 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00577ba4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577ba7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577ba9 mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 00577bb0 je 0x577bc8 */ if (ZF_) goto L_00577bc8;
  /* 00577bb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577bb3 call 0x57ad80 */ esp -= 4; M32(esp) = 0x577bb8u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x577bb3u); RETCHK(0x577bb8u, 0x577bb3u); LOADALL;
  /* 00577bb8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577bbb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577bbd je 0x577bc8 */ if (ZF_) goto L_00577bc8;
  /* 00577bbf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577bc0 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x577bc5u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x577bc0u); RETCHK(0x577bc5u, 0x577bc0u); LOADALL;
  /* 00577bc5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577bc8:;
  /* 00577bc8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577bc9 call 0x5b4a40 */ esp -= 4; M32(esp) = 0x577bceu; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x577bc9u); RETCHK(0x577bceu, 0x577bc9u); LOADALL;
  /* 00577bce mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00577bd3 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 00577bd9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577bda mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 00577bdd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577bde call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x577be4u; SAVEALL; call_ind(c, t_); RETCHK(0x577be4u, 0x577bdeu); LOADALL; }
  /* 00577be4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577be7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577be8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577be9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577bf0(CPU *c) {
  NATIVE_HOOK(0x577bf0u) REGS; LOADALL;
L_00577bf0:;
  /* 00577bf0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00577bf4 mov ecx, dword ptr [0x673870] */ { const u32 m_ = (u32)(0x673870u); ecx = (u32)(M32(m_)); }
  /* 00577bfa mov edx, dword ptr [0x67386c] */ { const u32 m_ = (u32)(0x67386cu); edx = (u32)(M32(m_)); }
  /* 00577c00 push 0x40010 */ { u32 v_ = 0x40010u; esp -= 4; M32(esp) = v_; }
  /* 00577c05 push 0x68a8a4 */ { u32 v_ = 0x68a8a4u; esp -= 4; M32(esp) = v_; }
  /* 00577c0a mov dword ptr [0x68a8cc], eax */ { const u32 m_ = (u32)(0x68a8ccu); M32(m_) = (u32)(eax); }
  /* 00577c0f mov eax, dword ptr [0x67383c] */ { const u32 m_ = (u32)(0x67383cu); eax = (u32)(M32(m_)); }
  /* 00577c14 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577c15 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577c17 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577c18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577c19 call 0x5bded0 */ esp -= 4; M32(esp) = 0x577c1eu; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x577c19u); RETCHK(0x577c1eu, 0x577c19u); LOADALL;
  /* 00577c1e mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00577c24 mov edx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); edx = (u32)(M32(m_)); }
  /* 00577c2a add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577c2d mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 00577c30 mov eax, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); eax = (u32)(M32(m_)); }
  /* 00577c35 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00577c3b cmp dword ptr [ecx + eax], 0 */ { const u32 m_ = (u32)(ecx + eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577c3f je 0x577cba */ if (ZF_) goto L_00577cba;
  /* 00577c41 mov edx, dword ptr [0x673878] */ { const u32 m_ = (u32)(0x673878u); edx = (u32)(M32(m_)); }
  /* 00577c47 mov eax, dword ptr [0x673874] */ { const u32 m_ = (u32)(0x673874u); eax = (u32)(M32(m_)); }
  /* 00577c4c mov ecx, dword ptr [0x673854] */ { const u32 m_ = (u32)(0x673854u); ecx = (u32)(M32(m_)); }
  /* 00577c52 push 0x40014 */ { u32 v_ = 0x40014u; esp -= 4; M32(esp) = v_; }
  /* 00577c57 push 0x68a8d4 */ { u32 v_ = 0x68a8d4u; esp -= 4; M32(esp) = v_; }
  /* 00577c5c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577c5d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00577c5f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577c60 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00577c61 call 0x5bded0 */ esp -= 4; M32(esp) = 0x577c66u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x577c61u); RETCHK(0x577c66u, 0x577c61u); LOADALL;
  /* 00577c66 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00577c6c mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 00577c72 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577c75 mov dword ptr [edx + ecx + 4], eax */ { const u32 m_ = (u32)(edx + ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00577c79 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00577c7e mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 00577c84 mov edx, dword ptr [eax + ecx + 4] */ { const u32 m_ = (u32)(eax + ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577c88 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577c8a je 0x577c9c */ if (ZF_) goto L_00577c9c;
  /* 00577c8c mov eax, dword ptr [0x68a8d0] */ { const u32 m_ = (u32)(0x68a8d0u); eax = (u32)(M32(m_)); }
  /* 00577c91 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00577c92 mov dword ptr [0x68a8d0], eax */ { const u32 m_ = (u32)(0x68a8d0u); M32(m_) = (u32)(eax); }
  /* 00577c97 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577c9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577c9c:;
  /* 00577c9c mov edx, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); edx = (u32)(M32(m_)); }
  /* 00577c9f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577ca0 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x577ca5u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x577ca0u); RETCHK(0x577ca5u, 0x577ca0u); LOADALL;
  /* 00577ca5 mov eax, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); eax = (u32)(M32(m_)); }
  /* 00577caa mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00577cb0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577cb3 mov dword ptr [ecx + eax], 0 */ { const u32 m_ = (u32)(ecx + eax); M32(m_) = (u32)(0x0u); }
L_00577cba:;
  /* 00577cba xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00577cbc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577cc0(CPU *c) {
  NATIVE_HOOK(0x577cc0u) REGS; LOADALL;
L_00577cc0:;
  /* 00577cc0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00577cc2 push 0x619d80 */ { u32 v_ = 0x619d80u; esp -= 4; M32(esp) = v_; }
  /* 00577cc7 push 0x577d10 */ { u32 v_ = 0x577d10u; esp -= 4; M32(esp) = v_; }
  /* 00577ccc push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00577cce push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00577cd0 call 0x5afe40 */ esp -= 4; M32(esp) = 0x577cd5u; SAVEALL; F_005afe40(c); ABI_CHECK(0x5afe40u, 0x577cd0u); RETCHK(0x577cd5u, 0x577cd0u); LOADALL;
  /* 00577cd5 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577cd8 mov dword ptr [0x68a8f8], eax */ { const u32 m_ = (u32)(0x68a8f8u); M32(m_) = (u32)(eax); }
  /* 00577cdd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577cdf jge 0x577ce4 */ if (!LT_) goto L_00577ce4;
  /* 00577ce1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00577ce3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577ce4:;
  /* 00577ce4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00577ce6 push 0x619d80 */ { u32 v_ = 0x619d80u; esp -= 4; M32(esp) = v_; }
  /* 00577ceb push 0x577d30 */ { u32 v_ = 0x577d30u; esp -= 4; M32(esp) = v_; }
  /* 00577cf0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00577cf2 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00577cf4 call 0x57d070 */ esp -= 4; M32(esp) = 0x577cf9u; SAVEALL; F_0057d070(c); ABI_CHECK(0x57d070u, 0x577cf4u); RETCHK(0x577cf9u, 0x577cf4u); LOADALL;
  /* 00577cf9 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577cfc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00577cfe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577d00 setge cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!LT_) ? 1u : 0u) & 0xffu); }
  /* 00577d03 mov dword ptr [0x68a8fc], eax */ { const u32 m_ = (u32)(0x68a8fcu); M32(m_) = (u32)(eax); }
  /* 00577d08 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00577d0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577d10(CPU *c) {
  NATIVE_HOOK(0x577d10u) REGS; LOADALL;
L_00577d10:;
  /* 00577d10 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577d14 mov ecx, dword ptr [0x68a8f8] */ { const u32 m_ = (u32)(0x68a8f8u); ecx = (u32)(M32(m_)); }
  /* 00577d1a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00577d1c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00577d1e mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00577d21 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00577d24 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00577d26 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577d30(CPU *c) {
  NATIVE_HOOK(0x577d30u) REGS; LOADALL;
L_00577d30:;
  /* 00577d30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577d34 mov ecx, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); ecx = (u32)(M32(m_)); }
  /* 00577d3a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00577d3c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00577d3e mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00577d41 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00577d44 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00577d46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577d50(CPU *c) {
  NATIVE_HOOK(0x577d50u) REGS; LOADALL;
L_00577d50:;
  /* 00577d50 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577d54 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577d55 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00577d56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577d57 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 00577d5a lea ebp, [eax + 8] */ ebp = (u32)((u32)(eax + 0x8u));
  /* 00577d5d cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577d5f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00577d61 je 0x577d8b */ if (ZF_) goto L_00577d8b;
  /* 00577d63 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00577d64:;
  /* 00577d64 mov al, byte ptr [esi - 0x3e] */ { const u32 m_ = (u32)(esi + 0xffffffc2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577d67 lea edi, [esi - 0x40] */ edi = (u32)((u32)(esi + 0xffffffc0u));
  /* 00577d6a test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00577d6c je 0x577d84 */ if (ZF_) goto L_00577d84;
  /* 00577d6e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577d71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577d72 call 0x5abd50 */ esp -= 4; M32(esp) = 0x577d77u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x577d72u); RETCHK(0x577d77u, 0x577d72u); LOADALL;
  /* 00577d77 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577d78 call dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x577d7bu; SAVEALL; call_ind(c, t_); RETCHK(0x577d7bu, 0x577d78u); LOADALL; }
  /* 00577d7b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577d7e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577d80 jne 0x577d84 */ if (!ZF_) goto L_00577d84;
  /* 00577d82 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00577d84:;
  /* 00577d84 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00577d86 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577d88 jne 0x577d64 */ if (!ZF_) goto L_00577d64;
  /* 00577d8a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00577d8b:;
  /* 00577d8b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577d8c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00577d8e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577d8f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577d90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577da0(CPU *c) {
  NATIVE_HOOK(0x577da0u) REGS; LOADALL;
L_00577da0:;
  /* 00577da0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577da4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577da5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00577da6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577da7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577da8 lea edi, [eax + 8] */ edi = (u32)((u32)(eax + 0x8u));
  /* 00577dab mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00577dae cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577db0 je 0x577dd0 */ if (ZF_) goto L_00577dd0;
  /* 00577db2 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 00577db6 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
L_00577dba:;
  /* 00577dba mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00577dbc add eax, -0x40 */ { u32 a_ = eax, b_ = 0xffffffc0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577dbf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577dc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577dc1 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x577dc3u; SAVEALL; call_ind(c, t_); RETCHK(0x577dc3u, 0x577dc1u); LOADALL; }
  /* 00577dc3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577dc6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577dc8 je 0x577dd0 */ if (ZF_) goto L_00577dd0;
  /* 00577dca cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577dcc mov eax, esi */ { eax = (u32)(esi); }
  /* 00577dce jne 0x577dba */ if (!ZF_) goto L_00577dba;
L_00577dd0:;
  /* 00577dd0 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00577dd4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577dd5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577dd6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577dd7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577dd8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577de0(CPU *c) {
  NATIVE_HOOK(0x577de0u) REGS; LOADALL;
L_00577de0:;
  /* 00577de0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577de4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577de5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00577de6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577de7 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00577dea lea ebp, [eax + 0x18] */ ebp = (u32)((u32)(eax + 0x18u));
  /* 00577ded cmp ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577def push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577df0 je 0x577e1a */ if (ZF_) goto L_00577e1a;
  /* 00577df2 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 00577df6 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
L_00577dfa:;
  /* 00577dfa mov edx, dword ptr [0x68a8f8] */ { const u32 m_ = (u32)(0x68a8f8u); edx = (u32)(M32(m_)); }
  /* 00577e00 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00577e02 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00577e04 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577e05 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577e07 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577e0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577e0b call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x577e0du; SAVEALL; call_ind(c, t_); RETCHK(0x577e0du, 0x577e0bu); LOADALL; }
  /* 00577e0d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577e10 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577e12 je 0x577e1a */ if (ZF_) goto L_00577e1a;
  /* 00577e14 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577e16 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00577e18 jne 0x577dfa */ if (!ZF_) goto L_00577dfa;
L_00577e1a:;
  /* 00577e1a mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00577e1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577e1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577e20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577e21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577e22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577e30(CPU *c) {
  NATIVE_HOOK(0x577e30u) REGS; LOADALL;
L_00577e30:;
  /* 00577e30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00577e34 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577e35 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00577e36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577e37 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00577e3a lea ebp, [eax + 0x10] */ ebp = (u32)((u32)(eax + 0x10u));
  /* 00577e3d cmp ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577e3f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577e40 je 0x577e6a */ if (ZF_) goto L_00577e6a;
  /* 00577e42 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 00577e46 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
L_00577e4a:;
  /* 00577e4a mov edx, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); edx = (u32)(M32(m_)); }
  /* 00577e50 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00577e52 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00577e54 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577e55 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577e57 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577e5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577e5b call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x577e5du; SAVEALL; call_ind(c, t_); RETCHK(0x577e5du, 0x577e5bu); LOADALL; }
  /* 00577e5d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577e60 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577e62 je 0x577e6a */ if (ZF_) goto L_00577e6a;
  /* 00577e64 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577e66 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00577e68 jne 0x577e4a */ if (!ZF_) goto L_00577e4a;
L_00577e6a:;
  /* 00577e6a mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00577e6e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577e6f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577e70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00577e71 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577e72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577e80(CPU *c) {
  NATIVE_HOOK(0x577e80u) REGS; LOADALL;
L_00577e80:;
  /* 00577e80 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00577e85 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 00577e8b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577e8c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577e8d mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 00577e90 push 0x30014 */ { u32 v_ = 0x30014u; esp -= 4; M32(esp) = v_; }
  /* 00577e95 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00577e96 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x577e9cu; SAVEALL; call_ind(c, t_); RETCHK(0x577e9cu, 0x577e96u); LOADALL; }
  /* 00577e9c mov esi, eax */ { esi = (u32)(eax); }
  /* 00577e9e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00577ea0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577ea3 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577ea5 jne 0x577eac */ if (!ZF_) goto L_00577eac;
  /* 00577ea7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577ea8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00577eaa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577eab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00577eac:;
  /* 00577eac push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00577ead push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577eae mov byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x1u); }
  /* 00577eb1 mov byte ptr [esi + 1], bl */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00577eb4 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00577eb7 mov dword ptr [esi + 0x10], 0x577f50 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x577f50u); }
  /* 00577ebe mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00577ec1 mov byte ptr [esi + 2], 5 */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)(0x5u); }
  /* 00577ec5 mov byte ptr [esi + 3], 1 */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)(0x1u); }
  /* 00577ec9 call 0x5b49f0 */ esp -= 4; M32(esp) = 0x577eceu; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x577ec9u); RETCHK(0x577eceu, 0x577ec9u); LOADALL;
  /* 00577ece mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577ed1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577ed4 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00577ed6 mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 00577ed9 mov byte ptr [esi + 3], al */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00577edc mov eax, 0x577690 */ { eax = (u32)(0x577690u); }
  /* 00577ee1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00577ee3 mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 00577ee6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577ee8 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00577eeb mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 00577eee mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 00577ef1 mov dword ptr [esi + 0x38], ebx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ebx); }
  /* 00577ef4 mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 00577ef7 mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 00577efa mov dword ptr [esi + 0x34], ebx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 00577efd mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 00577f00 jne 0x577f05 */ if (!ZF_) goto L_00577f05;
  /* 00577f02 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
L_00577f05:;
  /* 00577f05 mov eax, 0x3f800000 */ { eax = (u32)(0x3f800000u); }
  /* 00577f0a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577f0b mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 00577f0e mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
  /* 00577f11 lea eax, [esi + 0x64] */ eax = (u32)((u32)(esi + 0x64u));
  /* 00577f14 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00577f19 mov word ptr [esi + 0x50], bx */ { const u32 m_ = (u32)(esi + 0x50u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00577f1d mov word ptr [esi + 0x52], bx */ { const u32 m_ = (u32)(esi + 0x52u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00577f21 mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 00577f24 mov dword ptr [esi + 0x4c], 3 */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(0x3u); }
  /* 00577f2b mov dword ptr [esi + 0x44], ebx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ebx); }
  /* 00577f2e mov dword ptr [esi + 0x40], ebx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ebx); }
  /* 00577f31 mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 00577f34 mov dword ptr [esi + 0x6c], ebx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ebx); }
  /* 00577f37 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00577f39 mov dword ptr [esi + 0x68], eax */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(eax); }
  /* 00577f3c call 0x5bf750 */ esp -= 4; M32(esp) = 0x577f41u; SAVEALL; F_005bf750(c); ABI_CHECK(0x5bf750u, 0x577f3cu); RETCHK(0x577f41u, 0x577f3cu); LOADALL;
  /* 00577f41 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577f44 mov eax, esi */ { eax = (u32)(esi); }
  /* 00577f46 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577f47 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00577f48 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577f50(CPU *c) {
  NATIVE_HOOK(0x577f50u) REGS; LOADALL;
L_00577f50:;
  /* 00577f50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577f51 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00577f55 test byte ptr [esi + 0x4c], 2 */ { const u32 m_ = (u32)(esi + 0x4cu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00577f59 je 0x577f64 */ if (ZF_) goto L_00577f64;
  /* 00577f5b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577f5c call 0x5776c0 */ esp -= 4; M32(esp) = 0x577f61u; SAVEALL; F_005776c0(c); ABI_CHECK(0x5776c0u, 0x577f5cu); RETCHK(0x577f61u, 0x577f5cu); LOADALL;
  /* 00577f61 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577f64:;
  /* 00577f64 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577f67 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00577f69 mov byte ptr [esi + 3], al */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00577f6c mov eax, esi */ { eax = (u32)(esi); }
  /* 00577f6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577f6f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577f70(CPU *c) {
  NATIVE_HOOK(0x577f70u) REGS; LOADALL;
L_00577f70:;
  /* 00577f70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577f71 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00577f75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577f76 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00577f7a cmp edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00577f7d je 0x577fe7 */ if (ZF_) goto L_00577fe7;
  /* 00577f7f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577f81 je 0x577f8c */ if (ZF_) goto L_00577f8c;
  /* 00577f83 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577f84 call 0x57c3c0 */ esp -= 4; M32(esp) = 0x577f89u; SAVEALL; F_0057c3c0(c); ABI_CHECK(0x57c3c0u, 0x577f84u); RETCHK(0x577f89u, 0x577f84u); LOADALL;
  /* 00577f89 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577f8c:;
  /* 00577f8c mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00577f8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577f91 je 0x577f9c */ if (ZF_) goto L_00577f9c;
  /* 00577f93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00577f94 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x577f99u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x577f94u); RETCHK(0x577f99u, 0x577f94u); LOADALL;
  /* 00577f99 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577f9c:;
  /* 00577f9c mov al, byte ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00577fa0 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 00577fa3 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00577fa5 jne 0x577fe7 */ if (!ZF_) goto L_00577fe7;
  /* 00577fa7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577fa9 je 0x577fca */ if (ZF_) goto L_00577fca;
  /* 00577fab mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00577fae lea ecx, [esi + 0x1c] */ ecx = (u32)((u32)(esi + 0x1cu));
  /* 00577fb1 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00577fb4 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00577fb6 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00577fb8 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00577fbb mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00577fbe mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00577fc1 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00577fc4 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00577fc7 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
L_00577fca:;
  /* 00577fca mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00577fcd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577fcf je 0x577fe7 */ if (ZF_) goto L_00577fe7;
  /* 00577fd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577fd2 call 0x57ad80 */ esp -= 4; M32(esp) = 0x577fd7u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x577fd2u); RETCHK(0x577fd7u, 0x577fd2u); LOADALL;
  /* 00577fd7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00577fda test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00577fdc je 0x577fe7 */ if (ZF_) goto L_00577fe7;
  /* 00577fde push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577fdf call 0x5abcd0 */ esp -= 4; M32(esp) = 0x577fe4u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x577fdfu); RETCHK(0x577fe4u, 0x577fdfu); LOADALL;
  /* 00577fe4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00577fe7:;
  /* 00577fe7 mov eax, esi */ { eax = (u32)(esi); }
  /* 00577fe9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00577fea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00577feb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00577ff0(CPU *c) {
  NATIVE_HOOK(0x577ff0u) REGS; LOADALL;
L_00577ff0:;
  /* 00577ff0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577ff1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00577ff5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00577ff6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00577ff7 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00577ffc call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x578001u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x577ffcu); RETCHK(0x578001u, 0x577ffcu); LOADALL;
  /* 00578001 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00578004 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578007 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578009 je 0x578014 */ if (ZF_) goto L_00578014;
  /* 0057800b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057800c call 0x5beff0 */ esp -= 4; M32(esp) = 0x578011u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57800cu); RETCHK(0x578011u, 0x57800cu); LOADALL;
  /* 00578011 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00578014:;
  /* 00578014 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00578017 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578019 je 0x578048 */ if (ZF_) goto L_00578048;
  /* 0057801b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057801c call 0x57c3d0 */ esp -= 4; M32(esp) = 0x578021u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x57801cu); RETCHK(0x578021u, 0x57801cu); LOADALL;
  /* 00578021 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00578024 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578027 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578029 mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 00578030 je 0x578048 */ if (ZF_) goto L_00578048;
  /* 00578032 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578033 call 0x57ad80 */ esp -= 4; M32(esp) = 0x578038u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x578033u); RETCHK(0x578038u, 0x578033u); LOADALL;
  /* 00578038 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057803b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057803d je 0x578048 */ if (ZF_) goto L_00578048;
  /* 0057803f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578040 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x578045u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x578040u); RETCHK(0x578045u, 0x578040u); LOADALL;
  /* 00578045 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00578048:;
  /* 00578048 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578049 call 0x5b4a40 */ esp -= 4; M32(esp) = 0x57804eu; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x578049u); RETCHK(0x57804eu, 0x578049u); LOADALL;
  /* 0057804e mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00578053 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 00578059 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057805a mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057805d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057805e call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x578064u; SAVEALL; call_ind(c, t_); RETCHK(0x578064u, 0x57805eu); LOADALL; }
  /* 00578064 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578067 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057806c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057806d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057806e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578070(CPU *c) {
  NATIVE_HOOK(0x578070u) REGS; LOADALL;
L_00578070:;
  /* 00578070 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578071 call 0x577e80 */ esp -= 4; M32(esp) = 0x578076u; SAVEALL; F_00577e80(c); ABI_CHECK(0x577e80u, 0x578071u); RETCHK(0x578076u, 0x578071u); LOADALL;
  /* 00578076 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00578078 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057807a jne 0x57807e */ if (!ZF_) goto L_0057807e;
  /* 0057807c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057807d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057807e:;
  /* 0057807e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057807f mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 00578083 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578084 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578085 mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00578088 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057808a mov byte ptr [ebx], al */ { const u32 m_ = (u32)(ebx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057808c mov cl, byte ptr [ebp + 1] */ { const u32 m_ = (u32)(ebp + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057808f mov byte ptr [ebx + 1], cl */ { const u32 m_ = (u32)(ebx + 0x1u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00578092 mov dl, byte ptr [ebp + 2] */ { const u32 m_ = (u32)(ebp + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00578095 mov byte ptr [ebx + 2], dl */ { const u32 m_ = (u32)(ebx + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00578098 mov al, byte ptr [ebp + 3] */ { const u32 m_ = (u32)(ebp + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057809b mov byte ptr [ebx + 3], al */ { const u32 m_ = (u32)(ebx + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057809e mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005780a5 mov cl, byte ptr [ebp + 2] */ { const u32 m_ = (u32)(ebp + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005780a8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005780a9 mov byte ptr [ebx + 2], cl */ { const u32 m_ = (u32)(ebx + 0x2u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005780ac call 0x5b49f0 */ esp -= 4; M32(esp) = 0x5780b1u; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x5780acu); RETCHK(0x5780b1u, 0x5780acu); LOADALL;
  /* 005780b1 mov cl, byte ptr [ebx + 3] */ { const u32 m_ = (u32)(ebx + 0x3u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005780b4 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 005780b7 or cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005780ba add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005780bd mov byte ptr [ebx + 3], cl */ { const u32 m_ = (u32)(ebx + 0x3u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005780c0 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 005780c3 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005780c5 je 0x578127 */ if (ZF_) goto L_00578127;
  /* 005780c7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005780c9 je 0x5780d4 */ if (ZF_) goto L_005780d4;
  /* 005780cb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005780cc call 0x57c3c0 */ esp -= 4; M32(esp) = 0x5780d1u; SAVEALL; F_0057c3c0(c); ABI_CHECK(0x57c3c0u, 0x5780ccu); RETCHK(0x5780d1u, 0x5780ccu); LOADALL;
  /* 005780d1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005780d4:;
  /* 005780d4 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 005780d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005780d9 je 0x5780e4 */ if (ZF_) goto L_005780e4;
  /* 005780db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005780dc call 0x57c3d0 */ esp -= 4; M32(esp) = 0x5780e1u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x5780dcu); RETCHK(0x5780e1u, 0x5780dcu); LOADALL;
  /* 005780e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005780e4:;
  /* 005780e4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005780e6 mov dword ptr [ebx + 0x18], esi */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(esi); }
  /* 005780e9 je 0x57810a */ if (ZF_) goto L_0057810a;
  /* 005780eb mov edx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 005780ee lea eax, [ebx + 0x1c] */ eax = (u32)((u32)(ebx + 0x1cu));
  /* 005780f1 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005780f4 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 005780f6 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005780f8 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005780fb mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005780fe mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00578101 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00578104 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00578107 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
L_0057810a:;
  /* 0057810a mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0057810d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057810f je 0x578127 */ if (ZF_) goto L_00578127;
  /* 00578111 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578112 call 0x57ad80 */ esp -= 4; M32(esp) = 0x578117u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x578112u); RETCHK(0x578117u, 0x578112u); LOADALL;
  /* 00578117 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057811a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057811c je 0x578127 */ if (ZF_) goto L_00578127;
  /* 0057811e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057811f call 0x5abcd0 */ esp -= 4; M32(esp) = 0x578124u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57811fu); RETCHK(0x578124u, 0x57811fu); LOADALL;
  /* 00578124 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00578127:;
  /* 00578127 lea eax, [ebp + 0x1c] */ eax = (u32)((u32)(ebp + 0x1cu));
  /* 0057812a lea ecx, [ebx + 0x1c] */ ecx = (u32)((u32)(ebx + 0x1cu));
  /* 0057812d lea esi, [ebp + 0x4c] */ esi = (u32)((u32)(ebp + 0x4cu));
  /* 00578130 lea edi, [ebx + 0x4c] */ edi = (u32)((u32)(ebx + 0x4cu));
  /* 00578133 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00578135 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578136 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00578138 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578139 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057813c push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00578141 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00578144 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00578147 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0057814a mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057814d mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00578150 mov ecx, dword ptr [ebp + 0x48] */ { const u32 m_ = (u32)(ebp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 00578153 mov dword ptr [ebx + 0x48], ecx */ { const u32 m_ = (u32)(ebx + 0x48u); M32(m_) = (u32)(ecx); }
  /* 00578156 mov edx, dword ptr [ebp + 0x6c] */ { const u32 m_ = (u32)(ebp + 0x6cu); edx = (u32)(M32(m_)); }
  /* 00578159 mov ecx, 5 */ { ecx = (u32)(0x5u); }
  /* 0057815e mov dword ptr [ebx + 0x6c], edx */ { const u32 m_ = (u32)(ebx + 0x6cu); M32(m_) = (u32)(edx); }
  /* 00578161 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00578163 call 0x5bf7e0 */ esp -= 4; M32(esp) = 0x578168u; SAVEALL; F_005bf7e0(c); ABI_CHECK(0x5bf7e0u, 0x578163u); RETCHK(0x578168u, 0x578163u); LOADALL;
  /* 00578168 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057816b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057816d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057816e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057816f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578170 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578171 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578180(CPU *c) {
  NATIVE_HOOK(0x578180u) REGS; LOADALL;
L_00578180:;
  /* 00578180 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578183 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578184 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578185 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578186 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578187 call 0x578450 */ esp -= 4; M32(esp) = 0x57818cu; SAVEALL; F_00578450(c); ABI_CHECK(0x578450u, 0x578187u); RETCHK(0x57818cu, 0x578187u); LOADALL;
  /* 0057818c mov ebp, eax */ { ebp = (u32)(eax); }
  /* 0057818e test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578190 mov dword ptr [esp + 0x1c], ebp */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 00578194 je 0x5783a7 */ if (ZF_) goto L_005783a7;
  /* 0057819a mov esi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); esi = (u32)(M32(m_)); }
  /* 0057819e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005781a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005781a2 call 0x5ab6f0 */ esp -= 4; M32(esp) = 0x5781a7u; SAVEALL; F_005ab6f0(c); ABI_CHECK(0x5ab6f0u, 0x5781a2u); RETCHK(0x5781a7u, 0x5781a2u); LOADALL;
  /* 005781a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005781aa mov dword ptr [ebp + 4], eax */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(eax); }
  /* 005781ad test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005781af jne 0x578225 */ if (!ZF_) goto L_00578225;
  /* 005781b1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005781b2 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 005781b7 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x5781bcu; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x5781b7u); RETCHK(0x5781bcu, 0x5781b7u); LOADALL;
  /* 005781bc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005781bf lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 005781c2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005781c5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005781c7 je 0x5781e1 */ if (ZF_) goto L_005781e1;
L_005781c9:;
  /* 005781c9 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005781cb lea esi, [eax - 0x40] */ esi = (u32)((u32)(eax + 0xffffffc0u));
  /* 005781ce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005781cf call 0x577ff0 */ esp -= 4; M32(esp) = 0x5781d4u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x5781cfu); RETCHK(0x5781d4u, 0x5781cfu); LOADALL;
  /* 005781d4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005781d7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005781d9 je 0x5781e1 */ if (ZF_) goto L_005781e1;
  /* 005781db cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005781dd mov eax, edi */ { eax = (u32)(edi); }
  /* 005781df jne 0x5781c9 */ if (!ZF_) goto L_005781c9;
L_005781e1:;
  /* 005781e1 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005781e4 lea ebx, [ebp + 0x10] */ ebx = (u32)((u32)(ebp + 0x10u));
  /* 005781e7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005781e9 je 0x57836d */ if (ZF_) goto L_0057836d;
L_005781ef:;
  /* 005781ef mov ecx, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); ecx = (u32)(M32(m_)); }
  /* 005781f5 mov esi, eax */ { esi = (u32)(eax); }
  /* 005781f7 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005781f9 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005781fb mov ecx, dword ptr [ecx + esi - 4] */ { const u32 m_ = (u32)(ecx + esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005781ff sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00578202 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578203 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578204 call 0x5786b0 */ esp -= 4; M32(esp) = 0x578209u; SAVEALL; F_005786b0(c); ABI_CHECK(0x5786b0u, 0x578204u); RETCHK(0x578209u, 0x578204u); LOADALL;
  /* 00578209 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057820a call 0x57d320 */ esp -= 4; M32(esp) = 0x57820fu; SAVEALL; F_0057d320(c); ABI_CHECK(0x57d320u, 0x57820au); RETCHK(0x57820fu, 0x57820au); LOADALL;
  /* 0057820f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578212 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578214 je 0x57836d */ if (ZF_) goto L_0057836d;
  /* 0057821a cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057821c mov eax, edi */ { eax = (u32)(edi); }
  /* 0057821e jne 0x5781ef */ if (!ZF_) goto L_005781ef;
  /* 00578220 jmp 0x57836d */ goto L_0057836d;
L_00578225:;
  /* 00578225 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00578228 lea ebx, [esi + 8] */ ebx = (u32)((u32)(esi + 0x8u));
  /* 0057822b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057822d mov dword ptr [esp + 0x20], 1 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x1u); }
  /* 00578235 je 0x5782f7 */ if (ZF_) goto L_005782f7;
L_0057823b:;
  /* 0057823b mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0057823d lea ebp, [eax - 0x40] */ ebp = (u32)((u32)(eax + 0xffffffc0u));
  /* 00578240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578241 call 0x578070 */ esp -= 4; M32(esp) = 0x578246u; SAVEALL; F_00578070(c); ABI_CHECK(0x578070u, 0x578241u); RETCHK(0x578246u, 0x578241u); LOADALL;
  /* 00578246 mov esi, eax */ { esi = (u32)(eax); }
  /* 00578248 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057824b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057824d je 0x578281 */ if (ZF_) goto L_00578281;
  /* 0057824f mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00578252 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578254 je 0x57828b */ if (ZF_) goto L_0057828b;
  /* 00578256 mov edx, dword ptr [eax + 0xa0] */ { const u32 m_ = (u32)(eax + 0xa0u); edx = (u32)(M32(m_)); }
  /* 0057825c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057825d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057825e call 0x5b49f0 */ esp -= 4; M32(esp) = 0x578263u; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x57825eu); RETCHK(0x578263u, 0x57825eu); LOADALL;
  /* 00578263 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00578266 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578267 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00578269 mov byte ptr [esi + 3], al */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057826c mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00578270 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578271 call 0x578650 */ esp -= 4; M32(esp) = 0x578276u; SAVEALL; F_00578650(c); ABI_CHECK(0x578650u, 0x578271u); RETCHK(0x578276u, 0x578271u); LOADALL;
  /* 00578276 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578279 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057827b mov eax, edi */ { eax = (u32)(edi); }
  /* 0057827d jne 0x57823b */ if (!ZF_) goto L_0057823b;
  /* 0057827f jmp 0x5782ef */ goto L_005782ef;
L_00578281:;
  /* 00578281 mov dword ptr [esp + 0x20], 0 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 00578289 jmp 0x5782ef */ goto L_005782ef;
L_0057828b:;
  /* 0057828b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057828c push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00578291 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x578296u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x578291u); RETCHK(0x578296u, 0x578291u); LOADALL;
  /* 00578296 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00578299 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057829c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057829e je 0x5782a9 */ if (ZF_) goto L_005782a9;
  /* 005782a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005782a1 call 0x5beff0 */ esp -= 4; M32(esp) = 0x5782a6u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x5782a1u); RETCHK(0x5782a6u, 0x5782a1u); LOADALL;
  /* 005782a6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005782a9:;
  /* 005782a9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005782ab push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005782ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005782ae call 0x577f70 */ esp -= 4; M32(esp) = 0x5782b3u; SAVEALL; F_00577f70(c); ABI_CHECK(0x577f70u, 0x5782aeu); RETCHK(0x5782b3u, 0x5782aeu); LOADALL;
  /* 005782b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005782b4 call 0x5b4a40 */ esp -= 4; M32(esp) = 0x5782b9u; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x5782b4u); RETCHK(0x5782b9u, 0x5782b4u); LOADALL;
  /* 005782b9 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005782be mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 005782c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005782c5 mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 005782c8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005782c9 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5782cfu; SAVEALL; call_ind(c, t_); RETCHK(0x5782cfu, 0x5782c9u); LOADALL; }
  /* 005782cf push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 005782d1 mov dword ptr [esp + 0x2c], 2 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x2u); }
  /* 005782d9 call 0x619d80 */ esp -= 4; M32(esp) = 0x5782deu; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x5782d9u); RETCHK(0x5782deu, 0x5782d9u); LOADALL;
  /* 005782de mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 005782e2 lea eax, [esp + 0x2c] */ eax = (u32)((u32)(esp + 0x2cu));
  /* 005782e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005782e7 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x5782ecu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x5782e7u); RETCHK(0x5782ecu, 0x5782e7u); LOADALL;
  /* 005782ec add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005782ef:;
  /* 005782ef mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005782f3 mov esi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); esi = (u32)(M32(m_)); }
L_005782f7:;
  /* 005782f7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005782fa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005782fb call 0x5ab8e0 */ esp -= 4; M32(esp) = 0x578300u; SAVEALL; F_005ab8e0(c); ABI_CHECK(0x5ab8e0u, 0x5782fbu); RETCHK(0x578300u, 0x5782fbu); LOADALL;
  /* 00578300 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 00578304 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578307 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578309 jne 0x5783b1 */ if (!ZF_) goto L_005783b1;
  /* 0057830f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578310 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 00578315 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57831au; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x578315u); RETCHK(0x57831au, 0x578315u); LOADALL;
  /* 0057831a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057831d lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 00578320 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578323 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578325 je 0x57833f */ if (ZF_) goto L_0057833f;
L_00578327:;
  /* 00578327 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00578329 lea esi, [eax - 0x40] */ esi = (u32)((u32)(eax + 0xffffffc0u));
  /* 0057832c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057832d call 0x577ff0 */ esp -= 4; M32(esp) = 0x578332u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x57832du); RETCHK(0x578332u, 0x57832du); LOADALL;
  /* 00578332 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578335 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578337 je 0x57833f */ if (ZF_) goto L_0057833f;
  /* 00578339 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057833b mov eax, edi */ { eax = (u32)(edi); }
  /* 0057833d jne 0x578327 */ if (!ZF_) goto L_00578327;
L_0057833f:;
  /* 0057833f mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00578342 lea edi, [ebp + 0x10] */ edi = (u32)((u32)(ebp + 0x10u));
  /* 00578345 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578347 je 0x57836d */ if (ZF_) goto L_0057836d;
L_00578349:;
  /* 00578349 mov esi, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); esi = (u32)(M32(m_)); }
  /* 0057834f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00578351 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578353 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00578355 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578358 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057835a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057835b call 0x5783d0 */ esp -= 4; M32(esp) = 0x578360u; SAVEALL; F_005783d0(c); ABI_CHECK(0x5783d0u, 0x57835bu); RETCHK(0x578360u, 0x57835bu); LOADALL;
  /* 00578360 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578363 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578365 je 0x57836d */ if (ZF_) goto L_0057836d;
  /* 00578367 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578369 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0057836b jne 0x578349 */ if (!ZF_) goto L_00578349;
L_0057836d:;
  /* 0057836d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057836f push 0x578410 */ { u32 v_ = 0x578410u; esp -= 4; M32(esp) = v_; }
  /* 00578374 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578375 call 0x577de0 */ esp -= 4; M32(esp) = 0x57837au; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x578375u); RETCHK(0x57837au, 0x578375u); LOADALL;
  /* 0057837a mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057837d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578380 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578382 je 0x57838d */ if (ZF_) goto L_0057838d;
  /* 00578384 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578385 call 0x5abc60 */ esp -= 4; M32(esp) = 0x57838au; SAVEALL; F_005abc60(c); ABI_CHECK(0x5abc60u, 0x578385u); RETCHK(0x57838au, 0x578385u); LOADALL;
  /* 0057838a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057838d:;
  /* 0057838d mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00578392 mov edx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); edx = (u32)(M32(m_)); }
  /* 00578398 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578399 mov ecx, dword ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057839d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057839e call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5783a4u; SAVEALL; call_ind(c, t_); RETCHK(0x5783a4u, 0x57839eu); LOADALL; }
  /* 005783a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005783a7:;
  /* 005783a7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005783a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005783a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005783aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005783ac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005783ad add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005783b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005783b1:;
  /* 005783b1 mov edx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); edx = (u32)(M32(m_)); }
  /* 005783b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005783b5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005783b6 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 005783bb mov dword ptr [ebp + 0x28], edx */ { const u32 m_ = (u32)(ebp + 0x28u); M32(m_) = (u32)(edx); }
  /* 005783be call 0x5bf7e0 */ esp -= 4; M32(esp) = 0x5783c3u; SAVEALL; F_005bf7e0(c); ABI_CHECK(0x5bf7e0u, 0x5783beu); RETCHK(0x5783c3u, 0x5783beu); LOADALL;
  /* 005783c3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005783c6 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005783c8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005783c9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005783ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005783cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005783cc add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005783cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005783d0(CPU *c) {
  NATIVE_HOOK(0x5783d0u) REGS; LOADALL;
L_005783d0:;
  /* 005783d0 mov eax, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); eax = (u32)(M32(m_)); }
  /* 005783d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005783d6 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005783da add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005783dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005783dd mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005783e0 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005783e3 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005783e5 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005783e8 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005783eb mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005783ee xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005783f0 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005783f3 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005783f6 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005783f8 call 0x57d320 */ esp -= 4; M32(esp) = 0x5783fdu; SAVEALL; F_0057d320(c); ABI_CHECK(0x57d320u, 0x5783f8u); RETCHK(0x5783fdu, 0x5783f8u); LOADALL;
  /* 005783fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578400 mov eax, esi */ { eax = (u32)(esi); }
  /* 00578402 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578403 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578410(CPU *c) {
  NATIVE_HOOK(0x578410u) REGS; LOADALL;
L_00578410:;
  /* 00578410 mov eax, dword ptr [0x68a8f8] */ { const u32 m_ = (u32)(0x68a8f8u); eax = (u32)(M32(m_)); }
  /* 00578415 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578416 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057841a add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057841c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057841d mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00578420 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00578423 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00578425 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00578428 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057842b mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057842e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00578430 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00578433 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00578436 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00578438 call 0x5afe70 */ esp -= 4; M32(esp) = 0x57843du; SAVEALL; F_005afe70(c); ABI_CHECK(0x5afe70u, 0x578438u); RETCHK(0x57843du, 0x578438u); LOADALL;
  /* 0057843d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578440 mov eax, esi */ { eax = (u32)(esi); }
  /* 00578442 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578443 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578450(CPU *c) {
  NATIVE_HOOK(0x578450u) REGS; LOADALL;
L_00578450:;
  /* 00578450 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00578455 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 0057845b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057845c push 0x30010 */ { u32 v_ = 0x30010u; esp -= 4; M32(esp) = v_; }
  /* 00578461 mov edx, dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00578465 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578466 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57846cu; SAVEALL; call_ind(c, t_); RETCHK(0x57846cu, 0x578466u); LOADALL; }
  /* 0057846c mov esi, eax */ { esi = (u32)(eax); }
  /* 0057846e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00578470 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578473 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578475 jne 0x57847b */ if (!ZF_) goto L_0057847b;
  /* 00578477 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578479 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057847a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057847b:;
  /* 0057847b lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 0057847e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057847f mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00578482 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 00578487 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00578489 lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 0057848c mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0057848f mov byte ptr [esi], 2 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x2u); }
  /* 00578492 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00578494 lea eax, [esi + 0x18] */ eax = (u32)((u32)(esi + 0x18u));
  /* 00578497 mov byte ptr [esi + 1], cl */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057849a mov byte ptr [esi + 2], cl */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057849d mov byte ptr [esi + 3], cl */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005784a0 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005784a3 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005784a5 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005784a8 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005784ab mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005784ae mov dword ptr [esi + 0x28], 0x619d80 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x619d80u); }
  /* 005784b5 call 0x5bf750 */ esp -= 4; M32(esp) = 0x5784bau; SAVEALL; F_005bf750(c); ABI_CHECK(0x5bf750u, 0x5784b5u); RETCHK(0x5784bau, 0x5784b5u); LOADALL;
  /* 005784ba add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005784bd mov eax, esi */ { eax = (u32)(esi); }
  /* 005784bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005784c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005784d0(CPU *c) {
  NATIVE_HOOK(0x5784d0u) REGS; LOADALL;
L_005784d0:;
  /* 005784d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005784d1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005784d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005784d3 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005784d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005784d8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005784d9 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 005784de call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x5784e3u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x5784deu); RETCHK(0x5784e3u, 0x5784deu); LOADALL;
  /* 005784e3 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005784e6 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 005784e9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005784ec xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005784ee cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005784f0 je 0x578579 */ if (ZF_) goto L_00578579;
L_005784f6:;
  /* 005784f6 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005784f8 lea esi, [eax - 0x40] */ esi = (u32)((u32)(eax + 0xffffffc0u));
  /* 005784fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005784fc push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00578501 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x578506u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x578501u); RETCHK(0x578506u, 0x578501u); LOADALL;
  /* 00578506 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00578509 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057850c cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057850e je 0x578519 */ if (ZF_) goto L_00578519;
  /* 00578510 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578511 call 0x5beff0 */ esp -= 4; M32(esp) = 0x578516u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x578511u); RETCHK(0x578516u, 0x578511u); LOADALL;
  /* 00578516 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00578519:;
  /* 00578519 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057851c cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057851e je 0x578549 */ if (ZF_) goto L_00578549;
  /* 00578520 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578521 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x578526u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x578521u); RETCHK(0x578526u, 0x578521u); LOADALL;
  /* 00578526 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00578529 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057852c cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057852e mov dword ptr [esi + 0x18], ebp */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebp); }
  /* 00578531 je 0x578549 */ if (ZF_) goto L_00578549;
  /* 00578533 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578534 call 0x57ad80 */ esp -= 4; M32(esp) = 0x578539u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x578534u); RETCHK(0x578539u, 0x578534u); LOADALL;
  /* 00578539 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057853c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057853e je 0x578549 */ if (ZF_) goto L_00578549;
  /* 00578540 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578541 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x578546u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x578541u); RETCHK(0x578546u, 0x578541u); LOADALL;
  /* 00578546 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00578549:;
  /* 00578549 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057854a call 0x5b4a40 */ esp -= 4; M32(esp) = 0x57854fu; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x57854au); RETCHK(0x57854fu, 0x57854au); LOADALL;
  /* 0057854f mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00578554 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 0057855a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057855b mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057855e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057855f call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x578565u; SAVEALL; call_ind(c, t_); RETCHK(0x578565u, 0x57855fu); LOADALL; }
  /* 00578565 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00578569 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057856c add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057856f mov eax, edi */ { eax = (u32)(edi); }
  /* 00578571 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578573 jne 0x5784f6 */ if (!ZF_) goto L_005784f6;
  /* 00578575 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
L_00578579:;
  /* 00578579 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057857c lea ebx, [esi + 0x10] */ ebx = (u32)((u32)(esi + 0x10u));
  /* 0057857f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578581 je 0x5785c7 */ if (ZF_) goto L_005785c7;
L_00578583:;
  /* 00578583 mov ecx, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); ecx = (u32)(M32(m_)); }
  /* 00578589 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0057858b mov esi, eax */ { esi = (u32)(eax); }
  /* 0057858d sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0057858f sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00578592 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578593 mov edx, dword ptr [ecx + esi + 8] */ { const u32 m_ = (u32)(ecx + esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00578597 lea eax, [ecx + esi] */ eax = (u32)((u32)(ecx + esi));
  /* 0057859a mov ecx, dword ptr [ecx + esi + 4] */ { const u32 m_ = (u32)(ecx + esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057859e mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005785a0 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005785a3 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005785a6 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005785a9 mov dword ptr [eax + 8], ebp */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebp); }
  /* 005785ac mov dword ptr [eax + 4], ebp */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebp); }
  /* 005785af mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
  /* 005785b1 call 0x57d320 */ esp -= 4; M32(esp) = 0x5785b6u; SAVEALL; F_0057d320(c); ABI_CHECK(0x57d320u, 0x5785b1u); RETCHK(0x5785b6u, 0x5785b1u); LOADALL;
  /* 005785b6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005785b9 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005785bb je 0x5785c3 */ if (ZF_) goto L_005785c3;
  /* 005785bd cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005785bf mov eax, edi */ { eax = (u32)(edi); }
  /* 005785c1 jne 0x578583 */ if (!ZF_) goto L_00578583;
L_005785c3:;
  /* 005785c3 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
L_005785c7:;
  /* 005785c7 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005785ca lea ebx, [esi + 0x18] */ ebx = (u32)((u32)(esi + 0x18u));
  /* 005785cd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005785cf je 0x578615 */ if (ZF_) goto L_00578615;
L_005785d1:;
  /* 005785d1 mov ecx, dword ptr [0x68a8f8] */ { const u32 m_ = (u32)(0x68a8f8u); ecx = (u32)(M32(m_)); }
  /* 005785d7 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005785d9 mov esi, eax */ { esi = (u32)(eax); }
  /* 005785db sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005785dd sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005785e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005785e1 mov edx, dword ptr [ecx + esi + 8] */ { const u32 m_ = (u32)(ecx + esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005785e5 lea eax, [ecx + esi] */ eax = (u32)((u32)(ecx + esi));
  /* 005785e8 mov ecx, dword ptr [ecx + esi + 4] */ { const u32 m_ = (u32)(ecx + esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005785ec mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005785ee mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005785f1 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005785f4 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005785f7 mov dword ptr [eax + 8], ebp */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebp); }
  /* 005785fa mov dword ptr [eax + 4], ebp */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebp); }
  /* 005785fd mov dword ptr [eax], ebp */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebp); }
  /* 005785ff call 0x5afe70 */ esp -= 4; M32(esp) = 0x578604u; SAVEALL; F_005afe70(c); ABI_CHECK(0x5afe70u, 0x5785ffu); RETCHK(0x578604u, 0x5785ffu); LOADALL;
  /* 00578604 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578607 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578609 je 0x578611 */ if (ZF_) goto L_00578611;
  /* 0057860b cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057860d mov eax, edi */ { eax = (u32)(edi); }
  /* 0057860f jne 0x5785d1 */ if (!ZF_) goto L_005785d1;
L_00578611:;
  /* 00578611 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
L_00578615:;
  /* 00578615 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00578618 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057861a je 0x578625 */ if (ZF_) goto L_00578625;
  /* 0057861c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057861d call 0x5abc60 */ esp -= 4; M32(esp) = 0x578622u; SAVEALL; F_005abc60(c); ABI_CHECK(0x5abc60u, 0x57861du); RETCHK(0x578622u, 0x57861du); LOADALL;
  /* 00578622 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00578625:;
  /* 00578625 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057862a mov edx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); edx = (u32)(M32(m_)); }
  /* 00578630 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578631 mov ecx, dword ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00578635 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578636 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57863cu; SAVEALL; call_ind(c, t_); RETCHK(0x57863cu, 0x578636u); LOADALL; }
  /* 0057863c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057863f mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00578644 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578645 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578646 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578647 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578648 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578650(CPU *c) {
  NATIVE_HOOK(0x578650u) REGS; LOADALL;
L_00578650:;
  /* 00578650 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00578654 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578655 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00578659 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057865a mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 0057865d lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 00578660 lea edx, [esi + 0x40] */ edx = (u32)((u32)(esi + 0x40u));
  /* 00578663 mov dword ptr [esi + 0x44], ecx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ecx); }
  /* 00578666 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 00578668 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 0057866a mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057866d mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057866f mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 00578672 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578673 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578674 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578680(CPU *c) {
  NATIVE_HOOK(0x578680u) REGS; LOADALL;
L_00578680:;
  /* 00578680 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00578684 mov ecx, dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ecx = (u32)(M32(m_)); }
  /* 00578687 mov edx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); edx = (u32)(M32(m_)); }
  /* 0057868a mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057868c mov ecx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0057868f mov edx, dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); edx = (u32)(M32(m_)); }
  /* 00578692 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00578695 mov dword ptr [eax + 0x3c], 0 */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 0057869c mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005786a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005786b0(CPU *c) {
  NATIVE_HOOK(0x5786b0u) REGS; LOADALL;
L_005786b0:;
  /* 005786b0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005786b4 mov ecx, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); ecx = (u32)(M32(m_)); }
  /* 005786ba add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005786bc mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005786bf mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005786c2 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005786c4 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005786c7 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005786ca mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005786cd xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005786cf mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005786d2 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005786d5 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005786d7 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005786db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005786e0(CPU *c) {
  NATIVE_HOOK(0x5786e0u) REGS; LOADALL;
L_005786e0:;
  /* 005786e0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005786e4 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005786e7 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005786e9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005786ea lea ebp, [eax + 8] */ ebp = (u32)((u32)(eax + 0x8u));
  /* 005786ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005786ee push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005786ef mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005786f2 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005786f4 je 0x57875a */ if (ZF_) goto L_0057875a;
L_005786f6:;
  /* 005786f6 lea edx, [eax - 0x40] */ edx = (u32)((u32)(eax + 0xffffffc0u));
  /* 005786f9 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005786fa test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005786fc je 0x578704 */ if (ZF_) goto L_00578704;
  /* 005786fe mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00578700 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578702 jne 0x5786f6 */ if (!ZF_) goto L_005786f6;
L_00578704:;
  /* 00578704 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578706 jle 0x57875a */ if ((ZF_|LT_)) goto L_0057875a;
  /* 00578708 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057870d lea edi, [ecx*4] */ edi = (u32)((u32)(ecx * 4u));
  /* 00578714 push 0x3000f */ { u32 v_ = 0x3000fu; esp -= 4; M32(esp) = v_; }
  /* 00578719 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057871a call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x578720u; SAVEALL; call_ind(c, t_); RETCHK(0x578720u, 0x57871au); LOADALL; }
  /* 00578720 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 00578724 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578727 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578729 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0057872b jne 0x578764 */ if (!ZF_) goto L_00578764;
  /* 0057872d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057872e push 0x80000013 */ { u32 v_ = 0x80000013u; esp -= 4; M32(esp) = v_; }
  /* 00578733 mov dword ptr [esp + 0x14], 2 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x2u); }
  /* 0057873b call 0x619d80 */ esp -= 4; M32(esp) = 0x578740u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57873bu); RETCHK(0x578740u, 0x57873bu); LOADALL;
  /* 00578740 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 00578744 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 00578748 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578749 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57874eu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x578749u); RETCHK(0x57874eu, 0x578749u); LOADALL;
  /* 0057874e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578751 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578753 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578754 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578755 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578756 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578759 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057875a:;
  /* 0057875a mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 0057875e mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
L_00578764:;
  /* 00578764 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00578766 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578767 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0057876e mov ebx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ebx = (u32)(M32(m_)); }
  /* 00578771 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578773 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00578777 je 0x5787b6 */ if (ZF_) goto L_005787b6;
L_00578779:;
  /* 00578779 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057877c mov edi, dword ptr [ebx - 0x28] */ { const u32 m_ = (u32)(ebx + 0xffffffd8u); edi = (u32)(M32(m_)); }
  /* 0057877f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578781 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578783 jle 0x578793 */ if ((ZF_|LT_)) goto L_00578793;
  /* 00578785 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
L_00578787:;
  /* 00578787 cmp dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578789 je 0x5787b0 */ if (ZF_) goto L_005787b0;
  /* 0057878b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057878c add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0057878f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578791 jl 0x578787 */ if (LT_) goto L_00578787;
L_00578793:;
  /* 00578793 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578794 call 0x57c3c0 */ esp -= 4; M32(esp) = 0x578799u; SAVEALL; F_0057c3c0(c); ABI_CHECK(0x57c3c0u, 0x578794u); RETCHK(0x578799u, 0x578794u); LOADALL;
  /* 00578799 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0057879d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005787a0 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 005787a2 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005787a5 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005787a9 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005787ac inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005787ad mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_005787b0:;
  /* 005787b0 mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 005787b2 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005787b4 jne 0x578779 */ if (!ZF_) goto L_00578779;
L_005787b6:;
  /* 005787b6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005787b7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005787b9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005787ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005787bb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005787bc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005787bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005787c0(CPU *c) {
  NATIVE_HOOK(0x5787c0u) REGS; LOADALL;
L_005787c0:;
  /* 005787c0 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005787c3 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005787c7 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005787cb lea ecx, [esp] */ ecx = (u32)((u32)(esp));
  /* 005787cf mov dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(eax); }
  /* 005787d3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005787d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005787d6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005787d7 mov dword ptr [esp + 0x1c], 1 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x1u); }
  /* 005787df mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005787e3 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005787e7 call 0x5787f0 */ esp -= 4; M32(esp) = 0x5787ecu; SAVEALL; F_005787f0(c); ABI_CHECK(0x5787f0u, 0x5787e7u); RETCHK(0x5787ecu, 0x5787e7u); LOADALL;
  /* 005787ec add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005787ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005787f0(CPU *c) {
  NATIVE_HOOK(0x5787f0u) REGS; LOADALL;
L_005787f0:;
  /* 005787f0 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005787f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005787f4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005787f5 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 005787f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005787fa mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 005787fe xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00578800 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578801 cmp dword ptr [esi + 0x10], ebp */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578804 jne 0x578847 */ if (!ZF_) goto L_00578847;
  /* 00578806 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 00578809 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057880a call 0x57c4e0 */ esp -= 4; M32(esp) = 0x57880fu; SAVEALL; F_0057c4e0(c); ABI_CHECK(0x57c4e0u, 0x57880au); RETCHK(0x57880fu, 0x57880au); LOADALL;
  /* 0057880f mov edi, eax */ { edi = (u32)(eax); }
  /* 00578811 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578812 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00578817 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057881a call 0x5bfa40 */ esp -= 4; M32(esp) = 0x57881fu; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x57881au); RETCHK(0x57881fu, 0x57881au); LOADALL;
  /* 0057881f mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00578821 lea eax, [edi + eax + 0xc] */ eax = (u32)((u32)(edi + eax + 0xcu));
  /* 00578825 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00578827 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 0057882c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057882d push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0057882f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578830 call 0x5b3830 */ esp -= 4; M32(esp) = 0x578835u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578830u); RETCHK(0x578835u, 0x578830u); LOADALL;
  /* 00578835 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578838 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057883a jne 0x578879 */ if (!ZF_) goto L_00578879;
  /* 0057883c mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 0057883f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578840 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578841 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578842 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578843 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578846 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578847:;
  /* 00578847 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578848 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 0057884d call 0x5bfa40 */ esp -= 4; M32(esp) = 0x578852u; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x57884du); RETCHK(0x578852u, 0x57884du); LOADALL;
  /* 00578852 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00578854 add eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578857 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00578859 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 0057885e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057885f push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 00578861 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578862 call 0x5b3830 */ esp -= 4; M32(esp) = 0x578867u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578862u); RETCHK(0x578867u, 0x578862u); LOADALL;
  /* 00578867 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057886a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057886c jne 0x578879 */ if (!ZF_) goto L_00578879;
  /* 0057886e mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 00578871 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578872 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578873 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578874 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578875 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578878 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578879:;
  /* 00578879 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057887b push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 0057887d push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 00578882 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00578884 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00578886 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578887 call 0x5b3830 */ esp -= 4; M32(esp) = 0x57888cu; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578887u); RETCHK(0x57888cu, 0x578887u); LOADALL;
  /* 0057888c add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057888f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578891 jne 0x57889b */ if (!ZF_) goto L_0057889b;
  /* 00578893 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578894 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578895 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578896 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578897 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057889a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057889b:;
  /* 0057889b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057889e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005788a0 mov cl, byte ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005788a3 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005788a5 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005788a9 mov dword ptr [esp + 0x1c], ebp */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005788ad je 0x5788d3 */ if (ZF_) goto L_005788d3;
  /* 005788af mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005788b2 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 005788b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005788b7 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 005788ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005788bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005788bc call 0x5bff40 */ esp -= 4; M32(esp) = 0x5788c1u; SAVEALL; F_005bff40(c); ABI_CHECK(0x5bff40u, 0x5788bcu); RETCHK(0x5788c1u, 0x5788bcu); LOADALL;
  /* 005788c1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005788c4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005788c6 jne 0x5788d3 */ if (!ZF_) goto L_005788d3;
  /* 005788c8 mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 005788cb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005788cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005788cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005788ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005788cf add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005788d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005788d3:;
  /* 005788d3 cmp dword ptr [esi + 0x10], ebp */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005788d6 je 0x578904 */ if (ZF_) goto L_00578904;
  /* 005788d8 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005788db mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 005788de xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005788e0 cmp ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005788e2 jle 0x57895d */ if ((ZF_|LT_)) goto L_0057895d;
  /* 005788e4 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
L_005788e7:;
  /* 005788e7 cmp dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005788e9 je 0x578900 */ if (ZF_) goto L_00578900;
  /* 005788eb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005788ec add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005788ef cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005788f1 jl 0x5788e7 */ if (LT_) goto L_005788e7;
  /* 005788f3 mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 005788f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005788f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005788f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005788f9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005788fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005788fc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005788ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578900:;
  /* 00578900 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
L_00578904:;
  /* 00578904 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00578906 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 0057890a push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0057890c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057890d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057890e call 0x5b3130 */ esp -= 4; M32(esp) = 0x578913u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x57890eu); RETCHK(0x578913u, 0x57890eu); LOADALL;
  /* 00578913 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578916 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578918 jne 0x578925 */ if (!ZF_) goto L_00578925;
  /* 0057891a mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 0057891d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057891e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057891f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578920 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578921 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578924 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578925:;
  /* 00578925 cmp dword ptr [esi + 0x10], ebp */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578928 jne 0x578948 */ if (!ZF_) goto L_00578948;
  /* 0057892a mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0057892c mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 0057892f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578930 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578931 call 0x57c590 */ esp -= 4; M32(esp) = 0x578936u; SAVEALL; F_0057c590(c); ABI_CHECK(0x57c590u, 0x578931u); RETCHK(0x578936u, 0x578931u); LOADALL;
  /* 00578936 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578939 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057893b jne 0x578948 */ if (!ZF_) goto L_00578948;
  /* 0057893d mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 00578940 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578941 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578942 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578943 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578944 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578947 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578948:;
  /* 00578948 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057894a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057894b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057894c push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00578951 call 0x5bfa80 */ esp -= 4; M32(esp) = 0x578956u; SAVEALL; F_005bfa80(c); ABI_CHECK(0x5bfa80u, 0x578951u); RETCHK(0x578956u, 0x578951u); LOADALL;
  /* 00578956 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578959 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057895b jne 0x57896a */ if (!ZF_) goto L_0057896a;
L_0057895d:;
  /* 0057895d mov dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebp); }
  /* 00578960 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578961 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578962 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578963 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578965 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578966 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578969 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057896a:;
  /* 0057896a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057896b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057896c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057896e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057896f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578970 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578973 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578980(CPU *c) {
  NATIVE_HOOK(0x578980u) REGS; LOADALL;
L_00578980:;
  /* 00578980 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578983 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578984 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578985 mov ebp, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ebp = (u32)(M32(m_)); }
  /* 00578989 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057898a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057898b lea ecx, [esp + 0x1c] */ ecx = (u32)((u32)(esp + 0x1cu));
  /* 0057898f mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00578992 mov dword ptr [esp + 0x10], 0x18 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x18u); }
  /* 0057899a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057899b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057899c call 0x5bfe30 */ esp -= 4; M32(esp) = 0x5789a1u; SAVEALL; F_005bfe30(c); ABI_CHECK(0x5bfe30u, 0x57899cu); RETCHK(0x5789a1u, 0x57899cu); LOADALL;
  /* 005789a1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005789a4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005789a6 je 0x578a72 */ if (ZF_) goto L_00578a72;
  /* 005789ac lea edx, [esp + 0x1c] */ edx = (u32)((u32)(esp + 0x1cu));
  /* 005789b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005789b1 call 0x5bffb0 */ esp -= 4; M32(esp) = 0x5789b6u; SAVEALL; F_005bffb0(c); ABI_CHECK(0x5bffb0u, 0x5789b1u); RETCHK(0x5789b6u, 0x5789b1u); LOADALL;
  /* 005789b6 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005789ba lea edx, [ecx + eax + 0xc] */ edx = (u32)((u32)(ecx + eax + 0xcu));
  /* 005789be lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 005789c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005789c3 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 005789c7 call 0x5bff80 */ esp -= 4; M32(esp) = 0x5789ccu; SAVEALL; F_005bff80(c); ABI_CHECK(0x5bff80u, 0x5789c7u); RETCHK(0x5789ccu, 0x5789c7u); LOADALL;
  /* 005789cc lea ecx, [esp + 0x1c] */ ecx = (u32)((u32)(esp + 0x1cu));
  /* 005789d0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005789d2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005789d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005789d4 mov dword ptr [esp + 0x28], edi */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edi); }
  /* 005789d8 call 0x5786e0 */ esp -= 4; M32(esp) = 0x5789ddu; SAVEALL; F_005786e0(c); ABI_CHECK(0x5786e0u, 0x5789d8u); RETCHK(0x5789ddu, 0x5789d8u); LOADALL;
  /* 005789dd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005789e0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005789e2 je 0x578a72 */ if (ZF_) goto L_00578a72;
  /* 005789e8 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005789ec mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 005789f1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005789f3 jle 0x578a12 */ if ((ZF_|LT_)) goto L_00578a12;
L_005789f5:;
  /* 005789f5 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005789f9 mov eax, dword ptr [edx + edi*4] */ { const u32 m_ = (u32)(edx + edi * 4u); eax = (u32)(M32(m_)); }
  /* 005789fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005789fd call 0x57c4e0 */ esp -= 4; M32(esp) = 0x578a02u; SAVEALL; F_0057c4e0(c); ABI_CHECK(0x57c4e0u, 0x5789fdu); RETCHK(0x578a02u, 0x5789fdu); LOADALL;
  /* 00578a02 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578a05 lea esi, [esi + eax + 0xc] */ esi = (u32)((u32)(esi + eax + 0xcu));
  /* 00578a09 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00578a0d inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00578a0e cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578a10 jl 0x5789f5 */ if (LT_) goto L_005789f5;
L_00578a12:;
  /* 00578a12 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00578a16 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 00578a1a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578a1b lea ecx, [eax + esi + 0xc] */ ecx = (u32)((u32)(eax + esi + 0xcu));
  /* 00578a1f mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00578a23 call 0x578db0 */ esp -= 4; M32(esp) = 0x578a28u; SAVEALL; F_00578db0(c); ABI_CHECK(0x578db0u, 0x578a23u); RETCHK(0x578a28u, 0x578a23u); LOADALL;
  /* 00578a28 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 00578a2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578a2d push 0x578f60 */ { u32 v_ = 0x578f60u; esp -= 4; M32(esp) = v_; }
  /* 00578a32 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578a33 call 0x577da0 */ esp -= 4; M32(esp) = 0x578a38u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x578a33u); RETCHK(0x578a38u, 0x578a33u); LOADALL;
  /* 00578a38 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 00578a3c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578a3d push 0x578f00 */ { u32 v_ = 0x578f00u; esp -= 4; M32(esp) = v_; }
  /* 00578a42 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578a43 call 0x577e30 */ esp -= 4; M32(esp) = 0x578a48u; SAVEALL; F_00577e30(c); ABI_CHECK(0x577e30u, 0x578a43u); RETCHK(0x578a48u, 0x578a43u); LOADALL;
  /* 00578a48 lea edx, [esp + 0x2c] */ edx = (u32)((u32)(esp + 0x2cu));
  /* 00578a4c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578a4d push 0x578f30 */ { u32 v_ = 0x578f30u; esp -= 4; M32(esp) = v_; }
  /* 00578a52 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578a53 call 0x577de0 */ esp -= 4; M32(esp) = 0x578a58u; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x578a53u); RETCHK(0x578a58u, 0x578a53u); LOADALL;
  /* 00578a58 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578a59 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 00578a5e call 0x5bfa40 */ esp -= 4; M32(esp) = 0x578a63u; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x578a5eu); RETCHK(0x578a63u, 0x578a5eu); LOADALL;
  /* 00578a63 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 00578a67 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578a6a lea eax, [ecx + eax + 0xc] */ eax = (u32)((u32)(ecx + eax + 0xcu));
  /* 00578a6e mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
L_00578a72:;
  /* 00578a72 mov edi, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); edi = (u32)(M32(m_)); }
  /* 00578a76 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00578a78 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 00578a7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578a7e push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00578a80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578a81 call 0x5b3830 */ esp -= 4; M32(esp) = 0x578a86u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578a81u); RETCHK(0x578a86u, 0x578a81u); LOADALL;
  /* 00578a86 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578a89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578a8b jne 0x578a95 */ if (!ZF_) goto L_00578a95;
  /* 00578a8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578a8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578a8f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578a90 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578a91 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578a94 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578a95:;
  /* 00578a95 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00578a97 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 00578a9c push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00578a9e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00578aa0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578aa1 call 0x5b3830 */ esp -= 4; M32(esp) = 0x578aa6u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578aa1u); RETCHK(0x578aa6u, 0x578aa1u); LOADALL;
  /* 00578aa6 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578aa9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578aab jne 0x578ab5 */ if (!ZF_) goto L_00578ab5;
  /* 00578aad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578aae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578aaf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578ab0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578ab1 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578ab4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578ab5:;
  /* 00578ab5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00578ab8 lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 00578abb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00578abd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578abf je 0x578acf */ if (ZF_) goto L_00578acf;
L_00578ac1:;
  /* 00578ac1 lea edx, [eax - 0x40] */ edx = (u32)((u32)(eax + 0xffffffc0u));
  /* 00578ac4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00578ac5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578ac7 je 0x578acf */ if (ZF_) goto L_00578acf;
  /* 00578ac9 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00578acb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578acd jne 0x578ac1 */ if (!ZF_) goto L_00578ac1;
L_00578acf:;
  /* 00578acf lea eax, [esp + 0x4c] */ eax = (u32)((u32)(esp + 0x4cu));
  /* 00578ad3 mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00578ad7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578ad8 push 0x578da0 */ { u32 v_ = 0x578da0u; esp -= 4; M32(esp) = v_; }
  /* 00578add push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578ade mov dword ptr [esp + 0x58], 0 */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(0x0u); }
  /* 00578ae6 call 0x577e30 */ esp -= 4; M32(esp) = 0x578aebu; SAVEALL; F_00577e30(c); ABI_CHECK(0x577e30u, 0x578ae6u); RETCHK(0x578aebu, 0x578ae6u); LOADALL;
  /* 00578aeb mov ecx, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); ecx = (u32)(M32(m_)); }
  /* 00578aef mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00578af2 lea esi, [ebp + 0x18] */ esi = (u32)((u32)(ebp + 0x18u));
  /* 00578af5 mov dword ptr [esp + 0x34], ecx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ecx); }
  /* 00578af9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578afc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00578afe cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578b00 je 0x578b1c */ if (ZF_) goto L_00578b1c;
  /* 00578b02 mov edx, dword ptr [0x68a8f8] */ { const u32 m_ = (u32)(0x68a8f8u); edx = (u32)(M32(m_)); }
L_00578b08:;
  /* 00578b08 mov edi, eax */ { edi = (u32)(eax); }
  /* 00578b0a inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00578b0b sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00578b0d sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00578b10 je 0x578b18 */ if (ZF_) goto L_00578b18;
  /* 00578b12 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00578b14 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578b16 jne 0x578b08 */ if (!ZF_) goto L_00578b08;
L_00578b18:;
  /* 00578b18 mov edi, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); edi = (u32)(M32(m_)); }
L_00578b1c:;
  /* 00578b1c lea edx, [esp + 0x24] */ edx = (u32)((u32)(esp + 0x24u));
  /* 00578b20 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00578b22 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578b23 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578b24 mov dword ptr [esp + 0x38], ecx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00578b28 call 0x5b3130 */ esp -= 4; M32(esp) = 0x578b2du; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x578b28u); RETCHK(0x578b2du, 0x578b28u); LOADALL;
  /* 00578b2d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578b30 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578b32 jne 0x578b3c */ if (!ZF_) goto L_00578b3c;
  /* 00578b34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578b35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578b36 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578b37 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578b38 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578b3b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578b3c:;
  /* 00578b3c mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00578b3f lea ecx, [esp + 0x34] */ ecx = (u32)((u32)(esp + 0x34u));
  /* 00578b43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578b44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578b45 call 0x5bfe30 */ esp -= 4; M32(esp) = 0x578b4au; SAVEALL; F_005bfe30(c); ABI_CHECK(0x5bfe30u, 0x578b45u); RETCHK(0x578b4au, 0x578b45u); LOADALL;
  /* 00578b4a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578b4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578b4f jne 0x578b59 */ if (!ZF_) goto L_00578b59;
  /* 00578b51 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578b52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578b53 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578b54 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578b55 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578b58 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578b59:;
  /* 00578b59 lea edx, [esp + 0x34] */ edx = (u32)((u32)(esp + 0x34u));
  /* 00578b5d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578b5e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578b5f call 0x5c0000 */ esp -= 4; M32(esp) = 0x578b64u; SAVEALL; F_005c0000(c); ABI_CHECK(0x5c0000u, 0x578b5fu); RETCHK(0x578b64u, 0x578b5fu); LOADALL;
  /* 00578b64 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578b67 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578b69 jne 0x578b82 */ if (!ZF_) goto L_00578b82;
  /* 00578b6b lea eax, [esp + 0x34] */ eax = (u32)((u32)(esp + 0x34u));
  /* 00578b6f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578b70 call 0x5bff80 */ esp -= 4; M32(esp) = 0x578b75u; SAVEALL; F_005bff80(c); ABI_CHECK(0x5bff80u, 0x578b70u); RETCHK(0x578b75u, 0x578b70u); LOADALL;
  /* 00578b75 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578b78 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578b7a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578b7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578b7c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578b7d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578b7e add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578b81 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578b82:;
  /* 00578b82 lea ecx, [esp + 0x3c] */ ecx = (u32)((u32)(esp + 0x3cu));
  /* 00578b86 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578b87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578b88 mov dword ptr [esp + 0x48], 0 */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(0x0u); }
  /* 00578b90 call 0x5786e0 */ esp -= 4; M32(esp) = 0x578b95u; SAVEALL; F_005786e0(c); ABI_CHECK(0x5786e0u, 0x578b90u); RETCHK(0x578b95u, 0x578b90u); LOADALL;
  /* 00578b95 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578b98 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578b9a jne 0x578ba4 */ if (!ZF_) goto L_00578ba4;
  /* 00578b9c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578b9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578b9e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578b9f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578ba0 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578ba3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578ba4:;
  /* 00578ba4 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 00578ba8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00578baa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578bac mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 00578bb1 jle 0x578bd0 */ if ((ZF_|LT_)) goto L_00578bd0;
L_00578bb3:;
  /* 00578bb3 mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 00578bb7 mov eax, dword ptr [edx + esi*4] */ { const u32 m_ = (u32)(edx + esi * 4u); eax = (u32)(M32(m_)); }
  /* 00578bba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578bbb call 0x57c4e0 */ esp -= 4; M32(esp) = 0x578bc0u; SAVEALL; F_0057c4e0(c); ABI_CHECK(0x57c4e0u, 0x578bbbu); RETCHK(0x578bc0u, 0x578bbbu); LOADALL;
  /* 00578bc0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578bc3 lea edi, [edi + eax + 0xc] */ edi = (u32)((u32)(edi + eax + 0xcu));
  /* 00578bc7 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 00578bcb inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00578bcc cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578bce jl 0x578bb3 */ if (LT_) goto L_00578bb3;
L_00578bd0:;
  /* 00578bd0 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00578bd2 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 00578bd7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578bd8 mov edi, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); edi = (u32)(M32(m_)); }
  /* 00578bdc push 0x1a */ { u32 v_ = 0x1au; esp -= 4; M32(esp) = v_; }
  /* 00578bde push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578bdf call 0x5b3830 */ esp -= 4; M32(esp) = 0x578be4u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578bdfu); RETCHK(0x578be4u, 0x578bdfu); LOADALL;
  /* 00578be4 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578be7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578be9 je 0x578d35 */ if (ZF_) goto L_00578d35;
  /* 00578bef push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00578bf1 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 00578bf6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00578bf8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00578bfa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578bfb call 0x5b3830 */ esp -= 4; M32(esp) = 0x578c00u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578bfbu); RETCHK(0x578c00u, 0x578bfbu); LOADALL;
  /* 00578c00 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578c03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578c05 je 0x578d35 */ if (ZF_) goto L_00578d35;
  /* 00578c0b mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 00578c0f lea ecx, [esp + 0x4c] */ ecx = (u32)((u32)(esp + 0x4cu));
  /* 00578c13 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00578c15 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578c16 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578c17 mov dword ptr [esp + 0x58], eax */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(eax); }
  /* 00578c1b call 0x5b3130 */ esp -= 4; M32(esp) = 0x578c20u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x578c1bu); RETCHK(0x578c20u, 0x578c1bu); LOADALL;
  /* 00578c20 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578c23 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578c25 je 0x578d35 */ if (ZF_) goto L_00578d35;
  /* 00578c2b mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 00578c2f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00578c31 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578c33 jle 0x578c57 */ if ((ZF_|LT_)) goto L_00578c57;
L_00578c35:;
  /* 00578c35 mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 00578c39 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578c3a mov eax, dword ptr [edx + esi*4] */ { const u32 m_ = (u32)(edx + esi * 4u); eax = (u32)(M32(m_)); }
  /* 00578c3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578c3e call 0x57c590 */ esp -= 4; M32(esp) = 0x578c43u; SAVEALL; F_0057c590(c); ABI_CHECK(0x57c590u, 0x578c3eu); RETCHK(0x578c43u, 0x578c3eu); LOADALL;
  /* 00578c43 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578c46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578c48 je 0x578d35 */ if (ZF_) goto L_00578d35;
  /* 00578c4e mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 00578c52 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00578c53 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578c55 jl 0x578c35 */ if (LT_) goto L_00578c35;
L_00578c57:;
  /* 00578c57 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00578c59 mov dword ptr [esp + 0x44], 1 */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(0x1u); }
  /* 00578c61 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578c63 mov dword ptr [esp + 0x30], edi */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edi); }
  /* 00578c67 je 0x578c86 */ if (ZF_) goto L_00578c86;
L_00578c69:;
  /* 00578c69 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00578c6b lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 00578c6f add eax, -0x40 */ { u32 a_ = eax, b_ = 0xffffffc0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578c72 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578c73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578c74 call 0x5787f0 */ esp -= 4; M32(esp) = 0x578c79u; SAVEALL; F_005787f0(c); ABI_CHECK(0x5787f0u, 0x578c74u); RETCHK(0x578c79u, 0x578c74u); LOADALL;
  /* 00578c79 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578c7c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578c7e je 0x578c86 */ if (ZF_) goto L_00578c86;
  /* 00578c80 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578c82 mov eax, esi */ { eax = (u32)(esi); }
  /* 00578c84 jne 0x578c69 */ if (!ZF_) goto L_00578c69;
L_00578c86:;
  /* 00578c86 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00578c8a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578c8c jle 0x578ccb */ if ((ZF_|LT_)) goto L_00578ccb;
  /* 00578c8e mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 00578c92 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578c94 je 0x578ccb */ if (ZF_) goto L_00578ccb;
  /* 00578c96 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00578c99 lea edi, [ebp + 0x10] */ edi = (u32)((u32)(ebp + 0x10u));
  /* 00578c9c cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578c9e je 0x578cc7 */ if (ZF_) goto L_00578cc7;
L_00578ca0:;
  /* 00578ca0 mov esi, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); esi = (u32)(M32(m_)); }
  /* 00578ca6 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00578ca8 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578caa mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00578cac lea edx, [esp + 0x30] */ edx = (u32)((u32)(esp + 0x30u));
  /* 00578cb0 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578cb3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578cb4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578cb5 call 0x578e00 */ esp -= 4; M32(esp) = 0x578cbau; SAVEALL; F_00578e00(c); ABI_CHECK(0x578e00u, 0x578cb5u); RETCHK(0x578cbau, 0x578cb5u); LOADALL;
  /* 00578cba add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578cbd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578cbf je 0x578cc7 */ if (ZF_) goto L_00578cc7;
  /* 00578cc1 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578cc3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00578cc5 jne 0x578ca0 */ if (!ZF_) goto L_00578ca0;
L_00578cc7:;
  /* 00578cc7 mov edi, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); edi = (u32)(M32(m_)); }
L_00578ccb:;
  /* 00578ccb mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00578ccf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578cd1 jle 0x578d0c */ if ((ZF_|LT_)) goto L_00578d0c;
  /* 00578cd3 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 00578cd7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578cd9 je 0x578d0c */ if (ZF_) goto L_00578d0c;
  /* 00578cdb mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00578cde lea ebx, [ebp + 0x18] */ ebx = (u32)((u32)(ebp + 0x18u));
  /* 00578ce1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578ce3 je 0x578d0c */ if (ZF_) goto L_00578d0c;
L_00578ce5:;
  /* 00578ce5 mov edx, dword ptr [0x68a8f8] */ { const u32 m_ = (u32)(0x68a8f8u); edx = (u32)(M32(m_)); }
  /* 00578ceb mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00578ced mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00578cef lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 00578cf3 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578cf5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578cf6 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578cf9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578cfa call 0x578e80 */ esp -= 4; M32(esp) = 0x578cffu; SAVEALL; F_00578e80(c); ABI_CHECK(0x578e80u, 0x578cfau); RETCHK(0x578cffu, 0x578cfau); LOADALL;
  /* 00578cff add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578d02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578d04 je 0x578d0c */ if (ZF_) goto L_00578d0c;
  /* 00578d06 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578d08 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00578d0a jne 0x578ce5 */ if (!ZF_) goto L_00578ce5;
L_00578d0c:;
  /* 00578d0c lea edx, [esp + 0x3c] */ edx = (u32)((u32)(esp + 0x3cu));
  /* 00578d10 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578d11 call 0x578db0 */ esp -= 4; M32(esp) = 0x578d16u; SAVEALL; F_00578db0(c); ABI_CHECK(0x578db0u, 0x578d11u); RETCHK(0x578d16u, 0x578d11u); LOADALL;
  /* 00578d16 lea eax, [esp + 0x38] */ eax = (u32)((u32)(esp + 0x38u));
  /* 00578d1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578d1b call 0x5bff80 */ esp -= 4; M32(esp) = 0x578d20u; SAVEALL; F_005bff80(c); ABI_CHECK(0x5bff80u, 0x578d1bu); RETCHK(0x578d20u, 0x578d1bu); LOADALL;
  /* 00578d20 mov eax, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); eax = (u32)(M32(m_)); }
  /* 00578d24 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578d27 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578d29 jne 0x578d7a */ if (!ZF_) goto L_00578d7a;
  /* 00578d2b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578d2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578d2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578d2e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578d30 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578d31 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578d34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578d35:;
  /* 00578d35 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 00578d39 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00578d3b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578d3d jle 0x578d58 */ if ((ZF_|LT_)) goto L_00578d58;
L_00578d3f:;
  /* 00578d3f mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 00578d43 mov ecx, dword ptr [eax + esi*4] */ { const u32 m_ = (u32)(eax + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 00578d46 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578d47 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x578d4cu; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x578d47u); RETCHK(0x578d4cu, 0x578d47u); LOADALL;
  /* 00578d4c mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 00578d50 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578d53 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00578d54 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578d56 jl 0x578d3f */ if (LT_) goto L_00578d3f;
L_00578d58:;
  /* 00578d58 mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 00578d5c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578d5e je 0x578d70 */ if (ZF_) goto L_00578d70;
  /* 00578d60 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00578d66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578d67 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x578d6du; SAVEALL; call_ind(c, t_); RETCHK(0x578d6du, 0x578d67u); LOADALL; }
  /* 00578d6d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00578d70:;
  /* 00578d70 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578d71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578d72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578d73 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578d75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578d76 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578d79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578d7a:;
  /* 00578d7a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578d7b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578d7c push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 00578d81 call 0x5bfa80 */ esp -= 4; M32(esp) = 0x578d86u; SAVEALL; F_005bfa80(c); ABI_CHECK(0x5bfa80u, 0x578d81u); RETCHK(0x578d86u, 0x578d81u); LOADALL;
  /* 00578d86 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578d89 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00578d8b sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00578d8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578d8e and eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578d90 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578d91 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00578d92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00578d93 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578d96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578da0(CPU *c) {
  NATIVE_HOOK(0x578da0u) REGS; LOADALL;
L_00578da0:;
  /* 00578da0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00578da4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00578da6 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00578da7 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00578da9 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00578dad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578db0(CPU *c) {
  NATIVE_HOOK(0x578db0u) REGS; LOADALL;
L_00578db0:;
  /* 00578db0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578db1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00578db5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578db6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00578db8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00578dbb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578dbd jle 0x578dd5 */ if ((ZF_|LT_)) goto L_00578dd5;
L_00578dbf:;
  /* 00578dbf mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00578dc1 mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 00578dc4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578dc5 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x578dcau; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x578dc5u); RETCHK(0x578dcau, 0x578dc5u); LOADALL;
  /* 00578dca mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00578dcd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578dd0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00578dd1 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578dd3 jl 0x578dbf */ if (LT_) goto L_00578dbf;
L_00578dd5:;
  /* 00578dd5 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00578dd7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578dd9 je 0x578df1 */ if (ZF_) goto L_00578df1;
  /* 00578ddb mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00578de1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578de2 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x578de8u; SAVEALL; call_ind(c, t_); RETCHK(0x578de8u, 0x578de2u); LOADALL; }
  /* 00578de8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578deb mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
L_00578df1:;
  /* 00578df1 mov eax, esi */ { eax = (u32)(esi); }
  /* 00578df3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578df4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578df5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578e00(CPU *c) {
  NATIVE_HOOK(0x578e00u) REGS; LOADALL;
L_00578e00:;
  /* 00578e00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578e01 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00578e05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578e06 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00578e0a lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 00578e0e lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 00578e11 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00578e14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578e15 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578e16 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578e17 call 0x5bff40 */ esp -= 4; M32(esp) = 0x578e1cu; SAVEALL; F_005bff40(c); ABI_CHECK(0x5bff40u, 0x578e17u); RETCHK(0x578e1cu, 0x578e17u); LOADALL;
  /* 00578e1c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578e1f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578e21 je 0x578e68 */ if (ZF_) goto L_00578e68;
  /* 00578e23 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00578e25 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00578e27 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 00578e2c push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00578e2e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00578e30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578e31 call 0x5b3830 */ esp -= 4; M32(esp) = 0x578e36u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578e31u); RETCHK(0x578e36u, 0x578e31u); LOADALL;
  /* 00578e36 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578e39 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578e3b je 0x578e68 */ if (ZF_) goto L_00578e68;
  /* 00578e3d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00578e3f lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 00578e43 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00578e45 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578e46 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578e47 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x578e4cu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x578e47u); RETCHK(0x578e4cu, 0x578e47u); LOADALL;
  /* 00578e4c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578e4f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578e51 je 0x578e68 */ if (ZF_) goto L_00578e68;
  /* 00578e53 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00578e55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578e56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578e57 call 0x57d0f0 */ esp -= 4; M32(esp) = 0x578e5cu; SAVEALL; F_0057d0f0(c); ABI_CHECK(0x57d0f0u, 0x578e57u); RETCHK(0x578e5cu, 0x578e57u); LOADALL;
  /* 00578e5c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578e5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578e61 je 0x578e68 */ if (ZF_) goto L_00578e68;
  /* 00578e63 mov eax, edi */ { eax = (u32)(edi); }
  /* 00578e65 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578e66 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578e67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578e68:;
  /* 00578e68 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 00578e6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578e70 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578e72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578e73 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578e80(CPU *c) {
  NATIVE_HOOK(0x578e80u) REGS; LOADALL;
L_00578e80:;
  /* 00578e80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578e81 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00578e85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578e86 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00578e8a lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 00578e8e lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 00578e91 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00578e94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578e95 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578e96 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578e97 call 0x5bff40 */ esp -= 4; M32(esp) = 0x578e9cu; SAVEALL; F_005bff40(c); ABI_CHECK(0x5bff40u, 0x578e97u); RETCHK(0x578e9cu, 0x578e97u); LOADALL;
  /* 00578e9c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578e9f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578ea1 je 0x578ee8 */ if (ZF_) goto L_00578ee8;
  /* 00578ea3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00578ea5 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 00578ea7 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 00578eac push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00578eae push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00578eb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578eb1 call 0x5b3830 */ esp -= 4; M32(esp) = 0x578eb6u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x578eb1u); RETCHK(0x578eb6u, 0x578eb1u); LOADALL;
  /* 00578eb6 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578eb9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578ebb je 0x578ee8 */ if (ZF_) goto L_00578ee8;
  /* 00578ebd mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00578ebf lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 00578ec3 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00578ec5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578ec6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578ec7 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x578eccu; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x578ec7u); RETCHK(0x578eccu, 0x578ec7u); LOADALL;
  /* 00578ecc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578ecf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578ed1 je 0x578ee8 */ if (ZF_) goto L_00578ee8;
  /* 00578ed3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00578ed5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578ed6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578ed7 call 0x5bfc20 */ esp -= 4; M32(esp) = 0x578edcu; SAVEALL; F_005bfc20(c); ABI_CHECK(0x5bfc20u, 0x578ed7u); RETCHK(0x578edcu, 0x578ed7u); LOADALL;
  /* 00578edc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578edf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578ee1 je 0x578ee8 */ if (ZF_) goto L_00578ee8;
  /* 00578ee3 mov eax, edi */ { eax = (u32)(edi); }
  /* 00578ee5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578ee6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578ee7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00578ee8:;
  /* 00578ee8 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 00578eef pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578ef0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578ef2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578ef3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578f00(CPU *c) {
  NATIVE_HOOK(0x578f00u) REGS; LOADALL;
L_00578f00:;
  /* 00578f00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578f01 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00578f05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578f06 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00578f08 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00578f0b mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00578f0d mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00578f11 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578f12 call 0x57d0d0 */ esp -= 4; M32(esp) = 0x578f17u; SAVEALL; F_0057d0d0(c); ABI_CHECK(0x57d0d0u, 0x578f12u); RETCHK(0x578f17u, 0x578f12u); LOADALL;
  /* 00578f17 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00578f19 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578f1c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578f1f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00578f21 mov eax, edi */ { eax = (u32)(edi); }
  /* 00578f23 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 00578f25 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578f26 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578f27 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578f30(CPU *c) {
  NATIVE_HOOK(0x578f30u) REGS; LOADALL;
L_00578f30:;
  /* 00578f30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578f31 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00578f35 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578f36 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00578f38 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00578f3b mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00578f3d mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00578f41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578f42 call 0x5bfc00 */ esp -= 4; M32(esp) = 0x578f47u; SAVEALL; F_005bfc00(c); ABI_CHECK(0x5bfc00u, 0x578f42u); RETCHK(0x578f47u, 0x578f42u); LOADALL;
  /* 00578f47 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00578f49 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578f4c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578f4f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00578f51 mov eax, edi */ { eax = (u32)(edi); }
  /* 00578f53 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 00578f55 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578f56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578f57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578f60(CPU *c) {
  NATIVE_HOOK(0x578f60u) REGS; LOADALL;
L_00578f60:;
  /* 00578f60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578f61 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00578f65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578f66 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00578f6a mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00578f6c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578f6d add ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00578f70 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00578f75 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 00578f77 call 0x5bfa40 */ esp -= 4; M32(esp) = 0x578f7cu; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x578f77u); RETCHK(0x578f7cu, 0x578f77u); LOADALL;
  /* 00578f7c mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00578f7e add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00578f81 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578f84 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00578f86 mov eax, edi */ { eax = (u32)(edi); }
  /* 00578f88 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 00578f8a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00578f8b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00578f8c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578f90(CPU *c) {
  NATIVE_HOOK(0x578f90u) REGS; LOADALL;
L_00578f90:;
  /* 00578f90 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578f93 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00578f97 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00578f99 mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00578f9d mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 00578fa1 lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 00578fa5 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 00578fa9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578faa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578fab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00578fac call 0x578fc0 */ esp -= 4; M32(esp) = 0x578fb1u; SAVEALL; F_00578fc0(c); ABI_CHECK(0x578fc0u, 0x578facu); RETCHK(0x578fb1u, 0x578facu); LOADALL;
  /* 00578fb1 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578fb4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00578fc0(CPU *c) {
  NATIVE_HOOK(0x578fc0u) REGS; LOADALL;
L_00578fc0:;
  /* 00578fc0 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578fc3 lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 00578fc7 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 00578fcb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578fcc mov ebx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebx = (u32)(M32(m_)); }
  /* 00578fd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00578fd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00578fd2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00578fd3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00578fd4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00578fd5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00578fd7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00578fd8 call 0x5b3890 */ esp -= 4; M32(esp) = 0x578fddu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x578fd8u); RETCHK(0x578fddu, 0x578fd8u); LOADALL;
  /* 00578fdd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00578fe0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00578fe2 je 0x57925e */ if (ZF_) goto L_0057925e;
  /* 00578fe8 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00578fec cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578ff1 jb 0x57934b */ if (CF_) goto L_0057934b;
  /* 00578ff7 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00578ffc ja 0x57934b */ if (!(CF_|ZF_)) goto L_0057934b;
  /* 00579002 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00579006 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579008 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 0057900c lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 00579010 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 00579014 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579015 mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 00579019 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057901a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057901b mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 0057901f call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x579024u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x57901fu); RETCHK(0x579024u, 0x57901fu); LOADALL;
  /* 00579024 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00579028 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057902b cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057902d je 0x579039 */ if (ZF_) goto L_00579039;
  /* 0057902f push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 00579034 jmp 0x579350 */ goto L_00579350;
L_00579039:;
  /* 00579039 call 0x577e80 */ esp -= 4; M32(esp) = 0x57903eu; SAVEALL; F_00577e80(c); ABI_CHECK(0x577e80u, 0x579039u); RETCHK(0x57903eu, 0x579039u); LOADALL;
  /* 0057903e mov esi, eax */ { esi = (u32)(eax); }
  /* 00579040 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 00579042 cmp esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579044 je 0x57936e */ if (ZF_) goto L_0057936e;
  /* 0057904a mov cl, byte ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057904e mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 00579052 mov byte ptr [esi + 2], cl */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00579055 cmp dword ptr [eax + 4], ebp */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579058 je 0x579075 */ if (ZF_) goto L_00579075;
  /* 0057905a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057905c mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 00579060 mov ecx, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); ecx = (u32)(M32(m_)); }
  /* 00579063 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579064 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579065 call 0x5b49f0 */ esp -= 4; M32(esp) = 0x57906au; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x579065u); RETCHK(0x57906au, 0x579065u); LOADALL;
  /* 0057906a mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057906d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579070 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00579072 mov byte ptr [esi + 3], al */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
L_00579075:;
  /* 00579075 mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 00579079 cmp dword ptr [eax + 4], ebp */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057907c je 0x5790fc */ if (ZF_) goto L_005790fc;
  /* 0057907e mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00579080 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 00579084 mov edi, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 00579087 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057908a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057908c je 0x57923f */ if (ZF_) goto L_0057923f;
  /* 00579092 cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579094 je 0x57909f */ if (ZF_) goto L_0057909f;
  /* 00579096 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579097 call 0x57c3c0 */ esp -= 4; M32(esp) = 0x57909cu; SAVEALL; F_0057c3c0(c); ABI_CHECK(0x57c3c0u, 0x579097u); RETCHK(0x57909cu, 0x579097u); LOADALL;
  /* 0057909c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057909f:;
  /* 0057909f mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005790a2 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005790a4 je 0x5790af */ if (ZF_) goto L_005790af;
  /* 005790a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005790a7 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x5790acu; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x5790a7u); RETCHK(0x5790acu, 0x5790a7u); LOADALL;
  /* 005790ac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005790af:;
  /* 005790af cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005790b1 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 005790b4 je 0x5790d5 */ if (ZF_) goto L_005790d5;
  /* 005790b6 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005790b9 lea edx, [esi + 0x1c] */ edx = (u32)((u32)(esi + 0x1cu));
  /* 005790bc add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005790bf mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005790c1 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 005790c3 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005790c6 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005790c9 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005790cc mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005790cf mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005790d2 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
L_005790d5:;
  /* 005790d5 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 005790d8 cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005790da je 0x57923f */ if (ZF_) goto L_0057923f;
  /* 005790e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005790e1 call 0x57ad80 */ esp -= 4; M32(esp) = 0x5790e6u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x5790e1u); RETCHK(0x5790e6u, 0x5790e1u); LOADALL;
  /* 005790e6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005790e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005790eb je 0x57923f */ if (ZF_) goto L_0057923f;
  /* 005790f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005790f2 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x5790f7u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x5790f2u); RETCHK(0x5790f7u, 0x5790f2u); LOADALL;
  /* 005790f7 jmp 0x57923c */ goto L_0057923c;
L_005790fc:;
  /* 005790fc lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 00579100 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579101 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00579102 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 00579104 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00579105 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57910au; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x579105u); RETCHK(0x57910au, 0x579105u); LOADALL;
  /* 0057910a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057910d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057910f je 0x57913e */ if (ZF_) goto L_0057913e;
  /* 00579111 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00579115 cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057911a jb 0x5792b4 */ if (CF_) goto L_005792b4;
  /* 00579120 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579125 ja 0x5792b4 */ if (!(CF_|ZF_)) goto L_005792b4;
  /* 0057912b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057912c call 0x57c840 */ esp -= 4; M32(esp) = 0x579131u; SAVEALL; F_0057c840(c); ABI_CHECK(0x57c840u, 0x57912cu); RETCHK(0x579131u, 0x57912cu); LOADALL;
  /* 00579131 mov edi, eax */ { edi = (u32)(eax); }
  /* 00579133 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579136 cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579138 jne 0x5791d5 */ if (!ZF_) goto L_005791d5;
L_0057913e:;
  /* 0057913e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057913f push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00579144 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x579149u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x579144u); RETCHK(0x579149u, 0x579144u); LOADALL;
  /* 00579149 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057914c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057914f cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579151 je 0x57915c */ if (ZF_) goto L_0057915c;
  /* 00579153 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579154 call 0x5beff0 */ esp -= 4; M32(esp) = 0x579159u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x579154u); RETCHK(0x579159u, 0x579154u); LOADALL;
  /* 00579159 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057915c:;
  /* 0057915c mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057915f cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579161 je 0x57918c */ if (ZF_) goto L_0057918c;
  /* 00579163 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579164 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x579169u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x579164u); RETCHK(0x579169u, 0x579164u); LOADALL;
  /* 00579169 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0057916c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057916f cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579171 mov dword ptr [esi + 0x18], ebp */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebp); }
  /* 00579174 je 0x57918c */ if (ZF_) goto L_0057918c;
  /* 00579176 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579177 call 0x57ad80 */ esp -= 4; M32(esp) = 0x57917cu; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x579177u); RETCHK(0x57917cu, 0x579177u); LOADALL;
  /* 0057917c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057917f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579181 je 0x57918c */ if (ZF_) goto L_0057918c;
  /* 00579183 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579184 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x579189u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x579184u); RETCHK(0x579189u, 0x579184u); LOADALL;
  /* 00579189 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057918c:;
  /* 0057918c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057918d call 0x5b4a40 */ esp -= 4; M32(esp) = 0x579192u; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x57918du); RETCHK(0x579192u, 0x57918du); LOADALL;
  /* 00579192 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00579197 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 0057919d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057919e mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 005791a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005791a2 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5791a8u; SAVEALL; call_ind(c, t_); RETCHK(0x5791a8u, 0x5791a2u); LOADALL; }
  /* 005791a8 push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 005791ad mov dword ptr [esp + 0x28], 2 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x2u); }
  /* 005791b5 call 0x619d80 */ esp -= 4; M32(esp) = 0x5791bau; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x5791b5u); RETCHK(0x5791bau, 0x5791b5u); LOADALL;
  /* 005791ba mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005791be lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 005791c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005791c3 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x5791c8u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x5791c3u); RETCHK(0x5791c8u, 0x5791c3u); LOADALL;
  /* 005791c8 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005791cb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005791cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005791ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005791cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005791d0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005791d1 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005791d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005791d5:;
  /* 005791d5 cmp edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005791d8 je 0x579236 */ if (ZF_) goto L_00579236;
  /* 005791da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005791db call 0x57c3c0 */ esp -= 4; M32(esp) = 0x5791e0u; SAVEALL; F_0057c3c0(c); ABI_CHECK(0x57c3c0u, 0x5791dbu); RETCHK(0x5791e0u, 0x5791dbu); LOADALL;
  /* 005791e0 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005791e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005791e6 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005791e8 je 0x5791f3 */ if (ZF_) goto L_005791f3;
  /* 005791ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005791eb call 0x57c3d0 */ esp -= 4; M32(esp) = 0x5791f0u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x5791ebu); RETCHK(0x5791f0u, 0x5791ebu); LOADALL;
  /* 005791f0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005791f3:;
  /* 005791f3 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 005791f6 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005791f9 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005791fc lea edx, [esi + 0x1c] */ edx = (u32)((u32)(esi + 0x1cu));
  /* 005791ff mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00579202 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00579204 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579206 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00579208 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057920b mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057920e mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00579211 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00579214 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00579217 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0057921a je 0x579232 */ if (ZF_) goto L_00579232;
  /* 0057921c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057921d call 0x57ad80 */ esp -= 4; M32(esp) = 0x579222u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x57921du); RETCHK(0x579222u, 0x57921du); LOADALL;
  /* 00579222 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579225 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579227 je 0x579232 */ if (ZF_) goto L_00579232;
  /* 00579229 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057922a call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57922fu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57922au); RETCHK(0x57922fu, 0x57922au); LOADALL;
  /* 0057922f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00579232:;
  /* 00579232 mov ebx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ebx = (u32)(M32(m_)); }
L_00579236:;
  /* 00579236 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579237 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x57923cu; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x579237u); RETCHK(0x57923cu, 0x579237u); LOADALL;
L_0057923c:;
  /* 0057923c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057923f:;
  /* 0057923f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579240 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00579241 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00579246 mov dword ptr [0x68a8c8], ebp */ { const u32 m_ = (u32)(0x68a8c8u); M32(m_) = (u32)(ebp); }
  /* 0057924c mov dword ptr [0x68a8a0], ebp */ { const u32 m_ = (u32)(0x68a8a0u); M32(m_) = (u32)(ebp); }
  /* 00579252 call 0x5bf8c0 */ esp -= 4; M32(esp) = 0x579257u; SAVEALL; F_005bf8c0(c); ABI_CHECK(0x5bf8c0u, 0x579252u); RETCHK(0x579257u, 0x579252u); LOADALL;
  /* 00579257 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057925a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057925c jne 0x57928b */ if (!ZF_) goto L_0057928b;
L_0057925e:;
  /* 0057925e push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 00579263 mov dword ptr [esp + 0x1c], 2 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x2u); }
  /* 0057926b call 0x619d80 */ esp -= 4; M32(esp) = 0x579270u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57926bu); RETCHK(0x579270u, 0x57926bu); LOADALL;
  /* 00579270 lea edx, [esp + 0x1c] */ edx = (u32)((u32)(esp + 0x1cu));
  /* 00579274 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 00579278 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579279 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57927eu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x579279u); RETCHK(0x57927eu, 0x579279u); LOADALL;
  /* 0057927e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579281 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579283 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00579284 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579285 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00579286 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00579287 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057928a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057928b:;
  /* 0057928b mov eax, dword ptr [0x68a8c8] */ { const u32 m_ = (u32)(0x68a8c8u); eax = (u32)(M32(m_)); }
  /* 00579290 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579292 je 0x5792aa */ if (ZF_) goto L_005792aa;
  /* 00579294 mov ecx, dword ptr [0x68a8a0] */ { const u32 m_ = (u32)(0x68a8a0u); ecx = (u32)(M32(m_)); }
  /* 0057929a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057929b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057929c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057929d push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 005792a2 call 0x5bf9f0 */ esp -= 4; M32(esp) = 0x5792a7u; SAVEALL; F_005bf9f0(c); ABI_CHECK(0x5bf9f0u, 0x5792a2u); RETCHK(0x5792a7u, 0x5792a2u); LOADALL;
  /* 005792a7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005792aa:;
  /* 005792aa mov eax, esi */ { eax = (u32)(esi); }
  /* 005792ac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005792ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005792ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005792af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005792b0 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005792b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005792b4:;
  /* 005792b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005792b5 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 005792ba call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x5792bfu; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x5792bau); RETCHK(0x5792bfu, 0x5792bau); LOADALL;
  /* 005792bf mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005792c2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005792c5 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005792c7 je 0x5792d2 */ if (ZF_) goto L_005792d2;
  /* 005792c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005792ca call 0x5beff0 */ esp -= 4; M32(esp) = 0x5792cfu; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x5792cau); RETCHK(0x5792cfu, 0x5792cau); LOADALL;
  /* 005792cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005792d2:;
  /* 005792d2 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005792d5 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005792d7 je 0x579302 */ if (ZF_) goto L_00579302;
  /* 005792d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005792da call 0x57c3d0 */ esp -= 4; M32(esp) = 0x5792dfu; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x5792dau); RETCHK(0x5792dfu, 0x5792dau); LOADALL;
  /* 005792df mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 005792e2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005792e5 cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005792e7 mov dword ptr [esi + 0x18], ebp */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebp); }
  /* 005792ea je 0x579302 */ if (ZF_) goto L_00579302;
  /* 005792ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005792ed call 0x57ad80 */ esp -= 4; M32(esp) = 0x5792f2u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x5792edu); RETCHK(0x5792f2u, 0x5792edu); LOADALL;
  /* 005792f2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005792f5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005792f7 je 0x579302 */ if (ZF_) goto L_00579302;
  /* 005792f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005792fa call 0x5abcd0 */ esp -= 4; M32(esp) = 0x5792ffu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x5792fau); RETCHK(0x5792ffu, 0x5792fau); LOADALL;
  /* 005792ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00579302:;
  /* 00579302 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579303 call 0x5b4a40 */ esp -= 4; M32(esp) = 0x579308u; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x579303u); RETCHK(0x579308u, 0x579303u); LOADALL;
  /* 00579308 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057930d mov edx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); edx = (u32)(M32(m_)); }
  /* 00579313 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579314 mov ecx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ecx = (u32)(M32(m_)); }
  /* 00579317 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579318 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57931eu; SAVEALL; call_ind(c, t_); RETCHK(0x57931eu, 0x579318u); LOADALL; }
  /* 0057931e push 0x80000004 */ { u32 v_ = 0x80000004u; esp -= 4; M32(esp) = v_; }
  /* 00579323 mov dword ptr [esp + 0x28], 2 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x2u); }
  /* 0057932b call 0x619d80 */ esp -= 4; M32(esp) = 0x579330u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57932bu); RETCHK(0x579330u, 0x57932bu); LOADALL;
  /* 00579330 lea edx, [esp + 0x28] */ edx = (u32)((u32)(esp + 0x28u));
  /* 00579334 mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 00579338 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579339 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57933eu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x579339u); RETCHK(0x57933eu, 0x579339u); LOADALL;
  /* 0057933e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579341 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579343 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00579344 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579345 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00579346 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00579347 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057934a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057934b:;
  /* 0057934b push 0x80000004 */ { u32 v_ = 0x80000004u; esp -= 4; M32(esp) = v_; }
L_00579350:;
  /* 00579350 mov dword ptr [esp + 0x1c], 2 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x2u); }
  /* 00579358 call 0x619d80 */ esp -= 4; M32(esp) = 0x57935du; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x579358u); RETCHK(0x57935du, 0x579358u); LOADALL;
  /* 0057935d mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 00579361 lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 00579365 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579366 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57936bu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x579366u); RETCHK(0x57936bu, 0x579366u); LOADALL;
  /* 0057936b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057936e:;
  /* 0057936e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057936f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579370 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00579371 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579373 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00579374 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579377 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579380(CPU *c) {
  NATIVE_HOOK(0x579380u) REGS; LOADALL;
L_00579380:;
  /* 00579380 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579383 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 00579387 lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 0057938b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057938c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057938d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057938e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057938f mov edi, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); edi = (u32)(M32(m_)); }
  /* 00579393 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579394 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579395 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00579397 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579398 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57939du; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x579398u); RETCHK(0x57939du, 0x579398u); LOADALL;
  /* 0057939d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005793a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005793a2 jne 0x5793d1 */ if (!ZF_) goto L_005793d1;
  /* 005793a4 push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 005793a9 mov dword ptr [esp + 0x34], 2 */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(0x2u); }
  /* 005793b1 call 0x619d80 */ esp -= 4; M32(esp) = 0x5793b6u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x5793b1u); RETCHK(0x5793b6u, 0x5793b1u); LOADALL;
  /* 005793b6 lea edx, [esp + 0x34] */ edx = (u32)((u32)(esp + 0x34u));
  /* 005793ba mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 005793be push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005793bf call 0x5be8c0 */ esp -= 4; M32(esp) = 0x5793c4u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x5793bfu); RETCHK(0x5793c4u, 0x5793bfu); LOADALL;
  /* 005793c4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005793c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005793c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005793ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005793cb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005793cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005793cd add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005793d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005793d1:;
  /* 005793d1 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005793d5 cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005793da jb 0x579bf2 */ if (CF_) goto L_00579bf2;
  /* 005793e0 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005793e5 ja 0x579bf2 */ if (!(CF_|ZF_)) goto L_00579bf2;
  /* 005793eb lea eax, [esp + 0x48] */ eax = (u32)((u32)(esp + 0x48u));
  /* 005793ef push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005793f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005793f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005793f3 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x5793f8u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x5793f3u); RETCHK(0x5793f8u, 0x5793f3u); LOADALL;
  /* 005793f8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005793fb cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005793fe je 0x57942d */ if (ZF_) goto L_0057942d;
  /* 00579400 push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 00579405 mov dword ptr [esp + 0x24], 2 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x2u); }
  /* 0057940d call 0x619d80 */ esp -= 4; M32(esp) = 0x579412u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57940du); RETCHK(0x579412u, 0x57940du); LOADALL;
  /* 00579412 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 00579416 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 0057941a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057941b call 0x5be8c0 */ esp -= 4; M32(esp) = 0x579420u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57941bu); RETCHK(0x579420u, 0x57941bu); LOADALL;
  /* 00579420 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579423 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579425 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00579426 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579427 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00579428 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00579429 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057942c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057942d:;
  /* 0057942d call 0x578450 */ esp -= 4; M32(esp) = 0x579432u; SAVEALL; F_00578450(c); ABI_CHECK(0x578450u, 0x57942du); RETCHK(0x579432u, 0x57942du); LOADALL;
  /* 00579432 mov esi, eax */ { esi = (u32)(eax); }
  /* 00579434 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00579436 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579438 je 0x579c15 */ if (ZF_) goto L_00579c15;
  /* 0057943e lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 00579442 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579443 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00579444 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 00579446 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579447 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57944cu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x579447u); RETCHK(0x57944cu, 0x579447u); LOADALL;
  /* 0057944c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057944f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579451 jne 0x5794f8 */ if (!ZF_) goto L_005794f8;
  /* 00579457 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579458 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 0057945d call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x579462u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57945du); RETCHK(0x579462u, 0x57945du); LOADALL;
  /* 00579462 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00579465 lea ebp, [esi + 8] */ ebp = (u32)((u32)(esi + 0x8u));
  /* 00579468 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057946b cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057946d je 0x579487 */ if (ZF_) goto L_00579487;
L_0057946f:;
  /* 0057946f mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00579471 lea edi, [eax - 0x40] */ edi = (u32)((u32)(eax + 0xffffffc0u));
  /* 00579474 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579475 call 0x577ff0 */ esp -= 4; M32(esp) = 0x57947au; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x579475u); RETCHK(0x57947au, 0x579475u); LOADALL;
  /* 0057947a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057947d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057947f je 0x579487 */ if (ZF_) goto L_00579487;
  /* 00579481 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579483 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00579485 jne 0x57946f */ if (!ZF_) goto L_0057946f;
L_00579487:;
  /* 00579487 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579489 push 0x5783d0 */ { u32 v_ = 0x5783d0u; esp -= 4; M32(esp) = v_; }
  /* 0057948e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057948f call 0x577e30 */ esp -= 4; M32(esp) = 0x579494u; SAVEALL; F_00577e30(c); ABI_CHECK(0x577e30u, 0x57948fu); RETCHK(0x579494u, 0x57948fu); LOADALL;
  /* 00579494 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579496 push 0x578410 */ { u32 v_ = 0x578410u; esp -= 4; M32(esp) = v_; }
  /* 0057949b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057949c call 0x577de0 */ esp -= 4; M32(esp) = 0x5794a1u; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x57949cu); RETCHK(0x5794a1u, 0x57949cu); LOADALL;
  /* 005794a1 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005794a4 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005794a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005794a9 je 0x5794b4 */ if (ZF_) goto L_005794b4;
  /* 005794ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005794ac call 0x5abc60 */ esp -= 4; M32(esp) = 0x5794b1u; SAVEALL; F_005abc60(c); ABI_CHECK(0x5abc60u, 0x5794acu); RETCHK(0x5794b1u, 0x5794acu); LOADALL;
  /* 005794b1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005794b4:;
  /* 005794b4 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005794b9 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 005794bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005794c0 mov edx, dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005794c4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005794c5 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5794cbu; SAVEALL; call_ind(c, t_); RETCHK(0x5794cbu, 0x5794c5u); LOADALL; }
  /* 005794cb push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 005794d0 mov dword ptr [esp + 0x2c], 2 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x2u); }
  /* 005794d8 call 0x619d80 */ esp -= 4; M32(esp) = 0x5794ddu; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x5794d8u); RETCHK(0x5794ddu, 0x5794d8u); LOADALL;
  /* 005794dd mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 005794e1 lea eax, [esp + 0x2c] */ eax = (u32)((u32)(esp + 0x2cu));
  /* 005794e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005794e6 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x5794ebu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x5794e6u); RETCHK(0x5794ebu, 0x5794e6u); LOADALL;
  /* 005794eb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005794ee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005794f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005794f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005794f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005794f3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005794f4 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005794f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005794f8:;
  /* 005794f8 lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 005794fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005794fd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005794fe call 0x5c01d0 */ esp -= 4; M32(esp) = 0x579503u; SAVEALL; F_005c01d0(c); ABI_CHECK(0x5c01d0u, 0x5794feu); RETCHK(0x579503u, 0x5794feu); LOADALL;
  /* 00579503 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579506 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579508 jne 0x5795af */ if (!ZF_) goto L_005795af;
  /* 0057950e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057950f push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 00579514 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x579519u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x579514u); RETCHK(0x579519u, 0x579514u); LOADALL;
  /* 00579519 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057951c lea ebp, [esi + 8] */ ebp = (u32)((u32)(esi + 0x8u));
  /* 0057951f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579522 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579524 je 0x57953e */ if (ZF_) goto L_0057953e;
L_00579526:;
  /* 00579526 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00579528 lea edi, [eax - 0x40] */ edi = (u32)((u32)(eax + 0xffffffc0u));
  /* 0057952b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057952c call 0x577ff0 */ esp -= 4; M32(esp) = 0x579531u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x57952cu); RETCHK(0x579531u, 0x57952cu); LOADALL;
  /* 00579531 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579534 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579536 je 0x57953e */ if (ZF_) goto L_0057953e;
  /* 00579538 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057953a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057953c jne 0x579526 */ if (!ZF_) goto L_00579526;
L_0057953e:;
  /* 0057953e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579540 push 0x5783d0 */ { u32 v_ = 0x5783d0u; esp -= 4; M32(esp) = v_; }
  /* 00579545 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579546 call 0x577e30 */ esp -= 4; M32(esp) = 0x57954bu; SAVEALL; F_00577e30(c); ABI_CHECK(0x577e30u, 0x579546u); RETCHK(0x57954bu, 0x579546u); LOADALL;
  /* 0057954b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057954d push 0x578410 */ { u32 v_ = 0x578410u; esp -= 4; M32(esp) = v_; }
  /* 00579552 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579553 call 0x577de0 */ esp -= 4; M32(esp) = 0x579558u; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x579553u); RETCHK(0x579558u, 0x579553u); LOADALL;
  /* 00579558 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057955b add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057955e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579560 je 0x57956b */ if (ZF_) goto L_0057956b;
  /* 00579562 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579563 call 0x5abc60 */ esp -= 4; M32(esp) = 0x579568u; SAVEALL; F_005abc60(c); ABI_CHECK(0x5abc60u, 0x579563u); RETCHK(0x579568u, 0x579563u); LOADALL;
  /* 00579568 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057956b:;
  /* 0057956b mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00579570 mov edx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); edx = (u32)(M32(m_)); }
  /* 00579576 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579577 mov ecx, dword ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057957b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057957c call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x579582u; SAVEALL; call_ind(c, t_); RETCHK(0x579582u, 0x57957cu); LOADALL; }
  /* 00579582 push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 00579587 mov dword ptr [esp + 0x2c], 2 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x2u); }
  /* 0057958f call 0x619d80 */ esp -= 4; M32(esp) = 0x579594u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57958fu); RETCHK(0x579594u, 0x57958fu); LOADALL;
  /* 00579594 lea edx, [esp + 0x2c] */ edx = (u32)((u32)(esp + 0x2cu));
  /* 00579598 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 0057959c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057959d call 0x5be8c0 */ esp -= 4; M32(esp) = 0x5795a2u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57959du); RETCHK(0x5795a2u, 0x57959du); LOADALL;
  /* 005795a2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005795a5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005795a7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005795a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005795a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005795aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005795ab add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005795ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005795af:;
  /* 005795af mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005795b3 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 005795b7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005795b8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005795b9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005795bb push 0x1a */ { u32 v_ = 0x1au; esp -= 4; M32(esp) = v_; }
  /* 005795bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005795be mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005795c1 call 0x5b3890 */ esp -= 4; M32(esp) = 0x5795c6u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5795c1u); RETCHK(0x5795c6u, 0x5795c1u); LOADALL;
  /* 005795c6 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005795c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005795cb jne 0x579614 */ if (!ZF_) goto L_00579614;
  /* 005795cd lea eax, [esp + 0x30] */ eax = (u32)((u32)(esp + 0x30u));
  /* 005795d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005795d2 call 0x5bff80 */ esp -= 4; M32(esp) = 0x5795d7u; SAVEALL; F_005bff80(c); ABI_CHECK(0x5bff80u, 0x5795d2u); RETCHK(0x5795d7u, 0x5795d2u); LOADALL;
  /* 005795d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005795d8 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 005795dd call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x5795e2u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x5795ddu); RETCHK(0x5795e2u, 0x5795ddu); LOADALL;
  /* 005795e2 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005795e5 lea ebp, [esi + 8] */ ebp = (u32)((u32)(esi + 0x8u));
  /* 005795e8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005795eb cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005795ed je 0x579487 */ if (ZF_) goto L_00579487;
L_005795f3:;
  /* 005795f3 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 005795f5 lea edi, [eax - 0x40] */ edi = (u32)((u32)(eax + 0xffffffc0u));
  /* 005795f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005795f9 call 0x577ff0 */ esp -= 4; M32(esp) = 0x5795feu; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x5795f9u); RETCHK(0x5795feu, 0x5795f9u); LOADALL;
  /* 005795fe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579601 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579603 je 0x579487 */ if (ZF_) goto L_00579487;
  /* 00579609 cmp ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057960b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057960d jne 0x5795f3 */ if (!ZF_) goto L_005795f3;
  /* 0057960f jmp 0x579487 */ goto L_00579487;
L_00579614:;
  /* 00579614 lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 00579618 lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 0057961c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057961d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057961e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00579620 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579621 call 0x5b3890 */ esp -= 4; M32(esp) = 0x579626u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x579621u); RETCHK(0x579626u, 0x579621u); LOADALL;
  /* 00579626 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579629 mov ebp, 2 */ { ebp = (u32)(0x2u); }
  /* 0057962e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579630 je 0x57973e */ if (ZF_) goto L_0057973e;
  /* 00579636 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057963a cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057963f jb 0x57983d */ if (CF_) goto L_0057983d;
  /* 00579645 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057964a ja 0x57983d */ if (!(CF_|ZF_)) goto L_0057983d;
  /* 00579650 lea eax, [esp + 0x58] */ eax = (u32)((u32)(esp + 0x58u));
  /* 00579654 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00579656 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579657 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579658 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x57965du; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x579658u); RETCHK(0x57965du, 0x579658u); LOADALL;
  /* 0057965d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579660 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579663 jne 0x57973e */ if (!ZF_) goto L_0057973e;
  /* 00579669 mov eax, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057966d mov dword ptr [esp + 0x2c], ebx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 00579671 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579673 jle 0x5796c6 */ if ((ZF_|LT_)) goto L_005796c6;
  /* 00579675 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057967b lea ecx, [eax*4] */ ecx = (u32)((u32)(eax * 4u));
  /* 00579682 push 0x3000f */ { u32 v_ = 0x3000fu; esp -= 4; M32(esp) = v_; }
  /* 00579687 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579688 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57968eu; SAVEALL; call_ind(c, t_); RETCHK(0x57968eu, 0x579688u); LOADALL; }
  /* 0057968e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579691 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 00579695 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579697 mov eax, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057969b jne 0x5796ca */ if (!ZF_) goto L_005796ca;
  /* 0057969d lea ecx, [eax*4] */ ecx = (u32)((u32)(eax * 4u));
  /* 005796a4 mov dword ptr [esp + 0x38], ebp */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ebp); }
  /* 005796a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005796a9 push 0x80000013 */ { u32 v_ = 0x80000013u; esp -= 4; M32(esp) = v_; }
  /* 005796ae call 0x619d80 */ esp -= 4; M32(esp) = 0x5796b3u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x5796aeu); RETCHK(0x5796b3u, 0x5796aeu); LOADALL;
  /* 005796b3 lea edx, [esp + 0x40] */ edx = (u32)((u32)(esp + 0x40u));
  /* 005796b7 mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 005796bb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005796bc call 0x5be8c0 */ esp -= 4; M32(esp) = 0x5796c1u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x5796bcu); RETCHK(0x5796c1u, 0x5796bcu); LOADALL;
  /* 005796c1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005796c4 jmp 0x57973e */ goto L_0057973e;
L_005796c6:;
  /* 005796c6 mov dword ptr [esp + 0x28], ebx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebx); }
L_005796ca:;
  /* 005796ca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005796cc jle 0x579732 */ if ((ZF_|LT_)) goto L_00579732;
L_005796ce:;
  /* 005796ce lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 005796d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005796d3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005796d5 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 005796d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005796d8 call 0x5b3890 */ esp -= 4; M32(esp) = 0x5796ddu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5796d8u); RETCHK(0x5796ddu, 0x5796d8u); LOADALL;
  /* 005796dd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005796e0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005796e2 je 0x5797cd */ if (ZF_) goto L_005797cd;
  /* 005796e8 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005796ec cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005796f1 jb 0x57982b */ if (CF_) goto L_0057982b;
  /* 005796f7 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005796fc ja 0x57982b */ if (!(CF_|ZF_)) goto L_0057982b;
  /* 00579702 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579703 call 0x57c840 */ esp -= 4; M32(esp) = 0x579708u; SAVEALL; F_0057c840(c); ABI_CHECK(0x57c840u, 0x579703u); RETCHK(0x579708u, 0x579703u); LOADALL;
  /* 00579708 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0057970c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057970f mov dword ptr [ecx + ebx*4], eax */ { const u32 m_ = (u32)(ecx + ebx * 4u); M32(m_) = (u32)(eax); }
  /* 00579712 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 00579716 cmp dword ptr [edx + ebx*4], 0 */ { const u32 m_ = (u32)(edx + ebx * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057971a je 0x579819 */ if (ZF_) goto L_00579819;
  /* 00579720 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00579724 mov eax, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (u32)(M32(m_)); }
  /* 00579728 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00579729 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057972a cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057972c mov dword ptr [esp + 0x2c], edx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edx); }
  /* 00579730 jl 0x5796ce */ if (LT_) goto L_005796ce;
L_00579732:;
  /* 00579732 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 00579736 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579738 jne 0x579861 */ if (!ZF_) goto L_00579861;
L_0057973e:;
  /* 0057973e lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 00579742 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579743 call 0x5bff80 */ esp -= 4; M32(esp) = 0x579748u; SAVEALL; F_005bff80(c); ABI_CHECK(0x5bff80u, 0x579743u); RETCHK(0x579748u, 0x579743u); LOADALL;
  /* 00579748 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579749 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 0057974e call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x579753u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57974eu); RETCHK(0x579753u, 0x57974eu); LOADALL;
  /* 00579753 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579755 push 0x579c20 */ { u32 v_ = 0x579c20u; esp -= 4; M32(esp) = v_; }
  /* 0057975a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057975b call 0x577da0 */ esp -= 4; M32(esp) = 0x579760u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x57975bu); RETCHK(0x579760u, 0x57975bu); LOADALL;
  /* 00579760 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579762 push 0x5783d0 */ { u32 v_ = 0x5783d0u; esp -= 4; M32(esp) = v_; }
  /* 00579767 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579768 call 0x577e30 */ esp -= 4; M32(esp) = 0x57976du; SAVEALL; F_00577e30(c); ABI_CHECK(0x577e30u, 0x579768u); RETCHK(0x57976du, 0x579768u); LOADALL;
  /* 0057976d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057976f push 0x578410 */ { u32 v_ = 0x578410u; esp -= 4; M32(esp) = v_; }
  /* 00579774 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579775 call 0x577de0 */ esp -= 4; M32(esp) = 0x57977au; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x579775u); RETCHK(0x57977au, 0x579775u); LOADALL;
  /* 0057977a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057977d add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579780 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579782 je 0x57978d */ if (ZF_) goto L_0057978d;
  /* 00579784 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579785 call 0x5abc60 */ esp -= 4; M32(esp) = 0x57978au; SAVEALL; F_005abc60(c); ABI_CHECK(0x5abc60u, 0x579785u); RETCHK(0x57978au, 0x579785u); LOADALL;
  /* 0057978a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057978d:;
  /* 0057978d mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00579792 mov edx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); edx = (u32)(M32(m_)); }
  /* 00579798 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579799 mov ecx, dword ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057979d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057979e call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5797a4u; SAVEALL; call_ind(c, t_); RETCHK(0x5797a4u, 0x57979eu); LOADALL; }
  /* 005797a4 push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 005797a9 mov dword ptr [esp + 0x4c], ebp */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(ebp); }
  /* 005797ad call 0x619d80 */ esp -= 4; M32(esp) = 0x5797b2u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x5797adu); RETCHK(0x5797b2u, 0x5797adu); LOADALL;
  /* 005797b2 lea edx, [esp + 0x4c] */ edx = (u32)((u32)(esp + 0x4cu));
  /* 005797b6 mov dword ptr [esp + 0x50], eax */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(eax); }
  /* 005797ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005797bb call 0x5be8c0 */ esp -= 4; M32(esp) = 0x5797c0u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x5797bbu); RETCHK(0x5797c0u, 0x5797bbu); LOADALL;
  /* 005797c0 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005797c3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005797c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005797c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005797c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005797c8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005797c9 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005797cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005797cd:;
  /* 005797cd mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005797d1 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005797d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005797d5 jle 0x5797f0 */ if ((ZF_|LT_)) goto L_005797f0;
L_005797d7:;
  /* 005797d7 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005797db mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 005797de push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005797df call 0x57c3d0 */ esp -= 4; M32(esp) = 0x5797e4u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x5797dfu); RETCHK(0x5797e4u, 0x5797dfu); LOADALL;
  /* 005797e4 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005797e8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005797eb inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005797ec cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005797ee jl 0x5797d7 */ if (LT_) goto L_005797d7;
L_005797f0:;
  /* 005797f0 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005797f4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005797f6 je 0x57973e */ if (ZF_) goto L_0057973e;
  /* 005797fc mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00579802 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579803 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x579809u; SAVEALL; call_ind(c, t_); RETCHK(0x579809u, 0x579803u); LOADALL; }
  /* 00579809 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057980c mov dword ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 00579814 jmp 0x57973e */ goto L_0057973e;
L_00579819:;
  /* 00579819 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 0057981d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057981e call 0x578db0 */ esp -= 4; M32(esp) = 0x579823u; SAVEALL; F_00578db0(c); ABI_CHECK(0x578db0u, 0x57981eu); RETCHK(0x579823u, 0x57981eu); LOADALL;
  /* 00579823 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579826 jmp 0x57973e */ goto L_0057973e;
L_0057982b:;
  /* 0057982b lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 0057982f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579830 call 0x578db0 */ esp -= 4; M32(esp) = 0x579835u; SAVEALL; F_00578db0(c); ABI_CHECK(0x578db0u, 0x579830u); RETCHK(0x579835u, 0x579830u); LOADALL;
  /* 00579835 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579838 jmp 0x57973e */ goto L_0057973e;
L_0057983d:;
  /* 0057983d push 0x80000004 */ { u32 v_ = 0x80000004u; esp -= 4; M32(esp) = v_; }
  /* 00579842 mov dword ptr [esp + 0x44], ebp */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ebp); }
  /* 00579846 call 0x619d80 */ esp -= 4; M32(esp) = 0x57984bu; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x579846u); RETCHK(0x57984bu, 0x579846u); LOADALL;
  /* 0057984b lea edx, [esp + 0x44] */ edx = (u32)((u32)(esp + 0x44u));
  /* 0057984f mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 00579853 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579854 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x579859u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x579854u); RETCHK(0x579859u, 0x579854u); LOADALL;
  /* 00579859 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057985c jmp 0x57973e */ goto L_0057973e;
L_00579861:;
  /* 00579861 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 00579865 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00579867 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579869 jle 0x5798c8 */ if ((ZF_|LT_)) goto L_005798c8;
L_0057986b:;
  /* 0057986b lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 0057986f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579870 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579872 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 00579874 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579875 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57987au; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x579875u); RETCHK(0x57987au, 0x579875u); LOADALL;
  /* 0057987a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057987d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057987f je 0x579975 */ if (ZF_) goto L_00579975;
  /* 00579885 lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 00579889 lea edx, [esp + 0x30] */ edx = (u32)((u32)(esp + 0x30u));
  /* 0057988d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057988e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057988f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579890 call 0x578fc0 */ esp -= 4; M32(esp) = 0x579895u; SAVEALL; F_00578fc0(c); ABI_CHECK(0x578fc0u, 0x579890u); RETCHK(0x579895u, 0x579890u); LOADALL;
  /* 00579895 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579898 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057989a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057989c setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0057989f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005798a1 je 0x579975 */ if (ZF_) goto L_00579975;
  /* 005798a7 mov ebp, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebp = (u32)(M32(m_)); }
  /* 005798aa lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 005798ad lea edx, [eax + 0x40] */ edx = (u32)((u32)(eax + 0x40u));
  /* 005798b0 mov dword ptr [eax + 0x44], ecx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(ecx); }
  /* 005798b3 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005798b4 mov dword ptr [edx], ebp */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebp); }
  /* 005798b6 mov ebp, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebp = (u32)(M32(m_)); }
  /* 005798b8 mov dword ptr [ebp + 4], edx */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005798bb mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005798bd mov dword ptr [eax + 0x3c], esi */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(esi); }
  /* 005798c0 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005798c4 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005798c6 jl 0x57986b */ if (LT_) goto L_0057986b;
L_005798c8:;
  /* 005798c8 mov eax, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005798cc xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005798ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005798d0 jle 0x5799cd */ if ((ZF_|LT_)) goto L_005799cd;
L_005798d6:;
  /* 005798d6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005798d8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005798da push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005798dc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005798dd call 0x5b3890 */ esp -= 4; M32(esp) = 0x5798e2u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5798ddu); RETCHK(0x5798e2u, 0x5798ddu); LOADALL;
  /* 005798e2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005798e5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005798e7 je 0x5799a1 */ if (ZF_) goto L_005799a1;
  /* 005798ed lea ecx, [esp + 0x58] */ ecx = (u32)((u32)(esp + 0x58u));
  /* 005798f1 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005798f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005798f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005798f5 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5798fau; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5798f5u); RETCHK(0x5798fau, 0x5798f5u); LOADALL;
  /* 005798fa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005798fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005798ff je 0x5799a1 */ if (ZF_) goto L_005799a1;
  /* 00579905 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579907 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579909 push 0x12 */ { u32 v_ = 0x12u; esp -= 4; M32(esp) = v_; }
  /* 0057990b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057990c call 0x5b3890 */ esp -= 4; M32(esp) = 0x579911u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x57990cu); RETCHK(0x579911u, 0x57990cu); LOADALL;
  /* 00579911 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579914 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579916 je 0x5799a1 */ if (ZF_) goto L_005799a1;
  /* 0057991c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057991d call 0x57d1c0 */ esp -= 4; M32(esp) = 0x579922u; SAVEALL; F_0057d1c0(c); ABI_CHECK(0x57d1c0u, 0x57991du); RETCHK(0x579922u, 0x57991du); LOADALL;
  /* 00579922 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00579924 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579927 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579929 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057992b setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0057992e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579930 je 0x5799a1 */ if (ZF_) goto L_005799a1;
  /* 00579932 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 00579936 mov eax, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057993a mov ecx, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); ecx = (u32)(M32(m_)); }
  /* 0057993d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057993e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057993f call 0x5b49f0 */ esp -= 4; M32(esp) = 0x579944u; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x57993fu); RETCHK(0x579944u, 0x57993fu); LOADALL;
  /* 00579944 mov edx, dword ptr [0x68a8fc] */ { const u32 m_ = (u32)(0x68a8fcu); edx = (u32)(M32(m_)); }
  /* 0057994a lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 0057994d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579950 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00579951 lea ecx, [ebx + edx] */ ecx = (u32)((u32)(ebx + edx));
  /* 00579954 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00579956 lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 00579959 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0057995c mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 0057995e mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00579960 mov dword ptr [ebx + 4], edx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00579963 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00579965 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00579967 mov eax, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); eax = (u32)(M32(m_)); }
  /* 0057996b cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057996d jl 0x5798d6 */ if (LT_) goto L_005798d6;
  /* 00579973 jmp 0x5799cd */ goto L_005799cd;
L_00579975:;
  /* 00579975 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00579979 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057997b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057997d jle 0x579b35 */ if ((ZF_|LT_)) goto L_00579b35;
L_00579983:;
  /* 00579983 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00579987 mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 0057998a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057998b call 0x57c3d0 */ esp -= 4; M32(esp) = 0x579990u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x57998bu); RETCHK(0x579990u, 0x57998bu); LOADALL;
  /* 00579990 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 00579994 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579997 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00579998 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057999a jl 0x579983 */ if (LT_) goto L_00579983;
  /* 0057999c jmp 0x579b35 */ goto L_00579b35;
L_005799a1:;
  /* 005799a1 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005799a5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005799a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005799a9 jle 0x579b35 */ if ((ZF_|LT_)) goto L_00579b35;
L_005799af:;
  /* 005799af mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 005799b3 mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 005799b6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005799b7 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x5799bcu; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x5799b7u); RETCHK(0x5799bcu, 0x5799b7u); LOADALL;
  /* 005799bc mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005799c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005799c3 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005799c4 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005799c6 jl 0x5799af */ if (LT_) goto L_005799af;
  /* 005799c8 jmp 0x579b35 */ goto L_00579b35;
L_005799cd:;
  /* 005799cd mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 005799d1 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005799d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005799d5 jle 0x579a7c */ if ((ZF_|LT_)) goto L_00579a7c;
L_005799db:;
  /* 005799db push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005799dd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005799df push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005799e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005799e2 call 0x5b3890 */ esp -= 4; M32(esp) = 0x5799e7u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x5799e2u); RETCHK(0x5799e7u, 0x5799e2u); LOADALL;
  /* 005799e7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005799ea test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005799ec je 0x579b12 */ if (ZF_) goto L_00579b12;
  /* 005799f2 lea ecx, [esp + 0x58] */ ecx = (u32)((u32)(esp + 0x58u));
  /* 005799f6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005799f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005799f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005799fa call 0x5b3a40 */ esp -= 4; M32(esp) = 0x5799ffu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x5799fau); RETCHK(0x5799ffu, 0x5799fau); LOADALL;
  /* 005799ff add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579a02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579a04 je 0x579b12 */ if (ZF_) goto L_00579b12;
  /* 00579a0a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579a0c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579a0e push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00579a10 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579a11 call 0x5b3890 */ esp -= 4; M32(esp) = 0x579a16u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x579a11u); RETCHK(0x579a16u, 0x579a11u); LOADALL;
  /* 00579a16 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579a19 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579a1b je 0x579b12 */ if (ZF_) goto L_00579b12;
  /* 00579a21 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579a22 call 0x5bfcf0 */ esp -= 4; M32(esp) = 0x579a27u; SAVEALL; F_005bfcf0(c); ABI_CHECK(0x5bfcf0u, 0x579a22u); RETCHK(0x579a27u, 0x579a22u); LOADALL;
  /* 00579a27 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00579a29 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579a2c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579a2e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579a30 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00579a33 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579a35 je 0x579b12 */ if (ZF_) goto L_00579b12;
  /* 00579a3b mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 00579a3f mov eax, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); eax = (u32)(M32(m_)); }
  /* 00579a43 mov ecx, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); ecx = (u32)(M32(m_)); }
  /* 00579a46 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579a47 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00579a48 call 0x5b49f0 */ esp -= 4; M32(esp) = 0x579a4du; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x579a48u); RETCHK(0x579a4du, 0x579a48u); LOADALL;
  /* 00579a4d mov edx, dword ptr [0x68a8f8] */ { const u32 m_ = (u32)(0x68a8f8u); edx = (u32)(M32(m_)); }
  /* 00579a53 lea eax, [esi + 0x18] */ eax = (u32)((u32)(esi + 0x18u));
  /* 00579a56 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579a59 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00579a5a lea ecx, [ebx + edx] */ ecx = (u32)((u32)(ebx + edx));
  /* 00579a5d mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00579a5f lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 00579a62 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00579a65 mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 00579a67 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00579a69 mov dword ptr [ebx + 4], edx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00579a6c mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00579a6e mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00579a70 mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 00579a74 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579a76 jl 0x5799db */ if (LT_) goto L_005799db;
L_00579a7c:;
  /* 00579a7c mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00579a80 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00579a82 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579a84 jle 0x579a9f */ if ((ZF_|LT_)) goto L_00579a9f;
L_00579a86:;
  /* 00579a86 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00579a8a mov edx, dword ptr [ecx + ebx*4] */ { const u32 m_ = (u32)(ecx + ebx * 4u); edx = (u32)(M32(m_)); }
  /* 00579a8d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579a8e call 0x57c3d0 */ esp -= 4; M32(esp) = 0x579a93u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x579a8eu); RETCHK(0x579a93u, 0x579a8eu); LOADALL;
  /* 00579a93 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 00579a97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579a9a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00579a9b cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579a9d jl 0x579a86 */ if (LT_) goto L_00579a86;
L_00579a9f:;
  /* 00579a9f mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00579aa3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579aa5 je 0x579abe */ if (ZF_) goto L_00579abe;
  /* 00579aa7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579aa8 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00579aad call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x579ab3u; SAVEALL; call_ind(c, t_); RETCHK(0x579ab3u, 0x579aadu); LOADALL; }
  /* 00579ab3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579ab6 mov dword ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x0u); }
L_00579abe:;
  /* 00579abe lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 00579ac2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579ac3 call 0x5bff80 */ esp -= 4; M32(esp) = 0x579ac8u; SAVEALL; F_005bff80(c); ABI_CHECK(0x5bff80u, 0x579ac3u); RETCHK(0x579ac8u, 0x579ac3u); LOADALL;
  /* 00579ac8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579ac9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579aca push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 00579acf call 0x5bf8c0 */ esp -= 4; M32(esp) = 0x579ad4u; SAVEALL; F_005bf8c0(c); ABI_CHECK(0x5bf8c0u, 0x579acfu); RETCHK(0x579ad4u, 0x579acfu); LOADALL;
  /* 00579ad4 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579ad7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579ad9 jne 0x579be8 */ if (!ZF_) goto L_00579be8;
  /* 00579adf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579ae0 call 0x5784d0 */ esp -= 4; M32(esp) = 0x579ae5u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x579ae0u); RETCHK(0x579ae5u, 0x579ae0u); LOADALL;
  /* 00579ae5 push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 00579aea mov dword ptr [esp + 0x48], 2 */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(0x2u); }
  /* 00579af2 call 0x619d80 */ esp -= 4; M32(esp) = 0x579af7u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x579af2u); RETCHK(0x579af7u, 0x579af2u); LOADALL;
  /* 00579af7 lea edx, [esp + 0x48] */ edx = (u32)((u32)(esp + 0x48u));
  /* 00579afb mov dword ptr [esp + 0x4c], eax */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(eax); }
  /* 00579aff push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579b00 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x579b05u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x579b00u); RETCHK(0x579b05u, 0x579b00u); LOADALL;
  /* 00579b05 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579b08 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579b0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00579b0b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579b0c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00579b0d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00579b0e add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579b11 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00579b12:;
  /* 00579b12 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00579b16 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00579b18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579b1a jle 0x579b35 */ if ((ZF_|LT_)) goto L_00579b35;
L_00579b1c:;
  /* 00579b1c mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00579b20 mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 00579b23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579b24 call 0x57c3d0 */ esp -= 4; M32(esp) = 0x579b29u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x579b24u); RETCHK(0x579b29u, 0x579b24u); LOADALL;
  /* 00579b29 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 00579b2d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579b30 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00579b31 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00579b33 jl 0x579b1c */ if (LT_) goto L_00579b1c;
L_00579b35:;
  /* 00579b35 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00579b39 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579b3b je 0x579b55 */ if (ZF_) goto L_00579b55;
  /* 00579b3d mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00579b43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579b44 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x579b4au; SAVEALL; call_ind(c, t_); RETCHK(0x579b4au, 0x579b44u); LOADALL; }
  /* 00579b4a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579b4d mov dword ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x0u); }
L_00579b55:;
  /* 00579b55 lea eax, [esp + 0x30] */ eax = (u32)((u32)(esp + 0x30u));
  /* 00579b59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579b5a call 0x5bff80 */ esp -= 4; M32(esp) = 0x579b5fu; SAVEALL; F_005bff80(c); ABI_CHECK(0x5bff80u, 0x579b5au); RETCHK(0x579b5fu, 0x579b5au); LOADALL;
  /* 00579b5f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579b60 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 00579b65 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x579b6au; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x579b65u); RETCHK(0x579b6au, 0x579b65u); LOADALL;
  /* 00579b6a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579b6c push 0x579c20 */ { u32 v_ = 0x579c20u; esp -= 4; M32(esp) = v_; }
  /* 00579b71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579b72 call 0x577da0 */ esp -= 4; M32(esp) = 0x579b77u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x579b72u); RETCHK(0x579b77u, 0x579b72u); LOADALL;
  /* 00579b77 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579b79 push 0x5783d0 */ { u32 v_ = 0x5783d0u; esp -= 4; M32(esp) = v_; }
  /* 00579b7e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579b7f call 0x577e30 */ esp -= 4; M32(esp) = 0x579b84u; SAVEALL; F_00577e30(c); ABI_CHECK(0x577e30u, 0x579b7fu); RETCHK(0x579b84u, 0x579b7fu); LOADALL;
  /* 00579b84 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579b86 push 0x578410 */ { u32 v_ = 0x578410u; esp -= 4; M32(esp) = v_; }
  /* 00579b8b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579b8c call 0x577de0 */ esp -= 4; M32(esp) = 0x579b91u; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x579b8cu); RETCHK(0x579b91u, 0x579b8cu); LOADALL;
  /* 00579b91 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00579b94 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579b97 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579b99 je 0x579ba4 */ if (ZF_) goto L_00579ba4;
  /* 00579b9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579b9c call 0x5abc60 */ esp -= 4; M32(esp) = 0x579ba1u; SAVEALL; F_005abc60(c); ABI_CHECK(0x5abc60u, 0x579b9cu); RETCHK(0x579ba1u, 0x579b9cu); LOADALL;
  /* 00579ba1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00579ba4:;
  /* 00579ba4 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00579ba9 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 00579baf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579bb0 mov edx, dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00579bb4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579bb5 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x579bbbu; SAVEALL; call_ind(c, t_); RETCHK(0x579bbbu, 0x579bb5u); LOADALL; }
  /* 00579bbb push 0x8000001a */ { u32 v_ = 0x8000001au; esp -= 4; M32(esp) = v_; }
  /* 00579bc0 mov dword ptr [esp + 0x4c], 2 */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(0x2u); }
  /* 00579bc8 call 0x619d80 */ esp -= 4; M32(esp) = 0x579bcdu; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x579bc8u); RETCHK(0x579bcdu, 0x579bc8u); LOADALL;
  /* 00579bcd mov dword ptr [esp + 0x50], eax */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(eax); }
  /* 00579bd1 lea eax, [esp + 0x4c] */ eax = (u32)((u32)(esp + 0x4cu));
  /* 00579bd5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579bd6 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x579bdbu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x579bd6u); RETCHK(0x579bdbu, 0x579bd6u); LOADALL;
  /* 00579bdb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579bde xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579be0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00579be1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579be2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00579be3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00579be4 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579be7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00579be8:;
  /* 00579be8 mov eax, esi */ { eax = (u32)(esi); }
  /* 00579bea pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00579beb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579bec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00579bed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00579bee add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579bf1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00579bf2:;
  /* 00579bf2 push 0x80000004 */ { u32 v_ = 0x80000004u; esp -= 4; M32(esp) = v_; }
  /* 00579bf7 mov dword ptr [esp + 0x44], 2 */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(0x2u); }
  /* 00579bff call 0x619d80 */ esp -= 4; M32(esp) = 0x579c04u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x579bffu); RETCHK(0x579c04u, 0x579bffu); LOADALL;
  /* 00579c04 mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 00579c08 lea eax, [esp + 0x44] */ eax = (u32)((u32)(esp + 0x44u));
  /* 00579c0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579c0d call 0x5be8c0 */ esp -= 4; M32(esp) = 0x579c12u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x579c0du); RETCHK(0x579c12u, 0x579c0du); LOADALL;
  /* 00579c12 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00579c15:;
  /* 00579c15 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00579c16 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579c17 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00579c18 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00579c1a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00579c1b add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579c1e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579c20(CPU *c) {
  NATIVE_HOOK(0x579c20u) REGS; LOADALL;
L_00579c20:;
  /* 00579c20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579c21 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00579c25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579c26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579c27 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00579c2c call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x579c31u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x579c2cu); RETCHK(0x579c31u, 0x579c2cu); LOADALL;
  /* 00579c31 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00579c34 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579c37 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579c39 je 0x579c44 */ if (ZF_) goto L_00579c44;
  /* 00579c3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579c3c call 0x5beff0 */ esp -= 4; M32(esp) = 0x579c41u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x579c3cu); RETCHK(0x579c41u, 0x579c3cu); LOADALL;
  /* 00579c41 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00579c44:;
  /* 00579c44 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00579c47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579c49 je 0x579c78 */ if (ZF_) goto L_00579c78;
  /* 00579c4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579c4c call 0x57c3d0 */ esp -= 4; M32(esp) = 0x579c51u; SAVEALL; F_0057c3d0(c); ABI_CHECK(0x57c3d0u, 0x579c4cu); RETCHK(0x579c51u, 0x579c4cu); LOADALL;
  /* 00579c51 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00579c54 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579c57 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579c59 mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 00579c60 je 0x579c78 */ if (ZF_) goto L_00579c78;
  /* 00579c62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579c63 call 0x57ad80 */ esp -= 4; M32(esp) = 0x579c68u; SAVEALL; F_0057ad80(c); ABI_CHECK(0x57ad80u, 0x579c63u); RETCHK(0x579c68u, 0x579c63u); LOADALL;
  /* 00579c68 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579c6b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579c6d je 0x579c78 */ if (ZF_) goto L_00579c78;
  /* 00579c6f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00579c70 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x579c75u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x579c70u); RETCHK(0x579c75u, 0x579c70u); LOADALL;
  /* 00579c75 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00579c78:;
  /* 00579c78 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579c79 call 0x5b4a40 */ esp -= 4; M32(esp) = 0x579c7eu; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x579c79u); RETCHK(0x579c7eu, 0x579c79u); LOADALL;
  /* 00579c7e mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00579c83 mov ecx, dword ptr [0x68a8cc] */ { const u32 m_ = (u32)(0x68a8ccu); ecx = (u32)(M32(m_)); }
  /* 00579c89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579c8a mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 00579c8d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579c8e call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x579c94u; SAVEALL; call_ind(c, t_); RETCHK(0x579c94u, 0x579c8eu); LOADALL; }
  /* 00579c94 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579c97 mov eax, esi */ { eax = (u32)(esi); }
  /* 00579c99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00579c9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579c9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579ca0(CPU *c) {
  NATIVE_HOOK(0x579ca0u) REGS; LOADALL;
L_00579ca0:;
  /* 00579ca0 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00579ca4 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00579ca8 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00579cac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579cad mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00579cb1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579cb2 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00579cb6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579cb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579cb8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579cb9 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00579cbe call 0x5bf540 */ esp -= 4; M32(esp) = 0x579cc3u; SAVEALL; F_005bf540(c); ABI_CHECK(0x5bf540u, 0x579cbeu); RETCHK(0x579cc3u, 0x579cbeu); LOADALL;
  /* 00579cc3 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579cc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579cd0(CPU *c) {
  NATIVE_HOOK(0x579cd0u) REGS; LOADALL;
L_00579cd0:;
  /* 00579cd0 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00579cd4 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00579cd8 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00579cdc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579cdd mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00579ce1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579ce2 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00579ce6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579ce7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579ce8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579ce9 push 0x673854 */ { u32 v_ = 0x673854u; esp -= 4; M32(esp) = v_; }
  /* 00579cee call 0x5bf540 */ esp -= 4; M32(esp) = 0x579cf3u; SAVEALL; F_005bf540(c); ABI_CHECK(0x5bf540u, 0x579ceeu); RETCHK(0x579cf3u, 0x579ceeu); LOADALL;
  /* 00579cf3 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579cf6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579d00(CPU *c) {
  NATIVE_HOOK(0x579d00u) REGS; LOADALL;
L_00579d00:;
  /* 00579d00 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00579d04 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00579d08 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00579d0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579d0d mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00579d11 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579d12 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579d13 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579d14 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00579d19 call 0x5bf820 */ esp -= 4; M32(esp) = 0x579d1eu; SAVEALL; F_005bf820(c); ABI_CHECK(0x5bf820u, 0x579d19u); RETCHK(0x579d1eu, 0x579d19u); LOADALL;
  /* 00579d1e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579d21 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579d30(CPU *c) {
  NATIVE_HOOK(0x579d30u) REGS; LOADALL;
L_00579d30:;
  /* 00579d30 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00579d34 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00579d38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579d39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579d3a push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00579d3f call 0x5bf860 */ esp -= 4; M32(esp) = 0x579d44u; SAVEALL; F_005bf860(c); ABI_CHECK(0x5bf860u, 0x579d3fu); RETCHK(0x579d44u, 0x579d3fu); LOADALL;
  /* 00579d44 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579d47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579d50(CPU *c) {
  NATIVE_HOOK(0x579d50u) REGS; LOADALL;
L_00579d50:;
  /* 00579d50 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00579d54 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00579d58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579d59 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00579d5a push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00579d5f call 0x5bf890 */ esp -= 4; M32(esp) = 0x579d64u; SAVEALL; F_005bf890(c); ABI_CHECK(0x5bf890u, 0x579d5fu); RETCHK(0x579d64u, 0x579d5fu); LOADALL;
  /* 00579d64 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579d67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579d70(CPU *c) {
  NATIVE_HOOK(0x579d70u) REGS; LOADALL;
L_00579d70:;
  /* 00579d70 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00579d74 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579d75 push 0x67383c */ { u32 v_ = 0x67383cu; esp -= 4; M32(esp) = v_; }
  /* 00579d7a call 0x5bf510 */ esp -= 4; M32(esp) = 0x579d7fu; SAVEALL; F_005bf510(c); ABI_CHECK(0x5bf510u, 0x579d7au); RETCHK(0x579d7fu, 0x579d7au); LOADALL;
  /* 00579d7f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579d82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579d90(CPU *c) {
  NATIVE_HOOK(0x579d90u) REGS; LOADALL;
L_00579d90:;
  /* 00579d90 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00579d94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579d95 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00579d99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579d9a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579d9b call 0x5b49f0 */ esp -= 4; M32(esp) = 0x579da0u; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x579d9bu); RETCHK(0x579da0u, 0x579d9bu); LOADALL;
  /* 00579da0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00579da3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579da6 or al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00579da8 mov byte ptr [esi + 3], al */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00579dab mov eax, esi */ { eax = (u32)(esi); }
  /* 00579dad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00579dae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579db0(CPU *c) {
  NATIVE_HOOK(0x579db0u) REGS; LOADALL;
L_00579db0:;
  /* 00579db0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00579db4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579db5 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00579db8 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 00579dbb mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00579dbd mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00579dc0 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 00579dc3 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00579dc6 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00579dc9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00579dcb mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00579dcd mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00579dcf mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00579dd2 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00579dd5 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00579dda mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 00579de0 mov edx, dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00579de4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579de5 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x579debu; SAVEALL; call_ind(c, t_); RETCHK(0x579debu, 0x579de5u); LOADALL; }
  /* 00579deb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579dee mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00579df3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579e00(CPU *c) {
  NATIVE_HOOK(0x579e00u) REGS; LOADALL;
L_00579e00:;
  /* 00579e00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 00579e04 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00579e07 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579e09 je 0x579e4b */ if (ZF_) goto L_00579e4b;
  /* 00579e0b mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00579e0e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00579e10 je 0x579e4b */ if (ZF_) goto L_00579e4b;
  /* 00579e12 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00579e15 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 00579e18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00579e19 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00579e1b mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00579e1e mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 00579e21 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00579e24 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00579e27 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00579e29 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00579e2b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00579e2d mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00579e30 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00579e33 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00579e38 mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 00579e3e mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 00579e41 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00579e42 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x579e48u; SAVEALL; call_ind(c, t_); RETCHK(0x579e48u, 0x579e42u); LOADALL; }
  /* 00579e48 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00579e4b:;
  /* 00579e4b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00579e50 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00579e60(CPU *c) {
  NATIVE_HOOK(0x579e60u) REGS; LOADALL;
L_00579e60:;
  /* 00579e60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00579e61 push 0x57a180 */ { u32 v_ = 0x57a180u; esp -= 4; M32(esp) = v_; }
  /* 00579e66 push 0x57a090 */ { u32 v_ = 0x57a090u; esp -= 4; M32(esp) = v_; }
  /* 00579e6b push 0x509 */ { u32 v_ = 0x509u; esp -= 4; M32(esp) = v_; }
  /* 00579e70 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00579e72 call 0x5b3bf0 */ esp -= 4; M32(esp) = 0x579e77u; SAVEALL; F_005b3bf0(c); ABI_CHECK(0x5b3bf0u, 0x579e72u); RETCHK(0x579e77u, 0x579e72u); LOADALL;
  /* 00579e77 push 0x57a520 */ { u32 v_ = 0x57a520u; esp -= 4; M32(esp) = v_; }
  /* 00579e7c push 0x57a570 */ { u32 v_ = 0x57a570u; esp -= 4; M32(esp) = v_; }
  /* 00579e81 push 0x57a1f0 */ { u32 v_ = 0x57a1f0u; esp -= 4; M32(esp) = v_; }
  /* 00579e86 push 0x509 */ { u32 v_ = 0x509u; esp -= 4; M32(esp) = v_; }
  /* 00579e8b push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 00579e8d mov esi, eax */ { esi = (u32)(eax); }
  /* 00579e8f call 0x5afe40 */ esp -= 4; M32(esp) = 0x579e94u; SAVEALL; F_005afe40(c); ABI_CHECK(0x5afe40u, 0x579e8fu); RETCHK(0x579e94u, 0x579e8fu); LOADALL;
  /* 00579e94 push 0x619d80 */ { u32 v_ = 0x619d80u; esp -= 4; M32(esp) = v_; }
  /* 00579e99 push 0x57a7b0 */ { u32 v_ = 0x57a7b0u; esp -= 4; M32(esp) = v_; }
  /* 00579e9e push 0x57a5c0 */ { u32 v_ = 0x57a5c0u; esp -= 4; M32(esp) = v_; }
  /* 00579ea3 push 0x509 */ { u32 v_ = 0x509u; esp -= 4; M32(esp) = v_; }
  /* 00579ea8 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00579eaa mov dword ptr [0x68a950], eax */ { const u32 m_ = (u32)(0x68a950u); M32(m_) = (u32)(eax); }
  /* 00579eaf or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579eb1 call 0x579ca0 */ esp -= 4; M32(esp) = 0x579eb6u; SAVEALL; F_00579ca0(c); ABI_CHECK(0x579ca0u, 0x579eb1u); RETCHK(0x579eb6u, 0x579eb1u); LOADALL;
  /* 00579eb6 push 0x57a860 */ { u32 v_ = 0x57a860u; esp -= 4; M32(esp) = v_; }
  /* 00579ebb push 0x619d80 */ { u32 v_ = 0x619d80u; esp -= 4; M32(esp) = v_; }
  /* 00579ec0 push 0x57a830 */ { u32 v_ = 0x57a830u; esp -= 4; M32(esp) = v_; }
  /* 00579ec5 push 0x509 */ { u32 v_ = 0x509u; esp -= 4; M32(esp) = v_; }
  /* 00579eca push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00579ecc mov dword ptr [0x68a954], eax */ { const u32 m_ = (u32)(0x68a954u); M32(m_) = (u32)(eax); }
  /* 00579ed1 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579ed3 call 0x579cd0 */ esp -= 4; M32(esp) = 0x579ed8u; SAVEALL; F_00579cd0(c); ABI_CHECK(0x579cd0u, 0x579ed3u); RETCHK(0x579ed8u, 0x579ed3u); LOADALL;
  /* 00579ed8 add esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579edb mov dword ptr [0x68a958], eax */ { const u32 m_ = (u32)(0x68a958u); M32(m_) = (u32)(eax); }
  /* 00579ee0 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579ee2 push 0x57aac0 */ { u32 v_ = 0x57aac0u; esp -= 4; M32(esp) = v_; }
  /* 00579ee7 push 0x57ab20 */ { u32 v_ = 0x57ab20u; esp -= 4; M32(esp) = v_; }
  /* 00579eec push 0x57a890 */ { u32 v_ = 0x57a890u; esp -= 4; M32(esp) = v_; }
  /* 00579ef1 push 0x509 */ { u32 v_ = 0x509u; esp -= 4; M32(esp) = v_; }
  /* 00579ef6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00579ef8 call 0x57d070 */ esp -= 4; M32(esp) = 0x579efdu; SAVEALL; F_0057d070(c); ABI_CHECK(0x57d070u, 0x579ef8u); RETCHK(0x579efdu, 0x579ef8u); LOADALL;
  /* 00579efd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579eff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f01 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f03 push 0x50e */ { u32 v_ = 0x50eu; esp -= 4; M32(esp) = v_; }
  /* 00579f08 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f0a mov dword ptr [0x68a95c], eax */ { const u32 m_ = (u32)(0x68a95cu); M32(m_) = (u32)(eax); }
  /* 00579f0f or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579f11 call 0x57c480 */ esp -= 4; M32(esp) = 0x579f16u; SAVEALL; F_0057c480(c); ABI_CHECK(0x57c480u, 0x579f11u); RETCHK(0x579f16u, 0x579f11u); LOADALL;
  /* 00579f16 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f18 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f1a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f1c push 0x50e */ { u32 v_ = 0x50eu; esp -= 4; M32(esp) = v_; }
  /* 00579f21 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f23 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579f25 call 0x580e40 */ esp -= 4; M32(esp) = 0x579f2au; SAVEALL; F_00580e40(c); ABI_CHECK(0x580e40u, 0x579f25u); RETCHK(0x579f2au, 0x579f25u); LOADALL;
  /* 00579f2a push 0x57abd0 */ { u32 v_ = 0x57abd0u; esp -= 4; M32(esp) = v_; }
  /* 00579f2f push 0x57ab80 */ { u32 v_ = 0x57ab80u; esp -= 4; M32(esp) = v_; }
  /* 00579f34 push 0x57aba0 */ { u32 v_ = 0x57aba0u; esp -= 4; M32(esp) = v_; }
  /* 00579f39 push 0x50e */ { u32 v_ = 0x50eu; esp -= 4; M32(esp) = v_; }
  /* 00579f3e or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579f40 call 0x57c4b0 */ esp -= 4; M32(esp) = 0x579f45u; SAVEALL; F_0057c4b0(c); ABI_CHECK(0x57c4b0u, 0x579f40u); RETCHK(0x579f45u, 0x579f40u); LOADALL;
  /* 00579f45 add esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579f48 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579f4a push 0x57acf0 */ { u32 v_ = 0x57acf0u; esp -= 4; M32(esp) = v_; }
  /* 00579f4f push 0x57ac90 */ { u32 v_ = 0x57ac90u; esp -= 4; M32(esp) = v_; }
  /* 00579f54 push 0x57acc0 */ { u32 v_ = 0x57acc0u; esp -= 4; M32(esp) = v_; }
  /* 00579f59 push 0x50e */ { u32 v_ = 0x50eu; esp -= 4; M32(esp) = v_; }
  /* 00579f5e call 0x580e70 */ esp -= 4; M32(esp) = 0x579f63u; SAVEALL; F_00580e70(c); ABI_CHECK(0x580e70u, 0x579f5eu); RETCHK(0x579f63u, 0x579f5eu); LOADALL;
  /* 00579f63 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f65 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f67 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f69 push 0x510 */ { u32 v_ = 0x510u; esp -= 4; M32(esp) = v_; }
  /* 00579f6e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f70 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579f72 call 0x57c480 */ esp -= 4; M32(esp) = 0x579f77u; SAVEALL; F_0057c480(c); ABI_CHECK(0x57c480u, 0x579f72u); RETCHK(0x579f77u, 0x579f72u); LOADALL;
  /* 00579f77 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f79 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f7b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f7d push 0x510 */ { u32 v_ = 0x510u; esp -= 4; M32(esp) = v_; }
  /* 00579f82 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579f84 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579f86 call 0x580e40 */ esp -= 4; M32(esp) = 0x579f8bu; SAVEALL; F_00580e40(c); ABI_CHECK(0x580e40u, 0x579f86u); RETCHK(0x579f8bu, 0x579f86u); LOADALL;
  /* 00579f8b or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579f8d push 0x57ac30 */ { u32 v_ = 0x57ac30u; esp -= 4; M32(esp) = v_; }
  /* 00579f92 push 0x57abf0 */ { u32 v_ = 0x57abf0u; esp -= 4; M32(esp) = v_; }
  /* 00579f97 push 0x57ac10 */ { u32 v_ = 0x57ac10u; esp -= 4; M32(esp) = v_; }
  /* 00579f9c push 0x510 */ { u32 v_ = 0x510u; esp -= 4; M32(esp) = v_; }
  /* 00579fa1 call 0x57c4b0 */ esp -= 4; M32(esp) = 0x579fa6u; SAVEALL; F_0057c4b0(c); ABI_CHECK(0x57c4b0u, 0x579fa1u); RETCHK(0x579fa6u, 0x579fa1u); LOADALL;
  /* 00579fa6 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00579fa9 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579fab push 0x57ac80 */ { u32 v_ = 0x57ac80u; esp -= 4; M32(esp) = v_; }
  /* 00579fb0 push 0x57ac40 */ { u32 v_ = 0x57ac40u; esp -= 4; M32(esp) = v_; }
  /* 00579fb5 push 0x57ac60 */ { u32 v_ = 0x57ac60u; esp -= 4; M32(esp) = v_; }
  /* 00579fba push 0x510 */ { u32 v_ = 0x510u; esp -= 4; M32(esp) = v_; }
  /* 00579fbf call 0x580e70 */ esp -= 4; M32(esp) = 0x579fc4u; SAVEALL; F_00580e70(c); ABI_CHECK(0x580e70u, 0x579fbfu); RETCHK(0x579fc4u, 0x579fbfu); LOADALL;
  /* 00579fc4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579fc6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579fc8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579fca push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 00579fcc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579fce or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579fd0 call 0x579ca0 */ esp -= 4; M32(esp) = 0x579fd5u; SAVEALL; F_00579ca0(c); ABI_CHECK(0x579ca0u, 0x579fd0u); RETCHK(0x579fd5u, 0x579fd0u); LOADALL;
  /* 00579fd5 push 0x577670 */ { u32 v_ = 0x577670u; esp -= 4; M32(esp) = v_; }
  /* 00579fda push 0x57d540 */ { u32 v_ = 0x57d540u; esp -= 4; M32(esp) = v_; }
  /* 00579fdf push 0x577630 */ { u32 v_ = 0x577630u; esp -= 4; M32(esp) = v_; }
  /* 00579fe4 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 00579fe6 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579fe8 call 0x579d00 */ esp -= 4; M32(esp) = 0x579fedu; SAVEALL; F_00579d00(c); ABI_CHECK(0x579d00u, 0x579fe8u); RETCHK(0x579fedu, 0x579fe8u); LOADALL;
  /* 00579fed push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579fef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579ff1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579ff3 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 00579ff5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00579ff7 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00579ff9 call 0x57eeb0 */ esp -= 4; M32(esp) = 0x579ffeu; SAVEALL; F_0057eeb0(c); ABI_CHECK(0x57eeb0u, 0x579ff9u); RETCHK(0x579ffeu, 0x579ff9u); LOADALL;
  /* 00579ffe add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a001 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0057a003 push 0x577670 */ { u32 v_ = 0x577670u; esp -= 4; M32(esp) = v_; }
  /* 0057a008 push 0x57d540 */ { u32 v_ = 0x57d540u; esp -= 4; M32(esp) = v_; }
  /* 0057a00d push 0x57d500 */ { u32 v_ = 0x57d500u; esp -= 4; M32(esp) = v_; }
  /* 0057a012 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0057a014 call 0x57eee0 */ esp -= 4; M32(esp) = 0x57a019u; SAVEALL; F_0057eee0(c); ABI_CHECK(0x57eee0u, 0x57a014u); RETCHK(0x57a019u, 0x57a014u); LOADALL;
  /* 0057a019 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a01b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a01d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a01f push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0057a021 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a023 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0057a025 call 0x580e40 */ esp -= 4; M32(esp) = 0x57a02au; SAVEALL; F_00580e40(c); ABI_CHECK(0x580e40u, 0x57a025u); RETCHK(0x57a02au, 0x57a025u); LOADALL;
  /* 0057a02a push 0x57d600 */ { u32 v_ = 0x57d600u; esp -= 4; M32(esp) = v_; }
  /* 0057a02f push 0x57d5c0 */ { u32 v_ = 0x57d5c0u; esp -= 4; M32(esp) = v_; }
  /* 0057a034 push 0x57d580 */ { u32 v_ = 0x57d580u; esp -= 4; M32(esp) = v_; }
  /* 0057a039 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0057a03b or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0057a03d call 0x580e70 */ esp -= 4; M32(esp) = 0x57a042u; SAVEALL; F_00580e70(c); ABI_CHECK(0x580e70u, 0x57a03du); RETCHK(0x57a042u, 0x57a03du); LOADALL;
  /* 0057a042 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a044 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a046 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a048 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0057a04a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a04c or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0057a04e call 0x57b4a0 */ esp -= 4; M32(esp) = 0x57a053u; SAVEALL; F_0057b4a0(c); ABI_CHECK(0x57b4a0u, 0x57a04eu); RETCHK(0x57a053u, 0x57a04eu); LOADALL;
  /* 0057a053 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a056 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0057a058 push 0x57b2b0 */ { u32 v_ = 0x57b2b0u; esp -= 4; M32(esp) = v_; }
  /* 0057a05d push 0x57b270 */ { u32 v_ = 0x57b270u; esp -= 4; M32(esp) = v_; }
  /* 0057a062 push 0x57b230 */ { u32 v_ = 0x57b230u; esp -= 4; M32(esp) = v_; }
  /* 0057a067 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0057a069 call 0x57b4d0 */ esp -= 4; M32(esp) = 0x57a06eu; SAVEALL; F_0057b4d0(c); ABI_CHECK(0x57b4d0u, 0x57a069u); RETCHK(0x57a06eu, 0x57a069u); LOADALL;
  /* 0057a06e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a071 or eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a073 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a074 jge 0x57a079 */ if (!LT_) goto L_0057a079;
  /* 0057a076 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a078 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057a079:;
  /* 0057a079 call 0x5e5730 */ esp -= 4; M32(esp) = 0x57a07eu; SAVEALL; F_005e5730(c); ABI_CHECK(0x5e5730u, 0x57a079u); RETCHK(0x57a07eu, 0x57a079u); LOADALL;
  /* 0057a07e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057a080 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057a082 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057a084 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a090(CPU *c) {
  NATIVE_HOOK(0x57a090u) REGS; LOADALL;
L_0057a090:;
  /* 0057a090 mov ecx, dword ptr [0x673880] */ { const u32 m_ = (u32)(0x673880u); ecx = (u32)(M32(m_)); }
  /* 0057a096 mov edx, dword ptr [0x67387c] */ { const u32 m_ = (u32)(0x67387cu); edx = (u32)(M32(m_)); }
  /* 0057a09c mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057a0a0 push 0x40507 */ { u32 v_ = 0x40507u; esp -= 4; M32(esp) = v_; }
  /* 0057a0a5 push 0x68a924 */ { u32 v_ = 0x68a924u; esp -= 4; M32(esp) = v_; }
  /* 0057a0aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057a0ab push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057a0ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057a0ae push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0057a0b0 mov dword ptr [0x68a948], eax */ { const u32 m_ = (u32)(0x68a948u); M32(m_) = (u32)(eax); }
  /* 0057a0b5 call 0x5bded0 */ esp -= 4; M32(esp) = 0x57a0bau; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x57a0b5u); RETCHK(0x57a0bau, 0x57a0b5u); LOADALL;
  /* 0057a0ba mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057a0c0 mov edx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); edx = (u32)(M32(m_)); }
  /* 0057a0c6 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a0c9 mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 0057a0cc mov eax, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); eax = (u32)(M32(m_)); }
  /* 0057a0d1 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057a0d7 cmp dword ptr [ecx + eax], 0 */ { const u32 m_ = (u32)(ecx + eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a0db jne 0x57a0e0 */ if (!ZF_) goto L_0057a0e0;
  /* 0057a0dd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a0df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057a0e0:;
  /* 0057a0e0 mov edx, dword ptr [0x673888] */ { const u32 m_ = (u32)(0x673888u); edx = (u32)(M32(m_)); }
  /* 0057a0e6 mov eax, dword ptr [0x673884] */ { const u32 m_ = (u32)(0x673884u); eax = (u32)(M32(m_)); }
  /* 0057a0eb push 0x40507 */ { u32 v_ = 0x40507u; esp -= 4; M32(esp) = v_; }
  /* 0057a0f0 push 0x68a900 */ { u32 v_ = 0x68a900u; esp -= 4; M32(esp) = v_; }
  /* 0057a0f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057a0f6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057a0f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a0f9 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0057a0fb call 0x5bded0 */ esp -= 4; M32(esp) = 0x57a100u; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x57a0fbu); RETCHK(0x57a100u, 0x57a0fbu); LOADALL;
  /* 0057a100 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057a106 mov edx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); edx = (u32)(M32(m_)); }
  /* 0057a10c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a10f mov dword ptr [ecx + edx + 4], eax */ { const u32 m_ = (u32)(ecx + edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057a113 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057a118 mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057a11e mov edx, dword ptr [eax + ecx + 4] */ { const u32 m_ = (u32)(eax + ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057a122 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a124 jne 0x57a148 */ if (!ZF_) goto L_0057a148;
  /* 0057a126 mov eax, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); eax = (u32)(M32(m_)); }
  /* 0057a129 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a12a call 0x5bdee0 */ esp -= 4; M32(esp) = 0x57a12fu; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x57a12au); RETCHK(0x57a12fu, 0x57a12au); LOADALL;
  /* 0057a12f mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057a135 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057a13b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a13e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a140 mov dword ptr [edx + ecx], 0 */ { const u32 m_ = (u32)(edx + ecx); M32(m_) = (u32)(0x0u); }
  /* 0057a147 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057a148:;
  /* 0057a148 mov word ptr [eax + 8], 1 */ { const u32 m_ = (u32)(eax + 0x8u); M16(m_) = (u16)(0x1u); }
  /* 0057a14e mov eax, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); eax = (u32)(M32(m_)); }
  /* 0057a153 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057a159 mov dword ptr [ecx + eax + 8], 0 */ { const u32 m_ = (u32)(ecx + eax + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0057a161 mov eax, dword ptr [0x68a94c] */ { const u32 m_ = (u32)(0x68a94cu); eax = (u32)(M32(m_)); }
  /* 0057a166 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057a167 mov dword ptr [0x68a94c], eax */ { const u32 m_ = (u32)(0x68a94cu); M32(m_) = (u32)(eax); }
  /* 0057a16c mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a170 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a180(CPU *c) {
  NATIVE_HOOK(0x57a180u) REGS; LOADALL;
L_0057a180:;
  /* 0057a180 mov eax, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); eax = (u32)(M32(m_)); }
  /* 0057a185 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057a18b mov eax, dword ptr [eax + ecx + 4] */ { const u32 m_ = (u32)(eax + ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a18f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a191 je 0x57a1af */ if (ZF_) goto L_0057a1af;
  /* 0057a193 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a194 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x57a199u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x57a194u); RETCHK(0x57a199u, 0x57a194u); LOADALL;
  /* 0057a199 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057a19f mov eax, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); eax = (u32)(M32(m_)); }
  /* 0057a1a4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a1a7 mov dword ptr [eax + edx + 4], 0 */ { const u32 m_ = (u32)(eax + edx + 0x4u); M32(m_) = (u32)(0x0u); }
L_0057a1af:;
  /* 0057a1af mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057a1b5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057a1bb mov eax, dword ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); eax = (u32)(M32(m_)); }
  /* 0057a1be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a1c0 je 0x57a1dd */ if (ZF_) goto L_0057a1dd;
  /* 0057a1c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a1c3 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x57a1c8u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x57a1c3u); RETCHK(0x57a1c8u, 0x57a1c3u); LOADALL;
  /* 0057a1c8 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057a1cd mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057a1d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a1d6 mov dword ptr [ecx + eax], 0 */ { const u32 m_ = (u32)(ecx + eax); M32(m_) = (u32)(0x0u); }
L_0057a1dd:;
  /* 0057a1dd mov eax, dword ptr [0x68a94c] */ { const u32 m_ = (u32)(0x68a94cu); eax = (u32)(M32(m_)); }
  /* 0057a1e2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057a1e3 mov dword ptr [0x68a94c], eax */ { const u32 m_ = (u32)(0x68a94cu); M32(m_) = (u32)(eax); }
  /* 0057a1e8 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a1ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a1f0(CPU *c) {
  NATIVE_HOOK(0x57a1f0u) REGS; LOADALL;
L_0057a1f0:;
  /* 0057a1f0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a1f4 mov ecx, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); ecx = (u32)(M32(m_)); }
  /* 0057a1fa add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057a1fc xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057a1fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a1ff mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057a201 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a204 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0057a207 mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 0057a20a mov dword ptr [ecx + 0x10], esi */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(esi); }
  /* 0057a20d mov esi, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); esi = (u32)(M32(m_)); }
  /* 0057a210 mov dword ptr [ecx + 0x14], esi */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(esi); }
  /* 0057a213 mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 0057a216 mov dword ptr [ecx + 0x18], esi */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(esi); }
  /* 0057a219 mov dword ptr [eax + 0x10], 0x57a290 */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(0x57a290u); }
  /* 0057a220 mov dword ptr [eax + 0x18], 0x57a240 */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0x57a240u); }
  /* 0057a227 mov dword ptr [eax + 0x1c], 0x57a270 */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0x57a270u); }
  /* 0057a22e mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 0057a231 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a232 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a240(CPU *c) {
  NATIVE_HOOK(0x57a240u) REGS; LOADALL;
L_0057a240:;
  /* 0057a240 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a244 mov eax, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); eax = (u32)(M32(m_)); }
  /* 0057a249 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057a24b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a24c mov esi, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); esi = (u32)(M32(m_)); }
  /* 0057a252 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0057a256 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057a259 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a25c mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057a262 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a263 inc word ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = M16(m_); u32 r_ = (a_ + 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_INC, a_, 1, r_, 2); }
  /* 0057a267 jmp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0057a270(CPU *c) {
  NATIVE_HOOK(0x57a270u) REGS; LOADALL;
L_0057a270:;
  /* 0057a270 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057a276 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a27a mov ecx, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); ecx = (u32)(M32(m_)); }
  /* 0057a280 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057a284 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057a286 mov dword ptr [edx + 4], 0 */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0057a28d jmp dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0057a290(CPU *c) {
  NATIVE_HOOK(0x57a290u) REGS; LOADALL;
L_0057a290:;
  /* 0057a290 mov eax, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); eax = (u32)(M32(m_)); }
  /* 0057a295 sub esp, 0x144 */ { u32 a_ = esp, b_ = 0x144u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a29b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a29c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a29d mov edi, dword ptr [esp + 0x150] */ { const u32 m_ = (u32)(esp + 0x150u); edi = (u32)(M32(m_)); }
  /* 0057a2a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a2a5 lea esi, [eax + edi] */ esi = (u32)((u32)(eax + edi));
  /* 0057a2a8 call dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a2abu; SAVEALL; call_ind(c, t_); RETCHK(0x57a2abu, 0x57a2a8u); LOADALL; }
  /* 0057a2ab add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a2ae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a2b0 je 0x57a50f */ if (ZF_) goto L_0057a50f;
  /* 0057a2b6 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0057a2b9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057a2ba xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057a2bc mov dword ptr [esp + 0x1c], esi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(esi); }
  /* 0057a2c0 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a2c2 je 0x57a4cf */ if (ZF_) goto L_0057a4cf;
  /* 0057a2c8 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057a2ce mov eax, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); eax = (u32)(M32(m_)); }
  /* 0057a2d3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057a2d4 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0057a2d8 mov edx, dword ptr [ecx + 0xa0] */ { const u32 m_ = (u32)(ecx + 0xa0u); edx = (u32)(M32(m_)); }
  /* 0057a2de mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a2e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057a2e2 mov dword ptr [esp + 0x30], edx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edx); }
  /* 0057a2e6 lea ebp, [eax + edi] */ ebp = (u32)((u32)(eax + edi));
  /* 0057a2e9 call 0x5abd50 */ esp -= 4; M32(esp) = 0x57a2eeu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x57a2e9u); RETCHK(0x57a2eeu, 0x57a2e9u); LOADALL;
  /* 0057a2ee add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057a2f1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a2f4 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057a2f6 mov dword ptr [esp + 0x3c], edx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edx); }
  /* 0057a2fa mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a2fd mov dword ptr [esp + 0x40], ecx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0057a301 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057a304 lea eax, [edi + 0x118] */ eax = (u32)((u32)(edi + 0x118u));
  /* 0057a30a mov dword ptr [esp + 0x44], edx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(edx); }
  /* 0057a30e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057a310 mov dword ptr [esp + 0x30], ecx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0057a314 lea ecx, [edi + 0x10c] */ ecx = (u32)((u32)(edi + 0x10cu));
  /* 0057a31a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057a31d mov dword ptr [esp + 0x34], edx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edx); }
  /* 0057a321 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0057a323 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057a326 mov dword ptr [esp + 0x48], edx */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(edx); }
  /* 0057a32a mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 0057a32e mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a331 mov dword ptr [esp + 0x4c], eax */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(eax); }
  /* 0057a335 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057a338 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057a33b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057a33d cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a340 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057a343 sete dl */ { edx = (edx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0057a346 mov esi, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); esi = (u32)(M32(m_)); }
  /* 0057a349 mov dword ptr [esp + 0x50], ecx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ecx); }
  /* 0057a34d mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
L_0057a351:;
  /* 0057a351 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057a353 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a355 jge 0x57a42e */ if (!LT_) goto L_0057a42e;
  /* 0057a35b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057a35d lea eax, [edi + 0xa5] */ eax = (u32)((u32)(edi + 0xa5u));
L_0057a363:;
  /* 0057a363 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057a365 mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057a368 lea ecx, [ecx + ecx*2] */ ecx = (u32)((u32)(ecx + ecx * 2u));
  /* 0057a36b fld dword ptr [esi + ecx*4 + 0x48] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0057a36f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057a371 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057a373 lea ecx, [ecx + ecx*2] */ ecx = (u32)((u32)(ecx + ecx * 2u));
  /* 0057a376 fld dword ptr [esi + ecx*4 + 0x4c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0057a37a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057a37c mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057a37f lea ecx, [ecx + ecx*2] */ ecx = (u32)((u32)(ecx + ecx * 2u));
  /* 0057a382 fld dword ptr [esi + ecx*4 + 0x50] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0057a386 fld dword ptr [eax - 0xd] */ { const u32 m_ = (u32)(eax + 0xfffffff3u); FPUSH((double)MF32(m_)); }
  /* 0057a389 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057a38b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057a38d fld dword ptr [eax - 0x11] */ { const u32 m_ = (u32)(eax + 0xffffffefu); FPUSH((double)MF32(m_)); }
  /* 0057a390 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0057a392 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0057a394 fld dword ptr [eax - 9] */ { const u32 m_ = (u32)(eax + 0xfffffff7u); FPUSH((double)MF32(m_)); }
  /* 0057a397 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057a399 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0057a39b fsub dword ptr [eax - 5] */ { const u32 m_ = (u32)(eax + 0xfffffffbu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057a39e fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a3a2 mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
  /* 0057a3a6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a3a8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0057a3aa setg cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 0057a3ad fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0057a3af test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a3b1 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0057a3b3 jne 0x57a420 */ if (!ZF_) goto L_0057a420;
  /* 0057a3b5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057a3b6 add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057a3b9 cmp edx, 6 */ { u32 a_ = edx, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a3bc jl 0x57a363 */ if (LT_) goto L_0057a363;
  /* 0057a3be mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a3c1 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057a3c5 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a3c7 jl 0x57a411 */ if (LT_) goto L_0057a411;
  /* 0057a3c9 lea edi, [eax*4 + 0xc8] */ edi = (u32)((u32)(eax * 4u + 0xc8u));
  /* 0057a3d0 mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 0057a3d3 push 0x1030507 */ { u32 v_ = 0x1030507u; esp -= 4; M32(esp) = v_; }
  /* 0057a3d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a3d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a3db je 0x57a3ef */ if (ZF_) goto L_0057a3ef;
  /* 0057a3dd mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057a3e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a3e4 call dword ptr [edx + 0x110] */ { const u32 m_ = (u32)(edx + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a3eau; SAVEALL; call_ind(c, t_); RETCHK(0x57a3eau, 0x57a3e4u); LOADALL; }
  /* 0057a3ea add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a3ed jmp 0x57a3fd */ goto L_0057a3fd;
L_0057a3ef:;
  /* 0057a3ef mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057a3f4 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a3fau; SAVEALL; call_ind(c, t_); RETCHK(0x57a3fau, 0x57a3f4u); LOADALL; }
  /* 0057a3fa add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057a3fd:;
  /* 0057a3fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a3ff je 0x57a4db */ if (ZF_) goto L_0057a4db;
  /* 0057a405 mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
  /* 0057a408 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a40b add eax, 0x32 */ { u32 a_ = eax, b_ = 0x32u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057a40e mov dword ptr [ebp + 4], eax */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(eax); }
L_0057a411:;
  /* 0057a411 mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 0057a414 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057a418 mov dword ptr [ecx + eax*4], esi */ { const u32 m_ = (u32)(ecx + eax * 4u); M32(m_) = (u32)(esi); }
  /* 0057a41b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057a41c mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
L_0057a420:;
  /* 0057a420 mov esi, dword ptr [esp + ebx*4 + 0x54] */ { const u32 m_ = (u32)(esp + ebx * 4u + 0x54u); esi = (u32)(M32(m_)); }
  /* 0057a424 mov edi, dword ptr [esp + 0x158] */ { const u32 m_ = (u32)(esp + 0x158u); edi = (u32)(M32(m_)); }
  /* 0057a42b dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057a42c jmp 0x57a4a6 */ goto L_0057a4a6;
L_0057a42e:;
  /* 0057a42e fld dword ptr [esp + eax + 0x30] */ { const u32 m_ = (u32)(esp + eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0057a432 fsub dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057a435 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0057a437 fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a43b fld dword ptr [esp + eax + 0x48] */ { const u32 m_ = (u32)(esp + eax + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0057a43f mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057a443 fsubr dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0057a446 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a448 fstp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a44c jge 0x57a496 */ if (!LT_) goto L_0057a496;
  /* 0057a44e mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 0057a452 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a454 jge 0x57a496 */ if (!LT_) goto L_0057a496;
  /* 0057a456 fld dword ptr [esp + eax + 0x3c] */ { const u32 m_ = (u32)(esp + eax + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0057a45a fcomp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057a45d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057a45f and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a464 jne 0x57a46d */ if (!ZF_) goto L_0057a46d;
  /* 0057a466 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057a46b jmp 0x57a46f */ goto L_0057a46f;
L_0057a46d:;
  /* 0057a46d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0057a46f:;
  /* 0057a46f mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0057a473 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a475 je 0x57a485 */ if (ZF_) goto L_0057a485;
  /* 0057a477 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a479 jne 0x57a489 */ if (!ZF_) goto L_0057a489;
L_0057a47b:;
  /* 0057a47b mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057a47e inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057a47f mov dword ptr [esp + ebx*4 + 0x54], eax */ { const u32 m_ = (u32)(esp + ebx * 4u + 0x54u); M32(m_) = (u32)(eax); }
  /* 0057a483 jmp 0x57a4a3 */ goto L_0057a4a3;
L_0057a485:;
  /* 0057a485 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a487 jne 0x57a47b */ if (!ZF_) goto L_0057a47b;
L_0057a489:;
  /* 0057a489 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057a48c mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057a48f inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057a490 mov dword ptr [esp + ebx*4 + 0x54], edx */ { const u32 m_ = (u32)(esp + ebx * 4u + 0x54u); M32(m_) = (u32)(edx); }
  /* 0057a494 jmp 0x57a4a6 */ goto L_0057a4a6;
L_0057a496:;
  /* 0057a496 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057a49a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a49c jge 0x57a4a3 */ if (!LT_) goto L_0057a4a3;
  /* 0057a49e mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057a4a1 jmp 0x57a4a6 */ goto L_0057a4a6;
L_0057a4a3:;
  /* 0057a4a3 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
L_0057a4a6:;
  /* 0057a4a6 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a4a8 jge 0x57a351 */ if (!LT_) goto L_0057a351;
  /* 0057a4ae mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057a4b2 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
L_0057a4b5:;
  /* 0057a4b5 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0057a4b9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057a4bb cmp dword ptr [edx + 0xc], 1 */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a4bf sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0057a4c2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057a4c3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a4c5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057a4c7 call dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a4cbu; SAVEALL; call_ind(c, t_); RETCHK(0x57a4cbu, 0x57a4c7u); LOADALL; }
  /* 0057a4cb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a4ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_0057a4cf:;
  /* 0057a4cf mov eax, edi */ { eax = (u32)(edi); }
  /* 0057a4d1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057a4d2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057a4d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a4d4 add esp, 0x144 */ { u32 a_ = esp, b_ = 0x144u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a4da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057a4db:;
  /* 0057a4db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a4dc push 0x80000013 */ { u32 v_ = 0x80000013u; esp -= 4; M32(esp) = v_; }
  /* 0057a4e1 mov dword ptr [esp + 0x20], 2 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x2u); }
  /* 0057a4e9 call 0x619d80 */ esp -= 4; M32(esp) = 0x57a4eeu; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57a4e9u); RETCHK(0x57a4eeu, 0x57a4e9u); LOADALL;
  /* 0057a4ee lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 0057a4f2 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 0057a4f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057a4f7 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57a4fcu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57a4f7u); RETCHK(0x57a4fcu, 0x57a4f7u); LOADALL;
  /* 0057a4fc mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0057a500 mov edi, dword ptr [esp + 0x164] */ { const u32 m_ = (u32)(esp + 0x164u); edi = (u32)(M32(m_)); }
  /* 0057a507 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a50a mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0057a50d jmp 0x57a4b5 */ goto L_0057a4b5;
L_0057a50f:;
  /* 0057a50f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057a510 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a512 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a513 add esp, 0x144 */ { u32 a_ = esp, b_ = 0x144u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a519 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a520(CPU *c) {
  NATIVE_HOOK(0x57a520u) REGS; LOADALL;
L_0057a520:;
  /* 0057a520 mov ecx, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); ecx = (u32)(M32(m_)); }
  /* 0057a526 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057a52a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a52b mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057a52f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a530 lea eax, [ecx + esi] */ eax = (u32)((u32)(ecx + esi));
  /* 0057a533 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057a535 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057a537 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0057a539 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a53c mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0057a53f mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 0057a542 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a544 je 0x57a563 */ if (ZF_) goto L_0057a563;
  /* 0057a546 mov eax, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); eax = (u32)(M32(m_)); }
  /* 0057a54b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057a54c lea ebx, [eax + esi] */ ebx = (u32)((u32)(eax + esi));
  /* 0057a54f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a552 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a554 je 0x57a55f */ if (ZF_) goto L_0057a55f;
  /* 0057a556 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a557 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57a55cu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57a557u); RETCHK(0x57a55cu, 0x57a557u); LOADALL;
  /* 0057a55c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057a55f:;
  /* 0057a55f mov dword ptr [ebx + 0xc], edi */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edi); }
  /* 0057a562 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0057a563:;
  /* 0057a563 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057a565 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057a566 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a567 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a570(CPU *c) {
  NATIVE_HOOK(0x57a570u) REGS; LOADALL;
L_0057a570:;
  /* 0057a570 mov eax, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); eax = (u32)(M32(m_)); }
  /* 0057a575 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a576 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a577 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0057a57b lea esi, [eax + edi] */ esi = (u32)((u32)(eax + edi));
  /* 0057a57e mov eax, dword ptr [eax + edi] */ { const u32 m_ = (u32)(eax + edi); eax = (u32)(M32(m_)); }
  /* 0057a581 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a583 je 0x57a595 */ if (ZF_) goto L_0057a595;
  /* 0057a585 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057a58b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a58c call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a592u; SAVEALL; call_ind(c, t_); RETCHK(0x57a592u, 0x57a58cu); LOADALL; }
  /* 0057a592 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057a595:;
  /* 0057a595 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057a598 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0057a59e mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0057a5a5 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0057a5ac mov dword ptr [edi + 0x18], edx */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(edx); }
  /* 0057a5af mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057a5b2 mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0057a5b5 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0057a5b8 mov dword ptr [edi + 0x10], ecx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0057a5bb mov eax, edi */ { eax = (u32)(edi); }
  /* 0057a5bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057a5be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a5bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a5c0(CPU *c) {
  NATIVE_HOOK(0x57a5c0u) REGS; LOADALL;
L_0057a5c0:;
  /* 0057a5c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a5c4 mov ecx, dword ptr [0x68a954] */ { const u32 m_ = (u32)(0x68a954u); ecx = (u32)(M32(m_)); }
  /* 0057a5ca add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057a5cc mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
  /* 0057a5d2 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057a5d8 mov dx, word ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057a5dc dec dx */ { u32 a_ = (edx & 0xffffu); u32 r_ = (a_ - 1u) & 0xffffu; edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057a5de mov word ptr [eax + 0x60], dx */ { const u32 m_ = (u32)(eax + 0x60u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057a5e2 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057a5e5 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a5e8 mov dword ptr [eax + 0x10], 0x57a5f0 */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(0x57a5f0u); }
  /* 0057a5ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a5f0(CPU *c) {
  NATIVE_HOOK(0x57a5f0u) REGS; LOADALL;
L_0057a5f0:;
  /* 0057a5f0 mov eax, dword ptr [0x68a954] */ { const u32 m_ = (u32)(0x68a954u); eax = (u32)(M32(m_)); }
  /* 0057a5f5 sub esp, 0x11c */ { u32 a_ = esp, b_ = 0x11cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a5fb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057a5fc mov ebp, dword ptr [esp + 0x124] */ { const u32 m_ = (u32)(esp + 0x124u); ebp = (u32)(M32(m_)); }
  /* 0057a603 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a604 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057a605 lea esi, [eax + ebp] */ esi = (u32)((u32)(eax + ebp));
  /* 0057a608 call dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a60bu; SAVEALL; call_ind(c, t_); RETCHK(0x57a60bu, 0x57a608u); LOADALL; }
  /* 0057a60b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a60e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a610 je 0x57a7a5 */ if (ZF_) goto L_0057a7a5;
  /* 0057a616 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057a618 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a61a mov dword ptr [esp + 0x20], esi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(esi); }
  /* 0057a61e je 0x57a756 */ if (ZF_) goto L_0057a756;
  /* 0057a624 mov esi, dword ptr [ebp + 0x64] */ { const u32 m_ = (u32)(ebp + 0x64u); esi = (u32)(M32(m_)); }
  /* 0057a627 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057a628 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a629 lea edi, [ebp + 0x64] */ edi = (u32)((u32)(ebp + 0x64u));
  /* 0057a62c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a62e je 0x57a680 */ if (ZF_) goto L_0057a680;
L_0057a630:;
  /* 0057a630 mov ecx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0057a633 lea eax, [esi - 0xc] */ eax = (u32)((u32)(esi + 0xfffffff4u));
  /* 0057a636 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057a638 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a63a je 0x57a67c */ if (ZF_) goto L_0057a67c;
  /* 0057a63c mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057a63f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a641 je 0x57a67c */ if (ZF_) goto L_0057a67c;
  /* 0057a643 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057a646 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057a649 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a64a mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057a64c mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057a64f mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057a652 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a655 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a658 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057a65a mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057a65c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057a65e mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057a661 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a664 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057a669 mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057a66f mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057a672 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057a673 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a679u; SAVEALL; call_ind(c, t_); RETCHK(0x57a679u, 0x57a673u); LOADALL; }
  /* 0057a679 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057a67c:;
  /* 0057a67c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a67e jne 0x57a630 */ if (!ZF_) goto L_0057a630;
L_0057a680:;
  /* 0057a680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057a681 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057a683 call 0x577800 */ esp -= 4; M32(esp) = 0x57a688u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x57a683u); RETCHK(0x57a688u, 0x57a683u); LOADALL;
  /* 0057a688 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0057a68a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a68d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0057a68f mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 0057a693 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0057a697 fsub dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057a69a mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057a69d mov dword ptr [esp + 0x20], edx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(edx); }
  /* 0057a6a1 mov edx, eax */ { edx = (u32)(eax); }
  /* 0057a6a3 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057a6a6 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a6aa fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0057a6ae fsub dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057a6b1 mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0057a6b5 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0057a6b7 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0057a6bb mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a6be fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a6c2 fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0057a6c6 fsub dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057a6c9 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057a6cc mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0057a6d0 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0057a6d4 fstp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a6d8 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0057a6dc fadd dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057a6df fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a6e3 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0057a6e7 fadd dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057a6ea fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a6ee fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0057a6f2 fadd dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057a6f5 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 0057a6f9 mov esi, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); esi = (u32)(M32(m_)); }
  /* 0057a6fc fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
L_0057a700:;
  /* 0057a700 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0057a702 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a704 jge 0x57a761 */ if (!LT_) goto L_0057a761;
  /* 0057a706 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057a70b mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057a711 push 0x30507 */ { u32 v_ = 0x30507u; esp -= 4; M32(esp) = v_; }
  /* 0057a716 mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057a719 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057a71a call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a720u; SAVEALL; call_ind(c, t_); RETCHK(0x57a720u, 0x57a71au); LOADALL; }
  /* 0057a720 lea ecx, [esi + 0x38] */ ecx = (u32)((u32)(esi + 0x38u));
  /* 0057a723 mov dword ptr [eax + 0x14], esi */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(esi); }
  /* 0057a726 mov dword ptr [eax + 8], ebp */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebp); }
  /* 0057a729 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a72c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0057a72e mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057a731 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0057a733 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0057a735 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057a738 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0057a73a mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0057a73c lea ecx, [eax + 0xc] */ ecx = (u32)((u32)(eax + 0xcu));
  /* 0057a73f mov dword ptr [eax + 0x10], edi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edi); }
  /* 0057a742 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057a744 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0057a746 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057a749 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
L_0057a74b:;
  /* 0057a74b mov esi, dword ptr [esp + ebx*4 + 0x2c] */ { const u32 m_ = (u32)(esp + ebx * 4u + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0057a74f dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_0057a750:;
  /* 0057a750 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a752 jge 0x57a700 */ if (!LT_) goto L_0057a700;
  /* 0057a754 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057a755 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0057a756:;
  /* 0057a756 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 0057a758 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a759 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057a75a add esp, 0x11c */ { u32 a_ = esp, b_ = 0x11cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a760 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057a761:;
  /* 0057a761 fld dword ptr [esp + ecx + 0x1c] */ { const u32 m_ = (u32)(esp + ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0057a765 fcomp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057a768 mov edx, esi */ { edx = (u32)(esi); }
  /* 0057a76a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057a76c test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057a76f jp 0x57a790 */ if (PF_) goto L_0057a790;
  /* 0057a771 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0057a773 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057a776 fld dword ptr [esp + ecx + 0x10] */ { const u32 m_ = (u32)(esp + ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0057a77a fcomp dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057a77d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057a77f and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a784 jne 0x57a750 */ if (!ZF_) goto L_0057a750;
  /* 0057a786 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057a789 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057a78a mov dword ptr [esp + ebx*4 + 0x2c], edx */ { const u32 m_ = (u32)(esp + ebx * 4u + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0057a78e jmp 0x57a750 */ goto L_0057a750;
L_0057a790:;
  /* 0057a790 fld dword ptr [esp + ecx + 0x10] */ { const u32 m_ = (u32)(esp + ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0057a794 fcomp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057a797 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057a799 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a79e jne 0x57a74b */ if (!ZF_) goto L_0057a74b;
  /* 0057a7a0 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0057a7a3 jmp 0x57a750 */ goto L_0057a750;
L_0057a7a5:;
  /* 0057a7a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a7a6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057a7a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057a7a9 add esp, 0x11c */ { u32 a_ = esp, b_ = 0x11cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a7af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a7b0(CPU *c) {
  NATIVE_HOOK(0x57a7b0u) REGS; LOADALL;
L_0057a7b0:;
  /* 0057a7b0 mov eax, dword ptr [0x68a954] */ { const u32 m_ = (u32)(0x68a954u); eax = (u32)(M32(m_)); }
  /* 0057a7b5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057a7b6 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0057a7ba push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057a7bb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a7bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a7bd mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 0057a7c0 lea edi, [ebx + 0x64] */ edi = (u32)((u32)(ebx + 0x64u));
  /* 0057a7c3 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a7c5 lea ebp, [eax + ebx] */ ebp = (u32)((u32)(eax + ebx));
  /* 0057a7c8 je 0x57a81a */ if (ZF_) goto L_0057a81a;
L_0057a7ca:;
  /* 0057a7ca mov ecx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0057a7cd lea eax, [esi - 0xc] */ eax = (u32)((u32)(esi + 0xfffffff4u));
  /* 0057a7d0 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057a7d2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a7d4 je 0x57a816 */ if (ZF_) goto L_0057a816;
  /* 0057a7d6 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057a7d9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a7db je 0x57a816 */ if (ZF_) goto L_0057a816;
  /* 0057a7dd mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057a7e0 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057a7e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a7e4 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057a7e6 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057a7e9 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057a7ec mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a7ef mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a7f2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057a7f4 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057a7f6 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057a7f8 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057a7fb mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a7fe mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057a803 mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057a809 mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057a80c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057a80d call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a813u; SAVEALL; call_ind(c, t_); RETCHK(0x57a813u, 0x57a80du); LOADALL; }
  /* 0057a813 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057a816:;
  /* 0057a816 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a818 jne 0x57a7ca */ if (!ZF_) goto L_0057a7ca;
L_0057a81a:;
  /* 0057a81a mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a81d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057a81e mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 0057a821 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a822 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057a824 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057a825 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057a826 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a830(CPU *c) {
  NATIVE_HOOK(0x57a830u) REGS; LOADALL;
L_0057a830:;
  /* 0057a830 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a834 mov ecx, dword ptr [0x68a958] */ { const u32 m_ = (u32)(0x68a958u); ecx = (u32)(M32(m_)); }
  /* 0057a83a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057a83c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a83d mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
  /* 0057a843 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057a849 mov esi, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); esi = (u32)(M32(m_)); }
  /* 0057a84f mov edx, dword ptr [esi + edx + 8] */ { const u32 m_ = (u32)(esi + edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057a853 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a854 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a857 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a860(CPU *c) {
  NATIVE_HOOK(0x57a860u) REGS; LOADALL;
L_0057a860:;
  /* 0057a860 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057a864 mov ecx, dword ptr [0x68a958] */ { const u32 m_ = (u32)(0x68a958u); ecx = (u32)(M32(m_)); }
  /* 0057a86a mov eax, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); eax = (u32)(M32(m_)); }
  /* 0057a86d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a86f je 0x57a884 */ if (ZF_) goto L_0057a884;
  /* 0057a871 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a872 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057a876 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a877 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a878 call 0x57ad90 */ esp -= 4; M32(esp) = 0x57a87du; SAVEALL; F_0057ad90(c); ABI_CHECK(0x57ad90u, 0x57a878u); RETCHK(0x57a87du, 0x57a878u); LOADALL;
  /* 0057a87d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a880 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057a882 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057a883 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057a884:;
  /* 0057a884 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a888 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a890(CPU *c) {
  NATIVE_HOOK(0x57a890u) REGS; LOADALL;
L_0057a890:;
  /* 0057a890 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a894 mov ecx, dword ptr [0x68a95c] */ { const u32 m_ = (u32)(0x68a95cu); ecx = (u32)(M32(m_)); }
  /* 0057a89a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057a89c mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
  /* 0057a8a2 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057a8a5 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057a8a8 mov dword ptr [eax + 0x10], 0x57a8b0 */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(0x57a8b0u); }
  /* 0057a8af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057a8b0(CPU *c) {
  NATIVE_HOOK(0x57a8b0u) REGS; LOADALL;
L_0057a8b0:;
  /* 0057a8b0 mov eax, dword ptr [0x68a95c] */ { const u32 m_ = (u32)(0x68a95cu); eax = (u32)(M32(m_)); }
  /* 0057a8b5 sub esp, 0x128 */ { u32 a_ = esp, b_ = 0x128u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a8bb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057a8bc mov ebp, dword ptr [esp + 0x130] */ { const u32 m_ = (u32)(esp + 0x130u); ebp = (u32)(M32(m_)); }
  /* 0057a8c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057a8c4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057a8c5 lea esi, [eax + ebp] */ esi = (u32)((u32)(eax + ebp));
  /* 0057a8c8 call dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a8cbu; SAVEALL; call_ind(c, t_); RETCHK(0x57a8cbu, 0x57a8c8u); LOADALL; }
  /* 0057a8cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a8ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a8d0 je 0x57aa83 */ if (ZF_) goto L_0057aa83;
  /* 0057a8d6 cmp byte ptr [ebp + 1], 0x80 */ { const u32 m_ = (u32)(ebp + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0057a8da jb 0x57aaa6 */ if (CF_) goto L_0057aaa6;
  /* 0057a8e0 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057a8e2 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057a8e5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a8e7 mov dword ptr [esp + 0x24], esi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(esi); }
  /* 0057a8eb mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0057a8ef je 0x57aaa6 */ if (ZF_) goto L_0057aaa6;
  /* 0057a8f5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a8f7 je 0x57aaa6 */ if (ZF_) goto L_0057aaa6;
  /* 0057a8fd mov esi, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0057a900 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057a903 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057a904 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057a905 lea edi, [ebp + 0x2c] */ edi = (u32)((u32)(ebp + 0x2cu));
  /* 0057a908 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057a90a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a90c mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0057a910 je 0x57a958 */ if (ZF_) goto L_0057a958;
L_0057a912:;
  /* 0057a912 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057a915 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0057a917 lea eax, [esi - 0xc] */ eax = (u32)((u32)(esi + 0xfffffff4u));
  /* 0057a91a mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057a91c mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0057a91e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a91f mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057a922 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057a925 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057a928 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057a92b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057a92d mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0057a92f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057a931 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a934 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057a937 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057a93c mov edx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); edx = (u32)(M32(m_)); }
  /* 0057a942 mov ecx, dword ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a946 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057a947 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a94du; SAVEALL; call_ind(c, t_); RETCHK(0x57a94du, 0x57a947u); LOADALL; }
  /* 0057a94d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a950 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057a952 jne 0x57a912 */ if (!ZF_) goto L_0057a912;
  /* 0057a954 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
L_0057a958:;
  /* 0057a958 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057a959 call 0x5abd50 */ esp -= 4; M32(esp) = 0x57a95eu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x57a959u); RETCHK(0x57a95eu, 0x57a959u); LOADALL;
  /* 0057a95e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057a961 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057a964 mov edx, eax */ { edx = (u32)(eax); }
  /* 0057a966 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0057a968 mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0057a96c mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a96f mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0057a973 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057a975 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057a978 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0057a97c fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0057a980 fadd dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057a984 mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
  /* 0057a988 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057a98b mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057a98e mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0057a992 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0057a996 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0057a99a fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a99e fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0057a9a2 fadd dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057a9a6 mov esi, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); esi = (u32)(M32(m_)); }
  /* 0057a9a9 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a9ad fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0057a9b1 fadd dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057a9b5 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a9b9 fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0057a9bd fsub dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057a9c1 fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a9c5 fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0057a9c9 fsub dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057a9cd fstp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057a9d1 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0057a9d5 fsub dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057a9d9 fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
L_0057a9dd:;
  /* 0057a9dd mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0057a9df test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057a9e1 jge 0x57aa3f */ if (!LT_) goto L_0057aa3f;
  /* 0057a9e3 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057a9e8 mov edx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); edx = (u32)(M32(m_)); }
  /* 0057a9ee push 0x30507 */ { u32 v_ = 0x30507u; esp -= 4; M32(esp) = v_; }
  /* 0057a9f3 mov ecx, dword ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057a9f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057a9f8 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57a9feu; SAVEALL; call_ind(c, t_); RETCHK(0x57a9feu, 0x57a9f8u); LOADALL; }
  /* 0057a9fe lea ecx, [esi + 0x40] */ ecx = (u32)((u32)(esi + 0x40u));
  /* 0057aa01 mov dword ptr [eax + 0x14], esi */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(esi); }
  /* 0057aa04 mov dword ptr [eax + 8], ebp */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebp); }
  /* 0057aa07 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057aa0a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0057aa0c mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057aa0f mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0057aa11 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0057aa13 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057aa16 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0057aa18 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0057aa1a lea ecx, [eax + 0xc] */ ecx = (u32)((u32)(eax + 0xcu));
  /* 0057aa1d mov dword ptr [eax + 0x10], edi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edi); }
  /* 0057aa20 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057aa22 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0057aa24 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057aa27 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
L_0057aa29:;
  /* 0057aa29 mov esi, dword ptr [esp + ebx*4 + 0x38] */ { const u32 m_ = (u32)(esp + ebx * 4u + 0x38u); esi = (u32)(M32(m_)); }
  /* 0057aa2d dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_0057aa2e:;
  /* 0057aa2e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057aa30 jge 0x57a9dd */ if (!LT_) goto L_0057a9dd;
  /* 0057aa32 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057aa33 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057aa34 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 0057aa36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057aa37 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057aa38 add esp, 0x128 */ { u32 a_ = esp, b_ = 0x128u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057aa3e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057aa3f:;
  /* 0057aa3f fld dword ptr [esp + ecx + 0x20] */ { const u32 m_ = (u32)(esp + ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0057aa43 fcomp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057aa46 mov edx, esi */ { edx = (u32)(esi); }
  /* 0057aa48 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057aa4a test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057aa4d jp 0x57aa6e */ if (PF_) goto L_0057aa6e;
  /* 0057aa4f mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0057aa51 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057aa54 fld dword ptr [esp + ecx + 0x14] */ { const u32 m_ = (u32)(esp + ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0057aa58 fcomp dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057aa5b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057aa5d and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057aa62 jne 0x57aa2e */ if (!ZF_) goto L_0057aa2e;
  /* 0057aa64 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057aa67 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057aa68 mov dword ptr [esp + ebx*4 + 0x38], edx */ { const u32 m_ = (u32)(esp + ebx * 4u + 0x38u); M32(m_) = (u32)(edx); }
  /* 0057aa6c jmp 0x57aa2e */ goto L_0057aa2e;
L_0057aa6e:;
  /* 0057aa6e fld dword ptr [esp + ecx + 0x14] */ { const u32 m_ = (u32)(esp + ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0057aa72 fcomp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057aa75 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057aa77 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057aa7c jne 0x57aa29 */ if (!ZF_) goto L_0057aa29;
  /* 0057aa7e mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0057aa81 jmp 0x57aa2e */ goto L_0057aa2e;
L_0057aa83:;
  /* 0057aa83 push 0x80000016 */ { u32 v_ = 0x80000016u; esp -= 4; M32(esp) = v_; }
  /* 0057aa88 mov dword ptr [esp + 0x28], 2 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x2u); }
  /* 0057aa90 call 0x619d80 */ esp -= 4; M32(esp) = 0x57aa95u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57aa90u); RETCHK(0x57aa95u, 0x57aa90u); LOADALL;
  /* 0057aa95 mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0057aa99 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 0057aa9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057aa9e call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57aaa3u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57aa9eu); RETCHK(0x57aaa3u, 0x57aa9eu); LOADALL;
  /* 0057aaa3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057aaa6:;
  /* 0057aaa6 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 0057aaa8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057aaa9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057aaaa add esp, 0x128 */ { u32 a_ = esp, b_ = 0x128u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057aab0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057aac0(CPU *c) {
  NATIVE_HOOK(0x57aac0u) REGS; LOADALL;
L_0057aac0:;
  /* 0057aac0 mov eax, dword ptr [0x68a95c] */ { const u32 m_ = (u32)(0x68a95cu); eax = (u32)(M32(m_)); }
  /* 0057aac5 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057aac9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057aaca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057aacb mov edi, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); edi = (u32)(M32(m_)); }
  /* 0057aace test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057aad0 je 0x57ab0e */ if (ZF_) goto L_0057ab0e;
  /* 0057aad2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0057aad6 mov dword ptr [eax + esi], edi */ { const u32 m_ = (u32)(eax + esi); M32(m_) = (u32)(edi); }
  /* 0057aad9 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057aadc cmp al, 0x80 */ { u32 a_ = (eax & 0xffu), b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0057aade jae 0x57aae5 */ if (!CF_) goto L_0057aae5;
  /* 0057aae0 lea eax, [edi + 0x3c] */ eax = (u32)((u32)(edi + 0x3cu));
  /* 0057aae3 jmp 0x57aaf8 */ goto L_0057aaf8;
L_0057aae5:;
  /* 0057aae5 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057aae8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057aaea je 0x57aaf5 */ if (ZF_) goto L_0057aaf5;
  /* 0057aaec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057aaed call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57aaf2u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57aaedu); RETCHK(0x57aaf2u, 0x57aaedu); LOADALL;
  /* 0057aaf2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057aaf5:;
  /* 0057aaf5 lea eax, [edi + 0x34] */ eax = (u32)((u32)(edi + 0x34u));
L_0057aaf8:;
  /* 0057aaf8 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057aafa lea ecx, [esi + 0x34] */ ecx = (u32)((u32)(esi + 0x34u));
  /* 0057aafd mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0057ab00 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ab01 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057ab03 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057ab05 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057ab08 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0057ab0a mov eax, esi */ { eax = (u32)(esi); }
  /* 0057ab0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ab0d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ab0e:;
  /* 0057ab0e mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057ab12 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ab13 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ab14 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ab20(CPU *c) {
  NATIVE_HOOK(0x57ab20u) REGS; LOADALL;
L_0057ab20:;
  /* 0057ab20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057ab21 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0057ab25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ab26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057ab27 mov esi, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0057ab2a lea edi, [ebx + 0x2c] */ edi = (u32)((u32)(ebx + 0x2cu));
  /* 0057ab2d cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ab2f je 0x57ab73 */ if (ZF_) goto L_0057ab73;
L_0057ab31:;
  /* 0057ab31 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057ab34 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0057ab36 lea eax, [esi - 0xc] */ eax = (u32)((u32)(esi + 0xfffffff4u));
  /* 0057ab39 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057ab3b mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057ab3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ab3e mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057ab41 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057ab44 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057ab47 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057ab4a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057ab4c mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057ab4e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057ab50 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057ab53 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057ab56 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057ab5b mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057ab61 mov edx, dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057ab65 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057ab66 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57ab6cu; SAVEALL; call_ind(c, t_); RETCHK(0x57ab6cu, 0x57ab66u); LOADALL; }
  /* 0057ab6c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ab6f cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ab71 jne 0x57ab31 */ if (!ZF_) goto L_0057ab31;
L_0057ab73:;
  /* 0057ab73 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ab74 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057ab76 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ab77 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057ab78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ab80(CPU *c) {
  NATIVE_HOOK(0x57ab80u) REGS; LOADALL;
L_0057ab80:;
  /* 0057ab80 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057ab84 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057ab88 lea ecx, [eax + 0x20] */ ecx = (u32)((u32)(eax + 0x20u));
  /* 0057ab8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057ab8c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057ab8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ab8e mov eax, dword ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); eax = (u32)(M32(m_)); }
  /* 0057ab91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ab92 call 0x5812f0 */ esp -= 4; M32(esp) = 0x57ab97u; SAVEALL; F_005812f0(c); ABI_CHECK(0x5812f0u, 0x57ab92u); RETCHK(0x57ab97u, 0x57ab92u); LOADALL;
  /* 0057ab97 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ab9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057aba0(CPU *c) {
  NATIVE_HOOK(0x57aba0u) REGS; LOADALL;
L_0057aba0:;
  /* 0057aba0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057aba1 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0057aba5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057aba6 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0057abaa lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 0057abad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057abae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057abaf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057abb0 call 0x581440 */ esp -= 4; M32(esp) = 0x57abb5u; SAVEALL; F_00581440(c); ABI_CHECK(0x581440u, 0x57abb0u); RETCHK(0x57abb5u, 0x57abb0u); LOADALL;
  /* 0057abb5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057abb8 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 0057abbb neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057abbd sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057abbf and eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057abc1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057abc2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057abc3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057abd0(CPU *c) {
  NATIVE_HOOK(0x57abd0u) REGS; LOADALL;
L_0057abd0:;
  /* 0057abd0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057abd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057abd5 mov eax, dword ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); eax = (u32)(M32(m_)); }
  /* 0057abd8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057abd9 call 0x581610 */ esp -= 4; M32(esp) = 0x57abdeu; SAVEALL; F_00581610(c); ABI_CHECK(0x581610u, 0x57abd9u); RETCHK(0x57abdeu, 0x57abd9u); LOADALL;
  /* 0057abde add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057abe1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057abf0(CPU *c) {
  NATIVE_HOOK(0x57abf0u) REGS; LOADALL;
L_0057abf0:;
  /* 0057abf0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057abf4 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057abf8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057abf9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057abfa call 0x581660 */ esp -= 4; M32(esp) = 0x57abffu; SAVEALL; F_00581660(c); ABI_CHECK(0x581660u, 0x57abfau); RETCHK(0x57abffu, 0x57abfau); LOADALL;
  /* 0057abff add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ac02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ac10(CPU *c) {
  NATIVE_HOOK(0x57ac10u) REGS; LOADALL;
L_0057ac10:;
  /* 0057ac10 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057ac14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ac15 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057ac19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ac1a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ac1b call 0x5818e0 */ esp -= 4; M32(esp) = 0x57ac20u; SAVEALL; F_005818e0(c); ABI_CHECK(0x5818e0u, 0x57ac1bu); RETCHK(0x57ac20u, 0x57ac1bu); LOADALL;
  /* 0057ac20 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ac23 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057ac25 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057ac27 and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ac29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ac2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ac30(CPU *c) {
  NATIVE_HOOK(0x57ac30u) REGS; LOADALL;
L_0057ac30:;
  /* 0057ac30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057ac34 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ac35 call 0x581d10 */ esp -= 4; M32(esp) = 0x57ac3au; SAVEALL; F_00581d10(c); ABI_CHECK(0x581d10u, 0x57ac35u); RETCHK(0x57ac3au, 0x57ac35u); LOADALL;
  /* 0057ac3a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ac3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ac40(CPU *c) {
  NATIVE_HOOK(0x57ac40u) REGS; LOADALL;
L_0057ac40:;
  /* 0057ac40 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057ac44 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057ac48 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ac49 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057ac4a call 0x581d80 */ esp -= 4; M32(esp) = 0x57ac4fu; SAVEALL; F_00581d80(c); ABI_CHECK(0x581d80u, 0x57ac4au); RETCHK(0x57ac4fu, 0x57ac4au); LOADALL;
  /* 0057ac4f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ac52 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ac60(CPU *c) {
  NATIVE_HOOK(0x57ac60u) REGS; LOADALL;
L_0057ac60:;
  /* 0057ac60 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057ac64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ac65 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057ac69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ac6a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ac6b call 0x582010 */ esp -= 4; M32(esp) = 0x57ac70u; SAVEALL; F_00582010(c); ABI_CHECK(0x582010u, 0x57ac6bu); RETCHK(0x57ac70u, 0x57ac6bu); LOADALL;
  /* 0057ac70 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ac73 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057ac75 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057ac77 and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ac79 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ac7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ac80(CPU *c) {
  NATIVE_HOOK(0x57ac80u) REGS; LOADALL;
L_0057ac80:;
  /* 0057ac80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057ac84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ac85 call 0x582410 */ esp -= 4; M32(esp) = 0x57ac8au; SAVEALL; F_00582410(c); ABI_CHECK(0x582410u, 0x57ac85u); RETCHK(0x57ac8au, 0x57ac85u); LOADALL;
  /* 0057ac8a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ac8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ac90(CPU *c) {
  NATIVE_HOOK(0x57ac90u) REGS; LOADALL;
L_0057ac90:;
  /* 0057ac90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ac91 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0057ac95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ac96 call 0x57e7b0 */ esp -= 4; M32(esp) = 0x57ac9bu; SAVEALL; F_0057e7b0(c); ABI_CHECK(0x57e7b0u, 0x57ac96u); RETCHK(0x57ac9bu, 0x57ac96u); LOADALL;
  /* 0057ac9b mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057ac9f lea ecx, [eax + 0x10] */ ecx = (u32)((u32)(eax + 0x10u));
  /* 0057aca2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057aca3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057aca4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057aca5 mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 0057aca8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057aca9 call 0x5812f0 */ esp -= 4; M32(esp) = 0x57acaeu; SAVEALL; F_005812f0(c); ABI_CHECK(0x5812f0u, 0x57aca9u); RETCHK(0x57acaeu, 0x57aca9u); LOADALL;
  /* 0057acae add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057acb1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057acb2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057acc0(CPU *c) {
  NATIVE_HOOK(0x57acc0u) REGS; LOADALL;
L_0057acc0:;
  /* 0057acc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057acc1 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0057acc5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057acc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057acc7 call 0x57e7b0 */ esp -= 4; M32(esp) = 0x57acccu; SAVEALL; F_0057e7b0(c); ABI_CHECK(0x57e7b0u, 0x57acc7u); RETCHK(0x57acccu, 0x57acc7u); LOADALL;
  /* 0057accc mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0057acd0 lea ecx, [eax + 0x10] */ ecx = (u32)((u32)(eax + 0x10u));
  /* 0057acd3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057acd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057acd5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057acd6 call 0x581440 */ esp -= 4; M32(esp) = 0x57acdbu; SAVEALL; F_00581440(c); ABI_CHECK(0x581440u, 0x57acd6u); RETCHK(0x57acdbu, 0x57acd6u); LOADALL;
  /* 0057acdb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057acde mov dword ptr [esi + 0x78], eax */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(eax); }
  /* 0057ace1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057ace3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057ace5 and eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ace7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ace8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ace9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057acf0(CPU *c) {
  NATIVE_HOOK(0x57acf0u) REGS; LOADALL;
L_0057acf0:;
  /* 0057acf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057acf1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057acf5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057acf6 call 0x57e7b0 */ esp -= 4; M32(esp) = 0x57acfbu; SAVEALL; F_0057e7b0(c); ABI_CHECK(0x57e7b0u, 0x57acf6u); RETCHK(0x57acfbu, 0x57acf6u); LOADALL;
  /* 0057acfb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057acfc mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 0057acff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ad00 call 0x581610 */ esp -= 4; M32(esp) = 0x57ad05u; SAVEALL; F_00581610(c); ABI_CHECK(0x581610u, 0x57ad00u); RETCHK(0x57ad05u, 0x57ad00u); LOADALL;
  /* 0057ad05 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ad08 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ad09 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ad10(CPU *c) {
  NATIVE_HOOK(0x57ad10u) REGS; LOADALL;
L_0057ad10:;
  /* 0057ad10 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057ad14 mov ecx, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); ecx = (u32)(M32(m_)); }
  /* 0057ad1a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ad1b lea esi, [ecx + eax] */ esi = (u32)((u32)(ecx + eax));
  /* 0057ad1e mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057ad21 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ad23 je 0x57ad2e */ if (ZF_) goto L_0057ad2e;
  /* 0057ad25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ad26 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57ad2bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57ad26u); RETCHK(0x57ad2bu, 0x57ad26u); LOADALL;
  /* 0057ad2b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057ad2e:;
  /* 0057ad2e mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057ad32 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0057ad35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ad36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ad40(CPU *c) {
  NATIVE_HOOK(0x57ad40u) REGS; LOADALL;
L_0057ad40:;
  /* 0057ad40 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057ad44 mov ecx, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); ecx = (u32)(M32(m_)); }
  /* 0057ad4a add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057ad4c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057ad4e cmp dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ad51 je 0x57ad5e */ if (ZF_) goto L_0057ad5e;
  /* 0057ad53 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0057ad56 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0057ad59 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057ad5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ad5e:;
  /* 0057ad5e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ad60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ad70(CPU *c) {
  NATIVE_HOOK(0x57ad70u) REGS; LOADALL;
L_0057ad70:;
  /* 0057ad70 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057ad74 mov ecx, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); ecx = (u32)(M32(m_)); }
  /* 0057ad7a mov eax, dword ptr [ecx + eax + 0xc] */ { const u32 m_ = (u32)(ecx + eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057ad7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ad80(CPU *c) {
  NATIVE_HOOK(0x57ad80u) REGS; LOADALL;
L_0057ad80:;
  /* 0057ad80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057ad84 mov ecx, dword ptr [0x68a954] */ { const u32 m_ = (u32)(0x68a954u); ecx = (u32)(M32(m_)); }
  /* 0057ad8a mov eax, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); eax = (u32)(M32(m_)); }
  /* 0057ad8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ad90(CPU *c) {
  NATIVE_HOOK(0x57ad90u) REGS; LOADALL;
L_0057ad90:;
  /* 0057ad90 mov eax, dword ptr [0x68a958] */ { const u32 m_ = (u32)(0x68a958u); eax = (u32)(M32(m_)); }
  /* 0057ad95 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057ad96 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057ad97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ad98 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0057ad9c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057ad9d mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0057ada1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ada2 mov edx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0057ada5 push 0x57ae20 */ { u32 v_ = 0x57ae20u; esp -= 4; M32(esp) = v_; }
  /* 0057adaa lea ebp, [eax + edi] */ ebp = (u32)((u32)(eax + edi));
  /* 0057adad mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0057adb0 lea eax, [esi + 0x2c] */ eax = (u32)((u32)(esi + 0x2cu));
  /* 0057adb3 lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 0057adb6 mov dword ptr [edi + 0x24], eax */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0057adb9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057adba mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057adbc mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057adbe mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057adc1 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0057adc3 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0057adc6 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057adc7 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0057adca mov dword ptr [ebp], esi */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(esi); }
  /* 0057adcd call 0x577da0 */ esp -= 4; M32(esp) = 0x57add2u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x57adcdu); RETCHK(0x57add2u, 0x57adcdu); LOADALL;
  /* 0057add2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057add3 push 0x57ae60 */ { u32 v_ = 0x57ae60u; esp -= 4; M32(esp) = v_; }
  /* 0057add8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057add9 call 0x577e30 */ esp -= 4; M32(esp) = 0x57addeu; SAVEALL; F_00577e30(c); ABI_CHECK(0x577e30u, 0x57add9u); RETCHK(0x57addeu, 0x57add9u); LOADALL;
  /* 0057adde push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057addf push 0x57aeb0 */ { u32 v_ = 0x57aeb0u; esp -= 4; M32(esp) = v_; }
  /* 0057ade4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057ade5 call 0x577de0 */ esp -= 4; M32(esp) = 0x57adeau; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x57ade5u); RETCHK(0x57adeau, 0x57ade5u); LOADALL;
  /* 0057adea add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057aded test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057adef je 0x57ae05 */ if (ZF_) goto L_0057ae05;
  /* 0057adf1 lea eax, [ebx + 0x10] */ eax = (u32)((u32)(ebx + 0x10u));
  /* 0057adf4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057adf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057adf7 call 0x5ae7f0 */ esp -= 4; M32(esp) = 0x57adfcu; SAVEALL; F_005ae7f0(c); ABI_CHECK(0x5ae7f0u, 0x57adf7u); RETCHK(0x57adfcu, 0x57adf7u); LOADALL;
  /* 0057adfc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057adfd call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57ae02u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57adfdu); RETCHK(0x57ae02u, 0x57adfdu); LOADALL;
  /* 0057ae02 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057ae05:;
  /* 0057ae05 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057ae0b mov edx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); edx = (u32)(M32(m_)); }
  /* 0057ae11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ae12 mov eax, dword ptr [edx + ecx + 8] */ { const u32 m_ = (u32)(edx + ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057ae16 mov dword ptr [ebp + 4], eax */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057ae19 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057ae1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ae1c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057ae1d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057ae1e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ae20(CPU *c) {
  NATIVE_HOOK(0x57ae20u) REGS; LOADALL;
L_0057ae20:;
  /* 0057ae20 mov eax, dword ptr [0x68a954] */ { const u32 m_ = (u32)(0x68a954u); eax = (u32)(M32(m_)); }
  /* 0057ae25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ae26 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057ae2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057ae2b lea edi, [eax + esi] */ edi = (u32)((u32)(eax + esi));
  /* 0057ae2e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057ae31 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ae33 je 0x57ae49 */ if (ZF_) goto L_0057ae49;
  /* 0057ae35 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ae36 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57ae3bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57ae36u); RETCHK(0x57ae3bu, 0x57ae36u); LOADALL;
  /* 0057ae3b mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057ae3f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ae42 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 0057ae44 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057ae46 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ae47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ae48 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ae49:;
  /* 0057ae49 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057ae4d mov eax, esi */ { eax = (u32)(esi); }
  /* 0057ae4f mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 0057ae51 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ae52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ae53 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ae60(CPU *c) {
  NATIVE_HOOK(0x57ae60u) REGS; LOADALL;
L_0057ae60:;
  /* 0057ae60 mov eax, dword ptr [0x68a95c] */ { const u32 m_ = (u32)(0x68a95cu); eax = (u32)(M32(m_)); }
  /* 0057ae65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ae66 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057ae6a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057ae6b mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0057ae6f mov dword ptr [eax + esi], edi */ { const u32 m_ = (u32)(eax + esi); M32(m_) = (u32)(edi); }
  /* 0057ae72 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057ae75 cmp al, 0x80 */ { u32 a_ = (eax & 0xffu), b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0057ae77 jae 0x57ae7e */ if (!CF_) goto L_0057ae7e;
  /* 0057ae79 lea eax, [edi + 0x3c] */ eax = (u32)((u32)(edi + 0x3cu));
  /* 0057ae7c jmp 0x57ae91 */ goto L_0057ae91;
L_0057ae7e:;
  /* 0057ae7e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057ae81 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ae83 je 0x57ae8e */ if (ZF_) goto L_0057ae8e;
  /* 0057ae85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ae86 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57ae8bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57ae86u); RETCHK(0x57ae8bu, 0x57ae86u); LOADALL;
  /* 0057ae8b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057ae8e:;
  /* 0057ae8e lea eax, [edi + 0x34] */ eax = (u32)((u32)(edi + 0x34u));
L_0057ae91:;
  /* 0057ae91 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057ae93 lea ecx, [esi + 0x34] */ ecx = (u32)((u32)(esi + 0x34u));
  /* 0057ae96 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0057ae99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ae9a mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057ae9c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057ae9e mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057aea1 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0057aea3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057aea5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057aea6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057aeb0(CPU *c) {
  NATIVE_HOOK(0x57aeb0u) REGS; LOADALL;
L_0057aeb0:;
  /* 0057aeb0 mov eax, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); eax = (u32)(M32(m_)); }
  /* 0057aeb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057aeb6 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057aeba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057aebb lea edi, [eax + esi] */ edi = (u32)((u32)(eax + esi));
  /* 0057aebe mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057aec1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057aec3 je 0x57aeda */ if (ZF_) goto L_0057aeda;
  /* 0057aec5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057aec6 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57aecbu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57aec6u); RETCHK(0x57aecbu, 0x57aec6u); LOADALL;
  /* 0057aecb mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057aecf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057aed2 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0057aed5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057aed7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057aed8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057aed9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057aeda:;
  /* 0057aeda mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057aede mov eax, esi */ { eax = (u32)(esi); }
  /* 0057aee0 mov dword ptr [edi + 0xc], edx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0057aee3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057aee4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057aee5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057aef0(CPU *c) {
  NATIVE_HOOK(0x57aef0u) REGS; LOADALL;
L_0057aef0:;
  /* 0057aef0 mov eax, dword ptr [0x68a958] */ { const u32 m_ = (u32)(0x68a958u); eax = (u32)(M32(m_)); }
  /* 0057aef5 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057aef8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057aef9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057aefa mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 0057aefe lea ebx, [eax + esi] */ ebx = (u32)((u32)(eax + esi));
  /* 0057af01 mov eax, dword ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); eax = (u32)(M32(m_)); }
  /* 0057af04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057af06 je 0x57af68 */ if (ZF_) goto L_0057af68;
  /* 0057af08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057af09 mov edi, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); edi = (u32)(M32(m_)); }
  /* 0057af0c dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057af0d mov dword ptr [eax + 0x24], edi */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(edi); }
  /* 0057af10 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0057af12 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 0057af15 cmp eax, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057af18 jne 0x57af1f */ if (!ZF_) goto L_0057af1f;
  /* 0057af1a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057af1c mov dword ptr [ecx + 0x28], edx */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(edx); }
L_0057af1f:;
  /* 0057af1f mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0057af22 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057af24 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0057af28 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057af2a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0057af2c mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0057af2f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057af30 push 0x57af90 */ { u32 v_ = 0x57af90u; esp -= 4; M32(esp) = v_; }
  /* 0057af35 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057af36 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057af39 call 0x577da0 */ esp -= 4; M32(esp) = 0x57af3eu; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x57af39u); RETCHK(0x57af3eu, 0x57af39u); LOADALL;
  /* 0057af3e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057af3f push 0x57b030 */ { u32 v_ = 0x57b030u; esp -= 4; M32(esp) = v_; }
  /* 0057af44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057af45 call 0x577e30 */ esp -= 4; M32(esp) = 0x57af4au; SAVEALL; F_00577e30(c); ABI_CHECK(0x577e30u, 0x57af45u); RETCHK(0x57af4au, 0x57af45u); LOADALL;
  /* 0057af4a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057af4b push 0x57b0c0 */ { u32 v_ = 0x57b0c0u; esp -= 4; M32(esp) = v_; }
  /* 0057af50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057af51 call 0x577de0 */ esp -= 4; M32(esp) = 0x57af56u; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x57af51u); RETCHK(0x57af56u, 0x57af51u); LOADALL;
  /* 0057af56 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057af59 mov eax, edi */ { eax = (u32)(edi); }
  /* 0057af5b mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
  /* 0057af61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057af62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057af63 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057af64 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057af67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057af68:;
  /* 0057af68 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057af6a mov dword ptr [esp + 0xc], 2 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x2u); }
  /* 0057af72 call 0x619d80 */ esp -= 4; M32(esp) = 0x57af77u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57af72u); RETCHK(0x57af77u, 0x57af72u); LOADALL;
  /* 0057af77 lea edx, [esp + 0xc] */ edx = (u32)((u32)(esp + 0xcu));
  /* 0057af7b mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0057af7f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057af80 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57af85u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57af80u); RETCHK(0x57af85u, 0x57af80u); LOADALL;
  /* 0057af85 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057af88 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057af8a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057af8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057af8c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057af8f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057af90(CPU *c) {
  NATIVE_HOOK(0x57af90u) REGS; LOADALL;
L_0057af90:;
  /* 0057af90 mov eax, dword ptr [0x68a954] */ { const u32 m_ = (u32)(0x68a954u); eax = (u32)(M32(m_)); }
  /* 0057af95 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057af96 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0057af9a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057af9b lea ebp, [eax + ebx] */ ebp = (u32)((u32)(eax + ebx));
  /* 0057af9e test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057afa0 je 0x57b026 */ if (ZF_) goto L_0057b026;
  /* 0057afa6 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057afaa mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 0057afad cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057afaf jne 0x57b026 */ if (!ZF_) goto L_0057b026;
  /* 0057afb1 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057afb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057afb6 je 0x57afc1 */ if (ZF_) goto L_0057afc1;
  /* 0057afb8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057afb9 call 0x5beff0 */ esp -= 4; M32(esp) = 0x57afbeu; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57afb9u); RETCHK(0x57afbeu, 0x57afb9u); LOADALL;
  /* 0057afbe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057afc1:;
  /* 0057afc1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057afc2 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 0057afc5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057afc6 lea edi, [ebx + 0x64] */ edi = (u32)((u32)(ebx + 0x64u));
  /* 0057afc9 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057afcb je 0x57b01d */ if (ZF_) goto L_0057b01d;
L_0057afcd:;
  /* 0057afcd mov ecx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0057afd0 lea eax, [esi - 0xc] */ eax = (u32)((u32)(esi + 0xfffffff4u));
  /* 0057afd3 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057afd5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057afd7 je 0x57b019 */ if (ZF_) goto L_0057b019;
  /* 0057afd9 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057afdc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057afde je 0x57b019 */ if (ZF_) goto L_0057b019;
  /* 0057afe0 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057afe3 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057afe6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057afe7 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0057afe9 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057afec mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057afef mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057aff2 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057aff5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057aff7 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0057aff9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057affb mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057affe mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057b001 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b006 mov edx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); edx = (u32)(M32(m_)); }
  /* 0057b00c mov ecx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ecx = (u32)(M32(m_)); }
  /* 0057b00f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b010 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b016u; SAVEALL; call_ind(c, t_); RETCHK(0x57b016u, 0x57b010u); LOADALL; }
  /* 0057b016 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b019:;
  /* 0057b019 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b01b jne 0x57afcd */ if (!ZF_) goto L_0057afcd;
L_0057b01d:;
  /* 0057b01d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b01e mov dword ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(0x0u); }
  /* 0057b025 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0057b026:;
  /* 0057b026 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057b028 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057b029 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b02a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b030(CPU *c) {
  NATIVE_HOOK(0x57b030u) REGS; LOADALL;
L_0057b030:;
  /* 0057b030 mov eax, dword ptr [0x68a95c] */ { const u32 m_ = (u32)(0x68a95cu); eax = (u32)(M32(m_)); }
  /* 0057b035 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b036 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0057b03a add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057b03c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b03e je 0x57b0b0 */ if (ZF_) goto L_0057b0b0;
  /* 0057b040 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057b044 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057b046 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b048 jne 0x57b0b0 */ if (!ZF_) goto L_0057b0b0;
  /* 0057b04a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b04b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b04c lea edi, [ebx + 0x2c] */ edi = (u32)((u32)(ebx + 0x2cu));
  /* 0057b04f mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 0057b055 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0057b057 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b059 je 0x57b09d */ if (ZF_) goto L_0057b09d;
L_0057b05b:;
  /* 0057b05b mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057b05e mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0057b060 lea eax, [esi - 0xc] */ eax = (u32)((u32)(esi + 0xfffffff4u));
  /* 0057b063 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057b065 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0057b067 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b068 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057b06b mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057b06e mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057b071 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057b074 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057b076 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0057b078 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057b07a mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057b07d mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057b080 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b085 mov edx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); edx = (u32)(M32(m_)); }
  /* 0057b08b mov ecx, dword ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057b08f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b090 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b096u; SAVEALL; call_ind(c, t_); RETCHK(0x57b096u, 0x57b090u); LOADALL; }
  /* 0057b096 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b099 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b09b jne 0x57b05b */ if (!ZF_) goto L_0057b05b;
L_0057b09d:;
  /* 0057b09d mov edx, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); edx = (u32)(M32(m_)); }
  /* 0057b0a0 mov eax, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (u32)(M32(m_)); }
  /* 0057b0a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b0a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b0a5 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0057b0a7 mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0057b0aa mov edx, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); edx = (u32)(M32(m_)); }
  /* 0057b0ad mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
L_0057b0b0:;
  /* 0057b0b0 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057b0b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b0b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b0c0(CPU *c) {
  NATIVE_HOOK(0x57b0c0u) REGS; LOADALL;
L_0057b0c0:;
  /* 0057b0c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b0c4 mov ecx, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); ecx = (u32)(M32(m_)); }
  /* 0057b0ca add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057b0cc xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057b0ce cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b0d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b0d1 je 0x57b0eb */ if (ZF_) goto L_0057b0eb;
  /* 0057b0d3 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0057b0d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b0d8 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 0057b0db cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b0dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b0de jne 0x57b0eb */ if (!ZF_) goto L_0057b0eb;
  /* 0057b0e0 cmp dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b0e3 je 0x57b0eb */ if (ZF_) goto L_0057b0eb;
  /* 0057b0e5 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 0057b0e8 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
L_0057b0eb:;
  /* 0057b0eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b0ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b0f0(CPU *c) {
  NATIVE_HOOK(0x57b0f0u) REGS; LOADALL;
L_0057b0f0:;
  /* 0057b0f0 mov eax, dword ptr [0x68a950] */ { const u32 m_ = (u32)(0x68a950u); eax = (u32)(M32(m_)); }
  /* 0057b0f5 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057b0f9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b0fa push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057b0fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b0fc mov esi, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); esi = (u32)(M32(m_)); }
  /* 0057b0ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b100 mov edi, dword ptr [eax + ecx + 8] */ { const u32 m_ = (u32)(eax + ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0057b104 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b106 je 0x57b127 */ if (ZF_) goto L_0057b127;
  /* 0057b108 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 0057b10c mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
L_0057b110:;
  /* 0057b110 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057b112 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b113 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b114 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x57b116u; SAVEALL; call_ind(c, t_); RETCHK(0x57b116u, 0x57b114u); LOADALL; }
  /* 0057b116 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b119 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b11b je 0x57b12e */ if (ZF_) goto L_0057b12e;
  /* 0057b11d add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0057b120 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057b121 jne 0x57b110 */ if (!ZF_) goto L_0057b110;
  /* 0057b123 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
L_0057b127:;
  /* 0057b127 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b128 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b129 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057b12a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0057b12c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b12d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b12e:;
  /* 0057b12e mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057b132 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b133 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b134 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057b135 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b136 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b140(CPU *c) {
  NATIVE_HOOK(0x57b140u) REGS; LOADALL;
L_0057b140:;
  /* 0057b140 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b144 mov ecx, dword ptr [0x68a958] */ { const u32 m_ = (u32)(0x68a958u); ecx = (u32)(M32(m_)); }
  /* 0057b14a mov eax, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); eax = (u32)(M32(m_)); }
  /* 0057b14d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b150(CPU *c) {
  NATIVE_HOOK(0x57b150u) REGS; LOADALL;
L_0057b150:;
  /* 0057b150 mov eax, dword ptr [0x68a95c] */ { const u32 m_ = (u32)(0x68a95cu); eax = (u32)(M32(m_)); }
  /* 0057b155 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b156 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0057b15a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b15b mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0057b15f mov dword ptr [eax + esi], edi */ { const u32 m_ = (u32)(eax + esi); M32(m_) = (u32)(edi); }
  /* 0057b162 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057b165 cmp al, 0x80 */ { u32 a_ = (eax & 0xffu), b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0057b167 jae 0x57b16e */ if (!CF_) goto L_0057b16e;
  /* 0057b169 lea eax, [edi + 0x3c] */ eax = (u32)((u32)(edi + 0x3cu));
  /* 0057b16c jmp 0x57b181 */ goto L_0057b181;
L_0057b16e:;
  /* 0057b16e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b171 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b173 je 0x57b17e */ if (ZF_) goto L_0057b17e;
  /* 0057b175 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b176 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x57b17bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x57b176u); RETCHK(0x57b17bu, 0x57b176u); LOADALL;
  /* 0057b17b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b17e:;
  /* 0057b17e lea eax, [edi + 0x34] */ eax = (u32)((u32)(edi + 0x34u));
L_0057b181:;
  /* 0057b181 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057b183 lea ecx, [esi + 0x34] */ ecx = (u32)((u32)(esi + 0x34u));
  /* 0057b186 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0057b189 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057b18b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057b18d mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057b190 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0057b192 mov eax, edi */ { eax = (u32)(edi); }
  /* 0057b194 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b195 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b196 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b1a0(CPU *c) {
  NATIVE_HOOK(0x57b1a0u) REGS; LOADALL;
L_0057b1a0:;
  /* 0057b1a0 mov eax, dword ptr [0x68a95c] */ { const u32 m_ = (u32)(0x68a95cu); eax = (u32)(M32(m_)); }
  /* 0057b1a5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b1a6 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0057b1aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b1ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b1ac lea edi, [ebx + 0x2c] */ edi = (u32)((u32)(ebx + 0x2cu));
  /* 0057b1af mov dword ptr [eax + ebx], 0 */ { const u32 m_ = (u32)(eax + ebx); M32(m_) = (u32)(0x0u); }
  /* 0057b1b6 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0057b1b8 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b1ba je 0x57b1fe */ if (ZF_) goto L_0057b1fe;
L_0057b1bc:;
  /* 0057b1bc mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057b1bf mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0057b1c1 lea eax, [esi - 0xc] */ eax = (u32)((u32)(esi + 0xfffffff4u));
  /* 0057b1c4 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0057b1c6 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057b1c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b1c9 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057b1cc mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057b1cf mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057b1d2 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057b1d5 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0057b1d7 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057b1d9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057b1db mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057b1de mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057b1e1 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b1e6 mov ecx, dword ptr [0x68a948] */ { const u32 m_ = (u32)(0x68a948u); ecx = (u32)(M32(m_)); }
  /* 0057b1ec mov edx, dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057b1f0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b1f1 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b1f7u; SAVEALL; call_ind(c, t_); RETCHK(0x57b1f7u, 0x57b1f1u); LOADALL; }
  /* 0057b1f7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b1fa cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b1fc jne 0x57b1bc */ if (!ZF_) goto L_0057b1bc;
L_0057b1fe:;
  /* 0057b1fe mov eax, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); eax = (u32)(M32(m_)); }
  /* 0057b201 mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0057b204 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b205 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b206 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0057b208 mov edx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); edx = (u32)(M32(m_)); }
  /* 0057b20b mov eax, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); eax = (u32)(M32(m_)); }
  /* 0057b20e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b20f mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057b212 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b216 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b220(CPU *c) {
  NATIVE_HOOK(0x57b220u) REGS; LOADALL;
L_0057b220:;
  /* 0057b220 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b224 mov ecx, dword ptr [0x68a95c] */ { const u32 m_ = (u32)(0x68a95cu); ecx = (u32)(M32(m_)); }
  /* 0057b22a mov eax, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); eax = (u32)(M32(m_)); }
  /* 0057b22d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b230(CPU *c) {
  NATIVE_HOOK(0x57b230u) REGS; LOADALL;
L_0057b230:;
  /* 0057b230 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b231 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057b235 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057b237 push 0x68a988 */ { u32 v_ = 0x68a988u; esp -= 4; M32(esp) = v_; }
  /* 0057b23c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b23d call 0x5b3a40 */ esp -= 4; M32(esp) = 0x57b242u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x57b23du); RETCHK(0x57b242u, 0x57b23du); LOADALL;
  /* 0057b242 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b245 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b247 jne 0x57b24b */ if (!ZF_) goto L_0057b24b;
  /* 0057b249 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b24a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b24b:;
  /* 0057b24b cmp dword ptr [esp + 0xc], 8 */ { const u32 m_ = (u32)(esp + 0xcu); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b250 jne 0x57b268 */ if (!ZF_) goto L_0057b268;
  /* 0057b252 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057b254 push 0x68a960 */ { u32 v_ = 0x68a960u; esp -= 4; M32(esp) = v_; }
  /* 0057b259 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b25a call 0x5b3a40 */ esp -= 4; M32(esp) = 0x57b25fu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x57b25au); RETCHK(0x57b25fu, 0x57b25au); LOADALL;
  /* 0057b25f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b262 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b264 jne 0x57b268 */ if (!ZF_) goto L_0057b268;
  /* 0057b266 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b267 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b268:;
  /* 0057b268 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057b26a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b26b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b270(CPU *c) {
  NATIVE_HOOK(0x57b270u) REGS; LOADALL;
L_0057b270:;
  /* 0057b270 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b271 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057b275 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b276 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 0057b27a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057b27c mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057b27f add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057b282 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b283 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b284 call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57b289u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x57b284u); RETCHK(0x57b289u, 0x57b284u); LOADALL;
  /* 0057b289 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b28c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b28e jne 0x57b293 */ if (!ZF_) goto L_0057b293;
  /* 0057b290 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b291 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b292 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b293:;
  /* 0057b293 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057b296 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057b298 add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057b29b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b29c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b29d call 0x5b3a20 */ esp -= 4; M32(esp) = 0x57b2a2u; SAVEALL; F_005b3a20(c); ABI_CHECK(0x5b3a20u, 0x57b29du); RETCHK(0x57b2a2u, 0x57b29du); LOADALL;
  /* 0057b2a2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b2a5 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057b2a7 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057b2a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b2aa and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b2ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b2ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b2b0(CPU *c) {
  NATIVE_HOOK(0x57b2b0u) REGS; LOADALL;
L_0057b2b0:;
  /* 0057b2b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b2b4 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057b2b7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b2b9 je 0x57b2c8 */ if (ZF_) goto L_0057b2c8;
  /* 0057b2bb mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0057b2be test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b2c0 je 0x57b2c8 */ if (ZF_) goto L_0057b2c8;
  /* 0057b2c2 mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 0057b2c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b2c8:;
  /* 0057b2c8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b2ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b2d0(CPU *c) {
  NATIVE_HOOK(0x57b2d0u) REGS; LOADALL;
L_0057b2d0:;
  /* 0057b2d0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057b2d4 mov ecx, dword ptr [0x6738b4] */ { const u32 m_ = (u32)(0x6738b4u); ecx = (u32)(M32(m_)); }
  /* 0057b2da mov edx, dword ptr [0x6738b0] */ { const u32 m_ = (u32)(0x6738b0u); edx = (u32)(M32(m_)); }
  /* 0057b2e0 push 0x40007 */ { u32 v_ = 0x40007u; esp -= 4; M32(esp) = v_; }
  /* 0057b2e5 push 0x68a964 */ { u32 v_ = 0x68a964u; esp -= 4; M32(esp) = v_; }
  /* 0057b2ea mov dword ptr [0x68a98c], eax */ { const u32 m_ = (u32)(0x68a98cu); M32(m_) = (u32)(eax); }
  /* 0057b2ef mov eax, dword ptr [0x67388c] */ { const u32 m_ = (u32)(0x67388cu); eax = (u32)(M32(m_)); }
  /* 0057b2f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b2f5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0057b2f7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b2f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b2f9 call 0x5bded0 */ esp -= 4; M32(esp) = 0x57b2feu; SAVEALL; F_005bded0(c); ABI_CHECK(0x5bded0u, 0x57b2f9u); RETCHK(0x57b2feu, 0x57b2f9u); LOADALL;
  /* 0057b2fe mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057b304 mov edx, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); edx = (u32)(M32(m_)); }
  /* 0057b30a add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b30d mov dword ptr [ecx + edx], eax */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(eax); }
  /* 0057b310 mov eax, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); eax = (u32)(M32(m_)); }
  /* 0057b315 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057b31b cmp dword ptr [ecx + eax], 0 */ { const u32 m_ = (u32)(ecx + eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b31f jne 0x57b324 */ if (!ZF_) goto L_0057b324;
  /* 0057b321 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b323 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b324:;
  /* 0057b324 mov eax, dword ptr [0x68a990] */ { const u32 m_ = (u32)(0x68a990u); eax = (u32)(M32(m_)); }
  /* 0057b329 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057b32a mov dword ptr [0x68a990], eax */ { const u32 m_ = (u32)(0x68a990u); M32(m_) = (u32)(eax); }
  /* 0057b32f mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b333 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b340(CPU *c) {
  NATIVE_HOOK(0x57b340u) REGS; LOADALL;
L_0057b340:;
  /* 0057b340 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b345 mov ecx, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); ecx = (u32)(M32(m_)); }
  /* 0057b34b mov eax, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); eax = (u32)(M32(m_)); }
  /* 0057b34e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b350 je 0x57b36d */ if (ZF_) goto L_0057b36d;
  /* 0057b352 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b353 call 0x5bdee0 */ esp -= 4; M32(esp) = 0x57b358u; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x57b353u); RETCHK(0x57b358u, 0x57b353u); LOADALL;
  /* 0057b358 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057b35e mov eax, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); eax = (u32)(M32(m_)); }
  /* 0057b363 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b366 mov dword ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); M32(m_) = (u32)(0x0u); }
L_0057b36d:;
  /* 0057b36d mov eax, dword ptr [0x68a990] */ { const u32 m_ = (u32)(0x68a990u); eax = (u32)(M32(m_)); }
  /* 0057b372 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057b373 mov dword ptr [0x68a990], eax */ { const u32 m_ = (u32)(0x68a990u); M32(m_) = (u32)(eax); }
  /* 0057b378 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b37c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b380(CPU *c) {
  NATIVE_HOOK(0x57b380u) REGS; LOADALL;
L_0057b380:;
  /* 0057b380 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b381 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b386 mov ecx, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); ecx = (u32)(M32(m_)); }
  /* 0057b38c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b38d push 0x30007 */ { u32 v_ = 0x30007u; esp -= 4; M32(esp) = v_; }
  /* 0057b392 mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057b395 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b396 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b39cu; SAVEALL; call_ind(c, t_); RETCHK(0x57b39cu, 0x57b396u); LOADALL; }
  /* 0057b39c mov esi, eax */ { esi = (u32)(eax); }
  /* 0057b39e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b3a1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b3a3 jne 0x57b3a8 */ if (!ZF_) goto L_0057b3a8;
  /* 0057b3a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b3a6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057b3a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b3a8:;
  /* 0057b3a8 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0057b3aa mov word ptr [esi + 0x18], 1 */ { const u32 m_ = (u32)(esi + 0x18u); M16(m_) = (u16)(0x1u); }
  /* 0057b3b0 mov byte ptr [esp + 4], al */ { const u32 m_ = (u32)(esp + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057b3b4 mov byte ptr [esp + 5], al */ { const u32 m_ = (u32)(esp + 0x5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057b3b8 mov byte ptr [esp + 6], al */ { const u32 m_ = (u32)(esp + 0x6u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057b3bc mov byte ptr [esp + 7], al */ { const u32 m_ = (u32)(esp + 0x7u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057b3c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b3c4 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0057b3ca mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057b3cd mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0057b3d4 mov edx, dword ptr [0x6738a4] */ { const u32 m_ = (u32)(0x6738a4u); edx = (u32)(M32(m_)); }
  /* 0057b3da lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 0057b3dd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b3de push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b3e3 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057b3e5 mov eax, dword ptr [0x6738a8] */ { const u32 m_ = (u32)(0x6738a8u); eax = (u32)(M32(m_)); }
  /* 0057b3ea mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057b3ed mov edx, dword ptr [0x6738ac] */ { const u32 m_ = (u32)(0x6738acu); edx = (u32)(M32(m_)); }
  /* 0057b3f3 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0057b3f6 call 0x5bf750 */ esp -= 4; M32(esp) = 0x57b3fbu; SAVEALL; F_005bf750(c); ABI_CHECK(0x5bf750u, 0x57b3f6u); RETCHK(0x57b3fbu, 0x57b3f6u); LOADALL;
  /* 0057b3fb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b3fe mov eax, esi */ { eax = (u32)(esi); }
  /* 0057b400 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b401 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057b402 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b410(CPU *c) {
  NATIVE_HOOK(0x57b410u) REGS; LOADALL;
L_0057b410:;
  /* 0057b410 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b411 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057b415 mov ax, word ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057b419 cmp ax, 1 */ { u32 a_ = (eax & 0xffffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057b41d jne 0x57b462 */ if (!ZF_) goto L_0057b462;
  /* 0057b41f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b420 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b425 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57b42au; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57b425u); RETCHK(0x57b42au, 0x57b425u); LOADALL;
  /* 0057b42a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057b42c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b42f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b431 je 0x57b43c */ if (ZF_) goto L_0057b43c;
  /* 0057b433 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b434 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x57b439u; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x57b434u); RETCHK(0x57b439u, 0x57b434u); LOADALL;
  /* 0057b439 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b43c:;
  /* 0057b43c mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0057b442 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b447 mov ecx, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); ecx = (u32)(M32(m_)); }
  /* 0057b44d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b44e mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057b451 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b452 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b458u; SAVEALL; call_ind(c, t_); RETCHK(0x57b458u, 0x57b452u); LOADALL; }
  /* 0057b458 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b45b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057b460 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b461 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b462:;
  /* 0057b462 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057b463 mov word ptr [esi + 0x18], ax */ { const u32 m_ = (u32)(esi + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057b467 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057b46c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b46d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b470(CPU *c) {
  NATIVE_HOOK(0x57b470u) REGS; LOADALL;
L_0057b470:;
  /* 0057b470 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b471 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b472 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0057b476 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b478 je 0x57b47d */ if (ZF_) goto L_0057b47d;
  /* 0057b47a inc dword ptr [edi + 0x54] */ { const u32 m_ = (u32)(edi + 0x54u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0057b47d:;
  /* 0057b47d mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0057b481 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057b483 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b485 je 0x57b490 */ if (ZF_) goto L_0057b490;
  /* 0057b487 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b488 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x57b48du; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x57b488u); RETCHK(0x57b48du, 0x57b488u); LOADALL;
  /* 0057b48d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b490:;
  /* 0057b490 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0057b492 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057b494 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b495 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b496 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b4a0(CPU *c) {
  NATIVE_HOOK(0x57b4a0u) REGS; LOADALL;
L_0057b4a0:;
  /* 0057b4a0 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057b4a4 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057b4a8 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057b4ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b4ad mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057b4b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b4b2 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057b4b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b4b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b4b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b4b9 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b4be call 0x5bf540 */ esp -= 4; M32(esp) = 0x57b4c3u; SAVEALL; F_005bf540(c); ABI_CHECK(0x5bf540u, 0x57b4beu); RETCHK(0x57b4c3u, 0x57b4beu); LOADALL;
  /* 0057b4c3 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b4c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b4d0(CPU *c) {
  NATIVE_HOOK(0x57b4d0u) REGS; LOADALL;
L_0057b4d0:;
  /* 0057b4d0 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057b4d4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057b4d8 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057b4dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b4dd mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057b4e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b4e2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b4e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b4e4 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b4e9 call 0x5bf820 */ esp -= 4; M32(esp) = 0x57b4eeu; SAVEALL; F_005bf820(c); ABI_CHECK(0x5bf820u, 0x57b4e9u); RETCHK(0x57b4eeu, 0x57b4e9u); LOADALL;
  /* 0057b4ee add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b4f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b500(CPU *c) {
  NATIVE_HOOK(0x57b500u) REGS; LOADALL;
L_0057b500:;
  /* 0057b500 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b503 lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 0057b507 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 0057b50b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b50c mov ebx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ebx = (u32)(M32(m_)); }
  /* 0057b510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b511 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b512 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b513 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b514 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0057b516 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b517 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57b51cu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x57b517u); RETCHK(0x57b51cu, 0x57b517u); LOADALL;
  /* 0057b51c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b51f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b521 je 0x57b78e */ if (ZF_) goto L_0057b78e;
  /* 0057b527 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057b52b cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b530 jb 0x57b76b */ if (CF_) goto L_0057b76b;
  /* 0057b536 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b53b ja 0x57b76b */ if (!(CF_|ZF_)) goto L_0057b76b;
  /* 0057b541 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0057b545 mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 0057b54a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b54c lea edi, [esp + 0x1c] */ edi = (u32)((u32)(esp + 0x1cu));
  /* 0057b550 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0057b552 lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 0057b556 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b557 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b558 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b559 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x57b55eu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x57b559u); RETCHK(0x57b55eu, 0x57b559u); LOADALL;
  /* 0057b55e mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0057b562 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b565 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b567 jne 0x57b78e */ if (!ZF_) goto L_0057b78e;
  /* 0057b56d mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b572 mov ecx, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); ecx = (u32)(M32(m_)); }
  /* 0057b578 push 0x30007 */ { u32 v_ = 0x30007u; esp -= 4; M32(esp) = v_; }
  /* 0057b57d mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057b580 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b581 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b587u; SAVEALL; call_ind(c, t_); RETCHK(0x57b587u, 0x57b581u); LOADALL; }
  /* 0057b587 mov esi, eax */ { esi = (u32)(eax); }
  /* 0057b589 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b58c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b58e je 0x57b78e */ if (ZF_) goto L_0057b78e;
  /* 0057b594 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0057b596 lea edi, [esi + 0xc] */ edi = (u32)((u32)(esi + 0xcu));
  /* 0057b599 mov byte ptr [esp + 0x3c], al */ { const u32 m_ = (u32)(esp + 0x3cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057b59d mov byte ptr [esp + 0x3d], al */ { const u32 m_ = (u32)(esp + 0x3du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057b5a1 mov byte ptr [esp + 0x3e], al */ { const u32 m_ = (u32)(esp + 0x3eu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057b5a5 mov byte ptr [esp + 0x3f], al */ { const u32 m_ = (u32)(esp + 0x3fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057b5a9 mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0057b5ad mov word ptr [esi + 0x18], 1 */ { const u32 m_ = (u32)(esi + 0x18u); M16(m_) = (u16)(0x1u); }
  /* 0057b5b3 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057b5b6 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0057b5bc mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0057b5c3 mov edx, dword ptr [0x6738a4] */ { const u32 m_ = (u32)(0x6738a4u); edx = (u32)(M32(m_)); }
  /* 0057b5c9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0057b5cb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b5cc push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b5d1 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057b5d3 mov eax, dword ptr [0x6738a8] */ { const u32 m_ = (u32)(0x6738a8u); eax = (u32)(M32(m_)); }
  /* 0057b5d8 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057b5db mov edx, dword ptr [0x6738ac] */ { const u32 m_ = (u32)(0x6738acu); edx = (u32)(M32(m_)); }
  /* 0057b5e1 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0057b5e4 call 0x5bf750 */ esp -= 4; M32(esp) = 0x57b5e9u; SAVEALL; F_005bf750(c); ABI_CHECK(0x5bf750u, 0x57b5e4u); RETCHK(0x57b5e9u, 0x57b5e4u); LOADALL;
  /* 0057b5e9 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 0057b5ed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b5f0 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057b5f3 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0057b5f7 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 0057b5f9 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 0057b5fd mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057b600 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 0057b604 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0057b607 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0057b60d mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 0057b611 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b613 je 0x57b6a7 */ if (ZF_) goto L_0057b6a7;
  /* 0057b619 lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 0057b61d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b61e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057b620 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0057b622 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b623 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57b628u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x57b623u); RETCHK(0x57b628u, 0x57b623u); LOADALL;
  /* 0057b628 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b62b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b62d jne 0x57b682 */ if (!ZF_) goto L_0057b682;
  /* 0057b62f mov ax, word ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057b633 cmp ax, 1 */ { u32 a_ = (eax & 0xffffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057b637 jne 0x57b79e */ if (!ZF_) goto L_0057b79e;
  /* 0057b63d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b63e push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b643 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57b648u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57b643u); RETCHK(0x57b648u, 0x57b643u); LOADALL;
  /* 0057b648 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057b64a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b64d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b64f je 0x57b65a */ if (ZF_) goto L_0057b65a;
  /* 0057b651 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b652 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x57b657u; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x57b652u); RETCHK(0x57b657u, 0x57b652u); LOADALL;
  /* 0057b657 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b65a:;
  /* 0057b65a mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0057b660 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b665 mov edx, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); edx = (u32)(M32(m_)); }
  /* 0057b66b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b66c mov ecx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ecx = (u32)(M32(m_)); }
  /* 0057b66f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b670 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b676u; SAVEALL; call_ind(c, t_); RETCHK(0x57b676u, 0x57b670u); LOADALL; }
  /* 0057b676 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b679 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b67b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b67c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b67d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b67e add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b681 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b682:;
  /* 0057b682 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057b686 cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b68b jb 0x57b725 */ if (CF_) goto L_0057b725;
  /* 0057b691 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b696 ja 0x57b725 */ if (!(CF_|ZF_)) goto L_0057b725;
  /* 0057b69c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b69d call 0x5b4590 */ esp -= 4; M32(esp) = 0x57b6a2u; SAVEALL; F_005b4590(c); ABI_CHECK(0x5b4590u, 0x57b69du); RETCHK(0x57b6a2u, 0x57b69du); LOADALL;
  /* 0057b6a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b6a5 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
L_0057b6a7:;
  /* 0057b6a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b6a8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b6a9 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b6ae mov dword ptr [0x68a988], 0 */ { const u32 m_ = (u32)(0x68a988u); M32(m_) = (u32)(0x0u); }
  /* 0057b6b8 mov dword ptr [0x68a960], 0 */ { const u32 m_ = (u32)(0x68a960u); M32(m_) = (u32)(0x0u); }
  /* 0057b6c2 call 0x5bf8c0 */ esp -= 4; M32(esp) = 0x57b6c7u; SAVEALL; F_005bf8c0(c); ABI_CHECK(0x5bf8c0u, 0x57b6c2u); RETCHK(0x57b6c7u, 0x57b6c2u); LOADALL;
  /* 0057b6c7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b6ca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b6cc jne 0x57b7ac */ if (!ZF_) goto L_0057b7ac;
  /* 0057b6d2 mov ax, word ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057b6d6 cmp ax, 1 */ { u32 a_ = (eax & 0xffffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057b6da jne 0x57b79e */ if (!ZF_) goto L_0057b79e;
  /* 0057b6e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b6e1 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b6e6 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57b6ebu; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57b6e6u); RETCHK(0x57b6ebu, 0x57b6e6u); LOADALL;
  /* 0057b6eb mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057b6ed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b6f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b6f2 je 0x57b6fd */ if (ZF_) goto L_0057b6fd;
  /* 0057b6f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b6f5 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x57b6fau; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x57b6f5u); RETCHK(0x57b6fau, 0x57b6f5u); LOADALL;
  /* 0057b6fa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b6fd:;
  /* 0057b6fd mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0057b703 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b708 mov ecx, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); ecx = (u32)(M32(m_)); }
  /* 0057b70e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b70f mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057b712 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b713 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b719u; SAVEALL; call_ind(c, t_); RETCHK(0x57b719u, 0x57b713u); LOADALL; }
  /* 0057b719 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b71c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b71e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b71f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b720 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b721 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b724 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b725:;
  /* 0057b725 mov ax, word ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057b729 cmp ax, 1 */ { u32 a_ = (eax & 0xffffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057b72d jne 0x57b797 */ if (!ZF_) goto L_0057b797;
  /* 0057b72f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b730 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b735 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57b73au; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57b735u); RETCHK(0x57b73au, 0x57b735u); LOADALL;
  /* 0057b73a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057b73c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b73f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b741 je 0x57b74c */ if (ZF_) goto L_0057b74c;
  /* 0057b743 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b744 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x57b749u; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x57b744u); RETCHK(0x57b749u, 0x57b744u); LOADALL;
  /* 0057b749 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b74c:;
  /* 0057b74c mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0057b752 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057b757 mov edx, dword ptr [0x68a98c] */ { const u32 m_ = (u32)(0x68a98cu); edx = (u32)(M32(m_)); }
  /* 0057b75d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b75e mov ecx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ecx = (u32)(M32(m_)); }
  /* 0057b761 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b762 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57b768u; SAVEALL; call_ind(c, t_); RETCHK(0x57b768u, 0x57b762u); LOADALL; }
  /* 0057b768 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b76b:;
  /* 0057b76b push 0x80000004 */ { u32 v_ = 0x80000004u; esp -= 4; M32(esp) = v_; }
  /* 0057b770 mov dword ptr [esp + 0x18], 2 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0x2u); }
  /* 0057b778 call 0x619d80 */ esp -= 4; M32(esp) = 0x57b77du; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57b778u); RETCHK(0x57b77du, 0x57b778u); LOADALL;
  /* 0057b77d lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 0057b781 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0057b785 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b786 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57b78bu; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57b786u); RETCHK(0x57b78bu, 0x57b786u); LOADALL;
  /* 0057b78b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b78e:;
  /* 0057b78e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b78f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b790 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b792 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b793 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b796 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b797:;
  /* 0057b797 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057b798 mov word ptr [esi + 0x18], ax */ { const u32 m_ = (u32)(esi + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057b79c jmp 0x57b76b */ goto L_0057b76b;
L_0057b79e:;
  /* 0057b79e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057b79f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b7a0 mov word ptr [esi + 0x18], ax */ { const u32 m_ = (u32)(esi + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057b7a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b7a5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b7a7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b7a8 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b7ab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b7ac:;
  /* 0057b7ac mov eax, dword ptr [0x68a988] */ { const u32 m_ = (u32)(0x68a988u); eax = (u32)(M32(m_)); }
  /* 0057b7b1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b7b3 je 0x57b7cb */ if (ZF_) goto L_0057b7cb;
  /* 0057b7b5 mov ecx, dword ptr [0x68a960] */ { const u32 m_ = (u32)(0x68a960u); ecx = (u32)(M32(m_)); }
  /* 0057b7bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b7bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b7bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b7be push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b7c3 call 0x5bf9f0 */ esp -= 4; M32(esp) = 0x57b7c8u; SAVEALL; F_005bf9f0(c); ABI_CHECK(0x5bf9f0u, 0x57b7c3u); RETCHK(0x57b7c8u, 0x57b7c3u); LOADALL;
  /* 0057b7c8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057b7cb:;
  /* 0057b7cb mov eax, esi */ { eax = (u32)(esi); }
  /* 0057b7cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b7ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b7cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057b7d0 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b7d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b7e0(CPU *c) {
  NATIVE_HOOK(0x57b7e0u) REGS; LOADALL;
L_0057b7e0:;
  /* 0057b7e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b7e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b7e2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0057b7e6 mov esi, 0x28 */ { esi = (u32)(0x28u); }
  /* 0057b7eb mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0057b7ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b7ef je 0x57b7ff */ if (ZF_) goto L_0057b7ff;
  /* 0057b7f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b7f2 call 0x5b4450 */ esp -= 4; M32(esp) = 0x57b7f7u; SAVEALL; F_005b4450(c); ABI_CHECK(0x5b4450u, 0x57b7f2u); RETCHK(0x57b7f7u, 0x57b7f2u); LOADALL;
  /* 0057b7f7 mov esi, eax */ { esi = (u32)(eax); }
  /* 0057b7f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b7fc add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0057b7ff:;
  /* 0057b7ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b800 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b805 call 0x5bfa40 */ esp -= 4; M32(esp) = 0x57b80au; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x57b805u); RETCHK(0x57b80au, 0x57b805u); LOADALL;
  /* 0057b80a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b80d lea eax, [eax + esi + 0xc] */ eax = (u32)((u32)(eax + esi + 0xcu));
  /* 0057b811 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b812 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b813 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b820(CPU *c) {
  NATIVE_HOOK(0x57b820u) REGS; LOADALL;
L_0057b820:;
  /* 0057b820 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b823 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b824 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0057b828 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b829 mov edi, 0x28 */ { edi = (u32)(0x28u); }
  /* 0057b82e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057b830 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b832 je 0x57b842 */ if (ZF_) goto L_0057b842;
  /* 0057b834 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b835 call 0x5b4450 */ esp -= 4; M32(esp) = 0x57b83au; SAVEALL; F_005b4450(c); ABI_CHECK(0x5b4450u, 0x57b835u); RETCHK(0x57b83au, 0x57b835u); LOADALL;
  /* 0057b83a mov edi, eax */ { edi = (u32)(eax); }
  /* 0057b83c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b83f add edi, 0x34 */ { u32 a_ = edi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_0057b842:;
  /* 0057b842 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b843 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b848 call 0x5bfa40 */ esp -= 4; M32(esp) = 0x57b84du; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x57b848u); RETCHK(0x57b84du, 0x57b848u); LOADALL;
  /* 0057b84d lea eax, [edi + eax + 0xc] */ eax = (u32)((u32)(edi + eax + 0xcu));
  /* 0057b851 mov edi, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edi = (u32)(M32(m_)); }
  /* 0057b855 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 0057b857 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 0057b85c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b85d push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0057b85f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b860 call 0x5b3830 */ esp -= 4; M32(esp) = 0x57b865u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x57b860u); RETCHK(0x57b865u, 0x57b860u); LOADALL;
  /* 0057b865 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b868 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b86a jne 0x57b872 */ if (!ZF_) goto L_0057b872;
  /* 0057b86c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b86d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b86e add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b871 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b872:;
  /* 0057b872 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 0057b874 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 0057b879 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0057b87b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0057b87d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b87e call 0x5b3830 */ esp -= 4; M32(esp) = 0x57b883u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x57b87eu); RETCHK(0x57b883u, 0x57b87eu); LOADALL;
  /* 0057b883 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b886 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b888 jne 0x57b890 */ if (!ZF_) goto L_0057b890;
  /* 0057b88a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b88b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b88c add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b88f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b890:;
  /* 0057b890 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0057b892 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b894 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b896 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 0057b899 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0057b89b setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0057b89e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0057b8a0 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 0057b8a4 mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 0057b8a8 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0057b8ab mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b8ae mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0057b8b6 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 0057b8ba lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 0057b8be mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057b8c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b8c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b8c3 mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0057b8c7 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0057b8cb call 0x5b3130 */ esp -= 4; M32(esp) = 0x57b8d0u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x57b8cbu); RETCHK(0x57b8d0u, 0x57b8cbu); LOADALL;
  /* 0057b8d0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b8d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b8d5 jne 0x57b8dd */ if (!ZF_) goto L_0057b8dd;
  /* 0057b8d7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b8d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b8d9 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b8dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b8dd:;
  /* 0057b8dd mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0057b8df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b8e1 je 0x57b8f7 */ if (ZF_) goto L_0057b8f7;
  /* 0057b8e3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b8e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b8e5 call 0x5b4490 */ esp -= 4; M32(esp) = 0x57b8eau; SAVEALL; F_005b4490(c); ABI_CHECK(0x5b4490u, 0x57b8e5u); RETCHK(0x57b8eau, 0x57b8e5u); LOADALL;
  /* 0057b8ea add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b8ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b8ef jne 0x57b8f7 */ if (!ZF_) goto L_0057b8f7;
  /* 0057b8f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b8f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b8f3 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b8f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057b8f7:;
  /* 0057b8f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b8f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b8f9 push 0x67388c */ { u32 v_ = 0x67388cu; esp -= 4; M32(esp) = v_; }
  /* 0057b8fe call 0x5bfa80 */ esp -= 4; M32(esp) = 0x57b903u; SAVEALL; F_005bfa80(c); ABI_CHECK(0x5bfa80u, 0x57b8feu); RETCHK(0x57b903u, 0x57b8feu); LOADALL;
  /* 0057b903 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b906 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057b908 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057b90a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057b90b and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057b90d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057b90e add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b911 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b920(CPU *c) {
  NATIVE_HOOK(0x57b920u) REGS; LOADALL;
L_0057b920:;
  /* 0057b920 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057b924 mov dword ptr [0x68a994], eax */ { const u32 m_ = (u32)(0x68a994u); M32(m_) = (u32)(eax); }
  /* 0057b929 mov eax, dword ptr [0x68a998] */ { const u32 m_ = (u32)(0x68a998u); eax = (u32)(M32(m_)); }
  /* 0057b92e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057b92f mov dword ptr [0x68a998], eax */ { const u32 m_ = (u32)(0x68a998u); M32(m_) = (u32)(eax); }
  /* 0057b934 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b938 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b940(CPU *c) {
  NATIVE_HOOK(0x57b940u) REGS; LOADALL;
L_0057b940:;
  /* 0057b940 mov eax, dword ptr [0x68a998] */ { const u32 m_ = (u32)(0x68a998u); eax = (u32)(M32(m_)); }
  /* 0057b945 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057b946 mov dword ptr [0x68a998], eax */ { const u32 m_ = (u32)(0x68a998u); M32(m_) = (u32)(eax); }
  /* 0057b94b mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057b94f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057b950(CPU *c) {
  NATIVE_HOOK(0x57b950u) REGS; LOADALL;
L_0057b950:;
  /* 0057b950 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b951 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b952 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0057b956 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b957 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057b959 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057b95c or byte ptr [esi + 0xc], 6 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M8(m_), b_ = 0x6u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 0057b960 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b962 mov dword ptr [esp + 8], edi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edi); }
  /* 0057b966 jle 0x57b9f0 */ if ((ZF_|LT_)) goto L_0057b9f0;
  /* 0057b96c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b96d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057b96e mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
L_0057b972:;
  /* 0057b972 mov ebx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ebx = (u32)(M32(m_)); }
  /* 0057b975 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0057b979 mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 0057b97d mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057b980 mov eax, dword ptr [ebx + edx + 0x14] */ { const u32 m_ = (u32)(ebx + edx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057b984 mov edi, dword ptr [ebx + edx + 0x18] */ { const u32 m_ = (u32)(ebx + edx + 0x18u); edi = (u32)(M32(m_)); }
  /* 0057b988 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0057b98a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057b98b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057b98c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b98d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b98e call 0x5aabd0 */ esp -= 4; M32(esp) = 0x57b993u; SAVEALL; F_005aabd0(c); ABI_CHECK(0x5aabd0u, 0x57b98eu); RETCHK(0x57b993u, 0x57b98eu); LOADALL;
  /* 0057b993 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b996 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b998 je 0x57b9c4 */ if (ZF_) goto L_0057b9c4;
  /* 0057b99a mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057b99d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057b99e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057b99f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b9a0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b9a1 call 0x5aac30 */ esp -= 4; M32(esp) = 0x57b9a6u; SAVEALL; F_005aac30(c); ABI_CHECK(0x5aac30u, 0x57b9a1u); RETCHK(0x57b9a6u, 0x57b9a1u); LOADALL;
  /* 0057b9a6 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057b9a9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b9ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b9ae je 0x57b9c4 */ if (ZF_) goto L_0057b9c4;
  /* 0057b9b0 mov ebp, eax */ { ebp = (u32)(eax); }
L_0057b9b2:;
  /* 0057b9b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b9b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057b9b4 call 0x5aa7c0 */ esp -= 4; M32(esp) = 0x57b9b9u; SAVEALL; F_005aa7c0(c); ABI_CHECK(0x5aa7c0u, 0x57b9b4u); RETCHK(0x57b9b9u, 0x57b9b4u); LOADALL;
  /* 0057b9b9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b9bc add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057b9bf dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057b9c0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0057b9c2 jne 0x57b9b2 */ if (!ZF_) goto L_0057b9b2;
L_0057b9c4:;
  /* 0057b9c4 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 0057b9c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057b9c8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057b9c9 call 0x57bb70 */ esp -= 4; M32(esp) = 0x57b9ceu; SAVEALL; F_0057bb70(c); ABI_CHECK(0x57bb70u, 0x57b9c9u); RETCHK(0x57b9ceu, 0x57b9c9u); LOADALL;
  /* 0057b9ce mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057b9d2 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0057b9d6 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0057b9d9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b9dc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057b9dd add edx, 0x1c */ { u32 a_ = edx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0057b9e0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057b9e2 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0057b9e6 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0057b9ea jl 0x57b972 */ if (LT_) goto L_0057b972;
  /* 0057b9ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057b9ed xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057b9ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0057b9f0:;
  /* 0057b9f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057b9f1 call 0x57bf40 */ esp -= 4; M32(esp) = 0x57b9f6u; SAVEALL; F_0057bf40(c); ABI_CHECK(0x57bf40u, 0x57b9f1u); RETCHK(0x57b9f6u, 0x57b9f1u); LOADALL;
  /* 0057b9f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057b9f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057b9fb jne 0x57ba93 */ if (!ZF_) goto L_0057ba93;
  /* 0057ba01 mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057ba05 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057ba08 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057ba09 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ba0b jg 0x57ba88 */ if (!(ZF_|LT_)) goto L_0057ba88;
  /* 0057ba0d mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057ba10 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ba12 je 0x57ba1d */ if (ZF_) goto L_0057ba1d;
  /* 0057ba14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ba15 call 0x5beff0 */ esp -= 4; M32(esp) = 0x57ba1au; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57ba15u); RETCHK(0x57ba1au, 0x57ba15u); LOADALL;
  /* 0057ba1a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057ba1d:;
  /* 0057ba1d mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0057ba20 mov dx, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057ba24 or word ptr [esi + 0xc], 0xfff */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M16(m_), b_ = 0xfffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0057ba2a cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ba2c mov word ptr [esi + 0xe], dx */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057ba30 je 0x57ba3e */ if (ZF_) goto L_0057ba3e;
  /* 0057ba32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ba33 call 0x581140 */ esp -= 4; M32(esp) = 0x57ba38u; SAVEALL; F_00581140(c); ABI_CHECK(0x581140u, 0x57ba33u); RETCHK(0x57ba38u, 0x57ba33u); LOADALL;
  /* 0057ba38 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ba3b mov dword ptr [esi + 0x54], edi */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(edi); }
L_0057ba3e:;
  /* 0057ba3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ba3f push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057ba44 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57ba49u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57ba44u); RETCHK(0x57ba49u, 0x57ba44u); LOADALL;
  /* 0057ba49 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057ba4c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ba4f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ba51 je 0x57ba65 */ if (ZF_) goto L_0057ba65;
  /* 0057ba53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ba54 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057ba59 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57ba5fu; SAVEALL; call_ind(c, t_); RETCHK(0x57ba5fu, 0x57ba59u); LOADALL; }
  /* 0057ba5f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ba62 mov dword ptr [esi + 0x5c], edi */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(edi); }
L_0057ba65:;
  /* 0057ba65 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0057ba68 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057ba69 call 0x5824a0 */ esp -= 4; M32(esp) = 0x57ba6eu; SAVEALL; F_005824a0(c); ABI_CHECK(0x5824a0u, 0x57ba69u); RETCHK(0x57ba6eu, 0x57ba69u); LOADALL;
  /* 0057ba6e dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057ba72 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057ba78 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ba79 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57ba7fu; SAVEALL; call_ind(c, t_); RETCHK(0x57ba7fu, 0x57ba79u); LOADALL; }
  /* 0057ba7f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ba82 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ba84 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ba85 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ba86 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057ba87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ba88:;
  /* 0057ba88 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057ba89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ba8a mov word ptr [esi + 0xe], ax */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057ba8e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ba90 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ba91 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057ba92 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ba93:;
  /* 0057ba93 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057ba95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ba96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ba97 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057ba98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057baa0(CPU *c) {
  NATIVE_HOOK(0x57baa0u) REGS; LOADALL;
L_0057baa0:;
  /* 0057baa0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057baa1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057baa2 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057baa4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057baa5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057baa6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057baa7 call 0x57c1a0 */ esp -= 4; M32(esp) = 0x57baacu; SAVEALL; F_0057c1a0(c); ABI_CHECK(0x57c1a0u, 0x57baa7u); RETCHK(0x57baacu, 0x57baa7u); LOADALL;
  /* 0057baac mov esi, eax */ { esi = (u32)(eax); }
  /* 0057baae add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bab1 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bab3 je 0x57bac8 */ if (ZF_) goto L_0057bac8;
  /* 0057bab5 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057bab8 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057babc mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0057babf mov dword ptr [eax + 8], edi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edi); }
  /* 0057bac2 mov dword ptr [eax + 0xc], edi */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edi); }
  /* 0057bac5 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
L_0057bac8:;
  /* 0057bac8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bac9 call 0x57bf40 */ esp -= 4; M32(esp) = 0x57baceu; SAVEALL; F_0057bf40(c); ABI_CHECK(0x57bf40u, 0x57bac9u); RETCHK(0x57baceu, 0x57bac9u); LOADALL;
  /* 0057bace add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bad1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057bad3 jne 0x57bb69 */ if (!ZF_) goto L_0057bb69;
  /* 0057bad9 mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057badd movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057bae0 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057bae1 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057bae3 jg 0x57bb5f */ if (!(ZF_|LT_)) goto L_0057bb5f;
  /* 0057bae5 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057bae8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057baea je 0x57baf5 */ if (ZF_) goto L_0057baf5;
  /* 0057baec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057baed call 0x5beff0 */ esp -= 4; M32(esp) = 0x57baf2u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57baedu); RETCHK(0x57baf2u, 0x57baedu); LOADALL;
  /* 0057baf2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057baf5:;
  /* 0057baf5 mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057baf9 or word ptr [esi + 0xc], 0xfff */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M16(m_), b_ = 0xfffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0057baff mov word ptr [esi + 0xe], ax */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057bb03 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0057bb06 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bb08 je 0x57bb16 */ if (ZF_) goto L_0057bb16;
  /* 0057bb0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bb0b call 0x581140 */ esp -= 4; M32(esp) = 0x57bb10u; SAVEALL; F_00581140(c); ABI_CHECK(0x581140u, 0x57bb0bu); RETCHK(0x57bb10u, 0x57bb0bu); LOADALL;
  /* 0057bb10 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bb13 mov dword ptr [esi + 0x54], edi */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(edi); }
L_0057bb16:;
  /* 0057bb16 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bb17 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057bb1c call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57bb21u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57bb1cu); RETCHK(0x57bb21u, 0x57bb1cu); LOADALL;
  /* 0057bb21 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057bb24 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bb27 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bb29 je 0x57bb3e */ if (ZF_) goto L_0057bb3e;
  /* 0057bb2b mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057bb31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bb32 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57bb38u; SAVEALL; call_ind(c, t_); RETCHK(0x57bb38u, 0x57bb32u); LOADALL; }
  /* 0057bb38 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bb3b mov dword ptr [esi + 0x5c], edi */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(edi); }
L_0057bb3e:;
  /* 0057bb3e lea edx, [esi + 0x20] */ edx = (u32)((u32)(esi + 0x20u));
  /* 0057bb41 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057bb42 call 0x5824a0 */ esp -= 4; M32(esp) = 0x57bb47u; SAVEALL; F_005824a0(c); ABI_CHECK(0x5824a0u, 0x57bb42u); RETCHK(0x57bb47u, 0x57bb42u); LOADALL;
  /* 0057bb47 dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057bb4b mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057bb50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bb51 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57bb57u; SAVEALL; call_ind(c, t_); RETCHK(0x57bb57u, 0x57bb51u); LOADALL; }
  /* 0057bb57 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bb5a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057bb5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057bb5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bb5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057bb5f:;
  /* 0057bb5f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057bb60 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057bb61 mov word ptr [esi + 0xe], ax */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057bb65 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057bb67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bb68 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057bb69:;
  /* 0057bb69 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057bb6b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057bb6c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bb6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057bb70(CPU *c) {
  NATIVE_HOOK(0x57bb70u) REGS; LOADALL;
L_0057bb70:;
  /* 0057bb70 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bb73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bb74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057bb75 mov edi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edi = (u32)(M32(m_)); }
  /* 0057bb79 lea edx, [esp + 0x1c] */ edx = (u32)((u32)(esp + 0x1cu));
  /* 0057bb7d mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0057bb85 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0057bb87 mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057bb8a mov esi, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); esi = (u32)(M32(m_)); }
  /* 0057bb8d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bb8e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057bb8f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057bb90 call 0x5c04a0 */ esp -= 4; M32(esp) = 0x57bb95u; SAVEALL; F_005c04a0(c); ABI_CHECK(0x5c04a0u, 0x57bb90u); RETCHK(0x57bb95u, 0x57bb90u); LOADALL;
  /* 0057bb95 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0057bb99 fadd dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057bb9d fld dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0057bba1 fadd dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057bba5 fld dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0057bba9 fadd dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057bbad mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057bbb0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bbb3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057bbb5 fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057bbb9 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0057bbbb fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057bbc1 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057bbc5 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057bbcb fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057bbcf fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0057bbd3 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057bbd9 fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057bbdd je 0x57bc48 */ if (ZF_) goto L_0057bc48;
L_0057bbdf:;
  /* 0057bbdf fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0057bbe1 fsub dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057bbe5 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0057bbe8 fsub dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057bbec fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0057bbef fsub dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057bbf3 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0057bbf5 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057bbf7 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0057bbf9 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0057bbfb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0057bbfd fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0057bbff fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057bc01 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0057bc03 fstp st(3) */ ST(3) = ST(0); FPOP();
  /* 0057bc05 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0057bc07 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0057bc09 fcom dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0057bc0d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057bc0f and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057bc14 jne 0x57bc1c */ if (!ZF_) goto L_0057bc1c;
  /* 0057bc16 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057bc1a jmp 0x57bc1e */ goto L_0057bc1e;
L_0057bc1c:;
  /* 0057bc1c fstp st(0) */ ST(0) = ST(0); FPOP();
L_0057bc1e:;
  /* 0057bc1e add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057bc21 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057bc22 jne 0x57bbdf */ if (!ZF_) goto L_0057bbdf;
  /* 0057bc24 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0057bc28 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057bc2e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057bc30 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057bc35 jne 0x57bc48 */ if (!ZF_) goto L_0057bc48;
  /* 0057bc37 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057bc3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bc3c call 0x5aa9e0 */ esp -= 4; M32(esp) = 0x57bc41u; SAVEALL; F_005aa9e0(c); ABI_CHECK(0x5aa9e0u, 0x57bc3cu); RETCHK(0x57bc41u, 0x57bc3cu); LOADALL;
  /* 0057bc41 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057bc45 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057bc48:;
  /* 0057bc48 mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0057bc4c mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057bc50 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0057bc54 fmul dword ptr [0x62ee18] */ { const u32 m_ = (u32)(0x62ee18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057bc5a mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057bc5e mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0057bc60 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057bc64 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057bc67 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057bc6b mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057bc6f mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0057bc72 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0057bc75 mov eax, edi */ { eax = (u32)(edi); }
  /* 0057bc77 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057bc78 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bc79 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bc7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057bc80(CPU *c) {
  NATIVE_HOOK(0x57bc80u) REGS; LOADALL;
L_0057bc80:;
  /* 0057bc80 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bc83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057bc84 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057bc85 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bc86 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 0057bc8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057bc8b mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057bc8e test ecx, 0x1000000 */ { u32 a_ = ecx, b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057bc94 je 0x57bc9d */ if (ZF_) goto L_0057bc9d;
  /* 0057bc96 mov ebp, 0x1c */ { ebp = (u32)(0x1cu); }
  /* 0057bc9b jmp 0x57bcb0 */ goto L_0057bcb0;
L_0057bc9d:;
  /* 0057bc9d mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057bca0 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 0057bca3 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0057bca6 test cl, 0x10 */ { u32 a_ = (ecx & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057bca9 lea ebp, [eax + 0x1c] */ ebp = (u32)((u32)(eax + 0x1cu));
  /* 0057bcac je 0x57bcb0 */ if (ZF_) goto L_0057bcb0;
  /* 0057bcae add ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
L_0057bcb0:;
  /* 0057bcb0 mov edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edi = (u32)(M32(m_)); }
  /* 0057bcb3 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0057bcb7 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057bcb9 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057bcbc imul edi, ebp */ { s64 p_ = (s64)(s32)edi * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0057bcbf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057bcc1 push 0x3000f */ { u32 v_ = 0x3000fu; esp -= 4; M32(esp) = v_; }
  /* 0057bcc6 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bcc8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057bcc9 je 0x57bdf5 */ if (ZF_) goto L_0057bdf5;
  /* 0057bccf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bcd0 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057bcd5 call dword ptr [eax + 0x110] */ { const u32 m_ = (u32)(eax + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57bcdbu; SAVEALL; call_ind(c, t_); RETCHK(0x57bcdbu, 0x57bcd5u); LOADALL; }
  /* 0057bcdb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bcde cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bce0 jne 0x57bd11 */ if (!ZF_) goto L_0057bd11;
  /* 0057bce2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057bce3 push 0x80000013 */ { u32 v_ = 0x80000013u; esp -= 4; M32(esp) = v_; }
  /* 0057bce8 mov dword ptr [esp + 0x18], 2 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0x2u); }
  /* 0057bcf0 call 0x619d80 */ esp -= 4; M32(esp) = 0x57bcf5u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57bcf0u); RETCHK(0x57bcf5u, 0x57bcf0u); LOADALL;
  /* 0057bcf5 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 0057bcf9 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0057bcfd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057bcfe call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57bd03u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57bcfeu); RETCHK(0x57bd03u, 0x57bcfeu); LOADALL;
  /* 0057bd03 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bd06 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057bd09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057bd0a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bd0b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057bd0c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057bd0d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bd10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057bd11:;
  /* 0057bd11 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0057bd15 mov edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edi = (u32)(M32(m_)); }
  /* 0057bd18 mov edx, edi */ { edx = (u32)(edi); }
  /* 0057bd1a lea ebx, [ecx*8] */ ebx = (u32)((u32)(ecx * 8u));
  /* 0057bd21 imul edx, ebp */ { s64 p_ = (s64)(s32)edx * (s64)(s32)ebp; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0057bd24 sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0057bd26 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0057bd29 imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0057bd2c lea edx, [edx + eax - 1] */ edx = (u32)((u32)(edx + eax + 0xffffffffu));
  /* 0057bd30 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057bd32 lea ebx, [edx + ebx*4] */ ebx = (u32)((u32)(edx + ebx * 4u));
  /* 0057bd35 je 0x57bd42 */ if (ZF_) goto L_0057bd42;
  /* 0057bd37 mov edi, ecx */ { edi = (u32)(ecx); }
L_0057bd39:;
  /* 0057bd39 mov cl, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057bd3b mov byte ptr [ebx], cl */ { const u32 m_ = (u32)(ebx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057bd3d dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057bd3e dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057bd3f dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057bd40 jne 0x57bd39 */ if (!ZF_) goto L_0057bd39;
L_0057bd42:;
  /* 0057bd42 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0057bd44:;
  /* 0057bd44 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 0057bd48 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0057bd4b add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057bd4d xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0057bd4f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0057bd51 mov dword ptr [esi + 0x18], ecx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0057bd54 mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 0057bd57 lea ecx, [edx*8] */ ecx = (u32)((u32)(edx * 8u));
  /* 0057bd5e sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057bd60 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bd62 lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 0057bd65 jle 0x57bdb4 */ if ((ZF_|LT_)) goto L_0057bdb4;
  /* 0057bd67 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0057bd69:;
  /* 0057bd69 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057bd6c mov dword ptr [eax + edi + 0x14], ebx */ { const u32 m_ = (u32)(eax + edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0057bd70 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057bd72 mov dword ptr [eax + 0x18], ebx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0057bd75 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057bd78 test edx, 0x1000000 */ { u32 a_ = edx, b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057bd7e jne 0x57bda5 */ if (!ZF_) goto L_0057bda5;
  /* 0057bd80 cmp dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bd83 je 0x57bda5 */ if (ZF_) goto L_0057bda5;
  /* 0057bd85 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0057bd88 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057bd8b lea edx, [edx + edx*2] */ edx = (u32)((u32)(edx + edx * 2u));
  /* 0057bd8e lea ecx, [ecx + edx*4] */ ecx = (u32)((u32)(ecx + edx * 4u));
  /* 0057bd91 mov dl, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057bd94 test dl, 0x10 */ { u32 a_ = (edx & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057bd97 je 0x57bda5 */ if (ZF_) goto L_0057bda5;
  /* 0057bd99 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0057bd9c mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057bd9f lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 0057bda2 lea ecx, [ecx + eax*4] */ ecx = (u32)((u32)(ecx + eax * 4u));
L_0057bda5:;
  /* 0057bda5 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057bda8 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057bda9 add edi, 0x1c */ { u32 a_ = edi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057bdac cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bdae jl 0x57bd69 */ if (LT_) goto L_0057bd69;
  /* 0057bdb0 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
L_0057bdb4:;
  /* 0057bdb4 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057bdb7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0057bdb9 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057bdbb cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bdbd jge 0x57bde8 */ if (!LT_) goto L_0057bde8;
  /* 0057bdbf lea edx, [ecx*8] */ edx = (u32)((u32)(ecx * 8u));
  /* 0057bdc6 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0057bdc8 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_0057bdcb:;
  /* 0057bdcb mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057bdce mov dword ptr [eax + edx + 4], ebx */ { const u32 m_ = (u32)(eax + edx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0057bdd2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057bdd4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057bdd5 add edx, 0x1c */ { u32 a_ = edx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0057bdd8 mov dword ptr [eax + 8], ebx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0057bddb mov dword ptr [eax + 0xc], ebx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0057bdde mov dword ptr [eax + 0x10], ebx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0057bde1 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0057bde3 cmp ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bde6 jl 0x57bdcb */ if (LT_) goto L_0057bdcb;
L_0057bde8:;
  /* 0057bde8 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057bdeb sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057bded pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057bdee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bdef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057bdf0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057bdf1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bdf4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057bdf5:;
  /* 0057bdf5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057bdfb call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57be01u; SAVEALL; call_ind(c, t_); RETCHK(0x57be01u, 0x57bdfbu); LOADALL; }
  /* 0057be01 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057be04 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057be06 jne 0x57bd44 */ if (!ZF_) goto L_0057bd44;
  /* 0057be0c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057be0d push 0x80000013 */ { u32 v_ = 0x80000013u; esp -= 4; M32(esp) = v_; }
  /* 0057be12 mov dword ptr [esp + 0x18], 2 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0x2u); }
  /* 0057be1a call 0x619d80 */ esp -= 4; M32(esp) = 0x57be1fu; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57be1au); RETCHK(0x57be1fu, 0x57be1au); LOADALL;
  /* 0057be1f mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0057be23 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 0057be27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057be28 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57be2du; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57be28u); RETCHK(0x57be2du, 0x57be28u); LOADALL;
  /* 0057be2d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057be30 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057be33 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057be34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057be35 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057be36 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057be37 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057be3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057be40(CPU *c) {
  NATIVE_HOOK(0x57be40u) REGS; LOADALL;
L_0057be40:;
  /* 0057be40 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057be44 mov cx, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057be49 mov dx, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057be4e mov word ptr [eax], cx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0057be51 mov cx, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057be56 mov word ptr [eax + 2], dx */ { const u32 m_ = (u32)(eax + 0x2u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057be5a mov word ptr [eax + 4], cx */ { const u32 m_ = (u32)(eax + 0x4u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0057be5e mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057be62 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057be70(CPU *c) {
  NATIVE_HOOK(0x57be70u) REGS; LOADALL;
L_0057be70:;
  /* 0057be70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057be71 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0057be75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057be76 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057be77 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0057be7b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057be7d je 0x57beb2 */ if (ZF_) goto L_0057beb2;
  /* 0057be7f lea esi, [ebx + 0x20] */ esi = (u32)((u32)(ebx + 0x20u));
  /* 0057be82 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057be83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057be84 call 0x5825f0 */ esp -= 4; M32(esp) = 0x57be89u; SAVEALL; F_005825f0(c); ABI_CHECK(0x5825f0u, 0x57be84u); RETCHK(0x57be89u, 0x57be84u); LOADALL;
  /* 0057be89 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057be8c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057be8e jge 0x57bea4 */ if (!LT_) goto L_0057bea4;
  /* 0057be90 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057be91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057be92 call 0x582520 */ esp -= 4; M32(esp) = 0x57be97u; SAVEALL; F_00582520(c); ABI_CHECK(0x582520u, 0x57be92u); RETCHK(0x57be97u, 0x57be92u); LOADALL;
  /* 0057be97 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057be9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057be9c jge 0x57bea4 */ if (!LT_) goto L_0057bea4;
  /* 0057be9e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057be9f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bea0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057bea2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057bea3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057bea4:;
  /* 0057bea4 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057bea8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057bea9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057beaa mov word ptr [ecx + 6], ax */ { const u32 m_ = (u32)(ecx + 0x6u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057beae mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057beb0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057beb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057beb2:;
  /* 0057beb2 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057beb6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057beb7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057beb9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057beba mov word ptr [edx + 6], 0xffff */ { const u32 m_ = (u32)(edx + 0x6u); M16(m_) = (u16)(0xffffu); }
  /* 0057bec0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057bec1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057bed0(CPU *c) {
  NATIVE_HOOK(0x57bed0u) REGS; LOADALL;
L_0057bed0:;
  /* 0057bed0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057bed1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057bed2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bed3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057bed4 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 0057bed8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0057beda mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0057bedd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057bedf mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0057bee3 jle 0x57bf07 */ if ((ZF_|LT_)) goto L_0057bf07;
  /* 0057bee5 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 0057bee9 mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
L_0057beed:;
  /* 0057beed mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0057bef0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057bef1 mov eax, dword ptr [eax + esi*4] */ { const u32 m_ = (u32)(eax + esi * 4u); eax = (u32)(M32(m_)); }
  /* 0057bef4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bef5 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x57bef7u; SAVEALL; call_ind(c, t_); RETCHK(0x57bef7u, 0x57bef5u); LOADALL; }
  /* 0057bef7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057befa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057befc je 0x57bf07 */ if (ZF_) goto L_0057bf07;
  /* 0057befe mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057bf02 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057bf03 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bf05 jl 0x57beed */ if (LT_) goto L_0057beed;
L_0057bf07:;
  /* 0057bf07 mov eax, edi */ { eax = (u32)(edi); }
  /* 0057bf09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057bf0a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bf0b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057bf0c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057bf0d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057bf10(CPU *c) {
  NATIVE_HOOK(0x57bf10u) REGS; LOADALL;
L_0057bf10:;
  /* 0057bf10 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057bf14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bf15 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057bf19 or word ptr [esi + 0xc], ax */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M16(m_), b_ = (eax & 0xffffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0057bf1d test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057bf1f je 0x57bf38 */ if (ZF_) goto L_0057bf38;
  /* 0057bf21 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0057bf24 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057bf26 je 0x57bf38 */ if (ZF_) goto L_0057bf38;
  /* 0057bf28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bf29 call 0x581140 */ esp -= 4; M32(esp) = 0x57bf2eu; SAVEALL; F_00581140(c); ABI_CHECK(0x581140u, 0x57bf29u); RETCHK(0x57bf2eu, 0x57bf29u); LOADALL;
  /* 0057bf2e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bf31 mov dword ptr [esi + 0x54], 0 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x0u); }
L_0057bf38:;
  /* 0057bf38 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057bf3a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057bf3b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057bf40(CPU *c) {
  NATIVE_HOOK(0x57bf40u) REGS; LOADALL;
L_0057bf40:;
  /* 0057bf40 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bf43 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057bf44 mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0057bf48 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057bf49 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057bf4a mov eax, dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); eax = (u32)(M32(m_)); }
  /* 0057bf4d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057bf4f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bf51 mov dword ptr [esp + 0xc], edi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edi); }
  /* 0057bf55 mov dword ptr [esp + 0x10], edi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edi); }
  /* 0057bf59 mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 0057bf5d jne 0x57c178 */ if (!ZF_) goto L_0057c178;
  /* 0057bf63 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057bf66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bf67 call 0x581010 */ esp -= 4; M32(esp) = 0x57bf6cu; SAVEALL; F_00581010(c); ABI_CHECK(0x581010u, 0x57bf67u); RETCHK(0x57bf6cu, 0x57bf67u); LOADALL;
  /* 0057bf6c mov ebp, eax */ { ebp = (u32)(eax); }
  /* 0057bf6e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bf71 cmp ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bf73 mov dword ptr [esp + 0x28], ebp */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebp); }
  /* 0057bf77 je 0x57c18a */ if (ZF_) goto L_0057c18a;
  /* 0057bf7d mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 0057bf80 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bf82 jle 0x57c15d */ if ((ZF_|LT_)) goto L_0057c15d;
  /* 0057bf88 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057bf8e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bf8f lea esi, [eax*4] */ esi = (u32)((u32)(eax * 4u));
  /* 0057bf96 push 0x10006 */ { u32 v_ = 0x10006u; esp -= 4; M32(esp) = v_; }
  /* 0057bf9b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bf9c call dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57bfa2u; SAVEALL; call_ind(c, t_); RETCHK(0x57bfa2u, 0x57bf9cu); LOADALL; }
  /* 0057bfa2 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057bfa8 push 0x10503 */ { u32 v_ = 0x10503u; esp -= 4; M32(esp) = v_; }
  /* 0057bfad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bfae mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 0057bfb2 call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57bfb8u; SAVEALL; call_ind(c, t_); RETCHK(0x57bfb8u, 0x57bfb2u); LOADALL; }
  /* 0057bfb8 mov dword ptr [esp + 0x34], eax */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(eax); }
  /* 0057bfbc mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057bfc1 push 0x10503 */ { u32 v_ = 0x10503u; esp -= 4; M32(esp) = v_; }
  /* 0057bfc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057bfc7 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57bfcdu; SAVEALL; call_ind(c, t_); RETCHK(0x57bfcdu, 0x57bfc7u); LOADALL; }
  /* 0057bfcd mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 0057bfd1 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057bfd4 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057bfd7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057bfd9 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 0057bfdd jle 0x57c125 */ if ((ZF_|LT_)) goto L_0057c125;
L_0057bfe3:;
  /* 0057bfe3 mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0057bfe6 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0057bfea xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057bfec xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0057bfee mov ax, word ptr [ecx + edx*8 + 6] */ { const u32 m_ = (u32)(ecx + edx * 8u + 0x6u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057bff3 lea esi, [ecx + edx*8] */ esi = (u32)((u32)(ecx + edx * 8u));
  /* 0057bff6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bff7 lea eax, [ebx + 0x20] */ eax = (u32)((u32)(ebx + 0x20u));
  /* 0057bffa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057bffb call 0x582510 */ esp -= 4; M32(esp) = 0x57c000u; SAVEALL; F_00582510(c); ABI_CHECK(0x582510u, 0x57bffbu); RETCHK(0x57c000u, 0x57bffbu); LOADALL;
  /* 0057c000 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0057c002 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057c004 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c007 cmp word ptr [esp + 0x10], di */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M16(m_), b_ = (edi & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c00c mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 0057c010 jbe 0x57c02b */ if ((CF_|ZF_)) goto L_0057c02b;
L_0057c012:;
  /* 0057c012 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0057c016 mov edx, edi */ { edx = (u32)(edi); }
  /* 0057c018 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057c01e cmp dword ptr [eax + edx*4], ecx */ { const u32 m_ = (u32)(eax + edx * 4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c021 je 0x57c02b */ if (ZF_) goto L_0057c02b;
  /* 0057c023 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c024 cmp di, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = (edi & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c029 jb 0x57c012 */ if (CF_) goto L_0057c012;
L_0057c02b:;
  /* 0057c02b cmp di, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = (edi & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c030 jne 0x57c04a */ if (!ZF_) goto L_0057c04a;
  /* 0057c032 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0057c036 mov edx, edi */ { edx = (u32)(edi); }
  /* 0057c038 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057c03e mov dword ptr [eax + edx*4], ecx */ { const u32 m_ = (u32)(eax + edx * 4u); M32(m_) = (u32)(ecx); }
  /* 0057c041 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057c045 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c046 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
L_0057c04a:;
  /* 0057c04a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c04c je 0x57c050 */ if (ZF_) goto L_0057c050;
  /* 0057c04e mov ebp, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebp = (u32)(M32(m_)); }
L_0057c050:;
  /* 0057c050 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057c052 cmp word ptr [esp + 0x14], dx */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c057 jbe 0x57c072 */ if ((CF_|ZF_)) goto L_0057c072;
L_0057c059:;
  /* 0057c059 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 0057c05d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0057c05f and ecx, 0xffff */ { u32 a_ = ecx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c065 cmp dword ptr [eax + ecx*4], ebp */ { const u32 m_ = (u32)(eax + ecx * 4u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c068 je 0x57c072 */ if (ZF_) goto L_0057c072;
  /* 0057c06a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c06b cmp dx, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = (edx & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c070 jb 0x57c059 */ if (CF_) goto L_0057c059;
L_0057c072:;
  /* 0057c072 cmp dx, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = (edx & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c077 jne 0x57c091 */ if (!ZF_) goto L_0057c091;
  /* 0057c079 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 0057c07d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0057c07f and ecx, 0xffff */ { u32 a_ = ecx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c085 mov dword ptr [eax + ecx*4], ebp */ { const u32 m_ = (u32)(eax + ecx * 4u); M32(m_) = (u32)(ebp); }
  /* 0057c088 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057c08c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c08d mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
L_0057c091:;
  /* 0057c091 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0057c095 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057c098 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c09a cmp word ptr [esp + 0x18], cx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M16(m_), b_ = (ecx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c09f jbe 0x57c0bf */ if ((CF_|ZF_)) goto L_0057c0bf;
L_0057c0a1:;
  /* 0057c0a1 mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 0057c0a5 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0057c0a7 and ebx, 0xffff */ { u32 a_ = ebx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057c0ad cmp dword ptr [ebp + ebx*4], eax */ { const u32 m_ = (u32)(ebp + ebx * 4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c0b1 je 0x57c0bb */ if (ZF_) goto L_0057c0bb;
  /* 0057c0b3 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c0b4 cmp cx, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = (ecx & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c0b9 jb 0x57c0a1 */ if (CF_) goto L_0057c0a1;
L_0057c0bb:;
  /* 0057c0bb mov ebx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebx = (u32)(M32(m_)); }
L_0057c0bf:;
  /* 0057c0bf cmp cx, word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = (ecx & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0057c0c4 jne 0x57c0e3 */ if (!ZF_) goto L_0057c0e3;
  /* 0057c0c6 mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 0057c0ca mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0057c0cc and ebx, 0xffff */ { u32 a_ = ebx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057c0d2 mov dword ptr [ebp + ebx*4], eax */ { const u32 m_ = (u32)(ebp + ebx * 4u); M32(m_) = (u32)(eax); }
  /* 0057c0d6 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057c0da mov ebx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebx = (u32)(M32(m_)); }
  /* 0057c0de inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c0df mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
L_0057c0e3:;
  /* 0057c0e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c0e4 mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 0057c0e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c0e9 mov dx, word ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c0ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c0ee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c0f0 mov ax, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c0f4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c0f5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c0f7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057c0f9 mov cx, word ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c0fd mov dx, word ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c100 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c101 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 0057c105 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c106 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c107 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c108 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c109 call 0x581180 */ esp -= 4; M32(esp) = 0x57c10eu; SAVEALL; F_00581180(c); ABI_CHECK(0x581180u, 0x57c109u); RETCHK(0x57c10eu, 0x57c109u); LOADALL;
  /* 0057c10e mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 0057c112 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057c115 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c118 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c119 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c11b mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0057c11f jl 0x57bfe3 */ if (LT_) goto L_0057bfe3;
L_0057c125:;
  /* 0057c125 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0057c129 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057c12f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c130 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c136u; SAVEALL; call_ind(c, t_); RETCHK(0x57c136u, 0x57c130u); LOADALL; }
  /* 0057c136 mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 0057c13a mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057c140 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c141 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c147u; SAVEALL; call_ind(c, t_); RETCHK(0x57c147u, 0x57c141u); LOADALL; }
  /* 0057c147 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 0057c14b mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057c150 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c151 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c157u; SAVEALL; call_ind(c, t_); RETCHK(0x57c157u, 0x57c151u); LOADALL; }
  /* 0057c157 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c15a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057c15c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0057c15d:;
  /* 0057c15d test byte ptr [ebx + 8], 1 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057c161 je 0x57c167 */ if (ZF_) goto L_0057c167;
  /* 0057c163 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0057c165 jmp 0x57c168 */ goto L_0057c168;
L_0057c167:;
  /* 0057c167 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0057c168:;
  /* 0057c168 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c169 call 0x580c70 */ esp -= 4; M32(esp) = 0x57c16eu; SAVEALL; F_00580c70(c); ABI_CHECK(0x580c70u, 0x57c169u); RETCHK(0x57c16eu, 0x57c169u); LOADALL;
  /* 0057c16e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c171 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c173 je 0x57c181 */ if (ZF_) goto L_0057c181;
  /* 0057c175 mov dword ptr [ebx + 0x54], eax */ { const u32 m_ = (u32)(ebx + 0x54u); M32(m_) = (u32)(eax); }
L_0057c178:;
  /* 0057c178 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c179 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057c17b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c17c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c17d add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c180 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c181:;
  /* 0057c181 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c182 call 0x581100 */ esp -= 4; M32(esp) = 0x57c187u; SAVEALL; F_00581100(c); ABI_CHECK(0x581100u, 0x57c182u); RETCHK(0x57c187u, 0x57c182u); LOADALL;
  /* 0057c187 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057c18a:;
  /* 0057c18a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c18b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c18c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c18e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c18f add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c192 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c1a0(CPU *c) {
  NATIVE_HOOK(0x57c1a0u) REGS; LOADALL;
L_0057c1a0:;
  /* 0057c1a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057c1a4 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c1a7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057c1a8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c1a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c1aa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c1ab xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057c1ad cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c1af jl 0x57c3b5 */ if (LT_) goto L_0057c3b5;
  /* 0057c1b5 cmp eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c1ba jge 0x57c395 */ if (!LT_) goto L_0057c395;
  /* 0057c1c0 cmp dword ptr [esp + 0x20], edi */ { const u32 m_ = (u32)(esp + 0x20u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c1c4 jl 0x57c3b5 */ if (LT_) goto L_0057c3b5;
  /* 0057c1ca mov ebx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebx = (u32)(M32(m_)); }
  /* 0057c1ce mov esi, dword ptr [0x6738b8] */ { const u32 m_ = (u32)(0x6738b8u); esi = (u32)(M32(m_)); }
  /* 0057c1d4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0057c1d6 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c1db test ebx, 0xff0000 */ { u32 a_ = ebx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c1e1 je 0x57c1f0 */ if (ZF_) goto L_0057c1f0;
  /* 0057c1e3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c1e5 mov cl, byte ptr [esp + 0x26] */ { const u32 m_ = (u32)(esp + 0x26u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057c1e9 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 0057c1eb jmp 0x57c36a */ goto L_0057c36a;
L_0057c1f0:;
  /* 0057c1f0 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057c1f2 jns 0x57c362 */ if (!SF_) goto L_0057c362;
  /* 0057c1f8 mov ebp, 2 */ { ebp = (u32)(0x2u); }
L_0057c1fd:;
  /* 0057c1fd mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 0057c202 cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c204 sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 0057c206 and ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0057c20c:;
  /* 0057c20c and al, 0x7b */ { u32 a_ = (eax & 0xffu), b_ = 0x7bu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0057c20e or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c210 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0057c212 and ecx, 0x1000000 */ { u32 a_ = ecx, b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c218 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 0057c21c mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0057c220 jne 0x57c242 */ if (!ZF_) goto L_0057c242;
  /* 0057c222 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057c224 je 0x57c22d */ if (ZF_) goto L_0057c22d;
  /* 0057c226 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0057c22a lea esi, [esi + eax*4] */ esi = (u32)((u32)(esi + eax * 4u));
L_0057c22d:;
  /* 0057c22d cmp ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c22f jbe 0x57c23b */ if ((CF_|ZF_)) goto L_0057c23b;
  /* 0057c231 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 0057c233 imul ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0057c238 lea esi, [esi + ecx*8] */ esi = (u32)((u32)(esi + ecx * 8u));
L_0057c23b:;
  /* 0057c23b mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0057c23f lea esi, [esi + edx*8] */ esi = (u32)((u32)(esi + edx * 8u));
L_0057c242:;
  /* 0057c242 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057c247 push 0x3000f */ { u32 v_ = 0x3000fu; esp -= 4; M32(esp) = v_; }
  /* 0057c24c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c24d call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c253u; SAVEALL; call_ind(c, t_); RETCHK(0x57c253u, 0x57c24du); LOADALL; }
  /* 0057c253 mov esi, eax */ { esi = (u32)(eax); }
  /* 0057c255 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c258 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c25a je 0x57c3b5 */ if (ZF_) goto L_0057c3b5;
  /* 0057c260 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 0057c263 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c264 call 0x582500 */ esp -= 4; M32(esp) = 0x57c269u; SAVEALL; F_00582500(c); ABI_CHECK(0x582500u, 0x57c264u); RETCHK(0x57c269u, 0x57c264u); LOADALL;
  /* 0057c269 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c26c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c26e je 0x57c3b5 */ if (ZF_) goto L_0057c3b5;
  /* 0057c274 lea edx, [esi + 0x34] */ edx = (u32)((u32)(esi + 0x34u));
  /* 0057c277 mov dword ptr [esi + 0x5c], edi */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(edi); }
  /* 0057c27a mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 0057c27d mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0057c280 mov dword ptr [esi + 0x58], edi */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(edi); }
  /* 0057c283 mov word ptr [esi + 0xc], di */ { const u32 m_ = (u32)(esi + 0xcu); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0057c287 mov dword ptr [esi + 0x54], edi */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(edi); }
  /* 0057c28a mov ecx, 8 */ { ecx = (u32)(0x8u); }
  /* 0057c28f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c291 mov edi, edx */ { edi = (u32)(edx); }
  /* 0057c293 mov byte ptr [esi], 8 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x8u); }
  /* 0057c296 mov byte ptr [esi + 1], 0 */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)(0x0u); }
  /* 0057c29a mov byte ptr [esi + 2], 0 */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 0057c29e mov byte ptr [esi + 3], 0 */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)(0x0u); }
  /* 0057c2a2 mov word ptr [esi + 0xe], 1 */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)(0x1u); }
  /* 0057c2a8 mov dword ptr [esi + 0x1c], ebp */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 0057c2ab rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0057c2ad mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0057c2b1 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0057c2b5 and ebx, 0xf000000 */ { u32 a_ = ebx, b_ = 0xf000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057c2bb mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0057c2be mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0057c2c1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057c2c5 or ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057c2c7 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 0057c2cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c2cd mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0057c2d0 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0057c2d3 mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 0057c2d6 jne 0x57c330 */ if (!ZF_) goto L_0057c330;
  /* 0057c2d8 mov eax, dword ptr [0x6738b8] */ { const u32 m_ = (u32)(0x6738b8u); eax = (u32)(M32(m_)); }
  /* 0057c2dd mov bl, byte ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057c2e1 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057c2e3 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057c2e6 je 0x57c2f2 */ if (ZF_) goto L_0057c2f2;
  /* 0057c2e8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c2ea je 0x57c2f2 */ if (ZF_) goto L_0057c2f2;
  /* 0057c2ec mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0057c2ef lea eax, [eax + edi*4] */ eax = (u32)((u32)(eax + edi * 4u));
L_0057c2f2:;
  /* 0057c2f2 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c2f4 jbe 0x57c311 */ if ((CF_|ZF_)) goto L_0057c311;
  /* 0057c2f6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c2f8 je 0x57c311 */ if (ZF_) goto L_0057c311;
  /* 0057c2fa test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c2fc jbe 0x57c311 */ if ((CF_|ZF_)) goto L_0057c311;
  /* 0057c2fe shl edi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0057c301 mov ecx, edx */ { ecx = (u32)(edx); }
L_0057c303:;
  /* 0057c303 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0057c305 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057c307 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057c30a dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057c30b jne 0x57c303 */ if (!ZF_) goto L_0057c303;
  /* 0057c30d mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
L_0057c311:;
  /* 0057c311 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c313 je 0x57c330 */ if (ZF_) goto L_0057c330;
  /* 0057c315 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0057c318 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c31a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c31c jle 0x57c330 */ if ((ZF_|LT_)) goto L_0057c330;
  /* 0057c31e mov edx, 0xffff */ { edx = (u32)(0xffffu); }
L_0057c323:;
  /* 0057c323 mov edi, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0057c326 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c327 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c329 mov word ptr [edi + eax*8 - 2], dx */ { const u32 m_ = (u32)(edi + eax * 8u + 0xfffffffeu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057c32e jl 0x57c323 */ if (LT_) goto L_0057c323;
L_0057c330:;
  /* 0057c330 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0057c332 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c333 call 0x57bc80 */ esp -= 4; M32(esp) = 0x57c338u; SAVEALL; F_0057bc80(c); ABI_CHECK(0x57bc80u, 0x57c333u); RETCHK(0x57c338u, 0x57c333u); LOADALL;
  /* 0057c338 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c33b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c33d jge 0x57c37d */ if (!LT_) goto L_0057c37d;
  /* 0057c33f lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 0057c342 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c343 call 0x5824a0 */ esp -= 4; M32(esp) = 0x57c348u; SAVEALL; F_005824a0(c); ABI_CHECK(0x5824a0u, 0x57c343u); RETCHK(0x57c348u, 0x57c343u); LOADALL;
  /* 0057c348 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057c34e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c34f call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c355u; SAVEALL; call_ind(c, t_); RETCHK(0x57c355u, 0x57c34fu); LOADALL; }
  /* 0057c355 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c358 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c35a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c35b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c35c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c35d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c35e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c361 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c362:;
  /* 0057c362 mov ebp, ebx */ { ebp = (u32)(ebx); }
  /* 0057c364 shr ebp, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 0057c367 and ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
L_0057c36a:;
  /* 0057c36a cmp ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c36d jne 0x57c1fd */ if (!ZF_) goto L_0057c1fd;
  /* 0057c373 mov ecx, 4 */ { ecx = (u32)(0x4u); }
  /* 0057c378 jmp 0x57c20c */ goto L_0057c20c;
L_0057c37d:;
  /* 0057c37d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c37e push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057c383 call 0x5bf750 */ esp -= 4; M32(esp) = 0x57c388u; SAVEALL; F_005bf750(c); ABI_CHECK(0x5bf750u, 0x57c383u); RETCHK(0x57c388u, 0x57c383u); LOADALL;
  /* 0057c388 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c38b mov eax, esi */ { eax = (u32)(esi); }
  /* 0057c38d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c38e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c38f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c390 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c391 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c394 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c395:;
  /* 0057c395 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0057c397 mov dword ptr [esp + 0x14], 2 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x2u); }
  /* 0057c39f call 0x619d80 */ esp -= 4; M32(esp) = 0x57c3a4u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57c39fu); RETCHK(0x57c3a4u, 0x57c39fu); LOADALL;
  /* 0057c3a4 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 0057c3a8 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 0057c3ac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c3ad call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57c3b2u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57c3adu); RETCHK(0x57c3b2u, 0x57c3adu); LOADALL;
  /* 0057c3b2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057c3b5:;
  /* 0057c3b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c3b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c3b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c3b8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c3ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c3bb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c3be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c3c0(CPU *c) {
  NATIVE_HOOK(0x57c3c0u) REGS; LOADALL;
L_0057c3c0:;
  /* 0057c3c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057c3c4 inc word ptr [eax + 0xe] */ { const u32 m_ = (u32)(eax + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ + 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_INC, a_, 1, r_, 2); }
  /* 0057c3c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c3d0(CPU *c) {
  NATIVE_HOOK(0x57c3d0u) REGS; LOADALL;
L_0057c3d0:;
  /* 0057c3d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c3d1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057c3d5 mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c3d9 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057c3dc dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057c3dd test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c3df jg 0x57c469 */ if (!(ZF_|LT_)) goto L_0057c469;
  /* 0057c3e5 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057c3e8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c3ea je 0x57c3f5 */ if (ZF_) goto L_0057c3f5;
  /* 0057c3ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c3ed call 0x5beff0 */ esp -= 4; M32(esp) = 0x57c3f2u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57c3edu); RETCHK(0x57c3f2u, 0x57c3edu); LOADALL;
  /* 0057c3f2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057c3f5:;
  /* 0057c3f5 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0057c3f8 mov dx, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c3fc or word ptr [esi + 0xc], 0xfff */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M16(m_), b_ = 0xfffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0057c402 mov word ptr [esi + 0xe], dx */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057c406 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c408 je 0x57c41a */ if (ZF_) goto L_0057c41a;
  /* 0057c40a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c40b call 0x581140 */ esp -= 4; M32(esp) = 0x57c410u; SAVEALL; F_00581140(c); ABI_CHECK(0x581140u, 0x57c40bu); RETCHK(0x57c410u, 0x57c40bu); LOADALL;
  /* 0057c410 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c413 mov dword ptr [esi + 0x54], 0 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x0u); }
L_0057c41a:;
  /* 0057c41a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c41b push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057c420 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57c425u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57c420u); RETCHK(0x57c425u, 0x57c420u); LOADALL;
  /* 0057c425 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057c428 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c42b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c42d je 0x57c445 */ if (ZF_) goto L_0057c445;
  /* 0057c42f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c430 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057c435 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c43bu; SAVEALL; call_ind(c, t_); RETCHK(0x57c43bu, 0x57c435u); LOADALL; }
  /* 0057c43b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c43e mov dword ptr [esi + 0x5c], 0 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x0u); }
L_0057c445:;
  /* 0057c445 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0057c448 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c449 call 0x5824a0 */ esp -= 4; M32(esp) = 0x57c44eu; SAVEALL; F_005824a0(c); ABI_CHECK(0x5824a0u, 0x57c449u); RETCHK(0x57c44eu, 0x57c449u); LOADALL;
  /* 0057c44e dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057c452 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057c458 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c459 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c45fu; SAVEALL; call_ind(c, t_); RETCHK(0x57c45fu, 0x57c459u); LOADALL; }
  /* 0057c45f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c462 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057c467 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c468 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c469:;
  /* 0057c469 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057c46a mov word ptr [esi + 0xe], ax */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057c46e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057c473 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c474 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c480(CPU *c) {
  NATIVE_HOOK(0x57c480u) REGS; LOADALL;
L_0057c480:;
  /* 0057c480 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057c484 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057c488 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057c48c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c48d mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057c491 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c492 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057c496 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c497 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c498 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c499 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057c49e call 0x5bf540 */ esp -= 4; M32(esp) = 0x57c4a3u; SAVEALL; F_005bf540(c); ABI_CHECK(0x5bf540u, 0x57c49eu); RETCHK(0x57c4a3u, 0x57c49eu); LOADALL;
  /* 0057c4a3 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c4a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c4b0(CPU *c) {
  NATIVE_HOOK(0x57c4b0u) REGS; LOADALL;
L_0057c4b0:;
  /* 0057c4b0 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057c4b4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057c4b8 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057c4bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c4bd mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057c4c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c4c2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c4c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c4c4 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057c4c9 call 0x5bf820 */ esp -= 4; M32(esp) = 0x57c4ceu; SAVEALL; F_005bf820(c); ABI_CHECK(0x5bf820u, 0x57c4c9u); RETCHK(0x57c4ceu, 0x57c4c9u); LOADALL;
  /* 0057c4ce add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c4d1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c4e0(CPU *c) {
  NATIVE_HOOK(0x57c4e0u) REGS; LOADALL;
L_0057c4e0:;
  /* 0057c4e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c4e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c4e2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0057c4e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c4e7 call 0x57c520 */ esp -= 4; M32(esp) = 0x57c4ecu; SAVEALL; F_0057c520(c); ABI_CHECK(0x57c520u, 0x57c4e7u); RETCHK(0x57c4ecu, 0x57c4e7u); LOADALL;
  /* 0057c4ec mov esi, eax */ { esi = (u32)(eax); }
  /* 0057c4ee lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 0057c4f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c4f2 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0057c4f5 call 0x582620 */ esp -= 4; M32(esp) = 0x57c4fau; SAVEALL; F_00582620(c); ABI_CHECK(0x582620u, 0x57c4f5u); RETCHK(0x57c4fau, 0x57c4f5u); LOADALL;
  /* 0057c4fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c4fb push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057c500 lea esi, [esi + eax + 0xc] */ esi = (u32)((u32)(esi + eax + 0xcu));
  /* 0057c504 call 0x5bfa40 */ esp -= 4; M32(esp) = 0x57c509u; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x57c504u); RETCHK(0x57c509u, 0x57c504u); LOADALL;
  /* 0057c509 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c50c lea eax, [eax + esi + 0xc] */ eax = (u32)((u32)(eax + esi + 0xcu));
  /* 0057c510 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c511 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c512 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c520(CPU *c) {
  NATIVE_HOOK(0x57c520u) REGS; LOADALL;
L_0057c520:;
  /* 0057c520 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057c524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c525 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c526 mov eax, 0x10 */ { eax = (u32)(0x10u); }
  /* 0057c52b mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057c52e test edx, 0x1000000 */ { u32 a_ = edx, b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c534 jne 0x57c588 */ if (!ZF_) goto L_0057c588;
  /* 0057c536 mov esi, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); esi = (u32)(M32(m_)); }
  /* 0057c539 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c53b je 0x57c557 */ if (ZF_) goto L_0057c557;
  /* 0057c53d test dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057c540 je 0x57c549 */ if (ZF_) goto L_0057c549;
  /* 0057c542 lea eax, [esi*4 + 0x10] */ eax = (u32)((u32)(esi * 4u + 0x10u));
L_0057c549:;
  /* 0057c549 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0057c54c mov edi, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edi = (u32)(M32(m_)); }
  /* 0057c54f imul edx, esi */ { s64 p_ = (s64)(s32)edx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0057c552 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0057c554 lea eax, [eax + edx*8] */ eax = (u32)((u32)(eax + edx * 8u));
L_0057c557:;
  /* 0057c557 mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 0057c55a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c55c jle 0x57c58d */ if ((ZF_|LT_)) goto L_0057c58d;
  /* 0057c55e mov ecx, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0057c561 add ecx, 0x18 */ { u32 a_ = ecx, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0057c564:;
  /* 0057c564 mov edi, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0057c567 add eax, 0x18 */ { u32 a_ = eax, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057c56a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c56c je 0x57c574 */ if (ZF_) goto L_0057c574;
  /* 0057c56e lea edi, [esi + esi*2] */ edi = (u32)((u32)(esi + esi * 2u));
  /* 0057c571 lea eax, [eax + edi*4] */ eax = (u32)((u32)(eax + edi * 4u));
L_0057c574:;
  /* 0057c574 cmp dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c577 je 0x57c57f */ if (ZF_) goto L_0057c57f;
  /* 0057c579 lea edi, [esi + esi*2] */ edi = (u32)((u32)(esi + esi * 2u));
  /* 0057c57c lea eax, [eax + edi*4] */ eax = (u32)((u32)(eax + edi * 4u));
L_0057c57f:;
  /* 0057c57f add ecx, 0x1c */ { u32 a_ = ecx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0057c582 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057c583 jne 0x57c564 */ if (!ZF_) goto L_0057c564;
  /* 0057c585 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c586 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c587 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c588:;
  /* 0057c588 mov eax, 0x28 */ { eax = (u32)(0x28u); }
L_0057c58d:;
  /* 0057c58d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c58e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c58f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c590(CPU *c) {
  NATIVE_HOOK(0x57c590u) REGS; LOADALL;
L_0057c590:;
  /* 0057c590 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c593 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057c594 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c595 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c596 mov esi, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); esi = (u32)(M32(m_)); }
  /* 0057c59a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c59b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c59c call 0x57c520 */ esp -= 4; M32(esp) = 0x57c5a1u; SAVEALL; F_0057c520(c); ABI_CHECK(0x57c520u, 0x57c59cu); RETCHK(0x57c5a1u, 0x57c59cu); LOADALL;
  /* 0057c5a1 mov edi, eax */ { edi = (u32)(eax); }
  /* 0057c5a3 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 0057c5a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c5a7 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057c5aa call 0x582620 */ esp -= 4; M32(esp) = 0x57c5afu; SAVEALL; F_00582620(c); ABI_CHECK(0x582620u, 0x57c5aau); RETCHK(0x57c5afu, 0x57c5aau); LOADALL;
  /* 0057c5af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c5b0 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057c5b5 lea edi, [edi + eax + 0xc] */ edi = (u32)((u32)(edi + eax + 0xcu));
  /* 0057c5b9 call 0x5bfa40 */ esp -= 4; M32(esp) = 0x57c5beu; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x57c5b9u); RETCHK(0x57c5beu, 0x57c5b9u); LOADALL;
  /* 0057c5be mov ebp, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); ebp = (u32)(M32(m_)); }
  /* 0057c5c2 lea eax, [edi + eax + 0xc] */ eax = (u32)((u32)(edi + eax + 0xcu));
  /* 0057c5c6 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 0057c5c8 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 0057c5cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c5ce push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0057c5d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c5d1 call 0x5b3830 */ esp -= 4; M32(esp) = 0x57c5d6u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x57c5d1u); RETCHK(0x57c5d6u, 0x57c5d1u); LOADALL;
  /* 0057c5d6 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c5d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c5db jne 0x57c5e7 */ if (!ZF_) goto L_0057c5e7;
L_0057c5dd:;
  /* 0057c5dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c5de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c5df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c5e0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c5e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c5e3 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c5e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c5e7:;
  /* 0057c5e7 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 0057c5e9 push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 0057c5ee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c5ef call 0x57c520 */ esp -= 4; M32(esp) = 0x57c5f4u; SAVEALL; F_0057c520(c); ABI_CHECK(0x57c520u, 0x57c5efu); RETCHK(0x57c5f4u, 0x57c5efu); LOADALL;
  /* 0057c5f4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c5f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c5f8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0057c5fa push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c5fb call 0x5b3830 */ esp -= 4; M32(esp) = 0x57c600u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x57c5fbu); RETCHK(0x57c600u, 0x57c5fbu); LOADALL;
  /* 0057c600 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c603 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c605 jne 0x57c60f */ if (!ZF_) goto L_0057c60f;
  /* 0057c607 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c608 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c609 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c60a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c60b add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c60e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c60f:;
  /* 0057c60f mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0057c612 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057c615 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c61a mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057c61d shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0057c620 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c622 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057c625 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0057c629 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 0057c62d mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 0057c631 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057c634 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0057c636 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c637 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c638 mov dword ptr [esp + 0x2c], edx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0057c63c mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 0057c640 call 0x5b3130 */ esp -= 4; M32(esp) = 0x57c645u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x57c640u); RETCHK(0x57c645u, 0x57c640u); LOADALL;
  /* 0057c645 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c648 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c64a jne 0x57c654 */ if (!ZF_) goto L_0057c654;
  /* 0057c64c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c64d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c64e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c64f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c650 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c653 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c654:;
  /* 0057c654 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057c657 test eax, 0x1000000 */ { u32 a_ = eax, b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c65c jne 0x57c725 */ if (!ZF_) goto L_0057c725;
  /* 0057c662 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057c665 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c667 je 0x57c725 */ if (ZF_) goto L_0057c725;
  /* 0057c66d test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057c66f je 0x57c692 */ if (ZF_) goto L_0057c692;
  /* 0057c671 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0057c674 lea edx, [ecx*4] */ edx = (u32)((u32)(ecx * 4u));
  /* 0057c67b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c67c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c67d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c67e call 0x5b3130 */ esp -= 4; M32(esp) = 0x57c683u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x57c67eu); RETCHK(0x57c683u, 0x57c67eu); LOADALL;
  /* 0057c683 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c686 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c688 jne 0x57c692 */ if (!ZF_) goto L_0057c692;
  /* 0057c68a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c68b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c68c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c68d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c68e add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c691 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c692:;
  /* 0057c692 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0057c695 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c697 jle 0x57c6d2 */ if ((ZF_|LT_)) goto L_0057c6d2;
  /* 0057c699 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057c69c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057c69e shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0057c6a1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c6a3 mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 0057c6a7 jle 0x57c6d2 */ if ((ZF_|LT_)) goto L_0057c6d2;
  /* 0057c6a9 lea ebx, [esi + 0x34] */ ebx = (u32)((u32)(esi + 0x34u));
  /* 0057c6ac jmp 0x57c6b2 */ goto L_0057c6b2;
L_0057c6ae:;
  /* 0057c6ae mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
L_0057c6b2:;
  /* 0057c6b2 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0057c6b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c6b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c6b6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c6b7 call 0x5b3990 */ esp -= 4; M32(esp) = 0x57c6bcu; SAVEALL; F_005b3990(c); ABI_CHECK(0x5b3990u, 0x57c6b7u); RETCHK(0x57c6bcu, 0x57c6b7u); LOADALL;
  /* 0057c6bc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c6bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c6c1 je 0x57c5dd */ if (ZF_) goto L_0057c5dd;
  /* 0057c6c7 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0057c6ca inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c6cb add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0057c6ce cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c6d0 jl 0x57c6ae */ if (LT_) goto L_0057c6ae;
L_0057c6d2:;
  /* 0057c6d2 mov ebx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0057c6d5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c6d7 je 0x57c725 */ if (ZF_) goto L_0057c725;
  /* 0057c6d9 mov edi, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edi = (u32)(M32(m_)); }
L_0057c6dc:;
  /* 0057c6dc xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057c6de xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c6e0 mov dx, word ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c6e3 mov ax, word ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c6e7 shl edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0057c6ea or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057c6ec xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c6ee mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0057c6f2 mov cx, word ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c6f6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057c6f8 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 0057c6fc mov dx, word ptr [edi + 6] */ { const u32 m_ = (u32)(edi + 0x6u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c700 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0057c702 shl ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0057c705 or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c707 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c708 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c709 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057c70a mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0057c70e add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057c711 call 0x5b3130 */ esp -= 4; M32(esp) = 0x57c716u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x57c711u); RETCHK(0x57c716u, 0x57c711u); LOADALL;
  /* 0057c716 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c719 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c71b je 0x57c5dd */ if (ZF_) goto L_0057c5dd;
  /* 0057c721 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c723 jne 0x57c6dc */ if (!ZF_) goto L_0057c6dc;
L_0057c725:;
  /* 0057c725 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057c728 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0057c72a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c72c jle 0x57c809 */ if ((ZF_|LT_)) goto L_0057c809;
  /* 0057c732 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0057c734:;
  /* 0057c734 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0057c737 lea eax, [edi + ecx] */ eax = (u32)((u32)(edi + ecx));
  /* 0057c73a lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 0057c73d mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057c740 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0057c744 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057c747 mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0057c74b mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057c74e mov dword ptr [esp + 0x30], ecx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0057c752 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057c755 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057c758 test ecx, 0x1000000 */ { u32 a_ = ecx, b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c75e mov dword ptr [esp + 0x34], edx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edx); }
  /* 0057c762 je 0x57c770 */ if (ZF_) goto L_0057c770;
  /* 0057c764 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c766 mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 0057c76a mov dword ptr [esp + 0x3c], eax */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(eax); }
  /* 0057c76e jmp 0x57c78c */ goto L_0057c78c;
L_0057c770:;
  /* 0057c770 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057c773 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057c775 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c777 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0057c77a mov dword ptr [esp + 0x38], ecx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0057c77e mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0057c781 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057c783 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c785 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0057c788 mov dword ptr [esp + 0x3c], edx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edx); }
L_0057c78c:;
  /* 0057c78c lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 0057c790 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0057c792 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c793 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c794 call 0x5b3130 */ esp -= 4; M32(esp) = 0x57c799u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x57c794u); RETCHK(0x57c799u, 0x57c794u); LOADALL;
  /* 0057c799 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c79c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c79e je 0x57c5dd */ if (ZF_) goto L_0057c5dd;
  /* 0057c7a4 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 0057c7a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c7aa je 0x57c7cf */ if (ZF_) goto L_0057c7cf;
  /* 0057c7ac mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057c7af mov edx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 0057c7b2 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 0057c7b5 mov eax, dword ptr [edi + edx + 0x14] */ { const u32 m_ = (u32)(edi + edx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057c7b9 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0057c7bc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c7bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c7be push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c7bf call 0x5b3990 */ esp -= 4; M32(esp) = 0x57c7c4u; SAVEALL; F_005b3990(c); ABI_CHECK(0x5b3990u, 0x57c7bfu); RETCHK(0x57c7c4u, 0x57c7bfu); LOADALL;
  /* 0057c7c4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c7c7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c7c9 je 0x57c5dd */ if (ZF_) goto L_0057c5dd;
L_0057c7cf:;
  /* 0057c7cf mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0057c7d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c7d5 je 0x57c7fa */ if (ZF_) goto L_0057c7fa;
  /* 0057c7d7 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057c7da mov edx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 0057c7dd lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 0057c7e0 mov eax, dword ptr [edi + edx + 0x18] */ { const u32 m_ = (u32)(edi + edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057c7e4 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0057c7e7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c7e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c7e9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c7ea call 0x5b3990 */ esp -= 4; M32(esp) = 0x57c7efu; SAVEALL; F_005b3990(c); ABI_CHECK(0x5b3990u, 0x57c7eau); RETCHK(0x57c7efu, 0x57c7eau); LOADALL;
  /* 0057c7ef add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c7f2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c7f4 je 0x57c5dd */ if (ZF_) goto L_0057c5dd;
L_0057c7fa:;
  /* 0057c7fa mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057c7fd inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c7fe add edi, 0x1c */ { u32 a_ = edi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057c801 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c803 jl 0x57c734 */ if (LT_) goto L_0057c734;
L_0057c809:;
  /* 0057c809 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 0057c80c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c80d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c80e call 0x582680 */ esp -= 4; M32(esp) = 0x57c813u; SAVEALL; F_00582680(c); ABI_CHECK(0x582680u, 0x57c80eu); RETCHK(0x57c813u, 0x57c80eu); LOADALL;
  /* 0057c813 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c816 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c818 jne 0x57c822 */ if (!ZF_) goto L_0057c822;
  /* 0057c81a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c81b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c81c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c81d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c81e add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c821 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c822:;
  /* 0057c822 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c823 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c824 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057c829 call 0x5bfa80 */ esp -= 4; M32(esp) = 0x57c82eu; SAVEALL; F_005bfa80(c); ABI_CHECK(0x5bfa80u, 0x57c829u); RETCHK(0x57c82eu, 0x57c829u); LOADALL;
  /* 0057c82e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c831 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057c833 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057c835 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c836 and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c838 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c839 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c83a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c83b add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c83e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057c840(CPU *c) {
  NATIVE_HOOK(0x57c840u) REGS; LOADALL;
L_0057c840:;
  /* 0057c840 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c843 lea eax, [esp + 0x34] */ eax = (u32)((u32)(esp + 0x34u));
  /* 0057c847 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057c848 mov ebx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebx = (u32)(M32(m_)); }
  /* 0057c84c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c84d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c84e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c84f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c850 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057c852 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0057c854 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057c855 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57c85au; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x57c855u); RETCHK(0x57c85au, 0x57c855u); LOADALL;
  /* 0057c85a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c85d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c85f je 0x57cd4d */ if (ZF_) goto L_0057cd4d;
  /* 0057c865 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 0057c869 cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c86e jb 0x57cd2a */ if (CF_) goto L_0057cd2a;
  /* 0057c874 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c879 ja 0x57cd2a */ if (!(CF_|ZF_)) goto L_0057cd2a;
  /* 0057c87f lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 0057c883 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0057c885 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c886 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057c887 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x57c88cu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x57c887u); RETCHK(0x57c88cu, 0x57c887u); LOADALL;
  /* 0057c88c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c88f cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c892 jne 0x57cd4d */ if (!ZF_) goto L_0057cd4d;
  /* 0057c898 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0057c89c mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0057c8a0 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0057c8a4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c8a5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c8a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c8a7 call 0x57c1a0 */ esp -= 4; M32(esp) = 0x57c8acu; SAVEALL; F_0057c1a0(c); ABI_CHECK(0x57c1a0u, 0x57c8a7u); RETCHK(0x57c8acu, 0x57c8a7u); LOADALL;
  /* 0057c8ac mov esi, eax */ { esi = (u32)(eax); }
  /* 0057c8ae add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c8b1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c8b3 je 0x57cd4d */ if (ZF_) goto L_0057cd4d;
  /* 0057c8b9 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 0057c8bd cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c8c0 jle 0x57c95e */ if ((ZF_|LT_)) goto L_0057c95e;
  /* 0057c8c6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057c8c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c8c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c8c9 call 0x57bc80 */ esp -= 4; M32(esp) = 0x57c8ceu; SAVEALL; F_0057bc80(c); ABI_CHECK(0x57bc80u, 0x57c8c9u); RETCHK(0x57c8ceu, 0x57c8c9u); LOADALL;
  /* 0057c8ce add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c8d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c8d3 jge 0x57c95e */ if (!LT_) goto L_0057c95e;
L_0057c8d9:;
  /* 0057c8d9 mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c8dd movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057c8e0 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057c8e1 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c8e3 jg 0x57ccb4 */ if (!(ZF_|LT_)) goto L_0057ccb4;
  /* 0057c8e9 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057c8ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c8ee je 0x57c8f9 */ if (ZF_) goto L_0057c8f9;
  /* 0057c8f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c8f1 call 0x5beff0 */ esp -= 4; M32(esp) = 0x57c8f6u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57c8f1u); RETCHK(0x57c8f6u, 0x57c8f1u); LOADALL;
  /* 0057c8f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057c8f9:;
  /* 0057c8f9 mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057c8fd push 0xfff */ { u32 v_ = 0xfffu; esp -= 4; M32(esp) = v_; }
  /* 0057c902 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c903 mov word ptr [esi + 0xe], ax */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057c907 call 0x57bf10 */ esp -= 4; M32(esp) = 0x57c90cu; SAVEALL; F_0057bf10(c); ABI_CHECK(0x57bf10u, 0x57c907u); RETCHK(0x57c90cu, 0x57c907u); LOADALL;
  /* 0057c90c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c90d push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057c912 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57c917u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57c912u); RETCHK(0x57c917u, 0x57c912u); LOADALL;
  /* 0057c917 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057c91a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c91d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c91f je 0x57c938 */ if (ZF_) goto L_0057c938;
  /* 0057c921 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057c927 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057c928 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c92eu; SAVEALL; call_ind(c, t_); RETCHK(0x57c92eu, 0x57c928u); LOADALL; }
  /* 0057c92e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c931 mov dword ptr [esi + 0x5c], 0 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x0u); }
L_0057c938:;
  /* 0057c938 lea edx, [esi + 0x20] */ edx = (u32)((u32)(esi + 0x20u));
  /* 0057c93b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c93c call 0x5824a0 */ esp -= 4; M32(esp) = 0x57c941u; SAVEALL; F_005824a0(c); ABI_CHECK(0x5824a0u, 0x57c93cu); RETCHK(0x57c941u, 0x57c93cu); LOADALL;
  /* 0057c941 dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057c945 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057c94a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057c94b call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57c951u; SAVEALL; call_ind(c, t_); RETCHK(0x57c951u, 0x57c94bu); LOADALL; }
  /* 0057c951 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c954 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057c956 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057c957 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057c958 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057c959 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057c95a add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c95d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057c95e:;
  /* 0057c95e test dword ptr [esi + 8], 0x1000000 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c965 jne 0x57ca2d */ if (!ZF_) goto L_0057ca2d;
  /* 0057c96b mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057c96e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c970 je 0x57ca2d */ if (ZF_) goto L_0057ca2d;
  /* 0057c976 test byte ptr [esp + 0x18], 8 */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057c97b je 0x57c99a */ if (ZF_) goto L_0057c99a;
  /* 0057c97d mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0057c980 lea edi, [eax*4] */ edi = (u32)((u32)(eax * 4u));
  /* 0057c987 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c988 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c989 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057c98a call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x57c98fu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x57c98au); RETCHK(0x57c98fu, 0x57c98au); LOADALL;
  /* 0057c98f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c992 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c994 jne 0x57c8d9 */ if (!ZF_) goto L_0057c8d9;
L_0057c99a:;
  /* 0057c99a mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0057c99d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c99f jle 0x57c9d9 */ if ((ZF_|LT_)) goto L_0057c9d9;
  /* 0057c9a1 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057c9a4 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0057c9a6 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0057c9a9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c9ab mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0057c9af jle 0x57c9d9 */ if ((ZF_|LT_)) goto L_0057c9d9;
  /* 0057c9b1 lea ebp, [esi + 0x34] */ ebp = (u32)((u32)(esi + 0x34u));
L_0057c9b4:;
  /* 0057c9b4 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057c9b8 mov edx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (u32)(M32(m_)); }
  /* 0057c9bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057c9bc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057c9bd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057c9be call 0x5b3a40 */ esp -= 4; M32(esp) = 0x57c9c3u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x57c9beu); RETCHK(0x57c9c3u, 0x57c9beu); LOADALL;
  /* 0057c9c3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c9c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c9c8 je 0x57caaf */ if (ZF_) goto L_0057caaf;
  /* 0057c9ce mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0057c9d1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057c9d2 add ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0057c9d5 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c9d7 jl 0x57c9b4 */ if (LT_) goto L_0057c9b4;
L_0057c9d9:;
  /* 0057c9d9 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057c9dc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057c9de mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0057c9e2 je 0x57ca2d */ if (ZF_) goto L_0057ca2d;
  /* 0057c9e4 mov edi, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0057c9e7 lea ebp, [eax*8] */ ebp = (u32)((u32)(eax * 8u));
  /* 0057c9ee push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0057c9ef push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057c9f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057c9f1 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x57c9f6u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x57c9f1u); RETCHK(0x57c9f6u, 0x57c9f1u); LOADALL;
  /* 0057c9f6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057c9f9 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057c9fb jne 0x57caaf */ if (!ZF_) goto L_0057caaf;
  /* 0057ca01 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057ca05 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ca07 je 0x57ca2d */ if (ZF_) goto L_0057ca2d;
L_0057ca09:;
  /* 0057ca09 mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057ca0c mov dx, word ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057ca10 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057ca13 mov dx, word ptr [edi + 6] */ { const u32 m_ = (u32)(edi + 0x6u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057ca17 mov word ptr [edi + 2], ax */ { const u32 m_ = (u32)(edi + 0x2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057ca1b mov ax, word ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057ca1f mov word ptr [edi + 4], dx */ { const u32 m_ = (u32)(edi + 0x4u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057ca23 mov word ptr [edi + 6], ax */ { const u32 m_ = (u32)(edi + 0x6u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057ca27 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057ca2a dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057ca2b jne 0x57ca09 */ if (!ZF_) goto L_0057ca09;
L_0057ca2d:;
  /* 0057ca2d mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057ca30 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0057ca32 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ca34 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 0057ca38 jle 0x57cb8a */ if ((ZF_|LT_)) goto L_0057cb8a;
L_0057ca3e:;
  /* 0057ca3e mov edi, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edi = (u32)(M32(m_)); }
  /* 0057ca41 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 0057ca45 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0057ca47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057ca48 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057ca49 add edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0057ca4b call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x57ca50u; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x57ca4bu); RETCHK(0x57ca50u, 0x57ca4bu); LOADALL;
  /* 0057ca50 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ca53 cmp eax, 0x18 */ { u32 a_ = eax, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ca56 jne 0x57caaf */ if (!ZF_) goto L_0057caaf;
  /* 0057ca58 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 0057ca5c lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0057ca5f mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0057ca62 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0057ca66 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0057ca69 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 0057ca6d mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0057ca70 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 0057ca74 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0057ca77 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 0057ca7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ca7d je 0x57cb50 */ if (ZF_) goto L_0057cb50;
  /* 0057ca83 mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0057ca87 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ca89 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057ca8c je 0x57cb34 */ if (ZF_) goto L_0057cb34;
  /* 0057ca92 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057ca95 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 0057ca98 shl ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0057ca9b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057ca9c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057ca9d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057ca9e call 0x5b3a40 */ esp -= 4; M32(esp) = 0x57caa3u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x57ca9eu); RETCHK(0x57caa3u, 0x57ca9eu); LOADALL;
  /* 0057caa3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057caa6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057caa8 je 0x57caaf */ if (ZF_) goto L_0057caaf;
  /* 0057caaa jmp 0x57cb73 */ goto L_0057cb73;
L_0057caaf:;
  /* 0057caaf mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057cab3 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057cab6 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057cab7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cab9 jg 0x57ccb4 */ if (!(ZF_|LT_)) goto L_0057ccb4;
  /* 0057cabf mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057cac2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cac4 je 0x57cacf */ if (ZF_) goto L_0057cacf;
  /* 0057cac6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cac7 call 0x5beff0 */ esp -= 4; M32(esp) = 0x57caccu; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57cac7u); RETCHK(0x57caccu, 0x57cac7u); LOADALL;
  /* 0057cacc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057cacf:;
  /* 0057cacf mov dx, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057cad3 push 0xfff */ { u32 v_ = 0xfffu; esp -= 4; M32(esp) = v_; }
  /* 0057cad8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cad9 mov word ptr [esi + 0xe], dx */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057cadd call 0x57bf10 */ esp -= 4; M32(esp) = 0x57cae2u; SAVEALL; F_0057bf10(c); ABI_CHECK(0x57bf10u, 0x57caddu); RETCHK(0x57cae2u, 0x57caddu); LOADALL;
  /* 0057cae2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cae3 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057cae8 call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57caedu; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57cae8u); RETCHK(0x57caedu, 0x57cae8u); LOADALL;
  /* 0057caed mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057caf0 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057caf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057caf5 je 0x57cb0d */ if (ZF_) goto L_0057cb0d;
  /* 0057caf7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057caf8 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057cafd call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57cb03u; SAVEALL; call_ind(c, t_); RETCHK(0x57cb03u, 0x57cafdu); LOADALL; }
  /* 0057cb03 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cb06 mov dword ptr [esi + 0x5c], 0 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x0u); }
L_0057cb0d:;
  /* 0057cb0d lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0057cb10 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057cb11 call 0x5824a0 */ esp -= 4; M32(esp) = 0x57cb16u; SAVEALL; F_005824a0(c); ABI_CHECK(0x5824a0u, 0x57cb11u); RETCHK(0x57cb16u, 0x57cb11u); LOADALL;
  /* 0057cb16 dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057cb1a mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057cb20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cb21 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57cb27u; SAVEALL; call_ind(c, t_); RETCHK(0x57cb27u, 0x57cb21u); LOADALL; }
  /* 0057cb27 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cb2a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057cb2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057cb2d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057cb2e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057cb2f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057cb30 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cb33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057cb34:;
  /* 0057cb34 mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0057cb37 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 0057cb3a shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0057cb3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cb3e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057cb3f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057cb40 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x57cb45u; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x57cb40u); RETCHK(0x57cb45u, 0x57cb40u); LOADALL;
  /* 0057cb45 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cb48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cb4a je 0x57caaf */ if (ZF_) goto L_0057caaf;
L_0057cb50:;
  /* 0057cb50 mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0057cb54 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cb56 je 0x57cb73 */ if (ZF_) goto L_0057cb73;
  /* 0057cb58 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057cb5b lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 0057cb5e mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057cb61 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0057cb64 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057cb65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cb66 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057cb67 call 0x5b3a40 */ esp -= 4; M32(esp) = 0x57cb6cu; SAVEALL; F_005b3a40(c); ABI_CHECK(0x5b3a40u, 0x57cb67u); RETCHK(0x57cb6cu, 0x57cb67u); LOADALL;
  /* 0057cb6c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cb6f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cb71 je 0x57cbcf */ if (ZF_) goto L_0057cbcf;
L_0057cb73:;
  /* 0057cb73 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057cb77 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0057cb7a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0057cb7b add ebp, 0x1c */ { u32 a_ = ebp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0057cb7e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057cb80 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0057cb84 jl 0x57ca3e */ if (LT_) goto L_0057ca3e;
L_0057cb8a:;
  /* 0057cb8a lea edx, [esp + 0x44] */ edx = (u32)((u32)(esp + 0x44u));
  /* 0057cb8e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057cb8f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057cb91 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0057cb93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057cb94 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57cb99u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x57cb94u); RETCHK(0x57cb99u, 0x57cb94u); LOADALL;
  /* 0057cb99 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cb9c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cb9e je 0x57cd4d */ if (ZF_) goto L_0057cd4d;
  /* 0057cba4 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 0057cba8 cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057cbad jb 0x57cccd */ if (CF_) goto L_0057cccd;
  /* 0057cbb3 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057cbb8 ja 0x57cccd */ if (!(CF_|ZF_)) goto L_0057cccd;
  /* 0057cbbe lea edi, [esi + 0x20] */ edi = (u32)((u32)(esi + 0x20u));
  /* 0057cbc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057cbc2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057cbc3 call 0x5827d0 */ esp -= 4; M32(esp) = 0x57cbc8u; SAVEALL; F_005827d0(c); ABI_CHECK(0x5827d0u, 0x57cbc3u); RETCHK(0x57cbc8u, 0x57cbc3u); LOADALL;
  /* 0057cbc8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cbcb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cbcd jne 0x57cc06 */ if (!ZF_) goto L_0057cc06;
L_0057cbcf:;
  /* 0057cbcf mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057cbd3 movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057cbd6 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057cbd7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_0057cbd9:;
  /* 0057cbd9 jg 0x57ccb4 */ if (!(ZF_|LT_)) goto L_0057ccb4;
  /* 0057cbdf mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057cbe2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cbe4 je 0x57cbef */ if (ZF_) goto L_0057cbef;
  /* 0057cbe6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cbe7 call 0x5beff0 */ esp -= 4; M32(esp) = 0x57cbecu; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57cbe7u); RETCHK(0x57cbecu, 0x57cbe7u); LOADALL;
  /* 0057cbec add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057cbef:;
  /* 0057cbef dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057cbf3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cbf4 call 0x57cd60 */ esp -= 4; M32(esp) = 0x57cbf9u; SAVEALL; F_0057cd60(c); ABI_CHECK(0x57cd60u, 0x57cbf4u); RETCHK(0x57cbf9u, 0x57cbf4u); LOADALL;
  /* 0057cbf9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cbfc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057cbfe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057cbff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057cc00 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057cc01 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057cc02 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cc05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057cc06:;
  /* 0057cc06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cc07 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057cc08 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057cc0d call 0x5bf8c0 */ esp -= 4; M32(esp) = 0x57cc12u; SAVEALL; F_005bf8c0(c); ABI_CHECK(0x5bf8c0u, 0x57cc0du); RETCHK(0x57cc12u, 0x57cc0du); LOADALL;
  /* 0057cc12 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cc15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cc17 jne 0x57cc25 */ if (!ZF_) goto L_0057cc25;
  /* 0057cc19 mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057cc1d movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057cc20 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057cc21 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cc23 jmp 0x57cbd9 */ goto L_0057cbd9;
L_0057cc25:;
  /* 0057cc25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cc26 call 0x57bf40 */ esp -= 4; M32(esp) = 0x57cc2bu; SAVEALL; F_0057bf40(c); ABI_CHECK(0x57bf40u, 0x57cc26u); RETCHK(0x57cc2bu, 0x57cc26u); LOADALL;
  /* 0057cc2b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cc2e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cc30 jne 0x57ccc3 */ if (!ZF_) goto L_0057ccc3;
  /* 0057cc36 mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057cc3a movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057cc3d dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057cc3e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cc40 jg 0x57ccb4 */ if (!(ZF_|LT_)) goto L_0057ccb4;
  /* 0057cc42 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057cc45 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cc47 je 0x57cc52 */ if (ZF_) goto L_0057cc52;
  /* 0057cc49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cc4a call 0x5beff0 */ esp -= 4; M32(esp) = 0x57cc4fu; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57cc4au); RETCHK(0x57cc4fu, 0x57cc4au); LOADALL;
  /* 0057cc4f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057cc52:;
  /* 0057cc52 mov dx, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057cc56 push 0xfff */ { u32 v_ = 0xfffu; esp -= 4; M32(esp) = v_; }
  /* 0057cc5b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cc5c mov word ptr [esi + 0xe], dx */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057cc60 call 0x57bf10 */ esp -= 4; M32(esp) = 0x57cc65u; SAVEALL; F_0057bf10(c); ABI_CHECK(0x57bf10u, 0x57cc60u); RETCHK(0x57cc65u, 0x57cc60u); LOADALL;
  /* 0057cc65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cc66 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057cc6b call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57cc70u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57cc6bu); RETCHK(0x57cc70u, 0x57cc6bu); LOADALL;
  /* 0057cc70 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057cc73 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cc76 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cc78 je 0x57cc90 */ if (ZF_) goto L_0057cc90;
  /* 0057cc7a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cc7b mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057cc80 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57cc86u; SAVEALL; call_ind(c, t_); RETCHK(0x57cc86u, 0x57cc80u); LOADALL; }
  /* 0057cc86 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cc89 mov dword ptr [esi + 0x5c], 0 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x0u); }
L_0057cc90:;
  /* 0057cc90 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057cc91 call 0x5824a0 */ esp -= 4; M32(esp) = 0x57cc96u; SAVEALL; F_005824a0(c); ABI_CHECK(0x5824a0u, 0x57cc91u); RETCHK(0x57cc96u, 0x57cc91u); LOADALL;
  /* 0057cc96 dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057cc9a mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057cca0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cca1 call dword ptr [ecx + 0x10c] */ { const u32 m_ = (u32)(ecx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57cca7u; SAVEALL; call_ind(c, t_); RETCHK(0x57cca7u, 0x57cca1u); LOADALL; }
  /* 0057cca7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ccaa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ccac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ccad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ccae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057ccaf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057ccb0 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ccb3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ccb4:;
  /* 0057ccb4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057ccb5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ccb6 mov word ptr [esi + 0xe], ax */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0057ccba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ccbb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057ccbc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ccbe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057ccbf add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ccc2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ccc3:;
  /* 0057ccc3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0057ccc5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ccc6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ccc7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057ccc8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057ccc9 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cccc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057cccd:;
  /* 0057cccd mov ax, word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057ccd1 movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0057ccd4 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057ccd5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ccd7 jg 0x57ccf8 */ if (!(ZF_|LT_)) goto L_0057ccf8;
  /* 0057ccd9 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 0057ccdc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ccde je 0x57cce9 */ if (ZF_) goto L_0057cce9;
  /* 0057cce0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cce1 call 0x5beff0 */ esp -= 4; M32(esp) = 0x57cce6u; SAVEALL; F_005beff0(c); ABI_CHECK(0x5beff0u, 0x57cce1u); RETCHK(0x57cce6u, 0x57cce1u); LOADALL;
  /* 0057cce6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057cce9:;
  /* 0057cce9 dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057cced push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057ccee call 0x57cd60 */ esp -= 4; M32(esp) = 0x57ccf3u; SAVEALL; F_0057cd60(c); ABI_CHECK(0x57cd60u, 0x57cceeu); RETCHK(0x57ccf3u, 0x57cceeu); LOADALL;
  /* 0057ccf3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057ccf6 jmp 0x57ccfd */ goto L_0057ccfd;
L_0057ccf8:;
  /* 0057ccf8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057ccf9 mov word ptr [esi + 0xe], ax */ { const u32 m_ = (u32)(esi + 0xeu); M16(m_) = (u16)((eax & 0xffffu)); }
L_0057ccfd:;
  /* 0057ccfd push 0x80000004 */ { u32 v_ = 0x80000004u; esp -= 4; M32(esp) = v_; }
  /* 0057cd02 mov dword ptr [esp + 0x14], 2 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x2u); }
  /* 0057cd0a call 0x619d80 */ esp -= 4; M32(esp) = 0x57cd0fu; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57cd0au); RETCHK(0x57cd0fu, 0x57cd0au); LOADALL;
  /* 0057cd0f mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 0057cd13 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 0057cd17 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cd18 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57cd1du; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57cd18u); RETCHK(0x57cd1du, 0x57cd18u); LOADALL;
  /* 0057cd1d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cd20 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057cd22 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057cd23 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057cd24 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057cd25 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057cd26 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cd29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057cd2a:;
  /* 0057cd2a push 0x80000004 */ { u32 v_ = 0x80000004u; esp -= 4; M32(esp) = v_; }
  /* 0057cd2f mov dword ptr [esp + 0x14], 2 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x2u); }
  /* 0057cd37 call 0x619d80 */ esp -= 4; M32(esp) = 0x57cd3cu; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57cd37u); RETCHK(0x57cd3cu, 0x57cd37u); LOADALL;
  /* 0057cd3c lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 0057cd40 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 0057cd44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057cd45 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57cd4au; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57cd45u); RETCHK(0x57cd4au, 0x57cd45u); LOADALL;
  /* 0057cd4a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057cd4d:;
  /* 0057cd4d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057cd4e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057cd4f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0057cd50 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057cd52 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057cd53 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cd56 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057cd60(CPU *c) {
  NATIVE_HOOK(0x57cd60u) REGS; LOADALL;
L_0057cd60:;
  /* 0057cd60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cd61 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057cd65 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0057cd68 inc word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ + 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_INC, a_, 1, r_, 2); }
  /* 0057cd6c or word ptr [esi + 0xc], 0xfff */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M16(m_), b_ = 0xfffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 2); M16(m_) = (u16)(r_); }
  /* 0057cd72 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cd74 je 0x57cd86 */ if (ZF_) goto L_0057cd86;
  /* 0057cd76 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cd77 call 0x581140 */ esp -= 4; M32(esp) = 0x57cd7cu; SAVEALL; F_00581140(c); ABI_CHECK(0x581140u, 0x57cd77u); RETCHK(0x57cd7cu, 0x57cd77u); LOADALL;
  /* 0057cd7c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cd7f mov dword ptr [esi + 0x54], 0 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x0u); }
L_0057cd86:;
  /* 0057cd86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cd87 push 0x6738b8 */ { u32 v_ = 0x6738b8u; esp -= 4; M32(esp) = v_; }
  /* 0057cd8c call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57cd91u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57cd8cu); RETCHK(0x57cd91u, 0x57cd8cu); LOADALL;
  /* 0057cd91 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0057cd94 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cd97 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cd99 je 0x57cdb1 */ if (ZF_) goto L_0057cdb1;
  /* 0057cd9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cd9c mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057cda1 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57cda7u; SAVEALL; call_ind(c, t_); RETCHK(0x57cda7u, 0x57cda1u); LOADALL; }
  /* 0057cda7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cdaa mov dword ptr [esi + 0x5c], 0 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x0u); }
L_0057cdb1:;
  /* 0057cdb1 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0057cdb4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057cdb5 call 0x5824a0 */ esp -= 4; M32(esp) = 0x57cdbau; SAVEALL; F_005824a0(c); ABI_CHECK(0x5824a0u, 0x57cdb5u); RETCHK(0x57cdbau, 0x57cdb5u); LOADALL;
  /* 0057cdba dec word ptr [esi + 0xe] */ { const u32 m_ = (u32)(esi + 0xeu); u32 a_ = M16(m_); u32 r_ = (a_ - 1u) & 0xffffu; M16(m_) = (u16)(r_); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057cdbe mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0057cdc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cdc5 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57cdcbu; SAVEALL; call_ind(c, t_); RETCHK(0x57cdcbu, 0x57cdc5u); LOADALL; }
  /* 0057cdcb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cdce mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057cdd3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057cdd4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057cde0(CPU *c) {
  NATIVE_HOOK(0x57cde0u) REGS; LOADALL;
L_0057cde0:;
  /* 0057cde0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057cde4 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057cde8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057cde9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057cdea mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0057cdec lea edx, [ecx + 0x18] */ edx = (u32)((u32)(ecx + 0x18u));
  /* 0057cdef mov esi, edx */ { esi = (u32)(edx); }
  /* 0057cdf1 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0057cdf3 mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 0057cdf6 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0057cdf9 mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 0057cdfc mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0057cdff mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057ce02 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057ce03 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0057ce06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057ce07 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0057ce09 fcomp dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057ce0c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057ce0e test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057ce11 jp 0x57ce26 */ if (PF_) goto L_0057ce26;
  /* 0057ce13 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0057ce15 fcomp dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057ce18 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057ce1a test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057ce1d jp 0x57ce26 */ if (PF_) goto L_0057ce26;
  /* 0057ce1f mov byte ptr [ecx + 3], 1 */ { const u32 m_ = (u32)(ecx + 0x3u); M8(m_) = (u8)(0x1u); }
  /* 0057ce23 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0057ce25 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ce26:;
  /* 0057ce26 mov byte ptr [ecx + 3], 0 */ { const u32 m_ = (u32)(ecx + 0x3u); M8(m_) = (u8)(0x0u); }
  /* 0057ce2a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0057ce2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057ce30(CPU *c) {
  NATIVE_HOOK(0x57ce30u) REGS; LOADALL;
L_0057ce30:;
  /* 0057ce30 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057ce31 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057ce35 fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0057ce38 fchs */ ST(0) = -ST(0);
  /* 0057ce3a fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057ce3e mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0057ce42 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0057ce44 mov dword ptr [esp], ecx */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(ecx); }
  /* 0057ce48 and eax, 0x7fffffff */ { u32 a_ = eax, b_ = 0x7fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057ce4d cmp eax, 0x3f800000 */ { u32 a_ = eax, b_ = 0x3f800000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ce52 jl 0x57ce68 */ if (LT_) goto L_0057ce68;
  /* 0057ce54 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057ce56 jle 0x57ce60 */ if ((ZF_|LT_)) goto L_0057ce60;
  /* 0057ce58 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0057ce5e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057ce5f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ce60:;
  /* 0057ce60 fld dword ptr [0x62ee50] */ { const u32 m_ = (u32)(0x62ee50u); FPUSH((double)MF32(m_)); }
  /* 0057ce66 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057ce67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ce68:;
  /* 0057ce68 cmp eax, 0x3f000000 */ { u32 a_ = eax, b_ = 0x3f000000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ce6d jge 0x57cefa */ if (!LT_) goto L_0057cefa;
  /* 0057ce73 cmp eax, 0x23000000 */ { u32 a_ = eax, b_ = 0x23000000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057ce78 jg 0x57ce82 */ if (!(ZF_|LT_)) goto L_0057ce82;
  /* 0057ce7a fld dword ptr [0x62ee4c] */ { const u32 m_ = (u32)(0x62ee4cu); FPUSH((double)MF32(m_)); }
  /* 0057ce80 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057ce81 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057ce82:;
  /* 0057ce82 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0057ce86 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057ce8a fld dword ptr [0x62ee48] */ { const u32 m_ = (u32)(0x62ee48u); FPUSH((double)MF32(m_)); }
  /* 0057ce90 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057ce92 fadd dword ptr [0x62ee44] */ { const u32 m_ = (u32)(0x62ee44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057ce98 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057ce9a fsub dword ptr [0x62ee40] */ { const u32 m_ = (u32)(0x62ee40u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cea0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057cea2 fadd dword ptr [0x62ee3c] */ { const u32 m_ = (u32)(0x62ee3cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cea8 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057ceaa fsub dword ptr [0x62ee38] */ { const u32 m_ = (u32)(0x62ee38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057ceb0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057ceb2 fadd dword ptr [0x657008] */ { const u32 m_ = (u32)(0x657008u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057ceb8 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057ceba fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0057cebc fmul dword ptr [0x62ee34] */ { const u32 m_ = (u32)(0x62ee34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cec2 fsub dword ptr [0x62ee30] */ { const u32 m_ = (u32)(0x62ee30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cec8 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057ceca fadd dword ptr [0x62ee2c] */ { const u32 m_ = (u32)(0x62ee2cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057ced0 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057ced2 fsub dword ptr [0x62ee28] */ { const u32 m_ = (u32)(0x62ee28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057ced8 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0057ceda fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cee0 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 0057cee2 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cee6 fsubr dword ptr [0x62ee24] */ { const u32 m_ = (u32)(0x62ee24u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0057ceec fsubr dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0057cef0 fsubr dword ptr [0x62ee20] */ { const u32 m_ = (u32)(0x62ee20u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0057cef6 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0057cef8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057cef9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057cefa:;
  /* 0057cefa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057cefc jge 0x57cfa3 */ if (!LT_) goto L_0057cfa3;
  /* 0057cf02 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0057cf06 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cf0c fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf12 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057cf16 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057cf1a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057cf1b call 0x5aa9e0 */ esp -= 4; M32(esp) = 0x57cf20u; SAVEALL; F_005aa9e0(c); ABI_CHECK(0x5aa9e0u, 0x57cf1bu); RETCHK(0x57cf20u, 0x57cf1bu); LOADALL;
  /* 0057cf20 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0057cf24 fmul dword ptr [0x62ee48] */ { const u32 m_ = (u32)(0x62ee48u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf2a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cf2d fadd dword ptr [0x62ee44] */ { const u32 m_ = (u32)(0x62ee44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cf33 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf37 fsub dword ptr [0x62ee40] */ { const u32 m_ = (u32)(0x62ee40u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cf3d fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf41 fadd dword ptr [0x62ee3c] */ { const u32 m_ = (u32)(0x62ee3cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cf47 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf4b fsub dword ptr [0x62ee38] */ { const u32 m_ = (u32)(0x62ee38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cf51 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf55 fadd dword ptr [0x657008] */ { const u32 m_ = (u32)(0x657008u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cf5b fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf5f fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0057cf63 fmul dword ptr [0x62ee34] */ { const u32 m_ = (u32)(0x62ee34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf69 fsub dword ptr [0x62ee30] */ { const u32 m_ = (u32)(0x62ee30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cf6f fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf73 fadd dword ptr [0x62ee2c] */ { const u32 m_ = (u32)(0x62ee2cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cf79 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf7d fsub dword ptr [0x62ee28] */ { const u32 m_ = (u32)(0x62ee28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cf83 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cf87 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cf8d fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 0057cf8f fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057cf91 fsub dword ptr [0x62ee24] */ { const u32 m_ = (u32)(0x62ee24u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cf97 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0057cf99 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0057cf9b fsubr dword ptr [0x62ee1c] */ { const u32 m_ = (u32)(0x62ee1cu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0057cfa1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057cfa2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057cfa3:;
  /* 0057cfa3 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0057cfa9 fsub dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cfad fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cfb3 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057cfb7 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057cfbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057cfbc call 0x5aa9e0 */ esp -= 4; M32(esp) = 0x57cfc1u; SAVEALL; F_005aa9e0(c); ABI_CHECK(0x5aa9e0u, 0x57cfbcu); RETCHK(0x57cfc1u, 0x57cfbcu); LOADALL;
  /* 0057cfc1 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0057cfc3 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057cfc7 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0057cfcb fmul dword ptr [0x62ee48] */ { const u32 m_ = (u32)(0x62ee48u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cfd1 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0057cfd5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057cfd8 and ecx, 0xfffff000 */ { u32 a_ = ecx, b_ = 0xfffff000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057cfde fadd dword ptr [0x62ee44] */ { const u32 m_ = (u32)(0x62ee44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cfe4 mov dword ptr [esp], ecx */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(ecx); }
  /* 0057cfe8 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cfec fsub dword ptr [0x62ee40] */ { const u32 m_ = (u32)(0x62ee40u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057cff2 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057cff6 fadd dword ptr [0x62ee3c] */ { const u32 m_ = (u32)(0x62ee3cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057cffc fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d000 fsub dword ptr [0x62ee38] */ { const u32 m_ = (u32)(0x62ee38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057d006 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d00a fadd dword ptr [0x657008] */ { const u32 m_ = (u32)(0x657008u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057d010 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d014 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0057d018 fmul dword ptr [0x62ee34] */ { const u32 m_ = (u32)(0x62ee34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d01e fsub dword ptr [0x62ee30] */ { const u32 m_ = (u32)(0x62ee30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057d024 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d028 fadd dword ptr [0x62ee2c] */ { const u32 m_ = (u32)(0x62ee2cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057d02e fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d032 fsub dword ptr [0x62ee28] */ { const u32 m_ = (u32)(0x62ee28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0057d038 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d03c fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057d042 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 0057d044 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0057d046 fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 0057d04a fmul dword ptr [esp] */ { const u32 m_ = (u32)(esp); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d04e fsubr dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0057d052 fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 0057d056 fadd st(3) */ ST(0) = FR(ST(0) + ST(3));
  /* 0057d058 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 0057d05a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0057d05c fadd dword ptr [esp] */ { const u32 m_ = (u32)(esp); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057d060 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0057d062 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0057d064 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0057d065 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057d070(CPU *c) {
  NATIVE_HOOK(0x57d070u) REGS; LOADALL;
L_0057d070:;
  /* 0057d070 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057d074 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0057d078 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0057d07c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d07d mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057d081 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057d082 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057d086 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057d087 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d088 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057d089 push 0x6738d0 */ { u32 v_ = 0x6738d0u; esp -= 4; M32(esp) = v_; }
  /* 0057d08e call 0x5bf540 */ esp -= 4; M32(esp) = 0x57d093u; SAVEALL; F_005bf540(c); ABI_CHECK(0x5bf540u, 0x57d08eu); RETCHK(0x57d093u, 0x57d08eu); LOADALL;
  /* 0057d093 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d096 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057d0a0(CPU *c) {
  NATIVE_HOOK(0x57d0a0u) REGS; LOADALL;
L_0057d0a0:;
  /* 0057d0a0 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0057d0a4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0057d0a8 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0057d0ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d0ad mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057d0b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057d0b2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057d0b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d0b4 push 0x6738d0 */ { u32 v_ = 0x6738d0u; esp -= 4; M32(esp) = v_; }
  /* 0057d0b9 call 0x5bf820 */ esp -= 4; M32(esp) = 0x57d0beu; SAVEALL; F_005bf820(c); ABI_CHECK(0x5bf820u, 0x57d0b9u); RETCHK(0x57d0beu, 0x57d0b9u); LOADALL;
  /* 0057d0be add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d0c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057d0d0(CPU *c) {
  NATIVE_HOOK(0x57d0d0u) REGS; LOADALL;
L_0057d0d0:;
  /* 0057d0d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057d0d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d0d5 push 0x6738d0 */ { u32 v_ = 0x6738d0u; esp -= 4; M32(esp) = v_; }
  /* 0057d0da call 0x5bfa40 */ esp -= 4; M32(esp) = 0x57d0dfu; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x57d0dau); RETCHK(0x57d0dfu, 0x57d0dau); LOADALL;
  /* 0057d0df add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d0e2 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057d0e5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057d0f0(CPU *c) {
  NATIVE_HOOK(0x57d0f0u) REGS; LOADALL;
L_0057d0f0:;
  /* 0057d0f0 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d0f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d0f4 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 0057d0f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057d0f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d0fa push 0x6738d0 */ { u32 v_ = 0x6738d0u; esp -= 4; M32(esp) = v_; }
  /* 0057d0ff call 0x5bfa40 */ esp -= 4; M32(esp) = 0x57d104u; SAVEALL; F_005bfa40(c); ABI_CHECK(0x5bfa40u, 0x57d0ffu); RETCHK(0x57d104u, 0x57d0ffu); LOADALL;
  /* 0057d104 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 0057d108 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0057d10b push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 0057d10d push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 0057d112 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d113 push 0x12 */ { u32 v_ = 0x12u; esp -= 4; M32(esp) = v_; }
  /* 0057d115 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057d116 call 0x5b3830 */ esp -= 4; M32(esp) = 0x57d11bu; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x57d116u); RETCHK(0x57d11bu, 0x57d116u); LOADALL;
  /* 0057d11b add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d11e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057d120 jne 0x57d128 */ if (!ZF_) goto L_0057d128;
  /* 0057d122 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057d123 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d124 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d127 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057d128:;
  /* 0057d128 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 0057d12a push 0x37002 */ { u32 v_ = 0x37002u; esp -= 4; M32(esp) = v_; }
  /* 0057d12f push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0057d131 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0057d133 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057d134 call 0x5b3830 */ esp -= 4; M32(esp) = 0x57d139u; SAVEALL; F_005b3830(c); ABI_CHECK(0x5b3830u, 0x57d134u); RETCHK(0x57d139u, 0x57d134u); LOADALL;
  /* 0057d139 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d13c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057d13e jne 0x57d146 */ if (!ZF_) goto L_0057d146;
  /* 0057d140 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057d141 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d142 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d145 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057d146:;
  /* 0057d146 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0057d149 mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0057d14c mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0057d14f mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0057d153 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0057d156 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0057d15a mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0057d15e mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0057d161 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057d163 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0057d167 mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057d16a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057d16c mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057d16f mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0057d173 shl edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0057d176 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 0057d17a push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0057d17c or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0057d17e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057d17f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057d180 mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
  /* 0057d184 call 0x5b3130 */ esp -= 4; M32(esp) = 0x57d189u; SAVEALL; F_005b3130(c); ABI_CHECK(0x5b3130u, 0x57d184u); RETCHK(0x57d189u, 0x57d184u); LOADALL;
  /* 0057d189 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d18c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057d18e jne 0x57d196 */ if (!ZF_) goto L_0057d196;
  /* 0057d190 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057d191 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d192 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d195 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057d196:;
  /* 0057d196 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d197 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057d198 push 0x6738d0 */ { u32 v_ = 0x6738d0u; esp -= 4; M32(esp) = v_; }
  /* 0057d19d call 0x5bfa80 */ esp -= 4; M32(esp) = 0x57d1a2u; SAVEALL; F_005bfa80(c); ABI_CHECK(0x5bfa80u, 0x57d19du); RETCHK(0x57d1a2u, 0x57d19du); LOADALL;
  /* 0057d1a2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d1a5 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057d1a7 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057d1a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057d1aa and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057d1ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d1ad add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d1b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057d1c0(CPU *c) {
  NATIVE_HOOK(0x57d1c0u) REGS; LOADALL;
L_0057d1c0:;
  /* 0057d1c0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d1c3 lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 0057d1c7 lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 0057d1cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057d1cc mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0057d1d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d1d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d1d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057d1d3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0057d1d5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057d1d6 call 0x5b3890 */ esp -= 4; M32(esp) = 0x57d1dbu; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x57d1d6u); RETCHK(0x57d1dbu, 0x57d1d6u); LOADALL;
  /* 0057d1db add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d1de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057d1e0 je 0x57d30a */ if (ZF_) goto L_0057d30a;
  /* 0057d1e6 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057d1ea cmp eax, 0x35000 */ { u32 a_ = eax, b_ = 0x35000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057d1ef jb 0x57d2e7 */ if (CF_) goto L_0057d2e7;
  /* 0057d1f5 cmp eax, 0x37002 */ { u32 a_ = eax, b_ = 0x37002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057d1fa ja 0x57d2e7 */ if (!(CF_|ZF_)) goto L_0057d2e7;
  /* 0057d200 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 0057d204 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0057d205 mov ecx, 6 */ { ecx = (u32)(0x6u); }
  /* 0057d20a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057d20c lea edi, [esp + 0x18] */ edi = (u32)((u32)(esp + 0x18u));
  /* 0057d210 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057d211 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0057d213 lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 0057d217 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d218 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057d219 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x57d21eu; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x57d219u); RETCHK(0x57d21eu, 0x57d219u); LOADALL;
  /* 0057d21e mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0057d222 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d225 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057d227 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0057d228 jne 0x57d30a */ if (!ZF_) goto L_0057d30a;
  /* 0057d22e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057d230 mov cl, byte ptr [esp + 0x2a] */ { const u32 m_ = (u32)(esp + 0x2au); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057d234 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0057d235 call 0x57d360 */ esp -= 4; M32(esp) = 0x57d23au; SAVEALL; F_0057d360(c); ABI_CHECK(0x57d360u, 0x57d235u); RETCHK(0x57d23au, 0x57d235u); LOADALL;
  /* 0057d23a mov esi, eax */ { esi = (u32)(eax); }
  /* 0057d23c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d23f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0057d241 je 0x57d30a */ if (ZF_) goto L_0057d30a;
  /* 0057d247 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0057d24b mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 0057d24e mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0057d252 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0057d255 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0057d259 mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0057d25c mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0057d260 mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0057d263 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0057d267 cmp eax, 0x30300 */ { u32 a_ = eax, b_ = 0x30300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057d26c jae 0x57d29a */ if (!CF_) goto L_0057d29a;
  /* 0057d26e fld dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0057d272 fmul dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0057d276 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0057d27c fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0057d282 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057d286 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0057d28a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d28b call 0x5aa9e0 */ esp -= 4; M32(esp) = 0x57d290u; SAVEALL; F_005aa9e0(c); ABI_CHECK(0x5aa9e0u, 0x57d28bu); RETCHK(0x57d290u, 0x57d28bu); LOADALL;
  /* 0057d290 fchs */ ST(0) = -ST(0);
  /* 0057d292 fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0057d295 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d298 jmp 0x57d2a1 */ goto L_0057d2a1;
L_0057d29a:;
  /* 0057d29a mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0057d29e mov dword ptr [esi + 0x28], ecx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ecx); }
L_0057d2a1:;
  /* 0057d2a1 fld dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0057d2a4 fcomp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057d2a7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057d2a9 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057d2ac jp 0x57d2c1 */ if (PF_) goto L_0057d2c1;
  /* 0057d2ae fld dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0057d2b1 fcomp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0057d2b4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0057d2b6 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0057d2b9 jp 0x57d2c1 */ if (PF_) goto L_0057d2c1;
  /* 0057d2bb mov byte ptr [esi + 3], 1 */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)(0x1u); }
  /* 0057d2bf jmp 0x57d2c5 */ goto L_0057d2c5;
L_0057d2c1:;
  /* 0057d2c1 mov byte ptr [esi + 3], 0 */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)(0x0u); }
L_0057d2c5:;
  /* 0057d2c5 mov dl, byte ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057d2c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d2ca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0057d2cb push 0x6738d0 */ { u32 v_ = 0x6738d0u; esp -= 4; M32(esp) = v_; }
  /* 0057d2d0 mov byte ptr [esi + 2], dl */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0057d2d3 call 0x5bf8c0 */ esp -= 4; M32(esp) = 0x57d2d8u; SAVEALL; F_005bf8c0(c); ABI_CHECK(0x5bf8c0u, 0x57d2d3u); RETCHK(0x57d2d8u, 0x57d2d3u); LOADALL;
  /* 0057d2d8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d2db neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0057d2dd sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0057d2df and eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057d2e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d2e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057d2e3 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d2e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057d2e7:;
  /* 0057d2e7 push 0x80000004 */ { u32 v_ = 0x80000004u; esp -= 4; M32(esp) = v_; }
  /* 0057d2ec mov dword ptr [esp + 0x10], 2 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x2u); }
  /* 0057d2f4 call 0x619d80 */ esp -= 4; M32(esp) = 0x57d2f9u; SAVEALL; F_00619d80(c); ABI_CHECK(0x619d80u, 0x57d2f4u); RETCHK(0x57d2f9u, 0x57d2f4u); LOADALL;
  /* 0057d2f9 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0057d2fd lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 0057d301 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0057d302 call 0x5be8c0 */ esp -= 4; M32(esp) = 0x57d307u; SAVEALL; F_005be8c0(c); ABI_CHECK(0x5be8c0u, 0x57d302u); RETCHK(0x57d307u, 0x57d302u); LOADALL;
  /* 0057d307 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0057d30a:;
  /* 0057d30a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d30b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057d30d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0057d30e add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d311 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057d320(CPU *c) {
  NATIVE_HOOK(0x57d320u) REGS; LOADALL;
L_0057d320:;
  /* 0057d320 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d321 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0057d325 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d326 push 0x6738d0 */ { u32 v_ = 0x6738d0u; esp -= 4; M32(esp) = v_; }
  /* 0057d32b call 0x5bf7b0 */ esp -= 4; M32(esp) = 0x57d330u; SAVEALL; F_005bf7b0(c); ABI_CHECK(0x5bf7b0u, 0x57d32bu); RETCHK(0x57d330u, 0x57d32bu); LOADALL;
  /* 0057d330 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d331 call 0x5b4a40 */ esp -= 4; M32(esp) = 0x57d336u; SAVEALL; F_005b4a40(c); ABI_CHECK(0x5b4a40u, 0x57d331u); RETCHK(0x57d336u, 0x57d331u); LOADALL;
  /* 0057d336 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057d33b mov ecx, dword ptr [0x68a9c0] */ { const u32 m_ = (u32)(0x68a9c0u); ecx = (u32)(M32(m_)); }
  /* 0057d341 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d342 mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057d345 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057d346 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57d34cu; SAVEALL; call_ind(c, t_); RETCHK(0x57d34cu, 0x57d346u); LOADALL; }
  /* 0057d34c add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d34f mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0057d354 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d355 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057d360(CPU *c) {
  NATIVE_HOOK(0x57d360u) REGS; LOADALL;
L_0057d360:;
  /* 0057d360 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057d365 mov ecx, dword ptr [0x68a9c0] */ { const u32 m_ = (u32)(0x68a9c0u); ecx = (u32)(M32(m_)); }
  /* 0057d36b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d36c push 0x30012 */ { u32 v_ = 0x30012u; esp -= 4; M32(esp) = v_; }
  /* 0057d371 mov edx, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); edx = (u32)(M32(m_)); }
  /* 0057d374 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057d375 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x57d37bu; SAVEALL; call_ind(c, t_); RETCHK(0x57d37bu, 0x57d375u); LOADALL; }
  /* 0057d37b mov esi, eax */ { esi = (u32)(eax); }
  /* 0057d37d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0057d37f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d382 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0057d384 jne 0x57d38a */ if (!ZF_) goto L_0057d38a;
  /* 0057d386 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0057d388 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d389 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0057d38a:;
  /* 0057d38a mov al, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0057d38e mov byte ptr [esi], 3 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x3u); }
  /* 0057d391 mov byte ptr [esi + 1], al */ { const u32 m_ = (u32)(esi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0057d394 mov eax, 0x3f800000 */ { eax = (u32)(0x3f800000u); }
  /* 0057d399 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0057d39c mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0057d39f mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 0057d3a2 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0057d3a5 lea eax, [esi + 0x2c] */ eax = (u32)((u32)(esi + 0x2cu));
  /* 0057d3a8 mov byte ptr [esi + 2], cl */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0057d3ab mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0057d3ae mov dword ptr [esi + 0x10], 0x619d80 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x619d80u); }
  /* 0057d3b5 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0057d3b8 mov dword ptr [esi + 0x28], ecx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0057d3bb mov byte ptr [esi + 3], 1 */ { const u32 m_ = (u32)(esi + 0x3u); M8(m_) = (u8)(0x1u); }
  /* 0057d3bf mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0057d3c1 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0057d3c4 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0057d3c7 mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0057d3ca mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057d3d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0057d3d1 push 0x6738d0 */ { u32 v_ = 0x6738d0u; esp -= 4; M32(esp) = v_; }
  /* 0057d3d6 mov dx, word ptr [ecx + 0xa] */ { const u32 m_ = (u32)(ecx + 0xau); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0057d3da mov byte ptr [esi + 2], 3 */ { const u32 m_ = (u32)(esi + 0x2u); M8(m_) = (u8)(0x3u); }
  /* 0057d3de dec dx */ { u32 a_ = (edx & 0xffffu); u32 r_ = (a_ - 1u) & 0xffffu; edx = (edx & 0xffff0000u) | ((u32)(r_) & 0xffffu); SETF(OP_DEC, a_, 1, r_, 2); }
  /* 0057d3e0 mov word ptr [esi + 0x3c], dx */ { const u32 m_ = (u32)(esi + 0x3cu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0057d3e4 call 0x5bf750 */ esp -= 4; M32(esp) = 0x57d3e9u; SAVEALL; F_005bf750(c); ABI_CHECK(0x5bf750u, 0x57d3e4u); RETCHK(0x57d3e9u, 0x57d3e4u); LOADALL;
  /* 0057d3e9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d3ec mov eax, esi */ { eax = (u32)(esi); }
  /* 0057d3ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0057d3ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0057d3f0(CPU *c) {
  NATIVE_HOOK(0x57d3f0u) REGS; LOADALL;
L_0057d3f0:;
  /* 0057d3f0 mov eax, dword ptr [0x68a9c0] */ { const u32 m_ = (u32)(0x68a9c0u); eax = (u32)(M32(m_)); }
  /* 0057d3f5 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057d3fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0057d3fd push 0x57d450 */ { u32 v_ = 0x57d450u; esp -= 4; M32(esp) = v_; }
  /* 0057d402 mov edx, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); edx = (u32)(M32(m_)); }
  /* 0057d405 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057d406 call 0x5be1d0 */ esp -= 4; M32(esp) = 0x57d40bu; SAVEALL; F_005be1d0(c); ABI_CHECK(0x5be1d0u, 0x57d406u); RETCHK(0x57d40bu, 0x57d406u); LOADALL;
  /* 0057d40b mov eax, dword ptr [0x68a9c0] */ { const u32 m_ = (u32)(0x68a9c0u); eax = (u32)(M32(m_)); }
  /* 0057d410 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0057d416 mov edx, dword ptr [eax + ecx] */ { const u32 m_ = (u32)(eax + ecx); edx = (u32)(M32(m_)); }
  /* 0057d419 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0057d41a call 0x5bdee0 */ esp -= 4; M32(esp) = 0x57d41fu; SAVEALL; F_005bdee0(c); ABI_CHECK(0x5bdee0u, 0x57d41au); RETCHK(0x57d41fu, 0x57d41au); LOADALL;
  /* 0057d41f mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0057d424 mov ecx, dword ptr [0x68a9c0] */ { const u32 m_ = (u32)(0x68a9c0u); ecx = (u32)(M32(m_)); }
  /* 0057d42a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0057d42d mov dword ptr [ecx + eax], 0 */ { const u32 m_ = (u32)(ecx + eax); M32(m_) = (u32)(0x0u); }
  /* 0057d434 mov eax, dword ptr [0x68a9c4] */ { const u32 m_ = (u32)(0x68a9c4u); eax = (u32)(M32(m_)); }
  /* 0057d439 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0057d43a mov dword ptr [0x68a9c4], eax */ { const u32 m_ = (u32)(0x68a9c4u); M32(m_) = (u32)(eax); }
  /* 0057d43f mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0057d443 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
