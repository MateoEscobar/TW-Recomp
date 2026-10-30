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

// Function: sub_00466EC8
// Address: 0x466ec8 - 0x466ee0
void sub_00466EC8_0x466ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466EC8_0x466ec8");
#endif

    ctx->pc = 0x466ec8u;

    // 0x466ec8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x466ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x466ecc: 0x8c43e684  lw          $v1, -0x197C($v0)
    ctx->pc = 0x466eccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x52E684u));
    // 0x466ed0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x466ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466ed4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x466ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x466ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466ED8u;
        // 0x466edc: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466EE0u;
}
