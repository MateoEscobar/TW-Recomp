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

// Function: sub_004EF018
// Address: 0x4ef018 - 0x4ef028
void sub_004EF018_0x4ef018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF018_0x4ef018");
#endif

    ctx->pc = 0x4ef018u;

    // 0x4ef018: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ef018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ef01c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF01Cu;
        // 0x4ef020: 0x24428550  addiu       $v0, $v0, -0x7AB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF024u;
    // 0x4ef024: 0x0  nop
    ctx->pc = 0x4ef024u;
    // NOP
    ctx->pc = 0x4ef028u;
}
