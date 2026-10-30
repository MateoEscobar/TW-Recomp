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

// Function: sub_004E4C60
// Address: 0x4e4c60 - 0x4e4c68
void sub_004E4C60_0x4e4c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C60_0x4e4c60");
#endif

    ctx->pc = 0x4e4c60u;

    // 0x4e4c60: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4C60u;
        // 0x4e4c64: 0xa085018c  sb          $a1, 0x18C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 396), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4C68u;
}
