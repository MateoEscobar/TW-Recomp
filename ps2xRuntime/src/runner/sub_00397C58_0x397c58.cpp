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

// Function: sub_00397C58
// Address: 0x397c58 - 0x397e08
void sub_00397C58_0x397c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397C58_0x397c58");
#endif

    switch (ctx->pc) {
        case 0x397c58u: goto label_397c58;
        case 0x397c5cu: goto label_397c5c;
        case 0x397c60u: goto label_397c60;
        case 0x397c64u: goto label_397c64;
        case 0x397c68u: goto label_397c68;
        case 0x397c6cu: goto label_397c6c;
        case 0x397c70u: goto label_397c70;
        case 0x397c74u: goto label_397c74;
        case 0x397c78u: goto label_397c78;
        case 0x397c7cu: goto label_397c7c;
        case 0x397c80u: goto label_397c80;
        case 0x397c84u: goto label_397c84;
        case 0x397c88u: goto label_397c88;
        case 0x397c8cu: goto label_397c8c;
        case 0x397c90u: goto label_397c90;
        case 0x397c94u: goto label_397c94;
        case 0x397c98u: goto label_397c98;
        case 0x397c9cu: goto label_397c9c;
        case 0x397ca0u: goto label_397ca0;
        case 0x397ca4u: goto label_397ca4;
        case 0x397ca8u: goto label_397ca8;
        case 0x397cacu: goto label_397cac;
        case 0x397cb0u: goto label_397cb0;
        case 0x397cb4u: goto label_397cb4;
        case 0x397cb8u: goto label_397cb8;
        case 0x397cbcu: goto label_397cbc;
        case 0x397cc0u: goto label_397cc0;
        case 0x397cc4u: goto label_397cc4;
        case 0x397cc8u: goto label_397cc8;
        case 0x397cccu: goto label_397ccc;
        case 0x397cd0u: goto label_397cd0;
        case 0x397cd4u: goto label_397cd4;
        case 0x397cd8u: goto label_397cd8;
        case 0x397cdcu: goto label_397cdc;
        case 0x397ce0u: goto label_397ce0;
        case 0x397ce4u: goto label_397ce4;
        case 0x397ce8u: goto label_397ce8;
        case 0x397cecu: goto label_397cec;
        case 0x397cf0u: goto label_397cf0;
        case 0x397cf4u: goto label_397cf4;
        case 0x397cf8u: goto label_397cf8;
        case 0x397cfcu: goto label_397cfc;
        case 0x397d00u: goto label_397d00;
        case 0x397d04u: goto label_397d04;
        case 0x397d08u: goto label_397d08;
        case 0x397d0cu: goto label_397d0c;
        case 0x397d10u: goto label_397d10;
        case 0x397d14u: goto label_397d14;
        case 0x397d18u: goto label_397d18;
        case 0x397d1cu: goto label_397d1c;
        case 0x397d20u: goto label_397d20;
        case 0x397d24u: goto label_397d24;
        case 0x397d28u: goto label_397d28;
        case 0x397d2cu: goto label_397d2c;
        case 0x397d30u: goto label_397d30;
        case 0x397d34u: goto label_397d34;
        case 0x397d38u: goto label_397d38;
        case 0x397d3cu: goto label_397d3c;
        case 0x397d40u: goto label_397d40;
        case 0x397d44u: goto label_397d44;
        case 0x397d48u: goto label_397d48;
        case 0x397d4cu: goto label_397d4c;
        case 0x397d50u: goto label_397d50;
        case 0x397d54u: goto label_397d54;
        case 0x397d58u: goto label_397d58;
        case 0x397d5cu: goto label_397d5c;
        case 0x397d60u: goto label_397d60;
        case 0x397d64u: goto label_397d64;
        case 0x397d68u: goto label_397d68;
        case 0x397d6cu: goto label_397d6c;
        case 0x397d70u: goto label_397d70;
        case 0x397d74u: goto label_397d74;
        case 0x397d78u: goto label_397d78;
        case 0x397d7cu: goto label_397d7c;
        case 0x397d80u: goto label_397d80;
        case 0x397d84u: goto label_397d84;
        case 0x397d88u: goto label_397d88;
        case 0x397d8cu: goto label_397d8c;
        case 0x397d90u: goto label_397d90;
        case 0x397d94u: goto label_397d94;
        case 0x397d98u: goto label_397d98;
        case 0x397d9cu: goto label_397d9c;
        case 0x397da0u: goto label_397da0;
        case 0x397da4u: goto label_397da4;
        case 0x397da8u: goto label_397da8;
        case 0x397dacu: goto label_397dac;
        case 0x397db0u: goto label_397db0;
        case 0x397db4u: goto label_397db4;
        case 0x397db8u: goto label_397db8;
        case 0x397dbcu: goto label_397dbc;
        case 0x397dc0u: goto label_397dc0;
        case 0x397dc4u: goto label_397dc4;
        case 0x397dc8u: goto label_397dc8;
        case 0x397dccu: goto label_397dcc;
        case 0x397dd0u: goto label_397dd0;
        case 0x397dd4u: goto label_397dd4;
        case 0x397dd8u: goto label_397dd8;
        case 0x397ddcu: goto label_397ddc;
        case 0x397de0u: goto label_397de0;
        case 0x397de4u: goto label_397de4;
        case 0x397de8u: goto label_397de8;
        case 0x397decu: goto label_397dec;
        case 0x397df0u: goto label_397df0;
        case 0x397df4u: goto label_397df4;
        case 0x397df8u: goto label_397df8;
        case 0x397dfcu: goto label_397dfc;
        case 0x397e00u: goto label_397e00;
        case 0x397e04u: goto label_397e04;
        default: break;
    }

    ctx->pc = 0x397c58u;

