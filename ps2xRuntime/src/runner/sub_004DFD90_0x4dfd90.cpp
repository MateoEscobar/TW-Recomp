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

// Function: sub_004DFD90
// Address: 0x4dfd90 - 0x4dfdf8
void sub_004DFD90_0x4dfd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DFD90_0x4dfd90");
#endif

    switch (ctx->pc) {
        case 0x4dfda8u: goto label_4dfda8;
        default: break;
    }

    ctx->pc = 0x4dfd90u;

    // 0x4dfd90: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4dfd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4dfd94: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4dfd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4dfd98: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4DFD98u;
    {
        const bool branch_taken_0x4dfd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFD98u;
        // 0x4dfd9c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfd98) {
            ctx->pc = 0x4DFDC4u;
            goto label_4dfdc4;
        }
    }
    ctx->pc = 0x4DFDA0u;
    // 0x4dfda0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4dfda0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dfda4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4dfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4dfda8:
    // 0x4dfda8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4dfda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4dfdac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DFDACu;
    {
        const bool branch_taken_0x4dfdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dfdac) {
            ctx->pc = 0x4DFDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFDACu;
            // 0x4dfdb0: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFDBCu;
            goto label_4dfdbc;
        }
    }
    ctx->pc = 0x4DFDB4u;
    // 0x4dfdb4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4dfdb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfdb8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4dfdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4dfdbc:
    // 0x4dfdbc: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DFDBCu;
    {
        const bool branch_taken_0x4dfdbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dfdbc) {
            ctx->pc = 0x4DFDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFDBCu;
            // 0x4dfdc0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dfda8;
        }
    }
    ctx->pc = 0x4DFDC4u;
label_4dfdc4:
    // 0x4dfdc4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4dfdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4dfdc8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4dfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4dfdcc: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DFDCCu;
    {
        const bool branch_taken_0x4dfdcc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4DFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFDCCu;
        // 0x4dfdd0: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfdcc) {
            ctx->pc = 0x4DFDE8u;
            goto label_4dfde8;
        }
    }
    ctx->pc = 0x4DFDD4u;
    // 0x4dfdd4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dfdd8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4dfdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4dfddc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4dfddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4dfde0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DFDE0u;
    {
        const bool branch_taken_0x4dfde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfde0) {
            ctx->pc = 0x4DFDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFDE0u;
            // 0x4dfde4: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFDECu;
            goto label_4dfdec;
        }
    }
    ctx->pc = 0x4DFDE8u;
label_4dfde8:
    // 0x4dfde8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4dfde8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4dfdec:
    // 0x4dfdec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4dfdecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DFDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFDF0u;
        // 0x4dfdf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DFDF8u;
}
