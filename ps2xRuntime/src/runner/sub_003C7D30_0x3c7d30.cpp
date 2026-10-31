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

// Function: sub_003C7D30
// Address: 0x3c7d30 - 0x3c7de0
void sub_003C7D30_0x3c7d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7D30_0x3c7d30");
#endif

    switch (ctx->pc) {
        case 0x3c7d30u: goto label_3c7d30;
        case 0x3c7d34u: goto label_3c7d34;
        case 0x3c7d38u: goto label_3c7d38;
        case 0x3c7d3cu: goto label_3c7d3c;
        case 0x3c7d40u: goto label_3c7d40;
        case 0x3c7d44u: goto label_3c7d44;
        case 0x3c7d48u: goto label_3c7d48;
        case 0x3c7d4cu: goto label_3c7d4c;
        case 0x3c7d50u: goto label_3c7d50;
        case 0x3c7d54u: goto label_3c7d54;
        case 0x3c7d58u: goto label_3c7d58;
        case 0x3c7d5cu: goto label_3c7d5c;
        case 0x3c7d60u: goto label_3c7d60;
        case 0x3c7d64u: goto label_3c7d64;
        case 0x3c7d68u: goto label_3c7d68;
        case 0x3c7d6cu: goto label_3c7d6c;
        case 0x3c7d70u: goto label_3c7d70;
        case 0x3c7d74u: goto label_3c7d74;
        case 0x3c7d78u: goto label_3c7d78;
        case 0x3c7d7cu: goto label_3c7d7c;
        case 0x3c7d80u: goto label_3c7d80;
        case 0x3c7d84u: goto label_3c7d84;
        case 0x3c7d88u: goto label_3c7d88;
        case 0x3c7d8cu: goto label_3c7d8c;
        case 0x3c7d90u: goto label_3c7d90;
        case 0x3c7d94u: goto label_3c7d94;
        case 0x3c7d98u: goto label_3c7d98;
        case 0x3c7d9cu: goto label_3c7d9c;
        case 0x3c7da0u: goto label_3c7da0;
        case 0x3c7da4u: goto label_3c7da4;
        case 0x3c7da8u: goto label_3c7da8;
        case 0x3c7dacu: goto label_3c7dac;
        case 0x3c7db0u: goto label_3c7db0;
        case 0x3c7db4u: goto label_3c7db4;
        case 0x3c7db8u: goto label_3c7db8;
        case 0x3c7dbcu: goto label_3c7dbc;
        case 0x3c7dc0u: goto label_3c7dc0;
        case 0x3c7dc4u: goto label_3c7dc4;
        case 0x3c7dc8u: goto label_3c7dc8;
        case 0x3c7dccu: goto label_3c7dcc;
        case 0x3c7dd0u: goto label_3c7dd0;
        case 0x3c7dd4u: goto label_3c7dd4;
        case 0x3c7dd8u: goto label_3c7dd8;
        case 0x3c7ddcu: goto label_3c7ddc;
        default: break;
    }

    ctx->pc = 0x3c7d30u;

label_3c7d30:
    // 0x3c7d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c7d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c7d34:
    // 0x3c7d34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c7d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c7d38:
    // 0x3c7d38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c7d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c7d3c:
    // 0x3c7d3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c7d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d40:
    // 0x3c7d40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c7d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c7d44:
    // 0x3c7d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c7d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d48:
    // 0x3c7d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c7d4c:
    // 0x3c7d4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c7d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d50:
    // 0x3c7d50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c7d54:
    // 0x3c7d54: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c7d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c7d58:
    // 0x3c7d58: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c7d5c:
    // 0x3c7d5c: 0x40f809  jalr        $v0
label_3c7d60:
    if (ctx->pc == 0x3C7D60u) {
        ctx->pc = 0x3C7D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D5Cu;
        // 0x3c7d60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7D64u;
        goto label_3c7d64;
    }
    ctx->pc = 0x3C7D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C7D64u);
        ctx->pc = 0x3C7D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D5Cu;
        // 0x3c7d60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7D5Cu, 0x3C7D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C7D64u;
label_3c7d64:
    // 0x3c7d64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c7d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7d68:
    // 0x3c7d68: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3c7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c7d6c:
    // 0x3c7d6c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
label_3c7d70:
    if (ctx->pc == 0x3C7D70u) {
        ctx->pc = 0x3C7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D6Cu;
        // 0x3c7d70: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7D74u;
        goto label_3c7d74;
    }
    ctx->pc = 0x3C7D6Cu;
    {
        const bool branch_taken_0x3c7d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D6Cu;
        // 0x3c7d70: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d6c) {
            ctx->pc = 0x3C7DA0u;
            goto label_3c7da0;
        }
    }
    ctx->pc = 0x3C7D74u;
label_3c7d74:
    // 0x3c7d74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c7d78:
    if (ctx->pc == 0x3C7D78u) {
        ctx->pc = 0x3C7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D74u;
        // 0x3c7d78: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7D7Cu;
        goto label_3c7d7c;
    }
    ctx->pc = 0x3C7D74u;
    {
        const bool branch_taken_0x3c7d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D74u;
        // 0x3c7d78: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d74) {
            ctx->pc = 0x3C7D8Cu;
            goto label_3c7d8c;
        }
    }
    ctx->pc = 0x3C7D7Cu;
