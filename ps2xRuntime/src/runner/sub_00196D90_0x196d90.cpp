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

// Function: sub_00196D90
// Address: 0x196d90 - 0x196ee0
void sub_00196D90_0x196d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196D90_0x196d90");
#endif

    switch (ctx->pc) {
        case 0x196d90u: goto label_196d90;
        case 0x196d94u: goto label_196d94;
        case 0x196d98u: goto label_196d98;
        case 0x196d9cu: goto label_196d9c;
        case 0x196da0u: goto label_196da0;
        case 0x196da4u: goto label_196da4;
        case 0x196da8u: goto label_196da8;
        case 0x196dacu: goto label_196dac;
        case 0x196db0u: goto label_196db0;
        case 0x196db4u: goto label_196db4;
        case 0x196db8u: goto label_196db8;
        case 0x196dbcu: goto label_196dbc;
        case 0x196dc0u: goto label_196dc0;
        case 0x196dc4u: goto label_196dc4;
        case 0x196dc8u: goto label_196dc8;
        case 0x196dccu: goto label_196dcc;
        case 0x196dd0u: goto label_196dd0;
        case 0x196dd4u: goto label_196dd4;
        case 0x196dd8u: goto label_196dd8;
        case 0x196ddcu: goto label_196ddc;
        case 0x196de0u: goto label_196de0;
        case 0x196de4u: goto label_196de4;
        case 0x196de8u: goto label_196de8;
        case 0x196decu: goto label_196dec;
        case 0x196df0u: goto label_196df0;
        case 0x196df4u: goto label_196df4;
        case 0x196df8u: goto label_196df8;
        case 0x196dfcu: goto label_196dfc;
        case 0x196e00u: goto label_196e00;
        case 0x196e04u: goto label_196e04;
        case 0x196e08u: goto label_196e08;
        case 0x196e0cu: goto label_196e0c;
        case 0x196e10u: goto label_196e10;
        case 0x196e14u: goto label_196e14;
        case 0x196e18u: goto label_196e18;
        case 0x196e1cu: goto label_196e1c;
        case 0x196e20u: goto label_196e20;
        case 0x196e24u: goto label_196e24;
        case 0x196e28u: goto label_196e28;
        case 0x196e2cu: goto label_196e2c;
        case 0x196e30u: goto label_196e30;
        case 0x196e34u: goto label_196e34;
        case 0x196e38u: goto label_196e38;
        case 0x196e3cu: goto label_196e3c;
        case 0x196e40u: goto label_196e40;
        case 0x196e44u: goto label_196e44;
        case 0x196e48u: goto label_196e48;
        case 0x196e4cu: goto label_196e4c;
        case 0x196e50u: goto label_196e50;
        case 0x196e54u: goto label_196e54;
        case 0x196e58u: goto label_196e58;
        case 0x196e5cu: goto label_196e5c;
        case 0x196e60u: goto label_196e60;
        case 0x196e64u: goto label_196e64;
        case 0x196e68u: goto label_196e68;
        case 0x196e6cu: goto label_196e6c;
        case 0x196e70u: goto label_196e70;
        case 0x196e74u: goto label_196e74;
        case 0x196e78u: goto label_196e78;
        case 0x196e7cu: goto label_196e7c;
        case 0x196e80u: goto label_196e80;
        case 0x196e84u: goto label_196e84;
        case 0x196e88u: goto label_196e88;
        case 0x196e8cu: goto label_196e8c;
        case 0x196e90u: goto label_196e90;
        case 0x196e94u: goto label_196e94;
        case 0x196e98u: goto label_196e98;
        case 0x196e9cu: goto label_196e9c;
        case 0x196ea0u: goto label_196ea0;
        case 0x196ea4u: goto label_196ea4;
        case 0x196ea8u: goto label_196ea8;
        case 0x196eacu: goto label_196eac;
        case 0x196eb0u: goto label_196eb0;
        case 0x196eb4u: goto label_196eb4;
        case 0x196eb8u: goto label_196eb8;
        case 0x196ebcu: goto label_196ebc;
        case 0x196ec0u: goto label_196ec0;
        case 0x196ec4u: goto label_196ec4;
        case 0x196ec8u: goto label_196ec8;
        case 0x196eccu: goto label_196ecc;
        case 0x196ed0u: goto label_196ed0;
        case 0x196ed4u: goto label_196ed4;
        case 0x196ed8u: goto label_196ed8;
        case 0x196edcu: goto label_196edc;
        default: break;
    }

    ctx->pc = 0x196d90u;

