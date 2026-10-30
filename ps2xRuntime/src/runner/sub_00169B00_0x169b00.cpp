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

// Function: sub_00169B00
// Address: 0x169b00 - 0x169cc8
void sub_00169B00_0x169b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169B00_0x169b00");
#endif

    switch (ctx->pc) {
        case 0x169b00u: goto label_169b00;
        case 0x169b04u: goto label_169b04;
        case 0x169b08u: goto label_169b08;
        case 0x169b0cu: goto label_169b0c;
        case 0x169b10u: goto label_169b10;
        case 0x169b14u: goto label_169b14;
        case 0x169b18u: goto label_169b18;
        case 0x169b1cu: goto label_169b1c;
        case 0x169b20u: goto label_169b20;
        case 0x169b24u: goto label_169b24;
        case 0x169b28u: goto label_169b28;
        case 0x169b2cu: goto label_169b2c;
        case 0x169b30u: goto label_169b30;
        case 0x169b34u: goto label_169b34;
        case 0x169b38u: goto label_169b38;
        case 0x169b3cu: goto label_169b3c;
        case 0x169b40u: goto label_169b40;
        case 0x169b44u: goto label_169b44;
        case 0x169b48u: goto label_169b48;
        case 0x169b4cu: goto label_169b4c;
        case 0x169b50u: goto label_169b50;
        case 0x169b54u: goto label_169b54;
        case 0x169b58u: goto label_169b58;
        case 0x169b5cu: goto label_169b5c;
        case 0x169b60u: goto label_169b60;
        case 0x169b64u: goto label_169b64;
        case 0x169b68u: goto label_169b68;
        case 0x169b6cu: goto label_169b6c;
        case 0x169b70u: goto label_169b70;
        case 0x169b74u: goto label_169b74;
        case 0x169b78u: goto label_169b78;
        case 0x169b7cu: goto label_169b7c;
        case 0x169b80u: goto label_169b80;
        case 0x169b84u: goto label_169b84;
        case 0x169b88u: goto label_169b88;
        case 0x169b8cu: goto label_169b8c;
        case 0x169b90u: goto label_169b90;
        case 0x169b94u: goto label_169b94;
        case 0x169b98u: goto label_169b98;
        case 0x169b9cu: goto label_169b9c;
        case 0x169ba0u: goto label_169ba0;
        case 0x169ba4u: goto label_169ba4;
        case 0x169ba8u: goto label_169ba8;
        case 0x169bacu: goto label_169bac;
        case 0x169bb0u: goto label_169bb0;
        case 0x169bb4u: goto label_169bb4;
        case 0x169bb8u: goto label_169bb8;
        case 0x169bbcu: goto label_169bbc;
        case 0x169bc0u: goto label_169bc0;
        case 0x169bc4u: goto label_169bc4;
        case 0x169bc8u: goto label_169bc8;
        case 0x169bccu: goto label_169bcc;
        case 0x169bd0u: goto label_169bd0;
        case 0x169bd4u: goto label_169bd4;
        case 0x169bd8u: goto label_169bd8;
        case 0x169bdcu: goto label_169bdc;
        case 0x169be0u: goto label_169be0;
        case 0x169be4u: goto label_169be4;
        case 0x169be8u: goto label_169be8;
        case 0x169becu: goto label_169bec;
        case 0x169bf0u: goto label_169bf0;
        case 0x169bf4u: goto label_169bf4;
        case 0x169bf8u: goto label_169bf8;
        case 0x169bfcu: goto label_169bfc;
        case 0x169c00u: goto label_169c00;
        case 0x169c04u: goto label_169c04;
        case 0x169c08u: goto label_169c08;
        case 0x169c0cu: goto label_169c0c;
        case 0x169c10u: goto label_169c10;
        case 0x169c14u: goto label_169c14;
        case 0x169c18u: goto label_169c18;
        case 0x169c1cu: goto label_169c1c;
        case 0x169c20u: goto label_169c20;
        case 0x169c24u: goto label_169c24;
        case 0x169c28u: goto label_169c28;
        case 0x169c2cu: goto label_169c2c;
        case 0x169c30u: goto label_169c30;
        case 0x169c34u: goto label_169c34;
        case 0x169c38u: goto label_169c38;
        case 0x169c3cu: goto label_169c3c;
        case 0x169c40u: goto label_169c40;
        case 0x169c44u: goto label_169c44;
        case 0x169c48u: goto label_169c48;
        case 0x169c4cu: goto label_169c4c;
        case 0x169c50u: goto label_169c50;
        case 0x169c54u: goto label_169c54;
        case 0x169c58u: goto label_169c58;
        case 0x169c5cu: goto label_169c5c;
        case 0x169c60u: goto label_169c60;
        case 0x169c64u: goto label_169c64;
        case 0x169c68u: goto label_169c68;
        case 0x169c6cu: goto label_169c6c;
        case 0x169c70u: goto label_169c70;
        case 0x169c74u: goto label_169c74;
        case 0x169c78u: goto label_169c78;
        case 0x169c7cu: goto label_169c7c;
        case 0x169c80u: goto label_169c80;
        case 0x169c84u: goto label_169c84;
        case 0x169c88u: goto label_169c88;
        case 0x169c8cu: goto label_169c8c;
        case 0x169c90u: goto label_169c90;
        case 0x169c94u: goto label_169c94;
        case 0x169c98u: goto label_169c98;
        case 0x169c9cu: goto label_169c9c;
        case 0x169ca0u: goto label_169ca0;
        case 0x169ca4u: goto label_169ca4;
        case 0x169ca8u: goto label_169ca8;
        case 0x169cacu: goto label_169cac;
        case 0x169cb0u: goto label_169cb0;
        case 0x169cb4u: goto label_169cb4;
        case 0x169cb8u: goto label_169cb8;
        case 0x169cbcu: goto label_169cbc;
        case 0x169cc0u: goto label_169cc0;
        case 0x169cc4u: goto label_169cc4;
        default: break;
    }

    ctx->pc = 0x169b00u;

