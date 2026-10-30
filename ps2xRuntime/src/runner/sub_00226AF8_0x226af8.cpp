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

// Function: sub_00226AF8
// Address: 0x226af8 - 0x226c30
void sub_00226AF8_0x226af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226AF8_0x226af8");
#endif

    switch (ctx->pc) {
        case 0x226af8u: goto label_226af8;
        case 0x226afcu: goto label_226afc;
        case 0x226b00u: goto label_226b00;
        case 0x226b04u: goto label_226b04;
        case 0x226b08u: goto label_226b08;
        case 0x226b0cu: goto label_226b0c;
        case 0x226b10u: goto label_226b10;
        case 0x226b14u: goto label_226b14;
        case 0x226b18u: goto label_226b18;
        case 0x226b1cu: goto label_226b1c;
        case 0x226b20u: goto label_226b20;
        case 0x226b24u: goto label_226b24;
        case 0x226b28u: goto label_226b28;
        case 0x226b2cu: goto label_226b2c;
        case 0x226b30u: goto label_226b30;
        case 0x226b34u: goto label_226b34;
        case 0x226b38u: goto label_226b38;
        case 0x226b3cu: goto label_226b3c;
        case 0x226b40u: goto label_226b40;
        case 0x226b44u: goto label_226b44;
        case 0x226b48u: goto label_226b48;
        case 0x226b4cu: goto label_226b4c;
        case 0x226b50u: goto label_226b50;
        case 0x226b54u: goto label_226b54;
        case 0x226b58u: goto label_226b58;
        case 0x226b5cu: goto label_226b5c;
        case 0x226b60u: goto label_226b60;
        case 0x226b64u: goto label_226b64;
        case 0x226b68u: goto label_226b68;
        case 0x226b6cu: goto label_226b6c;
        case 0x226b70u: goto label_226b70;
        case 0x226b74u: goto label_226b74;
        case 0x226b78u: goto label_226b78;
        case 0x226b7cu: goto label_226b7c;
        case 0x226b80u: goto label_226b80;
        case 0x226b84u: goto label_226b84;
        case 0x226b88u: goto label_226b88;
        case 0x226b8cu: goto label_226b8c;
        case 0x226b90u: goto label_226b90;
        case 0x226b94u: goto label_226b94;
        case 0x226b98u: goto label_226b98;
        case 0x226b9cu: goto label_226b9c;
        case 0x226ba0u: goto label_226ba0;
        case 0x226ba4u: goto label_226ba4;
        case 0x226ba8u: goto label_226ba8;
        case 0x226bacu: goto label_226bac;
        case 0x226bb0u: goto label_226bb0;
        case 0x226bb4u: goto label_226bb4;
        case 0x226bb8u: goto label_226bb8;
        case 0x226bbcu: goto label_226bbc;
        case 0x226bc0u: goto label_226bc0;
        case 0x226bc4u: goto label_226bc4;
        case 0x226bc8u: goto label_226bc8;
        case 0x226bccu: goto label_226bcc;
        case 0x226bd0u: goto label_226bd0;
        case 0x226bd4u: goto label_226bd4;
        case 0x226bd8u: goto label_226bd8;
        case 0x226bdcu: goto label_226bdc;
        case 0x226be0u: goto label_226be0;
        case 0x226be4u: goto label_226be4;
        case 0x226be8u: goto label_226be8;
        case 0x226becu: goto label_226bec;
        case 0x226bf0u: goto label_226bf0;
        case 0x226bf4u: goto label_226bf4;
        case 0x226bf8u: goto label_226bf8;
        case 0x226bfcu: goto label_226bfc;
        case 0x226c00u: goto label_226c00;
        case 0x226c04u: goto label_226c04;
        case 0x226c08u: goto label_226c08;
        case 0x226c0cu: goto label_226c0c;
        case 0x226c10u: goto label_226c10;
        case 0x226c14u: goto label_226c14;
        case 0x226c18u: goto label_226c18;
        case 0x226c1cu: goto label_226c1c;
        case 0x226c20u: goto label_226c20;
        case 0x226c24u: goto label_226c24;
        case 0x226c28u: goto label_226c28;
        case 0x226c2cu: goto label_226c2c;
        default: break;
    }

    ctx->pc = 0x226af8u;

label_226af8:
    // 0x226af8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_226afc:
    // 0x226afc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_226b00:
    // 0x226b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226b04:
    // 0x226b04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x226b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_226b08:
    // 0x226b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_226b0c:
    // 0x226b0c: 0xc0874fa  jal         func_21D3E8
label_226b10:
    if (ctx->pc == 0x226B10u) {
        ctx->pc = 0x226B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B0Cu;
        // 0x226b10: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B14u;
        goto label_226b14;
    }
    ctx->pc = 0x226B0Cu;
    SET_GPR_U32(ctx, 31, 0x226B14u);
    ctx->pc = 0x226B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B0Cu;
    // 0x226b10: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x226B0Cu, 0x226B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B14u;
