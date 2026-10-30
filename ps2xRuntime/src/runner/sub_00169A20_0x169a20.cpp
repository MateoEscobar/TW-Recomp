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

// Function: sub_00169A20
// Address: 0x169a20 - 0x169b00
void sub_00169A20_0x169a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169A20_0x169a20");
#endif

    switch (ctx->pc) {
        case 0x169a20u: goto label_169a20;
        case 0x169a24u: goto label_169a24;
        case 0x169a28u: goto label_169a28;
        case 0x169a2cu: goto label_169a2c;
        case 0x169a30u: goto label_169a30;
        case 0x169a34u: goto label_169a34;
        case 0x169a38u: goto label_169a38;
        case 0x169a3cu: goto label_169a3c;
        case 0x169a40u: goto label_169a40;
        case 0x169a44u: goto label_169a44;
        case 0x169a48u: goto label_169a48;
        case 0x169a4cu: goto label_169a4c;
        case 0x169a50u: goto label_169a50;
        case 0x169a54u: goto label_169a54;
        case 0x169a58u: goto label_169a58;
        case 0x169a5cu: goto label_169a5c;
        case 0x169a60u: goto label_169a60;
        case 0x169a64u: goto label_169a64;
        case 0x169a68u: goto label_169a68;
        case 0x169a6cu: goto label_169a6c;
        case 0x169a70u: goto label_169a70;
        case 0x169a74u: goto label_169a74;
        case 0x169a78u: goto label_169a78;
        case 0x169a7cu: goto label_169a7c;
        case 0x169a80u: goto label_169a80;
        case 0x169a84u: goto label_169a84;
        case 0x169a88u: goto label_169a88;
        case 0x169a8cu: goto label_169a8c;
        case 0x169a90u: goto label_169a90;
        case 0x169a94u: goto label_169a94;
        case 0x169a98u: goto label_169a98;
        case 0x169a9cu: goto label_169a9c;
        case 0x169aa0u: goto label_169aa0;
        case 0x169aa4u: goto label_169aa4;
        case 0x169aa8u: goto label_169aa8;
        case 0x169aacu: goto label_169aac;
        case 0x169ab0u: goto label_169ab0;
        case 0x169ab4u: goto label_169ab4;
        case 0x169ab8u: goto label_169ab8;
        case 0x169abcu: goto label_169abc;
        case 0x169ac0u: goto label_169ac0;
        case 0x169ac4u: goto label_169ac4;
        case 0x169ac8u: goto label_169ac8;
        case 0x169accu: goto label_169acc;
        case 0x169ad0u: goto label_169ad0;
        case 0x169ad4u: goto label_169ad4;
        case 0x169ad8u: goto label_169ad8;
        case 0x169adcu: goto label_169adc;
        case 0x169ae0u: goto label_169ae0;
        case 0x169ae4u: goto label_169ae4;
        case 0x169ae8u: goto label_169ae8;
        case 0x169aecu: goto label_169aec;
        case 0x169af0u: goto label_169af0;
        case 0x169af4u: goto label_169af4;
        case 0x169af8u: goto label_169af8;
        case 0x169afcu: goto label_169afc;
        default: break;
    }

    ctx->pc = 0x169a20u;

label_169a20:
    // 0x169a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_169a24:
    // 0x169a24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x169a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_169a28:
    // 0x169a28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x169a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_169a2c:
    // 0x169a2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169a30:
    // 0x169a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_169a34:
    // 0x169a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169a38:
    // 0x169a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169a3c:
    // 0x169a3c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x169a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_169a40:
    // 0x169a40: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x169a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
label_169a44:
    // 0x169a44: 0xc05b11c  jal         func_16C470
label_169a48:
    if (ctx->pc == 0x169A48u) {
        ctx->pc = 0x169A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A44u;
        // 0x169a48: 0x86040030  lh          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A4Cu;
        goto label_169a4c;
    }
    ctx->pc = 0x169A44u;
    SET_GPR_U32(ctx, 31, 0x169A4Cu);
    ctx->pc = 0x169A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A44u;
    // 0x169a48: 0x86040030  lh          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C470u, 0x169A44u, 0x169A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A4Cu;
label_169a4c:
    // 0x169a4c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x169a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_169a50:
    // 0x169a50: 0xc0e409a  jal         func_390268
label_169a54:
    if (ctx->pc == 0x169A54u) {
        ctx->pc = 0x169A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A50u;
        // 0x169a54: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A58u;
        goto label_169a58;
    }
    ctx->pc = 0x169A50u;
    SET_GPR_U32(ctx, 31, 0x169A58u);
    ctx->pc = 0x169A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A50u;
    // 0x169a54: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169A50u, 0x169A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A58u;
label_169a58:
    // 0x169a58: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_169a5c:
    if (ctx->pc == 0x169A5Cu) {
        ctx->pc = 0x169A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A58u;
        // 0x169a5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A60u;
        goto label_169a60;
    }
    ctx->pc = 0x169A58u;
    {
        const bool branch_taken_0x169a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a58) {
            ctx->pc = 0x169A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169A58u;
            // 0x169a5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169AF0u;
            goto label_169af0;
        }
    }
    ctx->pc = 0x169A60u;
label_169a60:
    // 0x169a60: 0xc087502  jal         func_21D408
