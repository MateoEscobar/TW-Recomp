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

// Function: sub_004EF038
// Address: 0x4ef038 - 0x4ef048
void sub_004EF038_0x4ef038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF038_0x4ef038");
#endif

    ctx->pc = 0x4ef038u;

    // 0x4ef038: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ef038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ef03c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF03Cu;
        // 0x4ef040: 0x244285e0  addiu       $v0, $v0, -0x7A20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF044u;
    // 0x4ef044: 0x0  nop
    ctx->pc = 0x4ef044u;
    // NOP
    ctx->pc = 0x4ef048u;
}
