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

// Function: sub_00335E00
// Address: 0x335e00 - 0x335e40
void sub_00335E00_0x335e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335E00_0x335e00");
#endif

    switch (ctx->pc) {
        case 0x335e34u: goto label_335e34;
        default: break;
    }

    ctx->pc = 0x335e00u;

    // 0x335e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x335e04: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x335e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x335e08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x335e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x335e0c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x335e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335e10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x335e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x335e14: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x335e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x335e18: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x335e18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x335e1c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x335e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x335e20: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x335e20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x335e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x335e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e28: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x335e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x335e2c: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x335E2Cu;
    SET_GPR_U32(ctx, 31, 0x335E34u);
    ctx->pc = 0x335E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E2Cu;
    // 0x335e30: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x335E2Cu, 0x335E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E34u;
label_335e34:
    // 0x335e34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x335e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335e38: 0x3e00008  jr          $ra
    ctx->pc = 0x335E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E38u;
        // 0x335e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335E40u;
}
