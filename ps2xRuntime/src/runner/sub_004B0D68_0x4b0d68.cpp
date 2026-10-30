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

// Function: sub_004B0D68
// Address: 0x4b0d68 - 0x4b0e48
void sub_004B0D68_0x4b0d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0D68_0x4b0d68");
#endif

    switch (ctx->pc) {
        case 0x4b0d68u: goto label_4b0d68;
        case 0x4b0d6cu: goto label_4b0d6c;
        case 0x4b0d70u: goto label_4b0d70;
        case 0x4b0d74u: goto label_4b0d74;
        case 0x4b0d78u: goto label_4b0d78;
        case 0x4b0d7cu: goto label_4b0d7c;
        case 0x4b0d80u: goto label_4b0d80;
        case 0x4b0d84u: goto label_4b0d84;
        case 0x4b0d88u: goto label_4b0d88;
        case 0x4b0d8cu: goto label_4b0d8c;
        case 0x4b0d90u: goto label_4b0d90;
        case 0x4b0d94u: goto label_4b0d94;
        case 0x4b0d98u: goto label_4b0d98;
        case 0x4b0d9cu: goto label_4b0d9c;
        case 0x4b0da0u: goto label_4b0da0;
        case 0x4b0da4u: goto label_4b0da4;
        case 0x4b0da8u: goto label_4b0da8;
        case 0x4b0dacu: goto label_4b0dac;
        case 0x4b0db0u: goto label_4b0db0;
        case 0x4b0db4u: goto label_4b0db4;
        case 0x4b0db8u: goto label_4b0db8;
        case 0x4b0dbcu: goto label_4b0dbc;
        case 0x4b0dc0u: goto label_4b0dc0;
        case 0x4b0dc4u: goto label_4b0dc4;
        case 0x4b0dc8u: goto label_4b0dc8;
        case 0x4b0dccu: goto label_4b0dcc;
        case 0x4b0dd0u: goto label_4b0dd0;
        case 0x4b0dd4u: goto label_4b0dd4;
        case 0x4b0dd8u: goto label_4b0dd8;
        case 0x4b0ddcu: goto label_4b0ddc;
        case 0x4b0de0u: goto label_4b0de0;
        case 0x4b0de4u: goto label_4b0de4;
        case 0x4b0de8u: goto label_4b0de8;
        case 0x4b0decu: goto label_4b0dec;
        case 0x4b0df0u: goto label_4b0df0;
        case 0x4b0df4u: goto label_4b0df4;
        case 0x4b0df8u: goto label_4b0df8;
        case 0x4b0dfcu: goto label_4b0dfc;
        case 0x4b0e00u: goto label_4b0e00;
        case 0x4b0e04u: goto label_4b0e04;
        case 0x4b0e08u: goto label_4b0e08;
        case 0x4b0e0cu: goto label_4b0e0c;
        case 0x4b0e10u: goto label_4b0e10;
        case 0x4b0e14u: goto label_4b0e14;
        case 0x4b0e18u: goto label_4b0e18;
        case 0x4b0e1cu: goto label_4b0e1c;
        case 0x4b0e20u: goto label_4b0e20;
        case 0x4b0e24u: goto label_4b0e24;
        case 0x4b0e28u: goto label_4b0e28;
        case 0x4b0e2cu: goto label_4b0e2c;
        case 0x4b0e30u: goto label_4b0e30;
        case 0x4b0e34u: goto label_4b0e34;
        case 0x4b0e38u: goto label_4b0e38;
        case 0x4b0e3cu: goto label_4b0e3c;
        case 0x4b0e40u: goto label_4b0e40;
        case 0x4b0e44u: goto label_4b0e44;
        default: break;
    }

    ctx->pc = 0x4b0d68u;

label_4b0d68:
    // 0x4b0d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b0d6c:
    // 0x4b0d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b0d70:
    // 0x4b0d70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b0d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b0d74:
    // 0x4b0d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b0d78:
    // 0x4b0d78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b0d7c:
    // 0x4b0d7c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x4b0d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_4b0d80:
    // 0x4b0d80: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4b0d84:
    if (ctx->pc == 0x4B0D84u) {
        ctx->pc = 0x4B0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D80u;
        // 0x4b0d84: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D88u;
        goto label_4b0d88;
    }
    ctx->pc = 0x4B0D80u;
    {
        const bool branch_taken_0x4b0d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0d80) {
            ctx->pc = 0x4B0D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0D80u;
            // 0x4b0d84: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0DA0u;
            goto label_4b0da0;
        }
    }
    ctx->pc = 0x4B0D88u;
label_4b0d88:
    // 0x4b0d88: 0xc12c274  jal         func_4B09D0
