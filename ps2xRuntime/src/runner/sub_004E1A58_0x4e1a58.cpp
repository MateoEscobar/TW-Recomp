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

// Function: sub_004E1A58
// Address: 0x4e1a58 - 0x4e1a98
void sub_004E1A58_0x4e1a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1A58_0x4e1a58");
#endif

    switch (ctx->pc) {
        case 0x4e1a70u: goto label_4e1a70;
        default: break;
    }

    ctx->pc = 0x4e1a58u;

    // 0x4e1a58: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e1a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e1a5c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e1a60: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E1A60u;
    {
        const bool branch_taken_0x4e1a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1a60) {
            ctx->pc = 0x4E1A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1A60u;
            // 0x4e1a64: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1A90u;
            goto label_4e1a90;
        }
    }
    ctx->pc = 0x4E1A68u;
    // 0x4e1a68: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e1a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e1a6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e1a70:
    // 0x4e1a70: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e1a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e1a74: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E1A74u;
    {
        const bool branch_taken_0x4e1a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1a74) {
            ctx->pc = 0x4E1A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1A74u;
            // 0x4e1a78: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1A84u;
            goto label_4e1a84;
        }
    }
    ctx->pc = 0x4E1A7Cu;
    // 0x4e1a7c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e1a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1a80: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e1a84:
    // 0x4e1a84: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E1A84u;
    {
        const bool branch_taken_0x4e1a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1a84) {
            ctx->pc = 0x4E1A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1A84u;
            // 0x4e1a88: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1a70;
        }
    }
    ctx->pc = 0x4E1A8Cu;
    // 0x4e1a8c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e1a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e1a90:
    // 0x4e1a90: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1A90u;
        // 0x4e1a94: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E1A98u;
}
