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

// Function: sub_00165D40
// Address: 0x165d40 - 0x165f80
void sub_00165D40_0x165d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165D40_0x165d40");
#endif

    switch (ctx->pc) {
        case 0x165da0u: goto label_165da0;
        case 0x165dacu: goto label_165dac;
        case 0x165dbcu: goto label_165dbc;
        case 0x165dd8u: goto label_165dd8;
        case 0x165de0u: goto label_165de0;
        case 0x165de8u: goto label_165de8;
        case 0x165e14u: goto label_165e14;
        case 0x165e24u: goto label_165e24;
        case 0x165e70u: goto label_165e70;
        case 0x165e7cu: goto label_165e7c;
        case 0x165e84u: goto label_165e84;
        case 0x165eb0u: goto label_165eb0;
        case 0x165ec8u: goto label_165ec8;
        case 0x165ed4u: goto label_165ed4;
        case 0x165ef0u: goto label_165ef0;
        case 0x165f10u: goto label_165f10;
        case 0x165f1cu: goto label_165f1c;
        case 0x165f4cu: goto label_165f4c;
        default: break;
    }

    ctx->pc = 0x165d40u;

    // 0x165d40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x165d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x165d44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x165d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x165d48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x165d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x165d4c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x165d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x165d50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x165d50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d54: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x165d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x165d58: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x165d58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x165d5c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x165d5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d60: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x165d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x165d64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165d68: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x165d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x165d6c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x165d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x165d70: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x165d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x165d74: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x165d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x165d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165d7c: 0x8c6356f8  lw          $v1, 0x56F8($v1)
    ctx->pc = 0x165d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22264)));
    // 0x165d80: 0x14620073  bne         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x165D80u;
    {
        const bool branch_taken_0x165d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D80u;
        // 0x165d84: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d80) {
            ctx->pc = 0x165F50u;
            goto label_165f50;
        }
    }
    ctx->pc = 0x165D88u;
    // 0x165d88: 0x928200d2  lbu         $v0, 0xD2($s4)
    ctx->pc = 0x165d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 210)));
    // 0x165d8c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x165d8cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x165d90: 0x56030070  bnel        $s0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x165D90u;
    {
        const bool branch_taken_0x165d90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x165d90) {
            ctx->pc = 0x165D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165D90u;
            // 0x165d94: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165F54u;
            goto label_165f54;
        }
    }
    ctx->pc = 0x165D98u;
    // 0x165d98: 0xc05959e  jal         func_165678
    ctx->pc = 0x165D98u;
    SET_GPR_U32(ctx, 31, 0x165DA0u);
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x165D98u, 0x165DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DA0u;
label_165da0:
    // 0x165da0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x165da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165da4: 0xc08a08a  jal         func_228228
    ctx->pc = 0x165DA4u;
    SET_GPR_U32(ctx, 31, 0x165DACu);
    ctx->pc = 0x165DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DA4u;
    // 0x165da8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x165DA4u, 0x165DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DACu;
label_165dac:
    // 0x165dac: 0x50500006  beql        $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165DACu;
    {
        const bool branch_taken_0x165dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x165dac) {
            ctx->pc = 0x165DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DACu;
            // 0x165db0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DC8u;
            goto label_165dc8;
        }
    }
    ctx->pc = 0x165DB4u;
    // 0x165db4: 0xc08a096  jal         func_228258
    ctx->pc = 0x165DB4u;
    SET_GPR_U32(ctx, 31, 0x165DBCu);
    ctx->pc = 0x165DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DB4u;
    // 0x165db8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x165DB4u, 0x165DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DBCu;
label_165dbc:
    // 0x165dbc: 0x1450001f  bne         $v0, $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x165DBCu;
    {
        const bool branch_taken_0x165dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x165dbc) {
            ctx->pc = 0x165E3Cu;
            goto label_165e3c;
        }
    }
    ctx->pc = 0x165DC4u;
    // 0x165dc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x165dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165dc8:
    // 0x165dc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165dcc: 0x26950048  addiu       $s5, $s4, 0x48
    ctx->pc = 0x165dccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x165dd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165dd4: 0x0  nop
    ctx->pc = 0x165dd4u;
    // NOP
label_165dd8:
    // 0x165dd8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165DD8u;
    SET_GPR_U32(ctx, 31, 0x165DE0u);
    ctx->pc = 0x165DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DD8u;
    // 0x165ddc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165DD8u, 0x165DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DE0u;
label_165de0:
    // 0x165de0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165DE0u;
    SET_GPR_U32(ctx, 31, 0x165DE8u);
    ctx->pc = 0x165DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DE0u;
    // 0x165de4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165DE0u, 0x165DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DE8u;
