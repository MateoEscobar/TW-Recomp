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

// Function: sub_00336E08
// Address: 0x336e08 - 0x336ee0
void sub_00336E08_0x336e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336E08_0x336e08");
#endif

    ctx->pc = 0x336e08u;

    // 0x336e08: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x336e08u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336e0c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x336e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x336e10: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x336e10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x336e14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x336e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e18: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x336e18u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336e1c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x336e1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336e20: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x336e20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x336e24: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x336e24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336e28: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x336e28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x336e2c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x336e2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x336e30: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x336e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x336e34: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x336e34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x336e38: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x336e38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336e3c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x336e3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x336e40: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x336e40u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x336e44: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x336e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336e48: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x336e48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336e4c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x336e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336e50: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x336e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336e54: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x336e54u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x336e58: 0x4a0003bf  vwaitq
    ctx->pc = 0x336e58u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x336e5c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x336e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x336e60: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x336e60u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x336e64: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x336e64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x336e68: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x336e68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x336e6c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x336e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336e70: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x336e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336e74: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x336e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336e78: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x336e78u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x336e7c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x336e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x336e80: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x336e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x336e84: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x336e84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x336e88: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x336e88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x336e8c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x336e8cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x336e90: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x336e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x336e94: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x336e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x336e98: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x336e98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x336e9c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x336e9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x336ea0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x336ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336ea4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x336ea4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x336ea8: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x336ea8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x336eac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x336eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x336eb0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x336eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x336eb4: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x336eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x336eb8: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x336eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x336ebc: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x336ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x336ec0: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x336ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x336ec4: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x336ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x336ec8: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x336ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x336ecc: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x336eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x336ed0: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x336ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x336ed4: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x336ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x336ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x336ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336ED8u;
        // 0x336edc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336EE0u;
}