label_397c58:
    // 0x397c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_397c5c:
    // 0x397c5c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x397c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_397c60:
    // 0x397c60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x397c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_397c64:
    // 0x397c64: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x397c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
label_397c68:
    // 0x397c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x397c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_397c6c:
    // 0x397c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x397c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_397c70:
    // 0x397c70: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x397c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_397c74:
    // 0x397c74: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x397c74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_397c78:
    // 0x397c78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x397c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_397c7c:
    // 0x397c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_397c80:
    // 0x397c80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x397c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_397c84:
    // 0x397c84: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x397c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_397c88:
    // 0x397c88: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_397c8c:
    if (ctx->pc == 0x397C8Cu) {
        ctx->pc = 0x397C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C88u;
        // 0x397c8c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397C90u;
        goto label_397c90;
    }
    ctx->pc = 0x397C88u;
    {
        const bool branch_taken_0x397c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C88u;
        // 0x397c8c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c88) {
            ctx->pc = 0x397D30u;
            goto label_397d30;
        }
    }
    ctx->pc = 0x397C90u;
label_397c90:
    // 0x397c90: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x397c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_397c94:
    // 0x397c94: 0x0  nop
    ctx->pc = 0x397c94u;
    // NOP
label_397c98:
    // 0x397c98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x397c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397c9c:
    // 0x397c9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_397ca0:
    // 0x397ca0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x397ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_397ca4:
    // 0x397ca4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x397ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_397ca8:
    // 0x397ca8: 0x40f809  jalr        $v0
label_397cac:
    if (ctx->pc == 0x397CACu) {
        ctx->pc = 0x397CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CA8u;
        // 0x397cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397CB0u;
        goto label_397cb0;
    }
    ctx->pc = 0x397CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x397CB0u);
        ctx->pc = 0x397CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CA8u;
        // 0x397cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397CA8u, 0x397CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397CB0u;
label_397cb0:
    // 0x397cb0: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_397cb4:
    if (ctx->pc == 0x397CB4u) {
        ctx->pc = 0x397CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CB0u;
        // 0x397cb4: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397CB8u;
        goto label_397cb8;
    }
    ctx->pc = 0x397CB0u;
    {
        const bool branch_taken_0x397cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x397cb0) {
            ctx->pc = 0x397CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397CB0u;
            // 0x397cb4: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397D28u;
            goto label_397d28;
        }
    }
    ctx->pc = 0x397CB8u;
label_397cb8:
    // 0x397cb8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x397cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_397cbc:
    // 0x397cbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x397cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397cc0:
    // 0x397cc0: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_397cc4:
    if (ctx->pc == 0x397CC4u) {
        ctx->pc = 0x397CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CC0u;
        // 0x397cc4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397CC8u;
        goto label_397cc8;
    }
    ctx->pc = 0x397CC0u;
    {
        const bool branch_taken_0x397cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x397CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CC0u;
        // 0x397cc4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397cc0) {
            ctx->pc = 0x397D24u;
            goto label_397d24;
        }
    }
    ctx->pc = 0x397CC8u;
