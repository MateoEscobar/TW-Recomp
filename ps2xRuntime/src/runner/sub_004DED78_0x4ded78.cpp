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

// Function: sub_004DED78
// Address: 0x4ded78 - 0x4ded88
void sub_004DED78_0x4ded78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DED78_0x4ded78");
#endif

    ctx->pc = 0x4ded78u;

    // 0x4ded78: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4ded78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4ded7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DED7Cu;
        // 0x4ded80: 0x24421d08  addiu       $v0, $v0, 0x1D08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DED7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DED84u;
    // 0x4ded84: 0x0  nop
    ctx->pc = 0x4ded84u;
    // NOP
    ctx->pc = 0x4ded88u;
}
