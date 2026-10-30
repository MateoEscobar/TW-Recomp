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

// Function: sub_00343C30
// Address: 0x343c30 - 0x343c90
void sub_00343C30_0x343c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343C30_0x343c30");
#endif

    ctx->pc = 0x343c30u;

    // 0x343c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343c34: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x343c34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x343c38: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x343c38u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x343c3c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x343c3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x343c40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343c44: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x343c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x343c48: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x343c48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343c4c: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x343c4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x343c50: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x343c50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x343c54: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x343c54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x343c58: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x343c58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x343c5c: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x343c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x343c60: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x343c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x343c64: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x343c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x343c68: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x343c68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x343c6c: 0x4a2c033c  vmove.w     $vf12, $vf0
    ctx->pc = 0x343c6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343c70: 0x4a0003bf  vwaitq
    ctx->pc = 0x343c70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x343c74: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x343c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x343c78: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x343c78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x343c7c: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x343c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x343c80: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x343c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x343c84: 0x3e00008  jr          $ra
    ctx->pc = 0x343C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C84u;
        // 0x343c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343C8Cu;
    // 0x343c8c: 0x0  nop
    ctx->pc = 0x343c8cu;
    // NOP
    ctx->pc = 0x343c90u;
}
