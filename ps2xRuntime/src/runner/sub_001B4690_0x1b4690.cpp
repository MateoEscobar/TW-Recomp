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

// Function: sub_001B4690
// Address: 0x1b4690 - 0x1b46a0
void sub_001B4690_0x1b4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4690_0x1b4690");
#endif

    ctx->pc = 0x1b4690u;

    // 0x1b4690: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b4694: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4694u;
        // 0x1b4698: 0xa044f260  sb          $a0, -0xDA0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294963808), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B469Cu;
    // 0x1b469c: 0x0  nop
    ctx->pc = 0x1b469cu;
    // NOP
    ctx->pc = 0x1b46a0u;
}
