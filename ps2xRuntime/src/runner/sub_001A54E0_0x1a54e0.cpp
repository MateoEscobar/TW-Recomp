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

// Function: sub_001A54E0
// Address: 0x1a54e0 - 0x1a54e8
void sub_001A54E0_0x1a54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A54E0_0x1a54e0");
#endif

    ctx->pc = 0x1a54e0u;

    // 0x1a54e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54E0u;
        // 0x1a54e4: 0xac850164  sw          $a1, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54E8u;
}
