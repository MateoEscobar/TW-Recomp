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

// Function: sub_001C8DB0
// Address: 0x1c8db0 - 0x1c8dc8
void sub_001C8DB0_0x1c8db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8DB0_0x1c8db0");
#endif

    ctx->pc = 0x1c8db0u;

    // 0x1c8db0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c8db4: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x1c8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x1c8db8: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1c8db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1c8dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DBCu;
        // 0x1c8dc0: 0xac85054c  sw          $a1, 0x54C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1356), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DC4u;
    // 0x1c8dc4: 0x0  nop
    ctx->pc = 0x1c8dc4u;
    // NOP
    ctx->pc = 0x1c8dc8u;
}