label_226b14:
    // 0x226b14: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x226b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_226b18:
    // 0x226b18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_226b1c:
    if (ctx->pc == 0x226B1Cu) {
        ctx->pc = 0x226B20u;
        goto label_226b20;
    }
    ctx->pc = 0x226B18u;
    {
        const bool branch_taken_0x226b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b18) {
            ctx->pc = 0x226B30u;
            goto label_226b30;
        }
    }
    ctx->pc = 0x226B20u;
label_226b20:
    // 0x226b20: 0xc089f22  jal         func_227C88
label_226b24:
    if (ctx->pc == 0x226B24u) {
        ctx->pc = 0x226B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B20u;
        // 0x226b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B28u;
        goto label_226b28;
    }
    ctx->pc = 0x226B20u;
    SET_GPR_U32(ctx, 31, 0x226B28u);
    ctx->pc = 0x226B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B20u;
    // 0x226b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x226B20u, 0x226B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B28u;
label_226b28:
    // 0x226b28: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_226b2c:
    if (ctx->pc == 0x226B2Cu) {
        ctx->pc = 0x226B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B28u;
        // 0x226b2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B30u;
        goto label_226b30;
    }
    ctx->pc = 0x226B28u;
    {
        const bool branch_taken_0x226b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B28u;
        // 0x226b2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b28) {
            ctx->pc = 0x226C20u;
            goto label_226c20;
        }
    }
    ctx->pc = 0x226B30u;
label_226b30:
    // 0x226b30: 0xc0e409a  jal         func_390268
label_226b34:
    if (ctx->pc == 0x226B34u) {
        ctx->pc = 0x226B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B30u;
        // 0x226b34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B38u;
        goto label_226b38;
    }
    ctx->pc = 0x226B30u;
    SET_GPR_U32(ctx, 31, 0x226B38u);
    ctx->pc = 0x226B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B30u;
    // 0x226b34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x226B30u, 0x226B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B38u;
label_226b38:
    // 0x226b38: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_226b3c:
    if (ctx->pc == 0x226B3Cu) {
        ctx->pc = 0x226B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B38u;
        // 0x226b3c: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B40u;
        goto label_226b40;
    }
    ctx->pc = 0x226B38u;
    {
        const bool branch_taken_0x226b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b38) {
            ctx->pc = 0x226B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226B38u;
            // 0x226b3c: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226B54u;
            goto label_226b54;
        }
    }
    ctx->pc = 0x226B40u;
label_226b40:
    // 0x226b40: 0xc089f5e  jal         func_227D78
label_226b44:
    if (ctx->pc == 0x226B44u) {
        ctx->pc = 0x226B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B40u;
        // 0x226b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B48u;
        goto label_226b48;
    }
    ctx->pc = 0x226B40u;
    SET_GPR_U32(ctx, 31, 0x226B48u);
    ctx->pc = 0x226B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B40u;
    // 0x226b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x226B40u, 0x226B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B48u;
label_226b48:
    // 0x226b48: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_226b4c:
    if (ctx->pc == 0x226B4Cu) {
        ctx->pc = 0x226B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B48u;
        // 0x226b4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B50u;
        goto label_226b50;
    }
    ctx->pc = 0x226B48u;
    {
        const bool branch_taken_0x226b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B48u;
        // 0x226b4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b48) {
            ctx->pc = 0x226C20u;
            goto label_226c20;
        }
    }
    ctx->pc = 0x226B50u;
label_226b50:
    // 0x226b50: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x226b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_226b54:
    // 0x226b54: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x226b54u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_226b58:
    // 0x226b58: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_226b5c:
    if (ctx->pc == 0x226B5Cu) {
        ctx->pc = 0x226B60u;
        goto label_226b60;
    }
    ctx->pc = 0x226B58u;
    {
        const bool branch_taken_0x226b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b58) {
            ctx->pc = 0x226BCCu;
            goto label_226bcc;
        }
    }
    ctx->pc = 0x226B60u;
label_226b60:
    // 0x226b60: 0xc087502  jal         func_21D408
label_226b64:
    if (ctx->pc == 0x226B64u) {
        ctx->pc = 0x226B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B60u;
        // 0x226b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B68u;
        goto label_226b68;
    }
    ctx->pc = 0x226B60u;
    SET_GPR_U32(ctx, 31, 0x226B68u);
    ctx->pc = 0x226B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B60u;
    // 0x226b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226B60u, 0x226B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B68u;
label_226b68:
    // 0x226b68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x226b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_226b6c:
    // 0x226b6c: 0xc0e409a  jal         func_390268
