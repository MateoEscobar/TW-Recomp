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

// Function: sub_002024D0
// Address: 0x2024d0 - 0x2024e0
void sub_002024D0_0x2024d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002024D0_0x2024d0");
#endif

    ctx->pc = 0x2024d0u;

    // 0x2024d0: 0xac8002b0  sw          $zero, 0x2B0($a0)
    ctx->pc = 0x2024d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 0));
    // 0x2024d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2024D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2024D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024D4u;
        // 0x2024d8: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2024D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2024DCu;
    // 0x2024dc: 0x0  nop
    ctx->pc = 0x2024dcu;
    // NOP
    ctx->pc = 0x2024e0u;
}
