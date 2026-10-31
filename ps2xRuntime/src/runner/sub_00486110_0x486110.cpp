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

// Function: sub_00486110
// Address: 0x486110 - 0x486120
void sub_00486110_0x486110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486110_0x486110");
#endif

    ctx->pc = 0x486110u;

    // 0x486110: 0xaf848634  sw          $a0, -0x79CC($gp)
    ctx->pc = 0x486110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 4));
    // 0x486114: 0x3e00008  jr          $ra
    ctx->pc = 0x486114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486114u;
        // 0x486118: 0xaf858638  sw          $a1, -0x79C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48611Cu;
    // 0x48611c: 0x0  nop
    ctx->pc = 0x48611cu;
    // NOP
    ctx->pc = 0x486120u;
}
