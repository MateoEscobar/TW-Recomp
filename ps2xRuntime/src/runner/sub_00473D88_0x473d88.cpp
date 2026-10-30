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

// Function: sub_00473D88
// Address: 0x473d88 - 0x473e30
void sub_00473D88_0x473d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473D88_0x473d88");
#endif

    switch (ctx->pc) {
        case 0x473dc8u: goto label_473dc8;
        case 0x473dd8u: goto label_473dd8;
        case 0x473de8u: goto label_473de8;
        case 0x473df8u: goto label_473df8;
        case 0x473e08u: goto label_473e08;
        case 0x473e10u: goto label_473e10;
        case 0x473e18u: goto label_473e18;
        case 0x473e20u: goto label_473e20;
        default: break;
    }

    ctx->pc = 0x473d88u;

    // 0x473d88: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x473d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x473d8c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x473d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x473d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x473d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x473d94: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x473d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x473d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473d9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x473d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x473da0: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x473da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x473da4: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x473da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x473da8: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x473da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x473dac: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x473dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x473db0: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x473db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x473db4: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x473db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x473db8: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x473db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x473dbc: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x473dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x473dc0: 0xc11ed58  jal         func_47B560
    ctx->pc = 0x473DC0u;
    SET_GPR_U32(ctx, 31, 0x473DC8u);
    ctx->pc = 0x473DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473DC0u;
    // 0x473dc4: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B560u, 0x473DC0u, 0x473DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473DC8u;
label_473dc8:
    // 0x473dc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x473DC8u;
    {
        const bool branch_taken_0x473dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473dc8) {
            ctx->pc = 0x473E00u;
            goto label_473e00;
        }
    }
    ctx->pc = 0x473DD0u;
    // 0x473dd0: 0xc11ed98  jal         func_47B660
    ctx->pc = 0x473DD0u;
    SET_GPR_U32(ctx, 31, 0x473DD8u);
    ctx->pc = 0x47B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B660u, 0x473DD0u, 0x473DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473DD8u;
label_473dd8:
    // 0x473dd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x473DD8u;
    {
        const bool branch_taken_0x473dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473dd8) {
            ctx->pc = 0x473E00u;
            goto label_473e00;
        }
    }
    ctx->pc = 0x473DE0u;
    // 0x473de0: 0xc11ed78  jal         func_47B5E0
    ctx->pc = 0x473DE0u;
    SET_GPR_U32(ctx, 31, 0x473DE8u);
    ctx->pc = 0x47B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B5E0u, 0x473DE0u, 0x473DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473DE8u;
label_473de8:
    // 0x473de8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x473DE8u;
    {
        const bool branch_taken_0x473de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473de8) {
            ctx->pc = 0x473E00u;
            goto label_473e00;
        }
    }
    ctx->pc = 0x473DF0u;
    // 0x473df0: 0xc11cfc0  jal         func_473F00
    ctx->pc = 0x473DF0u;
    SET_GPR_U32(ctx, 31, 0x473DF8u);
    ctx->pc = 0x473F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473F00u, 0x473DF0u, 0x473DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473DF8u;
label_473df8:
    // 0x473df8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x473DF8u;
    {
        const bool branch_taken_0x473df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x473DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473DF8u;
        // 0x473dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473df8) {
            ctx->pc = 0x473E24u;
            goto label_473e24;
        }
    }
    ctx->pc = 0x473E00u;
label_473e00:
    // 0x473e00: 0xc11d01c  jal         func_474070
    ctx->pc = 0x473E00u;
    SET_GPR_U32(ctx, 31, 0x473E08u);
    ctx->pc = 0x474070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474070u, 0x473E00u, 0x473E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E08u;
label_473e08:
    // 0x473e08: 0xc11edc8  jal         func_47B720
    ctx->pc = 0x473E08u;
    SET_GPR_U32(ctx, 31, 0x473E10u);
    ctx->pc = 0x47B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B720u, 0x473E08u, 0x473E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E10u;
label_473e10:
    // 0x473e10: 0xc11edc0  jal         func_47B700
    ctx->pc = 0x473E10u;
    SET_GPR_U32(ctx, 31, 0x473E18u);
    ctx->pc = 0x47B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B700u, 0x473E10u, 0x473E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E18u;
label_473e18:
    // 0x473e18: 0xc11edb8  jal         func_47B6E0
    ctx->pc = 0x473E18u;
    SET_GPR_U32(ctx, 31, 0x473E20u);
    ctx->pc = 0x47B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B6E0u, 0x473E18u, 0x473E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E20u;
label_473e20:
    // 0x473e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x473e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473e24:
    // 0x473e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473e28: 0x3e00008  jr          $ra
    ctx->pc = 0x473E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473E28u;
        // 0x473e2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473E30u;
}
