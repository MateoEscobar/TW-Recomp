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

// Function: sub_00354378
// Address: 0x354378 - 0x354558
void sub_00354378_0x354378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354378_0x354378");
#endif

    switch (ctx->pc) {
        case 0x3543acu: goto label_3543ac;
        case 0x3543ccu: goto label_3543cc;
        case 0x3543d4u: goto label_3543d4;
        case 0x354450u: goto label_354450;
        default: break;
    }

    ctx->pc = 0x354378u;

    // 0x354378: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x354378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x35437c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x35437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x354380: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x354380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x354384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x354384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354388: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x354388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x35438c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35438cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354390: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x354390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x354394: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x354394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354398: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x354398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x35439c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x35439cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3543a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3543a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3543a4: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x3543A4u;
    SET_GPR_U32(ctx, 31, 0x3543ACu);
    ctx->pc = 0x3543A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3543A4u;
    // 0x3543a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x3543A4u, 0x3543ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3543ACu;
label_3543ac:
    // 0x3543ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3543acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3543b0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3543b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3543b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3543b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3543b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3543B8u;
    {
        const bool branch_taken_0x3543b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3543BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543B8u;
        // 0x3543bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543b8) {
            ctx->pc = 0x3543CCu;
            goto label_3543cc;
        }
    }
    ctx->pc = 0x3543C0u;
    // 0x3543c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3543c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3543c4: 0xc0d497e  jal         func_3525F8
    ctx->pc = 0x3543C4u;
    SET_GPR_U32(ctx, 31, 0x3543CCu);
    ctx->pc = 0x3543C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3543C4u;
    // 0x3543c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3525F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3525F8u, 0x3543C4u, 0x3543CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3543CCu;
label_3543cc:
    // 0x3543cc: 0xc0d4c08  jal         func_353020
    ctx->pc = 0x3543CCu;
    SET_GPR_U32(ctx, 31, 0x3543D4u);
    ctx->pc = 0x3543D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3543CCu;
    // 0x3543d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353020u, 0x3543CCu, 0x3543D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3543D4u;
label_3543d4:
    // 0x3543d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3543d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3543d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3543D8u;
    {
        const bool branch_taken_0x3543d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543D8u;
        // 0x3543dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543d8) {
            ctx->pc = 0x3543F0u;
            goto label_3543f0;
        }
    }
    ctx->pc = 0x3543E0u;
    // 0x3543e0: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x3543e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3543e4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3543e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3543e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3543E8u;
    {
        const bool branch_taken_0x3543e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3543ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543E8u;
        // 0x3543ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543e8) {
            ctx->pc = 0x354418u;
            goto label_354418;
        }
    }
    ctx->pc = 0x3543F0u;
label_3543f0:
    // 0x3543f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3543f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3543f4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3543f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3543f8: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x3543f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
    // 0x3543fc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3543fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354400: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x354400u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x511780u));
    // 0x354404: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x354404u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x354408: 0x7e250010  sq          $a1, 0x10($s1)
    ctx->pc = 0x354408u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 5));
    // 0x35440c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x35440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x354410: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x354410u;
    {
        const bool branch_taken_0x354410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354410u;
        // 0x354414: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354410) {
            ctx->pc = 0x354534u;
            goto label_354534;
        }
    }
    ctx->pc = 0x354418u;
label_354418:
    // 0x354418: 0x1280003e  beqz        $s4, . + 4 + (0x3E << 2)
    ctx->pc = 0x354418u;
    {
        const bool branch_taken_0x354418 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x35441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354418u;
        // 0x35441c: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354418) {
            ctx->pc = 0x354514u;
            goto label_354514;
        }
    }
    ctx->pc = 0x354420u;
    // 0x354420: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x354420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x354424: 0x2484018  mult        $t0, $s2, $t0
    ctx->pc = 0x354424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x354428: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x354428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35442c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35442cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354430: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x354430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354434: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x354434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354438: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x354438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x35443c: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x35443cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x354440: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x354440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x354444: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x354444u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x354448: 0xc0d51fa  jal         func_3547E8
    ctx->pc = 0x354448u;
    SET_GPR_U32(ctx, 31, 0x354450u);
    ctx->pc = 0x35444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354448u;
    // 0x35444c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3547E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3547E8u, 0x354448u, 0x354450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354450u;
label_354450:
    // 0x354450: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x354450u;
    {
        const bool branch_taken_0x354450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354450u;
        // 0x354454: 0x7ba40030  lq          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354450) {
            ctx->pc = 0x354504u;
            goto label_354504;
        }
    }
    ctx->pc = 0x354458u;
    // 0x354458: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x354458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35445c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x35445cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x354460: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x354460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x354464: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x354464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x354468: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x354468u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35446c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x35446cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x354470: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x354470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x354474: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x354474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x354478: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x354478u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x35447c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x35447cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x354480: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x354480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x354484: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x354484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x354488: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x354488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35448c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x35448cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x354490: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x354490u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x354494: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x354494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x354498: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x354498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35449c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x35449cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3544a0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3544a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3544a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3544a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3544a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3544a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3544ac: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3544acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3544b0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3544b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3544b4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3544b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3544b8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3544b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3544bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3544bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3544c0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3544c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3544c4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3544c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3544c8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3544c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3544cc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3544ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3544d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3544d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3544d4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3544d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3544d8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3544d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3544dc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3544dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3544e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3544e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3544e4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3544e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3544e8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3544e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3544ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3544ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3544f0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3544f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3544f4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3544f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3544f8: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x3544f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3544fc: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x3544fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x354500: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x354500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_354504:
    // 0x354504: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x354504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354508: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x354508u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35450c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35450Cu;
    {
        const bool branch_taken_0x35450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35450Cu;
        // 0x354510: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35450c) {
            ctx->pc = 0x354530u;
            goto label_354530;
        }
    }
    ctx->pc = 0x354514u;
label_354514:
    // 0x354514: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x354514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x354518: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x354518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x35451c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x35451cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x354520: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x354520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x354524: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x354524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x354528: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x354528u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x35452c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x35452cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_354530:
    // 0x354530: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x354530u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_354534:
    // 0x354534: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x354534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354538: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x354538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35453c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x35453cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x354540: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x354540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x354544: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x354544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x354548: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x354548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35454c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x354550: 0x3e00008  jr          $ra
    ctx->pc = 0x354550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354550u;
        // 0x354554: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354558u;
}
