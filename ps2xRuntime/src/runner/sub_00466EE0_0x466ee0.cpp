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

// Function: sub_00466EE0
// Address: 0x466ee0 - 0x466f00
void sub_00466EE0_0x466ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466EE0_0x466ee0");
#endif

    ctx->pc = 0x466ee0u;

    // 0x466ee0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x466ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x466ee4: 0x8c43e684  lw          $v1, -0x197C($v0)
    ctx->pc = 0x466ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x52E684u));
    // 0x466ee8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x466ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466eec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x466eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x466ef0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x466EF0u;
    {
        const bool branch_taken_0x466ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466ef0) {
            ctx->pc = 0x466EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466EF0u;
            // 0x466ef4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466EF8u;
            goto label_466ef8;
        }
    }
    ctx->pc = 0x466EF8u;
label_466ef8:
    // 0x466ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x466EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466EF8u;
        // 0x466efc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466F00u;
}
