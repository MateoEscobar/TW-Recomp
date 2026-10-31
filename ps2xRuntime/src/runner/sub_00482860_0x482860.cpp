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

// Function: sub_00482860
// Address: 0x482860 - 0x482870
void sub_00482860_0x482860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482860_0x482860");
#endif

    ctx->pc = 0x482860u;

    // 0x482860: 0xaf848610  sw          $a0, -0x79F0($gp)
    ctx->pc = 0x482860u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936080), GPR_U32(ctx, 4));
    // 0x482864: 0x3e00008  jr          $ra
    ctx->pc = 0x482864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482864u;
        // 0x482868: 0xaf858614  sw          $a1, -0x79EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936084), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48286Cu;
    // 0x48286c: 0x0  nop
    ctx->pc = 0x48286cu;
    // NOP
    ctx->pc = 0x482870u;
}
