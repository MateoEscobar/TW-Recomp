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

// Function: sub_00164A28
// Address: 0x164a28 - 0x164b68
void sub_00164A28_0x164a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164A28_0x164a28");
#endif

    switch (ctx->pc) {
        case 0x164a7cu: goto label_164a7c;
        case 0x164a94u: goto label_164a94;
        case 0x164ac4u: goto label_164ac4;
        case 0x164adcu: goto label_164adc;
        case 0x164aecu: goto label_164aec;
        case 0x164b00u: goto label_164b00;
        case 0x164b08u: goto label_164b08;
        case 0x164b10u: goto label_164b10;
        case 0x164b38u: goto label_164b38;
        default: break;
    }

    ctx->pc = 0x164a28u;

    // 0x164a28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x164a2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x164a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x164a30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x164a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x164a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164a3c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x164a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x164a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164a44: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x164a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x164a48: 0x50a20040  beql        $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x164A48u;
    {
        const bool branch_taken_0x164a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x164a48) {
            ctx->pc = 0x164A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164A48u;
            // 0x164a4c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164B4Cu;
            goto label_164b4c;
        }
    }
    ctx->pc = 0x164A50u;
    // 0x164a50: 0xa6050032  sh          $a1, 0x32($s0)
    ctx->pc = 0x164a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 5));
    // 0x164a54: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x164A54u;
    {
        const bool branch_taken_0x164a54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x164A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A54u;
        // 0x164a58: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a54) {
            ctx->pc = 0x164A9Cu;
            goto label_164a9c;
        }
    }
    ctx->pc = 0x164A5Cu;
    // 0x164a5c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x164a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x164a60: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x164a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x164a64: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x164A64u;
    {
        const bool branch_taken_0x164a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A64u;
        // 0x164a68: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a64) {
            ctx->pc = 0x164AECu;
            goto label_164aec;
        }
    }
    ctx->pc = 0x164A6Cu;
    // 0x164a6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x164A6Cu;
    {
        const bool branch_taken_0x164a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a6c) {
            ctx->pc = 0x164A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164A6Cu;
            // 0x164a70: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164A80u;
            goto label_164a80;
        }
    }
    ctx->pc = 0x164A74u;
    // 0x164a74: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x164A74u;
    SET_GPR_U32(ctx, 31, 0x164A7Cu);
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x164A74u, 0x164A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A7Cu;
label_164a7c:
    // 0x164a7c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x164a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_164a80:
    // 0x164a80: 0x38420017  xori        $v0, $v0, 0x17
    ctx->pc = 0x164a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)23);
    // 0x164a84: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x164A84u;
    {
        const bool branch_taken_0x164a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A84u;
        // 0x164a88: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a84) {
            ctx->pc = 0x164AF0u;
            goto label_164af0;
        }
    }
    ctx->pc = 0x164A8Cu;
    // 0x164a8c: 0xc05a55c  jal         func_169570
    ctx->pc = 0x164A8Cu;
    SET_GPR_U32(ctx, 31, 0x164A94u);
    ctx->pc = 0x164A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A8Cu;
    // 0x164a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x164A8Cu, 0x164A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A94u;
label_164a94:
    // 0x164a94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x164A94u;
    {
        const bool branch_taken_0x164a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A94u;
        // 0x164a98: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a94) {
            ctx->pc = 0x164AF0u;
            goto label_164af0;
        }
    }
    ctx->pc = 0x164A9Cu;
label_164a9c:
    // 0x164a9c: 0x14b20014  bne         $a1, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x164A9Cu;
    {
        const bool branch_taken_0x164a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        ctx->pc = 0x164AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A9Cu;
        // 0x164aa0: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a9c) {
            ctx->pc = 0x164AF0u;
            goto label_164af0;
        }
    }
    ctx->pc = 0x164AA4u;
    // 0x164aa4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x164aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x164aa8: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x164aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x164aac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164AACu;
    {
        const bool branch_taken_0x164aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AACu;
        // 0x164ab0: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164aac) {
            ctx->pc = 0x164ADCu;
            goto label_164adc;
        }
    }
    ctx->pc = 0x164AB4u;
    // 0x164ab4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x164AB4u;
    {
        const bool branch_taken_0x164ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ab4) {
            ctx->pc = 0x164AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164AB4u;
            // 0x164ab8: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164AC8u;
            goto label_164ac8;
        }
    }
    ctx->pc = 0x164ABCu;
    // 0x164abc: 0xc05a52e  jal         func_1694B8
    ctx->pc = 0x164ABCu;
    SET_GPR_U32(ctx, 31, 0x164AC4u);
    ctx->pc = 0x164AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164ABCu;
    // 0x164ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694B8u, 0x164ABCu, 0x164AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AC4u;
