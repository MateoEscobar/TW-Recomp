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

// Function: sub_004A49E8
// Address: 0x4a49e8 - 0x4a4b68
void sub_004A49E8_0x4a49e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A49E8_0x4a49e8");
#endif

    switch (ctx->pc) {
        case 0x4a4a20u: goto label_4a4a20;
        case 0x4a4afcu: goto label_4a4afc;
        case 0x4a4b08u: goto label_4a4b08;
        case 0x4a4b18u: goto label_4a4b18;
        case 0x4a4b38u: goto label_4a4b38;
        case 0x4a4b44u: goto label_4a4b44;
        default: break;
    }

    ctx->pc = 0x4a49e8u;

    // 0x4a49e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a49e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a49ec: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a49f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a49f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4a49f4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a49f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4a49f8: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x4a49f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x4a49fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a49fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4a4a00: 0x2633ad18  addiu       $s3, $s1, -0x52E8
    ctx->pc = 0x4a4a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
    // 0x4a4a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a4a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a4a08: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4a4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4a4a0c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a4a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4a4a10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a4a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4a14: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x4a4a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x4a4a18: 0xc129620  jal         func_4A5880
    ctx->pc = 0x4A4A18u;
    SET_GPR_U32(ctx, 31, 0x4A4A20u);
    ctx->pc = 0x4A4A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4A18u;
    // 0x4a4a1c: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5880u, 0x4A4A18u, 0x4A4A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4A20u;
label_4a4a20:
    // 0x4a4a20: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4A4A20u;
    {
        const bool branch_taken_0x4a4a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4A20u;
        // 0x4a4a24: 0x8f838a80  lw          $v1, -0x7580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4a20) {
            ctx->pc = 0x4A4B28u;
            goto label_4a4b28;
        }
    }
    ctx->pc = 0x4A4A28u;
    // 0x4a4a28: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x4a4a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4a4a2c: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x4a4a2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a4a30: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x4a4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4a4a34: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x4a4a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x4a4a38: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4a4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4a4a3c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4a4a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4a4a40: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x4a4a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x4a4a44: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x4a4a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x4a4a48: 0x94620040  lhu         $v0, 0x40($v1)
    ctx->pc = 0x4a4a48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x4a4a4c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4A4A4Cu;
    {
        const bool branch_taken_0x4a4a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4A4Cu;
        // 0x4a4a50: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4a4c) {
            ctx->pc = 0x4A4AE8u;
            goto label_4a4ae8;
        }
    }
    ctx->pc = 0x4A4A54u;
    // 0x4a4a54: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a4a58: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4a4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a4a5c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x4a4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x4a4a60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4a64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a4a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4a68: 0x800008  jr          $a0
    ctx->pc = 0x4A4A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A4A70u: goto label_4a4a70;
            case 0x4A4A88u: goto label_4a4a88;
            case 0x4A4AA0u: goto label_4a4aa0;
            case 0x4A4AB8u: goto label_4a4ab8;
            case 0x4A4AD0u: goto label_4a4ad0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4A68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A4A70u;
label_4a4a70:
    // 0x4a4a70: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4a74: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x4a4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
    // 0x4a4a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4a7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4a4a80: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4A4A80u;
    {
        const bool branch_taken_0x4a4a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4A80u;
        // 0x4a4a84: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4a80) {
            ctx->pc = 0x4A4B08u;
            goto label_4a4b08;
        }
    }
    ctx->pc = 0x4A4A88u;
label_4a4a88:
    // 0x4a4a88: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4a8c: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x4a4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
    // 0x4a4a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4a94: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4a4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a4a98: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4A4A98u;
    {
        const bool branch_taken_0x4a4a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4A98u;
        // 0x4a4a9c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4a98) {
            ctx->pc = 0x4A4B08u;
            goto label_4a4b08;
        }
    }
    ctx->pc = 0x4A4AA0u;
