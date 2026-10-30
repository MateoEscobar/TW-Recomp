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

// Function: sub_00104630
// Address: 0x104630 - 0x1047d0
void sub_00104630_0x104630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104630_0x104630");
#endif

    switch (ctx->pc) {
        case 0x1046d8u: goto label_1046d8;
        default: break;
    }

    ctx->pc = 0x104630u;

    // 0x104630: 0x9ca30004  lwu         $v1, 0x4($a1)
    ctx->pc = 0x104630u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x104634: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x104634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10463c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10463cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x104640: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x104640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x104644: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x104644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x104648: 0xa1030461  sb          $v1, 0x461($t0)
    ctx->pc = 0x104648u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1121), (uint8_t)GPR_U32(ctx, 3));
    // 0x10464c: 0x9ca20024  lwu         $v0, 0x24($a1)
    ctx->pc = 0x10464cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x104650: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x104650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x104654: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x104654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x104658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10465c: 0xa1020462  sb          $v0, 0x462($t0)
    ctx->pc = 0x10465cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1122), (uint8_t)GPR_U32(ctx, 2));
    // 0x104660: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x104660u;
    {
        const bool branch_taken_0x104660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x104664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104660u;
        // 0x104664: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104660) {
            ctx->pc = 0x104670u;
            goto label_104670;
        }
    }
    ctx->pc = 0x104668u;
    // 0x104668: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x104668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10466c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x10466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_104670:
    // 0x104670: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x104670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104674: 0x91030462  lbu         $v1, 0x462($t0)
    ctx->pc = 0x104674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1122)));
    // 0x104678: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x104678u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10467c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10467Cu;
    {
        const bool branch_taken_0x10467c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x104680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10467Cu;
        // 0x104680: 0x24a20020  addiu       $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10467c) {
            ctx->pc = 0x10468Cu;
            goto label_10468c;
        }
    }
    ctx->pc = 0x104684u;
    // 0x104684: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x104684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x104688: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x104688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
label_10468c:
    // 0x10468c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x10468cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x104690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104694: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x104694u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x104698: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x104698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10469c: 0x7d020020  sq          $v0, 0x20($t0)
    ctx->pc = 0x10469cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 2));
    // 0x1046a0: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x1046a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1046a4: 0x14e40047  bne         $a3, $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1046A4u;
    {
        const bool branch_taken_0x1046a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x1046A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046A4u;
        // 0x1046a8: 0x7d030030  sq          $v1, 0x30($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046a4) {
            ctx->pc = 0x1047C4u;
            goto label_1047c4;
        }
    }
    ctx->pc = 0x1046ACu;
    // 0x1046ac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x1046acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x1046b0: 0x8cc300d8  lw          $v1, 0xD8($a2)
    ctx->pc = 0x1046b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x1046b4: 0x8c447200  lw          $a0, 0x7200($v0)
    ctx->pc = 0x1046b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597200u));
    // 0x1046b8: 0x24ac0040  addiu       $t4, $a1, 0x40
    ctx->pc = 0x1046b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1046bc: 0x246b00b0  addiu       $t3, $v1, 0xB0
    ctx->pc = 0x1046bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1046c0: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x1046c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1046c4: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x1046c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1046c8: 0x246600a0  addiu       $a2, $v1, 0xA0
    ctx->pc = 0x1046c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x1046cc: 0x25070050  addiu       $a3, $t0, 0x50
    ctx->pc = 0x1046ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x1046d0: 0x25090060  addiu       $t1, $t0, 0x60
    ctx->pc = 0x1046d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x1046d4: 0x0  nop
    ctx->pc = 0x1046d4u;
    // NOP
label_1046d8:
    // 0x1046d8: 0xcd200000  pref        0x00, 0x0($t1)
    ctx->pc = 0x1046d8u;
    // PREF instruction (ignored)
    // 0x1046dc: 0xcd600000  pref        0x00, 0x0($t3)
    ctx->pc = 0x1046dcu;
    // PREF instruction (ignored)
    // 0x1046e0: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1046e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1046e4: 0x79840000  lq          $a0, 0x0($t4)
    ctx->pc = 0x1046e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1046e8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1046e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1046ec: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1046ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1046f0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1046f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1046f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1046f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1046f8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1046f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1046fc: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1046fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104700: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x104700u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x104704: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x104704u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104708: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x104708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10470c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x10470cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x104710: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x104710u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104714: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x104714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104718: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x104718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10471c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x10471cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104720: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x104720u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x104724: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x104724u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x104728: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x104728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10472c: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x10472cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x104730: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x104730u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104734: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x104734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x104738: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x104738u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10473c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x10473cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104740: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x104740u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x104744: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x104744u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104748: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x104748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10474c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x10474cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104750: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x104750u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x104754: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x104754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104758: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x104758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10475c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x10475cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104760: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x104760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104764: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x104764u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x104768: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x104768u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10476c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x10476cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104770: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x104770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104774: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x104774u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x104778: 0x7ce3fff0  sq          $v1, -0x10($a3)
    ctx->pc = 0x104778u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294967280), GPR_VEC(ctx, 3));
    // 0x10477c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x10477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x104780: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x104780u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x104784: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x104784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x104788: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x104788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10478c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x10478cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x104790: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x104790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104794: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x104794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x104798: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x104798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10479c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x10479cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1047a0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1047a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1047a4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1047a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1047a8: 0x7ce3fff0  sq          $v1, -0x10($a3)
    ctx->pc = 0x1047a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294967280), GPR_VEC(ctx, 3));
    // 0x1047ac: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1047acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1047b0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1047b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1047b4: 0x2da20022  sltiu       $v0, $t5, 0x22
    ctx->pc = 0x1047b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x1047b8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1047B8u;
    {
        const bool branch_taken_0x1047b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1047BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047B8u;
        // 0x1047bc: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047b8) {
            ctx->pc = 0x1046D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1046d8;
        }
    }
    ctx->pc = 0x1047C0u;
    // 0x1047c0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1047c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1047c4:
    // 0x1047c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1047C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1047C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047C4u;
        // 0x1047c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1047C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1047CCu;
    // 0x1047cc: 0x0  nop
    ctx->pc = 0x1047ccu;
    // NOP
    ctx->pc = 0x1047d0u;
}
