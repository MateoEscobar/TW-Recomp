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

// Function: sub_004EE510
// Address: 0x4ee510 - 0x4ee520
void sub_004EE510_0x4ee510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE510_0x4ee510");
#endif

    ctx->pc = 0x4ee510u;

    // 0x4ee510: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee514: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE514u;
        // 0x4ee518: 0x24423960  addiu       $v0, $v0, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE51Cu;
    // 0x4ee51c: 0x0  nop
    ctx->pc = 0x4ee51cu;
    // NOP
    ctx->pc = 0x4ee520u;
}
