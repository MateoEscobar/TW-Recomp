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

// Function: sub_001A4770
// Address: 0x1a4770 - 0x1a4780
void sub_001A4770_0x1a4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4770_0x1a4770");
#endif

    ctx->pc = 0x1a4770u;

    // 0x1a4770: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4770u;
        // 0x1a4774: 0xac8501f0  sw          $a1, 0x1F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4778u;
    // 0x1a4778: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a4778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a477c: 0x0  nop
    ctx->pc = 0x1a477cu;
    // NOP
    ctx->pc = 0x1a4780u;
}