label_397cc8:
    // 0x397cc8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x397cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_397ccc:
    // 0x397ccc: 0x0  nop
    ctx->pc = 0x397cccu;
    // NOP
label_397cd0:
    // 0x397cd0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x397cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_397cd4:
    // 0x397cd4: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x397cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_397cd8:
    // 0x397cd8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x397cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_397cdc:
    // 0x397cdc: 0x1470000d  bne         $v1, $s0, . + 4 + (0xD << 2)
label_397ce0:
    if (ctx->pc == 0x397CE0u) {
        ctx->pc = 0x397CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CDCu;
        // 0x397ce0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397CE4u;
        goto label_397ce4;
    }
    ctx->pc = 0x397CDCu;
    {
        const bool branch_taken_0x397cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x397CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CDCu;
        // 0x397ce0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397cdc) {
            ctx->pc = 0x397D14u;
            goto label_397d14;
        }
    }
    ctx->pc = 0x397CE4u;
label_397ce4:
    // 0x397ce4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x397ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_397ce8:
    // 0x397ce8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x397ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_397cec:
    // 0x397cec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x397cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_397cf0:
    // 0x397cf0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x397cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_397cf4:
    // 0x397cf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x397cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_397cf8:
    // 0x397cf8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x397cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_397cfc:
    // 0x397cfc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x397cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_397d00:
    // 0x397d00: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x397d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_397d04:
    // 0x397d04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x397d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_397d08:
    // 0x397d08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x397d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_397d0c:
    // 0x397d0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_397d10:
    if (ctx->pc == 0x397D10u) {
        ctx->pc = 0x397D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D0Cu;
        // 0x397d10: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397D14u;
        goto label_397d14;
    }
    ctx->pc = 0x397D0Cu;
    {
        const bool branch_taken_0x397d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D0Cu;
        // 0x397d10: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397d0c) {
            ctx->pc = 0x397D24u;
            goto label_397d24;
        }
    }
    ctx->pc = 0x397D14u;
label_397d14:
    // 0x397d14: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x397d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_397d18:
    // 0x397d18: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x397d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_397d1c:
    // 0x397d1c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_397d20:
    if (ctx->pc == 0x397D20u) {
        ctx->pc = 0x397D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D1Cu;
        // 0x397d20: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397D24u;
        goto label_397d24;
    }
    ctx->pc = 0x397D1Cu;
    {
        const bool branch_taken_0x397d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397d1c) {
            ctx->pc = 0x397D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397D1Cu;
            // 0x397d20: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397cd0;
        }
    }
    ctx->pc = 0x397D24u;
label_397d24:
    // 0x397d24: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x397d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_397d28:
    // 0x397d28: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_397d2c:
    if (ctx->pc == 0x397D2Cu) {
        ctx->pc = 0x397D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D28u;
        // 0x397d2c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397D30u;
        goto label_397d30;
    }
    ctx->pc = 0x397D28u;
    {
        const bool branch_taken_0x397d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397d28) {
            ctx->pc = 0x397D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397D28u;
            // 0x397d2c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397c98;
        }
    }
    ctx->pc = 0x397D30u;
label_397d30:
    // 0x397d30: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x397d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_397d34:
    // 0x397d34: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x397d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_397d38:
    // 0x397d38: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x397d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_397d3c:
    // 0x397d3c: 0x24c61188  addiu       $a2, $a2, 0x1188
    ctx->pc = 0x397d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4488));
label_397d40:
    // 0x397d40: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x397d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_397d44:
    // 0x397d44: 0x24070087  addiu       $a3, $zero, 0x87
    ctx->pc = 0x397d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_397d48:
    // 0x397d48: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x397d48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_397d4c:
    // 0x397d4c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x397d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_397d50:
    // 0x397d50: 0x26101158  addiu       $s0, $s0, 0x1158
    ctx->pc = 0x397d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4440));
label_397d54:
    // 0x397d54: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x397d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_397d58:
    // 0x397d58: 0x60f809  jalr        $v1
