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

// Function: sub_00465BF0
// Address: 0x465bf0 - 0x465c08
void sub_00465BF0_0x465bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465BF0_0x465bf0");
#endif

    ctx->pc = 0x465bf0u;

    // 0x465bf0: 0x8f838490  lw          $v1, -0x7B70($gp)
    ctx->pc = 0x465bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x465bf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x465bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465bf8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x465bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x465bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x465BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465BFCu;
        // 0x465c00: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465C04u;
    // 0x465c04: 0x0  nop
    ctx->pc = 0x465c04u;
    // NOP
    ctx->pc = 0x465c08u;
}
