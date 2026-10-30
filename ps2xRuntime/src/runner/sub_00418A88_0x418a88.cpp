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

// Function: sub_00418A88
// Address: 0x418a88 - 0x418aa8
void sub_00418A88_0x418a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418A88_0x418a88");
#endif

    ctx->pc = 0x418a88u;

    // 0x418a88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x418a88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x418a8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x418a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x418a90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x418a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x418a94: 0x2442b1f8  addiu       $v0, $v0, -0x4E08
    ctx->pc = 0x418a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947320));
    // 0x418a98: 0xac860440  sw          $a2, 0x440($a0)
    ctx->pc = 0x418a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1088), GPR_U32(ctx, 6));
    // 0x418a9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x418a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x418aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x418AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AA0u;
        // 0x418aa4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418AA8u;
}
