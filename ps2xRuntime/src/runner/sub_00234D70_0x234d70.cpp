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

// Function: sub_00234D70
// Address: 0x234d70 - 0x234e58
void sub_00234D70_0x234d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234D70_0x234d70");
#endif

    switch (ctx->pc) {
        case 0x234d88u: goto label_234d88;
        case 0x234d90u: goto label_234d90;
        case 0x234da4u: goto label_234da4;
        case 0x234db0u: goto label_234db0;
        case 0x234db8u: goto label_234db8;
        case 0x234dc0u: goto label_234dc0;
        case 0x234dd0u: goto label_234dd0;
        case 0x234dd8u: goto label_234dd8;
        case 0x234de0u: goto label_234de0;
        case 0x234df8u: goto label_234df8;
        case 0x234e08u: goto label_234e08;
        case 0x234e14u: goto label_234e14;
        case 0x234e2cu: goto label_234e2c;
        case 0x234e44u: goto label_234e44;
        default: break;
    }

    ctx->pc = 0x234d70u;

    // 0x234d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234d74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234d78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x234d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x234d7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234d80: 0xc0e4060  jal         func_390180
    ctx->pc = 0x234D80u;
    SET_GPR_U32(ctx, 31, 0x234D88u);
    ctx->pc = 0x234D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D80u;
    // 0x234d84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x234D80u, 0x234D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D88u;
label_234d88:
    // 0x234d88: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234D88u;
    SET_GPR_U32(ctx, 31, 0x234D90u);
    ctx->pc = 0x234D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D88u;
    // 0x234d8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234D88u, 0x234D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D90u;
label_234d90:
    // 0x234d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d94: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x234D94u;
    {
        const bool branch_taken_0x234d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d94) {
            ctx->pc = 0x234D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D94u;
            // 0x234d98: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E48u;
            goto label_234e48;
        }
    }
    ctx->pc = 0x234D9Cu;
    // 0x234d9c: 0xc087502  jal         func_21D408
    ctx->pc = 0x234D9Cu;
    SET_GPR_U32(ctx, 31, 0x234DA4u);
    ctx->pc = 0x234DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D9Cu;
    // 0x234da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x234D9Cu, 0x234DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DA4u;
label_234da4:
    // 0x234da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x234da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234da8: 0xc0a33b6  jal         func_28CED8
    ctx->pc = 0x234DA8u;
    SET_GPR_U32(ctx, 31, 0x234DB0u);
    ctx->pc = 0x234DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DA8u;
    // 0x234dac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x234DA8u, 0x234DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DB0u;
label_234db0:
    // 0x234db0: 0xc095fce  jal         func_257F38
    ctx->pc = 0x234DB0u;
    SET_GPR_U32(ctx, 31, 0x234DB8u);
    ctx->pc = 0x234DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DB0u;
    // 0x234db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x234DB0u, 0x234DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DB8u;
label_234db8:
    // 0x234db8: 0xc089f66  jal         func_227D98
    ctx->pc = 0x234DB8u;
    SET_GPR_U32(ctx, 31, 0x234DC0u);
    ctx->pc = 0x234DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DB8u;
    // 0x234dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x234DB8u, 0x234DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DC0u;
label_234dc0:
    // 0x234dc0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x234DC0u;
    {
        const bool branch_taken_0x234dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234dc0) {
            ctx->pc = 0x234DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DC0u;
            // 0x234dc4: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E30u;
            goto label_234e30;
        }
    }
    ctx->pc = 0x234DC8u;
    // 0x234dc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x234DC8u;
    {
        const bool branch_taken_0x234dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234dc8) {
            ctx->pc = 0x234DD8u;
            goto label_234dd8;
        }
    }
    ctx->pc = 0x234DD0u;
label_234dd0:
    // 0x234dd0: 0xc094fca  jal         func_253F28
    ctx->pc = 0x234DD0u;
    SET_GPR_U32(ctx, 31, 0x234DD8u);
    ctx->pc = 0x234DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DD0u;
    // 0x234dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x234DD0u, 0x234DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DD8u;
label_234dd8:
    // 0x234dd8: 0xc095018  jal         func_254060
    ctx->pc = 0x234DD8u;
    SET_GPR_U32(ctx, 31, 0x234DE0u);
    ctx->pc = 0x234DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DD8u;
    // 0x234ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x234DD8u, 0x234DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DE0u;
label_234de0:
    // 0x234de0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x234DE0u;
    {
        const bool branch_taken_0x234de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234de0) {
            ctx->pc = 0x234DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234dd0;
        }
    }
    ctx->pc = 0x234DE8u;
    // 0x234de8: 0x3405c002  ori         $a1, $zero, 0xC002
    ctx->pc = 0x234de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49154);
    // 0x234dec: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x234decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x234df0: 0xc089988  jal         func_226620
    ctx->pc = 0x234DF0u;
    SET_GPR_U32(ctx, 31, 0x234DF8u);
    ctx->pc = 0x234DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DF0u;
    // 0x234df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x234DF0u, 0x234DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DF8u;
label_234df8:
    // 0x234df8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e00: 0xc08bc40  jal         func_22F100
    ctx->pc = 0x234E00u;
    SET_GPR_U32(ctx, 31, 0x234E08u);
    ctx->pc = 0x234E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E00u;
    // 0x234e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x234E00u, 0x234E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E08u;
label_234e08:
    // 0x234e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e0c: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x234E0Cu;
    SET_GPR_U32(ctx, 31, 0x234E14u);
    ctx->pc = 0x234E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E0Cu;
    // 0x234e10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x234E0Cu, 0x234E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E14u;
label_234e14:
    // 0x234e14: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x234e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x234e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e20: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x234e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x234e24: 0xc089974  jal         func_2265D0
    ctx->pc = 0x234E24u;
    SET_GPR_U32(ctx, 31, 0x234E2Cu);
    ctx->pc = 0x234E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E24u;
    // 0x234e28: 0xa4620144  sh          $v0, 0x144($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x234E24u, 0x234E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E2Cu;
label_234e2c:
    // 0x234e2c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x234e2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_234e30:
    // 0x234e30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x234e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x234e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x234e3c: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x234E3Cu;
    SET_GPR_U32(ctx, 31, 0x234E44u);
    ctx->pc = 0x234E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E3Cu;
    // 0x234e40: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228388u, 0x234E3Cu, 0x234E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E44u;
label_234e44:
    // 0x234e44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234e48:
    // 0x234e48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x234E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E4Cu;
        // 0x234e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234E54u;
    // 0x234e54: 0x0  nop
    ctx->pc = 0x234e54u;
    // NOP
    ctx->pc = 0x234e58u;
}
