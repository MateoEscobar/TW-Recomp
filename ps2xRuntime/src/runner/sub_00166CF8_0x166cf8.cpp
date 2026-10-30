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

// Function: sub_00166CF8
// Address: 0x166cf8 - 0x166e10
void sub_00166CF8_0x166cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166CF8_0x166cf8");
#endif

    switch (ctx->pc) {
        case 0x166d40u: goto label_166d40;
        case 0x166d48u: goto label_166d48;
        case 0x166d50u: goto label_166d50;
        case 0x166d60u: goto label_166d60;
        case 0x166d6cu: goto label_166d6c;
        case 0x166d7cu: goto label_166d7c;
        case 0x166d90u: goto label_166d90;
        case 0x166decu: goto label_166dec;
        default: break;
    }

    ctx->pc = 0x166cf8u;

    // 0x166cf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x166cfc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x166cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x166d00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x166d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x166d04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x166d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d08: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x166d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x166d0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x166d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x166d10: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x166d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x166d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166d18: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x166d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x166d1c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x166D1Cu;
    {
        const bool branch_taken_0x166d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D1Cu;
        // 0x166d20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d1c) {
            ctx->pc = 0x166DF0u;
            goto label_166df0;
        }
    }
    ctx->pc = 0x166D24u;
    // 0x166d24: 0x86630032  lh          $v1, 0x32($s3)
    ctx->pc = 0x166d24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
    // 0x166d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166d2c: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x166D2Cu;
    {
        const bool branch_taken_0x166d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x166D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D2Cu;
        // 0x166d30: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d2c) {
            ctx->pc = 0x166DF4u;
            goto label_166df4;
        }
    }
    ctx->pc = 0x166D34u;
    // 0x166d34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x166d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d38: 0x26740048  addiu       $s4, $s3, 0x48
    ctx->pc = 0x166d38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x166d3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x166d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_166d40:
    // 0x166d40: 0xc137826  jal         func_4DE098
    ctx->pc = 0x166D40u;
    SET_GPR_U32(ctx, 31, 0x166D48u);
    ctx->pc = 0x166D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D40u;
    // 0x166d44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x166D40u, 0x166D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D48u;
label_166d48:
    // 0x166d48: 0xc0e409a  jal         func_390268
    ctx->pc = 0x166D48u;
    SET_GPR_U32(ctx, 31, 0x166D50u);
    ctx->pc = 0x166D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D48u;
    // 0x166d4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166D48u, 0x166D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D50u;
label_166d50:
    // 0x166d50: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x166D50u;
    {
        const bool branch_taken_0x166d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D50u;
        // 0x166d54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d50) {
            ctx->pc = 0x166DD0u;
            goto label_166dd0;
        }
    }
    ctx->pc = 0x166D58u;
    // 0x166d58: 0xc087502  jal         func_21D408
    ctx->pc = 0x166D58u;
    SET_GPR_U32(ctx, 31, 0x166D60u);
    ctx->pc = 0x166D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D58u;
    // 0x166d5c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x166D58u, 0x166D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D60u;
label_166d60:
    // 0x166d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d64: 0xc0a40d2  jal         func_290348
    ctx->pc = 0x166D64u;
    SET_GPR_U32(ctx, 31, 0x166D6Cu);
    ctx->pc = 0x166D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D64u;
    // 0x166d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x166D64u, 0x166D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D6Cu;
label_166d6c:
    // 0x166d6c: 0x50510020  beql        $v0, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x166D6Cu;
    {
        const bool branch_taken_0x166d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x166d6c) {
            ctx->pc = 0x166D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166D6Cu;
            // 0x166d70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166DF0u;
            goto label_166df0;
        }
    }
    ctx->pc = 0x166D74u;
    // 0x166d74: 0xc0a40ec  jal         func_2903B0
    ctx->pc = 0x166D74u;
    SET_GPR_U32(ctx, 31, 0x166D7Cu);
    ctx->pc = 0x166D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D74u;
    // 0x166d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x166D74u, 0x166D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D7Cu;
label_166d7c:
    // 0x166d7c: 0x54510015  bnel        $v0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x166D7Cu;
    {
        const bool branch_taken_0x166d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x166d7c) {
            ctx->pc = 0x166D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166D7Cu;
            // 0x166d80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166DD4u;
            goto label_166dd4;
        }
    }
    ctx->pc = 0x166D84u;
    // 0x166d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d88: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x166D88u;
    SET_GPR_U32(ctx, 31, 0x166D90u);
    ctx->pc = 0x166D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D88u;
    // 0x166d8c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x166D88u, 0x166D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D90u;
label_166d90:
    // 0x166d90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x166d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d94: 0x462000f  bltzl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x166D94u;
    {
        const bool branch_taken_0x166d94 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x166d94) {
            ctx->pc = 0x166D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166D94u;
            // 0x166d98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166DD4u;
            goto label_166dd4;
        }
    }
    ctx->pc = 0x166D9Cu;
    // 0x166d9c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x166da0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x166da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x166da4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166DA4u;
    {
        const bool branch_taken_0x166da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DA4u;
        // 0x166da8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166da4) {
            ctx->pc = 0x166DB8u;
            goto label_166db8;
        }
    }
    ctx->pc = 0x166DACu;
    // 0x166dac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x166dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166db0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x166db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x166db4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x166db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_166db8:
    // 0x166db8: 0x90820055  lbu         $v0, 0x55($a0)
    ctx->pc = 0x166db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x166dbc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166DBCu;
    {
        const bool branch_taken_0x166dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166dbc) {
            ctx->pc = 0x166DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166DBCu;
            // 0x166dc0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166DD4u;
            goto label_166dd4;
        }
    }
    ctx->pc = 0x166DC4u;
    // 0x166dc4: 0x9082005d  lbu         $v0, 0x5D($a0)
    ctx->pc = 0x166dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 93)));
    // 0x166dc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166DC8u;
    {
        const bool branch_taken_0x166dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DC8u;
        // 0x166dcc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dc8) {
            ctx->pc = 0x166DF0u;
            goto label_166df0;
        }
    }
    ctx->pc = 0x166DD0u;
label_166dd0:
    // 0x166dd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x166dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_166dd4:
    // 0x166dd4: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x166dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x166dd8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x166DD8u;
    {
        const bool branch_taken_0x166dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DD8u;
        // 0x166ddc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dd8) {
            ctx->pc = 0x166D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166d40;
        }
    }
    ctx->pc = 0x166DE0u;
    // 0x166de0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166de4: 0xc05928a  jal         func_164A28
    ctx->pc = 0x166DE4u;
    SET_GPR_U32(ctx, 31, 0x166DECu);
    ctx->pc = 0x166DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DE4u;
    // 0x166de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A28u, 0x166DE4u, 0x166DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DECu;
label_166dec:
    // 0x166dec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x166decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_166df0:
    // 0x166df0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x166df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_166df4:
    // 0x166df4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x166df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166df8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x166df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166dfc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x166dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166e04: 0x3e00008  jr          $ra
    ctx->pc = 0x166E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E04u;
        // 0x166e08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166E0Cu;
    // 0x166e0c: 0x0  nop
    ctx->pc = 0x166e0cu;
    // NOP
    ctx->pc = 0x166e10u;
}
