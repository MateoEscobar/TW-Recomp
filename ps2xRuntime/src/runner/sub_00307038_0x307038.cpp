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

// Function: sub_00307038
// Address: 0x307038 - 0x307058
void sub_00307038_0x307038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307038_0x307038");
#endif

    switch (ctx->pc) {
        case 0x307048u: goto label_307048;
        default: break;
    }

    ctx->pc = 0x307038u;

    // 0x307038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30703c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307040: 0xc0c1b74  jal         func_306DD0
    ctx->pc = 0x307040u;
    SET_GPR_U32(ctx, 31, 0x307048u);
    ctx->pc = 0x306DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306DD0u, 0x307040u, 0x307048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307048u;
label_307048:
    // 0x307048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30704c: 0x3e00008  jr          $ra
    ctx->pc = 0x30704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30704Cu;
        // 0x307050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307054u;
    // 0x307054: 0x0  nop
    ctx->pc = 0x307054u;
    // NOP
    ctx->pc = 0x307058u;
}