label_4b0d8c:
    if (ctx->pc == 0x4B0D8Cu) {
        ctx->pc = 0x4B0D90u;
        goto label_4b0d90;
    }
    ctx->pc = 0x4B0D88u;
    SET_GPR_U32(ctx, 31, 0x4B0D90u);
    ctx->pc = 0x4B09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B09D0u, 0x4B0D88u, 0x4B0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0D90u;
label_4b0d90:
    // 0x4b0d90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0d94:
    // 0x4b0d94: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
label_4b0d98:
    if (ctx->pc == 0x4B0D98u) {
        ctx->pc = 0x4B0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D94u;
        // 0x4b0d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0D9Cu;
        goto label_4b0d9c;
    }
    ctx->pc = 0x4B0D94u;
    {
        const bool branch_taken_0x4b0d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D94u;
        // 0x4b0d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d94) {
            ctx->pc = 0x4B0E38u;
            goto label_4b0e38;
        }
    }
    ctx->pc = 0x4B0D9Cu;
label_4b0d9c:
    // 0x4b0d9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b0d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b0da0:
    // 0x4b0da0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b0da4:
    // 0x4b0da4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4b0da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b0da8:
    // 0x4b0da8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4b0dac:
    if (ctx->pc == 0x4B0DACu) {
        ctx->pc = 0x4B0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DA8u;
        // 0x4b0dac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0DB0u;
        goto label_4b0db0;
    }
    ctx->pc = 0x4B0DA8u;
    {
        const bool branch_taken_0x4b0da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0da8) {
            ctx->pc = 0x4B0DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0DA8u;
            // 0x4b0dac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0DC0u;
            goto label_4b0dc0;
        }
    }
    ctx->pc = 0x4B0DB0u;
label_4b0db0:
    // 0x4b0db0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b0db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b0db4:
    // 0x4b0db4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4b0db8:
    // 0x4b0db8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4b0dbc:
    if (ctx->pc == 0x4B0DBCu) {
        ctx->pc = 0x4B0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DB8u;
        // 0x4b0dbc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0DC0u;
        goto label_4b0dc0;
    }
    ctx->pc = 0x4B0DB8u;
    {
        const bool branch_taken_0x4b0db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DB8u;
        // 0x4b0dbc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0db8) {
            ctx->pc = 0x4B0E38u;
            goto label_4b0e38;
        }
    }
    ctx->pc = 0x4B0DC0u;
label_4b0dc0:
    // 0x4b0dc0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b0dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_4b0dc4:
    // 0x4b0dc4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4b0dc8:
    if (ctx->pc == 0x4B0DC8u) {
        ctx->pc = 0x4B0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DC4u;
        // 0x4b0dc8: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0DCCu;
        goto label_4b0dcc;
    }
    ctx->pc = 0x4B0DC4u;
    {
        const bool branch_taken_0x4b0dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0dc4) {
            ctx->pc = 0x4B0DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0DC4u;
            // 0x4b0dc8: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0DF8u;
            goto label_4b0df8;
        }
    }
    ctx->pc = 0x4B0DCCu;
label_4b0dcc:
    // 0x4b0dcc: 0xc12c258  jal         func_4B0960
label_4b0dd0:
    if (ctx->pc == 0x4B0DD0u) {
        ctx->pc = 0x4B0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DCCu;
        // 0x4b0dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0DD4u;
        goto label_4b0dd4;
    }
    ctx->pc = 0x4B0DCCu;
    SET_GPR_U32(ctx, 31, 0x4B0DD4u);
    ctx->pc = 0x4B0DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0DCCu;
    // 0x4b0dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0960u, 0x4B0DCCu, 0x4B0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0DD4u;
label_4b0dd4:
    // 0x4b0dd4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b0dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b0dd8:
    // 0x4b0dd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b0ddc:
    // 0x4b0ddc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4b0ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b0de0:
    // 0x4b0de0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4b0de4:
    if (ctx->pc == 0x4B0DE4u) {
        ctx->pc = 0x4B0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DE0u;
        // 0x4b0de4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0DE8u;
        goto label_4b0de8;
    }
    ctx->pc = 0x4B0DE0u;
    {
        const bool branch_taken_0x4b0de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0de0) {
            ctx->pc = 0x4B0DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0DE0u;
            // 0x4b0de4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0DF8u;
            goto label_4b0df8;
        }
    }
    ctx->pc = 0x4B0DE8u;
label_4b0de8:
    // 0x4b0de8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b0de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b0dec:
    // 0x4b0dec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b0decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4b0df0:
    // 0x4b0df0: 0x10000011  b           . + 4 + (0x11 << 2)
label_4b0df4:
    if (ctx->pc == 0x4B0DF4u) {
        ctx->pc = 0x4B0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DF0u;
        // 0x4b0df4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0DF8u;
        goto label_4b0df8;
    }
    ctx->pc = 0x4B0DF0u;
    {
        const bool branch_taken_0x4b0df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DF0u;
        // 0x4b0df4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0df0) {
            ctx->pc = 0x4B0E38u;
            goto label_4b0e38;
        }
    }
    ctx->pc = 0x4B0DF8u;
