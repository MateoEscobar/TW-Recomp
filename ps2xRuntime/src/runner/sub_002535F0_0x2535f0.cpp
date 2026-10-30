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

// Function: sub_002535F0
// Address: 0x2535f0 - 0x253608
void sub_002535F0_0x2535f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002535F0_0x2535f0");
#endif

    ctx->pc = 0x2535f0u;

    // 0x2535f0: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2535f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2535f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2535f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2535f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2535f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2535fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2535FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535FCu;
        // 0x253600: 0xac460028  sw          $a2, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2535FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253604u;
    // 0x253604: 0x0  nop
    ctx->pc = 0x253604u;
    // NOP
    ctx->pc = 0x253608u;
}
