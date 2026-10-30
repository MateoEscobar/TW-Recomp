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

// Function: sub_003395B8
// Address: 0x3395b8 - 0x3395d8
void sub_003395B8_0x3395b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003395B8_0x3395b8");
#endif

    ctx->pc = 0x3395b8u;

    // 0x3395b8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3395b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3395bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3395bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3395c0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x3395c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x3395c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3395c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3395c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3395c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3395cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3395CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3395D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395CCu;
        // 0x3395d0: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3395CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3395D4u;
    // 0x3395d4: 0x0  nop
    ctx->pc = 0x3395d4u;
    // NOP
    ctx->pc = 0x3395d8u;
}
