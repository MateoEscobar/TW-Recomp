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

// Function: sub_004B0C98
// Address: 0x4b0c98 - 0x4b0d68
void sub_004B0C98_0x4b0c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0C98_0x4b0c98");
#endif

    switch (ctx->pc) {
        case 0x4b0c98u: goto label_4b0c98;
        case 0x4b0c9cu: goto label_4b0c9c;
        case 0x4b0ca0u: goto label_4b0ca0;
        case 0x4b0ca4u: goto label_4b0ca4;
        case 0x4b0ca8u: goto label_4b0ca8;
        case 0x4b0cacu: goto label_4b0cac;
        case 0x4b0cb0u: goto label_4b0cb0;
        case 0x4b0cb4u: goto label_4b0cb4;
        case 0x4b0cb8u: goto label_4b0cb8;
        case 0x4b0cbcu: goto label_4b0cbc;
        case 0x4b0cc0u: goto label_4b0cc0;
        case 0x4b0cc4u: goto label_4b0cc4;
        case 0x4b0cc8u: goto label_4b0cc8;
        case 0x4b0cccu: goto label_4b0ccc;
        case 0x4b0cd0u: goto label_4b0cd0;
        case 0x4b0cd4u: goto label_4b0cd4;
        case 0x4b0cd8u: goto label_4b0cd8;
        case 0x4b0cdcu: goto label_4b0cdc;
        case 0x4b0ce0u: goto label_4b0ce0;
        case 0x4b0ce4u: goto label_4b0ce4;
        case 0x4b0ce8u: goto label_4b0ce8;
        case 0x4b0cecu: goto label_4b0cec;
        case 0x4b0cf0u: goto label_4b0cf0;
        case 0x4b0cf4u: goto label_4b0cf4;
        case 0x4b0cf8u: goto label_4b0cf8;
        case 0x4b0cfcu: goto label_4b0cfc;
        case 0x4b0d00u: goto label_4b0d00;
        case 0x4b0d04u: goto label_4b0d04;
        case 0x4b0d08u: goto label_4b0d08;
        case 0x4b0d0cu: goto label_4b0d0c;
        case 0x4b0d10u: goto label_4b0d10;
        case 0x4b0d14u: goto label_4b0d14;
        case 0x4b0d18u: goto label_4b0d18;
        case 0x4b0d1cu: goto label_4b0d1c;
        case 0x4b0d20u: goto label_4b0d20;
        case 0x4b0d24u: goto label_4b0d24;
        case 0x4b0d28u: goto label_4b0d28;
        case 0x4b0d2cu: goto label_4b0d2c;
        case 0x4b0d30u: goto label_4b0d30;
        case 0x4b0d34u: goto label_4b0d34;
        case 0x4b0d38u: goto label_4b0d38;
        case 0x4b0d3cu: goto label_4b0d3c;
        case 0x4b0d40u: goto label_4b0d40;
        case 0x4b0d44u: goto label_4b0d44;
        case 0x4b0d48u: goto label_4b0d48;
        case 0x4b0d4cu: goto label_4b0d4c;
        case 0x4b0d50u: goto label_4b0d50;
        case 0x4b0d54u: goto label_4b0d54;
        case 0x4b0d58u: goto label_4b0d58;
        case 0x4b0d5cu: goto label_4b0d5c;
        case 0x4b0d60u: goto label_4b0d60;
        case 0x4b0d64u: goto label_4b0d64;
        default: break;
    }

    ctx->pc = 0x4b0c98u;

label_4b0c98:
    // 0x4b0c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b0c9c:
    // 0x4b0c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b0ca0:
    // 0x4b0ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b0ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b0ca4:
    // 0x4b0ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b0ca8:
    // 0x4b0ca8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b0cac:
    // 0x4b0cac: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x4b0cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_4b0cb0:
    // 0x4b0cb0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4b0cb4:
    if (ctx->pc == 0x4B0CB4u) {
        ctx->pc = 0x4B0CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0CB0u;
        // 0x4b0cb4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0CB8u;
        goto label_4b0cb8;
    }
    ctx->pc = 0x4B0CB0u;
    {
        const bool branch_taken_0x4b0cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0cb0) {
            ctx->pc = 0x4B0CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0CB0u;
            // 0x4b0cb4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0CD0u;
            goto label_4b0cd0;
        }
    }
    ctx->pc = 0x4B0CB8u;
label_4b0cb8:
    // 0x4b0cb8: 0xc12c274  jal         func_4B09D0
