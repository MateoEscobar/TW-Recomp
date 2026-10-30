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

// Function: sub_004A94B0
// Address: 0x4a94b0 - 0x4a94c8
void sub_004A94B0_0x4a94b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A94B0_0x4a94b0");
#endif

    ctx->pc = 0x4a94b0u;

    // 0x4a94b0: 0x8f838a94  lw          $v1, -0x756C($gp)
    ctx->pc = 0x4a94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937236)));
    // 0x4a94b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a94b8: 0xaf838a94  sw          $v1, -0x756C($gp)
    ctx->pc = 0x4a94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937236), GPR_U32(ctx, 3));
    // 0x4a94bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A94BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A94BCu;
        // 0x4a94c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A94BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A94C4u;
    // 0x4a94c4: 0x0  nop
    ctx->pc = 0x4a94c4u;
    // NOP
    ctx->pc = 0x4a94c8u;
}