label_196d90:
    // 0x196d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x196d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_196d94:
    // 0x196d94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196d98:
    // 0x196d98: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x196d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_196d9c:
    // 0x196d9c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x196d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_196da0:
    // 0x196da0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x196da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_196da4:
    // 0x196da4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x196da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_196da8:
    // 0x196da8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_196dac:
    // 0x196dac: 0xc060b5c  jal         func_182D70
label_196db0:
    if (ctx->pc == 0x196DB0u) {
        ctx->pc = 0x196DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DACu;
        // 0x196db0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DB4u;
        goto label_196db4;
    }
    ctx->pc = 0x196DACu;
    SET_GPR_U32(ctx, 31, 0x196DB4u);
    ctx->pc = 0x196DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196DACu;
    // 0x196db0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D70u, 0x196DACu, 0x196DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DB4u;
label_196db4:
    // 0x196db4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_196db8:
    if (ctx->pc == 0x196DB8u) {
        ctx->pc = 0x196DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DB4u;
        // 0x196db8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DBCu;
        goto label_196dbc;
    }
    ctx->pc = 0x196DB4u;
    {
        const bool branch_taken_0x196db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196db4) {
            ctx->pc = 0x196DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196DB4u;
            // 0x196db8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196DC8u;
            goto label_196dc8;
        }
    }
    ctx->pc = 0x196DBCu;
label_196dbc:
    // 0x196dbc: 0xc065e40  jal         func_197900
label_196dc0:
    if (ctx->pc == 0x196DC0u) {
        ctx->pc = 0x196DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DBCu;
        // 0x196dc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DC4u;
        goto label_196dc4;
    }
    ctx->pc = 0x196DBCu;
    SET_GPR_U32(ctx, 31, 0x196DC4u);
    ctx->pc = 0x196DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196DBCu;
    // 0x196dc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197900u, 0x196DBCu, 0x196DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DC4u;
label_196dc4:
    // 0x196dc4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x196dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_196dc8:
    // 0x196dc8: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_196dcc:
    if (ctx->pc == 0x196DCCu) {
        ctx->pc = 0x196DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DC8u;
        // 0x196dcc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DD0u;
        goto label_196dd0;
    }
    ctx->pc = 0x196DC8u;
    {
        const bool branch_taken_0x196dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196dc8) {
            ctx->pc = 0x196DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196DC8u;
            // 0x196dcc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196EA0u;
            goto label_196ea0;
        }
    }
    ctx->pc = 0x196DD0u;
label_196dd0:
    // 0x196dd0: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_196dd4:
    // 0x196dd4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_196dd8:
    if (ctx->pc == 0x196DD8u) {
        ctx->pc = 0x196DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DD4u;
        // 0x196dd8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DDCu;
        goto label_196ddc;
    }
    ctx->pc = 0x196DD4u;
    {
        const bool branch_taken_0x196dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DD4u;
        // 0x196dd8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dd4) {
            ctx->pc = 0x196E0Cu;
            goto label_196e0c;
        }
    }
    ctx->pc = 0x196DDCu;
label_196ddc:
    // 0x196ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196de0:
    // 0x196de0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_196de4:
    if (ctx->pc == 0x196DE4u) {
        ctx->pc = 0x196DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DE0u;
        // 0x196de4: 0x8e82cd4c  lw          $v0, -0x32B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DE8u;
        goto label_196de8;
    }
    ctx->pc = 0x196DE0u;
    {
        const bool branch_taken_0x196de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x196DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DE0u;
        // 0x196de4: 0x8e82cd4c  lw          $v0, -0x32B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196de0) {
            ctx->pc = 0x196DF8u;
            goto label_196df8;
        }
    }
    ctx->pc = 0x196DE8u;
label_196de8:
    // 0x196de8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x196de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_196dec:
    // 0x196dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196df0:
    // 0x196df0: 0x10000004  b           . + 4 + (0x4 << 2)
