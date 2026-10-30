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

// Function: sub_00432B30
// Address: 0x432b30 - 0x432cc8
void sub_00432B30_0x432b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432B30_0x432b30");
#endif

    switch (ctx->pc) {
        case 0x432b84u: goto label_432b84;
        case 0x432bb4u: goto label_432bb4;
        case 0x432c10u: goto label_432c10;
        default: break;
    }

    ctx->pc = 0x432b30u;

    // 0x432b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x432b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x432b34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x432b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x432b38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x432b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x432b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x432b40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x432b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x432b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432b48: 0x12220059  beq         $s1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x432B48u;
    {
        const bool branch_taken_0x432b48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x432B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432B48u;
        // 0x432b4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432b48) {
            ctx->pc = 0x432CB0u;
            goto label_432cb0;
        }
    }
    ctx->pc = 0x432B50u;
    // 0x432b50: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x432b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x432b54: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x432B54u;
    {
        const bool branch_taken_0x432b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x432b54) {
            ctx->pc = 0x432B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432B54u;
            // 0x432b58: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432B70u;
            goto label_432b70;
        }
    }
    ctx->pc = 0x432B5Cu;
    // 0x432b5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x432b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x432b60: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x432b60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5169ECu));
    // 0x432b64: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x432b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x432b68: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x432b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x432b6c: 0x0  nop
    ctx->pc = 0x432b6cu;
    // NOP
label_432b70:
    // 0x432b70: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x432b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x432b74: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x432B74u;
    {
        const bool branch_taken_0x432b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x432b74) {
            ctx->pc = 0x432B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432B74u;
            // 0x432b78: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432B88u;
            goto label_432b88;
        }
    }
    ctx->pc = 0x432B7Cu;
    // 0x432b7c: 0xc10c63e  jal         func_4318F8
    ctx->pc = 0x432B7Cu;
    SET_GPR_U32(ctx, 31, 0x432B84u);
    ctx->pc = 0x4318F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4318F8u, 0x432B7Cu, 0x432B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432B84u;
label_432b84:
    // 0x432b84: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432b84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_432b88:
    // 0x432b88: 0x3043ffdf  andi        $v1, $v0, 0xFFDF
    ctx->pc = 0x432b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x432b8c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x432b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x432b90: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x432B90u;
    {
        const bool branch_taken_0x432b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432B90u;
        // 0x432b94: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432b90) {
            ctx->pc = 0x432BDCu;
            goto label_432bdc;
        }
    }
    ctx->pc = 0x432B98u;
    // 0x432b98: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x432b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x432b9c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x432B9Cu;
    {
        const bool branch_taken_0x432b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432B9Cu;
        // 0x432ba0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432b9c) {
            ctx->pc = 0x432C10u;
            goto label_432c10;
        }
    }
    ctx->pc = 0x432BA4u;
    // 0x432ba4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x432BA4u;
    {
        const bool branch_taken_0x432ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432ba4) {
            ctx->pc = 0x432BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432BA4u;
            // 0x432ba8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432BD4u;
            goto label_432bd4;
        }
    }
    ctx->pc = 0x432BACu;
    // 0x432bac: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x432BACu;
    SET_GPR_U32(ctx, 31, 0x432BB4u);
    ctx->pc = 0x432BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432BACu;
    // 0x432bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x432BACu, 0x432BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432BB4u;