label_226b70:
    if (ctx->pc == 0x226B70u) {
        ctx->pc = 0x226B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B6Cu;
        // 0x226b70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B74u;
        goto label_226b74;
    }
    ctx->pc = 0x226B6Cu;
    SET_GPR_U32(ctx, 31, 0x226B74u);
    ctx->pc = 0x226B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B6Cu;
    // 0x226b70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x226B6Cu, 0x226B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B74u;
label_226b74:
    // 0x226b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x226b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226b78:
    // 0x226b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226b7c:
    // 0x226b7c: 0xc0a33f8  jal         func_28CFE0
label_226b80:
    if (ctx->pc == 0x226B80u) {
        ctx->pc = 0x226B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B7Cu;
        // 0x226b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B84u;
        goto label_226b84;
    }
    ctx->pc = 0x226B7Cu;
    SET_GPR_U32(ctx, 31, 0x226B84u);
    ctx->pc = 0x226B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B7Cu;
    // 0x226b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x226B7Cu, 0x226B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B84u;
label_226b84:
    // 0x226b84: 0xc087502  jal         func_21D408
label_226b88:
    if (ctx->pc == 0x226B88u) {
        ctx->pc = 0x226B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B84u;
        // 0x226b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B8Cu;
        goto label_226b8c;
    }
    ctx->pc = 0x226B84u;
    SET_GPR_U32(ctx, 31, 0x226B8Cu);
    ctx->pc = 0x226B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B84u;
    // 0x226b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226B84u, 0x226B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B8Cu;
label_226b8c:
    // 0x226b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226b90:
    // 0x226b90: 0xc0e4060  jal         func_390180
label_226b94:
    if (ctx->pc == 0x226B94u) {
        ctx->pc = 0x226B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B90u;
        // 0x226b94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B98u;
        goto label_226b98;
    }
    ctx->pc = 0x226B90u;
    SET_GPR_U32(ctx, 31, 0x226B98u);
    ctx->pc = 0x226B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B90u;
    // 0x226b94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x226B90u, 0x226B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B98u;
label_226b98:
    // 0x226b98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x226b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226b9c:
    // 0x226b9c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_226ba0:
    if (ctx->pc == 0x226BA0u) {
        ctx->pc = 0x226BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B9Cu;
        // 0x226ba0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BA4u;
        goto label_226ba4;
    }
    ctx->pc = 0x226B9Cu;
    {
        const bool branch_taken_0x226b9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B9Cu;
        // 0x226ba0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b9c) {
            ctx->pc = 0x226BC0u;
            goto label_226bc0;
        }
    }
    ctx->pc = 0x226BA4u;
label_226ba4:
    // 0x226ba4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x226ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_226ba8:
    // 0x226ba8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x226ba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226bac:
    // 0x226bac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226bb0:
    // 0x226bb0: 0x40f809  jalr        $v0
label_226bb4:
    if (ctx->pc == 0x226BB4u) {
        ctx->pc = 0x226BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BB0u;
        // 0x226bb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BB8u;
        goto label_226bb8;
    }
    ctx->pc = 0x226BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226BB8u);
        ctx->pc = 0x226BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BB0u;
        // 0x226bb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226BB0u, 0x226BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226BB8u;
label_226bb8:
    // 0x226bb8: 0x10000018  b           . + 4 + (0x18 << 2)
label_226bbc:
    if (ctx->pc == 0x226BBCu) {
        ctx->pc = 0x226BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BB8u;
        // 0x226bbc: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BC0u;
        goto label_226bc0;
    }
    ctx->pc = 0x226BB8u;
    {
        const bool branch_taken_0x226bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BB8u;
        // 0x226bbc: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bb8) {
            ctx->pc = 0x226C1Cu;
            goto label_226c1c;
        }
    }
    ctx->pc = 0x226BC0u;
label_226bc0:
    // 0x226bc0: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_226bc4:
    // 0x226bc4: 0x10000015  b           . + 4 + (0x15 << 2)
label_226bc8:
    if (ctx->pc == 0x226BC8u) {
        ctx->pc = 0x226BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BC4u;
        // 0x226bc8: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BCCu;
        goto label_226bcc;
    }
    ctx->pc = 0x226BC4u;
    {
        const bool branch_taken_0x226bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BC4u;
        // 0x226bc8: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bc4) {
            ctx->pc = 0x226C1Cu;
            goto label_226c1c;
        }
    }
    ctx->pc = 0x226BCCu;
label_226bcc:
    // 0x226bcc: 0xc0e409a  jal         func_390268
label_226bd0:
    if (ctx->pc == 0x226BD0u) {
        ctx->pc = 0x226BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BCCu;
        // 0x226bd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BD4u;
        goto label_226bd4;
    }
    ctx->pc = 0x226BCCu;
    SET_GPR_U32(ctx, 31, 0x226BD4u);
    ctx->pc = 0x226BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BCCu;
    // 0x226bd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x226BCCu, 0x226BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BD4u;