label_196df4:
    if (ctx->pc == 0x196DF4u) {
        ctx->pc = 0x196DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DF0u;
        // 0x196df4: 0x8c441038  lw          $a0, 0x1038($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DF8u;
        goto label_196df8;
    }
    ctx->pc = 0x196DF0u;
    {
        const bool branch_taken_0x196df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DF0u;
        // 0x196df4: 0x8c441038  lw          $a0, 0x1038($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196df0) {
            ctx->pc = 0x196E04u;
            goto label_196e04;
        }
    }
    ctx->pc = 0x196DF8u;
label_196df8:
    // 0x196df8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x196df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_196dfc:
    // 0x196dfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196e00:
    // 0x196e00: 0x8c441034  lw          $a0, 0x1034($v0)
    ctx->pc = 0x196e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4148)));
label_196e04:
    // 0x196e04: 0xc11cb26  jal         func_472C98
label_196e08:
    if (ctx->pc == 0x196E08u) {
        ctx->pc = 0x196E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E04u;
        // 0x196e08: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E0Cu;
        goto label_196e0c;
    }
    ctx->pc = 0x196E04u;
    SET_GPR_U32(ctx, 31, 0x196E0Cu);
    ctx->pc = 0x196E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E04u;
    // 0x196e08: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C98u, 0x196E04u, 0x196E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E0Cu;
label_196e0c:
    // 0x196e0c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x196e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_196e10:
    // 0x196e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196e14:
    // 0x196e14: 0xc11a830  jal         func_46A0C0
label_196e18:
    if (ctx->pc == 0x196E18u) {
        ctx->pc = 0x196E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E14u;
        // 0x196e18: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E1Cu;
        goto label_196e1c;
    }
    ctx->pc = 0x196E14u;
    SET_GPR_U32(ctx, 31, 0x196E1Cu);
    ctx->pc = 0x196E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E14u;
    // 0x196e18: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x196E14u, 0x196E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E1Cu;
label_196e1c:
    // 0x196e1c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x196e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_196e20:
    // 0x196e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196e24:
    // 0x196e24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_196e28:
    // 0x196e28: 0xc0660d6  jal         func_198358
label_196e2c:
    if (ctx->pc == 0x196E2Cu) {
        ctx->pc = 0x196E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E28u;
        // 0x196e2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E30u;
        goto label_196e30;
    }
    ctx->pc = 0x196E28u;
    SET_GPR_U32(ctx, 31, 0x196E30u);
    ctx->pc = 0x196E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E28u;
    // 0x196e2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198358u, 0x196E28u, 0x196E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E30u;
label_196e30:
    // 0x196e30: 0x8e5127e4  lw          $s1, 0x27E4($s2)
    ctx->pc = 0x196e30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_196e34:
    // 0x196e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196e38:
    // 0x196e38: 0x8e84cd4c  lw          $a0, -0x32B4($s4)
    ctx->pc = 0x196e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954316)));
label_196e3c:
    // 0x196e3c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_196e40:
    // 0x196e40: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x196e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_196e44:
    // 0x196e44: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x196e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_196e48:
    // 0x196e48: 0xc061e6e  jal         func_1879B8
label_196e4c:
    if (ctx->pc == 0x196E4Cu) {
        ctx->pc = 0x196E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E48u;
        // 0x196e4c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E50u;
        goto label_196e50;
    }
    ctx->pc = 0x196E48u;
    SET_GPR_U32(ctx, 31, 0x196E50u);
    ctx->pc = 0x196E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E48u;
    // 0x196e4c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x196E48u, 0x196E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E50u;
label_196e50:
    // 0x196e50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x196e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_196e54:
    // 0x196e54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196e58:
    // 0x196e58: 0x60f809  jalr        $v1
label_196e5c:
    if (ctx->pc == 0x196E5Cu) {
        ctx->pc = 0x196E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E58u;
        // 0x196e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E60u;
        goto label_196e60;
    }
    ctx->pc = 0x196E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x196E60u);
        ctx->pc = 0x196E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E58u;
        // 0x196e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196E58u, 0x196E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196E60u;
label_196e60:
    // 0x196e60: 0xc113aea  jal         func_44EBA8
