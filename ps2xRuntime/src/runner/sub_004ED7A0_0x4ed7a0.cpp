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

// Function: sub_004ED7A0
// Address: 0x4ed7a0 - 0x4ed7a8
void sub_004ED7A0_0x4ed7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED7A0_0x4ed7a0");
#endif

    ctx->pc = 0x4ed7a0u;

    // 0x4ed7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED7A0u;
        // 0x4ed7a4: 0xac85015c  sw          $a1, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED7A8u;
}
