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

// Function: sub_001540C0
// Address: 0x1540c0 - 0x1540d0
void sub_001540C0_0x1540c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001540C0_0x1540c0");
#endif

    ctx->pc = 0x1540c0u;

    // 0x1540c0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1540c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1540c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1540C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1540C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540C4u;
        // 0x1540c8: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1540CCu;
    // 0x1540cc: 0x0  nop
    ctx->pc = 0x1540ccu;
    // NOP
    ctx->pc = 0x1540d0u;
}