label_226bd4:
    // 0x226bd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_226bd8:
    if (ctx->pc == 0x226BD8u) {
        ctx->pc = 0x226BDCu;
        goto label_226bdc;
    }
    ctx->pc = 0x226BD4u;
    {
        const bool branch_taken_0x226bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226bd4) {
            ctx->pc = 0x226BF8u;
            goto label_226bf8;
        }
    }
    ctx->pc = 0x226BDCu;
label_226bdc:
    // 0x226bdc: 0xc0e409a  jal         func_390268
label_226be0:
    if (ctx->pc == 0x226BE0u) {
        ctx->pc = 0x226BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BDCu;
        // 0x226be0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BE4u;
        goto label_226be4;
    }
    ctx->pc = 0x226BDCu;
    SET_GPR_U32(ctx, 31, 0x226BE4u);
    ctx->pc = 0x226BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BDCu;
    // 0x226be0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x226BDCu, 0x226BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BE4u;
label_226be4:
    // 0x226be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226be8:
    // 0x226be8: 0xc089b0c  jal         func_226C30
label_226bec:
    if (ctx->pc == 0x226BECu) {
        ctx->pc = 0x226BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BE8u;
        // 0x226bec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BF0u;
        goto label_226bf0;
    }
    ctx->pc = 0x226BE8u;
    SET_GPR_U32(ctx, 31, 0x226BF0u);
    ctx->pc = 0x226BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BE8u;
    // 0x226bec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x226BE8u, 0x226BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BF0u;
label_226bf0:
    // 0x226bf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_226bf4:
    if (ctx->pc == 0x226BF4u) {
        ctx->pc = 0x226BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BF0u;
        // 0x226bf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BF8u;
        goto label_226bf8;
    }
    ctx->pc = 0x226BF0u;
    {
        const bool branch_taken_0x226bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BF0u;
        // 0x226bf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bf0) {
            ctx->pc = 0x226C20u;
            goto label_226c20;
        }
    }
    ctx->pc = 0x226BF8u;
label_226bf8:
    // 0x226bf8: 0xc0e4060  jal         func_390180
label_226bfc:
    if (ctx->pc == 0x226BFCu) {
        ctx->pc = 0x226BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BF8u;
        // 0x226bfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C00u;
        goto label_226c00;
    }
    ctx->pc = 0x226BF8u;
    SET_GPR_U32(ctx, 31, 0x226C00u);
    ctx->pc = 0x226BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BF8u;
    // 0x226bfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x226BF8u, 0x226C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C00u;
label_226c00:
    // 0x226c00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_226c04:
    if (ctx->pc == 0x226C04u) {
        ctx->pc = 0x226C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C00u;
        // 0x226c04: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C08u;
        goto label_226c08;
    }
    ctx->pc = 0x226C00u;
    {
        const bool branch_taken_0x226c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C00u;
        // 0x226c04: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c00) {
            ctx->pc = 0x226C20u;
            goto label_226c20;
        }
    }
    ctx->pc = 0x226C08u;
label_226c08:
    // 0x226c08: 0xc0e4060  jal         func_390180
label_226c0c:
    if (ctx->pc == 0x226C0Cu) {
        ctx->pc = 0x226C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C08u;
        // 0x226c0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C10u;
        goto label_226c10;
    }
    ctx->pc = 0x226C08u;
    SET_GPR_U32(ctx, 31, 0x226C10u);
    ctx->pc = 0x226C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C08u;
    // 0x226c0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x226C08u, 0x226C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C10u;
label_226c10:
    // 0x226c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226c14:
    // 0x226c14: 0xc089b34  jal         func_226CD0
label_226c18:
    if (ctx->pc == 0x226C18u) {
        ctx->pc = 0x226C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C14u;
        // 0x226c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C1Cu;
        goto label_226c1c;
    }
    ctx->pc = 0x226C14u;
    SET_GPR_U32(ctx, 31, 0x226C1Cu);
    ctx->pc = 0x226C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C14u;
    // 0x226c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x226C14u, 0x226C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C1Cu;
label_226c1c:
    // 0x226c1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x226c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226c20:
    // 0x226c20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226c24:
    // 0x226c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226c28:
    // 0x226c28: 0x3e00008  jr          $ra
label_226c2c:
    if (ctx->pc == 0x226C2Cu) {
        ctx->pc = 0x226C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C28u;
        // 0x226c2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C30u;
        goto label_fallthrough_0x226c28;
    }
    ctx->pc = 0x226C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C28u;
        // 0x226c2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226c28:
    ctx->pc = 0x226C30u;
}
