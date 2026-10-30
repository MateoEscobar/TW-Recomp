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

// Function: sub_0038C990
// Address: 0x38c990 - 0x38cb28
void sub_0038C990_0x38c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C990_0x38c990");
#endif

    switch (ctx->pc) {
        case 0x38ca44u: goto label_38ca44;
        case 0x38ca58u: goto label_38ca58;
        default: break;
    }

    ctx->pc = 0x38c990u;

    // 0x38c990: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x38c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x38c994: 0x3c090071  lui         $t1, 0x71
    ctx->pc = 0x38c994u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)113 << 16));
    // 0x38c998: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x38c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x38c99c: 0x25224b00  addiu       $v0, $t1, 0x4B00
    ctx->pc = 0x38c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 19200));
    // 0x38c9a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x38c9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x38c9a4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x38c9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x38c9a8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x38c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x38c9ac: 0x25081730  addiu       $t0, $t0, 0x1730
    ctx->pc = 0x38c9acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5936));
    // 0x38c9b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x38c9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x38c9b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38c9b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c9b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38c9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c9c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38c9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c9c4: 0x86460092  lh          $a2, 0x92($s2)
    ctx->pc = 0x38c9c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x38c9c8: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x38c9c8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511730u));
    // 0x38c9cc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x38c9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x38c9d0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x38c9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x38c9d4: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x38c9d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x38c9d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38c9d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38c9dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38c9dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38c9e0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38c9e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38c9e4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x38c9e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x38c9e8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x38c9e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x38c9ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38c9ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38c9f0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x38c9f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x38c9f4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x38c9f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38c9f8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38c9f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38c9fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x38c9fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x38ca00: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x38ca00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38ca04: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x38ca04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x38ca08: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x38ca08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x38ca0c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x38ca0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38ca10: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x38ca10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x38ca14: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x38ca14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x38ca18: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x38ca18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x38ca1c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x38ca1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca20: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38ca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x38ca24: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x38ca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x38ca28: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x38ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x38ca2c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x38CA2Cu;
    {
        const bool branch_taken_0x38ca2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA2Cu;
        // 0x38ca30: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca2c) {
            ctx->pc = 0x38CA4Cu;
            goto label_38ca4c;
        }
    }
    ctx->pc = 0x38CA34u;
    // 0x38ca34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38ca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca3c: 0xc0e2d48  jal         func_38B520
    ctx->pc = 0x38CA3Cu;
    SET_GPR_U32(ctx, 31, 0x38CA44u);
    ctx->pc = 0x38CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA3Cu;
    // 0x38ca40: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B520u, 0x38CA3Cu, 0x38CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA44u;
label_38ca44:
    // 0x38ca44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38CA44u;
    {
        const bool branch_taken_0x38ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA44u;
        // 0x38ca48: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca44) {
            ctx->pc = 0x38CA5Cu;
            goto label_38ca5c;
        }
    }
    ctx->pc = 0x38CA4Cu;
label_38ca4c:
    // 0x38ca4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca50: 0xc0e2e34  jal         func_38B8D0
    ctx->pc = 0x38CA50u;
    SET_GPR_U32(ctx, 31, 0x38CA58u);
    ctx->pc = 0x38CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA50u;
    // 0x38ca54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B8D0u, 0x38CA50u, 0x38CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA58u;
label_38ca58:
    // 0x38ca58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x38ca58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ca5c:
    // 0x38ca5c: 0x8e0211f0  lw          $v0, 0x11F0($s0)
    ctx->pc = 0x38ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4592)));
    // 0x38ca60: 0x8e0311f8  lw          $v1, 0x11F8($s0)
    ctx->pc = 0x38ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4600)));
    // 0x38ca64: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x38ca64u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x38ca68: 0x8e0411f4  lw          $a0, 0x11F4($s0)
    ctx->pc = 0x38ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4596)));
    // 0x38ca6c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x38ca6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x38ca70: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x38ca70u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x38ca74: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x38ca74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x38ca78: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x38ca78u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x38ca7c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x38ca7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x38ca80: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CA80u;
    {
        const bool branch_taken_0x38ca80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA80u;
        // 0x38ca84: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca80) {
            ctx->pc = 0x38CA90u;
            goto label_38ca90;
        }
    }
    ctx->pc = 0x38CA88u;
    // 0x38ca88: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x38CA88u;
    {
        const bool branch_taken_0x38ca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA88u;
        // 0x38ca8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca88) {
            ctx->pc = 0x38CB0Cu;
            goto label_38cb0c;
        }
    }
    ctx->pc = 0x38CA90u;
label_38ca90:
    // 0x38ca90: 0x26664b00  addiu       $a2, $s3, 0x4B00
    ctx->pc = 0x38ca90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 19200));
    // 0x38ca94: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x38ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x38ca98: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x38ca98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x38ca9c: 0x34a580c0  ori         $a1, $a1, 0x80C0
    ctx->pc = 0x38ca9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32960);
    // 0x38caa0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x38caa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x38caa4: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x38caa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x38caa8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x38caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x38caac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x38caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x38cab0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38cab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38cab4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x38cab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x38cab8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38cab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38cabc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38cabcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38cac0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38cac0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38cac4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x38cac4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38cac8: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x38cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x38cacc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CACCu;
    {
        const bool branch_taken_0x38cacc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CACCu;
        // 0x38cad0: 0x7fa40010  sq          $a0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cacc) {
            ctx->pc = 0x38CAE4u;
            goto label_38cae4;
        }
    }
    ctx->pc = 0x38CAD4u;
    // 0x38cad4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x38cad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x38cad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38cad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38cadc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38CADCu;
    {
        const bool branch_taken_0x38cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CADCu;
        // 0x38cae0: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cadc) {
            ctx->pc = 0x38CAFCu;
            goto label_38cafc;
        }
    }
    ctx->pc = 0x38CAE4u;
label_38cae4:
    // 0x38cae4: 0x30e20030  andi        $v0, $a3, 0x30
    ctx->pc = 0x38cae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)48);
    // 0x38cae8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38CAE8u;
    {
        const bool branch_taken_0x38cae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAE8u;
        // 0x38caec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cae8) {
            ctx->pc = 0x38CB0Cu;
            goto label_38cb0c;
        }
    }
    ctx->pc = 0x38CAF0u;
    // 0x38caf0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x38caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38caf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38caf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38caf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38caf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38cafc:
    // 0x38cafc: 0x0  nop
    ctx->pc = 0x38cafcu;
    // NOP
    // 0x38cb00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38cb00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38cb04: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x38cb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x38cb08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38cb0c:
    // 0x38cb0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x38cb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38cb10: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x38cb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38cb14: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x38cb14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38cb18: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x38cb18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38cb1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38cb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38cb20: 0x3e00008  jr          $ra
    ctx->pc = 0x38CB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB20u;
        // 0x38cb24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CB28u;
}
