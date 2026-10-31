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

// Function: sub_0041B8A0
// Address: 0x41b8a0 - 0x41b8b0
void sub_0041B8A0_0x41b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B8A0_0x41b8a0");
#endif

    ctx->pc = 0x41b8a0u;

    // 0x41b8a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x41b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41b8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x41B8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B8A4u;
        // 0x41b8a8: 0xa0860294  sb          $a2, 0x294($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 660), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B8ACu;
    // 0x41b8ac: 0x0  nop
    ctx->pc = 0x41b8acu;
    // NOP
    ctx->pc = 0x41b8b0u;
}
