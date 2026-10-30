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

// Function: sub_0046A8D0
// Address: 0x46a8d0 - 0x46a8f8
void sub_0046A8D0_0x46a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A8D0_0x46a8d0");
#endif

    ctx->pc = 0x46a8d0u;

    // 0x46a8d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x46a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46a8d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46a8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a8d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46a8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x46A8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A8DCu;
        // 0x46a8e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A8E4u;
    // 0x46a8e4: 0x0  nop
    ctx->pc = 0x46a8e4u;
    // NOP
    // 0x46a8e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x46a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x46a8ec: 0x0  nop
    ctx->pc = 0x46a8ecu;
    // NOP
    // 0x46a8f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x46a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x46a8f4: 0x0  nop
    ctx->pc = 0x46a8f4u;
    // NOP
    ctx->pc = 0x46a8f8u;
}