label_169b00:
    // 0x169b00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x169b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_169b04:
    // 0x169b04: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x169b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_169b08:
    // 0x169b08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x169b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_169b0c:
    // 0x169b0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169b10:
    // 0x169b10: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x169b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_169b14:
    // 0x169b14: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169b18:
    // 0x169b18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x169b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_169b1c:
    // 0x169b1c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x169b1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169b20:
    // 0x169b20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x169b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_169b24:
    // 0x169b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169b28:
    // 0x169b28: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x169b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_169b2c:
    // 0x169b2c: 0x0  nop
    ctx->pc = 0x169b2cu;
    // NOP
label_169b30:
    // 0x169b30: 0xc137826  jal         func_4DE098
label_169b34:
    if (ctx->pc == 0x169B34u) {
        ctx->pc = 0x169B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B30u;
        // 0x169b34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B38u;
        goto label_169b38;
    }
    ctx->pc = 0x169B30u;
    SET_GPR_U32(ctx, 31, 0x169B38u);
    ctx->pc = 0x169B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B30u;
    // 0x169b34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x169B30u, 0x169B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B38u;
label_169b38:
    // 0x169b38: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x169b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_169b3c:
    // 0x169b3c: 0xc0e409a  jal         func_390268
label_169b40:
    if (ctx->pc == 0x169B40u) {
        ctx->pc = 0x169B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B3Cu;
        // 0x169b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B44u;
        goto label_169b44;
    }
    ctx->pc = 0x169B3Cu;
    SET_GPR_U32(ctx, 31, 0x169B44u);
    ctx->pc = 0x169B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B3Cu;
    // 0x169b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169B3Cu, 0x169B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B44u;
label_169b44:
    // 0x169b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169b48:
    // 0x169b48: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
