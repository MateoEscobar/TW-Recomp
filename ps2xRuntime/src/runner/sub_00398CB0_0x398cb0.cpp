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

// Function: sub_00398CB0
// Address: 0x398cb0 - 0x398df8
void sub_00398CB0_0x398cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398CB0_0x398cb0");
#endif

    switch (ctx->pc) {
        case 0x398cb0u: goto label_398cb0;
        case 0x398cb4u: goto label_398cb4;
        case 0x398cb8u: goto label_398cb8;
        case 0x398cbcu: goto label_398cbc;
        case 0x398cc0u: goto label_398cc0;
        case 0x398cc4u: goto label_398cc4;
        case 0x398cc8u: goto label_398cc8;
        case 0x398cccu: goto label_398ccc;
        case 0x398cd0u: goto label_398cd0;
        case 0x398cd4u: goto label_398cd4;
        case 0x398cd8u: goto label_398cd8;
        case 0x398cdcu: goto label_398cdc;
        case 0x398ce0u: goto label_398ce0;
        case 0x398ce4u: goto label_398ce4;
        case 0x398ce8u: goto label_398ce8;
        case 0x398cecu: goto label_398cec;
        case 0x398cf0u: goto label_398cf0;
        case 0x398cf4u: goto label_398cf4;
        case 0x398cf8u: goto label_398cf8;
        case 0x398cfcu: goto label_398cfc;
        case 0x398d00u: goto label_398d00;
        case 0x398d04u: goto label_398d04;
        case 0x398d08u: goto label_398d08;
        case 0x398d0cu: goto label_398d0c;
        case 0x398d10u: goto label_398d10;
        case 0x398d14u: goto label_398d14;
        case 0x398d18u: goto label_398d18;
        case 0x398d1cu: goto label_398d1c;
        case 0x398d20u: goto label_398d20;
        case 0x398d24u: goto label_398d24;
        case 0x398d28u: goto label_398d28;
        case 0x398d2cu: goto label_398d2c;
        case 0x398d30u: goto label_398d30;
        case 0x398d34u: goto label_398d34;
        case 0x398d38u: goto label_398d38;
        case 0x398d3cu: goto label_398d3c;
        case 0x398d40u: goto label_398d40;
        case 0x398d44u: goto label_398d44;
        case 0x398d48u: goto label_398d48;
        case 0x398d4cu: goto label_398d4c;
        case 0x398d50u: goto label_398d50;
        case 0x398d54u: goto label_398d54;
        case 0x398d58u: goto label_398d58;
        case 0x398d5cu: goto label_398d5c;
        case 0x398d60u: goto label_398d60;
        case 0x398d64u: goto label_398d64;
        case 0x398d68u: goto label_398d68;
        case 0x398d6cu: goto label_398d6c;
        case 0x398d70u: goto label_398d70;
        case 0x398d74u: goto label_398d74;
        case 0x398d78u: goto label_398d78;
        case 0x398d7cu: goto label_398d7c;
        case 0x398d80u: goto label_398d80;
        case 0x398d84u: goto label_398d84;
        case 0x398d88u: goto label_398d88;
        case 0x398d8cu: goto label_398d8c;
        case 0x398d90u: goto label_398d90;
        case 0x398d94u: goto label_398d94;
        case 0x398d98u: goto label_398d98;
        case 0x398d9cu: goto label_398d9c;
        case 0x398da0u: goto label_398da0;
        case 0x398da4u: goto label_398da4;
        case 0x398da8u: goto label_398da8;
        case 0x398dacu: goto label_398dac;
        case 0x398db0u: goto label_398db0;
        case 0x398db4u: goto label_398db4;
        case 0x398db8u: goto label_398db8;
        case 0x398dbcu: goto label_398dbc;
        case 0x398dc0u: goto label_398dc0;
        case 0x398dc4u: goto label_398dc4;
        case 0x398dc8u: goto label_398dc8;
        case 0x398dccu: goto label_398dcc;
        case 0x398dd0u: goto label_398dd0;
        case 0x398dd4u: goto label_398dd4;
        case 0x398dd8u: goto label_398dd8;
        case 0x398ddcu: goto label_398ddc;
        case 0x398de0u: goto label_398de0;
        case 0x398de4u: goto label_398de4;
        case 0x398de8u: goto label_398de8;
        case 0x398decu: goto label_398dec;
        case 0x398df0u: goto label_398df0;
        case 0x398df4u: goto label_398df4;
        default: break;
    }

    ctx->pc = 0x398cb0u;