label_196e64:
    if (ctx->pc == 0x196E64u) {
        ctx->pc = 0x196E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E60u;
        // 0x196e64: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E68u;
        goto label_196e68;
    }
    ctx->pc = 0x196E60u;
    SET_GPR_U32(ctx, 31, 0x196E68u);
    ctx->pc = 0x196E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E60u;
    // 0x196e64: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44EBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EBA8u, 0x196E60u, 0x196E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E68u;
label_196e68:
    // 0x196e68: 0x8e5127e4  lw          $s1, 0x27E4($s2)
    ctx->pc = 0x196e68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_196e6c:
    // 0x196e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196e70:
    // 0x196e70: 0x8e84cd4c  lw          $a0, -0x32B4($s4)
    ctx->pc = 0x196e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954316)));
label_196e74:
    // 0x196e74: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x196e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_196e78:
    // 0x196e78: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x196e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_196e7c:
    // 0x196e7c: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x196e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_196e80:
    // 0x196e80: 0xc061e6e  jal         func_1879B8
label_196e84:
    if (ctx->pc == 0x196E84u) {
        ctx->pc = 0x196E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E80u;
        // 0x196e84: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E88u;
        goto label_196e88;
    }
    ctx->pc = 0x196E80u;
    SET_GPR_U32(ctx, 31, 0x196E88u);
    ctx->pc = 0x196E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E80u;
    // 0x196e84: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x196E80u, 0x196E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E88u;
label_196e88:
    // 0x196e88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x196e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_196e8c:
    // 0x196e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196e90:
    // 0x196e90: 0x60f809  jalr        $v1
label_196e94:
    if (ctx->pc == 0x196E94u) {
        ctx->pc = 0x196E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E90u;
        // 0x196e94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E98u;
        goto label_196e98;
    }
    ctx->pc = 0x196E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x196E98u);
        ctx->pc = 0x196E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E90u;
        // 0x196e94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196E90u, 0x196E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196E98u;
label_196e98:
    // 0x196e98: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x196e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_196e9c:
    // 0x196e9c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x196e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_196ea0:
    // 0x196ea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_196ea4:
    if (ctx->pc == 0x196EA4u) {
        ctx->pc = 0x196EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EA0u;
        // 0x196ea4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196EA8u;
        goto label_196ea8;
    }
    ctx->pc = 0x196EA0u;
    {
        const bool branch_taken_0x196ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EA0u;
        // 0x196ea4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ea0) {
            ctx->pc = 0x196EB8u;
            goto label_196eb8;
        }
    }
    ctx->pc = 0x196EA8u;
label_196ea8:
    // 0x196ea8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x196ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_196eac:
    // 0x196eac: 0xc060874  jal         func_1821D0
label_196eb0:
    if (ctx->pc == 0x196EB0u) {
        ctx->pc = 0x196EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EACu;
        // 0x196eb0: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196EB4u;
        goto label_196eb4;
    }
    ctx->pc = 0x196EACu;
    SET_GPR_U32(ctx, 31, 0x196EB4u);
    ctx->pc = 0x196EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EACu;
    // 0x196eb0: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1821D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1821D0u, 0x196EACu, 0x196EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EB4u;
label_196eb4:
    // 0x196eb4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x196eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_196eb8:
    // 0x196eb8: 0xa2600011  sb          $zero, 0x11($s3)
    ctx->pc = 0x196eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 17), (uint8_t)GPR_U32(ctx, 0));
label_196ebc:
    // 0x196ebc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x196ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196ec0:
    // 0x196ec0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x196ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196ec4:
    // 0x196ec4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x196ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_196ec8:
    // 0x196ec8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196ecc:
    // 0x196ecc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x196eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196ed0:
    // 0x196ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196ed4:
    // 0x196ed4: 0x3e00008  jr          $ra
label_196ed8:
    if (ctx->pc == 0x196ED8u) {
        ctx->pc = 0x196ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196ED4u;
        // 0x196ed8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196EDCu;
        goto label_196edc;
    }
    ctx->pc = 0x196ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196ED4u;
        // 0x196ed8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196EDCu;
label_196edc:
    // 0x196edc: 0x0  nop
    ctx->pc = 0x196edcu;
    // NOP
    ctx->pc = 0x196ee0u;
}