label_169b4c:
    if (ctx->pc == 0x169B4Cu) {
        ctx->pc = 0x169B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B48u;
        // 0x169b4c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B50u;
        goto label_169b50;
    }
    ctx->pc = 0x169B48u;
    {
        const bool branch_taken_0x169b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B48u;
        // 0x169b4c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b48) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169B50u;
label_169b50:
    // 0x169b50: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_169b54:
    // 0x169b54: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x169b54u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_169b58:
    // 0x169b58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x169b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_169b5c:
    // 0x169b5c: 0x1053004f  beq         $v0, $s3, . + 4 + (0x4F << 2)
label_169b60:
    if (ctx->pc == 0x169B60u) {
        ctx->pc = 0x169B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B5Cu;
        // 0x169b60: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B64u;
        goto label_169b64;
    }
    ctx->pc = 0x169B5Cu;
    {
        const bool branch_taken_0x169b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x169B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B5Cu;
        // 0x169b60: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b5c) {
            ctx->pc = 0x169C9Cu;
            goto label_169c9c;
        }
    }
    ctx->pc = 0x169B64u;
label_169b64:
    // 0x169b64: 0xc087502  jal         func_21D408
label_169b68:
    if (ctx->pc == 0x169B68u) {
        ctx->pc = 0x169B6Cu;
        goto label_169b6c;
    }
    ctx->pc = 0x169B64u;
    SET_GPR_U32(ctx, 31, 0x169B6Cu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x169B64u, 0x169B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B6Cu;
label_169b6c:
    // 0x169b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169b70:
    // 0x169b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169b74:
    // 0x169b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169b78:
    // 0x169b78: 0xc0a33f8  jal         func_28CFE0
label_169b7c:
    if (ctx->pc == 0x169B7Cu) {
        ctx->pc = 0x169B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B78u;
        // 0x169b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B80u;
        goto label_169b80;
    }
    ctx->pc = 0x169B78u;
    SET_GPR_U32(ctx, 31, 0x169B80u);
    ctx->pc = 0x169B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B78u;
    // 0x169b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x169B78u, 0x169B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B80u;
label_169b80:
    // 0x169b80: 0xc0a3bd2  jal         func_28EF48
label_169b84:
    if (ctx->pc == 0x169B84u) {
        ctx->pc = 0x169B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B80u;
        // 0x169b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B88u;
        goto label_169b88;
    }
    ctx->pc = 0x169B80u;
    SET_GPR_U32(ctx, 31, 0x169B88u);
    ctx->pc = 0x169B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B80u;
    // 0x169b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x169B80u, 0x169B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B88u;
label_169b88:
    // 0x169b88: 0xc13782a  jal         func_4DE0A8
label_169b8c:
    if (ctx->pc == 0x169B8Cu) {
        ctx->pc = 0x169B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B88u;
        // 0x169b8c: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B90u;
        goto label_169b90;
    }
    ctx->pc = 0x169B88u;
    SET_GPR_U32(ctx, 31, 0x169B90u);
    ctx->pc = 0x169B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B88u;
    // 0x169b8c: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x169B88u, 0x169B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B90u;
label_169b90:
    // 0x169b90: 0xc0a36c8  jal         func_28DB20
label_169b94:
    if (ctx->pc == 0x169B94u) {
        ctx->pc = 0x169B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B90u;
        // 0x169b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B98u;
        goto label_169b98;
    }
    ctx->pc = 0x169B90u;
    SET_GPR_U32(ctx, 31, 0x169B98u);
    ctx->pc = 0x169B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B90u;
    // 0x169b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x169B90u, 0x169B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B98u;
label_169b98:
    // 0x169b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169b9c:
    // 0x169b9c: 0xc0a3658  jal         func_28D960
label_169ba0:
    if (ctx->pc == 0x169BA0u) {
        ctx->pc = 0x169BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B9Cu;
        // 0x169ba0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BA4u;
        goto label_169ba4;
    }
    ctx->pc = 0x169B9Cu;
    SET_GPR_U32(ctx, 31, 0x169BA4u);
    ctx->pc = 0x169BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B9Cu;
    // 0x169ba0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x169B9Cu, 0x169BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BA4u;
label_169ba4:
    // 0x169ba4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x169ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169ba8:
    // 0x169ba8: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
label_169bac:
    if (ctx->pc == 0x169BACu) {
        ctx->pc = 0x169BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BA8u;
        // 0x169bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BB0u;
        goto label_169bb0;
    }
    ctx->pc = 0x169BA8u;
    {
        const bool branch_taken_0x169ba8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x169BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BA8u;
        // 0x169bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ba8) {
            ctx->pc = 0x169BD8u;
            goto label_169bd8;
        }
    }
    ctx->pc = 0x169BB0u;
