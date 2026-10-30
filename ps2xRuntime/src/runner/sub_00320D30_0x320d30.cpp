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

// Function: sub_00320D30
// Address: 0x320d30 - 0x320df8
void sub_00320D30_0x320d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320D30_0x320d30");
#endif

    switch (ctx->pc) {
        case 0x320d5cu: goto label_320d5c;
        case 0x320d70u: goto label_320d70;
        case 0x320d80u: goto label_320d80;
        case 0x320d88u: goto label_320d88;
        case 0x320d90u: goto label_320d90;
        case 0x320dacu: goto label_320dac;
        case 0x320dc0u: goto label_320dc0;
        default: break;
    }

    ctx->pc = 0x320d30u;

    // 0x320d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x320d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x320d34: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x320d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x320d38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x320d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x320d3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x320d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x320d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x320d44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x320d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x320d48: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x320d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x320d4c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x320d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x320d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320d54: 0xc05959e  jal         func_165678
    ctx->pc = 0x320D54u;
    SET_GPR_U32(ctx, 31, 0x320D5Cu);
    ctx->pc = 0x320D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D54u;
    // 0x320d58: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x320D54u, 0x320D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D5Cu;
label_320d5c:
    // 0x320d5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x320d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d60: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x320D60u;
    {
        const bool branch_taken_0x320d60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x320D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D60u;
        // 0x320d64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d60) {
            ctx->pc = 0x320DD0u;
            goto label_320dd0;
        }
    }
    ctx->pc = 0x320D68u;
    // 0x320d68: 0xc0c840a  jal         func_321028
    ctx->pc = 0x320D68u;
    SET_GPR_U32(ctx, 31, 0x320D70u);
    ctx->pc = 0x320D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D68u;
    // 0x320d6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321028u, 0x320D68u, 0x320D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D70u;
label_320d70:
    // 0x320d70: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x320d70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320d74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x320d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320d78: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x320d78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x320d7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x320d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_320d80:
    // 0x320d80: 0xc137826  jal         func_4DE098
    ctx->pc = 0x320D80u;
    SET_GPR_U32(ctx, 31, 0x320D88u);
    ctx->pc = 0x320D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D80u;
    // 0x320d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x320D80u, 0x320D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D88u;
label_320d88:
    // 0x320d88: 0xc0e409a  jal         func_390268
    ctx->pc = 0x320D88u;
    SET_GPR_U32(ctx, 31, 0x320D90u);
    ctx->pc = 0x320D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D88u;
    // 0x320d8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x320D88u, 0x320D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D90u;
label_320d90:
    // 0x320d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d94: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x320D94u;
    {
        const bool branch_taken_0x320d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d94) {
            ctx->pc = 0x320D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320D94u;
            // 0x320d98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320DC4u;
            goto label_320dc4;
        }
    }
    ctx->pc = 0x320D9Cu;
    // 0x320d9c: 0x52130009  beql        $s0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x320D9Cu;
    {
        const bool branch_taken_0x320d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x320d9c) {
            ctx->pc = 0x320DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320D9Cu;
            // 0x320da0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320DC4u;
            goto label_320dc4;
        }
    }
    ctx->pc = 0x320DA4u;
    // 0x320da4: 0xc089f98  jal         func_227E60
    ctx->pc = 0x320DA4u;
    SET_GPR_U32(ctx, 31, 0x320DACu);
    ctx->pc = 0x320DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320DA4u;
    // 0x320da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x320DA4u, 0x320DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DACu;
label_320dac:
    // 0x320dac: 0x10550004  beq         $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x320DACu;
    {
        const bool branch_taken_0x320dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x320DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DACu;
        // 0x320db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320dac) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320DB4u;
    // 0x320db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320db8: 0xc0c837e  jal         func_320DF8
    ctx->pc = 0x320DB8u;
    SET_GPR_U32(ctx, 31, 0x320DC0u);
    ctx->pc = 0x320DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320DB8u;
    // 0x320dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320DF8u, 0x320DB8u, 0x320DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DC0u;
label_320dc0:
    // 0x320dc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x320dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_320dc4:
    // 0x320dc4: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x320dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x320dc8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x320DC8u;
    {
        const bool branch_taken_0x320dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DC8u;
        // 0x320dcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320dc8) {
            ctx->pc = 0x320D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320d80;
        }
    }
    ctx->pc = 0x320DD0u;
label_320dd0:
    // 0x320dd0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x320dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x320dd4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x320dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x320dd8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x320dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320ddc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x320ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320de0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x320de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320de4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x320de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320dec: 0x3e00008  jr          $ra
    ctx->pc = 0x320DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DECu;
        // 0x320df0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320DF4u;
    // 0x320df4: 0x0  nop
    ctx->pc = 0x320df4u;
    // NOP
    ctx->pc = 0x320df8u;
}
