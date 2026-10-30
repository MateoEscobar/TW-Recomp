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

// Function: sub_004E7498
// Address: 0x4e7498 - 0x4e74d8
void sub_004E7498_0x4e7498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7498_0x4e7498");
#endif

    switch (ctx->pc) {
        case 0x4e74b0u: goto label_4e74b0;
        default: break;
    }

    ctx->pc = 0x4e7498u;

    // 0x4e7498: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e7498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e749c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e74a0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E74A0u;
    {
        const bool branch_taken_0x4e74a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e74a0) {
            ctx->pc = 0x4E74A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E74A0u;
            // 0x4e74a4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E74D0u;
            goto label_4e74d0;
        }
    }
    ctx->pc = 0x4E74A8u;
    // 0x4e74a8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e74a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e74ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e74acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e74b0:
    // 0x4e74b0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e74b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e74b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E74B4u;
    {
        const bool branch_taken_0x4e74b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e74b4) {
            ctx->pc = 0x4E74B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E74B4u;
            // 0x4e74b8: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E74C4u;
            goto label_4e74c4;
        }
    }
    ctx->pc = 0x4E74BCu;
    // 0x4e74bc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e74bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e74c0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e74c4:
    // 0x4e74c4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E74C4u;
    {
        const bool branch_taken_0x4e74c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e74c4) {
            ctx->pc = 0x4E74C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E74C4u;
            // 0x4e74c8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E74B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e74b0;
        }
    }
    ctx->pc = 0x4E74CCu;
    // 0x4e74cc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e74d0:
    // 0x4e74d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E74D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E74D0u;
        // 0x4e74d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E74D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E74D8u;
}
