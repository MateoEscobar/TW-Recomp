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

// Function: sub_002AF908
// Address: 0x2af908 - 0x2af928
void sub_002AF908_0x2af908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF908_0x2af908");
#endif

    ctx->pc = 0x2af908u;

    // 0x2af908: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2af908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2af90c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af910: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2af910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2af914: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2af914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2af918: 0xa0850034  sb          $a1, 0x34($a0)
    ctx->pc = 0x2af918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 5));
    // 0x2af91c: 0x244200fa  addiu       $v0, $v0, 0xFA
    ctx->pc = 0x2af91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
    // 0x2af920: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF920u;
        // 0x2af924: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF928u;
}