label_169a64:
    if (ctx->pc == 0x169A64u) {
        ctx->pc = 0x169A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A60u;
        // 0x169a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A68u;
        goto label_169a68;
    }
    ctx->pc = 0x169A60u;
    SET_GPR_U32(ctx, 31, 0x169A68u);
    ctx->pc = 0x169A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A60u;
    // 0x169a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x169A60u, 0x169A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A68u;
label_169a68:
    // 0x169a68: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_169a6c:
    // 0x169a6c: 0x54700020  bnel        $v1, $s0, . + 4 + (0x20 << 2)
label_169a70:
    if (ctx->pc == 0x169A70u) {
        ctx->pc = 0x169A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A6Cu;
        // 0x169a70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A74u;
        goto label_169a74;
    }
    ctx->pc = 0x169A6Cu;
    {
        const bool branch_taken_0x169a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x169a6c) {
            ctx->pc = 0x169A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169A6Cu;
            // 0x169a70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169AF0u;
            goto label_169af0;
        }
    }
    ctx->pc = 0x169A74u;
label_169a74:
    // 0x169a74: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x169a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_169a78:
    // 0x169a78: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x169a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_169a7c:
    // 0x169a7c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x169a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_169a80:
    // 0x169a80: 0xc06c948  jal         func_1B2520
label_169a84:
    if (ctx->pc == 0x169A84u) {
        ctx->pc = 0x169A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A80u;
        // 0x169a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A88u;
        goto label_169a88;
    }
    ctx->pc = 0x169A80u;
    SET_GPR_U32(ctx, 31, 0x169A88u);
    ctx->pc = 0x169A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A80u;
    // 0x169a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2520u, 0x169A80u, 0x169A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A88u;
label_169a88:
    // 0x169a88: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_169a8c:
    // 0x169a8c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x169a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_169a90:
    // 0x169a90: 0xa0620290  sb          $v0, 0x290($v1)
    ctx->pc = 0x169a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 2));
label_169a94:
    // 0x169a94: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x169a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_169a98:
    // 0x169a98: 0x244502bc  addiu       $a1, $v0, 0x2BC
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
label_169a9c:
    // 0x169a9c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_169aa0:
    if (ctx->pc == 0x169AA0u) {
        ctx->pc = 0x169AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A9Cu;
        // 0x169aa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AA4u;
        goto label_169aa4;
    }
    ctx->pc = 0x169A9Cu;
    {
        const bool branch_taken_0x169a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A9Cu;
        // 0x169aa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a9c) {
            ctx->pc = 0x169AF0u;
            goto label_169af0;
        }
    }
    ctx->pc = 0x169AA4u;
label_169aa4:
    // 0x169aa4: 0x804202bc  lb          $v0, 0x2BC($v0)
    ctx->pc = 0x169aa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 700)));
label_169aa8:
    // 0x169aa8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_169aac:
    if (ctx->pc == 0x169AACu) {
        ctx->pc = 0x169AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AA8u;
        // 0x169aac: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AB0u;
        goto label_169ab0;
    }
    ctx->pc = 0x169AA8u;
    {
        const bool branch_taken_0x169aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AA8u;
        // 0x169aac: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169aa8) {
            ctx->pc = 0x169AECu;
            goto label_169aec;
        }
    }
    ctx->pc = 0x169AB0u;
label_169ab0:
    // 0x169ab0: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x169ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_169ab4:
    // 0x169ab4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x169ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_169ab8:
    // 0x169ab8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_169abc:
    // 0x169abc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x169abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_169ac0:
    // 0x169ac0: 0x40f809  jalr        $v0
label_169ac4:
    if (ctx->pc == 0x169AC4u) {
        ctx->pc = 0x169AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AC0u;
        // 0x169ac4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AC8u;
        goto label_169ac8;
    }
    ctx->pc = 0x169AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x169AC8u);
        ctx->pc = 0x169AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AC0u;
        // 0x169ac4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AC0u, 0x169AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169AC8u;
label_169ac8:
    // 0x169ac8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_169acc:
    if (ctx->pc == 0x169ACCu) {
        ctx->pc = 0x169ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AC8u;
        // 0x169acc: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AD0u;
        goto label_169ad0;
    }
    ctx->pc = 0x169AC8u;
    {
        const bool branch_taken_0x169ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AC8u;
        // 0x169acc: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ac8) {
            ctx->pc = 0x169AECu;
            goto label_169aec;
        }
    }
    ctx->pc = 0x169AD0u;
label_169ad0:
    // 0x169ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169ad4:
    // 0x169ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169ad8:
    // 0x169ad8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x169ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_169adc:
    // 0x169adc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x169adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_169ae0:
    // 0x169ae0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x169ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_169ae4:
    // 0x169ae4: 0x60f809  jalr        $v1
label_169ae8:
    if (ctx->pc == 0x169AE8u) {
        ctx->pc = 0x169AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AE4u;
        // 0x169ae8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AECu;
        goto label_169aec;
    }
    ctx->pc = 0x169AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x169AECu);
        ctx->pc = 0x169AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AE4u;
        // 0x169ae8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AE4u, 0x169AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169AECu;
label_169aec:
    // 0x169aec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x169aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_169af0:
    // 0x169af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169af4:
    // 0x169af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169af8:
    // 0x169af8: 0x3e00008  jr          $ra
label_169afc:
    if (ctx->pc == 0x169AFCu) {
        ctx->pc = 0x169AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AF8u;
        // 0x169afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B00u;
        goto label_fallthrough_0x169af8;
    }
    ctx->pc = 0x169AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AF8u;
        // 0x169afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169af8:
    ctx->pc = 0x169B00u;
}
