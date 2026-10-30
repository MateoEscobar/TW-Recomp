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

// Function: sub_004AA310
// Address: 0x4aa310 - 0x4aa320
void sub_004AA310_0x4aa310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA310_0x4aa310");
#endif

    ctx->pc = 0x4aa310u;

    // 0x4aa310: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4aa310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4aa314: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA314u;
        // 0x4aa318: 0x2442fa10  addiu       $v0, $v0, -0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA31Cu;
    // 0x4aa31c: 0x0  nop
    ctx->pc = 0x4aa31cu;
    // NOP
    ctx->pc = 0x4aa320u;
}
