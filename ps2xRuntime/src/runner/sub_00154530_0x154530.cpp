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

// Function: sub_00154530
// Address: 0x154530 - 0x154550
void sub_00154530_0x154530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154530_0x154530");
#endif

    ctx->pc = 0x154530u;

    // 0x154530: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x154530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x154534: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x154534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x154538: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x154538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15453c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x15453cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x154540: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x154540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x154544: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x154544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x154548: 0x3e00008  jr          $ra
    ctx->pc = 0x154548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154548u;
        // 0x15454c: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154550u;
}