label_4a4aa0:
    // 0x4a4aa0: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4aa4: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x4a4aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
    // 0x4a4aa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4aac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4a4aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4a4ab0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4A4AB0u;
    {
        const bool branch_taken_0x4a4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4AB0u;
        // 0x4a4ab4: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4ab0) {
            ctx->pc = 0x4A4B08u;
            goto label_4a4b08;
        }
    }
    ctx->pc = 0x4A4AB8u;
label_4a4ab8:
    // 0x4a4ab8: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4abc: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x4a4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
    // 0x4a4ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4ac4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4a4ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4a4ac8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4A4AC8u;
    {
        const bool branch_taken_0x4a4ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4AC8u;
        // 0x4a4acc: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4ac8) {
            ctx->pc = 0x4A4B08u;
            goto label_4a4b08;
        }
    }
    ctx->pc = 0x4A4AD0u;
label_4a4ad0:
    // 0x4a4ad0: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4ad4: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x4a4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
    // 0x4a4ad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4adc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x4a4adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4a4ae0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A4AE0u;
    {
        const bool branch_taken_0x4a4ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4AE0u;
        // 0x4a4ae4: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4ae0) {
            ctx->pc = 0x4A4B08u;
            goto label_4a4b08;
        }
    }
    ctx->pc = 0x4A4AE8u;
label_4a4ae8:
    // 0x4a4ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4aec: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x4a4aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4a4af0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a4af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4af4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A4AF4u;
    SET_GPR_U32(ctx, 31, 0x4A4AFCu);
    ctx->pc = 0x4A4AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4AF4u;
    // 0x4a4af8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A4AF4u, 0x4A4AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4AFCu;
label_4a4afc:
    // 0x4a4afc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b00: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A4B00u;
    SET_GPR_U32(ctx, 31, 0x4A4B08u);
    ctx->pc = 0x4A4B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4B00u;
    // 0x4a4b04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A4B00u, 0x4A4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4B08u;
label_4a4b08:
    // 0x4a4b08: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x4a4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4a4b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a4b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b10: 0xc129622  jal         func_4A5888
    ctx->pc = 0x4A4B10u;
    SET_GPR_U32(ctx, 31, 0x4A4B18u);
    ctx->pc = 0x4A4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4B10u;
    // 0x4a4b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x4A4B10u, 0x4A4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4B18u;
label_4a4b18:
    // 0x4a4b18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A4B18u;
    {
        const bool branch_taken_0x4a4b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B18u;
        // 0x4a4b1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b18) {
            ctx->pc = 0x4A4B48u;
            goto label_4a4b48;
        }
    }
    ctx->pc = 0x4A4B20u;
    // 0x4a4b20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A4B20u;
    {
        const bool branch_taken_0x4a4b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B20u;
        // 0x4a4b24: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b20) {
            ctx->pc = 0x4A4B50u;
            goto label_4a4b50;
        }
    }
    ctx->pc = 0x4A4B28u;
label_4a4b28:
    // 0x4a4b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4b2c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x4a4b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4a4b30: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A4B30u;
    SET_GPR_U32(ctx, 31, 0x4A4B38u);
    ctx->pc = 0x4A4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4B30u;
    // 0x4a4b34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A4B30u, 0x4A4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4B38u;
label_4a4b38:
    // 0x4a4b38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b3c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A4B3Cu;
    SET_GPR_U32(ctx, 31, 0x4A4B44u);
    ctx->pc = 0x4A4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4B3Cu;
    // 0x4a4b40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A4B3Cu, 0x4A4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4B44u;
label_4a4b44:
    // 0x4a4b44: 0x0  nop
    ctx->pc = 0x4a4b44u;
    // NOP
label_4a4b48:
    // 0x4a4b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a4b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a4b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a4b50:
    // 0x4a4b50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a4b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a4b54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a4b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4b58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a4b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a4b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4b60: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B60u;
        // 0x4a4b64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4B68u;
}