label_398cb0:
    // 0x398cb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x398cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_398cb4:
    // 0x398cb4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x398cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_398cb8:
    // 0x398cb8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x398cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_398cbc:
    // 0x398cbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x398cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398cc0:
    // 0x398cc0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x398cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_398cc4:
    // 0x398cc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x398cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398cc8:
    // 0x398cc8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x398cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_398ccc:
    // 0x398ccc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x398cccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_398cd0:
    // 0x398cd0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x398cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_398cd4:
    // 0x398cd4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x398cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_398cd8:
    // 0x398cd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x398cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_398cdc:
    // 0x398cdc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x398cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_398ce0:
    // 0x398ce0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x398ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_398ce4:
    // 0x398ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_398ce8:
    // 0x398ce8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x398ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_398cec:
    // 0x398cec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x398cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_398cf0:
    // 0x398cf0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x398cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_398cf4:
    // 0x398cf4: 0x40f809  jalr        $v0
label_398cf8:
    if (ctx->pc == 0x398CF8u) {
        ctx->pc = 0x398CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CF4u;
        // 0x398cf8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398CFCu;
        goto label_398cfc;
    }
    ctx->pc = 0x398CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398CFCu);
        ctx->pc = 0x398CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CF4u;
        // 0x398cf8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398CF4u, 0x398CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398CFCu;
label_398cfc:
    // 0x398cfc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x398cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_398d00:
    // 0x398d00: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x398d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_398d04:
    // 0x398d04: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x398d04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_398d08:
    // 0x398d08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x398d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_398d0c:
    // 0x398d0c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_398d10:
    if (ctx->pc == 0x398D10u) {
        ctx->pc = 0x398D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D0Cu;
        // 0x398d10: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D14u;
        goto label_398d14;
    }
    ctx->pc = 0x398D0Cu;
    {
        const bool branch_taken_0x398d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D0Cu;
        // 0x398d10: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d0c) {
            ctx->pc = 0x398DC4u;
            goto label_398dc4;
        }
    }
    ctx->pc = 0x398D14u;
label_398d14:
    // 0x398d14: 0x3c13fffe  lui         $s3, 0xFFFE
    ctx->pc = 0x398d14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65534 << 16));
label_398d18:
    // 0x398d18: 0x3c14fffb  lui         $s4, 0xFFFB
    ctx->pc = 0x398d18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65531 << 16));
label_398d1c:
    // 0x398d1c: 0x3c15fffd  lui         $s5, 0xFFFD
    ctx->pc = 0x398d1cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65533 << 16));
label_398d20:
    // 0x398d20: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x398d20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_398d24:
    // 0x398d24: 0x3c170004  lui         $s7, 0x4
    ctx->pc = 0x398d24u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4 << 16));
label_398d28:
    // 0x398d28: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x398d28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_398d2c:
    // 0x398d2c: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x398d2cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
label_398d30:
    // 0x398d30: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x398d30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_398d34:
    // 0x398d34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x398d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398d38:
    // 0x398d38: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x398d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_398d3c:
    // 0x398d3c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x398d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_398d40:
    // 0x398d40: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x398d40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_398d44:
    // 0x398d44: 0x5465001b  bnel        $v1, $a1, . + 4 + (0x1B << 2)
label_398d48:
    if (ctx->pc == 0x398D48u) {
        ctx->pc = 0x398D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D44u;
        // 0x398d48: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D4Cu;
        goto label_398d4c;
    }
    ctx->pc = 0x398D44u;
    {
        const bool branch_taken_0x398d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x398d44) {
            ctx->pc = 0x398D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398D44u;
            // 0x398d48: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398DB4u;
            goto label_398db4;
        }
    }
    ctx->pc = 0x398D4Cu;
label_398d4c:
    // 0x398d4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x398d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_398d50:
    // 0x398d50: 0xc0e6b68  jal         func_39ADA0
label_398d54:
    if (ctx->pc == 0x398D54u) {
        ctx->pc = 0x398D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D50u;
        // 0x398d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D58u;
        goto label_398d58;
    }
    ctx->pc = 0x398D50u;
    SET_GPR_U32(ctx, 31, 0x398D58u);
    ctx->pc = 0x398D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D50u;
    // 0x398d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADA0u, 0x398D50u, 0x398D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D58u;
label_398d58:
    // 0x398d58: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x398d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_398d5c:
    // 0x398d5c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x398d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_398d60:
    // 0x398d60: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x398d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_398d64:
    // 0x398d64: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x398d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_398d68:
    // 0x398d68: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x398d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_398d6c:
    // 0x398d6c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x398d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_398d70:
    // 0x398d70: 0xa61e0024  sh          $fp, 0x24($s0)
    ctx->pc = 0x398d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 30));
label_398d74:
    // 0x398d74: 0x922267e9  lbu         $v0, 0x67E9($s1)
    ctx->pc = 0x398d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26601)));
