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

// Function: sub_004E7BB0
// Address: 0x4e7bb0 - 0x4e7c20
void sub_004E7BB0_0x4e7bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7BB0_0x4e7bb0");
#endif

    switch (ctx->pc) {
        case 0x4e7bc8u: goto label_4e7bc8;
        default: break;
    }

    ctx->pc = 0x4e7bb0u;

    // 0x4e7bb0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e7bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e7bb4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4e7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e7bb8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4E7BB8u;
    {
        const bool branch_taken_0x4e7bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7BB8u;
        // 0x4e7bbc: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7bb8) {
            ctx->pc = 0x4E7BE4u;
            goto label_4e7be4;
        }
    }
    ctx->pc = 0x4E7BC0u;
    // 0x4e7bc0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4e7bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e7bc4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e7bc8:
    // 0x4e7bc8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4e7bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4e7bcc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E7BCCu;
    {
        const bool branch_taken_0x4e7bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7bcc) {
            ctx->pc = 0x4E7BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7BCCu;
            // 0x4e7bd0: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7BDCu;
            goto label_4e7bdc;
        }
    }
    ctx->pc = 0x4E7BD4u;
    // 0x4e7bd4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4e7bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7bd8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4e7bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e7bdc:
    // 0x4e7bdc: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E7BDCu;
    {
        const bool branch_taken_0x4e7bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7bdc) {
            ctx->pc = 0x4E7BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7BDCu;
            // 0x4e7be0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7bc8;
        }
    }
    ctx->pc = 0x4E7BE4u;
label_4e7be4:
    // 0x4e7be4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e7be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e7be8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4e7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4e7bec: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E7BECu;
    {
        const bool branch_taken_0x4e7bec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4E7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7BECu;
        // 0x4e7bf0: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7bec) {
            ctx->pc = 0x4E7C08u;
            goto label_4e7c08;
        }
    }
    ctx->pc = 0x4E7BF4u;
    // 0x4e7bf4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e7bf8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4e7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e7bfc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e7bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e7c00: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E7C00u;
    {
        const bool branch_taken_0x4e7c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7c00) {
            ctx->pc = 0x4E7C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7C00u;
            // 0x4e7c04: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7C0Cu;
            goto label_4e7c0c;
        }
    }
    ctx->pc = 0x4E7C08u;
label_4e7c08:
    // 0x4e7c08: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e7c0c:
    // 0x4e7c0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e7c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7c10: 0x3e00008  jr          $ra
    ctx->pc = 0x4E7C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7C10u;
        // 0x4e7c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7C18u;
    // 0x4e7c18: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4e7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x4e7c1c: 0x0  nop
    ctx->pc = 0x4e7c1cu;
    // NOP
    ctx->pc = 0x4e7c20u;
}
