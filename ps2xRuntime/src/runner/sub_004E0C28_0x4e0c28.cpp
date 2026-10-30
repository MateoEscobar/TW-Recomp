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

// Function: sub_004E0C28
// Address: 0x4e0c28 - 0x4e0c68
void sub_004E0C28_0x4e0c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0C28_0x4e0c28");
#endif

    switch (ctx->pc) {
        case 0x4e0c40u: goto label_4e0c40;
        default: break;
    }

    ctx->pc = 0x4e0c28u;

    // 0x4e0c28: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0c2c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0c30: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E0C30u;
    {
        const bool branch_taken_0x4e0c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0c30) {
            ctx->pc = 0x4E0C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0C30u;
            // 0x4e0c34: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0C60u;
            goto label_4e0c60;
        }
    }
    ctx->pc = 0x4E0C38u;
    // 0x4e0c38: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e0c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e0c3c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e0c40:
    // 0x4e0c40: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e0c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e0c44: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E0C44u;
    {
        const bool branch_taken_0x4e0c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0c44) {
            ctx->pc = 0x4E0C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0C44u;
            // 0x4e0c48: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0C54u;
            goto label_4e0c54;
        }
    }
    ctx->pc = 0x4E0C4Cu;
    // 0x4e0c4c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e0c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0c50: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e0c54:
    // 0x4e0c54: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E0C54u;
    {
        const bool branch_taken_0x4e0c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0c54) {
            ctx->pc = 0x4E0C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0C54u;
            // 0x4e0c58: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0c40;
        }
    }
    ctx->pc = 0x4E0C5Cu;
    // 0x4e0c5c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e0c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e0c60:
    // 0x4e0c60: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0C60u;
        // 0x4e0c64: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E0C68u;
}
