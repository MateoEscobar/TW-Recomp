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

// Function: sub_004E9108
// Address: 0x4e9108 - 0x4e9170
void sub_004E9108_0x4e9108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9108_0x4e9108");
#endif

    switch (ctx->pc) {
        case 0x4e9120u: goto label_4e9120;
        default: break;
    }

    ctx->pc = 0x4e9108u;

    // 0x4e9108: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e9108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e910c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4e910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e9110: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4E9110u;
    {
        const bool branch_taken_0x4e9110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9110u;
        // 0x4e9114: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9110) {
            ctx->pc = 0x4E913Cu;
            goto label_4e913c;
        }
    }
    ctx->pc = 0x4E9118u;
    // 0x4e9118: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4e9118u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e911c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e9120:
    // 0x4e9120: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4e9120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4e9124: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E9124u;
    {
        const bool branch_taken_0x4e9124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9124) {
            ctx->pc = 0x4E9128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9124u;
            // 0x4e9128: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9134u;
            goto label_4e9134;
        }
    }
    ctx->pc = 0x4E912Cu;
    // 0x4e912c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4e912cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9130: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4e9130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e9134:
    // 0x4e9134: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E9134u;
    {
        const bool branch_taken_0x4e9134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9134) {
            ctx->pc = 0x4E9138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9134u;
            // 0x4e9138: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e9120;
        }
    }
    ctx->pc = 0x4E913Cu;
label_4e913c:
    // 0x4e913c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e913cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e9140: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4e9140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4e9144: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E9144u;
    {
        const bool branch_taken_0x4e9144 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4E9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9144u;
        // 0x4e9148: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9144) {
            ctx->pc = 0x4E9160u;
            goto label_4e9160;
        }
    }
    ctx->pc = 0x4E914Cu;
    // 0x4e914c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9150: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4e9150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e9154: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e9154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e9158: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E9158u;
    {
        const bool branch_taken_0x4e9158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9158) {
            ctx->pc = 0x4E915Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9158u;
            // 0x4e915c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9164u;
            goto label_4e9164;
        }
    }
    ctx->pc = 0x4E9160u;
label_4e9160:
    // 0x4e9160: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e9160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e9164:
    // 0x4e9164: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e9164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9168: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9168u;
        // 0x4e916c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9170u;
}
