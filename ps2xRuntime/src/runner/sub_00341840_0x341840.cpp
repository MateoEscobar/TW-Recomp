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

// Function: sub_00341840
// Address: 0x341840 - 0x3418f8
void sub_00341840_0x341840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341840_0x341840");
#endif

    ctx->pc = 0x341840u;

    // 0x341840: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x341840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x341844: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x341844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x341848: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x341848u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34184c: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x34184cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x341850: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x341850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x341854: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x341854u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341858: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x341858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34185c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34185cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x341860: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x341860u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341864: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x341864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x341868: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x341868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34186c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34186cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x341870: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x341870u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x341874: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x341874u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341878: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x341878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x34187c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x341880: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x341880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x341884: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x341884u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x341888: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x341888u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34188c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34188cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341890: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x341890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x341894: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x341894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x341898: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x341898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34189c: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x34189cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3418a0: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x3418a0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3418a4: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x3418a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x3418a8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3418a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3418ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3418acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3418b0: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3418b0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3418b4: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x3418b4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3418b8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3418b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3418bc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3418bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3418c0: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3418c0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3418c4: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x3418c4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3418c8: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3418c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x3418cc: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3418ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3418d0: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3418d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x3418d4: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x3418d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x3418d8: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x3418d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x3418dc: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x3418dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x3418e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3418e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3418e4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3418e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3418e8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3418e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3418ec: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x3418ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x3418f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3418F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3418F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418F0u;
        // 0x3418f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3418F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3418F8u;
}
