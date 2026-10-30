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

// Function: sub_002947F0
// Address: 0x2947f0 - 0x294808
void sub_002947F0_0x2947f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002947F0_0x2947f0");
#endif

    ctx->pc = 0x2947f0u;

    // 0x2947f0: 0x2c820065  sltiu       $v0, $a0, 0x65
    ctx->pc = 0x2947f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x2947f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2947F4u;
    {
        const bool branch_taken_0x2947f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2947F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947F4u;
        // 0x2947f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947f4) {
            ctx->pc = 0x294800u;
            goto label_294800;
        }
    }
    ctx->pc = 0x2947FCu;
    // 0x2947fc: 0xac440ac8  sw          $a0, 0xAC8($v0)
    ctx->pc = 0x2947fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2760), GPR_U32(ctx, 4));
label_294800:
    // 0x294800: 0x3e00008  jr          $ra
    ctx->pc = 0x294800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294808u;
}
