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

// Function: sub_004F2F18
// Address: 0x4f2f18 - 0x4f2f30
void sub_004F2F18_0x4f2f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2F18_0x4f2f18");
#endif

    ctx->pc = 0x4f2f18u;

    // 0x4f2f18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f2f1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f2f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4f2f20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f2f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f2f24: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2F24u;
        // 0x4f2f28: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2F2Cu;
    // 0x4f2f2c: 0x0  nop
    ctx->pc = 0x4f2f2cu;
    // NOP
    ctx->pc = 0x4f2f30u;
}