label_165de8:
    // 0x165de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165dec: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x165DECu;
    {
        const bool branch_taken_0x165dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x165dec) {
            ctx->pc = 0x165DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DECu;
            // 0x165df0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165E30u;
            goto label_165e30;
        }
    }
    ctx->pc = 0x165DF4u;
    // 0x165df4: 0x5213000e  beql        $s0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x165DF4u;
    {
        const bool branch_taken_0x165df4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x165df4) {
            ctx->pc = 0x165DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DF4u;
            // 0x165df8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165E30u;
            goto label_165e30;
        }
    }
    ctx->pc = 0x165DFCu;
    // 0x165dfc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x165dfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x165e00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x165e00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x165e04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165E04u;
    {
        const bool branch_taken_0x165e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E04u;
        // 0x165e08: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e04) {
            ctx->pc = 0x165E2Cu;
            goto label_165e2c;
        }
    }
    ctx->pc = 0x165E0Cu;
    // 0x165e0c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x165E0Cu;
    SET_GPR_U32(ctx, 31, 0x165E14u);
    ctx->pc = 0x165E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E0Cu;
    // 0x165e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x165E0Cu, 0x165E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E14u;
label_165e14:
    // 0x165e14: 0x50510006  beql        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165E14u;
    {
        const bool branch_taken_0x165e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x165e14) {
            ctx->pc = 0x165E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E14u;
            // 0x165e18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165E30u;
            goto label_165e30;
        }
    }
    ctx->pc = 0x165E1Cu;
    // 0x165e1c: 0xc08a096  jal         func_228258
    ctx->pc = 0x165E1Cu;
    SET_GPR_U32(ctx, 31, 0x165E24u);
    ctx->pc = 0x165E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E1Cu;
    // 0x165e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x165E1Cu, 0x165E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E24u;
label_165e24:
    // 0x165e24: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x165E24u;
    {
        const bool branch_taken_0x165e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x165e24) {
            ctx->pc = 0x165E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E24u;
            // 0x165e28: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165E3Cu;
            goto label_165e3c;
        }
    }
    ctx->pc = 0x165E2Cu;
label_165e2c:
    // 0x165e2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x165e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_165e30:
    // 0x165e30: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x165e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165e34: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x165E34u;
    {
        const bool branch_taken_0x165e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e34) {
            ctx->pc = 0x165E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E34u;
            // 0x165e38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165dd8;
        }
    }
    ctx->pc = 0x165E3Cu;
label_165e3c:
    // 0x165e3c: 0x12600044  beqz        $s3, . + 4 + (0x44 << 2)
    ctx->pc = 0x165E3Cu;
    {
        const bool branch_taken_0x165e3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E3Cu;
        // 0x165e40: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e3c) {
            ctx->pc = 0x165F50u;
            goto label_165f50;
        }
    }
    ctx->pc = 0x165E44u;
    // 0x165e44: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x165e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x165e48: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x165e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x165e4c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x165e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x165e50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x165e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165e54: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x165e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x165e58: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x165e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x165e5c: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x165e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
    // 0x165e60: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x165e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x165e64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x165e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x165e68: 0xc1067b8  jal         func_419EE0
    ctx->pc = 0x165E68u;
    SET_GPR_U32(ctx, 31, 0x165E70u);
    ctx->pc = 0x165E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E68u;
    // 0x165e6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x165E68u, 0x165E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E70u;
label_165e70:
    // 0x165e70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x165e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e74: 0xc087502  jal         func_21D408
    ctx->pc = 0x165E74u;
    SET_GPR_U32(ctx, 31, 0x165E7Cu);
    ctx->pc = 0x165E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E74u;
    // 0x165e78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165E74u, 0x165E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E7Cu;
label_165e7c:
    // 0x165e7c: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x165E7Cu;
    SET_GPR_U32(ctx, 31, 0x165E84u);
    ctx->pc = 0x165E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E7Cu;
    // 0x165e80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x165E7Cu, 0x165E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E84u;
label_165e84:
    // 0x165e84: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x165E84u;
    {
        const bool branch_taken_0x165e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E84u;
        // 0x165e88: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e84) {
            ctx->pc = 0x165F50u;
            goto label_165f50;
        }
    }
    ctx->pc = 0x165E8Cu;
    // 0x165e8c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x165e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x165e90: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x165e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x165e94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x165e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165e98: 0x460d6bc2  mul.s       $f15, $f13, $f13
    ctx->pc = 0x165e98u;
    ctx->f[15] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x165e9c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x165e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x165ea0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x165ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x165ea4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x165ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ea8: 0xc0888fa  jal         func_2223E8
    ctx->pc = 0x165EA8u;
    SET_GPR_U32(ctx, 31, 0x165EB0u);
    ctx->pc = 0x165EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EA8u;
    // 0x165eac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x165EA8u, 0x165EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EB0u;
