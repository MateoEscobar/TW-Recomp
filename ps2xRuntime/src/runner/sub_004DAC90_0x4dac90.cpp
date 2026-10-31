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

// Function: sub_004DAC90
// Address: 0x4dac90 - 0x4dacc0
void sub_004DAC90_0x4dac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAC90_0x4dac90");
#endif

    ctx->pc = 0x4dac90u;

    // 0x4dac90: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4dac90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dac94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dac94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dac98: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x4dac98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4dac9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4dac9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x4daca0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4daca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x4daca4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x4daca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x4daca8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x4daca8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x4dacac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4dacacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4dacb0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4dacb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x4dacb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DACB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DACB4u;
        // 0x4dacb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DACB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DACBCu;
    // 0x4dacbc: 0x0  nop
    ctx->pc = 0x4dacbcu;
    // NOP
    ctx->pc = 0x4dacc0u;
}
