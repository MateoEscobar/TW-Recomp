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

// Function: sub_004EC650
// Address: 0x4ec650 - 0x4ec660
void sub_004EC650_0x4ec650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC650_0x4ec650");
#endif

    ctx->pc = 0x4ec650u;

    // 0x4ec650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ec650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ec654: 0xac8540f4  sw          $a1, 0x40F4($a0)
    ctx->pc = 0x4ec654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16628), GPR_U32(ctx, 5));
    // 0x4ec658: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC658u;
        // 0x4ec65c: 0xac824614  sw          $v0, 0x4614($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC660u;
}
