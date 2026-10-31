#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029BAA8
// Address: 0x29baa8 - 0x29bca0
void sub_0029BAA8_0x29baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BAA8_0x29baa8");
#endif

    switch (ctx->pc) {
        case 0x29bb04u: goto label_29bb04;
        case 0x29bb8cu: goto label_29bb8c;
        case 0x29bbc4u: goto label_29bbc4;
        case 0x29bbd0u: goto label_29bbd0;
        case 0x29bbe0u: goto label_29bbe0;
        case 0x29bc04u: goto label_29bc04;
        case 0x29bc44u: goto label_29bc44;
        case 0x29bc58u: goto label_29bc58;
        case 0x29bc74u: goto label_29bc74;
        default: break;
    }

    ctx->pc = 0x29baa8u;

    // 0x29baa8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29baac: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x29baacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x29bab0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x29bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x29bab4: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x29bab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x29bab8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x29bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x29babc: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x29babcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29bac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29bac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bac4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x29bac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29bac8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29bacc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x29baccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29bad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29bad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bad4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x29bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x29bad8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29bad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29badc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29badcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29bae0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29bae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29bae4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29bae8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29baec: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x29baecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x29baf0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29baf4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29baf8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29baf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bafc: 0xc0a68f0  jal         func_29A3C0
    ctx->pc = 0x29BAFCu;
    SET_GPR_U32(ctx, 31, 0x29BB04u);
    ctx->pc = 0x29BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BAFCu;
    // 0x29bb00: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x29BAFCu, 0x29BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB04u;
label_29bb04:
    // 0x29bb04: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x29bb04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bb08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29bb0c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x29bb0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bb10: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29bb10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29bb14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x29bb14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29bb18: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29bb18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29bb1c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29bb1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29bb20: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x29bb20u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29bb24: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29bb24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29bb28: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x29bb28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29bb2c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29bb2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29bb30: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x29bb30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x29bb34: 0x4a0003bf  vwaitq
    ctx->pc = 0x29bb34u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x29bb38: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x29bb38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29bb3c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x29bb3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x29bb40: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x29bb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x29bb44: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x29bb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29bb48: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x29bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29bb4c: 0x0  nop
    ctx->pc = 0x29bb4cu;
    // NOP
    // 0x29bb50: 0x0  nop
    ctx->pc = 0x29bb50u;
    // NOP
    // 0x29bb54: 0x4615a003  div.s       $f0, $f20, $f21
    ctx->pc = 0x29bb54u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x29bb58: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x29bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x29bb5c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x29bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x29bb60: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x29bb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x29bb64: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x29bb64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bb68: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29bb68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29bb6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29bb6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29bb70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29bb70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29bb74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29bb74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29bb78: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29bb78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29bb7c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29bb80: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x29bb84: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x29BB84u;
    SET_GPR_U32(ctx, 31, 0x29BB8Cu);
    ctx->pc = 0x29BB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB84u;
    // 0x29bb88: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x29BB84u, 0x29BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB8Cu;
label_29bb8c:
    // 0x29bb8c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29bb8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bb90: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x29bb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29bb94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29bb98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29bb98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x29bb9c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x29bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bba4: 0x7c620090  sq          $v0, 0x90($v1)
    ctx->pc = 0x29bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), GPR_VEC(ctx, 2));
    // 0x29bba8: 0xe4610118  swc1        $f1, 0x118($v1)
    ctx->pc = 0x29bba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
    // 0x29bbac: 0xe474009c  swc1        $f20, 0x9C($v1)
    ctx->pc = 0x29bbacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x29bbb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29bbb4: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x29bbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x29bbb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29bbbc: 0xc0cd7a8  jal         func_335EA0
    ctx->pc = 0x29BBBCu;
    SET_GPR_U32(ctx, 31, 0x29BBC4u);
    ctx->pc = 0x29BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBBCu;
    // 0x29bbc0: 0xa060011c  sb          $zero, 0x11C($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x29BBBCu, 0x29BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBC4u;
label_29bbc4:
    // 0x29bbc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29bbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbc8: 0xc086c40  jal         func_21B100
    ctx->pc = 0x29BBC8u;
    SET_GPR_U32(ctx, 31, 0x29BBD0u);
    ctx->pc = 0x29BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBC8u;
    // 0x29bbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x29BBC8u, 0x29BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBD0u;
