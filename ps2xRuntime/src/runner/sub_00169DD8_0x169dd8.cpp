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

// Function: sub_00169DD8
// Address: 0x169dd8 - 0x169ea0
void sub_00169DD8_0x169dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169DD8_0x169dd8");
#endif

    switch (ctx->pc) {
        case 0x169e00u: goto label_169e00;
        case 0x169e0cu: goto label_169e0c;
        case 0x169e20u: goto label_169e20;
        case 0x169e28u: goto label_169e28;
        case 0x169e30u: goto label_169e30;
        case 0x169e4cu: goto label_169e4c;
        case 0x169e5cu: goto label_169e5c;
        case 0x169e6cu: goto label_169e6c;
        default: break;
    }

    ctx->pc = 0x169dd8u;

    // 0x169dd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x169dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x169ddc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x169ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x169de0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x169de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x169de4: 0x24900048  addiu       $s0, $a0, 0x48
    ctx->pc = 0x169de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x169de8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x169de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x169dec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x169decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x169df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169df8: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x169DF8u;
    SET_GPR_U32(ctx, 31, 0x169E00u);
    ctx->pc = 0x169DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DF8u;
    // 0x169dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x169DF8u, 0x169E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E00u;
label_169e00:
    // 0x169e00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x169e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x169e04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169E04u;
    {
        const bool branch_taken_0x169e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E04u;
        // 0x169e08: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e04) {
            ctx->pc = 0x169E14u;
            goto label_169e14;
        }
    }
    ctx->pc = 0x169E0Cu;
label_169e0c:
    // 0x169e0c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x169E0Cu;
    {
        const bool branch_taken_0x169e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E0Cu;
        // 0x169e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e0c) {
            ctx->pc = 0x169E84u;
            goto label_169e84;
        }
    }
    ctx->pc = 0x169E14u;
label_169e14:
    // 0x169e14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x169e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e1c: 0x0  nop
    ctx->pc = 0x169e1cu;
    // NOP
label_169e20:
    // 0x169e20: 0xc137866  jal         func_4DE198
    ctx->pc = 0x169E20u;
    SET_GPR_U32(ctx, 31, 0x169E28u);
    ctx->pc = 0x169E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E20u;
    // 0x169e24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x169E20u, 0x169E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E28u;
label_169e28:
    // 0x169e28: 0xc0e409a  jal         func_390268
    ctx->pc = 0x169E28u;
    SET_GPR_U32(ctx, 31, 0x169E30u);
    ctx->pc = 0x169E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E28u;
    // 0x169e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169E28u, 0x169E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E30u;
label_169e30:
    // 0x169e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e34: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x169E34u;
    {
        const bool branch_taken_0x169e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e34) {
            ctx->pc = 0x169E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169E34u;
            // 0x169e38: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169E74u;
            goto label_169e74;
        }
    }
    ctx->pc = 0x169E3Cu;
    // 0x169e3c: 0x5213000d  beql        $s0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x169E3Cu;
    {
        const bool branch_taken_0x169e3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x169e3c) {
            ctx->pc = 0x169E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169E3Cu;
            // 0x169e40: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169E74u;
            goto label_169e74;
        }
    }
    ctx->pc = 0x169E44u;
    // 0x169e44: 0xc088edc  jal         func_223B70
    ctx->pc = 0x169E44u;
    SET_GPR_U32(ctx, 31, 0x169E4Cu);
    ctx->pc = 0x169E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E44u;
    // 0x169e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x169E44u, 0x169E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E4Cu;
label_169e4c:
    // 0x169e4c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x169E4Cu;
    {
        const bool branch_taken_0x169e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169e4c) {
            ctx->pc = 0x169E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169E4Cu;
            // 0x169e50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169E74u;
            goto label_169e74;
        }
    }
    ctx->pc = 0x169E54u;
    // 0x169e54: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x169E54u;
    SET_GPR_U32(ctx, 31, 0x169E5Cu);
    ctx->pc = 0x169E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E54u;
    // 0x169e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x169E54u, 0x169E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E5Cu;
label_169e5c:
    // 0x169e5c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x169E5Cu;
    {
        const bool branch_taken_0x169e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169e5c) {
            ctx->pc = 0x169E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169E5Cu;
            // 0x169e60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169E74u;
            goto label_169e74;
        }
    }
    ctx->pc = 0x169E64u;
    // 0x169e64: 0xc089f66  jal         func_227D98
    ctx->pc = 0x169E64u;
    SET_GPR_U32(ctx, 31, 0x169E6Cu);
    ctx->pc = 0x169E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E64u;
    // 0x169e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x169E64u, 0x169E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E6Cu;
label_169e6c:
    // 0x169e6c: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x169E6Cu;
    {
        const bool branch_taken_0x169e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E6Cu;
        // 0x169e70: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e6c) {
            ctx->pc = 0x169E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169e0c;
        }
    }
    ctx->pc = 0x169E74u;
label_169e74:
    // 0x169e74: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x169e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x169e78: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x169E78u;
    {
        const bool branch_taken_0x169e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169e78) {
            ctx->pc = 0x169E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169E78u;
            // 0x169e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169e20;
        }
    }
    ctx->pc = 0x169E80u;
    // 0x169e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169e84:
    // 0x169e84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x169e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169e88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x169e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169e8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169e90: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x169e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e98: 0x3e00008  jr          $ra
    ctx->pc = 0x169E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E98u;
        // 0x169e9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169EA0u;
}
