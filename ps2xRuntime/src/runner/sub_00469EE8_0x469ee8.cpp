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

// Function: sub_00469EE8
// Address: 0x469ee8 - 0x469ef8
void sub_00469EE8_0x469ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469EE8_0x469ee8");
#endif

    ctx->pc = 0x469ee8u;

    // 0x469ee8: 0xaf8484cc  sw          $a0, -0x7B34($gp)
    ctx->pc = 0x469ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935756), GPR_U32(ctx, 4));
    // 0x469eec: 0x3e00008  jr          $ra
    ctx->pc = 0x469EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469EECu;
        // 0x469ef0: 0xaf8584d0  sw          $a1, -0x7B30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935760), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469EF4u;
    // 0x469ef4: 0x0  nop
    ctx->pc = 0x469ef4u;
    // NOP
    ctx->pc = 0x469ef8u;
}
