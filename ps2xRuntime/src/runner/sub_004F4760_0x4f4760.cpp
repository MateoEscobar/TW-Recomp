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

// Function: sub_004F4760
// Address: 0x4f4760 - 0x4f4780
void sub_004F4760_0x4f4760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4760_0x4f4760");
#endif

    ctx->pc = 0x4f4760u;

    // 0x4f4760: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f4760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f4764: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f4764u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4f4768: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f4768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f476c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F476Cu;
        // 0x4f4770: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4774u;
    // 0x4f4774: 0x0  nop
    ctx->pc = 0x4f4774u;
    // NOP
    // 0x4f4778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f4778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f477c: 0x0  nop
    ctx->pc = 0x4f477cu;
    // NOP
    ctx->pc = 0x4f4780u;
}
