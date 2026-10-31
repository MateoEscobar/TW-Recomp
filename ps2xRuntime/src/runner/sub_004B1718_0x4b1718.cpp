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

// Function: sub_004B1718
// Address: 0x4b1718 - 0x4b1750
void sub_004B1718_0x4b1718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1718_0x4b1718");
#endif

    switch (ctx->pc) {
        case 0x4b1728u: goto label_4b1728;
        default: break;
    }

    ctx->pc = 0x4b1718u;

    // 0x4b1718: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4b1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4b171c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4b171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4b1720: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B1720u;
    {
        const bool branch_taken_0x4b1720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1720u;
        // 0x4b1724: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1720) {
            ctx->pc = 0x4B1748u;
            goto label_4b1748;
        }
    }
    ctx->pc = 0x4B1728u;
label_4b1728:
    // 0x4b1728: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1728u;
    {
        const bool branch_taken_0x4b1728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4b1728) {
            ctx->pc = 0x4B172Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1728u;
            // 0x4b172c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B173Cu;
            goto label_4b173c;
        }
    }
    ctx->pc = 0x4B1730u;
    // 0x4b1730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b1730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1734: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1734u;
        // 0x4b1738: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B173Cu;
label_4b173c:
    // 0x4b173c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1740: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B1740u;
    {
        const bool branch_taken_0x4b1740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1740u;
        // 0x4b1744: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1740) {
            ctx->pc = 0x4B1728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1728;
        }
    }
    ctx->pc = 0x4B1748u;
label_4b1748:
    // 0x4b1748: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1750u;
}
