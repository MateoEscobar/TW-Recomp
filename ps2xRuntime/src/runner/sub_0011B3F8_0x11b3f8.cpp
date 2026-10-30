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

// Function: sub_0011B3F8
// Address: 0x11b3f8 - 0x11b400
void sub_0011B3F8_0x11b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B3F8_0x11b3f8");
#endif

    ctx->pc = 0x11b3f8u;

    // 0x11b3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3F8u;
        // 0x11b3fc: 0xa08500ec  sb          $a1, 0xEC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 236), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B400u;
}
