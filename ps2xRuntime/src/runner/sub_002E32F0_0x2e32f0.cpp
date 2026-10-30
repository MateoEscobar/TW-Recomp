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

// Function: sub_002E32F0
// Address: 0x2e32f0 - 0x2e3318
void sub_002E32F0_0x2e32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E32F0_0x2e32f0");
#endif

    switch (ctx->pc) {
        case 0x2e3308u: goto label_2e3308;
        default: break;
    }

    ctx->pc = 0x2e32f0u;

    // 0x2e32f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e32f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e32f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e32f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e32fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e32fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3300: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2E3300u;
    SET_GPR_U32(ctx, 31, 0x2E3308u);
    ctx->pc = 0x2E3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3300u;
    // 0x2e3304: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2E3300u, 0x2E3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3308u;
label_2e3308:
    // 0x2e3308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e330c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E330Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E330Cu;
        // 0x2e3310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E330Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3314u;
    // 0x2e3314: 0x0  nop
    ctx->pc = 0x2e3314u;
    // NOP
    ctx->pc = 0x2e3318u;
}