label_169bb0:
    // 0x169bb0: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x169bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_169bb4:
    // 0x169bb4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x169bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_169bb8:
    // 0x169bb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_169bbc:
    if (ctx->pc == 0x169BBCu) {
        ctx->pc = 0x169BC0u;
        goto label_169bc0;
    }
    ctx->pc = 0x169BB8u;
    {
        const bool branch_taken_0x169bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169bb8) {
            ctx->pc = 0x169BD8u;
            goto label_169bd8;
        }
    }
    ctx->pc = 0x169BC0u;
label_169bc0:
    // 0x169bc0: 0xc0a35f6  jal         func_28D7D8
label_169bc4:
    if (ctx->pc == 0x169BC4u) {
        ctx->pc = 0x169BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BC0u;
        // 0x169bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BC8u;
        goto label_169bc8;
    }
    ctx->pc = 0x169BC0u;
    SET_GPR_U32(ctx, 31, 0x169BC8u);
    ctx->pc = 0x169BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BC0u;
    // 0x169bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x169BC0u, 0x169BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BC8u;
label_169bc8:
    // 0x169bc8: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x169bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_169bcc:
    // 0x169bcc: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x169bccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_169bd0:
    // 0x169bd0: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_169bd4:
    if (ctx->pc == 0x169BD4u) {
        ctx->pc = 0x169BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD0u;
        // 0x169bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BD8u;
        goto label_169bd8;
    }
    ctx->pc = 0x169BD0u;
    {
        const bool branch_taken_0x169bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD0u;
        // 0x169bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bd0) {
            ctx->pc = 0x169BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169bc0;
        }
    }
    ctx->pc = 0x169BD8u;
label_169bd8:
    // 0x169bd8: 0xc0a3658  jal         func_28D960
label_169bdc:
    if (ctx->pc == 0x169BDCu) {
        ctx->pc = 0x169BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD8u;
        // 0x169bdc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BE0u;
        goto label_169be0;
    }
    ctx->pc = 0x169BD8u;
    SET_GPR_U32(ctx, 31, 0x169BE0u);
    ctx->pc = 0x169BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BD8u;
    // 0x169bdc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x169BD8u, 0x169BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BE0u;
label_169be0:
    // 0x169be0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x169be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169be4:
    // 0x169be4: 0x620000c  bltz        $s1, . + 4 + (0xC << 2)
label_169be8:
    if (ctx->pc == 0x169BE8u) {
        ctx->pc = 0x169BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BE4u;
        // 0x169be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BECu;
        goto label_169bec;
    }
    ctx->pc = 0x169BE4u;
    {
        const bool branch_taken_0x169be4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x169BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BE4u;
        // 0x169be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169be4) {
            ctx->pc = 0x169C18u;
            goto label_169c18;
        }
    }
    ctx->pc = 0x169BECu;
label_169bec:
    // 0x169bec: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x169becu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_169bf0:
    // 0x169bf0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x169bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_169bf4:
    // 0x169bf4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_169bf8:
    if (ctx->pc == 0x169BF8u) {
        ctx->pc = 0x169BFCu;
        goto label_169bfc;
    }
    ctx->pc = 0x169BF4u;
    {
        const bool branch_taken_0x169bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169bf4) {
            ctx->pc = 0x169C18u;
            goto label_169c18;
        }
    }
    ctx->pc = 0x169BFCu;
