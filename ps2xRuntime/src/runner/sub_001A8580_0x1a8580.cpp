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

// Function: sub_001A8580
// Address: 0x1a8580 - 0x1a8590
void sub_001A8580_0x1a8580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8580_0x1a8580");
#endif

    switch (ctx->pc) {
        case 0x1a8584u: goto label_1a8584;
        default: break;
    }

    ctx->pc = 0x1a8580u;

    // 0x1a8580: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a8580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a8584:
    // 0x1a8584: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8584u;
        // 0x1a8588: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A858Cu;
    // 0x1a858c: 0x0  nop
    ctx->pc = 0x1a858cu;
    // NOP
    ctx->pc = 0x1a8590u;
}
