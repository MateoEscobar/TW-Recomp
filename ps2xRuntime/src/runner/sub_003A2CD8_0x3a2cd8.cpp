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

// Function: sub_003A2CD8
// Address: 0x3a2cd8 - 0x3a2cf0
void sub_003A2CD8_0x3a2cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2CD8_0x3a2cd8");
#endif

    ctx->pc = 0x3a2cd8u;

    // 0x3a2cd8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a2cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a2cdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a2ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2CE0u;
        // 0x3a2ce4: 0x8c820838  lw          $v0, 0x838($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2104)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2CE8u;
    // 0x3a2ce8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3a2ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a2cec: 0x0  nop
    ctx->pc = 0x3a2cecu;
    // NOP
    ctx->pc = 0x3a2cf0u;
}
