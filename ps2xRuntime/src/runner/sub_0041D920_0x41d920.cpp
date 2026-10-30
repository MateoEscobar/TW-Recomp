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

// Function: sub_0041D920
// Address: 0x41d920 - 0x41d930
void sub_0041D920_0x41d920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D920_0x41d920");
#endif

    ctx->pc = 0x41d920u;

    // 0x41d920: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d924: 0x3e00008  jr          $ra
    ctx->pc = 0x41D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D924u;
        // 0x41d928: 0xac4448a8  sw          $a0, 0x48A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18600), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D92Cu;
    // 0x41d92c: 0x0  nop
    ctx->pc = 0x41d92cu;
    // NOP
    ctx->pc = 0x41d930u;
}