label_397d5c:
    if (ctx->pc == 0x397D5Cu) {
        ctx->pc = 0x397D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D58u;
        // 0x397d5c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397D60u;
        goto label_397d60;
    }
    ctx->pc = 0x397D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x397D60u);
        ctx->pc = 0x397D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D58u;
        // 0x397d5c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397D58u, 0x397D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397D60u;
label_397d60:
    // 0x397d60: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x397d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_397d64:
    // 0x397d64: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x397d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_397d68:
    // 0x397d68: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x397d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_397d6c:
    // 0x397d6c: 0xa6200018  sh          $zero, 0x18($s1)
    ctx->pc = 0x397d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 0));
label_397d70:
    // 0x397d70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x397d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_397d74:
    // 0x397d74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x397d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397d78:
    // 0x397d78: 0xa620001a  sh          $zero, 0x1A($s1)
    ctx->pc = 0x397d78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 0));
label_397d7c:
    // 0x397d7c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x397d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_397d80:
    // 0x397d80: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x397d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_397d84:
    // 0x397d84: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x397d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_397d88:
    // 0x397d88: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x397d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_397d8c:
    // 0x397d8c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x397d8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_397d90:
    // 0x397d90: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x397d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_397d94:
    // 0x397d94: 0x60f809  jalr        $v1
label_397d98:
    if (ctx->pc == 0x397D98u) {
        ctx->pc = 0x397D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D94u;
        // 0x397d98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397D9Cu;
        goto label_397d9c;
    }
    ctx->pc = 0x397D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x397D9Cu);
        ctx->pc = 0x397D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D94u;
        // 0x397d98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397D94u, 0x397D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397D9Cu;
label_397d9c:
    // 0x397d9c: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x397d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_397da0:
    // 0x397da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x397da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397da4:
    // 0x397da4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x397da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_397da8:
    // 0x397da8: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x397da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_397dac:
    // 0x397dac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x397dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_397db0:
    // 0x397db0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x397db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_397db4:
    // 0x397db4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x397db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_397db8:
    // 0x397db8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x397db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_397dbc:
    // 0x397dbc: 0x60f809  jalr        $v1
label_397dc0:
    if (ctx->pc == 0x397DC0u) {
        ctx->pc = 0x397DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DBCu;
        // 0x397dc0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397DC4u;
        goto label_397dc4;
    }
    ctx->pc = 0x397DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x397DC4u);
        ctx->pc = 0x397DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DBCu;
        // 0x397dc0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397DBCu, 0x397DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397DC4u;
label_397dc4:
    // 0x397dc4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x397dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_397dc8:
    // 0x397dc8: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x397dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_397dcc:
    // 0x397dcc: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x397dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_397dd0:
    // 0x397dd0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x397dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_397dd4:
    // 0x397dd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x397dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_397dd8:
    // 0x397dd8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x397dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_397ddc:
    // 0x397ddc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_397de0:
    if (ctx->pc == 0x397DE0u) {
        ctx->pc = 0x397DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DDCu;
        // 0x397de0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397DE4u;
        goto label_397de4;
    }
    ctx->pc = 0x397DDCu;
    {
        const bool branch_taken_0x397ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DDCu;
        // 0x397de0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ddc) {
            ctx->pc = 0x397DECu;
            goto label_397dec;
        }
    }
    ctx->pc = 0x397DE4u;
label_397de4:
    // 0x397de4: 0xc10b208  jal         func_42C820
label_397de8:
    if (ctx->pc == 0x397DE8u) {
        ctx->pc = 0x397DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DE4u;
        // 0x397de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397DECu;
        goto label_397dec;
    }
    ctx->pc = 0x397DE4u;
    SET_GPR_U32(ctx, 31, 0x397DECu);
    ctx->pc = 0x397DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397DE4u;
    // 0x397de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x397DE4u, 0x397DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397DECu;
label_397dec:
    // 0x397dec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x397decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_397df0:
    // 0x397df0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x397df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_397df4:
    // 0x397df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x397df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_397df8:
    // 0x397df8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x397df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_397dfc:
    // 0x397dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_397e00:
    // 0x397e00: 0x3e00008  jr          $ra
label_397e04:
    if (ctx->pc == 0x397E04u) {
        ctx->pc = 0x397E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E00u;
        // 0x397e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E08u;
        goto label_fallthrough_0x397e00;
    }
    ctx->pc = 0x397E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E00u;
        // 0x397e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x397e00:
    ctx->pc = 0x397E08u;
}