label_164ac4:
    // 0x164ac4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x164ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_164ac8:
    // 0x164ac8: 0x38420017  xori        $v0, $v0, 0x17
    ctx->pc = 0x164ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)23);
    // 0x164acc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164ACCu;
    {
        const bool branch_taken_0x164acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ACCu;
        // 0x164ad0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164acc) {
            ctx->pc = 0x164AE0u;
            goto label_164ae0;
        }
    }
    ctx->pc = 0x164AD4u;
    // 0x164ad4: 0xc05a542  jal         func_169508
    ctx->pc = 0x164AD4u;
    SET_GPR_U32(ctx, 31, 0x164ADCu);
    ctx->pc = 0x164AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AD4u;
    // 0x164ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169508u, 0x164AD4u, 0x164ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164ADCu;
label_164adc:
    // 0x164adc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x164adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_164ae0:
    // 0x164ae0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x164ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ae4: 0xc106818  jal         func_41A060
    ctx->pc = 0x164AE4u;
    SET_GPR_U32(ctx, 31, 0x164AECu);
    ctx->pc = 0x164AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AE4u;
    // 0x164ae8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A060u, 0x164AE4u, 0x164AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AECu;
label_164aec:
    // 0x164aec: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x164aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_164af0:
    // 0x164af0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x164af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164af4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x164af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164afc: 0x0  nop
    ctx->pc = 0x164afcu;
    // NOP
label_164b00:
    // 0x164b00: 0xc137826  jal         func_4DE098
    ctx->pc = 0x164B00u;
    SET_GPR_U32(ctx, 31, 0x164B08u);
    ctx->pc = 0x164B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B00u;
    // 0x164b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x164B00u, 0x164B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B08u;
label_164b08:
    // 0x164b08: 0xc0e409a  jal         func_390268
    ctx->pc = 0x164B08u;
    SET_GPR_U32(ctx, 31, 0x164B10u);
    ctx->pc = 0x164B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B08u;
    // 0x164b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x164B08u, 0x164B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B10u;
label_164b10:
    // 0x164b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x164b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b14: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164B14u;
    {
        const bool branch_taken_0x164b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B14u;
        // 0x164b18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b14) {
            ctx->pc = 0x164B3Cu;
            goto label_164b3c;
        }
    }
    ctx->pc = 0x164B1Cu;
    // 0x164b1c: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x164b20: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x164b20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x164b24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x164b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x164b28: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x164B28u;
    {
        const bool branch_taken_0x164b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x164b28) {
            ctx->pc = 0x164B3Cu;
            goto label_164b3c;
        }
    }
    ctx->pc = 0x164B30u;
    // 0x164b30: 0xc087502  jal         func_21D408
    ctx->pc = 0x164B30u;
    SET_GPR_U32(ctx, 31, 0x164B38u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x164B30u, 0x164B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B38u;
label_164b38:
    // 0x164b38: 0xa052014d  sb          $s2, 0x14D($v0)
    ctx->pc = 0x164b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 333), (uint8_t)GPR_U32(ctx, 18));
label_164b3c:
    // 0x164b3c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x164b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x164b40: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x164B40u;
    {
        const bool branch_taken_0x164b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B40u;
        // 0x164b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b40) {
            ctx->pc = 0x164B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164b00;
        }
    }
    ctx->pc = 0x164B48u;
    // 0x164b48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x164b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_164b4c:
    // 0x164b4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x164b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164b50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164b54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x164b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x164B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B5Cu;
        // 0x164b60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164B64u;
    // 0x164b64: 0x0  nop
    ctx->pc = 0x164b64u;
    // NOP
    ctx->pc = 0x164b68u;
}
