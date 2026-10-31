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

// Function: sub_0046A9E0
// Address: 0x46a9e0 - 0x46aa00
void sub_0046A9E0_0x46a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A9E0_0x46a9e0");
#endif

    ctx->pc = 0x46a9e0u;

    // 0x46a9e0: 0x8f8384bc  lw          $v1, -0x7B44($gp)
    ctx->pc = 0x46a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x46a9e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46a9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a9e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46a9ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x46a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x46a9f0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x46a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x46a9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x46A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A9F4u;
        // 0x46a9f8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A9FCu;
    // 0x46a9fc: 0x0  nop
    ctx->pc = 0x46a9fcu;
    // NOP
    ctx->pc = 0x46aa00u;
}