label_398d78:
    // 0x398d78: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_398d7c:
    if (ctx->pc == 0x398D7Cu) {
        ctx->pc = 0x398D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D78u;
        // 0x398d7c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D80u;
        goto label_398d80;
    }
    ctx->pc = 0x398D78u;
    {
        const bool branch_taken_0x398d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D78u;
        // 0x398d7c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d78) {
            ctx->pc = 0x398DC8u;
            goto label_398dc8;
        }
    }
    ctx->pc = 0x398D80u;
label_398d80:
    // 0x398d80: 0x9623001c  lhu         $v1, 0x1C($s1)
    ctx->pc = 0x398d80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_398d84:
    // 0x398d84: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x398d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_398d88:
    // 0x398d88: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_398d8c:
    if (ctx->pc == 0x398D8Cu) {
        ctx->pc = 0x398D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D88u;
        // 0x398d8c: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D90u;
        goto label_398d90;
    }
    ctx->pc = 0x398D88u;
    {
        const bool branch_taken_0x398d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398d88) {
            ctx->pc = 0x398D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398D88u;
            // 0x398d8c: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398DCCu;
            goto label_398dcc;
        }
    }
    ctx->pc = 0x398D90u;
label_398d90:
    // 0x398d90: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x398d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_398d94:
    // 0x398d94: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x398d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_398d98:
    // 0x398d98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_398d9c:
    if (ctx->pc == 0x398D9Cu) {
        ctx->pc = 0x398D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D98u;
        // 0x398d9c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DA0u;
        goto label_398da0;
    }
    ctx->pc = 0x398D98u;
    {
        const bool branch_taken_0x398d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D98u;
        // 0x398d9c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d98) {
            ctx->pc = 0x398DC8u;
            goto label_398dc8;
        }
    }
    ctx->pc = 0x398DA0u;
label_398da0:
    // 0x398da0: 0x2432823  subu        $a1, $s2, $v1
    ctx->pc = 0x398da0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_398da4:
    // 0x398da4: 0xc0e5e88  jal         func_397A20
label_398da8:
    if (ctx->pc == 0x398DA8u) {
        ctx->pc = 0x398DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DA4u;
        // 0x398da8: 0x24445780  addiu       $a0, $v0, 0x5780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DACu;
        goto label_398dac;
    }
    ctx->pc = 0x398DA4u;
    SET_GPR_U32(ctx, 31, 0x398DACu);
    ctx->pc = 0x398DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398DA4u;
    // 0x398da8: 0x24445780  addiu       $a0, $v0, 0x5780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A20u, 0x398DA4u, 0x398DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398DACu;
label_398dac:
    // 0x398dac: 0x10000006  b           . + 4 + (0x6 << 2)
label_398db0:
    if (ctx->pc == 0x398DB0u) {
        ctx->pc = 0x398DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DACu;
        // 0x398db0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DB4u;
        goto label_398db4;
    }
    ctx->pc = 0x398DACu;
    {
        const bool branch_taken_0x398dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DACu;
        // 0x398db0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dac) {
            ctx->pc = 0x398DC8u;
            goto label_398dc8;
        }
    }
    ctx->pc = 0x398DB4u;
label_398db4:
    // 0x398db4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x398db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_398db8:
    // 0x398db8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x398db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_398dbc:
    // 0x398dbc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_398dc0:
    if (ctx->pc == 0x398DC0u) {
        ctx->pc = 0x398DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DBCu;
        // 0x398dc0: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DC4u;
        goto label_398dc4;
    }
    ctx->pc = 0x398DBCu;
    {
        const bool branch_taken_0x398dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DBCu;
        // 0x398dc0: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dbc) {
            ctx->pc = 0x398D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398d38;
        }
    }
    ctx->pc = 0x398DC4u;
label_398dc4:
    // 0x398dc4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x398dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_398dc8:
    // 0x398dc8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x398dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_398dcc:
    // 0x398dcc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x398dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_398dd0:
    // 0x398dd0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x398dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_398dd4:
    // 0x398dd4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x398dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_398dd8:
    // 0x398dd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x398dd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_398ddc:
    // 0x398ddc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x398ddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_398de0:
    // 0x398de0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x398de0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_398de4:
    // 0x398de4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x398de4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398de8:
    // 0x398de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398dec:
    // 0x398dec: 0x3e00008  jr          $ra
label_398df0:
    if (ctx->pc == 0x398DF0u) {
        ctx->pc = 0x398DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DECu;
        // 0x398df0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DF4u;
        goto label_398df4;
    }
    ctx->pc = 0x398DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DECu;
        // 0x398df0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398DF4u;
label_398df4:
    // 0x398df4: 0x0  nop
    ctx->pc = 0x398df4u;
    // NOP
    ctx->pc = 0x398df8u;
}
