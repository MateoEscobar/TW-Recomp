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

// Function: sub_0036DAF0
// Address: 0x36daf0 - 0x36db10
void sub_0036DAF0_0x36daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DAF0_0x36daf0");
#endif

    switch (ctx->pc) {
        case 0x36db00u: goto label_36db00;
        default: break;
    }

    ctx->pc = 0x36daf0u;

    // 0x36daf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36daf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36daf8: 0xc0e8980  jal         func_3A2600
    ctx->pc = 0x36DAF8u;
    SET_GPR_U32(ctx, 31, 0x36DB00u);
    ctx->pc = 0x3A2600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2600u, 0x36DAF8u, 0x36DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB00u;
label_36db00:
    // 0x36db00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36db00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36db04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36db04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db08: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB08u;
        // 0x36db0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB10u;
}
