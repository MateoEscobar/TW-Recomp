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

// Function: sub_00337F78
// Address: 0x337f78 - 0x337fc8
void sub_00337F78_0x337f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337F78_0x337f78");
#endif

    ctx->pc = 0x337f78u;

    // 0x337f78: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x337f78u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337f7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337f80: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x337f80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337f84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x337f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f88: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337f88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337f8c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x337f8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x337f90: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x337f90u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337f94: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x337f94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337f98: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x337f98u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x337f9c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x337f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x337fa0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x337fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x337fa4: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x337fa4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337fa8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x337fa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x337fac: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x337facu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x337fb0: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x337fb0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337fb4: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x337fb4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337fb8: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x337fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x337fbc: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x337fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x337fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x337FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FC0u;
        // 0x337fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337FC8u;
}