label_29bbd0:
    // 0x29bbd0: 0x82250010  lb          $a1, 0x10($s1)
    ctx->pc = 0x29bbd0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29bbd4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29bbd8: 0xc0945c6  jal         func_251718
    ctx->pc = 0x29BBD8u;
    SET_GPR_U32(ctx, 31, 0x29BBE0u);
    ctx->pc = 0x29BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBD8u;
    // 0x29bbdc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251718u, 0x29BBD8u, 0x29BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBE0u;
label_29bbe0:
    // 0x29bbe0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x29BBE0u;
    {
        const bool branch_taken_0x29bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BBE0u;
        // 0x29bbe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bbe0) {
            ctx->pc = 0x29BC50u;
            goto label_29bc50;
        }
    }
    ctx->pc = 0x29BBE8u;
    // 0x29bbe8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29bbe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29bbec: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x29bbecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x29bbf0: 0x3c0140fa  lui         $at, 0x40FA
    ctx->pc = 0x29bbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16634 << 16));
    // 0x29bbf4: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x29bbf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x29bbf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29bbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29bbfc: 0xc0cde2c  jal         func_3378B0
    ctx->pc = 0x29BBFCu;
    SET_GPR_U32(ctx, 31, 0x29BC04u);
    ctx->pc = 0x29BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBFCu;
    // 0x29bc00: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378B0u, 0x29BBFCu, 0x29BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC04u;
label_29bc04:
    // 0x29bc04: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29bc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bc08: 0x0  nop
    ctx->pc = 0x29bc08u;
    // NOP
    // 0x29bc0c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x29BC0Cu;
    {
        const bool branch_taken_0x29bc0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC0Cu;
        // 0x29bc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc0c) {
            ctx->pc = 0x29BC50u;
            goto label_29bc50;
        }
    }
    ctx->pc = 0x29BC14u;
    // 0x29bc14: 0x0  nop
    ctx->pc = 0x29bc14u;
    // NOP
    // 0x29bc18: 0x0  nop
    ctx->pc = 0x29bc18u;
    // NOP
    // 0x29bc1c: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x29bc1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x29bc20: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x29bc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x29bc24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29bc24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bc28: 0x0  nop
    ctx->pc = 0x29bc28u;
    // NOP
    // 0x29bc2c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x29bc2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bc30: 0x0  nop
    ctx->pc = 0x29bc30u;
    // NOP
    // 0x29bc34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29BC34u;
    {
        const bool branch_taken_0x29bc34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bc34) {
            ctx->pc = 0x29BC50u;
            goto label_29bc50;
        }
    }
    ctx->pc = 0x29BC3Cu;
    // 0x29bc3c: 0xc0a2aca  jal         func_28AB28
    ctx->pc = 0x29BC3Cu;
    SET_GPR_U32(ctx, 31, 0x29BC44u);
    ctx->pc = 0x29BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC3Cu;
    // 0x29bc40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB28u, 0x29BC3Cu, 0x29BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC44u;
label_29bc44:
    // 0x29bc44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BC48u;
    {
        const bool branch_taken_0x29bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC48u;
        // 0x29bc4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc48) {
            ctx->pc = 0x29BC6Cu;
            goto label_29bc6c;
        }
    }
    ctx->pc = 0x29BC50u;
label_29bc50:
    // 0x29bc50: 0xc08f6d2  jal         func_23DB48
    ctx->pc = 0x29BC50u;
    SET_GPR_U32(ctx, 31, 0x29BC58u);
    ctx->pc = 0x29BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC50u;
    // 0x29bc54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB48u, 0x29BC50u, 0x29BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC58u;
label_29bc58:
    // 0x29bc58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bc5c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BC5Cu;
    {
        const bool branch_taken_0x29bc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC5Cu;
        // 0x29bc60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc5c) {
            ctx->pc = 0x29BC78u;
            goto label_29bc78;
        }
    }
    ctx->pc = 0x29BC64u;
    // 0x29bc64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bc6c:
    // 0x29bc6c: 0xc0a6d0a  jal         func_29B428
    ctx->pc = 0x29BC6Cu;
    SET_GPR_U32(ctx, 31, 0x29BC74u);
    ctx->pc = 0x29B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B428u, 0x29BC6Cu, 0x29BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC74u;
label_29bc74:
    // 0x29bc74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29bc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bc78:
    // 0x29bc78: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x29bc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29bc7c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x29bc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29bc80: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x29bc80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29bc84: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29bc88: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x29bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29bc8c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x29bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29bc90: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x29bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29bc94: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC94u;
        // 0x29bc98: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC9Cu;
    // 0x29bc9c: 0x0  nop
    ctx->pc = 0x29bc9cu;
    // NOP
    ctx->pc = 0x29bca0u;
}
