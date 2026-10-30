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

// Function: sub_0041B6C8
// Address: 0x41b6c8 - 0x41b6e0
void sub_0041B6C8_0x41b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B6C8_0x41b6c8");
#endif

    ctx->pc = 0x41b6c8u;

    // 0x41b6c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41b6cc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x41b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x41b6d0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x41b6d4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x41b6d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x41b6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x41B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6D8u;
        // 0x41b6dc: 0xac6402b0  sw          $a0, 0x2B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B6E0u;
}
