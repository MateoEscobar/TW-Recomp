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

// Function: sub_0013B770
// Address: 0x13b770 - 0x13b780
void sub_0013B770_0x13b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B770_0x13b770");
#endif

    ctx->pc = 0x13b770u;

    // 0x13b770: 0xa4800352  sh          $zero, 0x352($a0)
    ctx->pc = 0x13b770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 850), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b774: 0x3e00008  jr          $ra
    ctx->pc = 0x13B774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B774u;
        // 0x13b778: 0xa4800350  sh          $zero, 0x350($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 848), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B77Cu;
    // 0x13b77c: 0x0  nop
    ctx->pc = 0x13b77cu;
    // NOP
    ctx->pc = 0x13b780u;
}