label_4b0cbc:
    if (ctx->pc == 0x4B0CBCu) {
        ctx->pc = 0x4B0CC0u;
        goto label_4b0cc0;
    }
    ctx->pc = 0x4B0CB8u;
    SET_GPR_U32(ctx, 31, 0x4B0CC0u);
    ctx->pc = 0x4B09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B09D0u, 0x4B0CB8u, 0x4B0CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0CC0u;
label_4b0cc0:
    // 0x4b0cc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0cc4:
    // 0x4b0cc4: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
label_4b0cc8:
    if (ctx->pc == 0x4B0CC8u) {
        ctx->pc = 0x4B0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0CC4u;
        // 0x4b0cc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0CCCu;
        goto label_4b0ccc;
    }
    ctx->pc = 0x4B0CC4u;
    {
        const bool branch_taken_0x4b0cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0CC4u;
        // 0x4b0cc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0cc4) {
            ctx->pc = 0x4B0D54u;
            goto label_4b0d54;
        }
    }
    ctx->pc = 0x4B0CCCu;
label_4b0ccc:
    // 0x4b0ccc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b0cd0:
    // 0x4b0cd0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b0cd4:
    // 0x4b0cd4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4b0cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b0cd8:
    // 0x4b0cd8: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_4b0cdc:
    if (ctx->pc == 0x4B0CDCu) {
        ctx->pc = 0x4B0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0CD8u;
        // 0x4b0cdc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0CE0u;
        goto label_4b0ce0;
    }
    ctx->pc = 0x4B0CD8u;
    {
        const bool branch_taken_0x4b0cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0cd8) {
            ctx->pc = 0x4B0CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0CD8u;
            // 0x4b0cdc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0D54u;
            goto label_4b0d54;
        }
    }
    ctx->pc = 0x4B0CE0u;
label_4b0ce0:
    // 0x4b0ce0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b0ce4:
    // 0x4b0ce4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b0ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_4b0ce8:
    // 0x4b0ce8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4b0cec:
    if (ctx->pc == 0x4B0CECu) {
        ctx->pc = 0x4B0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0CE8u;
        // 0x4b0cec: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0CF0u;
        goto label_4b0cf0;
    }
    ctx->pc = 0x4B0CE8u;
    {
        const bool branch_taken_0x4b0ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0ce8) {
            ctx->pc = 0x4B0CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0CE8u;
            // 0x4b0cec: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0D14u;
            goto label_4b0d14;
        }
    }
    ctx->pc = 0x4B0CF0u;
label_4b0cf0:
    // 0x4b0cf0: 0xc12c258  jal         func_4B0960
label_4b0cf4:
    if (ctx->pc == 0x4B0CF4u) {
        ctx->pc = 0x4B0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0CF0u;
        // 0x4b0cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0CF8u;
        goto label_4b0cf8;
    }
    ctx->pc = 0x4B0CF0u;
    SET_GPR_U32(ctx, 31, 0x4B0CF8u);
    ctx->pc = 0x4B0CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0CF0u;
    // 0x4b0cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0960u, 0x4B0CF0u, 0x4B0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0CF8u;
label_4b0cf8:
    // 0x4b0cf8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b0cfc:
    // 0x4b0cfc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b0d00:
    // 0x4b0d00: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4b0d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b0d04:
    // 0x4b0d04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4b0d08:
    if (ctx->pc == 0x4B0D08u) {
        ctx->pc = 0x4B0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D04u;
        // 0x4b0d08: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D0Cu;
        goto label_4b0d0c;
    }
    ctx->pc = 0x4B0D04u;
    {
        const bool branch_taken_0x4b0d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0d04) {
            ctx->pc = 0x4B0D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0D04u;
            // 0x4b0d08: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0D14u;
            goto label_4b0d14;
        }
    }
    ctx->pc = 0x4B0D0Cu;
label_4b0d0c:
    // 0x4b0d0c: 0x10000011  b           . + 4 + (0x11 << 2)
label_4b0d10:
    if (ctx->pc == 0x4B0D10u) {
        ctx->pc = 0x4B0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D0Cu;
        // 0x4b0d10: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D14u;
        goto label_4b0d14;
    }
    ctx->pc = 0x4B0D0Cu;
    {
        const bool branch_taken_0x4b0d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D0Cu;
        // 0x4b0d10: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d0c) {
            ctx->pc = 0x4B0D54u;
            goto label_4b0d54;
        }
    }
    ctx->pc = 0x4B0D14u;
