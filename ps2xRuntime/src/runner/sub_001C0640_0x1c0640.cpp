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

// Function: sub_001C0640
// Address: 0x1c0640 - 0x1c0648
void sub_001C0640_0x1c0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0640_0x1c0640");
#endif

    ctx->pc = 0x1c0640u;

    // 0x1c0640: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0640u;
        // 0x1c0644: 0xac85084c  sw          $a1, 0x84C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0648u;
}
