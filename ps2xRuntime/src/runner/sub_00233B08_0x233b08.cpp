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

// Function: sub_00233B08
// Address: 0x233b08 - 0x233c40
void sub_00233B08_0x233b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233B08_0x233b08");
#endif

    switch (ctx->pc) {
        case 0x233b2cu: goto label_233b2c;
        case 0x233b34u: goto label_233b34;
        case 0x233b40u: goto label_233b40;
        case 0x233b48u: goto label_233b48;
        case 0x233b58u: goto label_233b58;
        case 0x233b68u: goto label_233b68;
        case 0x233b84u: goto label_233b84;
        case 0x233b94u: goto label_233b94;
        case 0x233bacu: goto label_233bac;
        case 0x233bb8u: goto label_233bb8;
        case 0x233bc4u: goto label_233bc4;
        case 0x233be0u: goto label_233be0;
        case 0x233bf0u: goto label_233bf0;
        case 0x233c08u: goto label_233c08;
        case 0x233c14u: goto label_233c14;
        case 0x233c20u: goto label_233c20;
        default: break;
    }

    ctx->pc = 0x233b08u;

    // 0x233b08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x233b0c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x233b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x233b10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x233b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x233b14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x233b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x233b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x233b1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x233b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x233b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233b24: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x233B24u;
    SET_GPR_U32(ctx, 31, 0x233B2Cu);
    ctx->pc = 0x233B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B24u;
    // 0x233b28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x233B24u, 0x233B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B2Cu;
label_233b2c:
    // 0x233b2c: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x233B2Cu;
    SET_GPR_U32(ctx, 31, 0x233B34u);
    ctx->pc = 0x233B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B2Cu;
    // 0x233b30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x233B2Cu, 0x233B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B34u;
label_233b34:
    // 0x233b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b38: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x233B38u;
    SET_GPR_U32(ctx, 31, 0x233B40u);
    ctx->pc = 0x233B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B38u;
    // 0x233b3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x233B38u, 0x233B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B40u;
label_233b40:
    // 0x233b40: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x233B40u;
    SET_GPR_U32(ctx, 31, 0x233B48u);
    ctx->pc = 0x233B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B40u;
    // 0x233b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x233B40u, 0x233B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B48u;
label_233b48:
    // 0x233b48: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233B48u;
    {
        const bool branch_taken_0x233b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B48u;
        // 0x233b4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b48) {
            ctx->pc = 0x233B58u;
            goto label_233b58;
        }
    }
    ctx->pc = 0x233B50u;
    // 0x233b50: 0xc095fce  jal         func_257F38
    ctx->pc = 0x233B50u;
    SET_GPR_U32(ctx, 31, 0x233B58u);
    ctx->pc = 0x233B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B50u;
    // 0x233b54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x233B50u, 0x233B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B58u;
label_233b58:
    // 0x233b58: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x233B58u;
    {
        const bool branch_taken_0x233b58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b58) {
            ctx->pc = 0x233B68u;
            goto label_233b68;
        }
    }
    ctx->pc = 0x233B60u;
    // 0x233b60: 0xc095fce  jal         func_257F38
    ctx->pc = 0x233B60u;
    SET_GPR_U32(ctx, 31, 0x233B68u);
    ctx->pc = 0x233B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B60u;
    // 0x233b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x233B60u, 0x233B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B68u;
label_233b68:
    // 0x233b68: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x233B68u;
    {
        const bool branch_taken_0x233b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b68) {
            ctx->pc = 0x233BC4u;
            goto label_233bc4;
        }
    }
    ctx->pc = 0x233B70u;
    // 0x233b70: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x233b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x233b74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233B74u;
    {
        const bool branch_taken_0x233b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B74u;
        // 0x233b78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b74) {
            ctx->pc = 0x233B88u;
            goto label_233b88;
        }
    }
    ctx->pc = 0x233B7Cu;
    // 0x233b7c: 0xc05dc0e  jal         func_177038
    ctx->pc = 0x233B7Cu;
    SET_GPR_U32(ctx, 31, 0x233B84u);
    ctx->pc = 0x233B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B7Cu;
    // 0x233b80: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x233B7Cu, 0x233B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B84u;
label_233b84:
    // 0x233b84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_233b88:
    // 0x233b88: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x233b88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x233b8c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x233B8Cu;
    SET_GPR_U32(ctx, 31, 0x233B94u);
    ctx->pc = 0x233B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B8Cu;
    // 0x233b90: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x233B8Cu, 0x233B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B94u;
