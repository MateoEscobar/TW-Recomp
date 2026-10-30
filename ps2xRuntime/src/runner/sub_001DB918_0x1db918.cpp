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

// Function: sub_001DB918
// Address: 0x1db918 - 0x1db928
void sub_001DB918_0x1db918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB918_0x1db918");
#endif

    ctx->pc = 0x1db918u;

    // 0x1db918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db91c: 0xac821b80  sw          $v0, 0x1B80($a0)
    ctx->pc = 0x1db91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7040), GPR_U32(ctx, 2));
    // 0x1db920: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB920u;
        // 0x1db924: 0xac821b70  sw          $v0, 0x1B70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB928u;
}
