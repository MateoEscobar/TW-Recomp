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

// Function: sub_002F52B0
// Address: 0x2f52b0 - 0x2f52c8
void sub_002F52B0_0x2f52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F52B0_0x2f52b0");
#endif

    ctx->pc = 0x2f52b0u;

    // 0x2f52b0: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x2f52b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x2f52b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2f52b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2f52b8: 0xa0800042  sb          $zero, 0x42($a0)
    ctx->pc = 0x2f52b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f52bc: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x2f52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2f52c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F52C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52C0u;
        // 0x2f52c4: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F52C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F52C8u;
}