label_233b94:
    // 0x233b94: 0x80480087  lb          $t0, 0x87($v0)
    ctx->pc = 0x233b94u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
    // 0x233b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b9c: 0x80460065  lb          $a2, 0x65($v0)
    ctx->pc = 0x233b9cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x233ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ba4: 0xc0931b6  jal         func_24C6D8
    ctx->pc = 0x233BA4u;
    SET_GPR_U32(ctx, 31, 0x233BACu);
    ctx->pc = 0x233BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BA4u;
    // 0x233ba8: 0x80470086  lb          $a3, 0x86($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C6D8u, 0x233BA4u, 0x233BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BACu;
label_233bac:
    // 0x233bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bb0: 0xc089974  jal         func_2265D0
    ctx->pc = 0x233BB0u;
    SET_GPR_U32(ctx, 31, 0x233BB8u);
    ctx->pc = 0x233BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BB0u;
    // 0x233bb4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x233BB0u, 0x233BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BB8u;
label_233bb8:
    // 0x233bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bbc: 0xc0e5748  jal         func_395D20
    ctx->pc = 0x233BBCu;
    SET_GPR_U32(ctx, 31, 0x233BC4u);
    ctx->pc = 0x233BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BBCu;
    // 0x233bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x233BBCu, 0x233BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BC4u;
label_233bc4:
    // 0x233bc4: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x233BC4u;
    {
        const bool branch_taken_0x233bc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BC4u;
        // 0x233bc8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bc4) {
            ctx->pc = 0x233C24u;
            goto label_233c24;
        }
    }
    ctx->pc = 0x233BCCu;
    // 0x233bcc: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x233bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x233bd0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233BD0u;
    {
        const bool branch_taken_0x233bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BD0u;
        // 0x233bd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bd0) {
            ctx->pc = 0x233BE4u;
            goto label_233be4;
        }
    }
    ctx->pc = 0x233BD8u;
    // 0x233bd8: 0xc05dc0e  jal         func_177038
    ctx->pc = 0x233BD8u;
    SET_GPR_U32(ctx, 31, 0x233BE0u);
    ctx->pc = 0x233BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BD8u;
    // 0x233bdc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x233BD8u, 0x233BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BE0u;
label_233be0:
    // 0x233be0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x233be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_233be4:
    // 0x233be4: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x233be4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    // 0x233be8: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x233BE8u;
    SET_GPR_U32(ctx, 31, 0x233BF0u);
    ctx->pc = 0x233BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BE8u;
    // 0x233bec: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x233BE8u, 0x233BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BF0u;
label_233bf0:
    // 0x233bf0: 0x80480087  lb          $t0, 0x87($v0)
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
    // 0x233bf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x233bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bf8: 0x80460065  lb          $a2, 0x65($v0)
    ctx->pc = 0x233bf8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x233bfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c00: 0xc0931b6  jal         func_24C6D8
    ctx->pc = 0x233C00u;
    SET_GPR_U32(ctx, 31, 0x233C08u);
    ctx->pc = 0x233C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C00u;
    // 0x233c04: 0x80470086  lb          $a3, 0x86($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C6D8u, 0x233C00u, 0x233C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C08u;
label_233c08:
    // 0x233c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x233c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c0c: 0xc089974  jal         func_2265D0
    ctx->pc = 0x233C0Cu;
    SET_GPR_U32(ctx, 31, 0x233C14u);
    ctx->pc = 0x233C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C0Cu;
    // 0x233c10: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x233C0Cu, 0x233C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C14u;
label_233c14:
    // 0x233c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c18: 0xc0e5748  jal         func_395D20
    ctx->pc = 0x233C18u;
    SET_GPR_U32(ctx, 31, 0x233C20u);
    ctx->pc = 0x233C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C18u;
    // 0x233c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x233C18u, 0x233C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C20u;
label_233c20:
    // 0x233c20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x233c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_233c24:
    // 0x233c24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x233c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233c28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x233c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233c2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x233c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233c34: 0x3e00008  jr          $ra
    ctx->pc = 0x233C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C34u;
        // 0x233c38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233C3Cu;
    // 0x233c3c: 0x0  nop
    ctx->pc = 0x233c3cu;
    // NOP
    ctx->pc = 0x233c40u;
}
