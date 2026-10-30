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

// Function: sub_0043D520
// Address: 0x43d520 - 0x43d530
void sub_0043D520_0x43d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D520_0x43d520");
#endif

    ctx->pc = 0x43d520u;

    // 0x43d520: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x43d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x43d524: 0x3e00008  jr          $ra
    ctx->pc = 0x43D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D524u;
        // 0x43d528: 0xac408e50  sw          $zero, -0x71B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D52Cu;
    // 0x43d52c: 0x0  nop
    ctx->pc = 0x43d52cu;
    // NOP
    ctx->pc = 0x43d530u;
}