label_169bfc:
    // 0x169bfc: 0x0  nop
    ctx->pc = 0x169bfcu;
    // NOP
label_169c00:
    // 0x169c00: 0xc0a35f6  jal         func_28D7D8
label_169c04:
    if (ctx->pc == 0x169C04u) {
        ctx->pc = 0x169C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C00u;
        // 0x169c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C08u;
        goto label_169c08;
    }
    ctx->pc = 0x169C00u;
    SET_GPR_U32(ctx, 31, 0x169C08u);
    ctx->pc = 0x169C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C00u;
    // 0x169c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x169C00u, 0x169C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C08u;
label_169c08:
    // 0x169c08: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_169c0c:
    // 0x169c0c: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x169c0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_169c10:
    // 0x169c10: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_169c14:
    if (ctx->pc == 0x169C14u) {
        ctx->pc = 0x169C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C10u;
        // 0x169c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C18u;
        goto label_169c18;
    }
    ctx->pc = 0x169C10u;
    {
        const bool branch_taken_0x169c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C10u;
        // 0x169c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c10) {
            ctx->pc = 0x169C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169c00;
        }
    }
    ctx->pc = 0x169C18u;
label_169c18:
    // 0x169c18: 0xc0a3658  jal         func_28D960
label_169c1c:
    if (ctx->pc == 0x169C1Cu) {
        ctx->pc = 0x169C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C18u;
        // 0x169c1c: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C20u;
        goto label_169c20;
    }
    ctx->pc = 0x169C18u;
    SET_GPR_U32(ctx, 31, 0x169C20u);
    ctx->pc = 0x169C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C18u;
    // 0x169c1c: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x169C18u, 0x169C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C20u;
label_169c20:
    // 0x169c20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x169c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169c24:
    // 0x169c24: 0x622001c  bltzl       $s1, . + 4 + (0x1C << 2)
label_169c28:
    if (ctx->pc == 0x169C28u) {
        ctx->pc = 0x169C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C24u;
        // 0x169c28: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C2Cu;
        goto label_169c2c;
    }
    ctx->pc = 0x169C24u;
    {
        const bool branch_taken_0x169c24 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x169c24) {
            ctx->pc = 0x169C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169C24u;
            // 0x169c28: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169C2Cu;
label_169c2c:
    // 0x169c2c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x169c2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_169c30:
    // 0x169c30: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x169c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_169c34:
    // 0x169c34: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_169c38:
    if (ctx->pc == 0x169C38u) {
        ctx->pc = 0x169C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C34u;
        // 0x169c38: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C3Cu;
        goto label_169c3c;
    }
    ctx->pc = 0x169C34u;
    {
        const bool branch_taken_0x169c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c34) {
            ctx->pc = 0x169C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169C34u;
            // 0x169c38: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169C5Cu;
            goto label_169c5c;
        }
    }
    ctx->pc = 0x169C3Cu;
label_169c3c:
    // 0x169c3c: 0x0  nop
    ctx->pc = 0x169c3cu;
    // NOP
label_169c40:
    // 0x169c40: 0xc0a35f6  jal         func_28D7D8
label_169c44:
    if (ctx->pc == 0x169C44u) {
        ctx->pc = 0x169C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C40u;
        // 0x169c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C48u;
        goto label_169c48;
    }
    ctx->pc = 0x169C40u;
    SET_GPR_U32(ctx, 31, 0x169C48u);
    ctx->pc = 0x169C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C40u;
    // 0x169c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x169C40u, 0x169C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C48u;
label_169c48:
    // 0x169c48: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x169c48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_169c4c:
    // 0x169c4c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x169c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_169c50:
    // 0x169c50: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_169c54:
    if (ctx->pc == 0x169C54u) {
        ctx->pc = 0x169C58u;
        goto label_169c58;
    }
    ctx->pc = 0x169C50u;
    {
        const bool branch_taken_0x169c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169c50) {
            ctx->pc = 0x169C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169c40;
        }
    }
    ctx->pc = 0x169C58u;
