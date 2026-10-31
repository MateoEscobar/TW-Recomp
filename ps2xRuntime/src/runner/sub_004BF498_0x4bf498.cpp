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

// Function: sub_004BF498
// Address: 0x4bf498 - 0x4bf4b8
void sub_004BF498_0x4bf498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF498_0x4bf498");
#endif

    ctx->pc = 0x4bf498u;

    // 0x4bf498: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4bf498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x4bf49c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4bf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4bf4a0: 0x8ca341f4  lw          $v1, 0x41F4($a1)
    ctx->pc = 0x4bf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7141F4u));
    // 0x4bf4a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4bf4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4bf4a8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4bf4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bf4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF4ACu;
        // 0x4bf4b0: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF4B4u;
    // 0x4bf4b4: 0x0  nop
    ctx->pc = 0x4bf4b4u;
    // NOP
    ctx->pc = 0x4bf4b8u;
}
