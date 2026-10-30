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

// Function: sub_004F2BC0
// Address: 0x4f2bc0 - 0x4f2bd8
void sub_004F2BC0_0x4f2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2BC0_0x4f2bc0");
#endif

    ctx->pc = 0x4f2bc0u;

    // 0x4f2bc0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f2bc4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f2bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4f2bc8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f2bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f2bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2BCCu;
        // 0x4f2bd0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2BD4u;
    // 0x4f2bd4: 0x0  nop
    ctx->pc = 0x4f2bd4u;
    // NOP
    ctx->pc = 0x4f2bd8u;
}
