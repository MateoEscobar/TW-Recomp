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

// Function: sub_00343C90
// Address: 0x343c90 - 0x343cd8
void sub_00343C90_0x343c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343C90_0x343c90");
#endif

    ctx->pc = 0x343c90u;

    // 0x343c90: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x343c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x343c94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x343c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343c9c: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x343c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x343ca0: 0x78850020  lq          $a1, 0x20($a0)
    ctx->pc = 0x343ca0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x343ca4: 0x78820070  lq          $v0, 0x70($a0)
    ctx->pc = 0x343ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x343ca8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x343ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x343cac: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x343cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x343cb0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343cb4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x343cb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x343cb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343cbc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343cbcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343cc0: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x343cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x343cc4: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x343cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x343cc8: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x343cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x343ccc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x343cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x343cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x343CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CD0u;
        // 0x343cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343CD8u;
}
