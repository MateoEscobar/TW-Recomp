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

// Function: sub_004EF148
// Address: 0x4ef148 - 0x4ef158
void sub_004EF148_0x4ef148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF148_0x4ef148");
#endif

    ctx->pc = 0x4ef148u;

    // 0x4ef148: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ef148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ef14c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF14Cu;
        // 0x4ef150: 0x24428778  addiu       $v0, $v0, -0x7888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF154u;
    // 0x4ef154: 0x0  nop
    ctx->pc = 0x4ef154u;
    // NOP
    ctx->pc = 0x4ef158u;
}