label_432bb4:
    // 0x432bb4: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x432BB4u;
    {
        const bool branch_taken_0x432bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432BB4u;
        // 0x432bb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432bb4) {
            ctx->pc = 0x432CB0u;
            goto label_432cb0;
        }
    }
    ctx->pc = 0x432BBCu;
    // 0x432bbc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x432bc0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x432bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x432bc4: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x432bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x432bc8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x432bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x432bcc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x432bccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x432bd0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_432bd4:
    // 0x432bd4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x432bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x432bd8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x432bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_432bdc:
    // 0x432bdc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x432bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x432be0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x432BE0u;
    {
        const bool branch_taken_0x432be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432BE0u;
        // 0x432be4: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432be0) {
            ctx->pc = 0x432C38u;
            goto label_432c38;
        }
    }
    ctx->pc = 0x432BE8u;
    // 0x432be8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x432be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x432bec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x432becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x432bf0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x432bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x432bf4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x432BF4u;
    {
        const bool branch_taken_0x432bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x432bf4) {
            ctx->pc = 0x432BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432BF4u;
            // 0x432bf8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432C18u;
            goto label_432c18;
        }
    }
    ctx->pc = 0x432BFCu;
    // 0x432bfc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x432bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x432c00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x432c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432c04: 0x24a5c640  addiu       $a1, $a1, -0x39C0
    ctx->pc = 0x432c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952512));
    // 0x432c08: 0xc10f59a  jal         func_43D668
    ctx->pc = 0x432C08u;
    SET_GPR_U32(ctx, 31, 0x432C10u);
    ctx->pc = 0x432C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432C08u;
    // 0x432c0c: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D668u, 0x432C08u, 0x432C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432C10u;
label_432c10:
    // 0x432c10: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x432C10u;
    {
        const bool branch_taken_0x432c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432C10u;
        // 0x432c14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432c10) {
            ctx->pc = 0x432CB0u;
            goto label_432cb0;
        }
    }
    ctx->pc = 0x432C18u;
label_432c18:
    // 0x432c18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x432c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432c1c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x432c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x432c20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x432c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x432c24: 0xa091ffff  sb          $s1, -0x1($a0)
    ctx->pc = 0x432c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x432c28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x432c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x432c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x432c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x432c30: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x432C30u;
    {
        const bool branch_taken_0x432c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432C30u;
        // 0x432c34: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432c30) {
            ctx->pc = 0x432CB0u;
            goto label_432cb0;
        }
    }
    ctx->pc = 0x432C38u;
label_432c38:
    // 0x432c38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x432c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x432c3c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x432C3Cu;
    {
        const bool branch_taken_0x432c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c3c) {
            ctx->pc = 0x432C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432C3Cu;
            // 0x432c40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432C7Cu;
            goto label_432c7c;
        }
    }
    ctx->pc = 0x432C44u;
    // 0x432c44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x432c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x432c48: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x432c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x432c4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x432C4Cu;
    {
        const bool branch_taken_0x432c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c4c) {
            ctx->pc = 0x432C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432C4Cu;
            // 0x432c50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432C7Cu;
            goto label_432c7c;
        }
    }
    ctx->pc = 0x432C54u;
    // 0x432c54: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x432c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x432c58: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x432C58u;
    {
        const bool branch_taken_0x432c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x432c58) {
            ctx->pc = 0x432C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432C58u;
            // 0x432c5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432C7Cu;
            goto label_432c7c;
        }
    }
    ctx->pc = 0x432C60u;
    // 0x432c60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x432c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x432c64: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x432c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x432c68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x432c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x432c6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x432c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x432c70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x432c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432c74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x432C74u;
    {
        const bool branch_taken_0x432c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432C74u;
        // 0x432c78: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432c74) {
            ctx->pc = 0x432CB0u;
            goto label_432cb0;
        }
    }
    ctx->pc = 0x432C7Cu;
label_432c7c:
    // 0x432c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x432c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x432c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x432c84: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x432c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x432c88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x432c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x432c8c: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x432c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x432c90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x432c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x432c94: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x432c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x432c98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x432c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432c9c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x432c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x432ca0: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x432ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x432ca4: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x432ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x432ca8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x432ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x432cac: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x432cacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
label_432cb0:
    // 0x432cb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x432cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x432cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x432CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432CBCu;
        // 0x432cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432CC4u;
    // 0x432cc4: 0x0  nop
    ctx->pc = 0x432cc4u;
    // NOP
    ctx->pc = 0x432cc8u;
}