label_165eb0:
    // 0x165eb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165eb8: 0x56220026  bnel        $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x165EB8u;
    {
        const bool branch_taken_0x165eb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x165eb8) {
            ctx->pc = 0x165EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165EB8u;
            // 0x165ebc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165F54u;
            goto label_165f54;
        }
    }
    ctx->pc = 0x165EC0u;
    // 0x165ec0: 0xc087502  jal         func_21D408
    ctx->pc = 0x165EC0u;
    SET_GPR_U32(ctx, 31, 0x165EC8u);
    ctx->pc = 0x165EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EC0u;
    // 0x165ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165EC0u, 0x165EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EC8u;
label_165ec8:
    // 0x165ec8: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x165ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x165ecc: 0xc0596a8  jal         func_165AA0
    ctx->pc = 0x165ECCu;
    SET_GPR_U32(ctx, 31, 0x165ED4u);
    ctx->pc = 0x165ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165ECCu;
    // 0x165ed0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165AA0u, 0x165ECCu, 0x165ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165ED4u;
label_165ed4:
    // 0x165ed4: 0x1451001f  bne         $v0, $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x165ED4u;
    {
        const bool branch_taken_0x165ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x165ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165ED4u;
        // 0x165ed8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ed4) {
            ctx->pc = 0x165F54u;
            goto label_165f54;
        }
    }
    ctx->pc = 0x165EDCu;
    // 0x165edc: 0x8e900608  lw          $s0, 0x608($s4)
    ctx->pc = 0x165edcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1544)));
    // 0x165ee0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x165EE0u;
    {
        const bool branch_taken_0x165ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x165EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EE0u;
        // 0x165ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ee0) {
            ctx->pc = 0x165F24u;
            goto label_165f24;
        }
    }
    ctx->pc = 0x165EE8u;
    // 0x165ee8: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x165EE8u;
    SET_GPR_U32(ctx, 31, 0x165EF0u);
    ctx->pc = 0x165EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EE8u;
    // 0x165eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x165EE8u, 0x165EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EF0u;
label_165ef0:
    // 0x165ef0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x165ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x165ef4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x165ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165ef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x165ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x165f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f08: 0xc087900  jal         func_21E400
    ctx->pc = 0x165F08u;
    SET_GPR_U32(ctx, 31, 0x165F10u);
    ctx->pc = 0x165F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F08u;
    // 0x165f0c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x165F08u, 0x165F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F10u;
label_165f10:
    // 0x165f10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x165f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f14: 0xc05973e  jal         func_165CF8
    ctx->pc = 0x165F14u;
    SET_GPR_U32(ctx, 31, 0x165F1Cu);
    ctx->pc = 0x165F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F14u;
    // 0x165f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CF8u, 0x165F14u, 0x165F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F1Cu;
label_165f1c:
    // 0x165f1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x165F1Cu;
    {
        const bool branch_taken_0x165f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F1Cu;
        // 0x165f20: 0xa28000d2  sb          $zero, 0xD2($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 210), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f1c) {
            ctx->pc = 0x165F50u;
            goto label_165f50;
        }
    }
    ctx->pc = 0x165F24u;
label_165f24:
    // 0x165f24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x165f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x165f28: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x165f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x165f2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x165f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165f30: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x165f30u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x165f34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x165f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x165f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165f40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x165f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f44: 0xc088178  jal         func_2205E0
    ctx->pc = 0x165F44u;
    SET_GPR_U32(ctx, 31, 0x165F4Cu);
    ctx->pc = 0x165F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F44u;
    // 0x165f48: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x165F44u, 0x165F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F4Cu;
label_165f4c:
    // 0x165f4c: 0xa28000d2  sb          $zero, 0xD2($s4)
    ctx->pc = 0x165f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 210), (uint8_t)GPR_U32(ctx, 0));
label_165f50:
    // 0x165f50: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x165f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_165f54:
    // 0x165f54: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x165f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x165f58: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x165f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x165f5c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x165f5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165f60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x165f60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165f64: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x165f64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165f68: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x165f68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165f6c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x165f6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165f74: 0x3e00008  jr          $ra
    ctx->pc = 0x165F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F74u;
        // 0x165f78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F7Cu;
    // 0x165f7c: 0x0  nop
    ctx->pc = 0x165f7cu;
    // NOP
    ctx->pc = 0x165f80u;
}
