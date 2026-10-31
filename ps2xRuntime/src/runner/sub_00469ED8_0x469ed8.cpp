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

// Function: sub_00469ED8
// Address: 0x469ed8 - 0x469ee8
void sub_00469ED8_0x469ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469ED8_0x469ed8");
#endif

    ctx->pc = 0x469ed8u;

    // 0x469ed8: 0xaf8484c4  sw          $a0, -0x7B3C($gp)
    ctx->pc = 0x469ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935748), GPR_U32(ctx, 4));
    // 0x469edc: 0x3e00008  jr          $ra
    ctx->pc = 0x469EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469EDCu;
        // 0x469ee0: 0xaf8584c8  sw          $a1, -0x7B38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935752), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469EE4u;
    // 0x469ee4: 0x0  nop
    ctx->pc = 0x469ee4u;
    // NOP
    ctx->pc = 0x469ee8u;
}