label_3c7d7c:
    // 0x3c7d7c: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_3c7d80:
    if (ctx->pc == 0x3C7D80u) {
        ctx->pc = 0x3C7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D7Cu;
        // 0x3c7d80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7D84u;
        goto label_3c7d84;
    }
    ctx->pc = 0x3C7D7Cu;
    {
        const bool branch_taken_0x3c7d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D7Cu;
        // 0x3c7d80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d7c) {
            ctx->pc = 0x3C7DC0u;
            goto label_3c7dc0;
        }
    }
    ctx->pc = 0x3C7D84u;
label_3c7d84:
    // 0x3c7d84: 0x10000012  b           . + 4 + (0x12 << 2)
label_3c7d88:
    if (ctx->pc == 0x3C7D88u) {
        ctx->pc = 0x3C7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D84u;
        // 0x3c7d88: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7D8Cu;
        goto label_3c7d8c;
    }
    ctx->pc = 0x3C7D84u;
    {
        const bool branch_taken_0x3c7d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D84u;
        // 0x3c7d88: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d84) {
            ctx->pc = 0x3C7DD0u;
            goto label_3c7dd0;
        }
    }
    ctx->pc = 0x3C7D8Cu;
label_3c7d8c:
    // 0x3c7d8c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3c7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c7d90:
    // 0x3c7d90: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_3c7d94:
    if (ctx->pc == 0x3C7D94u) {
        ctx->pc = 0x3C7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D90u;
        // 0x3c7d94: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7D98u;
        goto label_3c7d98;
    }
    ctx->pc = 0x3C7D90u;
    {
        const bool branch_taken_0x3c7d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D90u;
        // 0x3c7d94: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d90) {
            ctx->pc = 0x3C7DACu;
            goto label_3c7dac;
        }
    }
    ctx->pc = 0x3C7D98u;
label_3c7d98:
    // 0x3c7d98: 0x1000000d  b           . + 4 + (0xD << 2)
label_3c7d9c:
    if (ctx->pc == 0x3C7D9Cu) {
        ctx->pc = 0x3C7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D98u;
        // 0x3c7d9c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7DA0u;
        goto label_3c7da0;
    }
    ctx->pc = 0x3C7D98u;
    {
        const bool branch_taken_0x3c7d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D98u;
        // 0x3c7d9c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d98) {
            ctx->pc = 0x3C7DD0u;
            goto label_3c7dd0;
        }
    }
    ctx->pc = 0x3C7DA0u;
label_3c7da0:
    // 0x3c7da0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c7da4:
    // 0x3c7da4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7da8:
    if (ctx->pc == 0x3C7DA8u) {
        ctx->pc = 0x3C7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DA4u;
        // 0x3c7da8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7DACu;
        goto label_3c7dac;
    }
    ctx->pc = 0x3C7DA4u;
    {
        const bool branch_taken_0x3c7da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DA4u;
        // 0x3c7da8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7da4) {
            ctx->pc = 0x3C7DC8u;
            goto label_3c7dc8;
        }
    }
    ctx->pc = 0x3C7DACu;
label_3c7dac:
    // 0x3c7dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c7dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c7db0:
    // 0x3c7db0: 0xc0f1f3e  jal         func_3C7CF8
label_3c7db4:
    if (ctx->pc == 0x3C7DB4u) {
        ctx->pc = 0x3C7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DB0u;
        // 0x3c7db4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7DB8u;
        goto label_3c7db8;
    }
    ctx->pc = 0x3C7DB0u;
    SET_GPR_U32(ctx, 31, 0x3C7DB8u);
    ctx->pc = 0x3C7DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7DB0u;
    // 0x3c7db4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7CF8u, 0x3C7DB0u, 0x3C7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7DB8u;
label_3c7db8:
    // 0x3c7db8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c7dbc:
    if (ctx->pc == 0x3C7DBCu) {
        ctx->pc = 0x3C7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DB8u;
        // 0x3c7dbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7DC0u;
        goto label_3c7dc0;
    }
    ctx->pc = 0x3C7DB8u;
    {
        const bool branch_taken_0x3c7db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DB8u;
        // 0x3c7dbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7db8) {
            ctx->pc = 0x3C7DCCu;
            goto label_3c7dcc;
        }
    }
    ctx->pc = 0x3C7DC0u;
label_3c7dc0:
    // 0x3c7dc0: 0xc0e8616  jal         func_3A1858
label_3c7dc4:
    if (ctx->pc == 0x3C7DC4u) {
        ctx->pc = 0x3C7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DC0u;
        // 0x3c7dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7DC8u;
        goto label_3c7dc8;
    }
    ctx->pc = 0x3C7DC0u;
    SET_GPR_U32(ctx, 31, 0x3C7DC8u);
    ctx->pc = 0x3C7DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7DC0u;
    // 0x3c7dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3C7DC0u, 0x3C7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7DC8u;
label_3c7dc8:
    // 0x3c7dc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c7dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7dcc:
    // 0x3c7dcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c7dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7dd0:
    // 0x3c7dd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c7dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c7dd4:
    // 0x3c7dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c7dd8:
    // 0x3c7dd8: 0x3e00008  jr          $ra
label_3c7ddc:
    if (ctx->pc == 0x3C7DDCu) {
        ctx->pc = 0x3C7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DD8u;
        // 0x3c7ddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7DE0u;
        goto label_fallthrough_0x3c7dd8;
    }
    ctx->pc = 0x3C7DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DD8u;
        // 0x3c7ddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c7dd8:
    ctx->pc = 0x3C7DE0u;
}
