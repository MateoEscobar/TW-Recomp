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

// Function: sub_00147640
// Address: 0x147640 - 0x147660
void sub_00147640_0x147640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147640_0x147640");
#endif

    ctx->pc = 0x147640u;

    // 0x147640: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x147644: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x147644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x147648: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x147648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x14764c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x14764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x147650: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x147650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x147654: 0x3e00008  jr          $ra
    ctx->pc = 0x147654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147654u;
        // 0x147658: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14765Cu;
    // 0x14765c: 0x0  nop
    ctx->pc = 0x14765cu;
    // NOP
    ctx->pc = 0x147660u;
}
