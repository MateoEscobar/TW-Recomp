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

// Function: sub_0015F580
// Address: 0x15f580 - 0x15f590
void sub_0015F580_0x15f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F580_0x15f580");
#endif

    ctx->pc = 0x15f580u;

    // 0x15f580: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15f584: 0x3e00008  jr          $ra
    ctx->pc = 0x15F584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F584u;
        // 0x15f588: 0xac44c7ac  sw          $a0, -0x3854($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952876), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F58Cu;
    // 0x15f58c: 0x0  nop
    ctx->pc = 0x15f58cu;
    // NOP
    ctx->pc = 0x15f590u;
}
