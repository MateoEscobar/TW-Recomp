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

// Function: sub_0047D270
// Address: 0x47d270 - 0x47d280
void sub_0047D270_0x47d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D270_0x47d270");
#endif

    ctx->pc = 0x47d270u;

    // 0x47d270: 0xaf8485cc  sw          $a0, -0x7A34($gp)
    ctx->pc = 0x47d270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936012), GPR_U32(ctx, 4));
    // 0x47d274: 0x3e00008  jr          $ra
    ctx->pc = 0x47D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D274u;
        // 0x47d278: 0xaf8585d0  sw          $a1, -0x7A30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936016), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D27Cu;
    // 0x47d27c: 0x0  nop
    ctx->pc = 0x47d27cu;
    // NOP
    ctx->pc = 0x47d280u;
}