label_4b0df8:
    // 0x4b0df8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4b0dfc:
    if (ctx->pc == 0x4B0DFCu) {
        ctx->pc = 0x4B0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DF8u;
        // 0x4b0dfc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0E00u;
        goto label_4b0e00;
    }
    ctx->pc = 0x4B0DF8u;
    {
        const bool branch_taken_0x4b0df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0df8) {
            ctx->pc = 0x4B0DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0DF8u;
            // 0x4b0dfc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0E18u;
            goto label_4b0e18;
        }
    }
    ctx->pc = 0x4B0E00u;
label_4b0e00:
    // 0x4b0e00: 0xc12c2be  jal         func_4B0AF8
label_4b0e04:
    if (ctx->pc == 0x4B0E04u) {
        ctx->pc = 0x4B0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E00u;
        // 0x4b0e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0E08u;
        goto label_4b0e08;
    }
    ctx->pc = 0x4B0E00u;
    SET_GPR_U32(ctx, 31, 0x4B0E08u);
    ctx->pc = 0x4B0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0E00u;
    // 0x4b0e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0AF8u, 0x4B0E00u, 0x4B0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0E08u;
label_4b0e08:
    // 0x4b0e08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4b0e0c:
    if (ctx->pc == 0x4B0E0Cu) {
        ctx->pc = 0x4B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E08u;
        // 0x4b0e0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0E10u;
        goto label_4b0e10;
    }
    ctx->pc = 0x4B0E08u;
    {
        const bool branch_taken_0x4b0e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E08u;
        // 0x4b0e0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0e08) {
            ctx->pc = 0x4B0E28u;
            goto label_4b0e28;
        }
    }
    ctx->pc = 0x4B0E10u;
label_4b0e10:
    // 0x4b0e10: 0x1000000a  b           . + 4 + (0xA << 2)
label_4b0e14:
    if (ctx->pc == 0x4B0E14u) {
        ctx->pc = 0x4B0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E10u;
        // 0x4b0e14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0E18u;
        goto label_4b0e18;
    }
    ctx->pc = 0x4B0E10u;
    {
        const bool branch_taken_0x4b0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E10u;
        // 0x4b0e14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0e10) {
            ctx->pc = 0x4B0E3Cu;
            goto label_4b0e3c;
        }
    }
    ctx->pc = 0x4B0E18u;
label_4b0e18:
    // 0x4b0e18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4b0e1c:
    if (ctx->pc == 0x4B0E1Cu) {
        ctx->pc = 0x4B0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E18u;
        // 0x4b0e1c: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0E20u;
        goto label_4b0e20;
    }
    ctx->pc = 0x4B0E18u;
    {
        const bool branch_taken_0x4b0e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0e18) {
            ctx->pc = 0x4B0E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0E18u;
            // 0x4b0e1c: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0E2Cu;
            goto label_4b0e2c;
        }
    }
    ctx->pc = 0x4B0E20u;
label_4b0e20:
    // 0x4b0e20: 0xc12c2a0  jal         func_4B0A80
label_4b0e24:
    if (ctx->pc == 0x4B0E24u) {
        ctx->pc = 0x4B0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E20u;
        // 0x4b0e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0E28u;
        goto label_4b0e28;
    }
    ctx->pc = 0x4B0E20u;
    SET_GPR_U32(ctx, 31, 0x4B0E28u);
    ctx->pc = 0x4B0E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0E20u;
    // 0x4b0e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0A80u, 0x4B0E20u, 0x4B0E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0E28u;
label_4b0e28:
    // 0x4b0e28: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b0e2c:
    // 0x4b0e2c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4b0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4b0e30:
    // 0x4b0e30: 0x40f809  jalr        $v0
label_4b0e34:
    if (ctx->pc == 0x4B0E34u) {
        ctx->pc = 0x4B0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E30u;
        // 0x4b0e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0E38u;
        goto label_4b0e38;
    }
    ctx->pc = 0x4B0E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B0E38u);
        ctx->pc = 0x4B0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E30u;
        // 0x4b0e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0E30u, 0x4B0E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B0E38u;
label_4b0e38:
    // 0x4b0e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b0e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b0e3c:
    // 0x4b0e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0e40:
    // 0x4b0e40: 0x3e00008  jr          $ra
label_4b0e44:
    if (ctx->pc == 0x4B0E44u) {
        ctx->pc = 0x4B0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E40u;
        // 0x4b0e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0E48u;
        goto label_fallthrough_0x4b0e40;
    }
    ctx->pc = 0x4B0E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E40u;
        // 0x4b0e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b0e40:
    ctx->pc = 0x4B0E48u;
}
