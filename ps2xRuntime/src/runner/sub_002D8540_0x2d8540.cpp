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

// Function: sub_002D8540
// Address: 0x2d8540 - 0x2d8550
void sub_002D8540_0x2d8540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8540_0x2d8540");
#endif

    ctx->pc = 0x2d8540u;

    // 0x2d8540: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d8540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8544: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8544u;
        // 0x2d8548: 0xa0820024  sb          $v0, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D854Cu;
    // 0x2d854c: 0x0  nop
    ctx->pc = 0x2d854cu;
    // NOP
    ctx->pc = 0x2d8550u;
}
