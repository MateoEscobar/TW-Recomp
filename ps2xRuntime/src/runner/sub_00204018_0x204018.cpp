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

// Function: sub_00204018
// Address: 0x204018 - 0x204028
void sub_00204018_0x204018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204018_0x204018");
#endif

    ctx->pc = 0x204018u;

    // 0x204018: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x204018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20401c: 0x3e00008  jr          $ra
    ctx->pc = 0x20401Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20401Cu;
        // 0x204020: 0xac44f598  sw          $a0, -0xA68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964632), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20401Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204024u;
    // 0x204024: 0x0  nop
    ctx->pc = 0x204024u;
    // NOP
    ctx->pc = 0x204028u;
}
