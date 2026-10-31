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

// Function: sub_004DAC60
// Address: 0x4dac60 - 0x4dac90
void sub_004DAC60_0x4dac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAC60_0x4dac60");
#endif

    ctx->pc = 0x4dac60u;

    // 0x4dac60: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4dac60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dac64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dac64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dac68: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x4dac68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dac6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dac6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x4dac70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4dac70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x4dac74: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x4dac74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x4dac78: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x4dac78u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x4dac7c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x4dac7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x4dac80: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4dac80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4dac84: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4dac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x4dac88: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAC88u;
        // 0x4dac8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAC90u;
}
