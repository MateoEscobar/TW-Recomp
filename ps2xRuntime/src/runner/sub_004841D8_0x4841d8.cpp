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

// Function: sub_004841D8
// Address: 0x4841d8 - 0x4841e8
void sub_004841D8_0x4841d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004841D8_0x4841d8");
#endif

    ctx->pc = 0x4841d8u;

    // 0x4841d8: 0xaf84861c  sw          $a0, -0x79E4($gp)
    ctx->pc = 0x4841d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936092), GPR_U32(ctx, 4));
    // 0x4841dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4841DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4841E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4841DCu;
        // 0x4841e0: 0xaf858620  sw          $a1, -0x79E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4841DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4841E4u;
    // 0x4841e4: 0x0  nop
    ctx->pc = 0x4841e4u;
    // NOP
    ctx->pc = 0x4841e8u;
}
