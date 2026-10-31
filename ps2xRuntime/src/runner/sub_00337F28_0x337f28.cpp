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

// Function: sub_00337F28
// Address: 0x337f28 - 0x337f78
void sub_00337F28_0x337f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337F28_0x337f28");
#endif

    ctx->pc = 0x337f28u;

    // 0x337f28: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x337f28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337f2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337f30: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x337f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337f34: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x337f34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x337f38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337f38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337f3c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x337f3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337f40: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x337f40u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337f44: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x337f44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337f48: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x337f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x337f4c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x337f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x337f50: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x337f50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x337f54: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x337f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x337f58: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x337f58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337f5c: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x337f5cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337f60: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x337f60u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337f64: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x337f64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x337f68: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x337f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x337f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x337F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F6Cu;
        // 0x337f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337F74u;
    // 0x337f74: 0x0  nop
    ctx->pc = 0x337f74u;
    // NOP
    ctx->pc = 0x337f78u;
}
