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

// Function: sub_004DFDF8
// Address: 0x4dfdf8 - 0x4dfe38
void sub_004DFDF8_0x4dfdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DFDF8_0x4dfdf8");
#endif

    switch (ctx->pc) {
        case 0x4dfe10u: goto label_4dfe10;
        default: break;
    }

    ctx->pc = 0x4dfdf8u;

    // 0x4dfdf8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4dfdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4dfdfc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4dfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4dfe00: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4DFE00u;
    {
        const bool branch_taken_0x4dfe00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfe00) {
            ctx->pc = 0x4DFE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFE00u;
            // 0x4dfe04: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFE30u;
            goto label_4dfe30;
        }
    }
    ctx->pc = 0x4DFE08u;
    // 0x4dfe08: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4dfe08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dfe0c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4dfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4dfe10:
    // 0x4dfe10: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4dfe10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4dfe14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DFE14u;
    {
        const bool branch_taken_0x4dfe14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dfe14) {
            ctx->pc = 0x4DFE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFE14u;
            // 0x4dfe18: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFE24u;
            goto label_4dfe24;
        }
    }
    ctx->pc = 0x4DFE1Cu;
    // 0x4dfe1c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4dfe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfe20: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4dfe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4dfe24:
    // 0x4dfe24: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DFE24u;
    {
        const bool branch_taken_0x4dfe24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dfe24) {
            ctx->pc = 0x4DFE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFE24u;
            // 0x4dfe28: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dfe10;
        }
    }
    ctx->pc = 0x4DFE2Cu;
    // 0x4dfe2c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4dfe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4dfe30:
    // 0x4dfe30: 0x3e00008  jr          $ra
    ctx->pc = 0x4DFE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFE30u;
        // 0x4dfe34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DFE38u;
}