label_169c58:
    // 0x169c58: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x169c58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_169c5c:
    // 0x169c5c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_169c60:
    if (ctx->pc == 0x169C60u) {
        ctx->pc = 0x169C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C5Cu;
        // 0x169c60: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C64u;
        goto label_169c64;
    }
    ctx->pc = 0x169C5Cu;
    {
        const bool branch_taken_0x169c5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C5Cu;
        // 0x169c60: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c5c) {
            ctx->pc = 0x169C70u;
            goto label_169c70;
        }
    }
    ctx->pc = 0x169C64u;
label_169c64:
    // 0x169c64: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x169c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_169c68:
    // 0x169c68: 0x10000002  b           . + 4 + (0x2 << 2)
label_169c6c:
    if (ctx->pc == 0x169C6Cu) {
        ctx->pc = 0x169C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C68u;
        // 0x169c6c: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C70u;
        goto label_169c70;
    }
    ctx->pc = 0x169C68u;
    {
        const bool branch_taken_0x169c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C68u;
        // 0x169c6c: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c68) {
            ctx->pc = 0x169C74u;
            goto label_169c74;
        }
    }
    ctx->pc = 0x169C70u;
label_169c70:
    // 0x169c70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169c74:
    // 0x169c74: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x169c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_169c78:
    // 0x169c78: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x169c78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_169c7c:
    // 0x169c7c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x169c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_169c80:
    // 0x169c80: 0x40f809  jalr        $v0
label_169c84:
    if (ctx->pc == 0x169C84u) {
        ctx->pc = 0x169C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C80u;
        // 0x169c84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C88u;
        goto label_169c88;
    }
    ctx->pc = 0x169C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x169C88u);
        ctx->pc = 0x169C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C80u;
        // 0x169c84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C80u, 0x169C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169C88u;
label_169c88:
    // 0x169c88: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_169c8c:
    // 0x169c8c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_169c90:
    if (ctx->pc == 0x169C90u) {
        ctx->pc = 0x169C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C8Cu;
        // 0x169c90: 0xae130038  sw          $s3, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C94u;
        goto label_169c94;
    }
    ctx->pc = 0x169C8Cu;
    {
        const bool branch_taken_0x169c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169c8c) {
            ctx->pc = 0x169C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169C8Cu;
            // 0x169c90: 0xae130038  sw          $s3, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169C94u;
            goto label_169c94;
        }
    }
    ctx->pc = 0x169C94u;
label_169c94:
    // 0x169c94: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x169c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_169c98:
    // 0x169c98: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x169c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_169c9c:
    // 0x169c9c: 0x5440ffa4  bnel        $v0, $zero, . + 4 + (-0x5C << 2)
label_169ca0:
    if (ctx->pc == 0x169CA0u) {
        ctx->pc = 0x169CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C9Cu;
        // 0x169ca0: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169CA4u;
        goto label_169ca4;
    }
    ctx->pc = 0x169C9Cu;
    {
        const bool branch_taken_0x169c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169c9c) {
            ctx->pc = 0x169CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169C9Cu;
            // 0x169ca0: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169b30;
        }
    }
    ctx->pc = 0x169CA4u;
label_169ca4:
    // 0x169ca4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x169ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_169ca8:
    // 0x169ca8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x169ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_169cac:
    // 0x169cac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x169cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_169cb0:
    // 0x169cb0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x169cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_169cb4:
    // 0x169cb4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x169cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169cb8:
    // 0x169cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169cbc:
    // 0x169cbc: 0x3e00008  jr          $ra
label_169cc0:
    if (ctx->pc == 0x169CC0u) {
        ctx->pc = 0x169CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CBCu;
        // 0x169cc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169CC4u;
        goto label_169cc4;
    }
    ctx->pc = 0x169CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CBCu;
        // 0x169cc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169CC4u;
label_169cc4:
    // 0x169cc4: 0x0  nop
    ctx->pc = 0x169cc4u;
    // NOP
    ctx->pc = 0x169cc8u;
}
