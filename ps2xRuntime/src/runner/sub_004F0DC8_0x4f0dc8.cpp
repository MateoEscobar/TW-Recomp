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

// Function: sub_004F0DC8
// Address: 0x4f0dc8 - 0x4f0e30
void sub_004F0DC8_0x4f0dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0DC8_0x4f0dc8");
#endif

    switch (ctx->pc) {
        case 0x4f0de0u: goto label_4f0de0;
        default: break;
    }

    ctx->pc = 0x4f0dc8u;

    // 0x4f0dc8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4f0dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4f0dcc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4f0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4f0dd0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F0DD0u;
    {
        const bool branch_taken_0x4f0dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0DD0u;
        // 0x4f0dd4: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0dd0) {
            ctx->pc = 0x4F0DFCu;
            goto label_4f0dfc;
        }
    }
    ctx->pc = 0x4F0DD8u;
    // 0x4f0dd8: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4f0dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f0ddc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4f0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4f0de0:
    // 0x4f0de0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4f0de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4f0de4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F0DE4u;
    {
        const bool branch_taken_0x4f0de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0de4) {
            ctx->pc = 0x4F0DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0DE4u;
            // 0x4f0de8: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0DF4u;
            goto label_4f0df4;
        }
    }
    ctx->pc = 0x4F0DECu;
    // 0x4f0dec: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4f0decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0df0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4f0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4f0df4:
    // 0x4f0df4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4F0DF4u;
    {
        const bool branch_taken_0x4f0df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0df4) {
            ctx->pc = 0x4F0DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0DF4u;
            // 0x4f0df8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0de0;
        }
    }
    ctx->pc = 0x4F0DFCu;
label_4f0dfc:
    // 0x4f0dfc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4f0dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4f0e00: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4f0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4f0e04: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F0E04u;
    {
        const bool branch_taken_0x4f0e04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4F0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E04u;
        // 0x4f0e08: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e04) {
            ctx->pc = 0x4F0E20u;
            goto label_4f0e20;
        }
    }
    ctx->pc = 0x4F0E0Cu;
    // 0x4f0e0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f0e10: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4f0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4f0e14: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4f0e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f0e18: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4F0E18u;
    {
        const bool branch_taken_0x4f0e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0e18) {
            ctx->pc = 0x4F0E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0E18u;
            // 0x4f0e1c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0E24u;
            goto label_4f0e24;
        }
    }
    ctx->pc = 0x4F0E20u;
label_4f0e20:
    // 0x4f0e20: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4f0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4f0e24:
    // 0x4f0e24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f0e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0e28: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E28u;
        // 0x4f0e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0E30u;
}
