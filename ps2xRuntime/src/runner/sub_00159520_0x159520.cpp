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

// Function: sub_00159520
// Address: 0x159520 - 0x159538
void sub_00159520_0x159520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159520_0x159520");
#endif

    ctx->pc = 0x159520u;

    // 0x159520: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x159524: 0x3e00008  jr          $ra
    ctx->pc = 0x159524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159524u;
        // 0x159528: 0xac44c6e4  sw          $a0, -0x391C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952676), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15952Cu;
    // 0x15952c: 0x0  nop
    ctx->pc = 0x15952cu;
    // NOP
    // 0x159530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x159530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159534: 0x0  nop
    ctx->pc = 0x159534u;
    // NOP
    ctx->pc = 0x159538u;
}
