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

// Function: sub_001B20E0
// Address: 0x1b20e0 - 0x1b20f8
void sub_001B20E0_0x1b20e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B20E0_0x1b20e0");
#endif

    ctx->pc = 0x1b20e0u;

    // 0x1b20e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b20e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b20e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b20ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B20ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20ECu;
        // 0x1b20f0: 0xac464104  sw          $a2, 0x4104($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16644), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B20ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B20F4u;
    // 0x1b20f4: 0x0  nop
    ctx->pc = 0x1b20f4u;
    // NOP
    ctx->pc = 0x1b20f8u;
}