label_4b0d14:
    // 0x4b0d14: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4b0d18:
    if (ctx->pc == 0x4B0D18u) {
        ctx->pc = 0x4B0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D14u;
        // 0x4b0d18: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D1Cu;
        goto label_4b0d1c;
    }
    ctx->pc = 0x4B0D14u;
    {
        const bool branch_taken_0x4b0d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0d14) {
            ctx->pc = 0x4B0D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0D14u;
            // 0x4b0d18: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0D34u;
            goto label_4b0d34;
        }
    }
    ctx->pc = 0x4B0D1Cu;
label_4b0d1c:
    // 0x4b0d1c: 0xc12c2be  jal         func_4B0AF8
label_4b0d20:
    if (ctx->pc == 0x4B0D20u) {
        ctx->pc = 0x4B0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D1Cu;
        // 0x4b0d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D24u;
        goto label_4b0d24;
    }
    ctx->pc = 0x4B0D1Cu;
    SET_GPR_U32(ctx, 31, 0x4B0D24u);
    ctx->pc = 0x4B0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0D1Cu;
    // 0x4b0d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0AF8u, 0x4B0D1Cu, 0x4B0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0D24u;
label_4b0d24:
    // 0x4b0d24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4b0d28:
    if (ctx->pc == 0x4B0D28u) {
        ctx->pc = 0x4B0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D24u;
        // 0x4b0d28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D2Cu;
        goto label_4b0d2c;
    }
    ctx->pc = 0x4B0D24u;
    {
        const bool branch_taken_0x4b0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D24u;
        // 0x4b0d28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d24) {
            ctx->pc = 0x4B0D44u;
            goto label_4b0d44;
        }
    }
    ctx->pc = 0x4B0D2Cu;
label_4b0d2c:
    // 0x4b0d2c: 0x1000000a  b           . + 4 + (0xA << 2)
label_4b0d30:
    if (ctx->pc == 0x4B0D30u) {
        ctx->pc = 0x4B0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D2Cu;
        // 0x4b0d30: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D34u;
        goto label_4b0d34;
    }
    ctx->pc = 0x4B0D2Cu;
    {
        const bool branch_taken_0x4b0d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D2Cu;
        // 0x4b0d30: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d2c) {
            ctx->pc = 0x4B0D58u;
            goto label_4b0d58;
        }
    }
    ctx->pc = 0x4B0D34u;
label_4b0d34:
    // 0x4b0d34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4b0d38:
    if (ctx->pc == 0x4B0D38u) {
        ctx->pc = 0x4B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D34u;
        // 0x4b0d38: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D3Cu;
        goto label_4b0d3c;
    }
    ctx->pc = 0x4B0D34u;
    {
        const bool branch_taken_0x4b0d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0d34) {
            ctx->pc = 0x4B0D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0D34u;
            // 0x4b0d38: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0D48u;
            goto label_4b0d48;
        }
    }
    ctx->pc = 0x4B0D3Cu;
label_4b0d3c:
    // 0x4b0d3c: 0xc12c2a0  jal         func_4B0A80
label_4b0d40:
    if (ctx->pc == 0x4B0D40u) {
        ctx->pc = 0x4B0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D3Cu;
        // 0x4b0d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D44u;
        goto label_4b0d44;
    }
    ctx->pc = 0x4B0D3Cu;
    SET_GPR_U32(ctx, 31, 0x4B0D44u);
    ctx->pc = 0x4B0D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0D3Cu;
    // 0x4b0d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0A80u, 0x4B0D3Cu, 0x4B0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0D44u;
label_4b0d44:
    // 0x4b0d44: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b0d48:
    // 0x4b0d48: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4b0d4c:
    // 0x4b0d4c: 0x40f809  jalr        $v0
label_4b0d50:
    if (ctx->pc == 0x4B0D50u) {
        ctx->pc = 0x4B0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D4Cu;
        // 0x4b0d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D54u;
        goto label_4b0d54;
    }
    ctx->pc = 0x4B0D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B0D54u);
        ctx->pc = 0x4B0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D4Cu;
        // 0x4b0d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0D4Cu, 0x4B0D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B0D54u;
label_4b0d54:
    // 0x4b0d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b0d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b0d58:
    // 0x4b0d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0d5c:
    // 0x4b0d5c: 0x3e00008  jr          $ra
label_4b0d60:
    if (ctx->pc == 0x4B0D60u) {
        ctx->pc = 0x4B0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D5Cu;
        // 0x4b0d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D64u;
        goto label_4b0d64;
    }
    ctx->pc = 0x4B0D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D5Cu;
        // 0x4b0d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0D64u;
label_4b0d64:
    // 0x4b0d64: 0x0  nop
    ctx->pc = 0x4b0d64u;
    // NOP
    ctx->pc = 0x4b0d68u;
}
